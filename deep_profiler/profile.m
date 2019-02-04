%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2001, 2004-2009 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% Authors: conway, zs.
%
% This file defines the main data structures of the Mercury deep profiler,
% and predicates for accessing them. The main concern of the access predicates
% is ensuring the safety of array accesses.
%
% For historical reasons, all the top-level arrays (i.e. those directly
% contained in initial_deep and deep structures) have a dummy element
% at index 0; their first real element is at index 1. The arrays in
% proc_static and proc_dynamic structures, being reflections of arrays created
% in C code, start at index 0.
%
%-----------------------------------------------------------------------------%

:- module profile.
:- interface.

:- import_module exclude.
:- import_module measurements.
:- import_module mdbcomp.
:- import_module mdbcomp.program_representation.

:- import_module array.
:- import_module bool.
:- import_module list.
:- import_module map.
:- import_module maybe.

%-----------------------------------------------------------------------------%

:- type profile_stats
    --->    profile_stats(
                program_name            :: string,
                num_csd                 :: int,
                num_css                 :: int,
                num_pd                  :: int,
                num_ps                  :: int,
                ticks_per_sec           :: int,
                instrument_quanta       :: int,
                user_quanta             :: int,
                num_callseqs            :: int,
                word_size               :: int,
                canonical               :: bool
            ).

:- type initial_deep
    --->    initial_deep(
                init_profile_stats      :: profile_stats,
                init_root               :: proc_dynamic_ptr,

                % The following fields are the main arrays.
                % Each is indexed by its own xxx_ptr int.
                init_call_site_dynamics :: call_site_dynamics,
                init_proc_dynamics      :: proc_dynamics,
                init_call_site_statics  :: call_site_statics,
                init_proc_statics       :: proc_statics
            ).

:- type deep
    --->    deep(
                profile_stats           :: profile_stats,
                server_name_port        :: string,
                script_name             :: string,
                data_file_name          :: string,

                root                    :: proc_dynamic_ptr,

                % The following fields are the main arrays.
                % Each is indexed by its own xxx_ptr int.
                call_site_dynamics      :: call_site_dynamics,
                proc_dynamics           :: proc_dynamics,
                call_site_statics       :: call_site_statics,
                proc_statics            :: proc_statics,

                % The following fields give information about cliques.
                clique_index            :: array(clique_ptr),
                                        % index: proc_dynamic_ptr int
                clique_members          :: array(list(proc_dynamic_ptr)),
                                        % index: clique_ptr int
                clique_parents          :: array(call_site_dynamic_ptr),
                                        % index: clique_ptr int
                clique_maybe_child      :: array(maybe(clique_ptr)),
                                        % index: call_site_dynamic_ptr int

                % Reverse links.
                proc_callers            :: array(list(call_site_dynamic_ptr)),
                                        % index: proc_static_ptr int
                call_site_static_map    :: call_site_static_map,
                                        % index: call_site_dynamic_ptr int
                call_site_calls         :: array(map(proc_static_ptr,
                                            list(call_site_dynamic_ptr))),
                                        % index: call_site_static_ptr int

                % Propagated measurements.
                pd_own                  :: array(own_prof_info),
                pd_desc                 :: array(inherit_prof_info),
                csd_desc                :: array(inherit_prof_info),
                ps_own                  :: array(own_prof_info),
                ps_desc                 :: array(inherit_prof_info),
                css_own                 :: array(own_prof_info),
                css_desc                :: array(inherit_prof_info),

                % Additional propagated timing info to solve the problem
                % of undetected recursion through higher order calls,
                % which is caused by our use of zeroing.

                pd_comp_table           :: array(compensation_table),
                csd_comp_table          :: array(compensation_table),

                % Information about modules.
                module_data             :: map(string, module_data),

                % If this field is `no', then there is no (readable) contour
                % exclusion file. If this field is yes(MaybeExcludeFile),
                % then there are again two possibilities. The normal case is
                % MaybeExcludeFile = ok(ExcludeFile). The other case is
                % MaybeExcludeFile = error(ErrorMsg), which shows that the
                % contour exclusion file was malformed.
                exclude_contour_file    :: maybe(maybe_error(exclude_file)),

                % If this field is `no', then there is no (readable) proc
                % representation file. If this field is yes(MaybeProcRepFile),
                % then there are again two possibilities. The normal case is
                % MaybeProcRepFile = ok(ProcRepFile). The other case is
                % MaybeProcRepFile = error(ErrorMsg), which shows that the
                % proc representation file was malformed.
                procrep_file            :: maybe(maybe_error(prog_rep))
            ).

:- type compensation_table == map(proc_static_ptr, inherit_prof_info).

:- type module_data
    --->    module_data(
                % The total cost of the module.
                module_own              :: own_prof_info,
                module_desc             :: inherit_prof_info,

                % The procedures defined in the module.
                module_procs            :: list(proc_static_ptr)
            ).

%-----------------------------------------------------------------------------%

:- type proc_dynamics == array(proc_dynamic).
:- type proc_statics == array(proc_static).
:- type call_site_dynamics == array(call_site_dynamic).
:- type call_site_statics == array(call_site_static).
:- type call_site_static_map == array(call_site_static_ptr).

:- type proc_dynamic_ptr
    --->    proc_dynamic_ptr(int).

:- type proc_static_ptr
    --->    proc_static_ptr(int).

:- type call_site_dynamic_ptr
    --->    call_site_dynamic_ptr(int).

:- type call_site_static_ptr
    --->    call_site_static_ptr(int).

:- type clique_ptr
    --->    clique_ptr(int).

%-----------------------------------------------------------------------------%

