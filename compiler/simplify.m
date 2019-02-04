%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1996-2009 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: simplify.m.
% Main authors: zs, stayl.
%
% The two jobs of the simplification module are
%
%   to find and exploit opportunities for simplifying the internal form
%   of the program, both to optimize the code and to massage the code
%   into a form the code generator will accept, and
%
%   to warn the programmer about any constructs that are so simple that
%   they should not have been included in the program in the first place.
%
% Simplification is done in two passes. The first pass performs common
% structure and duplicate call elimination. The second pass performs excess
% assignment elimination and cleans up the code after the first pass.
%
% Two passes are required because the goal must be requantified after the
% optimizations in common.m are run so that excess assignment elimination
% works properly.
%
%-----------------------------------------------------------------------------%

:- module check_hlds.simplify.
:- interface.

:- import_module check_hlds.common.
:- import_module check_hlds.det_util.
:- import_module hlds.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.
:- import_module hlds.hlds_rtti.
:- import_module hlds.instmap.
:- import_module libs.
:- import_module libs.globals.
:- import_module parse_tree.error_util.

:- import_module bool.
:- import_module list.

%-----------------------------------------------------------------------------%

:- pred simplify_pred(simplifications::in, pred_id::in,
    module_info::in, module_info::out, pred_info::in, pred_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

:- pred simplify_proc(simplifications::in, pred_id::in, proc_id::in,
    module_info::in, module_info::out, proc_info::in, proc_info::out) is det.

:- pred simplify_proc_return_msgs(simplifications::in, pred_id::in,
    proc_id::in, module_info::in, module_info::out,
    proc_info::in, proc_info::out, list(error_spec)::out) is det.

:- pred simplify_process_clause_body_goal(hlds_goal::in, hlds_goal::out,
    simplify_info::in, simplify_info::out) is det.

    % simplify_may_introduce_calls(ModuleName, PredName, Arity):
    %
    % Succeed if the simplify module may introduce calls to a predicate
    % or function with the given name. ModuleName should be a standard library
    % module.
    %
:- pred simplify_may_introduce_calls(string::in, string::in, arity::in)
    is semidet.

    % Find out which simplifications should be run from the options table
    % stored in the globals. The first argument states whether warnings
    % should be issued during this pass of simplification.
    %
:- pred find_simplifications(bool::in, globals::in, simplifications::out)
    is det.

:- type simplification
    --->    simp_warn_simple_code       % --warn-simple-code
    ;       simp_warn_duplicate_calls   % --warn-duplicate-calls
    ;       simp_format_calls           % invoke format_call.m
    ;       simp_warn_obsolete          % --warn-obsolete
    ;       simp_do_once                % run things that should be done once
    ;       simp_after_front_end        % run things that should be done
                                        % at the end of the front end
    ;       simp_excess_assigns         % remove excess assignment unifications
    ;       simp_elim_removable_scopes  % remove scopes that do not need
                                        % processing during LLDS code
                                        % generation
    ;       simp_opt_duplicate_calls    % optimize duplicate calls
    ;       simp_constant_prop          % partially evaluate calls
    ;       simp_common_struct          % common structure elimination
    ;       simp_extra_common_struct    % do common structure elimination
                                        % even when it might increase stack
                                        % usage (used by deforestation).
    .

:- type simplifications.

:- func simplifications_to_list(simplifications) = list(simplification).
:- func list_to_simplifications(list(simplification)) = simplifications.

:- type simplify_info.

:- pred simplify_do_warn_simple_code(simplify_info::in) is semidet.
:- pred simplify_do_warn_duplicate_calls(simplify_info::in) is semidet.
:- pred simplify_do_format_calls(simplify_info::in) is semidet.
:- pred simplify_do_warn_obsolete(simplify_info::in) is semidet.
:- pred simplify_do_once(simplify_info::in) is semidet.
:- pred simplify_do_after_front_end(simplify_info::in) is semidet.
:- pred simplify_do_excess_assign(simplify_info::in) is semidet.
:- pred simplify_do_elim_removable_scopes(simplify_info::in) is semidet.
:- pred simplify_do_opt_duplicate_calls(simplify_info::in) is semidet.
:- pred simplify_do_const_prop(simplify_info::in) is semidet.
:- pred simplify_do_common_struct(simplify_info::in) is semidet.
:- pred simplify_do_extra_common_struct(simplify_info::in) is semidet.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.det_analysis.
:- import_module check_hlds.format_call.
:- import_module check_hlds.inst_match.
:- import_module check_hlds.mode_util.
:- import_module check_hlds.polymorphism.
:- import_module check_hlds.type_util.
:- import_module check_hlds.unify_proc.
:- import_module hlds.goal_form.
:- import_module hlds.goal_util.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_error_util.
:- import_module hlds.hlds_module.
:- import_module hlds.passes_aux.
:- import_module hlds.pred_table.
:- import_module hlds.quantification.
:- import_module hlds.special_pred.
:- import_module libs.compiler_util.
:- import_module libs.file_util.
:- import_module libs.options.
:- import_module libs.trace_params.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.
:- import_module parse_tree.builtin_lib_types.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_mode.
:- import_module parse_tree.prog_type.
:- import_module parse_tree.prog_type_subst.
:- import_module parse_tree.prog_util.
:- import_module transform_hlds.    % for pd_cost, etc.
:- import_module transform_hlds.const_prop.
:- import_module transform_hlds.pd_cost.

:- import_module int.
:- import_module io.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module set.
:- import_module string.
:- import_module svvarset.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%

:- type simplifications
    --->    simplifications(
                do_warn_simple_code         :: bool,
                do_warn_duplicate_calls     :: bool,
                do_format_calls             :: bool,
                do_warn_obsolete            :: bool,
                do_do_once                  :: bool,
                do_after_front_end          :: bool,
                do_excess_assign            :: bool,
                do_elim_removable_scopes    :: bool,
                do_opt_duplicate_calls      :: bool,
                do_constant_prop            :: bool,
                do_common_struct            :: bool,
                do_extra_common_struct      :: bool
            ).

simplifications_to_list(Simplifications) = List :-
    Simplifications = simplifications(WarnSimpleCode, WarnDupCalls,
        DoFormatCalls, WarnObsolete, DoOnce,
        AfterFrontEnd, ExcessAssign, ElimRemovableScopes, OptDuplicateCalls,
        ConstantProp, CommonStruct, ExtraCommonStruct),
    List =
        ( WarnSimpleCode = yes -> [simp_warn_simple_code] ; [] ) ++
        ( WarnDupCalls = yes -> [simp_warn_duplicate_calls] ; [] ) ++
        ( DoFormatCalls = yes -> [simp_format_calls] ; [] ) ++
        ( WarnObsolete = yes -> [simp_warn_obsolete] ; [] ) ++
        ( DoOnce = yes -> [simp_do_once] ; [] ) ++
        ( AfterFrontEnd = yes -> [simp_after_front_end] ; [] ) ++
        ( ExcessAssign = yes -> [simp_excess_assigns] ; [] ) ++
        ( ElimRemovableScopes = yes -> [simp_elim_removable_scopes] ; [] ) ++
        ( OptDuplicateCalls = yes -> [simp_opt_duplicate_calls] ; [] ) ++
        ( ConstantProp = yes -> [simp_constant_prop] ; [] ) ++
        ( CommonStruct = yes -> [simp_common_struct] ; [] ) ++
        ( ExtraCommonStruct = yes -> [simp_extra_common_struct] ; [] ).

list_to_simplifications(List) =
    simplifications(
        ( list.member(simp_warn_simple_code, List) -> yes ; no ),
        ( list.member(simp_warn_duplicate_calls, List) -> yes ; no ),
        ( list.member(simp_format_calls, List) -> yes ; no ),
        ( list.member(simp_warn_obsolete, List) -> yes ; no ),
        ( list.member(simp_do_once, List) -> yes ; no ),
        ( list.member(simp_after_front_end, List) -> yes ; no ),
        ( list.member(simp_excess_assigns, List) -> yes ; no ),
        ( list.member(simp_elim_removable_scopes, List) -> yes ; no ),
        ( list.member(simp_opt_duplicate_calls, List) -> yes ; no ),
        ( list.member(simp_constant_prop, List) -> yes ; no ),
        ( list.member(simp_common_struct, List) -> yes ; no ),
        ( list.member(simp_extra_common_struct, List) -> yes ; no )
    ).

find_simplifications(WarnThisPass, Globals, Simplifications) :-
    globals.lookup_bool_option(Globals, warn_simple_code, WarnSimple),
    globals.lookup_bool_option(Globals, warn_duplicate_calls, WarnDupCalls),
    globals.lookup_bool_option(Globals, warn_known_bad_format_calls,
        WarnKnownBadFormat),
    globals.lookup_bool_option(Globals, warn_unknown_format_calls,
        WarnUnknownFormat),
    globals.lookup_bool_option(Globals, optimize_format_calls,
        OptFormatCalls),
    (
        (
            WarnThisPass = yes,
            ( WarnKnownBadFormat = yes ; WarnUnknownFormat = yes  )
        ;
            OptFormatCalls = yes
        )
    ->
        DoFormatCalls = yes
    ;
        DoFormatCalls = no
    ),
    globals.lookup_bool_option(Globals, warn_obsolete, WarnObsolete),
    globals.lookup_bool_option(Globals, excess_assign, ExcessAssign),
    globals.lookup_bool_option(Globals, common_struct, CommonStruct),
    globals.lookup_bool_option(Globals, optimize_duplicate_calls,
        OptDuplicateCalls),
    globals.lookup_bool_option(Globals, constant_propagation, ConstantProp),
    DoOnce = no,
    AfterFrontEnd = no,
    ElimRemovableScopes = no,
    ExtraCommonStruct = no,

    Simplifications = simplifications(
        ( WarnSimple = yes, WarnThisPass = yes -> yes ; no),
        ( WarnDupCalls = yes, WarnThisPass = yes -> yes ; no),
        DoFormatCalls,
        ( WarnObsolete = yes, WarnThisPass = yes -> yes ; no),
        DoOnce,
        AfterFrontEnd,
        ExcessAssign,
        ElimRemovableScopes,
        OptDuplicateCalls,
        ConstantProp,
        CommonStruct,
        ExtraCommonStruct
    ).

simplify_do_warn_simple_code(Info) :-
    simplify_info_get_simplifications(Info, Simplifications),
    Simplifications ^ do_warn_simple_code = yes.
simplify_do_warn_duplicate_calls(Info) :-
    simplify_info_get_simplifications(Info, Simplifications),
    Simplifications ^ do_warn_duplicate_calls = yes.
simplify_do_format_calls(Info) :-
    simplify_info_get_simplifications(Info, Simplifications),
    Simplifications ^ do_format_calls = yes.
simplify_do_warn_obsolete(Info) :-
    simplify_info_get_simplifications(Info, Simplifications),
    Simplifications ^ do_warn_obsolete = yes.
simplify_do_once(Info) :-
    simplify_info_get_simplifications(Info, Simplifications),
    Simplifications ^ do_do_once = yes.
simplify_do_after_front_end(Info) :-
    simplify_info_get_simplifications(Info, Simplifications),
    Simplifications ^ do_after_front_end = yes.
simplify_do_excess_assign(Info) :-
    simplify_info_get_simplifications(Info, Simplifications),
    Simplifications ^ do_excess_assign = yes.
simplify_do_elim_removable_scopes(Info) :-
    simplify_info_get_simplifications(Info, Simplifications),
    Simplifications ^ do_elim_removable_scopes = yes.
simplify_do_opt_duplicate_calls(Info) :-
    simplify_info_get_simplifications(Info, Simplifications),
    Simplifications ^ do_opt_duplicate_calls = yes.
simplify_do_const_prop(Info) :-
    simplify_info_get_simplifications(Info, Simplifications),
    Simplifications ^ do_constant_prop = yes.
simplify_do_common_struct(Info) :-
    simplify_info_get_simplifications(Info, Simplifications),
    Simplifications ^ do_common_struct = yes.
simplify_do_extra_common_struct(Info) :-
    simplify_info_get_simplifications(Info, Simplifications),
    Simplifications ^ do_extra_common_struct = yes.

%-----------------------------------------------------------------------------%

simplify_pred(Simplifications0, PredId, !ModuleInfo, !PredInfo, !Specs) :-
    trace [io(!IO)] (
        write_pred_progress_message("% Simplifying ", PredId, !.ModuleInfo,
            !IO)
    ),
    ProcIds = pred_info_non_imported_procids(!.PredInfo),
    % Don't warn for compiler-generated procedures.
    ( is_unify_or_compare_pred(!.PredInfo) ->
        Simplifications = Simplifications0 ^ do_warn_simple_code := no
    ;
        Simplifications = Simplifications0
    ),
    ErrorSpecs0 = init_error_spec_accumulator,
    simplify_pred_procs(Simplifications, PredId, ProcIds, !ModuleInfo,
        !PredInfo, ErrorSpecs0, ErrorSpecs),
    module_info_get_globals(!.ModuleInfo, Globals),
    SpecsList = error_spec_accumulator_to_list(ErrorSpecs),
    !:Specs = SpecsList ++ !.Specs,
    globals.lookup_bool_option(Globals, detailed_statistics, Statistics),
    trace [io(!IO)] (
        maybe_report_stats(Statistics, !IO)
    ).

:- pred simplify_pred_procs(simplifications::in, pred_id::in,
    list(proc_id)::in, module_info::in, module_info::out,
    pred_info::in, pred_info::out,
    error_spec_accumulator::in, error_spec_accumulator::out) is det.

simplify_pred_procs(_, _, [], !ModuleInfo, !PredInfo, !Specs).
simplify_pred_procs(Simplifications, PredId, [ProcId | ProcIds], !ModuleInfo,
        !PredInfo, !Specs) :-
    simplify_pred_proc(Simplifications, PredId, ProcId, !ModuleInfo,
        !PredInfo, !Specs),
    simplify_pred_procs(Simplifications, PredId, ProcIds, !ModuleInfo,
        !PredInfo, !Specs).

:- pred simplify_pred_proc(simplifications::in, pred_id::in, proc_id::in,
    module_info::in, module_info::out, pred_info::in, pred_info::out,
    error_spec_accumulator::in, error_spec_accumulator::out) is det.

simplify_pred_proc(Simplifications, PredId, ProcId, !ModuleInfo,
        !PredInfo, !Specs) :-
    pred_info_get_procedures(!.PredInfo, ProcTable0),
    map.lookup(ProcTable0, ProcId, ProcInfo0),
    simplify_proc_return_msgs(Simplifications, PredId, ProcId,
        !ModuleInfo, ProcInfo0, ProcInfo, ProcSpecs),
    % This is ugly, but we want to avoid running the dependent parallel
    % conjunction pass on predicates and even modules that do not contain
    % parallel conjunctions (nearly all of them).  Since simplification
    % is always done, we use it to mark modules and procedures containing
    % parallel conjunctions.
    proc_info_get_has_parallel_conj(ProcInfo, HasParallelConj),
    (
        HasParallelConj = yes,
        module_info_set_contains_par_conj(!ModuleInfo)
    ;
        HasParallelConj = no
    ),
    proc_info_get_has_user_event(ProcInfo, HasUserEvent),
    (
        HasUserEvent = yes,
        module_info_set_contains_user_event(!ModuleInfo)
    ;
        HasUserEvent = no
    ),
    map.det_update(ProcTable0, ProcId, ProcInfo, ProcTable),
    pred_info_set_procedures(ProcTable, !PredInfo),
    accumulate_error_specs_for_proc(ProcSpecs, !Specs).

simplify_proc(Simplifications, PredId, ProcId, !ModuleInfo, !ProcInfo)  :-
    trace [io(!IO)] (
        write_pred_progress_message("% Simplifying ", PredId, !.ModuleInfo,
            !IO)
    ),
    simplify_proc_return_msgs(Simplifications, PredId, ProcId, !ModuleInfo,
        !ProcInfo, _).

:- func turn_off_common_struct_threshold = int.

turn_off_common_struct_threshold = 1000.

simplify_proc_return_msgs(Simplifications0, PredId, ProcId, !ModuleInfo,
        !ProcInfo, !:Specs) :-
    proc_info_get_vartypes(!.ProcInfo, VarTypes0),
    NumVars = map.count(VarTypes0),
    ( NumVars > turn_off_common_struct_threshold ->
        % If we have too many variables, common_struct takes so long that
        % either the compiler runs out of memory or the user runs out of
        % patience. The fact that we would generate better code if the
        % compilation finished is therefore of limited interest.
        Simplifications1 = Simplifications0 ^ do_common_struct := no
    ;
        Simplifications1 = Simplifications0
    ),
    module_info_get_globals(!.ModuleInfo, Globals),
    globals.lookup_string_option(Globals, common_struct_preds,
        CommonStructPreds),
    ( CommonStructPreds = "" ->
        Simplifications = Simplifications1
    ;
        CommonStructPredIdStrs = string.split_at_char(',', CommonStructPreds),
        (
            list.map(string.to_int, CommonStructPredIdStrs,
                CommonStructPredIdInts)
        ->
            ( list.member(pred_id_to_int(PredId), CommonStructPredIdInts) ->
                Simplifications = Simplifications1
            ;
                Simplifications = Simplifications1 ^ do_common_struct := no
            )
        ;
            Simplifications = Simplifications1
        )
    ),

    module_info_pred_info(!.ModuleInfo, PredId, PredInfo0),
    pred_info_get_markers(PredInfo0, Markers0),
    pred_info_get_import_status(PredInfo0, Status),
    proc_info_get_goal(!.ProcInfo, Goal0),
    (
        check_marker(Markers0, marker_mode_check_clauses),
        Goal0 = hlds_goal(GoalExpr0, GoalInfo0),
        ( GoalExpr0 = disj(_)
        ; GoalExpr0 = switch(_, _, _)
        )
    ->
        goal_info_add_feature(feature_mode_check_clauses_goal,
            GoalInfo0, GoalInfo1),
        Goal1 = hlds_goal(GoalExpr0, GoalInfo1)
    ;
        Goal1 = Goal0
    ),

    (
        check_marker(Markers0, marker_has_format_call),
        Simplifications ^ do_format_calls = yes
    ->
        % We must invoke analyze_and_optimize_format_calls before
        % simplify_process_clause_body_goal, for two reasons.
        %
        % First, excess assignment optimization may delete some of the
        % unifications that build the format strings or values,
        % which means that the goal it generates may not contain the
        % information that analyze_and_optimize_format_calls needs to avoid
        % spurious messages about unknown format strings or values.
        %
        % Second, analyze_and_optimize_format_calls generates nested
        % conjunctions, which simplify_process_clause_body_goal can eliminate.
        proc_info_get_varset(!.ProcInfo, VarSet0),
        analyze_and_optimize_format_calls(!.ModuleInfo, Goal1, MaybeGoal2,
            FormatSpecs, VarSet0, VarSet1, VarTypes0, VarTypes1),
        (
            MaybeGoal2 = yes(Goal2),
            proc_info_set_goal(Goal2, !ProcInfo),
            proc_info_set_varset(VarSet1, !ProcInfo),
            proc_info_set_vartypes(VarTypes1, !ProcInfo),

            % The goals we replace format calls with are created with the
            % correct nonlocals, but analyze_and_optimize_format_calls can
            % take code for building a list of string.poly_types out of one
            % scope (e.g. the condition of an if-then-else) and replace it
            % with code to build the string directly in another scope
            % (such as the then part of that if-then-else, if that is where
            % the format call is). This can leave variables missing from
            % the nonlocal fields of the original scopes. And since
            % instmap_deltas are restricted to the goal's nonlocals,
            % they need to be recomputed as well.
            requantify_proc_general(ordinary_nonlocals_maybe_lambda,
                !ProcInfo),
            recompute_instmap_delta_proc(
                do_not_recompute_atomic_instmap_deltas,
                !ProcInfo, !ModuleInfo),
            proc_info_get_goal(!.ProcInfo, Goal3),
            proc_info_get_vartypes(!.ProcInfo, VarTypes3),

            % Put the new proc_info back into !ModuleInfo, since some of the
            % following code could otherwise find obsolete information in
            % there.

            % Remove the has_format_call marker from the pred_info before
            % putting it back, since any optimizable format calls will already
            % have been optimized. Since currently there is no program
            % transformation that inserts calls to these predicates,
            % there is no point in invoking find_format_call again later.

            module_info_preds(!.ModuleInfo, PredTable1),
            map.lookup(PredTable1, PredId, PredInfo1),
            pred_info_get_procedures(PredInfo1, ProcTable1),
            map.det_update(ProcTable1, ProcId, !.ProcInfo, ProcTable),

            pred_info_set_procedures(ProcTable, PredInfo1, PredInfo2),
            remove_marker(marker_has_format_call, Markers0, Markers),
            pred_info_set_markers(Markers, PredInfo2, PredInfo),

            map.det_update(PredTable1, PredId, PredInfo, PredTable),
            module_info_set_preds(PredTable, !ModuleInfo)
        ;
            MaybeGoal2 = no,
            Markers = Markers0,
            Goal3 = Goal1,
            % Throw away VarTypes1.
            VarTypes3 = VarTypes0
        )
    ;
        % Either there are no format calls to check, or we don't want to
        % optimize them and would ignore the added messages anyway.
        Goal3 = Goal1,
        Markers = Markers0,
        FormatSpecs = [],
        VarTypes3 = VarTypes0
    ),

    det_info_init(!.ModuleInfo, VarTypes3, PredId, ProcId,
        pess_extra_vars_report, [], DetInfo0),
    proc_info_get_initial_instmap(!.ProcInfo, !.ModuleInfo, InstMap0),
    simplify_info_init(DetInfo0, Simplifications, InstMap0, !.ProcInfo, Info0),

    simplify_process_clause_body_goal(Goal3, Goal, Info0, Info),

    simplify_info_get_varset(Info, VarSet3),
    ( simplify_do_after_front_end(Info) ->
        proc_info_get_var_name_remap(!.ProcInfo, VarNameRemap),
        map.foldl(svvarset.name_var, VarNameRemap, VarSet3, VarSet),
        proc_info_set_var_name_remap(map.init, !ProcInfo)
    ;
        VarSet = VarSet3
    ),
    simplify_info_get_var_types(Info, VarTypes),
    simplify_info_get_rtti_varmaps(Info, RttiVarMaps),
    proc_info_set_varset(VarSet, !ProcInfo),
    proc_info_set_vartypes(VarTypes, !ProcInfo),
    proc_info_set_goal(Goal, !ProcInfo),
    proc_info_set_rtti_varmaps(RttiVarMaps, !ProcInfo),

    simplify_info_get_has_parallel_conj(Info, HasParallelConj),
    proc_info_set_has_parallel_conj(HasParallelConj, !ProcInfo),

    simplify_info_get_has_user_event(Info, HasUserEvent),
    proc_info_set_has_user_event(HasUserEvent, !ProcInfo),

    simplify_info_get_module_info(Info, !:ModuleInfo),
    simplify_info_get_error_specs(Info, !:Specs),
    !:Specs = FormatSpecs ++ !.Specs,

    Goal = hlds_goal(GoalExpr, GoalInfo),
    (
        GoalExpr = call_foreign_proc(Attributes, _, _, _, _, _, _),
        MaybeMayDuplicate = get_may_duplicate(Attributes),
        MaybeMayDuplicate = yes(MayDuplicate)
    ->
        (
            MayDuplicate = proc_may_duplicate,
            ( check_marker(Markers, marker_user_marked_no_inline) ->
                Context = goal_info_get_context(GoalInfo),
                Pieces = [words("Error: the `may_duplicate' attribute"),
                    words("on the foreign_proc"),
                    words("contradicts the `no_inline' pragma"),
                    words("on the predicate.")],
                Msg = simple_msg(Context, [always(Pieces)]),
                Severity = severity_error,
                Spec = error_spec(Severity, phase_simplify(report_in_any_mode),
                    [Msg]),
                !:Specs = [Spec | !.Specs]
            ;
                true
            )
        ;
            MayDuplicate = proc_may_not_duplicate,
            ( check_marker(Markers, marker_user_marked_inline) ->
                Context = goal_info_get_context(GoalInfo),
                Pieces = [words("Error: the `may_not_duplicate' attribute"),
                    words("on the foreign_proc"),
                    words("contradicts the `inline' pragma"),
                    words("on the predicate.")],
                Msg = simple_msg(Context, [always(Pieces)]),
                Severity = severity_error,
                Spec = error_spec(Severity, phase_simplify(report_in_any_mode),
                    [Msg]),
                !:Specs = [Spec | !.Specs]
            ;
                true
            )
        )
    ;
        true
    ),

    IsDefinedHere = status_defined_in_this_module(Status),
    (
        IsDefinedHere = no,
        % Don't generate any warnings or even errors if the predicate isn't
        % defined here; any such messages will be generated when we compile
        % the module the predicate comes from.
        !:Specs = []
    ;
        IsDefinedHere = yes
    ).

simplify_process_clause_body_goal(!Goal, !Info) :-
    some [!Simplifications] (
        simplify_info_get_simplifications(!.Info, !:Simplifications),
        OriginalSimplifications = !.Simplifications,
        simplify_info_get_instmap(!.Info, InstMap0),
        (
            ( simplify_do_common_struct(!.Info)
            ; simplify_do_opt_duplicate_calls(!.Info)
            )
        ->
            !Simplifications ^ do_do_once := no,
            !Simplifications ^ do_excess_assign := no,
            simplify_info_set_simplifications(!.Simplifications, !Info),

            do_process_clause_body_goal(!Goal, !Info),

            !:Simplifications = OriginalSimplifications,
            !Simplifications ^ do_warn_simple_code := no,
            !Simplifications ^ do_warn_duplicate_calls := no,
            !Simplifications ^ do_common_struct := no,
            !Simplifications ^ do_opt_duplicate_calls := no,
            simplify_info_reinit(!.Simplifications, InstMap0, !Info)
        ;
            true
        ),
        % On the second pass do excess assignment elimination and
        % some cleaning up after the common structure pass.
        do_process_clause_body_goal(!Goal, !Info),
        simplify_info_get_found_contains_trace(!.Info, FoundContainsTrace),
        (
            FoundContainsTrace = no
        ;
            FoundContainsTrace = yes,
            goal_contains_trace(!Goal, _)
        )
    ).

:- pred do_process_clause_body_goal(hlds_goal::in, hlds_goal::out,
    simplify_info::in, simplify_info::out) is det.

do_process_clause_body_goal(!Goal, !Info) :-
    !.Goal = hlds_goal(_, GoalInfo0),
    Detism = goal_info_get_determinism(GoalInfo0),
    NonLocals = goal_info_get_nonlocals(GoalInfo0),
    simplify_info_get_instmap(!.Info, InstMap0),

    simplify_goal(!Goal, !Info),

    ( simplify_info_requantify(!.Info) ->
        some [!VarSet, !VarTypes, !RttiVarMaps, !ModuleInfo] (
            simplify_info_get_varset(!.Info, !:VarSet),
            simplify_info_get_var_types(!.Info, !:VarTypes),
            simplify_info_get_rtti_varmaps(!.Info, !:RttiVarMaps),
            implicitly_quantify_goal_general(ordinary_nonlocals_maybe_lambda,
                NonLocals, _, !Goal, !VarSet, !VarTypes, !RttiVarMaps),

            simplify_info_set_varset(!.VarSet, !Info),
            simplify_info_set_var_types(!.VarTypes, !Info),
            simplify_info_set_rtti_varmaps(!.RttiVarMaps, !Info),

            % Always recompute instmap_deltas for atomic goals - this is safer
            % in the case where unused variables should no longer be included
            % in the instmap_delta for a goal.
            % In the alias branch this is necessary anyway.
            simplify_info_get_module_info(!.Info, !:ModuleInfo),
            InstVarSet = !.Info ^ simp_inst_varset,
            recompute_instmap_delta(recompute_atomic_instmap_deltas, !Goal,
                !.VarTypes, InstVarSet, InstMap0, !ModuleInfo),
            simplify_info_set_module_info(!.ModuleInfo, !Info)
        )
    ;
        true
    ),
    ( simplify_info_rerun_det(!.Info) ->
        some [!VarSet, !VarTypes, !RttiVarMaps, !ModuleInfo, !ProcInfo,
            !DetInfo]
        (
            det_get_soln_context(Detism, SolnContext),

            % Det_infer_goal looks up the proc_info in the module_info
            % for the vartypes, so we'd better stick them back in the
            % module_info.
            simplify_info_get_module_info(!.Info, !:ModuleInfo),
            simplify_info_get_varset(!.Info, !:VarSet),
            simplify_info_get_var_types(!.Info, !:VarTypes),
            simplify_info_get_rtti_varmaps(!.Info, !:RttiVarMaps),
            simplify_info_get_det_info(!.Info, !:DetInfo),
            det_info_get_pred_id(!.DetInfo, PredId),
            det_info_get_proc_id(!.DetInfo, ProcId),
            module_info_pred_proc_info(!.ModuleInfo, PredId, ProcId,
                PredInfo, !:ProcInfo),
            proc_info_set_vartypes(!.VarTypes, !ProcInfo),
            proc_info_set_varset(!.VarSet, !ProcInfo),
            proc_info_set_rtti_varmaps(!.RttiVarMaps, !ProcInfo),
            module_info_set_pred_proc_info(PredId, ProcId,
                PredInfo, !.ProcInfo, !ModuleInfo),
            simplify_info_set_module_info(!.ModuleInfo, !Info),

            simplify_info_get_det_info(!.Info, !:DetInfo),
            det_infer_goal(!Goal, InstMap0, SolnContext, [], no,
                _, _, !DetInfo),
            simplify_info_set_det_info(!.DetInfo, !Info)
        )
    ;
        true
    ).

%-----------------------------------------------------------------------------%

:- pred simplify_goal(hlds_goal::in, hlds_goal::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal(Goal0, hlds_goal(GoalExpr, GoalInfo), !Info) :-
    Goal0 = hlds_goal(_, GoalInfo0),
    simplify_info_get_inside_duplicated_for_switch(!.Info,
        InsideDuplForSwitch),
    ( goal_info_has_feature(GoalInfo0, feature_duplicated_for_switch) ->
        simplify_info_set_inside_duplicated_for_switch(yes, !Info)
    ;
        true
    ),
    ( goal_info_has_feature(GoalInfo0, feature_contains_trace) ->
        simplify_info_set_found_contains_trace(yes, !Info)
    ;
        true
    ),
    Detism = goal_info_get_determinism(GoalInfo0),
    simplify_info_get_det_info(!.Info, DetInfo),
    simplify_info_get_module_info(!.Info, ModuleInfo0),
    goal_can_loop_or_throw(Goal0, Goal0CanLoopOrThrow,
        ModuleInfo0, ModuleInfo),
    simplify_info_set_module_info(ModuleInfo, !Info),
    Purity = goal_info_get_purity(GoalInfo0),
    (
        % If --no-fully-strict, replace goals with determinism failure
        % with `fail'.

        Detism = detism_failure,
        ( Purity = purity_pure ; Purity = purity_semipure ),
        ( det_info_get_fully_strict(DetInfo, no)
        ; Goal0CanLoopOrThrow = cannot_loop_or_throw
        )
    ->
        % Warn about this, unless the goal was an explicit `fail', call to
        % `builtin.false/0' or  some goal containing `fail' or a call to
        % `builtin.false/0'.

        Context = goal_info_get_context(GoalInfo0),
        (
            simplify_do_warn_simple_code(!.Info),
            \+ (
                goal_contains_goal(Goal0, SubGoal),
                ( SubGoal = hlds_goal(disj([]), _)
                ; goal_is_call_to_builtin_false(SubGoal)
                )
            )
        ->
            MainPieces = [words("Warning: this goal cannot succeed.")],
            VerbosePieces = [
                words("The compiler will optimize away this goal,"),
                words("replacing it with `fail'.")
            ],
            Msg = simple_msg(Context,
                [option_is_set(warn_simple_code, yes,
                    [always(MainPieces), verbose_only(VerbosePieces)])]),
            Severity = severity_conditional(warn_simple_code, yes,
                severity_warning, no),
            Spec = error_spec(Severity,
                phase_simplify(report_only_if_in_all_modes), [Msg]),
            simplify_info_add_error_spec(Spec, !Info)
        ;
            true
        ),

        % If the goal had any non-locals we should requantify.
        NonLocals0 = goal_info_get_nonlocals(GoalInfo0),
        ( set.empty(NonLocals0) ->
            true
        ;
            simplify_info_set_requantify(!Info)
        ),
        goal_cost(Goal0, CostDelta),
        simplify_info_incr_cost_delta(CostDelta, !Info),
        Goal1 = fail_goal_with_context(Context)
    ;
        % If --no-fully-strict, replace goals which cannot fail and have
        % no output variables with `true'. However, we don't do this for
        % erroneous goals, since these may occur in conjunctions where there
        % are no producers for some variables, and the code generator would
        % fail for these.

        determinism_components(Detism, cannot_fail, MaxSoln),
        MaxSoln \= at_most_zero,
        InstMapDelta = goal_info_get_instmap_delta(GoalInfo0),
        NonLocalVars = goal_info_get_nonlocals(GoalInfo0),
        simplify_info_get_instmap(!.Info, InstMap0),
        det_no_output_vars(NonLocalVars, InstMap0, InstMapDelta, DetInfo),
        ( Purity = purity_pure ; Purity = purity_semipure ),
        ( det_info_get_fully_strict(DetInfo, no)
        ; Goal0CanLoopOrThrow = cannot_loop_or_throw
        )
    ->
% The following warning is disabled, because it often results in spurious
% warnings.  Sometimes predicate calls are used just to constrain the types,
% to avoid type ambiguities or unbound type variables, and in such cases,
% it is perfectly legitimate for a call to be det and to have no outputs.
% There's no simple way of telling those cases from cases for which we
% really ought to warn.
% XXX This hasn't really been true since we added `with_type`.
%
%       % warn about this, if the goal wasn't `true', wasn't `!',
%       % and wasn't a deconstruction unification.
%       % We don't warn about deconstruction unifications
%       % with no outputs that always succeed, because that
%       % would result in bogus warnings, since switch detection
%       % converts deconstruction unifications that can fail
%       % into ones that always succeed by moving the test into
%       % the switch.
%       % We also don't warn about conjunctions or existential
%       % quantifications, because it seems that warnings in those
%       % cases are usually spurious.
%       (
%           simplify_do_warn_simple_code(!.Info),
%           % Goal0 \= conj(plain_conj, []) - _,
%           \+ (Goal0 = call(_, _, _, _, _, SymName) - _,
%               unqualify_name(SymName, "!")),
%           Goal0 \= conj(plain_conj, _) - _,
%           Goal0 \= some(_, _) - _,
%           \+ (Goal0 = unify(_, _, _, Unification, _) - _,
%               Unification = deconstruct(_, _, _, _, _))
%       ->
%           Msg = det_goal_has_no_outputs,
%           ContextMsg = context_det_msg(Context, Msg),
%           simplify_info_add_error_spec(ContextMsg, !Info)
%       ;
%           true
%       ),

        % If the goal had any non-locals we should requantify.
        NonLocals0 = goal_info_get_nonlocals(GoalInfo0),
        ( set.empty(NonLocals0) ->
            true
        ;
            simplify_info_set_requantify(!Info)
        ),
        goal_cost(Goal0, CostDelta),
        simplify_info_incr_cost_delta(CostDelta, !Info),
        Context = goal_info_get_context(GoalInfo0),
        Goal1 = true_goal_with_context(Context)
    ;
        Goal1 = Goal0
    ),

    % Remove unnecessary explicit quantifications before working
    % out whether the goal can cause a stack flush.

    ( Goal1 = hlds_goal(scope(Reason1, SomeGoal1), GoalInfo1) ->
        nested_scopes(Reason1, SomeGoal1, GoalInfo1, Goal2)
    ;
        Goal2 = Goal1
    ),
    (
        simplify_do_elim_removable_scopes(!.Info),
        Goal2 = hlds_goal(scope(Reason2, SomeGoal2), _GoalInfo2),
        (
            Reason2 = barrier(removable)
        ;
            Reason2 = from_ground_term(_, Kind),
            ( Kind = from_ground_term_deconstruct
            ; Kind = from_ground_term_other
            )
        )
    ->
        Goal3 = SomeGoal2
    ;
        Goal3 = Goal2
    ),
    simplify_info_maybe_clear_structs(before, Goal3, !Info),
    Goal3 = hlds_goal(GoalExpr3, GoalInfo3),
    simplify_goal_expr(GoalExpr3, GoalExpr, GoalInfo3, GoalInfo4, !Info),
    simplify_info_maybe_clear_structs(after, hlds_goal(GoalExpr, GoalInfo4),
        !Info),
    simplify_info_set_inside_duplicated_for_switch(InsideDuplForSwitch, !Info),
    enforce_unreachability_invariant(GoalInfo4, GoalInfo, !Info).

    % Ensure that the mode information and the determinism
    % information say consistent things about unreachability.
    %
:- pred enforce_unreachability_invariant(
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

enforce_unreachability_invariant(GoalInfo0, GoalInfo, !Info) :-
    Determinism0 = goal_info_get_determinism(GoalInfo0),
    InstmapDelta0 = goal_info_get_instmap_delta(GoalInfo0),
    determinism_components(Determinism0, CanFail0, NumSolns0),
    (
        NumSolns0 = at_most_zero,
        instmap_delta_is_reachable(InstmapDelta0)
    ->
        instmap_delta_init_unreachable(UnreachableInstMapDelta),
        goal_info_set_instmap_delta(UnreachableInstMapDelta,
            GoalInfo0, GoalInfo),
        simplify_info_set_rerun_det(!Info)
    ;
        instmap_delta_is_unreachable(InstmapDelta0),
        NumSolns0 \= at_most_zero
    ->
        determinism_components(Determinism, CanFail0, at_most_zero),
        goal_info_set_determinism(Determinism, GoalInfo0, GoalInfo),
        simplify_info_set_rerun_det(!Info)
    ;
        GoalInfo = GoalInfo0
    ).

:- pred goal_is_call_to_builtin_false(hlds_goal::in) is semidet.

goal_is_call_to_builtin_false(hlds_goal(GoalExpr, _)) :-
    GoalExpr = plain_call(_, _, _, _, _, SymName),
    SymName = qualified(mercury_public_builtin_module, "false").

%-----------------------------------------------------------------------------%

:- pred simplify_goal_expr(hlds_goal_expr::in, hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal_expr(!GoalExpr, !GoalInfo, !Info) :-
    (
        !.GoalExpr = conj(ConjType, Goals),
        (
            ConjType = plain_conj,
            simplify_goal_plain_conj(Goals, !:GoalExpr, !GoalInfo, !Info)
        ;
            ConjType = parallel_conj,
            simplify_goal_parallel_conj(Goals, !:GoalExpr, !GoalInfo, !Info)
        )
    ;
        !.GoalExpr = disj(_),
        simplify_goal_disj(!GoalExpr, !GoalInfo, !Info)
    ;
        !.GoalExpr = switch(_, _, _),
        simplify_goal_switch(!GoalExpr, !GoalInfo, !Info)
    ;
        !.GoalExpr = generic_call(_, _, _, _),
        simplify_goal_generic_call(!GoalExpr, !GoalInfo, !Info)
    ;
        !.GoalExpr = plain_call(_, _, _, _, _, _),
        simplify_goal_plain_call(!GoalExpr, !GoalInfo, !Info)
    ;
        !.GoalExpr = unify(_, _, _, _, _),
        simplify_goal_unify(!GoalExpr, !GoalInfo, !Info)
    ;
        !.GoalExpr = if_then_else(_, _, _, _),
        simplify_goal_ite(!GoalExpr, !GoalInfo, !Info)
    ;
        !.GoalExpr = negation(_),
        simplify_goal_neg(!GoalExpr, !GoalInfo, !Info)
    ;
        !.GoalExpr = scope(_, _),
        simplify_goal_scope(!GoalExpr, !GoalInfo, !Info)
    ;
        !.GoalExpr = call_foreign_proc(_, _, _, _, _, _, _),
        simplify_goal_foreign_proc(!GoalExpr, !GoalInfo, !Info)
    ;
        !.GoalExpr = shorthand(ShortHand0),
        (
            ShortHand0 = atomic_goal(GoalType, Outer, Inner,
                MaybeOutputVars, MainGoal, OrElseGoals, OrElseInners),
            simplify_goal_atomic_goal(GoalType, Outer, Inner,
                MaybeOutputVars, MainGoal, OrElseGoals, OrElseInners,
                !:GoalExpr, !GoalInfo, !Info)
        ;
            ShortHand0 = try_goal(_, _, _),
            % These should have been expanded out by now.
            unexpected(this_file, "simplify_goal_2: try_goal")
        ;
            ShortHand0 = bi_implication(_, _),
            % These should have been expanded out by now.
            unexpected(this_file, "simplify_goal_2: bi_implication")
        )
    ).

:- pred simplify_goal_plain_conj(list(hlds_goal)::in, hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal_plain_conj(Goals0, GoalExpr, GoalInfo0, GoalInfo, !Info) :-
    simplify_info_get_instmap(!.Info, InstMap0),
    excess_assigns_in_conj(GoalInfo0, Goals0, Goals1, !Info),
    simplify_conj(Goals1, [], Goals, GoalInfo0, !Info),
    simplify_info_set_instmap(InstMap0, !Info),
    (
        Goals = [],
        Context = goal_info_get_context(GoalInfo0),
        hlds_goal(GoalExpr, GoalInfo) = true_goal_with_context(Context)
    ;
        Goals = [hlds_goal(SingleGoal, SingleGoalInfo)],
        % A singleton conjunction is equivalent to the goal itself.
        maybe_wrap_goal(GoalInfo0, SingleGoalInfo, SingleGoal,
            GoalExpr, GoalInfo, !Info)
    ;
        Goals = [_, _ | _],

        % Conjunctions that cannot produce solutions may nevertheless contain
        % nondet and multi goals. If this happens, the conjunction is put
        % inside a scope to appease the code generator.

        Detism = goal_info_get_determinism(GoalInfo0),
        (
            simplify_do_once(!.Info),
            determinism_components(Detism, CanFail, at_most_zero),
            contains_multisoln_goal(Goals)
        ->
            determinism_components(InnerDetism, CanFail, at_most_many),
            goal_info_set_determinism(InnerDetism, GoalInfo0, InnerInfo),
            InnerGoal = hlds_goal(conj(plain_conj, Goals), InnerInfo),
            GoalExpr = scope(commit(dont_force_pruning), InnerGoal)
        ;
            GoalExpr = conj(plain_conj, Goals)
        ),
        GoalInfo = GoalInfo0
    ).

:- pred simplify_goal_parallel_conj(list(hlds_goal)::in, hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal_parallel_conj(Goals0, GoalExpr, GoalInfo0, GoalInfo, !Info) :-
    (
        Goals0 = [],
        Context = goal_info_get_context(GoalInfo0),
        hlds_goal(GoalExpr, GoalInfo) = true_goal_with_context(Context)
    ;
        Goals0 = [SingleGoal0],
        simplify_goal(SingleGoal0, hlds_goal(SingleGoal, SingleGoalInfo),
            !Info),
        maybe_wrap_goal(GoalInfo0, SingleGoalInfo, SingleGoal, GoalExpr,
            GoalInfo, !Info)
    ;
        Goals0 = [_, _ | _],
        GoalInfo = GoalInfo0,
        simplify_par_conj(Goals0, Goals, !.Info, !Info),
        GoalExpr = conj(parallel_conj, Goals),
        simplify_info_set_has_parallel_conj(yes, !Info)
    ).

:- pred simplify_goal_disj(
    hlds_goal_expr::in(goal_expr_disj), hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal_disj(GoalExpr0, GoalExpr, GoalInfo0, GoalInfo, !Info) :-
    GoalExpr0 = disj(Disjuncts0),
    simplify_info_get_instmap(!.Info, InstMap0),
    simplify_disj(Disjuncts0, [], Disjuncts, [], InstMaps, !.Info, !Info),
    (
        Disjuncts = [],
        Context = goal_info_get_context(GoalInfo0),
        hlds_goal(GoalExpr, GoalInfo) = fail_goal_with_context(Context)
    ;
        Disjuncts = [SingleGoal],
        % A singleton disjunction is equivalent to the goal itself.
        SingleGoal = hlds_goal(Goal1, GoalInfo1),
        maybe_wrap_goal(GoalInfo0, GoalInfo1, Goal1, GoalExpr, GoalInfo, !Info)
    ;
        Disjuncts = [_, _ | _],
        GoalExpr = disj(Disjuncts),
        ( goal_info_has_feature(GoalInfo0, feature_mode_check_clauses_goal) ->
            % Recomputing the instmap delta would take very long
            % and is very unlikely to get any better precision.
            GoalInfo = GoalInfo0
        ;
            simplify_info_get_module_info(!.Info, ModuleInfo1),
            NonLocals = goal_info_get_nonlocals(GoalInfo0),
            simplify_info_get_var_types(!.Info, VarTypes),
            merge_instmap_deltas(InstMap0, NonLocals, VarTypes, InstMaps,
                NewDelta, ModuleInfo1, ModuleInfo2),
            simplify_info_set_module_info(ModuleInfo2, !Info),
            goal_info_set_instmap_delta(NewDelta, GoalInfo0, GoalInfo)
        )
    ),
    list.length(Disjuncts, DisjunctsLength),
    list.length(Disjuncts0, Disjuncts0Length),
    ( DisjunctsLength \= Disjuncts0Length ->
        % If we pruned some disjuncts, variables used by those disjuncts
        % may no longer be non-local to the disjunction. Also, the
        % determinism may have changed (especially if we pruned all the
        % disjuncts). If the disjunction now can't succeed, it is necessary
        % to recompute instmap_deltas and rerun determinism analysis
        % to avoid aborts in the code generator because the disjunction
        % now cannot produce variables it did before.

        simplify_info_set_requantify(!Info),
        simplify_info_set_rerun_det(!Info)
    ;
        true
    ).

:- pred simplify_goal_switch(
    hlds_goal_expr::in(goal_expr_switch), hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal_switch(GoalExpr0, GoalExpr, GoalInfo0, GoalInfo, !Info) :-
    GoalExpr0 = switch(Var, SwitchCanFail0, Cases0),
    simplify_info_get_instmap(!.Info, InstMap0),
    simplify_info_get_module_info(!.Info, ModuleInfo0),
    instmap_lookup_var(InstMap0, Var, VarInst),
    simplify_info_get_var_types(!.Info, VarTypes),
    ( inst_is_bound_to_functors(ModuleInfo0, VarInst, BoundInsts) ->
        map.lookup(VarTypes, Var, VarType),
        type_to_ctor_det(VarType, VarTypeCtor),
        list.map(bound_inst_to_cons_id(VarTypeCtor), BoundInsts, ConsIds0),
        list.sort(ConsIds0, ConsIds),
        delete_unreachable_cases(Cases0, ConsIds, Cases1),
        MaybeConsIds = yes(ConsIds)
    ;
        Cases1 = Cases0,
        MaybeConsIds = no
    ),
    simplify_switch(Var, Cases1, [], RevCases, [], InstMaps,
        not_seen_non_ground_term, SeenNonGroundTerm,
        SwitchCanFail0, SwitchCanFail, !.Info, !Info),
    list.reverse(RevCases, Cases),
    (
        Cases = []
    ->
        % An empty switch always fails.
        simplify_info_incr_cost_delta(cost_of_eliminate_switch, !Info),
        Context = goal_info_get_context(GoalInfo0),
        hlds_goal(GoalExpr, GoalInfo) = fail_goal_with_context(Context)
    ;
        Cases = [case(MainConsId, OtherConsIds, SingleGoal)],
        OtherConsIds = []
    ->
        % A singleton switch is equivalent to the goal itself with a
        % possibly can_fail unification with the functor on the front.
        MainConsIdArity = cons_id_arity(MainConsId),
        (
            SwitchCanFail = can_fail,
            MaybeConsIds \= yes([MainConsId])
        ->
            % Don't optimize in the case of an existentially typed constructor
            % because currently create_test_unification does not handle the
            % existential type variables in the types of the constructor
            % arguments or their typeinfos.

            map.lookup(VarTypes, Var, Type),
            simplify_info_get_module_info(!.Info, ModuleInfo1),
            ( type_util.is_existq_cons(ModuleInfo1, Type, MainConsId) ->
                GoalExpr = switch(Var, SwitchCanFail, Cases),
                NonLocals = goal_info_get_nonlocals(GoalInfo0),
                merge_instmap_deltas(InstMap0, NonLocals, VarTypes,
                    InstMaps, NewDelta, ModuleInfo1, ModuleInfo2),
                simplify_info_set_module_info(ModuleInfo2, !Info),
                goal_info_set_instmap_delta(NewDelta, GoalInfo0, GoalInfo)
            ;
                create_test_unification(Var, MainConsId, MainConsIdArity,
                    UnifyGoal, !Info),

                % Conjoin the test and the rest of the case.
                goal_to_conj_list(SingleGoal, SingleGoalConj),
                GoalList = [UnifyGoal | SingleGoalConj],

                % Work out the nonlocals, instmap_delta
                % and determinism of the entire conjunction.
                NonLocals0 = goal_info_get_nonlocals(GoalInfo0),
                set.insert(NonLocals0, Var, NonLocals),
                InstMapDelta0 = goal_info_get_instmap_delta(GoalInfo0),
                simplify_info_get_instmap(!.Info, InstMap),
                instmap_delta_bind_var_to_functor(Var, Type, MainConsId,
                    InstMap, InstMapDelta0, InstMapDelta,
                    ModuleInfo1, ModuleInfo),
                simplify_info_set_module_info(ModuleInfo, !Info),
                CaseDetism = goal_info_get_determinism(GoalInfo0),
                det_conjunction_detism(detism_semi, CaseDetism, Detism),
                goal_list_purity(GoalList, Purity),
                goal_info_init(NonLocals, InstMapDelta, Detism, Purity,
                    CombinedGoalInfo),

                simplify_info_set_requantify(!Info),
                GoalExpr = conj(plain_conj, GoalList),
                GoalInfo = CombinedGoalInfo
            )
        ;
            % The var can only be bound to this cons_id, so a test
            % is unnecessary.
            SingleGoal = hlds_goal(GoalExpr, GoalInfo)
        ),
        simplify_info_incr_cost_delta(cost_of_eliminate_switch, !Info)
    ;
        GoalExpr = switch(Var, SwitchCanFail, Cases),
        (
            ( goal_info_has_feature(GoalInfo0, feature_mode_check_clauses_goal)
            ; SeenNonGroundTerm = not_seen_non_ground_term
            )
        ->
            % Recomputing the instmap delta would take very long and is
            % very unlikely to get any better precision.
            GoalInfo = GoalInfo0
        ;
            simplify_info_get_module_info(!.Info, ModuleInfo1),
            NonLocals = goal_info_get_nonlocals(GoalInfo0),
            merge_instmap_deltas(InstMap0, NonLocals, VarTypes, InstMaps,
                NewDelta, ModuleInfo1, ModuleInfo2),
            simplify_info_set_module_info(ModuleInfo2, !Info),
            goal_info_set_instmap_delta(NewDelta, GoalInfo0, GoalInfo)
        )
    ),
    list.length(Cases0, Cases0Length),
    list.length(Cases, CasesLength),
    ( CasesLength = Cases0Length ->
        true
    ;
        % If we pruned some cases, variables used by those cases may no longer
        % be nonlocal to the switch. Also, the determinism may have changed
        % (especially if we pruned all the cases). If the switch now can't
        % succeed, it is necessary to recompute instmap_deltas and rerun
        % determinism analysis to avoid aborts in the code generator because
        % the switch now cannot produce variables it did before.

        simplify_info_set_requantify(!Info),
        simplify_info_set_rerun_det(!Info)
    ).

:- pred simplify_goal_generic_call(
    hlds_goal_expr::in(goal_expr_generic_call), hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal_generic_call(GoalExpr0, GoalExpr, GoalInfo, GoalInfo, !Info) :-
    GoalExpr0 = generic_call(GenericCall, Args, Modes, Det),
    (
        GenericCall = higher_order(Closure, Purity, _, _),
        (
            simplify_do_opt_duplicate_calls(!.Info),
            % XXX We should do duplicate call elimination for
            % class method calls here.
            % XXX Should we handle semipure higher-order calls too?
            Purity = purity_pure
        ->
            common_optimise_higher_order_call(Closure, Args, Modes, Det,
                GoalInfo, GoalExpr0, GoalExpr, !Info)
        ;
            simplify_do_warn_duplicate_calls(!.Info),
            % XXX Should we handle impure/semipure higher-order calls too?
            Purity = purity_pure
        ->
            % We need to do the pass, for the warnings, but we ignore
            % the optimized goal and instead use the original one.
            common_optimise_higher_order_call(Closure, Args, Modes, Det,
                GoalInfo, GoalExpr0, _GoalExpr1, !Info),
            GoalExpr = GoalExpr0
        ;
            GoalExpr = GoalExpr0
        )
    ;
        GenericCall = event_call(_),
        simplify_info_set_has_user_event(yes, !Info),
        GoalExpr = GoalExpr0
    ;
        ( GenericCall = class_method(_, _, _, _)
        ; GenericCall = cast(_)
        ),
        GoalExpr = GoalExpr0
    ).

:- pred simplify_goal_plain_call(
    hlds_goal_expr::in(goal_expr_plain_call), hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal_plain_call(GoalExpr0, GoalExpr, GoalInfo0, GoalInfo, !Info) :-
    GoalExpr0 = plain_call(PredId, ProcId, Args, IsBuiltin, _, _),
    simplify_info_get_module_info(!.Info, ModuleInfo),
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    ModuleName = hlds_pred.pred_info_module(PredInfo),
    Name = hlds_pred.pred_info_name(PredInfo),

    % Convert calls to builtin @=<, @<, @>=, @> into the corresponding
    % calls to builtin.compare/3.

    (
        Args = [TI, X, Y],
        ModuleName = mercury_public_builtin_module,
        ( Name = "@<", Inequality = "<", Invert = no
        ; Name = "@=<", Inequality = ">", Invert = yes
        ; Name = "@>=", Inequality = "<", Invert = yes
        ; Name = "@>",  Inequality = ">", Invert = no
        )
    ->
        inequality_goal(TI, X, Y, Inequality, Invert, GoalInfo0,
            GoalExpr, GoalInfo, !Info)
    ;
        simplify_call_goal(PredId, ProcId, Args, IsBuiltin,
            GoalExpr0, GoalExpr, GoalInfo0, GoalInfo, !Info)
    ).

:- pred simplify_goal_unify(
    hlds_goal_expr::in(goal_expr_unify), hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal_unify(GoalExpr0, GoalExpr, GoalInfo0, GoalInfo, !Info) :-
    GoalExpr0 = unify(LT0, RT0, M, U0, C),
    (
        RT0 = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
            NonLocals, Vars, Modes, LambdaDeclaredDet, LambdaGoal0),
        simplify_info_enter_lambda(!Info),
        simplify_info_get_common_info(!.Info, Common1),
        simplify_info_get_module_info(!.Info, ModuleInfo),
        simplify_info_get_instmap(!.Info, InstMap1),
        instmap.pre_lambda_update(ModuleInfo, Vars, Modes, InstMap1, InstMap2),
        simplify_info_set_instmap(InstMap2, !Info),

        % Don't attempt to pass structs into lambda_goals,
        % since that could change the curried non-locals of the
        % lambda_goal, and that would be difficult to fix up.
        simplify_info_set_common_info(common_info_init, !Info),

        % Don't attempt to pass structs out of lambda_goals.
        simplify_goal(LambdaGoal0, LambdaGoal, !Info),
        simplify_info_set_common_info(Common1, !Info),
        simplify_info_set_instmap(InstMap1, !Info),
        RT = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
            NonLocals, Vars, Modes, LambdaDeclaredDet, LambdaGoal),
        simplify_info_leave_lambda(!Info),
        GoalExpr = unify(LT0, RT, M, U0, C),
        GoalInfo = GoalInfo0
    ;
        ( RT0 = rhs_functor(_, _, _)
        ; RT0 = rhs_var(_)
        ),
        (
            % A unification of the form X = X can be safely optimised away.
            RT0 = rhs_var(LT0)
        ->
            Context = goal_info_get_context(GoalInfo0),
            hlds_goal(GoalExpr, GoalInfo) = true_goal_with_context(Context)
        ;
            U0 = complicated_unify(UniMode, CanFail, TypeInfoVars)
        ->
            (
                RT0 = rhs_var(V),
                process_compl_unify(LT0, V, UniMode, CanFail, TypeInfoVars, C,
                    GoalInfo0, GoalExpr1, !Info),
                GoalExpr1 = hlds_goal(GoalExpr, GoalInfo)
            ;
                RT0 = rhs_functor(_, _, _),
                unexpected(this_file, "invalid RHS for complicated unify")
            )
        ;
            simplify_do_common_struct(!.Info)
        ->
            common_optimise_unification(U0, LT0, RT0, M, C,
                GoalExpr0, GoalExpr, GoalInfo0, GoalInfo, !Info)
        ;
            ( simplify_do_opt_duplicate_calls(!.Info)
            ; simplify_do_warn_duplicate_calls(!.Info)
            )
        ->
            % We need to do the pass, to record the variable equivalences
            % used for optimizing or warning about duplicate calls.
            % But we don't want to perform the optimization, so we disregard
            % the optimized goal and instead use the original one.
            common_optimise_unification(U0, LT0, RT0, M, C,
                GoalExpr0, _GoalExpr1, GoalInfo0, _GoalInfo1, !Info),
            GoalExpr = GoalExpr0,
            GoalInfo = GoalInfo0
        ;
            GoalExpr = GoalExpr0,
            GoalInfo = GoalInfo0
        )
    ).

:- pred simplify_goal_ite(
    hlds_goal_expr::in(goal_expr_ite), hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal_ite(GoalExpr0, GoalExpr, GoalInfo0, GoalInfo, !Info) :-
    % (A -> B ; C) is logically equivalent to (A, B ; ~A, C).
    % If the determinism of A means that one of these disjuncts
    % cannot succeed, then we replace the if-then-else with the
    % other disjunct. (We could also eliminate A, but we leave
    % that to the recursive invocations.)
    %
    % Note however that rerunning determinism analysis, which
    % we do at the end of simplification, may introduce more
    % occurrences of these; since we don't iterate simplification
    % and determinism anaysis until a fixpoint is reached,
    % we don't guarantee to eliminate all such if-then-elses.
    % Hence the code generator must be prepared to handle the
    % case when the condition of an if-then-else has determinism
    % `det' or `failure'.
    %
    % The conjunction operator in the remaining disjunct ought to be
    % a sequential conjunction, because Mercury's if-then-else always
    % guarantees sequentiality, whereas conjunction only guarantees
    % sequentiality if the --no-reorder-conj option is enabled.
    %
    % However, currently reordering is only done in mode analysis,
    % not in the code generator, so we don't yet need a sequential
    % conjunction construct. This will change when constraint pushing
    % is finished, or when we start doing coroutining.

    GoalExpr0 = if_then_else(Vars, Cond0, Then0, Else0),
    Cond0 = hlds_goal(_, CondInfo0),
    CondDetism0 = goal_info_get_determinism(CondInfo0),
    determinism_components(CondDetism0, CondCanFail0, CondSolns0),
    (
        CondCanFail0 = cannot_fail,
        goal_to_conj_list(Cond0, CondList),
        goal_to_conj_list(Then0, ThenList),
        list.append(CondList, ThenList, List),
        simplify_goal(hlds_goal(conj(plain_conj, List), GoalInfo0),
            hlds_goal(GoalExpr, GoalInfo), !Info),
        simplify_info_get_inside_duplicated_for_switch(!.Info,
            InsideDuplForSwitch),
        (
            InsideDuplForSwitch = yes
            % Do not generate the warning, since it is quite likely to be
            % spurious: though the condition cannot fail in this arm of the
            % switch, it likely can fail in other arms that derive from
            % the exact same piece of source code.
        ;
            InsideDuplForSwitch = no,
            Context = goal_info_get_context(GoalInfo0),
            Pieces = [words("Warning: the condition of this if-then-else"),
                words("cannot fail.")],
            Msg = simple_msg(Context,
                [option_is_set(warn_simple_code, yes, [always(Pieces)])]),
            Severity = severity_conditional(warn_simple_code, yes,
                severity_warning, no),
            Spec = error_spec(Severity,
                phase_simplify(report_only_if_in_all_modes), [Msg]),
            simplify_info_add_error_spec(Spec, !Info)
        ),
        simplify_info_set_requantify(!Info),
        simplify_info_set_rerun_det(!Info)
    ;
        CondCanFail0 = can_fail,
        (
            CondSolns0 = at_most_zero,
            % Optimize away the condition and the `then' part.
            det_negation_det(CondDetism0, MaybeNegDetism),
            (
                Cond0 = hlds_goal(negation(NegCond), _),
                % XXX BUG! This optimization is only safe if it preserves mode
                % correctness, which means in particular that the negated goal
                % must not clobber any variables. For now I've just disabled
                % the optimization.
                semidet_fail
            ->
                Cond = NegCond
            ;
                (
                    MaybeNegDetism = yes(NegDetism1),
                    (
                        NegDetism1 = detism_erroneous,
                        instmap_delta_init_unreachable(NegInstMapDelta1)
                    ;
                        NegDetism1 = detism_det,
                        instmap_delta_init_reachable(NegInstMapDelta1)
                    )
                ->
                    NegDetism = NegDetism1,
                    NegInstMapDelta = NegInstMapDelta1
                ;
                    unexpected(this_file,
                        "goal_2: cannot get negated determinism")
                ),
                goal_info_set_determinism(NegDetism, CondInfo0, NegCondInfo0),
                goal_info_set_instmap_delta(NegInstMapDelta,
                    NegCondInfo0, NegCondInfo),
                Cond = hlds_goal(negation(Cond0), NegCondInfo)
            ),
            goal_to_conj_list(Else0, ElseList),
            List = [Cond | ElseList],
            simplify_goal(hlds_goal(conj(plain_conj, List), GoalInfo0),
                hlds_goal(GoalExpr, GoalInfo), !Info),
            simplify_info_get_inside_duplicated_for_switch(!.Info,
                InsideDuplForSwitch),
            (
                InsideDuplForSwitch = yes
                % Do not generate the warning, since it is quite likely to be
                % spurious: though the condition cannot succeed in this arm
                % of the switch, it likely can succeed in other arms that
                % derive from the exact same piece of source code.
            ;
                InsideDuplForSwitch = no,
                Context = goal_info_get_context(GoalInfo0),
                Pieces = [words("Warning: the condition of this if-then-else"),
                    words("cannot succeed.")],
                Msg = simple_msg(Context,
                    [option_is_set(warn_simple_code, yes, [always(Pieces)])]),
                Severity = severity_conditional(warn_simple_code, yes,
                    severity_warning, no),
                Spec = error_spec(Severity,
                    phase_simplify(report_only_if_in_all_modes), [Msg]),
                simplify_info_add_error_spec(Spec, !Info)
            ),
            simplify_info_set_requantify(!Info),
            simplify_info_set_rerun_det(!Info)
        ;
            ( CondSolns0 = at_most_one
            ; CondSolns0 = at_most_many
            ; CondSolns0 = at_most_many_cc
            ),
            simplify_goal_ordinary_ite(Vars, Cond0, Then0, Else0, GoalExpr,
                GoalInfo0, GoalInfo, !Info)
        )
    ).

:- pred simplify_goal_ordinary_ite(list(prog_var)::in,
    hlds_goal::in, hlds_goal::in, hlds_goal::in, hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal_ordinary_ite(Vars, Cond0, Then0, Else0, GoalExpr,
        GoalInfo0, GoalInfo, !Info) :-
    ( Else0 = hlds_goal(disj([]), _) ->
        % (A -> C ; fail) is equivalent to (A, C)
        goal_to_conj_list(Cond0, CondList),
        goal_to_conj_list(Then0, ThenList),
        list.append(CondList, ThenList, List),
        simplify_goal(hlds_goal(conj(plain_conj, List), GoalInfo0),
            hlds_goal(GoalExpr, GoalInfo), !Info),
        simplify_info_set_requantify(!Info),
        simplify_info_set_rerun_det(!Info)
    ;
        % Recursively simplify the sub-goals, and rebuild the resulting
        % if-then-else.

        Info0 = !.Info,
        simplify_info_get_instmap(!.Info, InstMap0),
        simplify_goal(Cond0, Cond, !Info),
        simplify_info_update_instmap(Cond, !Info),
        simplify_goal(Then0, Then, !Info),
        simplify_info_post_branch_update(Info0, !Info),
        simplify_goal(Else0, Else, !Info),
        simplify_info_post_branch_update(Info0, !Info),
        Cond = hlds_goal(_, CondInfo),
        CondDelta = goal_info_get_instmap_delta(CondInfo),
        Then = hlds_goal(_, ThenInfo),
        ThenDelta = goal_info_get_instmap_delta(ThenInfo),
        instmap_delta_apply_instmap_delta(CondDelta, ThenDelta,
            test_size, CondThenDelta),
        Else = hlds_goal(_, ElseInfo),
        ElseDelta = goal_info_get_instmap_delta(ElseInfo),
        NonLocals = goal_info_get_nonlocals(GoalInfo0),
        some [!ModuleInfo] (
            simplify_info_get_module_info(!.Info, !:ModuleInfo),
            simplify_info_get_var_types(!.Info, VarTypes),
            merge_instmap_deltas(InstMap0, NonLocals, VarTypes,
                [CondThenDelta, ElseDelta], NewDelta, !ModuleInfo),
            simplify_info_set_module_info(!.ModuleInfo, !Info)
        ),
        goal_info_set_instmap_delta(NewDelta, GoalInfo0, GoalInfo1),
        IfThenElse = if_then_else(Vars, Cond, Then, Else),

        IfThenElseDetism0 = goal_info_get_determinism(GoalInfo0),
        determinism_components(IfThenElseDetism0, IfThenElseCanFail,
            IfThenElseNumSolns),

        CondDetism = goal_info_get_determinism(CondInfo),
        determinism_components(CondDetism, CondCanFail, CondSolns),
        (
            % Check again if we can apply one of the above simplifications
            % after having simplified the sub-goals (we need to do this
            % to ensure that the goal is fully simplified, to maintain the
            % invariants that the MLDS back-end depends on).
            ( CondCanFail = cannot_fail
            ; CondSolns = at_most_zero
            ; Else = hlds_goal(disj([]), _)
            )
        ->
            simplify_info_undo_goal_updates(Info0, !Info),
            simplify_goal_expr(IfThenElse, GoalExpr, GoalInfo1, GoalInfo,
                !Info)
        ;
            simplify_info_get_module_info(!.Info, ModuleInfo),
            warn_switch_for_ite_cond(ModuleInfo, VarTypes, Cond,
                cond_can_switch_uncommitted, CanSwitch),
            (
                CanSwitch = cond_can_switch_on(SwitchVar),
                Context = goal_info_get_context(CondInfo),
                VarSet = !.Info ^ simp_varset,
                Pieces0 = [words("Warning: this if-then-else"),
                    words("could be replaced by a switch")],
                ( varset.search_name(VarSet, SwitchVar, SwitchVarName) ->
                    OnPieces = [words("on"), quote(SwitchVarName)]
                ;
                    OnPieces = []
                ),
                Pieces = Pieces0 ++ OnPieces ++ [suffix("."), nl],
                Msg = simple_msg(Context,
                    [option_is_set(inform_ite_instead_of_switch, yes,
                        [always(Pieces)])]),
                Severity = severity_conditional(inform_ite_instead_of_switch,
                    yes, severity_informational, no),
                Spec = error_spec(Severity, phase_simplify(report_in_any_mode),
                    [Msg]),
                simplify_info_add_error_spec(Spec, !Info)
            ;
                CanSwitch = cond_can_switch_uncommitted
            ;
                CanSwitch = cond_cannot_switch
            ),
            (
                % If-then-elses that are det or semidet may nevertheless
                % contain nondet or multi conditions. If this happens,
                % the if-then-else must be put inside a `scope' to appease
                % the code generator. (Both the MLDS and LLDS back-ends
                % rely on this.)

                simplify_do_once(!.Info),
                CondSolns = at_most_many,
                IfThenElseNumSolns \= at_most_many
            ->
                determinism_components(InnerDetism,
                    IfThenElseCanFail, at_most_many),
                goal_info_set_determinism(InnerDetism, GoalInfo1, InnerInfo),
                GoalExpr = scope(commit(dont_force_pruning),
                    hlds_goal(IfThenElse, InnerInfo))
            ;
                GoalExpr = IfThenElse
            ),
            GoalInfo = GoalInfo1
        )
    ).

