%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%------------------------------------------------------------------------------%
% Copyright (C) 2003, 2005-2008 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%------------------------------------------------------------------------------%
%
% File: term_constr_build.m.
% Main author: juliensf.
% (partially based on code written by vjteag)
%
% This module is responsible for building the abstract representation (AR)
% used by the constraint termination analyser.
% (The AR is defined in term_constr_data.m).
%
% TODO: make the resulting abstract representations more independent of the
%       HLDS.
%
%------------------------------------------------------------------------------%

:- module transform_hlds.term_constr_build.
:- interface.

:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.
:- import_module transform_hlds.term_constr_errors.
:- import_module transform_hlds.term_norm.

:- import_module bool.
:- import_module io.
:- import_module list.

%------------------------------------------------------------------------------%

    % This structure holds the values of options used to control the build
    % pass.
    %
:- type build_options.

    % build_options_init(Norm, PropFailure, ArgSizeOnly).
    % Initialise the `build_options' structure.  `Norm' is the norm
    % that we are using.  `PropFailure' is `yes' if we are propagating
    % failure constraints and no otherwise; `ArgSizeOnly' is `yes'
    % if the `--arg-size-analysis-only' option is enabled and `no'
    % otherwise.
    %
:- func build_options_init(functor_info, bool, bool) = build_options.

    % Builds the abstract representation of an SCC.
    %
:- pred term_constr_build.build_abstract_scc(dependency_ordering::in,
    list(pred_proc_id)::in, build_options::in, term2_errors::out,
    module_info::in, module_info::out, io::di, io::uo) is det.

%------------------------------------------------------------------------------%
%------------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.mode_util.
:- import_module check_hlds.type_util.
:- import_module hlds.goal_util.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_out.
:- import_module hlds.quantification.
:- import_module libs.compiler_util.
:- import_module libs.lp_rational.
:- import_module libs.polyhedron.
:- import_module libs.rat.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_type.
:- import_module transform_hlds.dependency_graph.
:- import_module transform_hlds.term_constr_data.
:- import_module transform_hlds.term_constr_errors.
:- import_module transform_hlds.term_constr_main.
:- import_module transform_hlds.term_constr_util.

:- import_module int.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module set.
:- import_module std_util.
:- import_module string.
:- import_module svmap.
:- import_module svvarset.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%
%
% Build pass options.
%