:- type proc_dynamic
    --->    proc_dynamic(
                pd_proc_static  :: proc_static_ptr,
                pd_sites        :: array(call_site_array_slot)
            ).

:- type proc_static
    --->    proc_static(
                ps_id               :: string_proc_label, % procedure ID
                ps_decl_module      :: string,      % declaring module
                ps_refined_id       :: string,      % refined procedure id
                ps_raw_id           :: string,      % raw procedure id
                ps_file_name        :: string,      % file name of proc
                ps_line_number      :: int,         % line number of proc
                ps_in_interface     :: bool,        % is in interface?
                ps_sites            :: array(call_site_static_ptr),
                ps_coverage_points  :: array(coverage_point),
                ps_is_zeroed        :: is_zeroed
            ).

:- type call_site_dynamic
    --->    call_site_dynamic(
                csd_caller      :: proc_dynamic_ptr,
                csd_callee      :: proc_dynamic_ptr,
                csd_own_prof    :: own_prof_info
            ).

:- type call_site_static
    --->    call_site_static(
                css_container :: proc_static_ptr,
                               % The containing procedure.
                css_slot_num  :: int,
                               % Slot number in the containing procedure.
                css_kind      :: call_site_kind_and_callee,
                css_line_num  :: int,
                css_goal_path :: string
            ).

%-----------------------------------------------------------------------------%

:- type call_site_array_slot
    --->    slot_normal(call_site_dynamic_ptr)
    ;       slot_multi(is_zeroed, array(call_site_dynamic_ptr)).

:- type is_zeroed
    --->    zeroed
    ;       not_zeroed.

:- type call_site_kind
    --->    normal_call
    ;       special_call
    ;       higher_order_call
    ;       method_call
    ;       callback.

:- type call_site_kind_and_callee
    == call_site_kind_and_callee(proc_static_ptr).

:- type call_site_kind_and_callee(T)
    --->    normal_call_and_callee(
                % The identity of the callee.
                T,

                % A description of the type substitution, if any and if known.
                string
            )
    ;       special_call_and_no_callee
    ;       higher_order_call_and_no_callee
    ;       method_call_and_no_callee
    ;       callback_and_no_callee.

:- type call_site_kind_and_info(T)
    --->    normal_call_and_info(T)
    ;       special_call_and_no_info
    ;       higher_order_call_and_no_info
    ;       method_call_and_no_info
    ;       callback_and_no_info.

:- type call_site_callees
    --->    call_site_callees(
                list(proc_dynamic_ptr)
            ).

:- type call_site_caller
    --->    call_site_caller(
                call_site_static_ptr
            ).

    % This is similar to the coverage_point type in
    % mdbcomp/program_representation.m, however it includes an integer count
    % of how often execution reached this point in the program.
    %
:- type coverage_point
    --->    coverage_point(
                % The number of times execution reached this point,
                int,

                % Identifies the goal that this coverage point is near.
                % If cp_type is cp_type_branch_arm the coverage point is
                % immediately before this goal, otherwise it is immediately
                % after.

                goal_path,

                % The type of this coverage point.
                cp_type
            ).

:- pred is_call_site_kind(int::in, call_site_kind::out) is semidet.

%-----------------------------------------------------------------------------%

:- func decl_module(string_proc_label) = string.

:- func dummy_proc_id = string_proc_label.
:- func main_parent_proc_id = string_proc_label.

:- func dummy_proc_dynamic_ptr = proc_dynamic_ptr.
:- func dummy_proc_static_ptr = proc_static_ptr.
:- func dummy_call_site_dynamic_ptr = call_site_dynamic_ptr.
:- func dummy_call_site_static_ptr = call_site_static_ptr.
:- func dummy_clique_ptr = clique_ptr.

:- pred valid_clique_ptr(deep::in, clique_ptr::in) is semidet.
:- pred valid_proc_dynamic_ptr(deep::in, proc_dynamic_ptr::in) is semidet.
:- pred valid_proc_static_ptr(deep::in, proc_static_ptr::in) is semidet.
:- pred valid_call_site_dynamic_ptr(deep::in, call_site_dynamic_ptr::in)
    is semidet.
:- pred valid_call_site_static_ptr(deep::in, call_site_static_ptr::in)
    is semidet.

:- pred valid_proc_dynamic_ptr_raw(proc_dynamics::in, proc_dynamic_ptr::in)
    is semidet.
:- pred valid_proc_static_ptr_raw(proc_statics::in, proc_static_ptr::in)
    is semidet.
:- pred valid_call_site_dynamic_ptr_raw(call_site_dynamics::in,
    call_site_dynamic_ptr::in) is semidet.
:- pred valid_call_site_static_ptr_raw(call_site_statics::in,
    call_site_static_ptr::in) is semidet.

:- pred lookup_call_site_dynamics(call_site_dynamics::in,
    call_site_dynamic_ptr::in, call_site_dynamic::out) is det.
:- pred lookup_call_site_statics(call_site_statics::in,
    call_site_static_ptr::in, call_site_static::out) is det.
:- pred lookup_proc_dynamics(proc_dynamics::in,
    proc_dynamic_ptr::in, proc_dynamic::out) is det.
:- pred lookup_proc_statics(proc_statics::in,
    proc_static_ptr::in, proc_static::out) is det.
:- pred lookup_clique_index(array(clique_ptr)::in,
    proc_dynamic_ptr::in, clique_ptr::out) is det.
:- pred lookup_clique_members(array(list(proc_dynamic_ptr))::in,
    clique_ptr::in, list(proc_dynamic_ptr)::out) is det.
:- pred lookup_clique_parents(array(call_site_dynamic_ptr)::in,
    clique_ptr::in, call_site_dynamic_ptr::out) is det.