:- type cond_can_switch
    --->    cond_can_switch_uncommitted
    ;       cond_can_switch_on(prog_var)
    ;       cond_cannot_switch.

:- pred warn_switch_for_ite_cond(module_info::in, vartypes::in, hlds_goal::in,
    cond_can_switch::in, cond_can_switch::out) is det.

warn_switch_for_ite_cond(ModuleInfo, VarTypes, Cond, !CondCanSwitch) :-
    Cond = hlds_goal(CondExpr, _CondInfo),
    (
        CondExpr = unify(_LHSVar, _RHS, _Mode, Unification, _UContext),
        (
            ( Unification = construct(_, _, _, _, _, _, _)
            ; Unification = assign(_, _)
            ; Unification = simple_test(_, _)
            ),
            !:CondCanSwitch = cond_cannot_switch
        ;
            Unification = deconstruct(LHSVar, _ConsId, _Args, _ArgModes,
                _CanFail, _CanCGC),
            map.lookup(VarTypes, LHSVar, LHSVarType),
            ( type_to_type_defn_body(ModuleInfo, LHSVarType, TypeBody) ->
                CanSwitchOnType = can_switch_on_type(TypeBody),
                (
                    CanSwitchOnType = no,
                    !:CondCanSwitch = cond_cannot_switch
                ;
                    CanSwitchOnType = yes,
                    (
                        !.CondCanSwitch = cond_can_switch_uncommitted,
                        !:CondCanSwitch = cond_can_switch_on(LHSVar)
                    ;
                        !.CondCanSwitch = cond_can_switch_on(SwitchVar),
                        ( SwitchVar = LHSVar ->
                            true
                        ;
                            !:CondCanSwitch = cond_cannot_switch
                        )
                    ;
                        !.CondCanSwitch = cond_cannot_switch
                    )
                )
            ;
                % You cannot have a switch on a type with no body (e.g. a
                % builtin type such as int).
                !:CondCanSwitch = cond_cannot_switch
            )
        ;
            Unification = complicated_unify(_, _, _),
            unexpected(this_file,
                "warn_ite_instead_of_switch: complicated unify")
        )
    ;
        CondExpr = disj(Disjuncts),
        list.foldl(warn_switch_for_ite_cond(ModuleInfo, VarTypes), Disjuncts,
            !CondCanSwitch)
    ;
        CondExpr = negation(SubGoal),
        (
            !.CondCanSwitch = cond_can_switch_uncommitted,
            warn_switch_for_ite_cond(ModuleInfo, VarTypes, SubGoal,
                !CondCanSwitch)
        ;
            !.CondCanSwitch = cond_can_switch_on(_),
            % The condition cannot do both.
            !:CondCanSwitch = cond_cannot_switch
        ;
            !.CondCanSwitch = cond_cannot_switch
        )
    ;
        ( CondExpr = plain_call(_, _, _, _, _, _)
        ; CondExpr = generic_call(_, _, _, _)
        ; CondExpr = call_foreign_proc(_, _, _, _, _, _, _)
        ; CondExpr = conj(_, _)
        ; CondExpr = switch(_, _, _)
        ; CondExpr = scope(_, _)
        ; CondExpr = if_then_else(_, _, _, _)
        ),
        !:CondCanSwitch = cond_cannot_switch
    ;
        CondExpr = shorthand(ShortHand),
        (
            ShortHand = atomic_goal(_, _, _, _, _, _, _),
            !:CondCanSwitch = cond_cannot_switch
        ;
            ShortHand = try_goal(_, _, _),
            !:CondCanSwitch = cond_cannot_switch
        ;
            ShortHand = bi_implication(_, _),
            unexpected(this_file, "warn_ite_instead_of_switch: shorthand")
        )
    ).