:- type build_options
    --->    build_options(
                % Which norm we are using.
                bo_functor_info     :: functor_info,

                % Whether propagating failure constraints is enabled.
                bo_failure_constrs  :: bool,

                % Whether `--term2-arg-size-only' is enabled.
                bo_arg_size_only    :: bool
            ).

build_options_init(Norm, Failure, ArgSizeOnly) =
    build_options(Norm, Failure, ArgSizeOnly).

%-----------------------------------------------------------------------------%

% This information is accumulated while building the abstract
% representation of a SCC.  After we have finished we write it to the
% module_info.  We cannot do this while we are building each individual
% procedure because we will not have all the information we need until
% we have finished processing the entire SCC.

:- type scc_info
    --->    scc_info(
                si_scc_ppid         :: pred_proc_id,
                si_proc             :: abstract_proc,
                si_size_var_map     :: size_var_map,
                si_intermod         :: intermod_status,
                si_accum_errors     :: term2_errors,
                si_non_zero_heads   :: list(size_var)
            ).

%-----------------------------------------------------------------------------%

build_abstract_scc(DepOrder, SCC, Options, Errors, !Module, !IO) :-
    dependency_graph.get_scc_entry_points(SCC, DepOrder, !.Module, EntryProcs),
    list.foldl3(build_abstract_proc(EntryProcs, Options, SCC, !.Module),
        SCC, varset.init, SizeVarset, [], AbstractSCC, !IO),
    module_info_preds(!.Module, PredTable0),
    RecordInfo = (pred(Info::in, !.Errors::in, !:Errors::out,
            !.PredTable::in, !:PredTable::out) is det :-
        Info = scc_info(proc(PredId, ProcId), AR0, VarMap, Status,
            ProcErrors, HeadSizeVars),

        % Record the proper size_varset.  Each procedure has a copy.
        % XXX It would be nicer to store one copy per SCC.
        %
        % NOTE: although each procedure in the a SCC shares the same
        % size_varset, they should all have separate size_var_maps.

        AR = AR0 ^ ap_size_varset := SizeVarset,
        map.lookup(!.PredTable, PredId, PredInfo0),
        pred_info_get_procedures(PredInfo0, ProcTable0),
        map.lookup(ProcTable0, ProcId, ProcInfo0),
        some [!TermInfo] (
            proc_info_get_termination2_info(ProcInfo0, !:TermInfo),
            !:TermInfo = !.TermInfo ^ intermod_status := yes(Status),
            !:TermInfo = !.TermInfo ^ abstract_rep    := yes(AR),
            !:TermInfo = !.TermInfo ^ size_var_map    := VarMap,
            !:TermInfo = !.TermInfo ^ head_vars       := HeadSizeVars,

            % If the remainder of the analysis is going to depend upon
            % higher order constructs, then set up the information accordingly.
            ( analysis_depends_on_ho(AR) ->
                !:TermInfo = !.TermInfo ^ success_constrs :=
                    yes(polyhedron.universe),
                HorderErrors = list.map((func(ho_call(Context))
                    = Context - horder_call), AR ^ ap_ho_calls),
                list.append(HorderErrors, !Errors)
            ;
                true
            ),
            proc_info_set_termination2_info(!.TermInfo, ProcInfo0, ProcInfo)
        ),
        svmap.det_update(ProcId, ProcInfo, ProcTable0, ProcTable),
        pred_info_set_procedures(ProcTable, PredInfo0, PredInfo),
        svmap.det_update(PredId, PredInfo, !PredTable),
        list.append(ProcErrors, !Errors)
    ),
    list.foldl2(RecordInfo, AbstractSCC, [], Errors, PredTable0, PredTable),
    module_info_set_preds(PredTable, !Module).

:- pred build_abstract_proc(list(pred_proc_id)::in, build_options::in,
    list(pred_proc_id)::in, module_info::in, pred_proc_id::in,
    size_varset::in, size_varset::out,
    list(scc_info)::in, list(scc_info)::out,
    io::di, io::uo) is det.

build_abstract_proc(EntryProcs, Options, SCC, Module, PPId, !SizeVarset,
        !AbstractInfo, !IO) :-
    trace [io(!DebugIO), compiletime(flag("term_constr_build"))] (
        io.write_string("Building procedure: ", !DebugIO),
        hlds_out.write_pred_proc_id(Module, PPId, !DebugIO),
        io.nl(!DebugIO),
        io.flush_output(!DebugIO)
    ),

    module_info_pred_proc_info(Module, PPId, PredInfo, ProcInfo),
    pred_info_get_context(PredInfo, Context),
    proc_info_get_vartypes(ProcInfo, VarTypes),
    proc_info_get_headvars(ProcInfo, HeadProgVars),
    proc_info_get_argmodes(ProcInfo, ArgModes0),
    proc_info_get_goal(ProcInfo, Goal0),
    % The pretest code we add for compiler-generated unification and comparison
    % predicates uses type casts. It uses them in a way that is guaranteed
    % to terminate, but our analysis is not (yet) able to find this out for
    % itself. We therefore analyse only the non-pretest parts of such goals.
    Goal = maybe_strip_equality_pretest(Goal0),

    % Allocate one size_var for each real var. in the procedure.
    % Work out which variables have zero size.
    allocate_sizevars(HeadProgVars, Goal, SizeVarMap, !SizeVarset),
    Zeros = find_zero_size_vars(Module, SizeVarMap, VarTypes),
    Info0 = init_traversal_info(Module, Options ^ bo_functor_info, PPId,
        Context, VarTypes, Zeros, SizeVarMap, SCC,
        Options ^ bo_failure_constrs, Options ^ bo_arg_size_only ),

    % Traverse the HLDS and construct the abstract version of
    % this procedure.
    build_abstract_goal(Goal, AbstractBody0, Info0, Info),
    IntermodStatus = Info ^ tti_intermod_status,
    HeadSizeVars   = prog_vars_to_size_vars(SizeVarMap, HeadProgVars),
    AbstractBody   = simplify_abstract_rep(AbstractBody0),

    % Work out which arguments can be used in termination proofs.
    % An argument may be used if (a) it is input and (b) it has non-zero size.
    ChooseArg = (func(Var, Mode) = UseArg :-
        map.lookup(VarTypes, Var, Type),
        (
            not zero_size_type(Module, Type),
            mode_util.mode_is_input(Module, Mode)
        ->
            UseArg = yes
        ;
            UseArg = no
        )
    ),
    Inputs = list.map_corresponding(ChooseArg, HeadProgVars, ArgModes0),

    % The size_varset for this procedure is set to rubbish here.
    % When we complete building this SCC we will set it to the correct value.
    IsEntryPoint = (list.member(PPId, EntryProcs) -> yes ; no),
    AbstractProc = abstract_proc(real(PPId), IsEntryPoint, Context,
        HeadSizeVars, Inputs, AbstractBody, SizeVarMap, !.SizeVarset, Zeros,
        Info ^ tti_recursion, Info ^ tti_maxcalls, Info ^ tti_ho_info),

    ThisProcInfo = scc_info(PPId, AbstractProc, SizeVarMap, IntermodStatus,
        Info ^ tti_errors, HeadSizeVars),

    list.cons(ThisProcInfo, !AbstractInfo),

    trace [io(!DebugIO), compiletime(flag("term_constr_build"))] (
        io.write_string("Abstract proc is:\n", !DebugIO),
        dump_abstract_proc(AbstractProc, 0, Module, !DebugIO),
        io.nl(!DebugIO)
    ).

%------------------------------------------------------------------------------%
%
% Predicates for traversing HLDS goals and collecting constraints from them.
%

% While traversing the HLDS we accumulate the following information:
%
% * The type of recursion present in each procedure.
%
% * If the procedure may be involved in intermodule mutual recursion.
%
% * The number of calls in each procedure (We can use this information
%   to short-circuit edge labelling in pass 2).
%
% * Any calls that are made from the SCC being processed to lower SCCs
%   that do not terminate.

:- type traversal_info
    --->    traversal_info(
                % What type of recursion is present in the procedure,
                % i.e. `none', `direct', `mutual'.
                tti_recursion                   :: recursion_type,

                % Record whether this procedure is potentially involved
                % in mutual recursion across module boundaries.
                tti_intermod_status             :: intermod_status,

                % Errors encountered while building the AR.
                tti_errors                      :: term2_errors,

                % The HLDS.
                tti_module_info                 :: module_info,

                % The norm we are using.
                tti_norm                        :: functor_info,

                % The procedure we are currently processing.
                tti_ppid                        :: pred_proc_id,

                % The context of the current procedure.
                tti_context                     :: term.context,

                % Types for all prog_vars in the current procedure.
                tti_vartypes                    :: vartypes,

                % size_vars in the current procedure that are known
                % to have zero size.
                tti_zeros                       :: set(size_var),

                % Map from prog_vars to size_vars.
                tti_size_var_map                :: size_var_map,

                % The procedures in the SCC of the call graph
                % we are current traversing.
                tti_scc                         :: list(pred_proc_id),

                % The number of calls in the procedure.
                tti_maxcalls                    :: int,

                % If no then do not bother looking for failure constraints.
                % The `--no-term2-propagate-failure-constraints' options.
                tti_find_fail_constrs           :: bool,

                % Information about any higher-order calls a procedure makes.
                % XXX Currently unused.
                tti_ho_info                     :: list(abstract_ho_call),

                % Do we only want to run IR analysis?
                % The `--term2-arg-size-analysis-only' option.
                tti_arg_analysis_only           :: bool
        ).

:- func init_traversal_info(module_info, functor_info, pred_proc_id,
    term.context, vartypes, zero_vars, size_var_map, list(pred_proc_id),
    bool, bool) = traversal_info.

init_traversal_info(ModuleInfo, Norm, PPId, Context, Types, Zeros,
        VarMap, SCC, FailConstrs, ArgSizeOnly)
    = traversal_info(none, not_mutually_recursive, [], ModuleInfo, Norm,
        PPId, Context, Types, Zeros, VarMap, SCC, 0, FailConstrs, [],
        ArgSizeOnly).

:- pred info_increment_maxcalls(traversal_info::in, traversal_info::out)
    is det.

info_increment_maxcalls(!Info) :-
    !:Info = !.Info ^ tti_maxcalls := !.Info ^ tti_maxcalls + 1.

:- pred info_update_errors(term_constr_errors.error::in, traversal_info::in,
    traversal_info::out) is det.

info_update_errors(Error, !Info) :-
    !:Info = !.Info ^ tti_errors := [Error | !.Info ^ tti_errors].

:- pred info_update_recursion(recursion_type::in,
    traversal_info::in, traversal_info::out) is det.

info_update_recursion(RecType, !Info) :-
    UpdatedRecType = combine_recursion_types(!.Info ^ tti_recursion, RecType),
    !:Info = !.Info ^ tti_recursion := UpdatedRecType.

:- pred info_update_ho_info(context::in,
    traversal_info::in, traversal_info::out) is det.

info_update_ho_info(Context, !Info) :-
    !:Info = !.Info ^ tti_ho_info := [ho_call(Context) | !.Info ^ tti_ho_info].

:- pred set_intermod_status(intermod_status::in,
    traversal_info::in, traversal_info::out) is det.

set_intermod_status(Status, !TraversalInfo) :-
    !:TraversalInfo = !.TraversalInfo ^ tti_intermod_status := Status.

%------------------------------------------------------------------------------%
%
% Predicates for abstracting goals.
%

% When constructing the abstract representation of the program
% this attaches the local variables to the abstract goal.
% (See comments about local variables in term_constr_data.m for more details.)

:- pred build_abstract_goal(hlds_goal::in, abstract_goal::out,
    traversal_info::in, traversal_info::out) is det.

build_abstract_goal(Goal, AbstractGoal, !Info) :-
    Goal = hlds_goal(GoalExpr, GoalInfo),
    build_abstract_goal_2(GoalExpr, GoalInfo, AbstractGoal0, !Info),
    partition_vars(Goal, Locals0, NonLocals0),
    SizeVarMap = !.Info ^ tti_size_var_map,
    Locals = prog_vars_to_size_vars(SizeVarMap, Locals0),
    NonLocals = prog_vars_to_size_vars(SizeVarMap, NonLocals0),
    AbstractGoal = update_local_and_nonlocal_vars(AbstractGoal0,
        Locals, NonLocals).

:- pred build_abstract_goal_2(hlds_goal_expr::in, hlds_goal_info::in,
    abstract_goal::out, traversal_info::in, traversal_info::out) is det.

build_abstract_goal_2(GoalExpr, GoalInfo, AbstractGoal, !Info) :-
    (
        GoalExpr = conj(_, Goals),
        % For the purposes of termination analysis there is no
        % distinction between parallel conjunctions and normal ones.
        build_abstract_conj(Goals, AbstractGoal, !Info)
    ;
        GoalExpr = disj(Goals),
        build_abstract_disj(non_switch(Goals), AbstractGoal, !Info)
    ;
        GoalExpr = switch(SwitchVar, _, Cases),
        build_abstract_disj(switch(SwitchVar, Cases), AbstractGoal, !Info)
    ;
        GoalExpr = if_then_else(_, Cond, Then, Else),

        % Reduce the if-then goals to an abstract conjunction.
        build_abstract_conj([Cond, Then], AbstractSuccessGoal, !Info),

        % Work out a failure constraint for the Cond and then abstract the else
        % branch.  We won't bother do any other simplifications here as the AR
        % simplification pass will sort all of this out.
        CondFail = find_failure_constraint_for_goal(Cond, !.Info),

        % XXX FIXME - the local/non-local variable sets end up
        % being incorrect here.
        build_abstract_goal(Else, AbstractElse, !Info),
        AbstractFailureGoal = term_conj([CondFail, AbstractElse], [], []),
        AbstractDisjuncts = [AbstractSuccessGoal, AbstractFailureGoal],
        AbstractGoal = term_disj(AbstractDisjuncts, 2, [], [])
    ;
        GoalExpr = scope(_Reason, SubGoal),
        % XXX We should special-case the handling of from_ground_term_construct
        % scopes.
        build_abstract_goal(SubGoal, AbstractGoal, !Info)
    ;
        GoalExpr = plain_call(CallPredId, CallProcId, CallArgs, _, _, _),
        CallSizeArgs = prog_vars_to_size_vars(!.Info ^ tti_size_var_map,
            CallArgs),
        build_abstract_call(proc(CallPredId, CallProcId), CallSizeArgs,
            GoalInfo, AbstractGoal, !Info)
    ;
        GoalExpr = unify(_, _, _, Unification, _),
        build_abstract_unification(Unification, AbstractGoal, !Info)
    ;
        GoalExpr = negation(SubGoal),
        % Event though a negated goal cannot have any output we still need
        % to check it for calls to non-terminating procedures.
        build_abstract_goal(SubGoal, _, !Info),

        % Find a failure constraint for the goal if
        % `--term2-propagate-failure-constraints' is enabled,
        % otherwise just use the constraint that all non-zero input vars
        % should be non-negative.
        AbstractGoal = find_failure_constraint_for_goal(SubGoal, !.Info)
    ;
        GoalExpr = call_foreign_proc(Attrs, PredId, ProcId, Args, ExtraArgs,
            _, _),
        % XXX Eventually we should provide some facility for specifying the
        % arg_size constraints for foreign_procs.

        % Create non-negativity constraints for each non-zero argument
        % in the foreign proc.
        ForeignArgToVar = (func(ForeignArg) = ForeignArg ^ arg_var),
        ProgVars = list.map(ForeignArgToVar, Args ++ ExtraArgs),
        SizeVars = prog_vars_to_size_vars(!.Info ^ tti_size_var_map, ProgVars),
        Constraints = make_arg_constraints(SizeVars, !.Info ^ tti_zeros),
        (
            (
                get_terminates(Attrs) = proc_terminates
            ;
                get_terminates(Attrs) = depends_on_mercury_calls,
                get_may_call_mercury(Attrs) = proc_will_not_call_mercury
            )
        ->
            true
        ;
            Context = goal_info_get_context(GoalInfo),
            Error = Context - foreign_proc_called(proc(PredId, ProcId)),
            info_update_errors(Error, !Info)
        ),
        Polyhedron = polyhedron.from_constraints(Constraints),
        AbstractGoal = term_primitive(Polyhedron, [], [])
    ;
        GoalExpr = generic_call(_, _, _, _),
        % XXX At the moment all higher-order calls are eventually treated
        % as an error. We do not record them as a normal type of error
        % because this is going to change. To approximate their effect here
        % just assume that any non-zero output variables from the HO call
        % are unbounded in size.
        %
        Context = goal_info_get_context(GoalInfo),
        AbstractGoal = term_primitive(polyhedron.universe, [], []),
        info_update_ho_info(Context, !Info)
    ;
        GoalExpr = shorthand(_),
        % These should have been expanded out by now.
        unexpected(this_file, "build_abstract_goal_2: shorthand")
    ).