:- pred lookup_clique_maybe_child(array(maybe(clique_ptr))::in,
    call_site_dynamic_ptr::in, maybe(clique_ptr)::out) is det.
:- pred lookup_proc_callers(array(list(call_site_dynamic_ptr))::in,
    proc_static_ptr::in, list(call_site_dynamic_ptr)::out) is det.
:- pred lookup_call_site_static_map(call_site_static_map::in,
    call_site_dynamic_ptr::in, call_site_static_ptr::out) is det.
:- pred lookup_call_site_calls(array(map(proc_static_ptr,
    list(call_site_dynamic_ptr)))::in, call_site_static_ptr::in,
    map(proc_static_ptr, list(call_site_dynamic_ptr))::out) is det.
:- pred lookup_pd_own(array(own_prof_info)::in,
    proc_dynamic_ptr::in, own_prof_info::out) is det.
:- pred lookup_pd_desc(array(inherit_prof_info)::in,
    proc_dynamic_ptr::in, inherit_prof_info::out) is det.
:- pred lookup_csd_own(array(own_prof_info)::in,
    call_site_dynamic_ptr::in, own_prof_info::out) is det.
:- pred lookup_csd_desc(array(inherit_prof_info)::in,
    call_site_dynamic_ptr::in, inherit_prof_info::out) is det.
:- pred lookup_ps_own(array(own_prof_info)::in,
    proc_static_ptr::in, own_prof_info::out) is det.
:- pred lookup_ps_desc(array(inherit_prof_info)::in,
    proc_static_ptr::in, inherit_prof_info::out) is det.
:- pred lookup_css_own(array(own_prof_info)::in,
    call_site_static_ptr::in, own_prof_info::out) is det.
:- pred lookup_css_desc(array(inherit_prof_info)::in,
    call_site_static_ptr::in, inherit_prof_info::out) is det.
:- pred lookup_pd_comp_table(array(compensation_table)::in,
    proc_dynamic_ptr::in, compensation_table::out) is det.
:- pred lookup_csd_comp_table(array(compensation_table)::in,
    call_site_dynamic_ptr::in, compensation_table::out) is det.

:- pred deep_lookup_call_site_dynamics(deep::in, call_site_dynamic_ptr::in,
    call_site_dynamic::out) is det.
:- pred deep_lookup_call_site_statics(deep::in, call_site_static_ptr::in,
    call_site_static::out) is det.
:- pred deep_lookup_proc_dynamics(deep::in, proc_dynamic_ptr::in,
    proc_dynamic::out) is det.
:- pred deep_lookup_proc_statics(deep::in, proc_static_ptr::in,
    proc_static::out) is det.
:- pred deep_lookup_clique_index(deep::in, proc_dynamic_ptr::in,
    clique_ptr::out) is det.
:- pred deep_lookup_clique_members(deep::in, clique_ptr::in,
    list(proc_dynamic_ptr)::out) is det.
:- pred deep_lookup_clique_parents(deep::in, clique_ptr::in,
    call_site_dynamic_ptr::out) is det.
:- pred deep_lookup_clique_maybe_child(deep::in, call_site_dynamic_ptr::in,
    maybe(clique_ptr)::out) is det.
:- pred deep_lookup_proc_callers(deep::in, proc_static_ptr::in,
    list(call_site_dynamic_ptr)::out) is det.
:- pred deep_lookup_call_site_static_map(deep::in, call_site_dynamic_ptr::in,
    call_site_static_ptr::out) is det.
:- pred deep_lookup_call_site_calls(deep::in, call_site_static_ptr::in,
    map(proc_static_ptr, list(call_site_dynamic_ptr))::out) is det.
:- pred deep_lookup_proc_dynamic_sites(deep::in, proc_dynamic_ptr::in,
    array(call_site_array_slot)::out) is det.
:- pred deep_lookup_pd_comp_table(deep::in, proc_dynamic_ptr::in,
    compensation_table::out) is det.
:- pred deep_lookup_csd_comp_table(deep::in, call_site_dynamic_ptr::in,
    compensation_table::out) is det.

:- pred deep_lookup_pd_own(deep::in, proc_dynamic_ptr::in,
    own_prof_info::out) is det.
:- pred deep_lookup_pd_desc(deep::in, proc_dynamic_ptr::in,
    inherit_prof_info::out) is det.
:- pred deep_lookup_csd_own(deep::in, call_site_dynamic_ptr::in,
    own_prof_info::out) is det.
:- pred deep_lookup_csd_desc(deep::in, call_site_dynamic_ptr::in,
    inherit_prof_info::out) is det.
:- pred deep_lookup_ps_own(deep::in, proc_static_ptr::in,
    own_prof_info::out) is det.
:- pred deep_lookup_ps_desc(deep::in, proc_static_ptr::in,
    inherit_prof_info::out) is det.
:- pred deep_lookup_css_own(deep::in, call_site_static_ptr::in,
    own_prof_info::out) is det.
:- pred deep_lookup_css_desc(deep::in, call_site_static_ptr::in,
    inherit_prof_info::out) is det.

:- pred update_call_site_dynamics(call_site_dynamic_ptr::in,
    call_site_dynamic::in,
    call_site_dynamics::array_di, call_site_dynamics::array_uo) is det.
:- pred update_call_site_statics(call_site_static_ptr::in,
    call_site_static::in,
    call_site_statics::array_di, call_site_statics::array_uo) is det.
:- pred update_proc_dynamics(proc_dynamic_ptr::in, proc_dynamic::in,
    proc_dynamics::array_di, proc_dynamics::array_uo) is det.
:- pred update_proc_statics(proc_static_ptr::in, proc_static::in,
    proc_statics::array_di, proc_statics::array_uo) is det.