:- func can_switch_on_type(hlds_type_body) = bool.

can_switch_on_type(TypeBody) = CanSwitchOnType :-
    (
        TypeBody = hlds_du_type(_Ctors, _TagValues, _CheaperTagTest,
            DuTypeKind, _UserEq, _ReservedTag, _ReservedAddr,
            _MaybeForeignType),
        % We don't care about _UserEq, since the unification with *any* functor
        % of the type indicates that we are deconstructing the physical
        % representation, not the logical value.
        %
        % We don't care about _ReservedTag or _ReservedAddr, since those are
        % only implementation details.
        %
        % We don't care about _MaybeForeignType, since the unification with
        % *any* functor of the type means that either there is no foreign type
        % version, or we are using the Mercury version of the type.
        (
            ( DuTypeKind = du_type_kind_mercury_enum
            ; DuTypeKind = du_type_kind_foreign_enum(_)
            ; DuTypeKind = du_type_kind_general
            ),
            CanSwitchOnType = yes
        ;
            ( DuTypeKind = du_type_kind_direct_dummy
            ; DuTypeKind = du_type_kind_notag(_, _, _)
            ),
            % We should have already got a warning that the condition cannot
            % fail; a warning about using a switch would therefore be redundant
            % (as well as confusing, since you cannot have a switch with one
            % arm for the one function symbol).
            CanSwitchOnType = no
        )
    ;
        TypeBody = hlds_eqv_type(_),
        % The type of the variable should have had any equivalences expanded
        % out of it before simplify.
        unexpected(this_file, "warn_switch_for_ite_cond: eqv type")
    ;
        TypeBody = hlds_foreign_type(_),
        % If the type is foreign, how can have a Mercury unification using it?
        unexpected(this_file, "warn_switch_for_ite_cond: foreign type")
    ;
        TypeBody = hlds_abstract_type(_),
        % If the type is abstract, how can have a Mercury unification using it?
        unexpected(this_file, "warn_switch_for_ite_cond: foreign type")
    ;
        TypeBody = hlds_solver_type(_, _),
        % Any unifications on constrained variables should be done on the
        % representation type, and the type of the variable in the unification
        % should be the representation type, not the solver type.
        unexpected(this_file, "warn_switch_for_ite_cond: solver type")
    ).