%------------------------------------------------------------------------------%
%
% Additional predicates for abstracting (parallel) conjunctions.
%

:- pred build_abstract_conj(hlds_goals::in, abstract_goal::out,
    traversal_info::in, traversal_info::out) is det.

build_abstract_conj(Conjuncts, AbstractGoal, !Info) :-
    list.map_foldl(build_abstract_goal,Conjuncts, AbstractGoals0, !Info),
    AbstractGoals = simplify_conjuncts(AbstractGoals0),
    AbstractGoal = term_conj(AbstractGoals, [], []).

%------------------------------------------------------------------------------%
%
% Additional predicates for abstracting calls.
%

:- pred build_abstract_call(pred_proc_id::in, size_vars::in,
    hlds_goal_info::in, abstract_goal::out, traversal_info::in,
    traversal_info::out) is det.

build_abstract_call(CalleePPId, CallerArgs, GoalInfo, AbstractGoal, !Info) :-
    Context = goal_info_get_context(GoalInfo),
    ( list.member(CalleePPId, !.Info ^ tti_scc) ->
        build_recursive_call(CalleePPId, CallerArgs, Context, AbstractGoal,
            !Info)
    ;
        build_non_recursive_call(CalleePPId, CallerArgs, Context, AbstractGoal,
            !Info)
    ).

    % If the call is potentially recursive, we construct an abstract call
    % to represent it - see term_constr_data.m for details.
    %