:- pred update_proc_callers(proc_static_ptr::in,
    list(call_site_dynamic_ptr)::in,
    array(list(call_site_dynamic_ptr))::array_di,
    array(list(call_site_dynamic_ptr))::array_uo) is det.
:- pred update_call_site_static_map(call_site_dynamic_ptr::in,
    call_site_static_ptr::in,
    call_site_static_map::array_di, call_site_static_map::array_uo) is det.
:- pred update_ps_own(proc_static_ptr::in, own_prof_info::in,
    array(own_prof_info)::array_di, array(own_prof_info)::array_uo) is det.
:- pred update_ps_desc(proc_static_ptr::in, inherit_prof_info::in,
    array(inherit_prof_info)::array_di, array(inherit_prof_info)::array_uo)
    is det.
:- pred update_css_own(call_site_static_ptr::in, own_prof_info::in,
    array(own_prof_info)::array_di, array(own_prof_info)::array_uo) is det.
:- pred update_css_desc(call_site_static_ptr::in, inherit_prof_info::in,
    array(inherit_prof_info)::array_di, array(inherit_prof_info)::array_uo)
    is det.

:- pred deep_update_csd_desc(call_site_dynamic_ptr::in, inherit_prof_info::in,
    deep::in, deep::out) is det.
:- pred deep_update_pd_desc(proc_dynamic_ptr::in, inherit_prof_info::in,
    deep::in, deep::out) is det.
:- pred deep_update_pd_own(proc_dynamic_ptr::in, own_prof_info::in,
    deep::in, deep::out) is det.
:- pred deep_update_pd_comp_table(proc_dynamic_ptr::in, compensation_table::in,
    deep::in, deep::out) is det.
:- pred deep_update_csd_comp_table(call_site_dynamic_ptr::in,
    compensation_table::in, deep::in, deep::out) is det.

:- pred extract_pd_sites(proc_dynamic::in, array(call_site_array_slot)::out)
    is det.
:- pred extract_csd_caller(call_site_dynamic::in, proc_dynamic_ptr::out)
    is det.
:- pred extract_csd_callee(call_site_dynamic::in, proc_dynamic_ptr::out)
    is det.
:- pred extract_csdptr_caller(initial_deep::in, call_site_dynamic_ptr::in,
    proc_dynamic_ptr::out) is det.
:- pred extract_csdptr_callee(initial_deep::in, call_site_dynamic_ptr::in,
    proc_dynamic_ptr::out) is det.
:- pred extract_ticks_per_sec(initial_deep::in, int::out) is det.
:- pred extract_instrument_quanta(initial_deep::in, int::out) is det.
:- pred extract_user_quanta(initial_deep::in, int::out) is det.
:- pred extract_num_callseqs(initial_deep::in, int::out) is det.
:- pred extract_max_css(initial_deep::in, int::out) is det.
:- pred extract_max_ps(initial_deep::in, int::out) is det.
:- pred extract_max_csd(initial_deep::in, int::out) is det.
:- pred extract_max_pd(initial_deep::in, int::out) is det.
:- pred extract_init_call_site_dynamics(initial_deep::in,
    call_site_dynamics::out) is det.
:- pred extract_init_call_site_statics(initial_deep::in,
    call_site_statics::out) is det.
:- pred extract_init_proc_dynamics(initial_deep::in,
    proc_dynamics::out) is det.
:- pred extract_init_proc_statics(initial_deep::in,
    proc_statics::out) is det.
:- pred extract_init_root(initial_deep::in,
    proc_dynamic_ptr::out) is det.

:- pred deep_extract_csdptr_caller(deep::in, call_site_dynamic_ptr::in,
    proc_dynamic_ptr::out) is det.
:- pred deep_extract_csdptr_callee(deep::in, call_site_dynamic_ptr::in,
    proc_dynamic_ptr::out) is det.

:- func wrap_proc_static_ptr(int) = proc_static_ptr.

:- func root_total_info(deep) = inherit_prof_info.
:- func root_desc_info(deep) = inherit_prof_info.
:- func root_own_info(deep) = own_prof_info.

%-----------------------------------------------------------------------------%

    % Lookup the program representation data.
    %
:- pred deep_get_progrep_det(deep::in, prog_rep::out) is det.

:- pred deep_get_progrep(deep::in, prog_rep::out) is semidet.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module mdbcomp.prim_data.
:- import_module array_util.

:- import_module int.
:- import_module require.
:- import_module string.

%-----------------------------------------------------------------------------%

:- pragma foreign_decl("C", "#include ""mercury_deep_profiling.h""").

:- pragma foreign_enum("C", call_site_kind/0, [
    normal_call         - "MR_callsite_normal_call",
    special_call        - "MR_callsite_special_call",
    higher_order_call   - "MR_callsite_higher_order_call",
    method_call         - "MR_callsite_method_call",
    callback            - "MR_callsite_callback"
]).