:- pred simplify_goal_neg(
    hlds_goal_expr::in(goal_expr_neg), hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal_neg(GoalExpr0, GoalExpr, GoalInfo0, GoalInfo, !Info) :-
    GoalExpr0 = negation(SubGoal0),
    % Can't use calls or unifications seen within a negation,
    % since non-local variables may not be bound within the negation.
    simplify_info_get_common_info(!.Info, Common),
    simplify_goal(SubGoal0, SubGoal1, !Info),
    simplify_info_set_common_info(Common, !Info),
    SubGoal1 = hlds_goal(_, SubGoalInfo1),
    Detism = goal_info_get_determinism(SubGoalInfo1),
    determinism_components(Detism, CanFail, MaxSoln),
    Context = goal_info_get_context(GoalInfo0),
    ( CanFail = cannot_fail ->
        Pieces = [words("Warning: the negated goal cannot fail.")],
        Msg = simple_msg(Context,
            [option_is_set(warn_simple_code, yes, [always(Pieces)])]),
        Severity = severity_conditional(warn_simple_code, yes,
            severity_warning, no),
        Spec = error_spec(Severity,
            phase_simplify(report_only_if_in_all_modes), [Msg]),
        simplify_info_add_error_spec(Spec, !Info)
    ; MaxSoln = at_most_zero ->
        Pieces = [words("Warning: the negated goal cannot succeed.")],
        Msg = simple_msg(Context,
            [option_is_set(warn_simple_code, yes, [always(Pieces)])]),
        Severity = severity_conditional(warn_simple_code, yes,
            severity_warning, no),
        Spec = error_spec(Severity,
            phase_simplify(report_only_if_in_all_modes), [Msg]),
        simplify_info_add_error_spec(Spec, !Info)
    ;
        true
    ),
    (
        % replace `not true' with `fail'
        SubGoal1 = hlds_goal(conj(plain_conj, []), _)
    ->
        hlds_goal(GoalExpr, GoalInfo) = fail_goal_with_context(Context)
    ;
        % replace `not fail' with `true'
        SubGoal1 = hlds_goal(disj([]), _)
    ->
        hlds_goal(GoalExpr, GoalInfo) = true_goal_with_context(Context)
    ;
        % remove double negation
        SubGoal1 =
            hlds_goal(negation(hlds_goal(SubSubGoal, SubSubGoalInfo)), _),
        % XXX BUG! This optimization is only safe if it preserves
        % mode correctness, which means in particular that the
        % the negated goal must not clobber any variables.
        % For now I've just disabled the optimization.
        semidet_fail
    ->
        maybe_wrap_goal(GoalInfo0, SubSubGoalInfo, SubSubGoal, GoalExpr,
            GoalInfo, !Info)
    ;
        GoalExpr = negation(SubGoal1),
        GoalInfo = GoalInfo0
    ).

:- pred simplify_goal_scope(
    hlds_goal_expr::in(goal_expr_scope), hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal_scope(GoalExpr0, GoalExpr, GoalInfo0, GoalInfo, !Info) :-
    GoalExpr0 = scope(Reason0, SubGoal0),
    ( Reason0 = from_ground_term(TermVar, from_ground_term_construct) ->
        simplify_info_get_module_info(!.Info, ModuleInfo),
        module_info_get_globals(ModuleInfo, Globals),
        globals.lookup_bool_option(Globals, common_struct, CommonStruct),
        (
            CommonStruct = yes,
            % Traversing the construction unifications inside the scope would
            % allow common.m to
            %
            % - replace some of those constructions with references to other
            %   variables that were constructed the same way, and
            % - remember those constructions, so that other constructions
            %   outside the scope could be replaced with references to
            %   variables built inside the scope.
            %
            % Since unifying a variable with a statically constructed ground
            % term yields code that is at least as fast as unifying that
            % variable with another variable that is already bound to that
            % term, and probably faster because it does not require saving the
            % other variable across calls, neither of these actions would be
            % an advantage. On the other hand, both would complicate the
            % required treatment of from_ground_term_construct scopes in
            % liveness.m, slowing down the liveness pass, as well as this pass.
            % Since the code inside the scope is already as simple as
            % it can be, we leave it alone.
            GoalExpr = GoalExpr0,
            GoalInfo = GoalInfo0
        ;
            CommonStruct = no,
            % Looking inside the scope may allow us to reduce the number of
            % memory cells we may need to allocate dynamically. This
            % improvement in the generated code trumps the cost in compile
            % time. However, we need to update the reason, since leaving it
            % as from_ground_term_construct would tell liveness.m that the
            % code inside the scope hasn't had either of the actions mentioned
            % in the comment above applied to it, and in this case, we cannot
            % guarantee that.
            simplify_goal(SubGoal0, SubGoal, !Info),
            NewReason = from_ground_term(TermVar, from_ground_term_other),
            GoalExpr = scope(NewReason, SubGoal),
            GoalInfo = GoalInfo0
        )
    ;
        simplify_info_get_common_info(!.Info, Common),
        simplify_goal(SubGoal0, SubGoal, !Info),
        nested_scopes(Reason0, SubGoal, GoalInfo0, Goal1),
        Goal1 = hlds_goal(GoalExpr1, _GoalInfo1),
        ( GoalExpr1 = scope(FinalReason, FinalSubGoal) ->
            (
                ( FinalReason = promise_purity(_)
                ; FinalReason = from_ground_term(_, _)
                ; FinalReason = barrier(removable)
                ),
                Goal = Goal1
            ;
                ( FinalReason = commit(_)
                ; FinalReason = exist_quant(_)
                ; FinalReason = promise_solutions(_, _)
                ; FinalReason = barrier(not_removable)
                ),
                Goal = Goal1,
                % Replacing calls, constructions or deconstructions outside
                % a commit with references to variables created inside the
                % commit would increase the set of output variables of the goal
                % inside the commit. This is not allowed because it could
                % change the determinism.
                %
                % Thus we need to reset the common_info to what it was before
                % processing the goal inside the commit, to ensure that we
                % don't make any such replacements when processing the rest
                % of the goal.
                simplify_info_set_common_info(Common, !Info)
            ;
                FinalReason = trace_goal(MaybeCompiletimeExpr,
                    MaybeRuntimeExpr, _, _, _),
                ( simplify_do_after_front_end(!.Info) ->
                    simplify_goal_trace_goal(MaybeCompiletimeExpr,
                        MaybeRuntimeExpr, FinalSubGoal, Goal1, Goal, !Info)
                ;
                    Goal = Goal1
                ),
                simplify_info_set_common_info(Common, !Info)
            )
        ;
            Goal = Goal1
        ),
        Goal = hlds_goal(GoalExpr, GoalInfo)
    ).

:- pred simplify_goal_trace_goal(maybe(trace_expr(trace_compiletime))::in,
    maybe(trace_expr(trace_runtime))::in, hlds_goal::in, hlds_goal::in,
    hlds_goal::out, simplify_info::in, simplify_info::out) is det.

simplify_goal_trace_goal(MaybeCompiletimeExpr, MaybeRuntimeExpr, SubGoal,
        Goal0, Goal, !Info) :-
    (
        MaybeCompiletimeExpr = yes(CompiletimeExpr),
        KeepGoal = evaluate_compile_time_condition(CompiletimeExpr,
            !.Info)
    ;
        MaybeCompiletimeExpr = no,
        % A missing compile time condition means that the
        % trace goal is always compiled in.
        KeepGoal = yes
    ),
    (
        KeepGoal = no,
        Goal0 = hlds_goal(_GoalExpr0, GoalInfo0),
        Context = goal_info_get_context(GoalInfo0),
        Goal = true_goal_with_context(Context)
    ;
        KeepGoal = yes,
        MaybeRuntimeExpr = no,
        % We keep the scope as a marker of the existence of the
        % trace scope.
        Goal = Goal0
    ;
        KeepGoal = yes,
        MaybeRuntimeExpr = yes(RuntimeExpr),
        % We want to execute SubGoal if and only if RuntimeExpr turns out
        % to be true. We could have the code generators treat this kind of
        % scope as if it were an if-then-else, but that would require
        % duplicating most of the code required to handle code generation
        % for if-then-elses. Instead, we transform the scope into an
        % if-then-else, thus reducing the problem to one that has already
        % been solved.
        %
        % The evaluation of the runtime condition is done as a special kind
        % of foreign_proc, i.e. one that has yes(RuntimeExpr) as its
        % foreign_trace_cond field. This kind of foreign_proc also acts
        % as the marker for the fact that the then-part originated as the goal
        % of a trace scope.
        simplify_info_get_module_info(!.Info, ModuleInfo),
        module_info_get_globals(ModuleInfo, Globals),
        globals.get_target(Globals, Target),
        PrivateBuiltin = mercury_private_builtin_module,
        EvalPredName = "trace_evaluate_runtime_condition",
        some [!EvalAttributes] (
            (
                Target = target_c,
                !:EvalAttributes = default_attributes(lang_c)
            ;
                Target = target_erlang,
                !:EvalAttributes = default_attributes(lang_erlang)
            ;
                Target = target_java,
                !:EvalAttributes = default_attributes(lang_java)
            ;
                ( Target = target_il
                ; Target = target_asm
                ; Target = target_x86_64
                ),
                sorry(this_file,
                    "runtime trace conditions for this target language")
            ),
            set_may_call_mercury(proc_will_not_call_mercury, !EvalAttributes),
            set_thread_safe(proc_thread_safe, !EvalAttributes),
            set_purity(purity_semipure, !EvalAttributes),
            set_terminates(proc_terminates, !EvalAttributes),
            set_may_throw_exception(proc_will_not_throw_exception,
                !EvalAttributes),
            set_may_modify_trail(proc_will_not_modify_trail, !EvalAttributes),
            set_may_call_mm_tabled(will_not_call_mm_tabled, !EvalAttributes),
            EvalAttributes = !.EvalAttributes
        ),
        EvalFeatures = [],
        % The code field of the call_foreign_proc goal is ignored when
        % its foreign_trace_cond field is set to `yes', as we do here.
        EvalCode = "",
        Goal0 = hlds_goal(_GoalExpr0, GoalInfo0),
        Context = goal_info_get_context(GoalInfo0),
        generate_foreign_proc(PrivateBuiltin, EvalPredName,
            pf_predicate, only_mode, detism_semi, purity_semipure,
            EvalAttributes, [], [], yes(RuntimeExpr), EvalCode,
            EvalFeatures, instmap_delta_bind_no_var, ModuleInfo,
            Context, CondGoal),
        GoalExpr = if_then_else([], CondGoal, SubGoal, true_goal),
        Goal = hlds_goal(GoalExpr, GoalInfo0)
    ).

:- pred simplify_goal_foreign_proc(
    hlds_goal_expr::in(goal_expr_foreign_proc), hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal_foreign_proc(GoalExpr0, GoalExpr, !GoalInfo, !Info) :-
    GoalExpr0 = call_foreign_proc(Attributes, PredId, ProcId,
        Args0, ExtraArgs0, MaybeTraceRuntimeCond, Impl),
    (
        simplify_do_const_prop(!.Info),
        simplify_info_get_module_info(!.Info, ModuleInfo),
        module_info_pred_info(ModuleInfo, PredId, CallPredInfo),
        CallModuleSymName = pred_info_module(CallPredInfo),
        is_std_lib_module_name(CallModuleSymName, CallModuleName),
        ExtraArgs0 = [],

        CallPredName = pred_info_name(CallPredInfo),
        proc_id_to_int(ProcId, CallModeNum),
        module_info_get_globals(ModuleInfo, Globals),
        globals.lookup_bool_option(Globals, cross_compiling, CrossCompiling),
        globals.lookup_bool_option(Globals, can_compare_compound_values,
            CanCompareCompoundValues),
        ArgVars = list.map(foreign_arg_var, Args0),
        simplify_library_call(CallModuleName, CallPredName, CallModeNum,
            CrossCompiling, CanCompareCompoundValues, ArgVars, GoalExprPrime,
            !GoalInfo, !Info)
    ->
        GoalExpr = GoalExprPrime,
        simplify_info_set_requantify(!Info)
    ;
        BoxPolicy = get_box_policy(Attributes),
        (
            BoxPolicy = native_if_possible,
            Args = Args0,
            ExtraArgs = ExtraArgs0,
            GoalExpr1 = GoalExpr0
        ;
            BoxPolicy = always_boxed,
            Args = list.map(make_arg_always_boxed, Args0),
            ExtraArgs = list.map(make_arg_always_boxed, ExtraArgs0),
            GoalExpr1 = call_foreign_proc(Attributes, PredId, ProcId,
                Args, ExtraArgs, MaybeTraceRuntimeCond, Impl)
        ),
        (
            simplify_do_opt_duplicate_calls(!.Info),
            goal_info_get_purity(!.GoalInfo) = purity_pure,
            ExtraArgs = []
        ->
            ArgVars = list.map(foreign_arg_var, Args),
            common_optimise_call(PredId, ProcId, ArgVars, !.GoalInfo,
                GoalExpr1, GoalExpr, !Info)
        ;
            GoalExpr = GoalExpr1
        )
    ).

:- func make_arg_always_boxed(foreign_arg) = foreign_arg.

make_arg_always_boxed(Arg) = Arg ^ arg_box_policy := always_boxed.

:- func evaluate_compile_time_condition(trace_expr(trace_compiletime),
    simplify_info) = bool.

evaluate_compile_time_condition(trace_base(Base), Info) = Result :-
    simplify_info_get_module_info(Info, ModuleInfo),
    module_info_get_globals(ModuleInfo, Globals),
    (
        Base = trace_flag(FlagName),
        globals.lookup_accumulating_option(Globals, trace_goal_flags, Flags),
        ( list.member(FlagName, Flags) ->
            Result = yes
        ;
            Result = no
        )
    ;
        Base = trace_grade(Grade),
        Grade = trace_grade_debug,
        globals.lookup_bool_option(Globals, exec_trace, Result)
    ;
        Base = trace_trace_level(Level),
        globals.get_trace_level(Globals, TraceLevel),
        simplify_info_get_pred_proc_info(Info, PredInfo, ProcInfo),
        EffTraceLevel = eff_trace_level(ModuleInfo, PredInfo, ProcInfo,
            TraceLevel),
        (
            Level = trace_level_shallow,
            Result = at_least_at_shallow(EffTraceLevel)
        ;
            Level = trace_level_deep,
            Result = at_least_at_deep(EffTraceLevel)
        )
    ).
evaluate_compile_time_condition(trace_not(ExprA), Info) =
    not(evaluate_compile_time_condition(ExprA, Info)).
evaluate_compile_time_condition(trace_op(Op, ExprA, ExprB), Info) = Result :-
    ResultA = evaluate_compile_time_condition(ExprA, Info),
    ResultB = evaluate_compile_time_condition(ExprB, Info),
    (
        Op = trace_or,
        Result = bool.or(ResultA, ResultB)
    ;
        Op = trace_and,
        Result = bool.and(ResultA, ResultB)
    ).

:- pred simplify_goal_atomic_goal(atomic_goal_type::in,
    atomic_interface_vars::in, atomic_interface_vars::in,
    maybe(list(prog_var))::in, hlds_goal::in, list(hlds_goal)::in,
    list(atomic_interface_vars)::in,
    hlds_goal_expr::out, hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_goal_atomic_goal(GoalType, Outer, Inner, MaybeOutputVars,
        MainGoal0, OrElseGoals0, OrElseInners, GoalExpr, !GoalInfo, !Info) :-
    % XXX STM: At the moment we do not simplify the inner goals as there is
    % a chance that the outer and inner variables will change which will
    % cause problems during expansion of STM constructs.  This will be
    % fixed eventually.
    MainGoal = MainGoal0,
    OrElseGoals = OrElseGoals0,
    % simplify_goal(MainGoal0, MainGoal, !Info),
    % simplify_or_else_goals(OrElseGoals0, OrElseGoals, !Info),
    ShortHand = atomic_goal(GoalType, Outer, Inner, MaybeOutputVars,
        MainGoal, OrElseGoals, OrElseInners),
    GoalExpr = shorthand(ShortHand).

:- pred simplify_or_else_goals(list(hlds_goal)::in, list(hlds_goal)::out,
    simplify_info::in, simplify_info::out) is det.

simplify_or_else_goals([], [], !Info).
simplify_or_else_goals([Goal0 | Goals0], [Goal | Goals], !Info) :-
    simplify_goal(Goal0, Goal, !Info),
    simplify_or_else_goals(Goals0, Goals, !Info).

%-----------------------------------------------------------------------------%

:- pred inequality_goal(prog_var::in, prog_var::in, prog_var::in, string::in,
    bool::in, hlds_goal_info::in, hlds_goal_expr::out, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

inequality_goal(TI, X, Y, Inequality, Invert, GoalInfo, GoalExpr, GoalInfo,
        !Info) :-
    % Construct the variable to hold the comparison result.
    VarSet0 = !.Info ^ simp_varset,
    varset.new_var(VarSet0, R, VarSet),
    !Info ^ simp_varset := VarSet,

    % We have to add the type of R to the var_types.
    simplify_info_get_var_types(!.Info, VarTypes0),
    map.det_insert(VarTypes0, R, comparison_result_type, VarTypes),
    simplify_info_set_var_types(VarTypes, !Info),

    % Construct the call to compare/3.
    Context = hlds_goal.goal_info_get_context(GoalInfo),
    Args    = [TI, R, X, Y],

    simplify_info_get_instmap(!.Info, InstMap),
    instmap_lookup_var(InstMap, X, XInst),
    instmap_lookup_var(InstMap, Y, YInst),
    simplify_info_get_module_info(!.Info, ModuleInfo),
    ModeNo =
        ( if inst_is_unique(ModuleInfo, XInst) then
            ( if inst_is_unique(ModuleInfo, YInst) then 1 else 2 )
        else
            ( if inst_is_unique(ModuleInfo, YInst) then 3 else 0 )
        ),

    Unique   = ground(unique, none),
    ArgInsts = [R - Unique],
    BuiltinModule = mercury_public_builtin_module,
    goal_util.generate_simple_call(BuiltinModule, "compare", pf_predicate,
        mode_no(ModeNo), detism_det, purity_pure, Args, [],
        instmap_delta_from_assoc_list(ArgInsts), ModuleInfo, Context,
        CmpGoal0),
    CmpGoal0 = hlds_goal(CmpExpr, CmpInfo0),
    CmpNonLocals0 = goal_info_get_nonlocals(CmpInfo0),
    goal_info_set_nonlocals(set.insert(CmpNonLocals0, R), CmpInfo0, CmpInfo),
    CmpGoal  = hlds_goal(CmpExpr, CmpInfo),

    % Construct the unification R = Inequality.
    TypeCtor = type_ctor(
        qualified(mercury_public_builtin_module, "comparison_result"), 0),
    ConsId   = cons(qualified(BuiltinModule, Inequality), 0, TypeCtor),
    Bound    = bound(shared, [bound_functor(ConsId, [])]),
    UMode    = ((Unique -> Bound) - (Bound -> Bound)),
    RHS      = rhs_functor(ConsId, no, []),
    UKind    = deconstruct(R, ConsId, [], [], can_fail, cannot_cgc),
    UContext = unify_context(umc_implicit(
        "replacement of inequality with call to compare/3"), []),
    UfyExpr  = unify(R, RHS, UMode, UKind, UContext),
    UfyNonLocals0 = goal_info_get_nonlocals(GoalInfo),
    goal_info_set_nonlocals(set.insert(UfyNonLocals0, R), GoalInfo, UfyInfo),
    UfyGoal  = hlds_goal(UfyExpr, UfyInfo),

    (
        Invert   = no,
        GoalExpr = conj(plain_conj, [CmpGoal, UfyGoal])
    ;
        Invert   = yes,
        GoalExpr = conj(plain_conj,
            [CmpGoal, hlds_goal(negation(UfyGoal), UfyInfo)])
    ).

%-----------------------------------------------------------------------------%

:- pred simplify_call_goal(pred_id::in, proc_id::in, list(prog_var)::in,
    builtin_state::in, hlds_goal_expr::in, hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is det.

simplify_call_goal(PredId, ProcId, Args, IsBuiltin, !GoalExpr, !GoalInfo,
        !Info) :-
    simplify_info_get_module_info(!.Info, ModuleInfo0),
    module_info_pred_proc_info(ModuleInfo0, PredId, ProcId,
        PredInfo, ProcInfo),
    GoalContext = goal_info_get_context(!.GoalInfo),
    % Check for calls to predicates with `pragma obsolete' declarations.
    (
        simplify_do_warn_obsolete(!.Info),
        pred_info_get_markers(PredInfo, Markers),
        check_marker(Markers, marker_obsolete),

        simplify_info_get_det_info(!.Info, DetInfo0),
        det_info_get_pred_id(DetInfo0, ThisPredId),

        % Don't warn about directly recursive calls. (That would cause
        % spurious warnings, particularly with builtin predicates,
        % or preds defined using foreign_procs.)
        PredId \= ThisPredId,

        % Don't warn about calls from predicates that also have a
        % `pragma obsolete' declaration.  Doing so just results in
        % spurious warnings.
        module_info_pred_info(ModuleInfo0, ThisPredId, ThisPredInfo),
        pred_info_get_markers(ThisPredInfo, ThisPredMarkers),
        not check_marker(ThisPredMarkers, marker_obsolete)
    ->
        % XXX warn_obsolete isn't really a simple code warning.
        % We should add a separate warning type for this.
        ObsoletePredPieces = describe_one_pred_name(ModuleInfo0,
            should_module_qualify, PredId),
        ObsoletePieces = [words("Warning: call to obsolete")] ++
            ObsoletePredPieces ++ [suffix("."), nl],
        ObsoleteMsg = simple_msg(GoalContext,
            [option_is_set(warn_simple_code, yes, [always(ObsoletePieces)])]),
        ObsoleteSeverity = severity_conditional(warn_simple_code, yes,
            severity_warning, no),
        ObsoleteSpec = error_spec(ObsoleteSeverity,
            phase_simplify(report_in_any_mode), [ObsoleteMsg]),
        simplify_info_add_error_spec(ObsoleteSpec, !Info)
    ;
        true
    ),

    % Check for recursive calls with the same input arguments,
    % and warn about them (since they will lead to infinite loops).
    (
        simplify_do_warn_simple_code(!.Info),

        % Is this a (directly) recursive call, i.e. is the procedure being
        % called the same as the procedure we're analyzing?
        simplify_info_get_det_info(!.Info, DetInfo),
        det_info_get_pred_id(DetInfo, PredId),
        det_info_get_proc_id(DetInfo, ProcId),

        % Don't count inline builtins. (The compiler generates code for
        % builtins that looks recursive, so that you can take their address,
        % but since the recursive call actually expands into inline code,
        % it is not infinite recursion.)
        IsBuiltin \= inline_builtin,

        % Don't warn if we're inside a lambda goal, because the recursive call
        % may not be executed.
        \+ simplify_info_inside_lambda(!.Info),

        % Are the input arguments the same (or equivalent)?
        simplify_info_get_module_info(!.Info, ModuleInfo1),
        module_info_pred_proc_info(ModuleInfo1, PredId, ProcId,
            PredInfo1, ProcInfo1),
        proc_info_get_headvars(ProcInfo1, HeadVars),
        proc_info_get_argmodes(ProcInfo1, ArgModes),
        simplify_info_get_common_info(!.Info, CommonInfo1),
        input_args_are_equiv(Args, HeadVars, ArgModes,
            CommonInfo1, ModuleInfo1),

        % Don't warn if the input arguments' modes initial insts
        % contain `any' insts, since the arguments might have become
        % more constrained before the recursive call, in which case
        % the recursion might eventually terminate.
        %
        % XXX The following check will only warn if the inputs are
        % all fully ground; i.e. we won't warn in the case of
        % partially instantiated insts such as list_skel(free).
        % Still, it is better to miss warnings in that rare and
        % unsupported case rather than to issue spurious warnings
        % in cases involving `any' insts.  We should only warn about
        % definite nontermination here, not possible nontermination;
        % warnings about possible nontermination should only be given
        % if the termination analysis pass is enabled.
        all [ArgMode] (
            (
                list.member(ArgMode, ArgModes),
                mode_is_input(ModuleInfo1, ArgMode)
            )
        =>
            mode_is_fully_input(ModuleInfo1, ArgMode)
        ),

        % Don't count procs using minimal evaluation as they should always
        % terminate if they have a finite number of answers.
        \+ proc_info_get_eval_method(ProcInfo, eval_minimal(_)),

        % Don't warn about impure procedures, since they may modify the state
        % in ways not visible to us (unlike pure and semipure procedures).
        pred_info_get_purity(PredInfo1, Purity),
        \+ Purity = purity_impure
    ->
        % It would be better if we supplied more information than just
        % the line number, e.g. we should print the name of the containing
        % predicate.

        InfiniteRecMainPieces = [words("Warning: recursive call will lead to"),
            words("infinite recursion.")],
        InfiniteRecVerbosePieces =
            [words("If this recursive call is executed,"),
            words("the procedure will call itself"),
            words("with exactly the same input arguments,"),
            words("leading to infinite recursion.")],
        InfiniteRecMsg = simple_msg(GoalContext,
            [option_is_set(warn_simple_code, yes,
                [always(InfiniteRecMainPieces),
                verbose_only(InfiniteRecVerbosePieces)])]),
        InfiniteRecSeverity = severity_conditional(warn_simple_code, yes,
            severity_warning, no),
        InfiniteRecSpec = error_spec(InfiniteRecSeverity,
            phase_simplify(report_in_any_mode), [InfiniteRecMsg]),
        simplify_info_add_error_spec(InfiniteRecSpec, !Info)
    ;
        true
    ),

    % Check for duplicate calls to the same procedure.
    (
        simplify_do_opt_duplicate_calls(!.Info),
        goal_info_get_purity(!.GoalInfo) = purity_pure
    ->
        common_optimise_call(PredId, ProcId, Args, !.GoalInfo, !GoalExpr,
            !Info)
    ;
        simplify_do_warn_duplicate_calls(!.Info),
        goal_info_get_purity(!.GoalInfo) = purity_pure
    ->
        % We need to do the pass, for the warnings, but we ignore
        % the optimized goal and instead use the original one.
        common_optimise_call(PredId, ProcId, Args, !.GoalInfo,
            !.GoalExpr, _NewGoalExpr, !Info)
    ;
        true
    ),

    % Try to evaluate the call at compile-time.
    (
        simplify_info_get_module_info(!.Info, ModuleInfo2),
        !.GoalExpr = plain_call(CallPredId, CallProcId, CallArgs, _, _, _),
        module_info_pred_info(ModuleInfo2, CallPredId, CallPredInfo),
        CallModuleSymName = pred_info_module(CallPredInfo),
        is_std_lib_module_name(CallModuleSymName, CallModuleName)
    ->
        simplify_info_get_instmap(!.Info, Instmap0),
        simplify_info_get_var_types(!.Info, VarTypes),

        CallPredName = pred_info_name(CallPredInfo),
        proc_id_to_int(CallProcId, CallModeNum),
        (
            simplify_do_const_prop(!.Info),
            const_prop.evaluate_call(CallModuleName, CallPredName, CallModeNum,
                CallArgs, VarTypes, Instmap0, ModuleInfo2, GoalExprPrime,
                !GoalInfo)
        ->
            !:GoalExpr = GoalExprPrime,
            simplify_info_set_requantify(!Info)
        ;
            module_info_get_globals(ModuleInfo2, Globals),
            globals.lookup_bool_option(Globals, cross_compiling,
                CrossCompiling),
            globals.lookup_bool_option(Globals, can_compare_compound_values,
                CanCompareCompoundValues),
            simplify_library_call(CallModuleName, CallPredName, CallModeNum,
                CrossCompiling, CanCompareCompoundValues, CallArgs,
                GoalExprPrime, !GoalInfo, !Info)
        ->
            !:GoalExpr = GoalExprPrime,
            simplify_info_set_requantify(!Info)
        ;
            true
        )
    ;
        true
    ).

    % simplify_library_call(ModuleName, ProcName, ModeNum, CrossCompiling,
    %   Args, GoalExpr, !GoalInfo, !Info):
    %
    % This attempts to simplify a call to
    %   ModuleName.ProcName(ArgList)
    % whose mode is specified by ModeNum.
    %
    % The list of predicates and/or functions that we may wish to introduce
    % calls to should be listed in simplify_may_introduce_calls, to prevent
    % dead_proc_elim from deleting them from the predicate table before we
    % get here.
    %
:- pred simplify_library_call(string::in, string::in, int::in, bool::in,
    bool::in, list(prog_var)::in, hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is semidet.

simplify_library_call("builtin", "compare", _ModeNum, _CrossCompiling,
        CanCompareCompoundValues, Args, GoalExpr, !GoalInfo, !Info) :-
    % On the Erlang backend, it is faster for us to use builtin comparison
    % operators on high level data structures than to deconstruct the data
    % structure and compare the atomic constituents.  We can only do this on
    % values of types which we know not to have user-defined equality
    % predicates.
    %
    CanCompareCompoundValues = yes,
    list.reverse(Args, [Y, X, Res | _]),
    simplify_info_get_module_info(!.Info, ModuleInfo),
    simplify_info_get_var_types(!.Info, VarTypes),
    map.lookup(VarTypes, Y, Type),
    type_definitely_has_no_user_defined_equality_pred(ModuleInfo, Type),

    Context = goal_info_get_context(!.GoalInfo),
    goal_util.generate_simple_call(mercury_private_builtin_module,
        "builtin_compound_eq", pf_predicate, only_mode, detism_semi,
        purity_pure, [X, Y], [], instmap_delta_bind_no_var, ModuleInfo,
        Context, CondEq),
    goal_util.generate_simple_call(mercury_private_builtin_module,
        "builtin_compound_lt", pf_predicate, only_mode, detism_semi,
        purity_pure, [X, Y], [], instmap_delta_bind_no_var, ModuleInfo,
        Context, CondLt),

    Builtin = mercury_public_builtin_module,
    TypeCtor = type_ctor(
        qualified(mercury_public_builtin_module, "comparison_result"), 0),
    make_const_construction(Res, cons(qualified(Builtin, "="), 0, TypeCtor),
        ReturnEq),
    make_const_construction(Res, cons(qualified(Builtin, "<"), 0, TypeCtor),
        ReturnLt),
    make_const_construction(Res, cons(qualified(Builtin, ">"), 0, TypeCtor),
        ReturnGt),

    NonLocals = set.from_list([Res, X, Y]),
    goal_info_set_nonlocals(NonLocals, !GoalInfo),

    GoalExpr = if_then_else([], CondEq, ReturnEq, Rest),
    Rest = hlds_goal(if_then_else([], CondLt, ReturnLt, ReturnGt), !.GoalInfo).

simplify_library_call("int", PredName, _ModeNum, CrossCompiling,
        _CanCompareCompoundValues, Args, GoalExpr, !GoalInfo, !Info) :-
    simplify_do_const_prop(!.Info),
    CrossCompiling = no,
    (
        PredName = "quot_bits_per_int",
        Args = [X, Y],
        % There is no point in checking whether bits_per_int is 0; it isn't.
        Op = "unchecked_quotient",
        simplify_library_call_int_arity2(Op, X, Y, GoalExpr, !GoalInfo, !Info)
    ;
        PredName = "times_bits_per_int",
        Args = [X, Y],
        Op = "*",
        simplify_library_call_int_arity2(Op, X, Y, GoalExpr, !GoalInfo, !Info)
    ;
        PredName = "rem_bits_per_int",
        Args = [X, Y],
        % There is no point in checking whether bits_per_int is 0; it isn't.
        Op = "unchecked_rem",
        simplify_library_call_int_arity2(Op, X, Y, GoalExpr, !GoalInfo, !Info)
    ;
        PredName = "bits_per_int",
        Args = [X],
        ConstConsId = int_const(int.bits_per_int),
        RHS = rhs_functor(ConstConsId, no, []),
        ModeOfX = out_mode,
        ModeOfConstConsId = in_mode,
        UnifyMode = ModeOfX - ModeOfConstConsId,
        How = construct_dynamically,
        IsUnique = cell_is_shared,
        Sub = no_construct_sub_info,
        Unification = construct(X, ConstConsId, [], [], How, IsUnique, Sub),
        UnifyMainContext = umc_implicit("simplify_library_call"),
        UnifyContext = unify_context(UnifyMainContext, []),
        GoalExpr = unify(X, RHS, UnifyMode, Unification, UnifyContext)
    ).

:- pred simplify_library_call_int_arity2(string::in,
    prog_var::in, prog_var::in, hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_info::in, simplify_info::out) is semidet.

simplify_library_call_int_arity2(Op, X, Y, GoalExpr, !GoalInfo, !Info) :-
    simplify_info_get_varset(!.Info, VarSet0),
    simplify_info_get_var_types(!.Info, VarTypes0),
    varset.new_var(VarSet0, ConstVar, VarSet),
    map.det_insert(VarTypes0, ConstVar, int_type, VarTypes),
    simplify_info_set_varset(VarSet, !Info),
    simplify_info_set_var_types(VarTypes, !Info),

    ConstConsId = int_const(int.bits_per_int),
    ConstUnification = construct(ConstVar, ConstConsId, [], [],
        construct_dynamically, cell_is_shared, no_construct_sub_info),
    ConstRHS = rhs_functor(ConstConsId, no, []),
    % The context shouldn't matter.
    ConstUnifyContext = unify_context(umc_explicit, []),
    Ground = ground_inst,
    ConstMode = (free -> Ground) - (Ground -> Ground),
    ConstGoalExpr = unify(ConstVar, ConstRHS, ConstMode, ConstUnification,
        ConstUnifyContext),
    ConstNonLocals = set.make_singleton_set(ConstVar),
    InstMapDelta = instmap_delta_bind_var(ConstVar),
    goal_info_init(ConstNonLocals, InstMapDelta,
        detism_det, purity_pure, ConstGoalInfo),
    ConstGoal = hlds_goal(ConstGoalExpr, ConstGoalInfo),

    IntModuleSymName = mercury_std_lib_module_name(unqualified("int")),
    OpSymName = qualified(IntModuleSymName, Op),
    simplify_info_get_module_info(!.Info, ModuleInfo),
    module_info_get_predicate_table(ModuleInfo, PredTable),
    predicate_table_search_func_sym_arity(PredTable, is_fully_qualified,
        OpSymName, 2, OpPredIds),
    OpPredIds = [OpPredId],
    OpProcIdInt = 0,
    proc_id_to_int(OpProcId, OpProcIdInt),
    OpArgs = [X, ConstVar, Y],
    MaybeUnifyContext = no,
    IsBuiltin = inline_builtin,
    OpGoalExpr = plain_call(OpPredId, OpProcId, OpArgs, IsBuiltin,
        MaybeUnifyContext, OpSymName),

    OpGoalInfo0 = !.GoalInfo,
    OpNonLocals0 = goal_info_get_nonlocals(OpGoalInfo0),
    set.insert(OpNonLocals0, ConstVar, OpNonLocals),
    goal_info_set_nonlocals(OpNonLocals, OpGoalInfo0, OpGoalInfo),
    OpGoal = hlds_goal(OpGoalExpr, OpGoalInfo),

    GoalExpr = conj(plain_conj, [ConstGoal, OpGoal]).

% For some reason, the compiler records the original arity of
% int.unchecked_quotient as 3, not 2. Don't check the arities
% until this is fixed.
simplify_may_introduce_calls("private_builtin", "builtin_compound_eq", _).
simplify_may_introduce_calls("private_builtin", "builtin_compound_lt", _).
simplify_may_introduce_calls("int", "unchecked_quotient", _).
simplify_may_introduce_calls("int", "unchecked_rem", _).
simplify_may_introduce_calls("int", "*", _).
simplify_may_introduce_calls("io", "write_string", _).
simplify_may_introduce_calls("string", "int_to_string", _).
simplify_may_introduce_calls("string", "char_to_string", _).
simplify_may_introduce_calls("string", "float_to_string", _).
simplify_may_introduce_calls("string", "++", _).

%-----------------------------------------------------------------------------%

:- pred process_compl_unify(prog_var::in, prog_var::in, uni_mode::in,
    can_fail::in, list(prog_var)::in, unify_context::in, hlds_goal_info::in,
    hlds_goal::out, simplify_info::in, simplify_info::out) is det.

process_compl_unify(XVar, YVar, UniMode, CanFail, _OldTypeInfoVars, Context,
        GoalInfo0, Goal, !Info) :-
    simplify_info_get_module_info(!.Info, ModuleInfo),
    simplify_info_get_var_types(!.Info, VarTypes),
    map.lookup(VarTypes, XVar, Type),
    ( Type = type_variable(TypeVar, Kind) ->
        % Convert polymorphic unifications into calls to `unify/2',
        % the general unification predicate, passing the appropriate type_info:
        %   unify(TypeInfoVar, X, Y)
        % where TypeInfoVar is the type_info variable associated with
        % the type of the variables that are being unified.

        type_info_locn(TypeVar, Kind, TypeInfoVar, ExtraGoals, !Info),
        call_generic_unify(TypeInfoVar, XVar, YVar, ModuleInfo, !.Info,
            Context, GoalInfo0, Call)

    ; type_is_higher_order(Type) ->
        % Convert higher-order unifications into calls to
        % builtin_unify_pred (which calls error/1).
        GContext = goal_info_get_context(GoalInfo0),
        generate_simple_call(mercury_private_builtin_module,
            "builtin_unify_pred", pf_predicate, mode_no(0), detism_semi,
            purity_pure, [XVar, YVar], [], instmap_delta_bind_no_var,
            ModuleInfo, GContext, hlds_goal(Call0, _)),
        simplify_goal_expr(Call0, Call1, GoalInfo0, GoalInfo, !Info),
        Call = hlds_goal(Call1, GoalInfo),
        ExtraGoals = []
    ;
        ( type_to_ctor_and_args(Type, TypeCtorPrime, TypeArgsPrime) ->
            TypeCtor = TypeCtorPrime,
            TypeArgs = TypeArgsPrime
        ;
            unexpected(this_file, "type_to_ctor_and_args failed")
        ),
        determinism_components(Det, CanFail, at_most_one),
        unify_proc.lookup_mode_num(ModuleInfo, TypeCtor, UniMode, Det,
            ProcId),
        module_info_get_globals(ModuleInfo, Globals),
        globals.lookup_bool_option(Globals, special_preds, SpecialPreds),
        globals.lookup_bool_option(Globals, can_compare_compound_values,
            CanCompareCompoundValues),
        (
            % On the Erlang backend, it is faster for us to use builtin
            % comparison operators on high level data structures than to
            % deconstruct the data structure and compare the atomic
            % constituents.  We can only do this on values of types which we
            % know not to have user-defined equality predicates.
            hlds_pred.in_in_unification_proc_id(ProcId),
            CanCompareCompoundValues = yes,
            type_definitely_has_no_user_defined_equality_pred(ModuleInfo, Type)
        ->
            ExtraGoals = [],
            call_builtin_compound_eq(XVar, YVar, ModuleInfo, GoalInfo0, Call)
        ;
            hlds_pred.in_in_unification_proc_id(ProcId),
            (
                SpecialPreds = no
            ;
                SpecialPreds = yes,

                % For most imported types we only generate unification
                % predicate declarations if they are needed for complicated
                % unifications other than proc_id 0. higher_order.m will
                % specialize these cases if possible.
                %
                special_pred_is_generated_lazily(ModuleInfo, TypeCtor)
            )
        ->
            make_type_info_vars([Type], TypeInfoVars, ExtraGoals, !Info),
            ( TypeInfoVars = [TypeInfoVarPrime] ->
                TypeInfoVar = TypeInfoVarPrime
            ;
                unexpected(this_file, "process_compl_unify: " ++
                    "more than one typeinfo for one type var")
            ),
            call_generic_unify(TypeInfoVar, XVar, YVar, ModuleInfo, !.Info,
                Context, GoalInfo0, Call)
        ;
            % Convert other complicated unifications into calls to
            % specific unification predicates, inserting extra typeinfo
            % arguments if necessary.
            make_type_info_vars(TypeArgs, TypeInfoVars, ExtraGoals, !Info),
            call_specific_unify(TypeCtor, TypeInfoVars, XVar, YVar, ProcId,
                ModuleInfo, Context, GoalInfo0, Call0, CallGoalInfo0),
            simplify_goal_expr(Call0, Call1, CallGoalInfo0, CallGoalInfo1,
                !Info),
            Call = hlds_goal(Call1, CallGoalInfo1)
        )
    ),
    list.append(ExtraGoals, [Call], ConjList),
    conj_list_to_goal(ConjList, GoalInfo0, Goal).

:- pred call_generic_unify(prog_var::in, prog_var::in,  prog_var::in,
    module_info::in, simplify_info::in, unify_context::in,
    hlds_goal_info::in, hlds_goal::out) is det.

call_generic_unify(TypeInfoVar, XVar, YVar, ModuleInfo, _, _, GoalInfo,
        Call) :-
    ArgVars = [TypeInfoVar, XVar, YVar],
    Context = goal_info_get_context(GoalInfo),
    goal_util.generate_simple_call(mercury_public_builtin_module,
        "unify", pf_predicate, mode_no(0), detism_semi, purity_pure, ArgVars,
        [], instmap_delta_bind_no_var, ModuleInfo, Context, Call).

:- pred call_specific_unify(type_ctor::in, list(prog_var)::in,
    prog_var::in, prog_var::in, proc_id::in,
    module_info::in, unify_context::in, hlds_goal_info::in,
    hlds_goal_expr::out, hlds_goal_info::out) is det.

call_specific_unify(TypeCtor, TypeInfoVars, XVar, YVar, ProcId, ModuleInfo,
        Context, GoalInfo0, CallExpr, CallGoalInfo) :-
    % Create the new call goal.
    list.append(TypeInfoVars, [XVar, YVar], ArgVars),
    module_info_get_special_pred_map(ModuleInfo, SpecialPredMap),
    map.lookup(SpecialPredMap, spec_pred_unify - TypeCtor, PredId),
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    ModuleName = pred_info_module(PredInfo),
    PredName = pred_info_name(PredInfo),
    SymName = qualified(ModuleName, PredName),
    CallContext = call_unify_context(XVar, rhs_var(YVar), Context),
    CallExpr = plain_call(PredId, ProcId, ArgVars, not_builtin,
        yes(CallContext), SymName),

    % Add the extra type_info vars to the nonlocals for the call.
    NonLocals0 = goal_info_get_nonlocals(GoalInfo0),
    set.insert_list(NonLocals0, TypeInfoVars, NonLocals),
    goal_info_set_nonlocals(NonLocals, GoalInfo0, CallGoalInfo).

:- pred call_builtin_compound_eq(prog_var::in, prog_var::in, module_info::in,
    hlds_goal_info::in, hlds_goal::out) is det.

call_builtin_compound_eq(XVar, YVar, ModuleInfo, GoalInfo, Call) :-
    Context = goal_info_get_context(GoalInfo),
    goal_util.generate_simple_call(mercury_private_builtin_module,
        "builtin_compound_eq", pf_predicate, only_mode, detism_semi,
        purity_pure, [XVar, YVar], [], instmap_delta_bind_no_var, ModuleInfo,
        Context, Call).

%-----------------------------------------------------------------------------%

:- pred make_type_info_vars(list(mer_type)::in, list(prog_var)::out,
    list(hlds_goal)::out, simplify_info::in, simplify_info::out) is det.

make_type_info_vars(Types, TypeInfoVars, TypeInfoGoals, !Info) :-
    % Extract the information from simplify_info.
    simplify_info_get_det_info(!.Info, DetInfo0),
    simplify_info_get_varset(!.Info, VarSet0),
    simplify_info_get_var_types(!.Info, VarTypes0),
    simplify_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
    det_info_get_module_info(DetInfo0, ModuleInfo0),
    det_info_get_pred_id(DetInfo0, PredId),
    det_info_get_proc_id(DetInfo0, ProcId),

    some [!PredInfo, !ProcInfo, !PolyInfo] (
        % The varset, vartypes and rtti_varmaps get updated by the call to
        % polymorphism.m, below.  That module will work on the poly_info,
        % however, which is derived from the information in the proc_info.
        % Therefore we:
        %   - copy the info from the simplify_info to the proc_info,
        %   - create a poly_info from the proc_info,
        %   - do the polymorphism transformation,
        %   - extract info from the poly_info and put it in the proc_info,
        %   - copy the information from the proc_info back into the
        %     simplify_info.

        module_info_pred_proc_info(ModuleInfo0, PredId, ProcId,
            !:PredInfo, !:ProcInfo),
        proc_info_set_vartypes(VarTypes0, !ProcInfo),
        proc_info_set_varset(VarSet0, !ProcInfo),
        proc_info_set_rtti_varmaps(RttiVarMaps0, !ProcInfo),

        % Call polymorphism.m to create the type_infos.
        create_poly_info(ModuleInfo0, !.PredInfo, !.ProcInfo, !:PolyInfo),
        term.context_init(Context),
        polymorphism_make_type_info_vars(Types, Context,
            TypeInfoVars, TypeInfoGoals, !PolyInfo),
        poly_info_extract(!.PolyInfo, !PredInfo, !ProcInfo, ModuleInfo1),

        proc_info_get_vartypes(!.ProcInfo, VarTypes),
        proc_info_get_varset(!.ProcInfo, VarSet),
        proc_info_get_rtti_varmaps(!.ProcInfo, RttiVarMaps),
        simplify_info_set_var_types(VarTypes, !Info),
        simplify_info_set_varset(VarSet, !Info),
        simplify_info_set_rtti_varmaps(RttiVarMaps, !Info),

        % Put the new proc_info and pred_info back in the module_info
        % and put the new module_info back in the simplify_info.
        module_info_set_pred_proc_info(PredId, ProcId, !.PredInfo, !.ProcInfo,
            ModuleInfo1, ModuleInfo)
    ),
    simplify_info_set_module_info(ModuleInfo, !Info).

:- pred type_info_locn(tvar::in, kind::in, prog_var::out,
    list(hlds_goal)::out, simplify_info::in, simplify_info::out) is det.

type_info_locn(TypeVar, Kind, TypeInfoVar, Goals, !Info) :-
    simplify_info_get_rtti_varmaps(!.Info, RttiVarMaps),
    rtti_lookup_type_info_locn(RttiVarMaps, TypeVar, TypeInfoLocn),
    (
        % If the typeinfo is available in a variable, just use it.
        TypeInfoLocn = type_info(TypeInfoVar),
        Goals = []
    ;
        % If the typeinfo is in a typeclass_info then we need to extract it.
        TypeInfoLocn = typeclass_info(TypeClassInfoVar, Index),
        extract_type_info(TypeVar, Kind, TypeClassInfoVar, Index, Goals,
            TypeInfoVar, !Info)
    ).

:- pred extract_type_info(tvar::in, kind::in, prog_var::in, int::in,
    list(hlds_goal)::out, prog_var::out,
    simplify_info::in, simplify_info::out) is det.

extract_type_info(TypeVar, Kind, TypeClassInfoVar, Index, Goals, TypeInfoVar,
        !Info) :-
    simplify_info_get_module_info(!.Info, ModuleInfo),
    simplify_info_get_varset(!.Info, VarSet0),
    simplify_info_get_var_types(!.Info, VarTypes0),
    simplify_info_get_rtti_varmaps(!.Info, RttiVarMaps0),

    polymorphism.gen_extract_type_info(TypeVar, Kind, TypeClassInfoVar, Index,
        ModuleInfo, Goals, TypeInfoVar, VarSet0, VarSet, VarTypes0, VarTypes,
        RttiVarMaps0, RttiVarMaps),

    simplify_info_set_var_types(VarTypes, !Info),
    simplify_info_set_varset(VarSet, !Info),
    simplify_info_set_rtti_varmaps(RttiVarMaps, !Info).

%-----------------------------------------------------------------------------%

    % input_args_are_equiv(Args, HeadVars, Modes, CommonInfo, ModuleInfo):
    %
    % Succeeds if all the input arguments (determined by looking at `Modes')
    % in `Args' are equivalent (according to the equivalence class specified
    % by `CommonInfo') to the corresponding variables in HeadVars.
    % HeadVars, Modes, and Args should all be lists of the same length.
    %
:- pred input_args_are_equiv(list(prog_var)::in, list(prog_var)::in,
    list(mer_mode)::in, common_info::in, module_info::in) is semidet.

input_args_are_equiv([], [], _, _, _).
input_args_are_equiv([Arg | Args], [HeadVar | HeadVars], [Mode | Modes],
        CommonInfo, ModuleInfo) :-
    ( mode_is_input(ModuleInfo, Mode) ->
        common_vars_are_equivalent(Arg, HeadVar, CommonInfo)
    ;
        true
    ),
    input_args_are_equiv(Args, HeadVars, Modes, CommonInfo, ModuleInfo).

%-----------------------------------------------------------------------------%

    % replace nested `scope's with a single `scope',
    %
:- pred nested_scopes(scope_reason::in, hlds_goal::in,
    hlds_goal_info::in, hlds_goal::out) is det.

nested_scopes(Reason0, InnerGoal0, OuterGoalInfo, Goal) :-
    nested_scopes_2(Reason0, Reason, InnerGoal0, InnerGoal),
    InnerGoal = hlds_goal(_, GoalInfo),
    (
        Reason = exist_quant(_),
        Detism = goal_info_get_determinism(GoalInfo),
        OuterDetism = goal_info_get_determinism(OuterGoalInfo),
        Detism = OuterDetism
    ->
        % If the inner and outer detisms match the `some' scope is unnecessary.
        Goal = InnerGoal
    ;
        Goal = hlds_goal(scope(Reason, InnerGoal), OuterGoalInfo)
    ).

:- pred nested_scopes_2(scope_reason::in, scope_reason::out,
    hlds_goal::in, hlds_goal::out) is det.

nested_scopes_2(Reason0, Reason, Goal0, Goal) :-
    (
        Goal0 = hlds_goal(scope(Reason1, Goal1), _),
        (
            Reason0 = exist_quant(Vars0),
            Reason1 = exist_quant(Vars1)
        ->
            Reason2 = exist_quant(Vars0 ++ Vars1)
        ;
            Reason0 = barrier(Removable0),
            Reason1 = barrier(Removable1)
        ->
            (
                Removable0 = removable,
                Removable1 = removable
            ->
                Removable2 = removable
            ;
                Removable2 = not_removable
            ),
            Reason2 = barrier(Removable2)
        ;
            Reason0 = commit(ForcePruning0),
            Reason1 = commit(ForcePruning1)
        ->
            (
                ForcePruning0 = dont_force_pruning,
                ForcePruning1 = dont_force_pruning
            ->
                ForcePruning2 = dont_force_pruning
            ;
                ForcePruning2 = force_pruning
            ),
            Reason2 = commit(ForcePruning2)
        ;
            fail
        )
    ->
        nested_scopes_2(Reason2, Reason, Goal1, Goal)
    ;
        Reason = Reason0,
        Goal = Goal0
    ).

%-----------------------------------------------------------------------------%

    % When removing a level of wrapping around a goal, if the determinisms
    % are not the same, we really need to rerun determinism analysis on the
    % procedure. I think this is a similar situation to inlining of erroneous
    % goals. The safe thing to do is to wrap a `scope' around the inner goal
    % if the inner and outer determinisms are not the same. It probably
    % won't happen that often.
    %
:- pred maybe_wrap_goal(hlds_goal_info::in, hlds_goal_info::in,
    hlds_goal_expr::in, hlds_goal_expr::out, hlds_goal_info::out,
    simplify_info::in, simplify_info::out)  is det.

maybe_wrap_goal(OuterGoalInfo, InnerGoalInfo, GoalExpr1, GoalExpr, GoalInfo,
        !Info) :-
    (
        InnerDet = goal_info_get_determinism(InnerGoalInfo),
        OuterDet = goal_info_get_determinism(OuterGoalInfo),
        InnerDet = OuterDet
    ->
        GoalExpr = GoalExpr1,
        GoalInfo = InnerGoalInfo
    ;
        GoalExpr = scope(commit(dont_force_pruning),
            hlds_goal(GoalExpr1, InnerGoalInfo)),
        GoalInfo = OuterGoalInfo,
        simplify_info_set_rerun_det(!Info)
    ).

%-----------------------------------------------------------------------------%

:- pred simplify_conj(list(hlds_goal)::in, list(hlds_goal)::in,
    list(hlds_goal)::out, hlds_goal_info::in,
    simplify_info::in, simplify_info::out) is det.

simplify_conj([], RevGoals, Goals, _, !Info) :-
    list.reverse(RevGoals, Goals).
simplify_conj([Goal0 | Goals0], !.RevGoals, Goals, ConjInfo, !Info) :-
    Info0 = !.Info,
    % Flatten conjunctions.
    ( Goal0 = hlds_goal(conj(plain_conj, SubGoals), _) ->
        list.append(SubGoals, Goals0, Goals1),
        simplify_conj(Goals1, !.RevGoals, Goals, ConjInfo, !Info)
    ;
        simplify_goal(Goal0, Goal1, !Info),
        (
            % Flatten conjunctions.
            Goal1 = hlds_goal(conj(plain_conj, SubGoals1), _)
        ->
            simplify_info_undo_goal_updates(Info0, !Info),
            list.append(SubGoals1, Goals0, Goals1),
            simplify_conj(Goals1, !.RevGoals, Goals, ConjInfo, !Info)
        ;
            % Delete unreachable goals.
            (
                simplify_info_get_instmap(!.Info, InstMap1),
                instmap_is_unreachable(InstMap1)
            ;
                Goal1 = hlds_goal(_, GoalInfo1),
                Detism1 = goal_info_get_determinism(GoalInfo1),
                determinism_components(Detism1, _, at_most_zero)
            )
        ->
            conjoin_goal_and_rev_goal_list(Goal1, !RevGoals),
            (
                ( Goal1 = hlds_goal(disj([]), _)
                ; Goals0 = []
                )
            ->
                true
            ;
                % We insert an explicit failure at the end of the
                % non-succeeding conjunction. This is necessary, since
                % the unreachability of the instmap could have been derived
                % using inferred determinism information. Without the
                % explicit fail goal, mode errors could result if mode
                % analysis is rerun, since according to the language
                % specification, mode analysis does not use inferred
                % determinism information when deciding what can never succeed.
                Goal0 = hlds_goal(_, GoalInfo0),
                Context = goal_info_get_context(GoalInfo0),
                FailGoal = fail_goal_with_context(Context),
                conjoin_goal_and_rev_goal_list(FailGoal, !RevGoals)
            ),
            list.reverse(!.RevGoals, Goals)
        ;
            conjoin_goal_and_rev_goal_list(Goal1, !RevGoals),
            simplify_info_update_instmap(Goal1, !Info),
            simplify_conj(Goals0, !.RevGoals, Goals, ConjInfo, !Info)
        )
    ).

:- pred conjoin_goal_and_rev_goal_list(hlds_goal::in,
    hlds_goals::in, hlds_goals::out) is det.

conjoin_goal_and_rev_goal_list(Goal, RevGoals0, RevGoals) :-
    ( Goal = hlds_goal(conj(plain_conj, Goals), _) ->
        list.reverse(Goals, Goals1),
        list.append(Goals1, RevGoals0, RevGoals)
    ;
        RevGoals = [Goal | RevGoals0]
    ).

%-----------------------------------------------------------------------------%

:- pred simplify_par_conj(list(hlds_goal)::in, list(hlds_goal)::out,
    simplify_info::in, simplify_info::in, simplify_info::out) is det.

simplify_par_conj([], [], _, !Info).
simplify_par_conj([Goal0 |Goals0], [Goal | Goals], Info0, !Info) :-
    simplify_goal(Goal0, Goal, !Info),
    simplify_info_update_instmap(Goal, !Info),
    % Reset common_info to what it was at the start of the parallel
    % conjunction, so as not to introduce more dependencies due to
    % removal of duplicate calls, etc.
    simplify_info_get_common_info(Info0, Common),
    simplify_info_set_common_info(Common, !Info),
    simplify_par_conj(Goals0, Goals, Info0, !Info).

%-----------------------------------------------------------------------------%

:- pred excess_assigns_in_conj(hlds_goal_info::in,
    list(hlds_goal)::in, list(hlds_goal)::out,
    simplify_info::in, simplify_info::out) is det.

excess_assigns_in_conj(ConjInfo, Goals0, Goals, !Info) :-
    ( simplify_do_excess_assign(!.Info) ->
        ConjNonLocals = goal_info_get_nonlocals(ConjInfo),
        map.init(Subn0),
        simplify_info_get_module_info(!.Info, ModuleInfo),
        module_info_get_globals(ModuleInfo, Globals),
        globals.get_trace_level(Globals, TraceLevel),
        globals.lookup_bool_option(Globals, trace_optimized, TraceOptimized),
        simplify_info_get_varset(!.Info, VarSet0),
        find_excess_assigns_in_conj(TraceLevel, TraceOptimized,
            VarSet0, ConjNonLocals, Goals0, [], RevGoals, Subn0, Subn1),
        ( map.is_empty(Subn1) ->
            Goals = Goals0
        ;
            renaming_transitive_closure(Subn1, Subn),
            list.reverse(RevGoals, Goals1),
            rename_vars_in_goals(need_not_rename, Subn, Goals1, Goals),
            map.keys(Subn0, RemovedVars),
            varset.delete_vars(VarSet0, RemovedVars, VarSet),
            simplify_info_set_varset(VarSet, !Info),
            simplify_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
            apply_substitutions_to_rtti_varmaps(map.init, map.init, Subn,
                RttiVarMaps0, RttiVarMaps),
            simplify_info_set_rtti_varmaps(RttiVarMaps, !Info)
        )
    ;
        Goals = Goals0
    ).

:- type var_renaming == map(prog_var, prog_var).

:- pred find_excess_assigns_in_conj(trace_level::in, bool::in,
    prog_varset::in, set(prog_var)::in, list(hlds_goal)::in,
    list(hlds_goal)::in, list(hlds_goal)::out,
    var_renaming::in, var_renaming::out) is det.

find_excess_assigns_in_conj(_, _, _, _, [], !RevGoals, !Subn).
find_excess_assigns_in_conj(Trace, TraceOptimized, VarSet, ConjNonLocals,
        [Goal | Goals], !RevGoals, !Subn) :-
    (
        goal_is_excess_assign(Trace, TraceOptimized, VarSet, ConjNonLocals,
            Goal, !Subn)
    ->
        true
    ;
        !:RevGoals = [Goal | !.RevGoals]
    ),
    find_excess_assigns_in_conj(Trace, TraceOptimized, VarSet, ConjNonLocals,
        Goals, !RevGoals, !Subn).

:- pred goal_is_excess_assign(trace_level::in, bool::in, prog_varset::in,
    set(prog_var)::in, hlds_goal::in, var_renaming::in,
    var_renaming::out) is semidet.

goal_is_excess_assign(Trace, TraceOptimized, VarSet, ConjNonLocals, Goal0,
        !Subn) :-
    Goal0 = hlds_goal(unify(_, _, _, Unif, _), _),
    Unif = assign(LeftVar0, RightVar0),

    % Check if we've already substituted one or both of the variables.
    find_renamed_var(!.Subn, LeftVar0, LeftVar),
    find_renamed_var(!.Subn, RightVar0, RightVar),

    CanElimLeft = ( set.member(LeftVar, ConjNonLocals) -> no ; yes ),
    CanElimRight = ( set.member(RightVar, ConjNonLocals) -> no ; yes ),

    (
        CanElimLeft = yes,
        CanElimRight = yes,
        % If we have a choice, try to eliminate an unnamed variable.
        ( var_is_named(VarSet, LeftVar) ->
            ElimVar = RightVar,
            ReplacementVar = LeftVar
        ;
            ElimVar = LeftVar,
            ReplacementVar = RightVar
        )
    ;
        CanElimLeft = yes,
        CanElimRight = no,
        ElimVar = LeftVar,
        ReplacementVar = RightVar
    ;
        CanElimLeft = no,
        CanElimRight = yes,
        ElimVar = RightVar,
        ReplacementVar = LeftVar
    ;
        CanElimLeft = no,
        CanElimRight = no,
        fail
    ),
    map.det_insert(!.Subn, ElimVar, ReplacementVar, !:Subn),

    % If the module is being compiled with `--trace deep' and
    % `--no-trace-optimized' don't replace a meaningful variable name
    % with `HeadVar__n' or an anonymous variable.
    \+ (
        trace_level_needs_meaningful_var_names(Trace) = yes,
        TraceOptimized = no,
        var_is_named(VarSet, ElimVar),
        \+ var_is_named(VarSet, ReplacementVar)
    ).

:- pred var_is_named(prog_varset::in, prog_var::in) is semidet.

var_is_named(VarSet, Var) :-
    varset.search_name(VarSet, Var, Name),
    \+ (
        string.append("HeadVar__", Suffix, Name),
        string.to_int(Suffix, _)
    ).

:- pred find_renamed_var(var_renaming::in, prog_var::in, prog_var::out) is det.

find_renamed_var(Subn, Var0, Var) :-
    ( map.search(Subn, Var0, Var1) ->
        find_renamed_var(Subn, Var1, Var)
    ;
        Var = Var0
    ).

    % Collapse chains of renamings.
    %
:- pred renaming_transitive_closure(var_renaming::in, var_renaming::out)
    is det.

renaming_transitive_closure(VarRenaming0, VarRenaming) :-
    map.map_values_only(find_renamed_var(VarRenaming0),
        VarRenaming0, VarRenaming).

%-----------------------------------------------------------------------------%

:- type seen_non_ground_term
    --->    not_seen_non_ground_term
    ;       seen_non_ground_term.

:- pred simplify_switch(prog_var::in, list(case)::in, list(case)::in,
    list(case)::out, list(instmap_delta)::in, list(instmap_delta)::out,
    seen_non_ground_term::in, seen_non_ground_term::out,
    can_fail::in, can_fail::out, simplify_info::in,
    simplify_info::in, simplify_info::out) is det.

simplify_switch(_, [], !RevCases, !InstMaps, !SeenNonGroundTerm, !CanFail,
        _, !Info).
simplify_switch(Var, [Case0 | Cases0], !RevCases, !InstMaps,
        !SeenNonGroundTerm, !CanFail, Info0, !Info) :-
    simplify_info_get_instmap(Info0, InstMap0),
    Case0 = case(MainConsId, OtherConsIds, Goal0),
    simplify_info_get_module_info(!.Info, ModuleInfo0),
    simplify_info_get_var_types(!.Info, VarTypes),
    map.lookup(VarTypes, Var, Type),
    bind_var_to_functors(Var, Type, MainConsId, OtherConsIds,
        InstMap0, InstMap1, ModuleInfo0, ModuleInfo1),
    simplify_info_set_module_info(ModuleInfo1, !Info),
    simplify_info_set_instmap(InstMap1, !Info),
    simplify_goal(Goal0, Goal, !Info),

    % Remove failing branches.
    ( Goal = hlds_goal(disj([]), _) ->
        % We don't add the case to RevCases.
        !:CanFail = can_fail
    ;
        Case = case(MainConsId, OtherConsIds, Goal),
        Goal = hlds_goal(GoalExpr, GoalInfo),
        (
            GoalExpr = scope(Reason, _),
            Reason = from_ground_term(_, from_ground_term_construct)
        ->
            % Leave SeenNonGroundTerm as it is.
            true
        ;
            !:SeenNonGroundTerm = seen_non_ground_term
        ),

        % Make sure the switched on variable appears in the instmap delta.
        % This avoids an abort in merge_instmap_delta if another branch
        % further instantiates the switched-on variable. If the switched on
        % variable does not appear in this branch's instmap_delta, the inst
        % before the goal would be used, resulting in a mode error.

        InstMapDelta0 = goal_info_get_instmap_delta(GoalInfo),
        simplify_info_get_module_info(!.Info, ModuleInfo2),
        instmap_delta_bind_var_to_functors(Var, Type, MainConsId, OtherConsIds,
            InstMap0, InstMapDelta0, InstMapDelta, ModuleInfo2, ModuleInfo),
        simplify_info_set_module_info(ModuleInfo, !Info),

        !:InstMaps = [InstMapDelta | !.InstMaps],
        !:RevCases = [Case | !.RevCases]
    ),

    simplify_info_post_branch_update(Info0, !Info),
    simplify_switch(Var, Cases0, !RevCases, !InstMaps, !SeenNonGroundTerm,
        !CanFail, Info0, !Info).

    % Create a semidet unification at the start of a singleton case
    % in a can_fail switch.
    % This will abort if the cons_id is existentially typed.
    %
:- pred create_test_unification(prog_var::in, cons_id::in, int::in,
    hlds_goal::out, simplify_info::in, simplify_info::out) is det.

create_test_unification(Var, ConsId, ConsArity,
        hlds_goal(ExtraGoal, ExtraGoalInfo), !Info) :-
    simplify_info_get_varset(!.Info, VarSet0),
    simplify_info_get_var_types(!.Info, VarTypes0),
    varset.new_vars(VarSet0, ConsArity, ArgVars, VarSet),
    map.lookup(VarTypes0, Var, VarType),
    simplify_info_get_module_info(!.Info, ModuleInfo),
    type_util.get_cons_id_arg_types(ModuleInfo, VarType, ConsId, ArgTypes),
    map.det_insert_from_corresponding_lists(VarTypes0, ArgVars,
        ArgTypes, VarTypes),
    simplify_info_set_varset(VarSet, !Info),
    simplify_info_set_var_types(VarTypes, !Info),
    simplify_info_get_instmap(!.Info, InstMap),
    instmap_lookup_var(InstMap, Var, Inst0),
    (
        inst_expand(ModuleInfo, Inst0, Inst1),
        get_arg_insts(Inst1, ConsId, ConsArity, ArgInsts1)
    ->
        ArgInsts = ArgInsts1
    ;
        unexpected(this_file, "create_test_unification - get_arg_insts failed")
    ),
    InstToUniMode =
        (pred(ArgInst::in, ArgUniMode::out) is det :-
            ArgUniMode = ((ArgInst - free) -> (ArgInst - ArgInst))
        ),
    list.map(InstToUniMode, ArgInsts, UniModes),
    UniMode = (Inst0 -> Inst0) - (Inst0 -> Inst0),
    UnifyContext = unify_context(umc_explicit, []),
    Unification = deconstruct(Var, ConsId, ArgVars, UniModes, can_fail,
        cannot_cgc),
    ExtraGoal = unify(Var, rhs_functor(ConsId, no, ArgVars),
        UniMode, Unification, UnifyContext),
    set.singleton_set(NonLocals, Var),

    % The test can't bind any variables, so the InstMapDelta should be empty.
    instmap_delta_init_reachable(InstMapDelta),
    goal_info_init(NonLocals, InstMapDelta, detism_semi, purity_pure,
        ExtraGoalInfo).

%-----------------------------------------------------------------------------%

:- pred simplify_disj(list(hlds_goal)::in, list(hlds_goal)::in,
    list(hlds_goal)::out,
    list(instmap_delta)::in, list(instmap_delta)::out,
    simplify_info::in, simplify_info::in, simplify_info::out) is det.

simplify_disj([], RevGoals, Goals, !PostBranchInstMaps, _, !Info) :-
    list.reverse(RevGoals, Goals).
simplify_disj([Goal0 | Goals0], RevGoals0, Goals, !PostBranchInstMaps,
        Info0, !Info) :-
    simplify_goal(Goal0, Goal, !Info),
    Goal = hlds_goal(_, GoalInfo),
    Purity = goal_info_get_purity(GoalInfo),

    (
        % Don't prune or warn about impure disjuncts that can't succeed.
        Purity \= purity_impure,
        Detism = goal_info_get_determinism(GoalInfo),
        determinism_components(Detism, _CanFail, MaxSolns),
        MaxSolns = at_most_zero
    ->
        (
            simplify_do_warn_simple_code(!.Info),
            % Don't warn where the initial goal was fail, since that can result
            % from mode analysis pruning away cases in a switch which cannot
            % succeed due to sub-typing in the modes.
            Goal0 \= hlds_goal(disj([]), _),
            % Don't warn if the code was duplicated, since it is quite likely
            % to be spurious: though the disjunct cannot succeed in this arm of
            % the switch, it likely can succeed in other arms that derive from
            % the exact same piece of source code.
            simplify_info_get_inside_duplicated_for_switch(!.Info,
                 InsideDuplForSwitch),
            InsideDuplForSwitch = no
        ->
            Context = goal_info_get_context(GoalInfo),
            Pieces = [words("Warning: this disjunct"),
                words("will never have any solutions.")],
            Msg = simple_msg(Context,
                [option_is_set(warn_simple_code, yes, [always(Pieces)])]),
            Severity = severity_conditional(warn_simple_code, yes,
                severity_warning, no),
            Spec = error_spec(Severity,
                phase_simplify(report_only_if_in_all_modes), [Msg]),
            simplify_info_add_error_spec(Spec, !Info)
        ;
            true
        ),

        % Prune away non-succeeding disjuncts where possible.
        (
            (
                Goal0 = hlds_goal(disj([]), _)
            ;
                % Only remove disjuncts that might loop
                % or call error/1 if --no-fully-strict.
                simplify_info_get_det_info(!.Info, DetInfo),
                det_info_get_fully_strict(DetInfo, no)
            )
        ->
            RevGoals1 = RevGoals0
        ;
            RevGoals1 = [Goal | RevGoals0],
            InstMapDelta = goal_info_get_instmap_delta(GoalInfo),
            !:PostBranchInstMaps = [InstMapDelta | !.PostBranchInstMaps]
        )
    ;
        RevGoals1 = [Goal | RevGoals0],
        InstMapDelta = goal_info_get_instmap_delta(GoalInfo),
        !:PostBranchInstMaps = [InstMapDelta | !.PostBranchInstMaps]
    ),

    simplify_info_post_branch_update(Info0, !Info),
    simplify_disj(Goals0, RevGoals1, Goals, !PostBranchInstMaps, Info0, !Info).

    % Disjunctions that cannot succeed more than once when viewed from the
    % outside generally need some fixing up, and/or some warnings to be issued.
    %
    % We previously converted them all to if-then-elses using the code below,
    % however converting disjs that have output variables but that nevertheless
    % cannot succeed more than one (e.g. cc_nondet or cc_multi disjs) into
    % if-then-elses may cause problems with other parts of the compiler that
    % assume that an if-then-else is mode-correct, i.e. that the condition
    % doesn't bind variables.
    %
    %       goal_info_get_determinism(GoalInfo, Detism),
    %       determinism_components(Detism, _CanFail, MaxSoln),
    %       MaxSoln \= at_most_many
    %   ->
    %       goal_info_get_instmap_delta(GoalInfo, DeltaInstMap),
    %       goal_info_get_nonlocals(GoalInfo, NonLocalVars),
    %       (
    %           det_no_output_vars(NonLocalVars, InstMap0,
    %               DeltaInstMap, DetInfo)
    %       ->
    %           OutputVars = no
    %       ;
    %           OutputVars = yes
    %       ),
    %       fixup_disj(Disjuncts, Detism, OutputVars, GoalInfo, InstMap0,
    %           DetInfo, Goal, MsgsA, Msgs)
    %   ;
    %
:- pred fixup_disj(list(hlds_goal)::in, determinism::in, bool::in,
    hlds_goal_info::in, hlds_goal_expr::out,
    simplify_info::in, simplify_info::out) is det.

fixup_disj(Disjuncts, _, _OutputVars, GoalInfo, Goal, !Info) :-
    det_disj_to_ite(Disjuncts, GoalInfo, IfThenElse),
    simplify_goal(IfThenElse, Simplified, !Info),
    Simplified = hlds_goal(Goal, _).

    % det_disj_to_ite is used to transform disjunctions that occur
    % in prunable contexts into if-then-elses.
    % For example, it would transform
    %
    %   ( Disjunct1
    %   ; Disjunct2
    %   ; Disjunct3
    %   )
    % into
    %   ( Disjunct1 ->
    %       true
    %   ; Disjunct2 ->
    %       true
    %   ;
    %       Disjunct3
    %   ).
    %
:- pred det_disj_to_ite(list(hlds_goal)::in, hlds_goal_info::in,
    hlds_goal::out) is det.

det_disj_to_ite([], _GoalInfo, _) :-
    unexpected(this_file, "reached base case of det_disj_to_ite").
det_disj_to_ite([Disjunct | Disjuncts], GoalInfo, Goal) :-
    (
        Disjuncts = [],
        Goal = Disjunct
    ;
        Disjuncts = [_ | _],
        Cond = Disjunct,
        Cond = hlds_goal(_CondGoal, CondGoalInfo),

        Then = true_goal,

        det_disj_to_ite(Disjuncts, GoalInfo, Rest),
        Rest = hlds_goal(_RestGoal, RestGoalInfo),

        CondNonLocals = goal_info_get_nonlocals(CondGoalInfo),
        RestNonLocals = goal_info_get_nonlocals(RestGoalInfo),
        set.union(CondNonLocals, RestNonLocals, NonLocals),
        goal_info_set_nonlocals(NonLocals, GoalInfo, NewGoalInfo0),

        InstMapDelta0 = goal_info_get_instmap_delta(GoalInfo),
        instmap_delta_restrict(NonLocals, InstMapDelta0, InstMapDelta),
        goal_info_set_instmap_delta(InstMapDelta, NewGoalInfo0, NewGoalInfo1),

        CondDetism = goal_info_get_determinism(CondGoalInfo),
        RestDetism = goal_info_get_determinism(RestGoalInfo),
        determinism_components(CondDetism, CondCanFail, CondMaxSoln),
        determinism_components(RestDetism, RestCanFail, RestMaxSoln),
        det_disjunction_canfail(CondCanFail, RestCanFail, CanFail),
        det_disjunction_maxsoln(CondMaxSoln, RestMaxSoln, MaxSoln0),
        ( MaxSoln0 = at_most_many ->
            MaxSoln = at_most_one
        ;
            MaxSoln = MaxSoln0
        ),
        determinism_components(Detism, CanFail, MaxSoln),
        goal_info_set_determinism(Detism, NewGoalInfo1, NewGoalInfo),

        Goal = hlds_goal(if_then_else([], Cond, Then, Rest), NewGoalInfo)
    ).

%-----------------------------------------------------------------------------%

:- pred contains_multisoln_goal(list(hlds_goal)::in) is semidet.

contains_multisoln_goal(Goals) :-
    list.member(hlds_goal(_GoalExpr, GoalInfo), Goals),
    Detism = goal_info_get_determinism(GoalInfo),
    determinism_components(Detism, _, at_most_many).

%-----------------------------------------------------------------------------%

:- pred goal_contains_trace(hlds_goal::in, hlds_goal::out,
    contains_trace_goal::out) is det.

goal_contains_trace(hlds_goal(GoalExpr0, GoalInfo0),
        hlds_goal(GoalExpr, GoalInfo), ContainsTrace) :-
    (
        ( GoalExpr0 = unify(_, _, _, _, _)
        ; GoalExpr0 = plain_call(_, _, _, _, _, _)
        ; GoalExpr0 = generic_call(_, _, _, _)
        ; GoalExpr0 = call_foreign_proc(_, _, _, _, _, _, _)
        ),
        GoalExpr = GoalExpr0,
        ContainsTrace = contains_no_trace_goal
    ;
        GoalExpr0 = conj(ConjType, SubGoals0),
        goal_list_contains_trace(SubGoals0, SubGoals,
            contains_no_trace_goal, ContainsTrace),
        GoalExpr = conj(ConjType, SubGoals)
    ;
        GoalExpr0 = disj(SubGoals0),
        goal_list_contains_trace(SubGoals0, SubGoals,
            contains_no_trace_goal, ContainsTrace),
        GoalExpr = disj(SubGoals)
    ;
        GoalExpr0 = switch(SwitchVar, CanFail, Cases0),
        case_list_contains_trace(Cases0, Cases,
            contains_no_trace_goal, ContainsTrace),
        GoalExpr = switch(SwitchVar, CanFail, Cases)
    ;
        GoalExpr0 = if_then_else(Vars, Cond0, Then0, Else0),
        goal_contains_trace(Cond0, Cond, CondContainsTrace),
        goal_contains_trace(Then0, Then, ThenContainsTrace),
        goal_contains_trace(Else0, Else, ElseContainsTrace),
        GoalExpr = if_then_else(Vars, Cond, Then, Else),
        ContainsTrace = worst_contains_trace(CondContainsTrace,
            worst_contains_trace(ThenContainsTrace, ElseContainsTrace))
    ;
        GoalExpr0 = negation(SubGoal0),
        goal_contains_trace(SubGoal0, SubGoal, ContainsTrace),
        GoalExpr = negation(SubGoal)
    ;
        GoalExpr0 = scope(Reason, SubGoal0),
        ( Reason = from_ground_term(_, from_ground_term_construct) ->
            SubGoal = SubGoal0,
            ContainsTrace = contains_no_trace_goal
        ;
            goal_contains_trace(SubGoal0, SubGoal, ContainsTrace)
        ),
        GoalExpr = scope(Reason, SubGoal)
    ;
        GoalExpr0 = shorthand(ShortHand0),
        (
            ShortHand0 = atomic_goal(GoalType, Outer, Inner, MaybeOutputVars,
                MainGoal0, OrElseGoals0, OrElseInners),
            goal_contains_trace(MainGoal0, MainGoal, MainContainsTrace),
            goal_list_contains_trace(OrElseGoals0, OrElseGoals,
                contains_no_trace_goal, OrElseContainsTrace),
            ShortHand = atomic_goal(GoalType, Outer, Inner, MaybeOutputVars,
                MainGoal, OrElseGoals, OrElseInners),
            GoalExpr = shorthand(ShortHand),
            ContainsTrace = worst_contains_trace(MainContainsTrace,
                OrElseContainsTrace)
        ;
            ShortHand0 = try_goal(MaybeIO, ResultVar, SubGoal0),
            goal_contains_trace(SubGoal0, SubGoal, ContainsTrace),
            ShortHand = try_goal(MaybeIO, ResultVar, SubGoal),
            GoalExpr = shorthand(ShortHand)
        ;
            ShortHand0 = bi_implication(_, _),
            unexpected(this_file, "goal_contains_trace: bi_implication")
        )
    ),
    (
        ContainsTrace = contains_trace_goal,
        goal_info_add_feature(feature_contains_trace, GoalInfo0, GoalInfo)
    ;
        ContainsTrace = contains_no_trace_goal,
        goal_info_remove_feature(feature_contains_trace, GoalInfo0, GoalInfo)
    ).

:- pred goal_list_contains_trace(list(hlds_goal)::in, list(hlds_goal)::out,
    contains_trace_goal::in, contains_trace_goal::out) is det.

goal_list_contains_trace([], [], !ContainsTrace).
goal_list_contains_trace([Goal0 | Goals0], [Goal | Goals], !ContainsTrace) :-
    goal_contains_trace(Goal0, Goal, GoalContainsTrace),
    !:ContainsTrace = worst_contains_trace(GoalContainsTrace, !.ContainsTrace),
    goal_list_contains_trace(Goals0, Goals, !ContainsTrace).

:- pred case_list_contains_trace(list(case)::in, list(case)::out,
    contains_trace_goal::in, contains_trace_goal::out) is det.

case_list_contains_trace([], [], !ContainsTrace).
case_list_contains_trace([Case0 | Cases0], [Case | Cases], !ContainsTrace) :-
    Case0 = case(MainConsId, OtherConsIds, Goal0),
    goal_contains_trace(Goal0, Goal, GoalContainsTrace),
    Case = case(MainConsId, OtherConsIds, Goal),
    !:ContainsTrace = worst_contains_trace(GoalContainsTrace, !.ContainsTrace),
    case_list_contains_trace(Cases0, Cases, !ContainsTrace).

%-----------------------------------------------------------------------------%

:- type simplify_info
    --->    simplify_info(
                simp_det_info                :: det_info,
                simp_error_specs             :: list(error_spec),
                simp_simplifications         :: simplifications,

                % Info about common subexpressions.
                simp_common_info             :: common_info,

                simp_instmap                 :: instmap,
                simp_varset                  :: prog_varset,
                simp_inst_varset             :: inst_varset,

                % Does the goal need requantification?
                simp_requantify              :: bool,

                % Do we need to recompute instmap_deltas for atomic goals?
                simp_recompute_atomic        :: bool,

                % Does determinism analysis need to be rerun?
                simp_rerun_det               :: bool,

                % Measure of the improvement in the goal from simplification.
                simp_cost_delta              :: int,

                % Count of the number of lambdas which enclose
                % the current goal.
                simp_lambdas                 :: int,

                % Information about type_infos and typeclass_infos.
                simp_rtti_varmaps            :: rtti_varmaps,

                % Are we currently inside a goal that was duplicated
                % for a switch?
                simp_inside_dupl_for_switch  :: bool,

                % Have we seen a parallel conjunction?
                simp_has_parallel_conj       :: bool,

                % Have we seen a goal with a feature that says it contains
                % a trace goal?
                simp_found_contains_trace    :: bool,

                % Have we seen an event call?
                simp_has_user_event          :: bool
            ).

simplify_info_init(DetInfo, Simplifications, InstMap, ProcInfo, Info) :-
    proc_info_get_varset(ProcInfo, VarSet),
    proc_info_get_inst_varset(ProcInfo, InstVarSet),
    proc_info_get_rtti_varmaps(ProcInfo, RttiVarMaps),
    Info = simplify_info(DetInfo, [], Simplifications,
        common_info_init, InstMap, VarSet, InstVarSet,
        no, no, no, 0, 0, RttiVarMaps, no, no, no, no).

    % Reinitialise the simplify_info before reprocessing a goal.
    %
:- pred simplify_info_reinit(simplifications::in, instmap::in,
    simplify_info::in, simplify_info::out) is det.

simplify_info_reinit(Simplifications, InstMap0, !Info) :-
    !Info ^ simp_simplifications := Simplifications,
    !Info ^ simp_common_info := common_info_init,
    !Info ^ simp_instmap := InstMap0,
    !Info ^ simp_requantify := no,
    !Info ^ simp_recompute_atomic := no,
    !Info ^ simp_rerun_det := no,
    !Info ^ simp_lambdas := 0,
    !Info ^ simp_has_parallel_conj := no,
    !Info ^ simp_has_user_event := no.

    % exported for common.m
:- interface.

:- import_module parse_tree.prog_data.

:- pred simplify_info_init(det_info::in, simplifications::in,
    instmap::in, proc_info::in, simplify_info::out) is det.

:- pred simplify_info_get_det_info(simplify_info::in, det_info::out) is det.
:- pred simplify_info_get_error_specs(simplify_info::in, list(error_spec)::out)
    is det.
:- pred simplify_info_get_simplifications(simplify_info::in,
    simplifications::out) is det.
:- pred simplify_info_get_common_info(simplify_info::in, common_info::out)
    is det.
:- pred simplify_info_get_instmap(simplify_info::in, instmap::out) is det.
:- pred simplify_info_get_varset(simplify_info::in, prog_varset::out) is det.
:- pred simplify_info_get_var_types(simplify_info::in, vartypes::out) is det.
:- pred simplify_info_requantify(simplify_info::in) is semidet.
:- pred simplify_info_recompute_atomic(simplify_info::in) is semidet.
:- pred simplify_info_rerun_det(simplify_info::in) is semidet.
:- pred simplify_info_get_cost_delta(simplify_info::in, int::out) is det.
:- pred simplify_info_get_rtti_varmaps(simplify_info::in, rtti_varmaps::out)
    is det.

:- pred simplify_info_get_module_info(simplify_info::in, module_info::out)
    is det.
:- pred simplify_info_get_pred_proc_info(simplify_info::in, pred_info::out,
    proc_info::out) is det.

:- pred simplify_info_set_common_info(common_info::in,
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_set_requantify(
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_set_rerun_det(
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_set_rtti_varmaps(rtti_varmaps::in,
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_do_add_error_spec(error_spec::in,
    simplify_info::in, simplify_info::out) is det.

:- pred simplify_info_incr_cost_delta(int::in,
    simplify_info::in, simplify_info::out) is det.

:- pred simplify_info_apply_substitutions_and_duplicate(prog_var::in,
    prog_var::in, tsubst::in, simplify_info::in, simplify_info::out) is det.

:- implementation.

:- pred simplify_info_get_inside_duplicated_for_switch(simplify_info::in,
    bool::out) is det.
:- pred simplify_info_get_has_parallel_conj(simplify_info::in, bool::out)
    is det.
:- pred simplify_info_get_found_contains_trace(simplify_info::in, bool::out)
    is det.
:- pred simplify_info_get_has_user_event(simplify_info::in, bool::out) is det.

simplify_info_get_det_info(Info, Info ^ simp_det_info).
simplify_info_get_error_specs(Info, Info ^ simp_error_specs).
simplify_info_get_simplifications(Info, Info ^ simp_simplifications).
simplify_info_get_common_info(Info, Info ^ simp_common_info).
simplify_info_get_instmap(Info, Info ^ simp_instmap).
simplify_info_get_varset(Info, Info ^ simp_varset).
simplify_info_get_var_types(Info, VarTypes) :-
    det_info_get_vartypes(Info ^ simp_det_info, VarTypes).
simplify_info_requantify(Info) :-
    Info ^ simp_requantify = yes.
simplify_info_recompute_atomic(Info) :-
    Info ^ simp_recompute_atomic = yes.
simplify_info_rerun_det(Info) :-
    Info ^ simp_rerun_det = yes.
simplify_info_get_cost_delta(Info, Info ^ simp_cost_delta).
simplify_info_get_rtti_varmaps(Info, Info ^ simp_rtti_varmaps).
simplify_info_get_inside_duplicated_for_switch(Info,
    Info ^ simp_inside_dupl_for_switch).
simplify_info_get_has_parallel_conj(Info, Info ^ simp_has_parallel_conj).
simplify_info_get_found_contains_trace(Info, Info ^ simp_found_contains_trace).
simplify_info_get_has_user_event(Info, Info ^ simp_has_user_event).

simplify_info_get_module_info(Info, ModuleInfo) :-
    simplify_info_get_det_info(Info, DetInfo),
    det_info_get_module_info(DetInfo, ModuleInfo).

simplify_info_get_pred_proc_info(Info, PredInfo, ProcInfo) :-
    simplify_info_get_det_info(Info, DetInfo),
    det_info_get_module_info(DetInfo, ModuleInfo),
    det_info_get_pred_id(DetInfo, PredId),
    det_info_get_proc_id(DetInfo, ProcId),
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    module_info_proc_info(ModuleInfo, PredId, ProcId, ProcInfo).

:- pred simplify_info_set_det_info(det_info::in,
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_set_error_specs(list(error_spec)::in,
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_set_simplifications(simplifications::in,
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_set_instmap(instmap::in,
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_set_varset(prog_varset::in,
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_set_var_types(vartypes::in,
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_set_recompute_atomic(
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_set_inside_duplicated_for_switch(bool::in,
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_set_has_parallel_conj(bool::in,
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_set_found_contains_trace(bool::in,
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_set_has_user_event(bool::in,
    simplify_info::in, simplify_info::out) is det.

:- pred simplify_info_add_error_spec(error_spec::in,
    simplify_info::in, simplify_info::out) is det.
:- pred simplify_info_set_cost_delta(int::in,
    simplify_info::in, simplify_info::out) is det.

:- pred simplify_info_enter_lambda(simplify_info::in, simplify_info::out)
    is det.
:- pred simplify_info_leave_lambda(simplify_info::in, simplify_info::out)
    is det.
:- pred simplify_info_inside_lambda(simplify_info::in) is semidet.

:- pred simplify_info_set_module_info(module_info::in,
    simplify_info::in, simplify_info::out) is det.

simplify_info_set_det_info(Det, !Info) :-
    !Info ^ simp_det_info := Det.
simplify_info_set_error_specs(Specs, !Info) :-
    !Info ^ simp_error_specs := Specs.
simplify_info_set_simplifications(Simp, !Info) :-
    !Info ^ simp_simplifications := Simp.
simplify_info_set_instmap(InstMap, !Info) :-
    !Info ^ simp_instmap := InstMap.
simplify_info_set_common_info(Common, !Info) :-
    !Info ^ simp_common_info := Common.
simplify_info_set_varset(VarSet, !Info) :-
    !Info ^ simp_varset := VarSet.
simplify_info_set_var_types(VarTypes, !Info) :-
    DetInfo0 = !.Info ^ simp_det_info,
    det_info_set_vartypes(VarTypes, DetInfo0, DetInfo),
    !Info ^ simp_det_info := DetInfo.
simplify_info_set_requantify(!Info) :-
    !Info ^ simp_requantify := yes.
simplify_info_set_recompute_atomic(!Info) :-
    !Info ^ simp_recompute_atomic := yes.
simplify_info_set_rerun_det(!Info) :-
    !Info ^ simp_rerun_det := yes.
simplify_info_set_cost_delta(Delta, !Info) :-
    !Info ^ simp_cost_delta := Delta.
simplify_info_set_rtti_varmaps(Rtti, !Info) :-
    !Info ^ simp_rtti_varmaps := Rtti.
simplify_info_set_inside_duplicated_for_switch(IDFS, !Info) :-
    !Info ^ simp_inside_dupl_for_switch := IDFS.
simplify_info_set_has_parallel_conj(MHPC, !Info) :-
    !Info ^ simp_has_parallel_conj := MHPC.
simplify_info_set_found_contains_trace(FCT, !Info) :-
    !Info ^ simp_found_contains_trace := FCT.
simplify_info_set_has_user_event(HUE, !Info) :-
    !Info ^ simp_has_user_event := HUE.

simplify_info_incr_cost_delta(Incr, !Info) :-
    !Info ^ simp_cost_delta := !.Info ^ simp_cost_delta + Incr.

simplify_info_add_error_spec(Spec, !Info) :-
    ( simplify_do_warn_simple_code(!.Info) ->
        simplify_info_do_add_error_spec(Spec, !Info)
    ;
        true
    ).

simplify_info_do_add_error_spec(Spec, !Info) :-
    simplify_info_get_error_specs(!.Info, Specs0),
    Specs = [Spec | Specs0],
    simplify_info_set_error_specs(Specs, !Info).

simplify_info_enter_lambda(!Info) :-
    !Info ^ simp_lambdas := !.Info ^ simp_lambdas + 1.

simplify_info_leave_lambda(!Info) :-
    LambdaCount = !.Info ^ simp_lambdas - 1,
    ( LambdaCount >= 0 ->
        !Info ^ simp_lambdas := LambdaCount
    ;
        unexpected(this_file,
            "simplify_info_leave_lambda: Left too many lambdas")
    ).

simplify_info_inside_lambda(Info) :-
    Info ^ simp_lambdas > 0.

simplify_info_set_module_info(ModuleInfo, !Info) :-
    simplify_info_get_det_info(!.Info, DetInfo0),
    det_info_set_module_info(ModuleInfo, DetInfo0, DetInfo),
    simplify_info_set_det_info(DetInfo, !Info).

simplify_info_apply_substitutions_and_duplicate(ToVar, FromVar, TSubst,
        !Info) :-
    simplify_info_get_var_types(!.Info, VarTypes0),
    simplify_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
    map.map_values_only(apply_rec_subst_to_type(TSubst), VarTypes0, VarTypes),
    map.det_insert(map.init, ToVar, FromVar, Renaming),
    apply_substitutions_to_rtti_varmaps(map.init, TSubst, Renaming,
        RttiVarMaps0, RttiVarMaps1),
    rtti_var_info_duplicate(FromVar, ToVar, RttiVarMaps1, RttiVarMaps),
    simplify_info_set_var_types(VarTypes, !Info),
    simplify_info_set_rtti_varmaps(RttiVarMaps, !Info).

:- pred simplify_info_update_instmap(hlds_goal::in,
    simplify_info::in, simplify_info::out) is det.

simplify_info_update_instmap(Goal, Info, Info ^ simp_instmap := InstMap) :-
    update_instmap(Goal, Info ^ simp_instmap, InstMap).

:- type before_after
    --->    before
    ;       after.

    % Clear the common_info structs accumulated since the last goal that
    % could cause a stack flush. This is done to avoid replacing a
    % deconstruction with assignments to the arguments where this
    % would cause more variables to be live across the stack flush.
    % Calls and construction unifications are not treated in this
    % way since it is nearly always better to optimize them away.
    % When doing deforestation, it may be better to remove
    % as many common structures as possible.
    %
:- pred simplify_info_maybe_clear_structs(before_after::in, hlds_goal::in,
    simplify_info::in, simplify_info::out) is det.

simplify_info_maybe_clear_structs(BeforeAfter, Goal, !Info) :-
    (
        simplify_do_common_struct(!.Info),
        \+ simplify_do_extra_common_struct(!.Info),
        Goal = hlds_goal(GoalExpr, _),
        will_flush(GoalExpr, BeforeAfter) = yes
    ->
        simplify_info_get_common_info(!.Info, CommonInfo0),
        common_info_clear_structs(CommonInfo0, CommonInfo),
        simplify_info_set_common_info(CommonInfo, !Info)
    ;
        true
    ).

    % Return `no' if execution of the given goal cannot encounter a context
    % that causes any variable to be flushed to its stack slot or to a
    % register at the specified time, and `yes' otherwise.
    %
:- func will_flush(hlds_goal_expr, before_after) = bool.

will_flush(unify(_, _, _, Unify, _), _) = WillFlush :-
    ( Unify = complicated_unify(_, _, _) ->
        WillFlush = yes
    ;
        WillFlush = no
    ).
will_flush(plain_call(_, _, _, BuiltinState, _, _), BeforeAfter) = WillFlush :-
    (
        BuiltinState = inline_builtin,
        WillFlush = no
    ;
        ( BuiltinState = out_of_line_builtin
        ; BuiltinState = not_builtin
        ),
        (
            BeforeAfter = before,
            WillFlush = no
        ;
            BeforeAfter = after,
            WillFlush = yes
        )
    ).
will_flush(generic_call(GenericCall, _, _, _), BeforeAfter) = WillFlush :-
    (
        GenericCall = higher_order(_, _, _, _),
        WillFlush0 = yes
    ;
        GenericCall = class_method(_, _, _, _),
        WillFlush0 = yes
    ;
        GenericCall = event_call(_),
        WillFlush0 = no
    ;
        GenericCall = cast(_),
        WillFlush0 = no
    ),
    (
        BeforeAfter = before,
        WillFlush = no
    ;
        BeforeAfter = after,
        WillFlush = WillFlush0
    ).
will_flush(call_foreign_proc(_, _, _, _, _, _, _), BeforeAfter) = WillFlush :-
    (
        BeforeAfter = before,
        WillFlush = no
    ;
        BeforeAfter = after,
        WillFlush = yes
    ).
will_flush(conj(ConjType, _), _) = WillFlush :-
    (
        ConjType = plain_conj,
        WillFlush = no
    ;
        ConjType = parallel_conj,
        WillFlush = yes
    ).
will_flush(switch(_, _, _), _) = no.
will_flush(disj(_), BeforeAfter) = WillFlush :-
    (
        BeforeAfter = before,
        WillFlush = yes
    ;
        BeforeAfter = after,
        WillFlush = no
    ).
will_flush(if_then_else(_, _, _, _), BeforeAfter) = WillFlush :-
    (
        BeforeAfter = before,
        WillFlush = yes
    ;
        BeforeAfter = after,
        WillFlush = no
    ).
will_flush(negation(_), _) = yes.
will_flush(scope(_, _), _) = no.
will_flush(shorthand(ShortHand), _) = WillFlush :-
    (
        ShortHand = atomic_goal(_, _, _, _, _MainGoal, _OrElseGoals, _),
        WillFlush = yes
    ;
        ShortHand = try_goal(_, _, _),
        WillFlush = yes
    ;
        ShortHand = bi_implication(_, _),
        % These should have been expanded out by now.
        unexpected(this_file, "will_flush: bi_implication")
    ).

    % Reset the instmap and seen calls for the next branch.
    %
:- pred simplify_info_post_branch_update(simplify_info::in, simplify_info::in,
    simplify_info::out) is det.

simplify_info_post_branch_update(PreBranchInfo, PostBranchInfo0, Info) :-
    simplify_info_get_instmap(PreBranchInfo, InstMap),
    simplify_info_set_instmap(InstMap, PostBranchInfo0, PostBranchInfo1),
    simplify_info_get_common_info(PreBranchInfo, Common),
    simplify_info_set_common_info(Common, PostBranchInfo1, Info).

    % Undo updates to the simplify_info before redoing simplification
    % on a goal.
    %
:- pred simplify_info_undo_goal_updates(simplify_info::in, simplify_info::in,
    simplify_info::out) is det.

simplify_info_undo_goal_updates(Info0, !Info) :-
    simplify_info_get_common_info(Info0, CommonInfo0),
    simplify_info_set_common_info(CommonInfo0, !Info),
    simplify_info_get_instmap(Info0, InstMap),
    simplify_info_set_instmap(InstMap, !Info).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "simplify.m".

%-----------------------------------------------------------------------------%
:- end_module simplify.
%-----------------------------------------------------------------------------%