:- pred build_recursive_call(pred_proc_id::in, size_vars::in, prog_context::in,
    abstract_goal::out, traversal_info::in, traversal_info::out) is det.

build_recursive_call(CalleePPId, CallerArgs, Context, AbstractGoal, !Info) :-
    CallerPPId = !.Info ^ tti_ppid,
    CallerZeros = !.Info ^ tti_zeros,
    ( CallerPPId = CalleePPId ->
        info_update_recursion(direct_only, !Info)
    ;
        info_update_recursion(mutual_only, !Info)
    ),
    CallerArgConstrs = make_arg_constraints(CallerArgs, CallerZeros),
    CallerArgPoly = polyhedron.from_constraints(CallerArgConstrs),
    info_increment_maxcalls(!Info),
    AbstractGoal = term_call(real(CalleePPId), Context, CallerArgs,
        CallerZeros, [], [], CallerArgPoly).

    % For non-recursive calls look up the argument size constraints for the
    % callee procedure and build an abstract primitive goal to store them.
    %
    % If we are running termination analysis, as opposed to just the IR
    % analysis then we also need to check that the termination status of the
    % callee procedure.
    %
:- pred build_non_recursive_call(pred_proc_id::in, size_vars::in,
    prog_context::in, abstract_goal::out, traversal_info::in,
    traversal_info::out) is det.

build_non_recursive_call(CalleePPId, CallerArgs, Context, AbstractGoal,
        !Info) :-
    ModuleInfo = !.Info ^ tti_module_info,
    CallerPPId = !.Info ^ tti_ppid,
    ZeroVars = !.Info ^ tti_zeros,
    module_info_pred_proc_info(ModuleInfo, CalleePPId, _, CalleeProcInfo),

    % Check the termination status of the callee procedure if we are running a
    % full analysis - ignore it if we are only running the IR analysis.
    proc_info_get_termination2_info(CalleeProcInfo, CalleeTerm2Info),
    ArgAnalysisOnly = !.Info ^ tti_arg_analysis_only,
    (
        ArgAnalysisOnly = no,
        MaybeTermStatus = CalleeTerm2Info ^ term_status,
        (
            MaybeTermStatus = yes(TermStatus),
            (
                TermStatus = can_loop(_),
                Error = Context - can_loop_proc_called(CallerPPId, CalleePPId),
                info_update_errors(Error, !Info)
            ;
                TermStatus = cannot_loop(_)
            )
        ;
            MaybeTermStatus = no,
            unexpected(this_file,
                "Callee procedure has no termination status.")
        )
    ;
        ArgAnalysisOnly = yes
    ),

    % Check the arg_size_info for the procedure being called.
    ArgSizeInfo = CalleeTerm2Info ^ success_constrs,
    (
        ArgSizeInfo = no,
        unexpected(this_file, "No argument size info for callee proc.")
    ;
        ArgSizeInfo = yes(SizeInfo),
        ArgSizeConstrs0 = polyhedron.non_false_constraints(SizeInfo),
        (
            ArgSizeConstrs0 = [],
            Constraints = []
        ;
            ArgSizeConstrs0 = [_ | _],
            CalleeHeadVars = CalleeTerm2Info ^ head_vars,
            SubstMap = create_var_substitution(CallerArgs, CalleeHeadVars),
            Constraints0 = lp_rational.substitute_vars(SubstMap,
                ArgSizeConstrs0),
            Constraints = lp_rational.set_vars_to_zero(ZeroVars, Constraints0)
        )
    ),
    Polyhedron = polyhedron.from_constraints(Constraints),
    AbstractGoal = term_primitive(Polyhedron, [], []).

%------------------------------------------------------------------------------%
%
% Additional predicates for abstracting switches and disjunctions.
%

% NOTE: for switches and disjunctions we add the variables that
% are local to the entire switch/disjunction to the list of variables
% that are local to each case/disjunct.  The reason for this is that
% the projection operation distributes over the convex hull operation
% and it is more efficient to eliminate the variables from each branch
% *before* taking the convex hull.  This is because the transformation
% matrix used by the convex hull operation (see polyhedron.m) will
% usually be much larger for the entire disjunction than the matrix used
% for each case/disjunct.

:- type disj_info
    --->    switch(prog_var, list(case))
    ;       non_switch(hlds_goals).