:- pragma foreign_proc("C",
    is_call_site_kind(Int::in, CallSite::out),
    [promise_pure, will_not_call_mercury, thread_safe],
"
    CallSite = (MR_CallSiteKind) Int;

    switch (CallSite) {
        case MR_callsite_normal_call:
        case MR_callsite_special_call:
        case MR_callsite_higher_order_call:
        case MR_callsite_method_call:
        case MR_callsite_callback:
            SUCCESS_INDICATOR = MR_TRUE;
            break;

        default:
            SUCCESS_INDICATOR = MR_FALSE;
            break;
    }
").

%-----------------------------------------------------------------------------%

decl_module(ProcId) = DeclModule :-
    (
        ProcId = str_ordinary_proc_label(_, DeclModule, _, _, _, _)
    ;
        ProcId = str_special_proc_label(_, DeclModule, _, _, _, _)
    ).

dummy_proc_id = str_ordinary_proc_label(pf_predicate, "unknown",
    "unknown", "unknown", -1, -1).

main_parent_proc_id = str_ordinary_proc_label(pf_predicate, "mercury_runtime",
    "mercury_runtime", "main_parent", 0, 0).

%-----------------------------------------------------------------------------%

dummy_proc_static_ptr = proc_static_ptr(-1).
dummy_proc_dynamic_ptr = proc_dynamic_ptr(-1).
dummy_call_site_static_ptr = call_site_static_ptr(-1).
dummy_call_site_dynamic_ptr = call_site_dynamic_ptr(-1).
dummy_clique_ptr = clique_ptr(-1).

%-----------------------------------------------------------------------------%

valid_clique_ptr(Deep, clique_ptr(CliqueNum)) :-
    CliqueNum > 0,
    array.in_bounds(Deep ^ clique_members, CliqueNum).

valid_proc_dynamic_ptr(Deep, proc_dynamic_ptr(PDI)) :-
    PDI > 0,
    array.in_bounds(Deep ^ proc_dynamics, PDI).

valid_proc_static_ptr(Deep, proc_static_ptr(PSI)) :-
    PSI > 0,
    array.in_bounds(Deep ^ proc_statics, PSI).

valid_call_site_dynamic_ptr(Deep, call_site_dynamic_ptr(CSDI)) :-
    CSDI > 0,
    array.in_bounds(Deep ^ call_site_dynamics, CSDI).

valid_call_site_static_ptr(Deep, call_site_static_ptr(CSSI)) :-
    CSSI > 0,
    array.in_bounds(Deep ^ call_site_statics, CSSI).

%-----------------------------------------------------------------------------%

valid_proc_dynamic_ptr_raw(ProcDynamics, proc_dynamic_ptr(PDI)) :-
    PDI > 0,
    array.in_bounds(ProcDynamics, PDI).

valid_proc_static_ptr_raw(ProcStatics, proc_static_ptr(PSI)) :-
    PSI > 0,
    array.in_bounds(ProcStatics, PSI).

valid_call_site_dynamic_ptr_raw(CallSiteDynamics,
        call_site_dynamic_ptr(CSDI)) :-
    CSDI > 0,
    array.in_bounds(CallSiteDynamics, CSDI).

valid_call_site_static_ptr_raw(CallSiteStatics, call_site_static_ptr(CSSI)) :-
    CSSI > 0,
    array.in_bounds(CallSiteStatics, CSSI).

%-----------------------------------------------------------------------------%

lookup_call_site_dynamics(CallSiteDynamics, CSDPtr, CSD) :-
    CSDPtr = call_site_dynamic_ptr(CSDI),
    ( CSDI > 0, array.in_bounds(CallSiteDynamics, CSDI) ->
        array.lookup(CallSiteDynamics, CSDI, CSD)
    ;
        error("lookup_call_site_dynamics: bounds error")
    ).

lookup_call_site_statics(CallSiteStatics, CSSPtr, CSS) :-
    CSSPtr = call_site_static_ptr(CSSI),
    ( CSSI > 0, array.in_bounds(CallSiteStatics, CSSI) ->
        array.lookup(CallSiteStatics, CSSI, CSS)
    ;
        error("lookup_call_site_statics: bounds error")
    ).

lookup_proc_dynamics(ProcDynamics, PDPtr, PD) :-
    PDPtr = proc_dynamic_ptr(PDI),
    ( PDI > 0, array.in_bounds(ProcDynamics, PDI) ->
        array.lookup(ProcDynamics, PDI, PD)
    ;
        error("lookup_proc_dynamics: bounds error")
    ).

lookup_proc_statics(ProcStatics, PSPtr, PS) :-
    PSPtr = proc_static_ptr(PSI),
    ( PSI > 0, array.in_bounds(ProcStatics, PSI) ->
        array.lookup(ProcStatics, PSI, PS)
    ;
        error("lookup_proc_statics: bounds error")
    ).

lookup_clique_index(CliqueIndex, PDPtr, CliquePtr) :-
    PDPtr = proc_dynamic_ptr(PDI),
    ( PDI > 0, array.in_bounds(CliqueIndex, PDI) ->
        array.lookup(CliqueIndex, PDI, CliquePtr)
    ;
        error("lookup_clique_index: bounds error")
    ).

lookup_clique_members(CliqueMembers, CliquePtr, PDPtrs) :-
    CliquePtr = clique_ptr(CI),
    ( array.in_bounds(CliqueMembers, CI) ->
        array.lookup(CliqueMembers, CI, PDPtrs)
    ;
        error("lookup_clique_members: bounds error")
    ).

lookup_clique_parents(CliqueParents, CliquePtr, CSDPtr) :-
    CliquePtr = clique_ptr(CI),
    ( array.in_bounds(CliqueParents, CI) ->
        array.lookup(CliqueParents, CI, CSDPtr)
    ;
        error("lookup_clique_parents: bounds error")
    ).

lookup_clique_maybe_child(CliqueMaybeChild, CSDPtr, MaybeCliquePtr) :-
    CSDPtr = call_site_dynamic_ptr(CSDI),
    ( CSDI > 0, array.in_bounds(CliqueMaybeChild, CSDI) ->
        array.lookup(CliqueMaybeChild, CSDI, MaybeCliquePtr)
    ;
        error("lookup_clique_maybe_child: bounds error")
    ).

lookup_proc_callers(ProcCallers, PSPtr, Callers) :-
    PSPtr = proc_static_ptr(PSI),
    ( PSI > 0, array.in_bounds(ProcCallers, PSI) ->
        array.lookup(ProcCallers, PSI, Callers)
    ;
        error("lookup_proc_callers: bounds error")
    ).

lookup_call_site_static_map(CallSiteStaticMap, CSDPtr, CSSPtr) :-
    CSDPtr = call_site_dynamic_ptr(CSDI),
    ( CSDI > 0, array.in_bounds(CallSiteStaticMap, CSDI) ->
        array.lookup(CallSiteStaticMap, CSDI, CSSPtr)
    ;
        error("lookup_call_site_static_map: bounds error")
    ).

lookup_call_site_calls(CallSiteCalls, CSSPtr, Calls) :-
    CSSPtr = call_site_static_ptr(CSSI),
    ( CSSI > 0, array.in_bounds(CallSiteCalls, CSSI) ->
        array.lookup(CallSiteCalls, CSSI, Calls)
    ;
        error("lookup_call_site_static_map: bounds error")
    ).

lookup_pd_own(PDOwns, PDPtr, PDOwn) :-
    PDPtr = proc_dynamic_ptr(PDI),
    ( PDI > 0, array.in_bounds(PDOwns, PDI) ->
        array.lookup(PDOwns, PDI, PDOwn)
    ;
        error("lookup_pd_own: bounds error")
    ).

lookup_pd_desc(PDDescs, PDPtr, PDDesc) :-
    PDPtr = proc_dynamic_ptr(PDI),
    ( PDI > 0, array.in_bounds(PDDescs, PDI) ->
        array.lookup(PDDescs, PDI, PDDesc)
    ;
        error("lookup_pd_desc: bounds error")
    ).

lookup_csd_own(CSDOwns, CSDPtr, CSDOwn) :-
    CSDPtr = call_site_dynamic_ptr(CSDI),
    ( CSDI > 0, array.in_bounds(CSDOwns, CSDI) ->
        array.lookup(CSDOwns, CSDI, CSDOwn)
    ;
        error("lookup_csd_own: bounds error")
    ).

lookup_csd_desc(CSDDescs, CSDPtr, CSDDesc) :-
    CSDPtr = call_site_dynamic_ptr(CSDI),
    ( CSDI > 0, array.in_bounds(CSDDescs, CSDI) ->
        array.lookup(CSDDescs, CSDI, CSDDesc)
    ;
        error("lookup_csd_desc: bounds error")
    ).

lookup_ps_own(PSOwns, PSPtr, PSOwn) :-
    PSPtr = proc_static_ptr(PSI),
    ( PSI > 0, array.in_bounds(PSOwns, PSI) ->
        array.lookup(PSOwns, PSI, PSOwn)
    ;
        error("lookup_ps_own: bounds error")
    ).

lookup_ps_desc(PSDescs, PSPtr, PSDesc) :-
    PSPtr = proc_static_ptr(PSI),
    ( PSI > 0, array.in_bounds(PSDescs, PSI) ->
        array.lookup(PSDescs, PSI, PSDesc)
    ;
        error("lookup_ps_desc: bounds error")
    ).

lookup_css_own(CSSOwns, CSSPtr, CSSOwn) :-
    CSSPtr = call_site_static_ptr(CSSI),
    ( CSSI > 0, array.in_bounds(CSSOwns, CSSI) ->
        array.lookup(CSSOwns, CSSI, CSSOwn)
    ;
        error("lookup_css_own: bounds error")
    ).

lookup_css_desc(CSSDescs, CSSPtr, CSSDesc) :-
    CSSPtr = call_site_static_ptr(CSSI),
    ( CSSI > 0, array.in_bounds(CSSDescs, CSSI) ->
        array.lookup(CSSDescs, CSSI, CSSDesc)
    ;
        error("lookup_css_desc: bounds error")
    ).

lookup_pd_comp_table(PDCompTables, PDPtr, CompTable) :-
    PDPtr = proc_dynamic_ptr(PDI),
    ( PDI > 0, array.in_bounds(PDCompTables, PDI) ->
        array.lookup(PDCompTables, PDI, CompTable)
    ;
        error("lookup_pd_comp_table: bounds error")
    ).

lookup_csd_comp_table(CSDCompTables, CSDPtr, CompTable) :-
    CSDPtr = call_site_dynamic_ptr(CSDI),
    ( CSDI > 0, array.in_bounds(CSDCompTables, CSDI) ->
        array.lookup(CSDCompTables, CSDI, CompTable)
    ;
        error("lookup_csd_comp_table: bounds error")
    ).

%-----------------------------------------------------------------------------%

deep_lookup_call_site_dynamics(Deep, CSDPtr, CSD) :-
    lookup_call_site_dynamics(Deep ^ call_site_dynamics, CSDPtr, CSD).

deep_lookup_call_site_statics(Deep, CSSPtr, CSS) :-
    lookup_call_site_statics(Deep ^ call_site_statics, CSSPtr, CSS).

deep_lookup_proc_dynamics(Deep, PDPtr, PD) :-
    lookup_proc_dynamics(Deep ^ proc_dynamics, PDPtr, PD).

deep_lookup_proc_statics(Deep, PSPtr, PS) :-
    lookup_proc_statics(Deep ^ proc_statics, PSPtr, PS).

deep_lookup_clique_index(Deep, PDPtr, CliquePtr) :-
    lookup_clique_index(Deep ^ clique_index, PDPtr, CliquePtr).

deep_lookup_clique_members(Deep, CliquePtr, PDPtrs) :-
    lookup_clique_members(Deep ^ clique_members, CliquePtr, PDPtrs).

deep_lookup_clique_parents(Deep, CliquePtr, CSDPtr) :-
    lookup_clique_parents(Deep ^ clique_parents, CliquePtr, CSDPtr).

deep_lookup_clique_maybe_child(Deep, CSDPtr, MaybeCliquePtr) :-
    lookup_clique_maybe_child(Deep ^ clique_maybe_child, CSDPtr,
        MaybeCliquePtr).

deep_lookup_proc_callers(Deep, PSPtr, CallerCSDPtrs) :-
    lookup_proc_callers(Deep ^ proc_callers, PSPtr, CallerCSDPtrs).

deep_lookup_call_site_static_map(Deep, CSDPtr, CSSPtr) :-
    lookup_call_site_static_map(Deep ^ call_site_static_map, CSDPtr,
        CSSPtr).

deep_lookup_call_site_calls(Deep, CSSPtr, Calls) :-
    lookup_call_site_calls(Deep ^ call_site_calls, CSSPtr, Calls).

deep_lookup_proc_dynamic_sites(Deep, PDPtr, PDSites) :-
    deep_lookup_proc_dynamics(Deep, PDPtr, PD),
    PDSites = PD ^ pd_sites.

deep_lookup_pd_comp_table(Deep, PDPtr, CompTable) :-
    lookup_pd_comp_table(Deep ^ pd_comp_table, PDPtr, CompTable).

deep_lookup_csd_comp_table(Deep, CSDPtr, CompTable) :-
    lookup_csd_comp_table(Deep ^ csd_comp_table, CSDPtr, CompTable).

%-----------------------------------------------------------------------------%

deep_lookup_pd_own(Deep, PDPtr, Own) :-
    PDPtr = proc_dynamic_ptr(PDI),
    array.lookup(Deep ^ pd_own, PDI, Own).

deep_lookup_pd_desc(Deep, PDPtr, Desc) :-
    PDPtr = proc_dynamic_ptr(PDI),
    array.lookup(Deep ^ pd_desc, PDI, Desc).

deep_lookup_csd_own(Deep, CSDPtr, Own) :-
    CSDPtr = call_site_dynamic_ptr(CSDI),
    array.lookup(Deep ^ call_site_dynamics, CSDI, CSD),
    Own = CSD ^ csd_own_prof.

deep_lookup_csd_desc(Deep, CSDPtr, Desc) :-
    CSDPtr = call_site_dynamic_ptr(CSDI),
    array.lookup(Deep ^ csd_desc, CSDI, Desc).

deep_lookup_ps_own(Deep, PSPtr, Own) :-
    PSPtr = proc_static_ptr(PSI),
    array.lookup(Deep ^ ps_own, PSI, Own).

deep_lookup_ps_desc(Deep, PSPtr, Desc) :-
    PSPtr = proc_static_ptr(PSI),
    array.lookup(Deep ^ ps_desc, PSI, Desc).

deep_lookup_css_own(Deep, CSSPtr, Own) :-
    CSSPtr = call_site_static_ptr(CSSI),
    array.lookup(Deep ^ css_own, CSSI, Own).

deep_lookup_css_desc(Deep, CSSPtr, Desc) :-
    CSSPtr = call_site_static_ptr(CSSI),
    array.lookup(Deep ^ css_desc, CSSI, Desc).

%-----------------------------------------------------------------------------%

update_call_site_dynamics(CSDPtr, CSD, CallSiteDynamics0, CallSiteDynamics) :-
    CSDPtr = call_site_dynamic_ptr(CSDI),
    array.set(CallSiteDynamics0, CSDI, CSD, CallSiteDynamics).

update_call_site_statics(CSSPtr, CSS, CallSiteStatics0, CallSiteStatics) :-
    CSSPtr = call_site_static_ptr(CSSI),
    array.set(CallSiteStatics0, CSSI, CSS, CallSiteStatics).

update_proc_dynamics(PDPtr, PD, ProcDynamics0, ProcDynamics) :-
    PDPtr = proc_dynamic_ptr(PDI),
    array.set(ProcDynamics0, PDI, PD, ProcDynamics).

update_proc_statics(PSPtr, PS, ProcStatics0, ProcStatics) :-
    PSPtr = proc_static_ptr(PSI),
    array.set(ProcStatics0, PSI, PS, ProcStatics).

update_call_site_static_map(CSDPtr, CSSPtr,
        CallSiteStaticMap0, CallSiteStaticMap) :-
    CSDPtr = call_site_dynamic_ptr(CSDI),
    array.set(CallSiteStaticMap0, CSDI, CSSPtr, CallSiteStaticMap).

update_proc_callers(PSPtr, CSDPtrs, ProcCallers0, ProcCallers) :-
    PSPtr = proc_static_ptr(PSI),
    array.set(ProcCallers0, PSI, CSDPtrs, ProcCallers).

update_ps_own(PSPtr, Own, PSOwns0, PSOwns) :-
    PSPtr = proc_static_ptr(PSI),
    array.set(PSOwns0, PSI, Own, PSOwns).

update_ps_desc(PSPtr, Desc, PSDescs0, PSDescs) :-
    PSPtr = proc_static_ptr(PSI),
    array.set(PSDescs0, PSI, Desc, PSDescs).

update_css_own(CSSPtr, Own, CSSOwns0, CSSOwns) :-
    CSSPtr = call_site_static_ptr(CSSI),
    array.set(CSSOwns0, CSSI, Own, CSSOwns).

update_css_desc(CSSPtr, Desc, CSSDescs0, CSSDescs) :-
    CSSPtr = call_site_static_ptr(CSSI),
    array.set(CSSDescs0, CSSI, Desc, CSSDescs).

%-----------------------------------------------------------------------------%

deep_update_csd_desc(CSDPtr, CSDDesc, Deep0, Deep) :-
    CSDPtr = call_site_dynamic_ptr(CSDI),
    array.set(u(Deep0 ^ csd_desc), CSDI, CSDDesc, CSDDescs),
    Deep = Deep0 ^ csd_desc := CSDDescs.

deep_update_pd_desc(PDPtr, PDDesc, Deep0, Deep) :-
    PDPtr = proc_dynamic_ptr(PDI),
    array.set(u(Deep0 ^ pd_desc), PDI, PDDesc, PDDescs),
    Deep = Deep0 ^ pd_desc := PDDescs.

deep_update_pd_own(PDPtr, PDOwn, Deep0, Deep) :-
    PDPtr = proc_dynamic_ptr(PDI),
    array.set(u(Deep0 ^ pd_own), PDI, PDOwn, PDOwns),
    Deep = Deep0 ^ pd_own := PDOwns.

deep_update_pd_comp_table(PDPtr, CompTable, Deep0, Deep) :-
    PDPtr = proc_dynamic_ptr(PDI),
    array.set(u(Deep0 ^ pd_comp_table), PDI, CompTable, PDCompTables),
    Deep = Deep0 ^ pd_comp_table := PDCompTables.

deep_update_csd_comp_table(CSDPtr, CompTable, Deep0, Deep) :-
    CSDPtr = call_site_dynamic_ptr(CSDI),
    array.set(u(Deep0 ^ csd_comp_table), CSDI, CompTable, CSDCompTables),
    Deep = Deep0 ^ csd_comp_table := CSDCompTables.

%-----------------------------------------------------------------------------%

extract_pd_sites(PD, PD ^ pd_sites).

extract_csd_caller(CSD, CSD ^ csd_caller).

extract_csd_callee(CSD, CSD ^ csd_callee).

extract_csdptr_caller(InitDeep, CSDPtr, CallerPDPtr) :-
    lookup_call_site_dynamics(InitDeep ^ init_call_site_dynamics,
        CSDPtr, CSD),
    CallerPDPtr = CSD ^ csd_caller.

extract_csdptr_callee(InitDeep, CSDPtr, CalleePDPtr) :-
    lookup_call_site_dynamics(InitDeep ^ init_call_site_dynamics,
        CSDPtr, CSD),
    CalleePDPtr = CSD ^ csd_callee.

extract_ticks_per_sec(InitDeep,
    InitDeep ^ init_profile_stats ^ ticks_per_sec).

extract_instrument_quanta(InitDeep,
    InitDeep ^ init_profile_stats ^ instrument_quanta).

extract_user_quanta(InitDeep,
    InitDeep ^ init_profile_stats ^ user_quanta).

extract_num_callseqs(InitDeep,
    InitDeep ^ init_profile_stats ^ num_callseqs).

extract_max_css(InitDeep, MaxCSS) :-
    array.max(InitDeep ^ init_call_site_statics, MaxCSS).

extract_max_ps(InitDeep, MaxPS) :-
    array.max(InitDeep ^ init_proc_statics, MaxPS).

extract_max_csd(InitDeep, MaxCSD) :-
    array.max(InitDeep ^ init_call_site_dynamics, MaxCSD).

extract_max_pd(InitDeep, MaxPD) :-
    array.max(InitDeep ^ init_proc_dynamics, MaxPD).

extract_init_call_site_dynamics(InitDeep, InitDeep ^ init_call_site_dynamics).

extract_init_call_site_statics(InitDeep, InitDeep ^ init_call_site_statics).

extract_init_proc_dynamics(InitDeep, InitDeep ^ init_proc_dynamics).

extract_init_proc_statics(InitDeep, InitDeep ^ init_proc_statics).

extract_init_root(InitDeep, InitDeep ^ init_root).

%-----------------------------------------------------------------------------%

deep_extract_csdptr_caller(Deep, CSDPtr, CallerPDPtr) :-
    lookup_call_site_dynamics(Deep ^ call_site_dynamics, CSDPtr, CSD),
    CallerPDPtr = CSD ^ csd_caller.

deep_extract_csdptr_callee(Deep, CSDPtr, CalleePDPtr) :-
    lookup_call_site_dynamics(Deep ^ call_site_dynamics, CSDPtr, CSD),
    CalleePDPtr = CSD ^ csd_callee.

%-----------------------------------------------------------------------------%

wrap_proc_static_ptr(PSI) = proc_static_ptr(PSI).

%-----------------------------------------------------------------------------%

root_total_info(Deep) = RootTotal :-
    deep_lookup_pd_own(Deep, Deep ^ root, RootOwn),
    deep_lookup_pd_desc(Deep, Deep ^ root, RootDesc),
    add_own_to_inherit(RootOwn, RootDesc) = RootTotal.

root_desc_info(Deep) = RootDesc :-
    deep_lookup_pd_desc(Deep, Deep ^ root, RootDesc).

root_own_info(Deep) = RootOwn :-
    deep_lookup_pd_own(Deep, Deep ^ root, RootOwn).
    
%-----------------------------------------------------------------------------%

deep_get_progrep_det(Deep, ProgRep) :-
    ( deep_get_progrep(Deep, ProgRepPrime) ->
        ProgRep = ProgRepPrime
    ;
        error(this_file ++ "Could not open Deep.procrep")
    ).

deep_get_progrep(Deep, ProgRep) :-
    Deep ^ procrep_file = yes(MaybeProgRep1),
    (
        MaybeProgRep1 = ok(ProgRep)
    ;
        MaybeProgRep1 = error(Error),
        error(this_file ++ Error)
    ).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "profile.m: ".

%-----------------------------------------------------------------------------%
:- end_module profile.
%-----------------------------------------------------------------------------%