:- pred build_abstract_disj(disj_info::in, abstract_goal::out,
    traversal_info::in, traversal_info::out) is det.

build_abstract_disj(Type, AbstractGoal, !Info) :-
    (
        Type = non_switch(Goals),
        build_abstract_disj_acc(Goals, [], AbstractGoals, !Info)
    ;
        Type = switch(SwitchVar, Cases),
        build_abstract_switch_acc(SwitchVar, Cases, [], AbstractGoals, !Info)
    ),
    (
        AbstractGoals = [],
        AbstractGoal = term_primitive(polyhedron.universe, [], [])
    ;
        AbstractGoals = [Goal],
        AbstractGoal = Goal
    ;
        AbstractGoals = [_, _ | _],
        DisjSize = list.length(AbstractGoals),
        AbstractGoal = term_disj(AbstractGoals, DisjSize, [], [])
    ).

:- pred build_abstract_disj_acc(hlds_goals::in, abstract_goals::in,
    abstract_goals::out, traversal_info::in, traversal_info::out) is det.

build_abstract_disj_acc([], !AbstractGoals, !Info).
build_abstract_disj_acc([Goal | Goals], !AbstractGoals, !Info) :-
    build_abstract_goal(Goal, AbstractGoal, !Info),
    list.cons(AbstractGoal, !AbstractGoals),
    build_abstract_disj_acc(Goals, !AbstractGoals, !Info).

    % With switches we need to consider the constraints on the variable
    % being switched on as well as those from the body of each case.
    %
    % For each case, we check if there is a deconstruction unification
    % involving the switch variable. If there is no such unification then
    % the constraint for the case will not include a constraint on the size
    % of the switched-on var. In that case we add an appropriate constraint.
    %
    % We add the extra constraint by creating a new primitive abstract
    % goal and conjoining that to the rest.
    %
:- pred build_abstract_switch_acc(prog_var::in, list(case)::in,
    abstract_goals::in, abstract_goals::out, traversal_info::in,
    traversal_info::out) is det.

build_abstract_switch_acc(_, [], !AbstractGoals, !Info).
build_abstract_switch_acc(SwitchProgVar, [Case | Cases], !AbstractGoals,
        !Info) :-
    Case = case(MainConsId, OtherConsIds, Goal),
    build_abstract_goal(Goal, AbstractGoal0, !Info),

    % We now need to check that constraints on the switch var are included.
    % They will *not* have been included if the case did not contain a
    % unification deconstructing that variable (which it can't contain if the
    % switch arm is for several cons_ids). They are of course in the HLDS,
    % just not stored in a way we can derive them from the goal in the normal
    % fashion unless there is actually a deconstruction unification present.

    (
        OtherConsIds = [],
        detect_switch_var(Goal, SwitchProgVar, MainConsId)
    ->
        AbstractGoal = AbstractGoal0
    ;
        TypeMap = !.Info ^ tti_vartypes,
        SizeVarMap  = !.Info ^ tti_size_var_map,
        map.lookup(TypeMap, SwitchProgVar, SwitchVarType),
        SwitchSizeVar = prog_var_to_size_var(SizeVarMap, SwitchProgVar),
        type_to_ctor_and_args_det(SwitchVarType, TypeCtor, _),
        Size = functor_lower_bound(!.Info ^ tti_norm, TypeCtor, MainConsId,
            !.Info ^ tti_module_info),
        ( set.member(SwitchSizeVar, !.Info ^ tti_zeros) ->
            ExtraConstr = []
        ;
            SwitchVarConst = rat(Size),
            ( Size = 0 ->
                SwitchVarConstr =
                    make_var_const_eq_constraint(SwitchSizeVar,
                        SwitchVarConst)
            ;
                SwitchVarConstr =
                    make_var_const_gte_constraint(SwitchSizeVar,
                        SwitchVarConst)
            ),
            ExtraConstr = [SwitchVarConstr]
        ),
        ExtraPoly = polyhedron.from_constraints(ExtraConstr),
        ExtraGoal = term_primitive(ExtraPoly, [], []),
        AbstractGoal = term_conj([ExtraGoal, AbstractGoal0], [], [])
    ),
    list.cons(AbstractGoal, !AbstractGoals),
    build_abstract_switch_acc(SwitchProgVar, Cases, !AbstractGoals, !Info).

:- pred detect_switch_var(hlds_goal::in, prog_var::in, cons_id::in) is semidet.

detect_switch_var(hlds_goal(unify(_, _, _, Kind, _), _), SwitchVar, ConsId)  :-
    (
        Kind = deconstruct(SwitchVar, ConsId, _, _, _, _)
    ;
        Kind = complicated_unify(_, _, _),
        unexpected(this_file,
            "complicated_unify/3 goal during termination analysis.")
    ;
        ( Kind = construct(_, _, _, _, _, _, _)
        ; Kind = assign(_, _)
        ; Kind = simple_test(_, _)
        ),
        fail
    ).
detect_switch_var(hlds_goal(shorthand(_), _), _, _) :-
    unexpected(this_file, "shorthand/1 goal during termination analysis").

%------------------------------------------------------------------------------%
%
% Additional predicates for abstracting unifications.
%

:- pred build_abstract_unification(unification::in, abstract_goal::out,
    traversal_info::in, traversal_info::out) is det.

build_abstract_unification(Unification, AbstractGoal, !Info) :-
    (
        Unification = construct(Var, ConsId, ArgVars, Modes, _, _, _),
        build_abstract_decon_or_con_unify(Var, ConsId, ArgVars, Modes,
            Constraints, !Info),
        AbstractGoal = build_goal_from_unify(Constraints)
    ;
        Unification = deconstruct(Var, ConsId, ArgVars, Modes, _, _),
        build_abstract_decon_or_con_unify(Var, ConsId, ArgVars, Modes,
            Constraints, !Info),
        AbstractGoal = build_goal_from_unify(Constraints)
    ;
        Unification = assign(LVar, RVar),
        build_abstract_simple_or_assign_unify(LVar, RVar, Constraints, !Info),
        AbstractGoal = build_goal_from_unify(Constraints)
    ;
        Unification = simple_test(LVar, RVar),
        build_abstract_simple_or_assign_unify(LVar, RVar, Constraints, !Info),
        AbstractGoal = build_goal_from_unify(Constraints)
    ;
        Unification = complicated_unify(_, _, _),
        unexpected(this_file, "complicated_unify/3 in termination analysis.")
    ).

    % Used for deconstruction and construction unifications.  e.g. for a
    % unification of the form: X = f(U, V, W), if the norm counts the
    % first and second arguments then the constraint returned is |X| -
    % |U| - |V| = |f|.  (|X| is the size_var corresponding to X).
    %
:- pred build_abstract_decon_or_con_unify(prog_var::in, cons_id::in,
    prog_vars::in, list(uni_mode)::in, constraints::out,
    traversal_info::in, traversal_info::out) is det.

build_abstract_decon_or_con_unify(Var, ConsId, ArgVars, Modes, Constraints,
        !Info) :-
    VarTypes = !.Info ^ tti_vartypes,
    map.lookup(VarTypes, Var, Type),
    (
        not type_is_higher_order(Type),
        type_to_ctor_and_args(Type, TypeCtor, _)
    ->
        Norm   = !.Info ^ tti_norm,
        ModuleInfo = !.Info ^ tti_module_info,
        Zeros  = !.Info ^ tti_zeros,

        % We need to strip out any typeinfo related variables before
        % measuring the size of the term; otherwise functor_norm will
        % raise a software error if we are using the `num-data-elems'
        % norm and the term has existential typeclass constraints.

        strip_typeinfos_from_args_and_modes(VarTypes, ArgVars, FixedArgs,
            Modes, FixedModes),

        functor_norm(Norm, TypeCtor, ConsId, ModuleInfo, Constant,
            FixedArgs, CountedVars, FixedModes, _),

        % The constraint from this unification is:
        %
        %      |Var| = Constant + sum(CountedVars)
        %
        % |Var| is just the size_var corresponding to Var.  The
        % value of `Constant' will depend upon the norm being used.

        SizeVar = prog_var_to_size_var(!.Info ^ tti_size_var_map, Var),
        ( set.member(SizeVar, Zeros) ->
            FirstTerm = []
        ;
            FirstTerm = [SizeVar - one]
        ),
        AddTerms = (func(Var1, Terms0) = Terms1 :-
            SizeVar1 = prog_var_to_size_var(!.Info ^ tti_size_var_map, Var1),
            ( set.member(SizeVar1, Zeros) ->
                Terms1 = Terms0
            ;
                Terms1 = [SizeVar1 - (-one) | Terms0]
            )
        ),
        Terms = list.foldl(AddTerms, CountedVars, FirstTerm),
        Constraint = constraint(Terms, (=), rat(Constant)),
        ( is_false(Constraint) ->
            unexpected(this_file, "false constraint from unification.")
        ;
            SizeVars0 = prog_vars_to_size_vars(!.Info ^ tti_size_var_map,
                ArgVars),
            SizeVars1 = [SizeVar | SizeVars0],
            SizeVars  = list.filter(isnt(is_zero_size_var(!.Info ^ tti_zeros)),
                SizeVars1)
        ),
        NonNegConstraints = list.map(make_nonneg_constr, SizeVars),
        Constraints  = [ Constraint | NonNegConstraints ]
    ;
        % The only valid higher-order unifications are assignments
        % For the purposes of the IR analysis we can ignore them.
        Constraints = []
    ).

:- pred strip_typeinfos_from_args_and_modes(vartypes::in,
    list(prog_var)::in, list(prog_var)::out,
    list(uni_mode)::in, list(uni_mode)::out) is det.

strip_typeinfos_from_args_and_modes(VarTypes, !Args, !Modes) :-
    ( strip_typeinfos_from_args_and_modes_2(VarTypes, !Args, !Modes) ->
        true
    ;
        unexpected(this_file,
            "unequal length lists in strip_type_infso_and_modes/5")
    ).

:- pred strip_typeinfos_from_args_and_modes_2(vartypes::in,
    list(prog_var)::in, list(prog_var)::out,
    list(uni_mode)::in, list(uni_mode)::out) is semidet.

strip_typeinfos_from_args_and_modes_2(_, [], [], [], []).
strip_typeinfos_from_args_and_modes_2(VarTypes, [Arg | !.Args], !:Args,
        [Mode | !.Modes], !:Modes) :-
    strip_typeinfos_from_args_and_modes_2(VarTypes, !Args, !Modes),
    map.lookup(VarTypes, Arg, Type),
    ( is_introduced_type_info_type(Type) ->
        true
    ;
        list.cons(Arg, !Args),
        list.cons(Mode, !Modes)
    ).

    % Assignment and simple_test unifications of the form X = Y
    % are abstracted as |X| - |Y| = 0.
    %
:- pred build_abstract_simple_or_assign_unify(prog_var::in, prog_var::in,
    constraints::out, traversal_info::in, traversal_info::out) is det.

build_abstract_simple_or_assign_unify(LeftProgVar, RightProgVar, Constraints,
        !Info) :-
    SizeVarMap = !.Info ^ tti_size_var_map,
    Zeros = !.Info ^ tti_zeros,
    LeftSizeVar = prog_var_to_size_var(SizeVarMap, LeftProgVar),
    RightSizeVar = prog_var_to_size_var(SizeVarMap, RightProgVar),
    (
        set.member(LeftSizeVar, Zeros),
        set.member(RightSizeVar, Zeros)
    ->
        Constraints = []    % `true' constraint.
    ;
        (set.member(LeftSizeVar, Zeros)
        ; set.member(RightSizeVar, Zeros)
        )
    ->
        unexpected(this_file, "zero unified with non-zero.")
    ;
        % Create non-negativity constraints.
        NonNegConstrs = list.map(make_nonneg_constr,
            [LeftSizeVar, RightSizeVar]),
        Terms = [LeftSizeVar - one, RightSizeVar - (-one)],
        AssignConstr = constraint(Terms, (=), zero),
        % XXX I don't think this call to simplify helps anymore.
        Constraints = simplify_constraints([AssignConstr | NonNegConstrs])
    ).

    % Check that the abstraction of a unification has not resulted
    % in the false constraint.
    %
:- func build_goal_from_unify(constraints) = abstract_goal.

build_goal_from_unify(Constraints) = term_primitive(Polyhedron, [], []) :-
    Polyhedron = polyhedron.from_constraints(Constraints),
    ( polyhedron.is_empty(Polyhedron) ->
        unexpected(this_file, "empty polyhedron from unification.")
    ;
        true
    ).

%------------------------------------------------------------------------------%

    % Because quantification returns a conservative estimate of nonlocal
    % vars, this returns a list of local vars that may omit some of the
    % real local vars.  This shouldn't be a problem as everything but
    % the head_vars will be projected out at the end of each iteration anyway.
    %
:- func local_vars(hlds_goal) = prog_vars.

local_vars(hlds_goal(GoalExpr, GoalInfo)) = Locals :-
    NonLocals = goal_info_get_nonlocals(GoalInfo),
    QuantVars = free_goal_vars(hlds_goal(GoalExpr, GoalInfo)),
    LocalsSet = set.difference(QuantVars, NonLocals),
    Locals = set.to_sorted_list(LocalsSet).

    % Partition the variables of a goal into a set of local variables
    % and a set of non-local variables.
    %
:- pred partition_vars(hlds_goal::in, prog_vars::out, prog_vars::out) is det.

partition_vars(hlds_goal(GoalExpr, GoalInfo), Locals, NonLocals) :-
    NonLocals0 = goal_info_get_nonlocals(GoalInfo),
    QuantVars = free_goal_vars(hlds_goal(GoalExpr, GoalInfo)),
    Locals = set.to_sorted_list(set.difference(QuantVars, NonLocals0)),
    NonLocals = set.to_sorted_list(NonLocals0).

%-----------------------------------------------------------------------------%
%
% Procedures for manipulating sets of size_vars.
%

    % Create the size_vars corresponding to the given prog_vars.  Also
    % create map from the prog_vars to the size_vars.
    %
    % As termination analysis is (currently) carried out before unused
    % argument analysis it is possible that some variables in the head
    % of a procedure may not occur in the body (this typically occurs
    % with typeinfos).
    %
:- pred allocate_sizevars(prog_vars::in, hlds_goal::in, size_var_map::out,
    size_varset::in, size_varset::out) is det.

allocate_sizevars(HeadProgVars, Goal, SizeVarMap, !SizeVarset) :-
    fill_var_to_sizevar_map(Goal, !SizeVarset, SizeVarMap0),
    possibly_fix_sizevar_map(HeadProgVars, !SizeVarset,
        SizeVarMap0, SizeVarMap).

:- pred fill_var_to_sizevar_map(hlds_goal::in,
    size_varset::in, size_varset::out, size_var_map::out) is det.

fill_var_to_sizevar_map(Goal, !SizeVarset, SizeVarMap) :-
    ProgVarsInGoal = free_goal_vars(Goal),
    ProgVars = set.to_sorted_list(ProgVarsInGoal),
    make_size_var_map(ProgVars, !SizeVarset, SizeVarMap).

    % Fix the map in case some variables that are present only
    % in the head of a procedure were missed.
    %
:- pred possibly_fix_sizevar_map(prog_vars::in, size_varset::in,
    size_varset::out, size_var_map::in, size_var_map::out) is det.

possibly_fix_sizevar_map([], !SizeVarset, !SizeVarMap).
possibly_fix_sizevar_map([ProgVar | ProgVars], !SizeVarset, !SizeVarMap) :-
    ( map.search(!.SizeVarMap, ProgVar, _) ->
        possibly_fix_sizevar_map(ProgVars, !SizeVarset, !SizeVarMap)
    ;
        svvarset.new_var(SizeVar, !SizeVarset),
        svmap.set(ProgVar, SizeVar, !SizeVarMap),
        possibly_fix_sizevar_map(ProgVars, !SizeVarset, !SizeVarMap)
    ).

%-----------------------------------------------------------------------------%
%
% Failure constraints.
%

% The idea here is that if a goal can fail, the fact that it fails
% may tell us information about the size of any input arguments.
%
% For unifications, both deconstructions and simple tests can fail but
% since the latter involves only zero size types it does not tell us
% anything useful.  For a deconstruction unification that can fail we
% know that the variable must be bound to one of the other type
% constructors so we can use this to try and place a lower bound on the
% size of the variable.
%
% For calls we can associate a failure constraint with each procedure in
% the program.  In contexts where the call fails we can just look up the
% failure constraint.
%
% In the worst case we just assume that the size of the (non-zero)
% inputs is unbounded.
%
% TODO Better failure constraints for goals other than unifications.

:-  func find_failure_constraint_for_goal(hlds_goal, traversal_info)
    = abstract_goal.

find_failure_constraint_for_goal(Goal, Info) = AbstractGoal :-
    (
        Info ^ tti_find_fail_constrs = yes,
        find_failure_constraint_for_goal_2(Goal, Info, AbstractGoal0)
    ->
        AbstractGoal = AbstractGoal0
    ;
        NonLocalProgVars0 = goal_info_get_nonlocals(Goal ^ hlds_goal_info),
        NonLocalProgVars = set.to_sorted_list(NonLocalProgVars0),
        NonLocalSizeVars = prog_vars_to_size_vars(Info ^ tti_size_var_map,
            NonLocalProgVars),
        Constraints = make_arg_constraints(NonLocalSizeVars,
            Info ^ tti_zeros),
        FailPoly = polyhedron.from_constraints(Constraints),
        AbstractGoal = term_primitive(FailPoly, [], [])
    ).

:- pred find_failure_constraint_for_goal_2(hlds_goal::in,
    traversal_info::in, abstract_goal::out) is semidet.

    % XXX We could factor out a lot of the code used for
    % substitutions below as the same code is used elsewhere.
    %
find_failure_constraint_for_goal_2(hlds_goal(GoalExpr, _), Info,
        AbstractGoal) :-
    GoalExpr = plain_call(PredId, ProcId, CallArgs, _, _, _),
    CallSizeArgs0 = prog_vars_to_size_vars(Info ^ tti_size_var_map, CallArgs),
    CallSizeArgs = list.filter(isnt(is_zero_size_var(Info ^ tti_zeros)),
        CallSizeArgs0),
    ModuleInfo = Info ^ tti_module_info,
    module_info_pred_proc_info(ModuleInfo, PredId, ProcId, _, ProcInfo),
    proc_info_get_termination2_info(ProcInfo, TermInfo),
    MaybeFailureConstrs = TermInfo ^ failure_constrs,
    (
        MaybeFailureConstrs = no,
        FailureConstraints = []
    ;
        MaybeFailureConstrs = yes(CalleeFailurePolyhedron),
        CalleeFailureConstraints =
            polyhedron.non_false_constraints(CalleeFailurePolyhedron),
        (
            CalleeFailureConstraints = [],
            FailureConstraints  = []
        ;
            CalleeFailureConstraints = [_ | _],
            CalleeHeadVars = TermInfo ^ head_vars,
            SubstMap = create_var_substitution(CallSizeArgs, CalleeHeadVars),
            FailureConstraints = substitute_size_vars(CalleeFailureConstraints,
                SubstMap)
        )
    ),
    FailurePolyhedron = polyhedron.from_constraints(FailureConstraints),
    AbstractGoal = term_primitive(FailurePolyhedron, [], []).

find_failure_constraint_for_goal_2(
        hlds_goal(GoalExpr @ unify(_, _, _, _, _), _),
        Info, AbstractGoal) :-
    find_deconstruct_fail_bound(GoalExpr, Info, Polyhedron),
    AbstractGoal = term_primitive(Polyhedron, [], []).

    % Given a deconstruction unification and assuming that it has
    % failed, find a bound on the size of the variable being
    % deconstructed.
    %
:- pred find_deconstruct_fail_bound(hlds_goal_expr::in, traversal_info::in,
    polyhedron::out) is semidet.

find_deconstruct_fail_bound(unify(_, _, _, Kind, _), Info, Polyhedron) :-
    Kind = deconstruct(Var, ConsId, _, _, can_fail, _),
    map.lookup(Info ^ tti_vartypes, Var, Type),
    prog_type.type_to_ctor_and_args(Type, TypeCtor, _),
    ModuleInfo = Info ^ tti_module_info,
    type_util.type_constructors(ModuleInfo, Type, Constructors0),
    ( ConsId = cons(ConsName, ConsArity) ->
        FindComplement = (pred(Ctor::in) is semidet :-
            Ctor = ctor(_, _, SymName, Args, _),
            list.length(Args, Arity),
            not (
                SymName = ConsName,
                Arity   = ConsArity
            )
        ),
        list.filter(FindComplement, Constructors0, Constructors)
    ;
        unexpected(this_file,
            "find_deconstruct_fail_bound/3: non cons cons_id.")
    ),
    SizeVar = prog_var_to_size_var(Info ^ tti_size_var_map, Var),
    bounds_on_var(Info ^ tti_norm, ModuleInfo, TypeCtor, SizeVar,
        Constructors, Polyhedron).

    % Given a variable, its type and a list of constructors to which
    % it could be bound, return a polyhedron representing the bounds
    % on the size of that variable.
    %
:- pred bounds_on_var(functor_info::in, module_info::in, type_ctor::in,
    size_var::in, list(constructor)::in, polyhedron::out) is det.

bounds_on_var(Norm, ModuleInfo, TypeCtor, Var, Constructors, Polyhedron) :-
    CtorSizes = list.map(lower_bound(Norm, ModuleInfo, TypeCtor),
        Constructors),

    % Split constructors into those that have zero size and
    % those that have non-zero size.
    list.filter((pred(V::in) is semidet :- V = 0), CtorSizes,
        ZeroSizeCtors, NonZeroSizeCtors),
    (
        NonZeroSizeCtors = [],
        (
            ZeroSizeCtors = [],
            unexpected(this_file,
                "bounds_on_var/6: no other constructors for type.")
        ;
            ZeroSizeCtors = [_ | _],
            Constraints = [constraint([Var - one], (=), zero)]
        )
    ;
        NonZeroSizeCtors = [C | Cs],
        upper_bound_constraints(Norm, ModuleInfo, Var, TypeCtor,
            Constructors, UpperBoundConstr),
        (
            ZeroSizeCtors = [],
            LowerBound = list.foldl(int.min, Cs, C),
            LowerBoundConstr = [constraint([Var - one], (>=), rat(LowerBound))]
        ;
            ZeroSizeCtors = [_ | _],
            LowerBoundConstr = [constraint([Var - one], (>=), zero)]
        ),
        Constraints = LowerBoundConstr ++ UpperBoundConstr
    ),
    Polyhedron = polyhedron.from_constraints(Constraints).

:- func lower_bound(functor_info, module_info, type_ctor, constructor) = int.

lower_bound(Norm, Module, TypeCtor, Constructor) = LowerBound :-
    Constructor = ctor(_, _, SymName, Args, _),
    Arity = list.length(Args),
    ConsId = cons(SymName, Arity),
    LowerBound = functor_lower_bound(Norm, TypeCtor, ConsId, Module).

    % Given a variable, its type and a set of constructors to which it
    % could be bound, return a constraint that specifies an upper bound
    % on the size of the variable.  An empty list means that there is no
    % upper bound.
    %
:- pred upper_bound_constraints(functor_info::in, module_info::in, size_var::in,
    type_ctor::in, list(constructor)::in, constraints::out) is det.

upper_bound_constraints(Norm, Module, Var, TypeCtor, Ctors, Constraints) :-
    % If all the arguments of a functor are zero sized then we can give
    % an upper bound on its size.  If we have a set of such functors
    % then the upper bound is the maximum of the individual upper bounds.
    %
    % XXX We could extend this to include functors can only have a
    % finite size but I'm not sure that it's worth it.

    FindUpperBound = (pred(Ctor::in, !.B::in, !:B::out) is semidet :-
        Ctor = ctor(_, _, SymName, Args, _),
        all [Arg] (
            list.member(Arg, Args)
        =>
            zero_size_type(Module, Arg ^ arg_type)
        ),
        Arity = list.length(Args),
        ConsId = cons(SymName, Arity),
        Bound = functor_lower_bound(Norm, TypeCtor, ConsId, Module),
        ( if Bound > !.B then !:B = Bound else true )
    ),
    ( list.foldl(FindUpperBound, Ctors, 0, Bound0) ->
        ( Bound0 = 0 ->
            unexpected(this_file, "zero upper bound.")
        ;
            Constraints = [constraint([Var - one], (=<), rat(Bound0))]
        )
    ;
        Constraints = []
    ).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "term_constr_build.m".

%-----------------------------------------------------------------------------%
:- end_module transform_hlds.term_constr_build.
%-----------------------------------------------------------------------------%
