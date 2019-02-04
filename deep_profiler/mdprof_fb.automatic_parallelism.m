%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2006-2010 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: mdprof_fb.automatic_parallelism.m.
% Author: tannier, pbone.
%
% This module contains the code for analysing deep profiles of programs in
% order to determine how best to automatically parallelise the program.  This
% code is used by the mdprof_feedback tool.
%
%-----------------------------------------------------------------------------%

:- module mdprof_fb.automatic_parallelism.
:- interface.

:- import_module profile.
:- import_module message.
:- import_module mdbcomp.
:- import_module mdbcomp.feedback.
:- import_module mdbcomp.program_representation.

:- import_module cord.
:- import_module int.
:- import_module float.
:- import_module pair.

%-----------------------------------------------------------------------------%

    % Build the candidate parallel conjunctions feedback information used for
    % implicit parallelism.
    %
:- pred candidate_parallel_conjunctions(
    candidate_parallel_conjunctions_opts::in, deep::in, cord(message)::out,
    feedback_info::in, feedback_info::out) is det.

:- type candidate_parallel_conjunctions_opts
    --->    candidate_parallel_conjunctions_opts(
                cpc_desired_parallelism     :: float,
                cpc_sparking_cost           :: int,
                    % The cost of calling MR_fork_new_child.

                cpc_sparking_delay          :: int,
                    % The time from the start of the call to MR_fork_new_child
                    % until the spark has been stolen (and in some cases a
                    % context has been created).

                cpc_locking_cost            :: int,
                cpc_clique_threshold        :: int,
                cpc_call_site_threshold     :: int,
                cpc_parallelise_dep_conjs   :: parallelise_dep_conjs 
            ).
    
:- type parallelise_dep_conjs
    --->    parallelise_dep_conjs
    ;       do_not_parallelise_dep_conjs.

%-----------------------------------------------------------------------------%
    
    % Perform Jerome's analysis and update the feedback info structure.
    %
:- pred css_list_above_threshold(calls_above_threshold_sorted_opts::in,
    deep::in, feedback_info::in, feedback_info::out) is det.

:- type calls_above_threshold_sorted_opts
    --->    calls_above_threshold_sorted_opts(
                cats_measure                :: stat_measure,
                cats_threshold              :: int
            ).

%-----------------------------------------------------------------------------%

:- pred create_candidate_parallel_conj_report(
    pair(string_proc_label, candidate_par_conjunction(pard_goal))::in, 
    cord(string)::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module coverage.
:- import_module create_report.
:- import_module measurement_units.
:- import_module measurements.
:- import_module program_representation_utils.
:- import_module report.
:- import_module var_use_analysis.

:- import_module array.
:- import_module assoc_list.
:- import_module float.
:- import_module io.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module multi_map.
:- import_module mutvar.
:- import_module pqueue.
:- import_module require.
:- import_module set.
:- import_module string.
:- import_module svmap.
:- import_module svset.

%----------------------------------------------------------------------------%
%
% The code in this section has some trace goals that can be enabled with:
%	--trace-flag=debug_cpc_search
%	  Debug the traversal through the clique tree.
%
%	--trace-flag=debug_recursive_costs 
%     Debug the calculation of the costs of recursive call sites.
%
%   --trace-flag=debug_parallel_conjunction_speedup
%     Print candidate parallel conjunctions that are pessimisations.
%
%   --trace-flag=debug_branch_and_bound
%     Debug the branch and bound search for the best parallelisation.
%

candidate_parallel_conjunctions(Opts, Deep, Messages, !Feedback) :-
    Opts = candidate_parallel_conjunctions_opts(DesiredParallelism,
        SparkingCost, SparkingDelay, LockingCost, _CliqueThreshold,
        _CallSiteThreshold, _ParalleliseDepConjs),

    % Find opertunities for parallelism by walking the clique tree.  Don't
    % Descened into cliques cheaper than the threshold.
    deep_lookup_clique_index(Deep, Deep ^ root, RootCliquePtr),
    TotalCallseqs = Deep ^ profile_stats ^ num_callseqs,
    % The +1 here accounts for the cost of the pseudo call into the mercury
    % runtime since it is modeled here as a call site that in reality does not
    % exist.
    RootCliqueCost = build_cs_cost_csq(1, float(TotalCallseqs) + 1.0),
    RootParallelism = no_parallelism,
    candidate_parallel_conjunctions_clique(Opts, Deep, RootCliqueCost,
        RootParallelism, RootCliquePtr, ConjunctionsMultiMap, Messages),

    multi_map.to_flat_assoc_list(ConjunctionsMultiMap,
        ConjunctionsAssocList0),
    map_values_only(convert_candidate_par_conjunction(
            pard_goal_detail_to_pard_goal),
        ConjunctionsAssocList0, ConjunctionsAssocList),
    CandidateParallelConjunctions =
        feedback_data_candidate_parallel_conjunctions(DesiredParallelism,
        SparkingCost, SparkingDelay, LockingCost, ConjunctionsAssocList),
    put_feedback_data(CandidateParallelConjunctions, !Feedback).

:- pred pard_goal_detail_to_pard_goal(pard_goal_detail::in, pard_goal::out) 
    is det.

pard_goal_detail_to_pard_goal(pard_goal_detail(PGT, _, _, _), PG) :-
    (
        PGT = pgt_call(Callee, VarNames, _Vars, CostPercall, _, _),
        PG = pg_call(Callee, VarNames, CostPercall)
    ;
        PGT = pgt_cheap_call(Callee, VarNames, _, _, _),
        PG = pg_cheap_call(Callee, VarNames)
    ;
        PGT = pgt_other_atomic_goal,
        PG = pg_other_atomic_goal
    ;
        PGT = pgt_non_atomic_goal,
        error(this_file ++ 
            "Unexpected: non atomic goal in pard_goal_detail_to_pard_goal")
    ).

%----------------------------------------------------------------------------%

:- type implicit_parallelism_info
    --->    implicit_parallelism_info(
                ipi_deep            :: deep,
                ipi_progrep         :: prog_rep,
                ipi_opts            :: candidate_parallel_conjunctions_opts,
                ipi_call_sites      :: map(goal_path, clique_call_site_report),
                ipi_rec_call_sites  :: map(goal_path, cs_cost_csq),
                ipi_var_table       :: var_table
            ).

    % A representation of a goal within a parallel conjunction.  We don't have
    % to represent many types of goals or details about them, at least for now.
    % This type provides more detail than feedback.pard_goal, this detail isn't
    % required by the compiler and therefore not part of the feedback file
    % format.
    %
:- type pard_goal_detail
    --->    pard_goal_detail(
                pgd_pg_type             :: pard_goal_type,
                    % The type and type-specific values of the pard goal.

                pgd_detism              :: detism_rep,
                    % The determinism of the call.

                pgd_conj_num            :: int,
                    % The place within the conjunction that this conjunct
                    % lies.

                pgd_inst_map_info       :: inst_map_info
                    % The inst map info attached to the original goal.
            ).

:- inst pard_goal_detail(T)
    ---> pard_goal_detail(T, ground, ground, ground).

:- type pard_goal_type 
    --->    pgt_call(
                pgtc_callee             :: callee_rep,
                    
                pgtc_var_names          :: list(maybe(string)),
                    % The names of variables (if user defined) given as
                    % arguments to this call.

                pgtc_vars               :: list(var_rep),
                    % The actual variables given as arguments to this call.

                pgtc_cost_percall       :: float,
                    % The per-call cost of this call in call sequence counts.
             
                pgtc_args               :: list(var_mode_and_use),
                    % The argument modes and use information.

                pgtc_call_site          :: clique_call_site_report
                    % The call site report from the deep profiler.
            )
    ;       pgt_cheap_call(
                pgtcc_callee            :: callee_rep,
                pgtcc_var_names         :: list(maybe(string)),
                pgtcc_vars              :: list(var_rep),
                pgtcc_args              :: list(var_mode_and_use),
                pgtcc_cost              :: cs_cost_csq 
            )
    ;       pgt_other_atomic_goal
    ;       pgt_non_atomic_goal.

:- inst pgt_call 
    --->    pgt_call(ground, ground, ground, ground, ground, ground).

:- inst pgt_atomic_goal
    --->    pgt_call(ground, ground, ground, ground, ground, ground)
    ;       pgt_cheap_call(ground, ground, ground, ground, ground)
    ;       pgt_other_atomic_goal.
    
    % A variable, it's mode and it's usage in the callee.  The mode information
    % is also summarised within the variable use information.
    %
:- type var_mode_and_use
    --->    var_mode_and_use(
                vmu_var                 :: var_rep,
                vmu_mode                :: var_mode_rep,
                vmu_use                 :: var_use_info
            ).

:- type candidate_par_conjunctions ==
    multi_map(string_proc_label, candidate_par_conjunction(pard_goal_detail)).

:- type pard_goals_partition
    --->    pard_goals_partition(
                pgp_goals               :: list(pard_goal_detail),
                pgp_partition_num       :: int
            ).

%----------------------------------------------------------------------------%
%
% Recurse the call graph searching for parallelisation opportunities.
%

    % candidate_parallel_conjunctions_clique(Opts, Deep, ParentCSCost, 
    %   ParentUsedParallelism, CliquePtr, CandidateParallelConjunctions,
    %   Messages)
    %
    % Find any CandidateParallelConjunctions in this clique and it's children.
    % We stop searching when ParentCSCost is too low that the overheads of
    % parallelism are too great or if ParentUsedParallelism becomes greater
    % than the desired amount of parallelism.
    %
:- pred candidate_parallel_conjunctions_clique(
    candidate_parallel_conjunctions_opts::in, deep::in, cs_cost_csq::in,
    parallelism_amount::in, clique_ptr::in, candidate_par_conjunctions::out,
    cord(message)::out) is det.

candidate_parallel_conjunctions_clique(Opts, Deep, ParentCSCostInfo, ParentParallelism,
        CliquePtr, Candidates, Messages) :-
    create_clique_report(Deep, CliquePtr, MaybeCliqueReport),
    (
        MaybeCliqueReport = ok(CliqueReport),
        CliqueProcs = CliqueReport ^ cr_clique_procs,
        % All cliques must contain at least one procedure.
        ( [ FirstCliqueProcPrime | _ ] = CliqueProcs ->
            FirstCliqueProc = FirstCliqueProcPrime
        ;
            error(this_file ++ "A clique must have et least one procedure in " 
                ++ string(CliquePtr))
        ),    
        CliqueIsRecursive = is_clique_recursive(CliqueReport),
        make_clique_proc_map(CliqueProcs, CliqueProcMap),
        candidate_parallel_conjunctions_clique_proc(Opts, Deep,
            CliqueIsRecursive, ParentCSCostInfo, ParentParallelism, set.init,
            CliqueProcMap, CliquePtr, FirstCliqueProc, Candidates, Messages)
    ;
        MaybeCliqueReport = error(Error),
        error(this_file ++ Error),
        Messages = cord.empty
    ).

:- type clique_is_recursive
    --->    clique_is_recursive
    ;       clique_is_not_recursive.

:- func is_clique_recursive(clique_report) = clique_is_recursive.

is_clique_recursive(CliqueReport) = CliqueIsRecursive :-
    CliqueProcs = CliqueReport ^ cr_clique_procs,
    ( CliqueProcs = [_, _ | _] ->
        % If there is more than one procedure then the clique must be mutually
        % recursive.  This computation is trivial compared to the case below.
        CliqueIsRecursive = clique_is_recursive
    ; CliqueProcs = [CliqueProc] ->
        % Look for a self recursion in the single clique procedure.
        CliquePtr = CliqueReport ^ cr_clique_ptr,
        ( 
            % If at least one call site within the clique's proc makes a call
            % to this same clique then this is a recursive clique - this also
            % covers higher-order calls.
            some [CliqueProcDyanmic, CallSite, CalleePerf]
            (
                (
                    CliqueProcDynamic = CliqueProc ^ cpr_first_proc_dynamic
                ;
                    member(CliqueProcDynamic, 
                        CliqueProc ^ cpr_other_proc_dynamics)
                ),
                member(CallSite, CliqueProcDynamic ^ cpdr_call_sites), 
                member(CalleePerf, CallSite ^ ccsr_callee_perfs),
                CliquePtr = CalleePerf ^ perf_row_subject ^ cdesc_clique_ptr
            ) 
        ->
            CliqueIsRecursive = clique_is_recursive
        ;
            CliqueIsRecursive = clique_is_not_recursive
        )
    ;
        error(this_file ++ "Clique must have at least one procedure")
    ).

    % Construct a map of clique proc reports.
    %
:- pred make_clique_proc_map(list(clique_proc_report)::in,
    map(proc_desc, clique_proc_report)::out) is det.

make_clique_proc_map(CliqueProcs, CliqueProcMap) :-
    list.foldl((pred(CliqueProc::in, Map0::in, Map::out) is det :-
            ProcDesc = CliqueProc ^ cpr_proc_summary ^ perf_row_subject,
            map.det_insert(Map0, ProcDesc, CliqueProc, Map)
        ), CliqueProcs, map.init, CliqueProcMap).

    % candidate_parallel_conjunctions_clique_proc(Opts, Deep, 
    %   CliqueIsRecursive, ParentCostInfo, ProcsAnalysed, CliquePtr,
    %   CliqueProc, Candidates, Messages) :-
    %
    % Find candidate parallel conjunctions within a clique_proc_report.
    %
    % ParentCostInfo gives the cost of the call site calling this clique so
    % that we may correctly calculate the per-call costs of recursive cliques
    % and their call sites.
    %
    % ProcsAnalysed keeps a set of procs we've visited to prevent unbound
    % recursion in this algorithm.
    %
    % CliqueProcMap is a map of proc_desc to clique_proc_report structures
    % extracted from the clique_report.
    %
    % CliquePtr is the clique that this proc belongs to.
    %
:- pred candidate_parallel_conjunctions_clique_proc(
    candidate_parallel_conjunctions_opts::in, deep::in, 
    clique_is_recursive::in, cs_cost_csq::in, parallelism_amount::in,
    set(proc_desc)::in, map(proc_desc, clique_proc_report)::in, clique_ptr::in,
    clique_proc_report::in, candidate_par_conjunctions::out,
    cord(message)::out) is det.

candidate_parallel_conjunctions_clique_proc(Opts, Deep, 
        CliqueIsRecursive, ParentCSCostInfo, ParentParallelism, ProcsAnalysed0,
        CliqueProcMap, CliquePtr, CliqueProc, Candidates, Messages) :-
    some [!Messages]
    (
        !:Messages = cord.empty,
        CliqueProcCalls = CliqueProc ^ cpr_proc_summary ^ perf_row_calls,
        cs_cost_to_proc_cost(ParentCSCostInfo, CliqueProcCalls, ParentCostInfo),
        % Determine the costs of the call sites in the procedure.
        (
            CliqueIsRecursive = clique_is_recursive,
            build_recursive_call_site_cost_map(Deep, CliqueProc, CliquePtr,
                ParentCostInfo, RecursiveCallSiteCostMap, CSCMMessages),
            !:Messages = !.Messages ++ CSCMMessages,
            trace [compile_time(flag("debug_cpc_search")), io(!IO)] (
                format_recursive_call_site_cost_map(RecursiveCallSiteCostMap,
                    PrettyCostMapCord),
                PrettyCostMap = append_list(cord.list(PrettyCostMapCord)),
                io.format(
                    "D: In clique %s recursive call site cost map is:\n%s\n",
                    [s(string(CliquePtr)), s(PrettyCostMap)],
                    !IO)
            )
        ;
            CliqueIsRecursive = clique_is_not_recursive,
            RecursiveCallSiteCostMap = map.init
        ),

        % Analyse this procedure for parallelism opportunities.
        candidate_parallel_conjunctions_proc(Opts, Deep, CliqueProc,
            RecursiveCallSiteCostMap, ProcCandidates, ProcCandidatesByGoalPath,
            ProcMessages),
        !:Messages = !.Messages ++ ProcMessages,

        ProcDesc = CliqueProc ^ cpr_proc_summary ^ perf_row_subject,

        % Get a list of call sites
        ( CliqueProc ^ cpr_other_proc_dynamics = [_ | _] ->
            proc_label_from_proc_desc(Deep, ProcDesc, ProcLabel),
            append_message(proc(ProcLabel),
                error_extra_proc_dynamics_in_clique_proc, !Messages)
        ;
            true
        ),
        CallSiteReports = CliqueProc ^ cpr_first_proc_dynamic ^ cpdr_call_sites,
        
        % Analyse child cliques of this clique proc for parallelism
        % opportunities.  Recursive calls point to this same clique, in these
        % cases call candidate_parallel_conjunctions_clique_proc on the
        % procedure within this clique that they call.
        set.insert(ProcsAnalysed0, ProcDesc, ProcsAnalysed),
        list.map2(candidate_parallel_conjunctions_call_site(Opts, Deep,
                ProcsAnalysed, CliqueIsRecursive, RecursiveCallSiteCostMap,
                CliqueProcMap, CliquePtr, ParentParallelism,
                ProcCandidatesByGoalPath),
            CallSiteReports, CSCandidatesList, CSMessagesList),
      
        list.foldl(multi_map.merge, CSCandidatesList, multi_map.init,
            CSCandidates),
        Candidates = multi_map.merge(ProcCandidates, CSCandidates),
        !:Messages = !.Messages ++ cord_list_to_cord(CSMessagesList),
        Messages = !.Messages
    ).

:- pred candidate_parallel_conjunctions_call_site(
    candidate_parallel_conjunctions_opts::in, deep::in, set(proc_desc)::in,
    clique_is_recursive::in, map(goal_path, cs_cost_csq)::in,
    map(proc_desc, clique_proc_report)::in, clique_ptr::in,
    parallelism_amount::in,
    multi_map(string, candidate_par_conjunction(pard_goal_detail))::in,
    clique_call_site_report::in,
    candidate_par_conjunctions::out,
    cord(message)::out) is det.

candidate_parallel_conjunctions_call_site(Opts, Deep, ProcsAnalysed,
        CliqueIsRecursive, RecursiveCallSiteCostMap, CliqueProcMap, CliquePtr,
        ParentParallelism, ProcParallelismCandidates,
        CallSiteReport, Candidates, Messages) :-
    % XXX: This does not weight the callees by the probability that they will
    % be called.  This is only a problem for higher order call sites.
    CalleePerfs = CallSiteReport ^ ccsr_callee_perfs,
    CallSiteDesc = CallSiteReport ^ ccsr_call_site_summary ^ perf_row_subject,
    GoalPath = CallSiteDesc ^ csdesc_goal_path,
    parallelism_probability(ProcParallelismCandidates, GoalPath,
        ParallelismProbability, SubParallelism),
    sub_computation_parallelism(ParentParallelism, ParallelismProbability,
        SubParallelism, Parallelism), 
    list.map2(candidate_parallel_conjunctions_callee(Opts, Deep, ProcsAnalysed,
            CliqueIsRecursive, RecursiveCallSiteCostMap, CliqueProcMap,
            CliquePtr, CallSiteDesc, Parallelism),
        CalleePerfs, CandidatesList, MessagesList),
    list.foldl(multi_map.merge, CandidatesList, multi_map.init, Candidates),
    Messages = cord_list_to_cord(MessagesList).

:- pred parallelism_probability(
    multi_map(goal_path_string, 
        candidate_par_conjunction(pard_goal_detail))::in,
    goal_path::in, probability::out, parallelism_amount::out) is det.

parallelism_probability(Candidates, ConjGoalPath, ParallelismProbability,
        ParallelismAmount) :-
    ( goal_path_remove_last(ConjGoalPath, GoalPath, step_conj(ConjNum)) ->
        StringGoalPath = goal_path_to_string(GoalPath),
        ( multi_map.search(Candidates, StringGoalPath, CandidateList) ->
            (
                % We assume that we can only ever be a member of one
                % parallel conjunction.  That is that overlapping
                % conjunctions are never recommended/seen.
                promise_equivalent_solutions [Amount] some [Candidate, Conj] (
                    member(Candidate, CandidateList),
                    parallel_amount(Candidate ^ cpc_conjs, Conj, Amount),
                    ConjNum = Conj ^ pgd_conj_num
                )
            ->
                % XXX: Wait until we have the new calculations for how
                % dependant parallel conjuncts overlap before we bother to
                % calculate the probability of parallelisation.  For now assume
                % a pesimistic default.
                ParallelismProbability = certain,
                ParallelismAmount = Amount
            ;
                ParallelismProbability = impossible,
                ParallelismAmount = no_parallelism
            )
        ;
            % This callsite is not within a parallel conjunction.
            ParallelismProbability = impossible,
            ParallelismAmount = no_parallelism
        )
    ;
        % We may not be able to remove this goal if it is not directly in a
        % conjunction.  Perhaps it's directly within some branch goal or at the
        % root of a goal path.  In these cases it is not in a parallel
        % conjunction so the parallelism probability is 0.0. 
        ParallelismProbability = impossible,
        ParallelismAmount = no_parallelism 
    ).

:- pred parallel_amount(list(seq_conj(pard_goal_detail))::in, 
    pard_goal_detail::out, parallelism_amount::out) is nondet.

parallel_amount(SeqConjs, Conj, Parallelism) :-
    member(SeqConj, SeqConjs),
    SeqConj = seq_conj(Conjs),
    Parallelism0 = some_parallelism(float(length(Conjs))),
    member(Conj, Conjs),
    sub_computation_parallelism(Parallelism0, certain, Parallelism).

:- pred candidate_parallel_conjunctions_callee(
    candidate_parallel_conjunctions_opts::in, deep::in, set(proc_desc)::in,
    clique_is_recursive::in, map(goal_path, cs_cost_csq)::in,
    map(proc_desc, clique_proc_report)::in, clique_ptr::in, call_site_desc::in,
    parallelism_amount::in, perf_row_data(clique_desc)::in,
    candidate_par_conjunctions::out, cord(message)::out) is det.

candidate_parallel_conjunctions_callee(Opts, Deep, ProcsAnalysed0,
        ParentCliqueIsRecursive, RecursiveCallSiteCostMap, CliqueProcReportMap,
        ParentCliquePtr, CallSiteDesc, Parallelism, CliquePerf, Candidates,
        Messages) :-
    CliqueDesc = CliquePerf ^ perf_row_subject,
    CliquePtr = CliqueDesc ^ cdesc_clique_ptr,
    CliqueEntryProc = CliqueDesc ^ cdesc_entry_member,
    ( ParentCliquePtr = CliquePtr ->
        % This is a recursive call within the same clique.
        ( member(CliqueEntryProc, ProcsAnalysed0) ->
            % If we've analysed this clique in this proc already then don't do
            % it again.
            Candidates = multi_map.init,
            Messages = cord.empty
        ;
            map.lookup(CliqueProcReportMap, CliqueEntryProc, CliqueProcReport),
            ProcsAnalysed = set.insert(ProcsAnalysed0, CliqueEntryProc),
            % We determine the cost of the call site we're following within
            % this clique to this procedure so that it can have correct cost
            % information.
            map.lookup(RecursiveCallSiteCostMap, 
                CallSiteDesc ^ csdesc_goal_path, CallCostInfo),
            candidate_parallel_conjunctions_clique_proc(Opts, Deep,
                ParentCliqueIsRecursive, CallCostInfo, Parallelism, 
                ProcsAnalysed, CliqueProcReportMap, ParentCliquePtr,
                CliqueProcReport, Candidates, Messages)
        )
    ;
        CSCost = build_cs_cost_from_perf(CliquePerf),
        clique_ptr(CliqueNum) = CliquePtr,
        ( 
            % Use the total cost the call to this procedure to decide if we
            % should stop recursing the call graph at this point.  If the
            % procedure does not contribute to the runtime of the program in an
            % absolute way then do not recurse further.  This test is performed
            % here rather than in the callees of this predicate to avoid
            % duplication of code.
            not cs_cost_get_total(CSCost) > float(Opts ^ cpc_clique_threshold)
        ->
            Candidates = multi_map.init, 
            Messages = cord.empty,
            trace [compile_time(flag("debug_cpc_search")), io(!IO)] (
                CSPercallCost = cs_cost_get_percall(CSCost),
                CSCalls = cs_cost_get_calls(CSCost),
                io.format("D: Not entering clique: %d, " ++ 
                    "it is below the clique threashold\n  " ++
                    "It has per-call cost %f and is called %f times\n\n",
                    [i(CliqueNum), f(CSPercallCost), f(CSCalls)], !IO)
            )
        ;
            % Also check check if the desired amount of parallelism has been
            % reached, if so do not recurse further to prevent creating too
            % much extra parallelism.
            exceeded_desired_parallelism(Opts ^ cpc_desired_parallelism,
                Parallelism)
        ->
            Candidates = multi_map.init, 
            Messages = cord.empty,
            trace [compile_time(flag("debug_cpc_search")), io(!IO)] (
                io.format("D: Not entering clique: %d, " ++
                    "no parallel resources left\n  " ++
                    "There are already %s parallel resources used\n\n",
                    [i(CliqueNum), s(string(Parallelism))], !IO)
            )
        ;
            candidate_parallel_conjunctions_clique(Opts, Deep, CSCost,
                Parallelism, CliquePtr, Candidates, Messages)
        )
    ).

%----------------------------------------------------------------------------%
%
% Estimate the cost of the recursive calls under the assumption that current
% call to this procedure had a particular cost.
%

:- pred build_recursive_call_site_cost_map(deep::in, clique_proc_report::in,
    clique_ptr::in, proc_cost_csq::in, map(goal_path, cs_cost_csq)::out,
    cord(message)::out) is det.

build_recursive_call_site_cost_map(Deep, CliqueProc, CliquePtr,
        ParentCost, RecursiveCallSiteCostMap, Messages) :-
    some [!Messages] (
        !:Messages = cord.empty,

        % Lookup the proc static to find the ProcLabel.
        PerfRowData = CliqueProc ^ cpr_proc_summary,
        ProcDesc = PerfRowData ^ perf_row_subject,
        proc_label_from_proc_desc(Deep, ProcDesc, ProcLabel),

        ( CliqueProc ^ cpr_other_proc_dynamics = [_ | _] ->
            append_message(proc(ProcLabel),
                error_extra_proc_dynamics_in_clique_proc, !Messages)
        ;
            true
        ),
        CallSites = CliqueProc ^ cpr_first_proc_dynamic ^ cpdr_call_sites,
       
        PSPtr = ProcDesc ^ pdesc_ps_ptr,
        create_procrep_coverage_report(Deep, PSPtr, MaybeCoverageReport),
        (
            MaybeCoverageReport = ok(procrep_coverage_info(_, ProcRep)),
            Goal = ProcRep ^ pr_defn ^ pdr_goal,
            foldl(add_call_site_to_map, CallSites, map.init, CallSiteMap),
            goal_get_callsite_cost_info(CliquePtr, CallSiteMap, Goal,
                empty_goal_path, Info),
            Info = callsite_cost_info(NonRecCSCost, RecursiveCSCalls,
                RecursiveCS, CallSiteProbabilityMap)
        ;
            MaybeCoverageReport = error(Error),
            % If we couldn't find the proc rep then use the old method, this
            % will not give accuruate call site probabilities.
            foldl4(get_callsite_cost_info(CliquePtr, ParentCost), 
                CallSites, 0.0, NonRecCSCost, 0.0, RecursiveCSCalls,
                set.init, RecursiveCS, map.init, CallSiteProbabilityMap),
            append_message(proc(ProcLabel),
                warning_cannot_compute_procrep_coverage_fallback(Error), 
                !Messages)
        ),

        % The cost of the recursive calls is the total cost minus the cost of
        % the non recursive calls.
        TotalRecursiveCost = 
            proc_cost_get_total(ParentCost) - NonRecCSCost,

        % This should never divide by zero since it is only called on code that
        % is recursive at runtime, that is a recusrive call is executed.
        RecursiveCostPerCall = TotalRecursiveCost / RecursiveCSCalls,

        % Assign costs to call sites.
        set.fold(
            build_recursive_call_site_cost_map_call_site(RecursiveCostPerCall, 
                CallSiteProbabilityMap),
            RecursiveCS, map.init, RecursiveCallSiteCostMap),
        Messages = !.Messages
    ).

:- pred format_recursive_call_site_cost_map(map(goal_path, cs_cost_csq)::in, 
    cord(string)::out) is det.

format_recursive_call_site_cost_map(Map, Result) :-
    map.foldl(format_recursive_call_site_cost, Map, cord.empty, Result).

:- pred format_recursive_call_site_cost(goal_path::in, cs_cost_csq::in, 
    cord(string)::in, cord(string)::out) is det.

format_recursive_call_site_cost(GoalPath, Cost, !Result) :-
    !:Result = cord.snoc(!.Result ++ indent(1), String),
    String = format("%s -> Percall cost: %f Calls: %f\n",
        [s(GoalPathString), f(PerCallCost), f(Calls)]),
    GoalPathString = goal_path_to_string(GoalPath),
    PerCallCost = cs_cost_get_percall(Cost),
    Calls = cs_cost_get_calls(Cost).

:- pred add_call_site_to_map(clique_call_site_report::in, 
    map(goal_path, clique_call_site_report)::in,
    map(goal_path, clique_call_site_report)::out) is det.

add_call_site_to_map(CallSite, !Map) :-
    GoalPath = CallSite ^ ccsr_call_site_summary ^ perf_row_subject 
        ^ csdesc_goal_path,
    svmap.det_insert(GoalPath, CallSite, !Map).

    % The stateful data of the goal_get_callsite_cost_info code below.
    %
:- type callsite_cost_info
    --->    callsite_cost_info(
                csci_non_rec_cs_cost    :: float,
                csci_rec_calls          :: float,
                csci_rec_cs             :: set(clique_call_site_report),
                csci_cs_prob_map        :: map(goal_path, float)
            ).

:- func empty_callsite_cost_info = callsite_cost_info.

empty_callsite_cost_info = callsite_cost_info(0.0, 0.0, set.init, map.init).

:- pred goal_get_callsite_cost_info(clique_ptr::in,
    map(goal_path, clique_call_site_report)::in, goal_rep(coverage_info)::in,
    goal_path::in, callsite_cost_info::out) is det.

goal_get_callsite_cost_info(CliquePtr, CallSites, Goal, GoalPath, Info) :-
    Goal = goal_rep(GoalExpr, Detism, Coverage),
    (
        GoalExpr = conj_rep(Conjs),
        conj_get_callsite_cost_info(CliquePtr, CallSites, Conjs, 1, GoalPath,
            Info)
    ;
        GoalExpr = disj_rep(Disjs),
        disj_get_callsite_cost_info(CliquePtr, CallSites, Detism, Coverage,
            Disjs, GoalPath, Info)
    ;
        GoalExpr = switch_rep(_Var, _CanFail, Cases),
        switch_get_callsite_cost_info(CliquePtr, CallSites, Coverage, Cases,
            GoalPath, Info)
    ;
        GoalExpr = ite_rep(Cond, Then, Else),
        ite_get_callsite_cost_info(CliquePtr, CallSites, Cond, Then, Else,
            GoalPath, Info)
    ;
        (
            GoalExpr = negation_rep(SubGoal),
            SubGoalPath = goal_path_add_at_end(GoalPath, step_neg)
        ;
            GoalExpr = scope_rep(SubGoal, MaybeCut),
            SubGoalPath = goal_path_add_at_end(GoalPath, step_scope(MaybeCut))
        ),
        goal_get_callsite_cost_info(CliquePtr, CallSites, SubGoal,
            SubGoalPath, Info)
    ;
        GoalExpr = atomic_goal_rep(_, _, _, _AtomicGoal),
        atomic_goal_get_callsite_cost_info(CliquePtr, CallSites, GoalPath,
            Info)
    ).

:- pred atomic_goal_get_callsite_cost_info(clique_ptr::in, 
    map(goal_path, clique_call_site_report)::in, goal_path::in,
    callsite_cost_info::out) is det.

atomic_goal_get_callsite_cost_info(CliquePtr, CallSites, GoalPath, Info) :-
    ( map.search(CallSites, GoalPath, CallSite) ->
        svmap.det_insert(GoalPath, 1.0, map.init, CSProbMap),
        ( call_site_is_recursive(CallSite, CliquePtr) ->
            RecursiveCalls = 1.0,
            NonRecursiveCost = 0.0,
            RecursiveCallSites = set.from_list([CallSite])
        ;
            CSSummary = CallSite ^ ccsr_call_site_summary,
            MaybeTotal = CSSummary ^ perf_row_maybe_total,
            (
                MaybeTotal = yes(Total),
                PercallCost = Total ^ perf_row_callseqs_percall
            ;
                MaybeTotal = no,
                error("clique_call_site has 'no' for perf_row_maybe_total")
            ),
            RecursiveCalls = 0.0,
            NonRecursiveCost = PercallCost,
            RecursiveCallSites = set.init
        ),
        Info = callsite_cost_info(NonRecursiveCost, RecursiveCalls, 
            RecursiveCallSites, CSProbMap)
    ;
        % Not a callsite, there is no information to update since atmoic
        % non-call goals have a trivial cost. 
        Info = empty_callsite_cost_info
    ).

:- pred conj_get_callsite_cost_info(clique_ptr::in, 
    map(goal_path, clique_call_site_report)::in,
    list(goal_rep(coverage_info))::in, int::in,
    goal_path::in, callsite_cost_info::out) is det.

conj_get_callsite_cost_info(_, _, [], _, _, empty_callsite_cost_info).
conj_get_callsite_cost_info(CliquePtr, CallSites, [Conj | Conjs], ConjNum,
        GoalPath, Info) :-
    ConjGoalPath = goal_path_add_at_end(GoalPath, step_conj(ConjNum)),
    goal_get_callsite_cost_info(CliquePtr, CallSites, Conj, ConjGoalPath, 
        ConjInfo),
    
    Coverage = Conj ^ goal_annotation,
    ( get_coverage_before_and_after(Coverage, Calls, Exits) ->
        % ContProb is the probability that this conjunction will continue with
        % the execution of the next goal.
        ( Calls = 0 ->
            % If this was never called, then we will have a probability of 0 of
            % executing the next conjunct.
            ContProb = 0.0
        ;
            ContProb = float(Exits) / float(Calls)
        )
    ;
        error(this_file ++ "Expected complete coverage information")
    ),
    conj_get_callsite_cost_info(CliquePtr, CallSites, Conjs, ConjNum + 1, 
        GoalPath, ConjsInfo),
    Info = multiply_and_add(ConjsInfo, ContProb, ConjInfo).

:- pred disj_get_callsite_cost_info(clique_ptr::in, 
    map(goal_path, clique_call_site_report)::in, detism_rep::in,
    coverage_info::in, list(goal_rep(coverage_info))::in,
    goal_path::in, callsite_cost_info::out) is det.

disj_get_callsite_cost_info(CliquePtr, CallSites, _Detism, Coverage,
        Disjs, GoalPath, Info) :-
    % Some disjunctions may have redos, however these are rare and are not
    % modeled by this code.
    list.map_foldl(
        disj_get_callsite_cost_info2(CliquePtr, CallSites, GoalPath),
        Disjs, DisjInfos, 1, _),
    
    map_corresponding_foldl2(
        callsite_collect_branch_probabilities(Coverage),
        Disjs, DisjInfos, Probs, 0.0, _NonRecProb, 0.0, _RecProb),
    foldl_corresponding(
        (pred(NewInfo::in, BranchProb::in, Info0I::in, InfoI::out) is det :-
            % This is a special case of callsite_cost_merge_branches that is
            % used for disjunctions.  Since disjunctions don't behave like
            % switches or ITEs if a disjunct does not call recursive code it is
            % still included as part of the code that would execute during a
            % call that will recurse provided that some other disjuct recurses.
            InfoI = multiply_and_add(NewInfo, BranchProb, Info0I)
        ), DisjInfos, Probs, empty_callsite_cost_info, Info).

:- pred disj_get_callsite_cost_info2(clique_ptr::in, 
    map(goal_path, clique_call_site_report)::in, goal_path::in,
    goal_rep(coverage_info)::in, callsite_cost_info::out, int::in, int::out) 
    is det.

disj_get_callsite_cost_info2(CliquePtr, CallSites, GoalPath, Goal, Info,
        DisjNum, DisjNum+1) :-
    DisjGoalPath = goal_path_add_at_end(GoalPath, step_disj(DisjNum)),
    goal_get_callsite_cost_info(CliquePtr, CallSites, Goal, DisjGoalPath,
        Info).

:- pred switch_get_callsite_cost_info(clique_ptr::in, 
    map(goal_path, clique_call_site_report)::in, coverage_info::in,
    list(case_rep(coverage_info))::in, goal_path::in, callsite_cost_info::out)
    is det.

switch_get_callsite_cost_info(CliquePtr, CallSites, Coverage, Cases, GoalPath,
        Info) :-
    % Since switches are similar to disjunctions so some of this code is
    % similar or shared.
    list.map(case_get_goal, Cases, Goals),
    list.map_foldl(
        case_get_callsite_cost_info(CliquePtr, CallSites, GoalPath),
        Goals, GoalInfos, 1, _),
    map_corresponding_foldl2(
        callsite_collect_branch_probabilities(Coverage),
        Goals, GoalInfos, Probs, 0.0, NonRecProb, 0.0, RecProb),
    foldl_corresponding(callsite_cost_merge_branches(NonRecProb, RecProb),
        GoalInfos, Probs, empty_callsite_cost_info, Info).

:- pred case_get_callsite_cost_info(clique_ptr::in, 
    map(goal_path, clique_call_site_report)::in, goal_path::in,
    goal_rep(coverage_info)::in, callsite_cost_info::out, int::in, int::out) 
    is det.

case_get_callsite_cost_info(CliquePtr, CallSites, GoalPath, Goal, Info,
        CaseNum, CaseNum+1) :-
    CaseGoalPath = goal_path_add_at_end(GoalPath, step_switch(CaseNum, no)),
    goal_get_callsite_cost_info(CliquePtr, CallSites, Goal, CaseGoalPath,
        Info).

:- pred ite_get_callsite_cost_info(clique_ptr::in, 
    map(goal_path, clique_call_site_report)::in, 
    goal_rep(coverage_info)::in, goal_rep(coverage_info)::in,
    goal_rep(coverage_info)::in, goal_path::in, callsite_cost_info::out) is det.

ite_get_callsite_cost_info(CliquePtr, CallSites, Cond, Then, Else,
        GoalPath, Info) :-
    CondGoalPath = goal_path_add_at_end(GoalPath, step_ite_cond),
    ThenGoalPath = goal_path_add_at_end(GoalPath, step_ite_then),
    ElseGoalPath = goal_path_add_at_end(GoalPath, step_ite_else),
    goal_get_callsite_cost_info(CliquePtr, CallSites, Cond, CondGoalPath,
        CondInfo),
    goal_get_callsite_cost_info(CliquePtr, CallSites, Then, ThenGoalPath,
        ThenInfo),
    goal_get_callsite_cost_info(CliquePtr, CallSites, Else, ElseGoalPath,
        ElseInfo),
    
    % Find the probability of entering either branch and merge the
    % callsite_cost_info structures.
    CondCoverage = Cond ^ goal_annotation,
    ( get_coverage_before_and_after(CondCoverage, CondCalls, CondExits) ->
        ( CondCalls = 0 ->
            % XXX: I don't like these either since their sum is 0.0
            ThenProb = 0.0,
            ElseProb = 0.0
        ;
            ThenProb = float(CondExits) / float(CondCalls),
            ElseProb = 1.0 - ThenProb
        )
    ;
        error(this_file ++ "couldn't retrieve coverage information")
    ),
    add_probability_to_rec_non_rec_totals(ThenInfo, ThenProb, 
        0.0, NonRecProb0, 0.0, RecProb0),
    add_probability_to_rec_non_rec_totals(ElseInfo, ElseProb, 
        NonRecProb0, NonRecProb, RecProb0, RecProb),
    callsite_cost_merge_branches(NonRecProb, RecProb, ThenInfo, ThenProb, 
        empty_callsite_cost_info, BranchInfo0),
    callsite_cost_merge_branches(NonRecProb, RecProb, ElseInfo, ElseProb, 
        BranchInfo0, BranchInfo),
   
    % Add the info from the condition goal.
    Info = add_callsite_cost_info(CondInfo, BranchInfo).

:- pred callsite_collect_branch_probabilities(coverage_info::in, 
    goal_rep(coverage_info)::in, callsite_cost_info::in, float::out,
    float::in, float::out, float::in, float::out) is det.

callsite_collect_branch_probabilities(TotalCoverage, Goal, Info, Prob, 
        !NonRecProb, !RecProb) :-
    (
        get_coverage_before(TotalCoverage, TotalCalls),
        get_coverage_before(Goal ^ goal_annotation, Calls)
    ->
        % The probability of entering this branch given that the parent goal
        % was called.
        ( TotalCalls = 0 ->
            % I'm not sure I'm comfortable with this, since in this case the
            % probability of entering each branch will be 0.0, and the sum of
            % this will be 0.0 which is not correct.
            Prob = 0.0
        ;
            Prob = float(Calls) / float(TotalCalls)
        )
    ;
        error(this_file ++ "could not retrieve coverage information")
    ),
    add_probability_to_rec_non_rec_totals(Info, Prob, !NonRecProb, !RecProb).

:- pred add_probability_to_rec_non_rec_totals(callsite_cost_info::in, float::in,
    float::in, float::out, float::in, float::out) is det.

add_probability_to_rec_non_rec_totals(Info, Prob, !NonRecProb, !RecProb) :-
    ( empty(Info ^ csci_rec_cs) ->
        % This branch has no recursive calls in it (ie it forms a base-case),
        % therefore it doesn't contribute to probability that we enter this
        % branch since we're trying to calculate the probability of a goal
        % being executed given that we're executing a procedure that will
        % eventually recurse.  We track the probability of entering a
        % non-recursive branch so that this probability can be added to the
        % recursive cases below.
        !:NonRecProb = !.NonRecProb + Prob
    ;   
        !:RecProb = !.RecProb + Prob
    ).

:- pred callsite_cost_merge_branches(float::in, float::in,
    callsite_cost_info::in, float::in,
    callsite_cost_info::in, callsite_cost_info::out) is det.

callsite_cost_merge_branches(NonRecProb, RecProb, NewInfo, BranchProb, 
        !Info) :-
    ( empty(NewInfo ^ csci_rec_cs) ->
        % This branch is non-recursive, therefore we don't count it's
        % contribution to the execution time because we're calculating the
        % execution time for a non-recursive invocation of this procedure.
        true
    ;
        % Add the probability of a non-recursive branch to this branch weighted
        % by the probability that we execute this branch given that we execute a
        % recursive branch.
        !:Info = multiply_and_add(NewInfo, 
            BranchProb + (BranchProb / RecProb * NonRecProb), !.Info)
    ).


:- func multiply_and_add(callsite_cost_info, float, callsite_cost_info) =
    callsite_cost_info.

multiply_and_add(Cost, Scalar, CostAddend) = Result :-
    Cost = callsite_cost_info(NonRecCSCost0, RecCalls0, RecCSA, CSProbMap0), 
    CostAddend = callsite_cost_info(NonRecCSCostAddend, RecCallsAddend, RecCSB,
        CSProbMapAddend), 
    NonRecCSCost = (NonRecCSCost0 * Scalar) + NonRecCSCostAddend,
    RecCalls = (RecCalls0 * Scalar) + RecCallsAddend,
    % This set is simply 'added' multiplication doesn't make sense and merge is
    % exactly what we want here.  Sets are given in this order for efficiency,
    % see set.union/2
    RecCS = set.union(RecCSB, RecCSA),
    map.foldl(multiply_probability_merge(Scalar),
        CSProbMap0, CSProbMapAddend, CSProbMap),
    Result = callsite_cost_info(NonRecCSCost, RecCalls, RecCS, CSProbMap).

:- pred multiply_probability_merge(float::in, goal_path::in, float::in,
    map(goal_path, float)::in, map(goal_path, float)::out) is det.

multiply_probability_merge(M, Key, Value0, !Map) :-
    Value = Value0 * M,
    svmap.det_insert(Key, Value, !Map).

:- func add_callsite_cost_info(callsite_cost_info, callsite_cost_info) =
    callsite_cost_info.

add_callsite_cost_info(CSCIA, CSCIB) = 
    multiply_and_add(CSCIA, 1.0, CSCIB).

:- pred get_callsite_cost_info(clique_ptr::in, proc_cost_csq::in, 
    clique_call_site_report::in, float::in, float::out, float::in, float::out, 
    set(clique_call_site_report)::in, set(clique_call_site_report)::out,
    map(goal_path, float)::in, map(goal_path, float)::out) is det.

get_callsite_cost_info(ThisClique, ParentCost, CallSite, 
        !NonRecCSCost, !RecursiveCalls, !RecursiveCallSites, !CallSiteProbMap)
    :-
    CSSummary = CallSite ^ ccsr_call_site_summary,
    GoalPath = CSSummary ^ perf_row_subject ^ csdesc_goal_path,
    CSCalls = float(CSSummary ^ perf_row_calls),
    % Note that Prob represents the probability of this call occurring on any
    % invocation of the clique proc, not on the top-level invocation of the
    % clique proc which is what we take it to mean here.  This is why this
    % method is not used with the procedure representation is available.
    Prob = CSCalls / float(proc_cost_get_calls_total(ParentCost)),
    svmap.det_insert(GoalPath, Prob, !CallSiteProbMap),
    ( call_site_is_recursive(CallSite, ThisClique) ->
        !:RecursiveCalls = !.RecursiveCalls + Prob, 
        svset.insert(CallSite, !RecursiveCallSites)
    ;
        MaybeTotal = CSSummary ^ perf_row_maybe_total,
        (
            MaybeTotal = yes(Total),
            PercallCost = Total ^ perf_row_callseqs_percall
        ;
            MaybeTotal = no,
            error("clique_call_site has 'no' for perf_row_maybe_total")
        ),
        !:NonRecCSCost = !.NonRecCSCost + PercallCost
    ).

:- pred call_site_is_recursive(clique_call_site_report::in, clique_ptr::in) 
    is semidet.

call_site_is_recursive(CallSite, ThisClique) :-
    % Note that according to this any higher order call site that
    % is recursive in some cases and non-recursive in others is
    % considered to be recursive.  The cost of it's non-recursive
    % calls is not factored into the calculation of the cost of
    % recursive call sites.
    member(CalleePerf, CallSite ^ ccsr_callee_perfs),
    CalleePerf ^ perf_row_subject ^ cdesc_clique_ptr = ThisClique.

:- pred build_recursive_call_site_cost_map_call_site(float::in,
    map(goal_path, float)::in, clique_call_site_report::in, 
    map(goal_path, cs_cost_csq)::in, map(goal_path, cs_cost_csq)::out) is det.
    
build_recursive_call_site_cost_map_call_site(RecursiveCostPerCall,
        CallSiteProbabilityMap, CallSite, !Map) :-
    CSSummary = CallSite ^ ccsr_call_site_summary,
    GoalPath = CSSummary ^ perf_row_subject ^ csdesc_goal_path,
    
    map.lookup(CallSiteProbabilityMap, GoalPath, Calls),
    Cost = build_cs_cost_csq_percall(Calls, RecursiveCostPerCall),
    svmap.det_insert(GoalPath, Cost, !Map).

%----------------------------------------------------------------------------%
%
% Search for paralleliation opportunities within a procedure.
%

    % Find candidate parallel conjunctions within the given procedure.
    %
:- pred candidate_parallel_conjunctions_proc(
    candidate_parallel_conjunctions_opts::in, deep::in,
    clique_proc_report::in, map(goal_path, cs_cost_csq)::in,
    candidate_par_conjunctions::out,
    multi_map(goal_path_string, 
        candidate_par_conjunction(pard_goal_detail))::out,
    cord(message)::out) is det.

candidate_parallel_conjunctions_proc(Opts, Deep, CliqueProc,
        RecursiveCallSiteCostMap, Candidates, CandidatesByGoalPath,
        Messages) :-
    some [!Messages] (
        !:Messages = cord.empty,

        % Lookup the proc static to find the ProcLabel.
        PerfRowData = CliqueProc ^ cpr_proc_summary,
        ProcDesc = PerfRowData ^ perf_row_subject,
        proc_label_from_proc_desc(Deep, ProcDesc, ProcLabel),
        
        CallSites = CliqueProc ^ cpr_first_proc_dynamic ^ cpdr_call_sites,
        ( CliqueProc ^ cpr_other_proc_dynamics = [_ | _] ->
            append_message(proc(ProcLabel), 
                error_extra_proc_dynamics_in_clique_proc,
                !Messages)
        ;
            true
        ),
        list.foldl(add_call_site_report_to_map,
            CallSites, map.init, CallSitesMap),
        deep_get_progrep_det(Deep, ProgRep),
        ( ProcLabel = str_ordinary_proc_label(_, ModuleName, _, _, _, _)
        ; ProcLabel = str_special_proc_label(_, ModuleName, _, _, _, _)
        ),
        (
            ModuleName = "Mercury runtime"
        ->
            % Silently skip over any code from the runtime, we can't expect to
            % find it's procedure representation.
            Candidates = multi_map.init,
            CandidatesByGoalPath = map.init
        ;
            progrep_search_proc(ProgRep, ProcLabel, ProcRep) 
        ->
            ProcRep ^ pr_defn = ProcDefnRep,
            ProcDefnRep ^ pdr_goal = Goal0,
            ProcDefnRep ^ pdr_var_table = VarTable,
            Info = implicit_parallelism_info(Deep, ProgRep, Opts,
                CallSitesMap, RecursiveCallSiteCostMap, VarTable),
            goal_annotate_with_instmap(Goal0, Goal,
                initial_inst_map(ProcDefnRep), _FinalInstMap,
                SeenDuplicateInstantiation, _ConsumedVars, _BoundVars),
            goal_get_conjunctions_worth_parallelising(Goal, empty_goal_path,
                Info, ProcLabel, Candidates0, MessagesA),
            !:Messages = !.Messages ++ MessagesA,
            (
                SeenDuplicateInstantiation =
                    have_not_seen_duplicate_instantiation,
                list.foldl2(build_candidate_par_conjunction_maps(ProcLabel),
                    Candidates0, multi_map.init, Candidates, 
                    map.init, CandidatesByGoalPath)
            ;
                SeenDuplicateInstantiation = seen_duplicate_instantiation,
                Candidates = multi_map.init,
                CandidatesByGoalPath = map.init,
                append_message(proc(ProcLabel), 
                    notice_duplicate_instantiation(length(Candidates0)),
                    !Messages)
            )
        ;
            % Builtin procedures cannot be found in the program representation,
            % and cannot be parallelised either.
            Candidates = multi_map.init,
            CandidatesByGoalPath = map.init,
            append_message(proc(ProcLabel), warning_cannot_lookup_proc_defn,
                !Messages)
        ),
        Messages = !.Messages
    ).

:- pred build_candidate_par_conjunction_maps(string_proc_label::in,
    candidate_par_conjunction(pard_goal_detail)::in, 
    candidate_par_conjunctions::in, candidate_par_conjunctions::out,
    multi_map(goal_path_string, 
        candidate_par_conjunction(pard_goal_detail))::in,
    multi_map(goal_path_string, 
        candidate_par_conjunction(pard_goal_detail))::out)
    is det.

build_candidate_par_conjunction_maps(ProcLabel, Candidate, !Map, !GPMap) :- 
    multi_map.set(!.Map, ProcLabel, Candidate, !:Map),
    GoalPath = Candidate ^ cpc_goal_path,
    multi_map.set(!.GPMap, GoalPath, Candidate, !:GPMap).
    
:- pred goal_get_conjunctions_worth_parallelising(goal_rep(inst_map_info)::in, 
    goal_path::in, implicit_parallelism_info::in, string_proc_label::in,
    list(candidate_par_conjunction(pard_goal_detail))::out,
    cord(message)::out) is det.

goal_get_conjunctions_worth_parallelising(Goal, GoalPath, Info, ProcLabel, 
        Candidates, Messages) :-
    Goal = goal_rep(GoalExpr, _, _),
    (
        (
            GoalExpr = conj_rep(Conjuncts),
            conj_get_conjunctions_worth_parallelising(Conjuncts, GoalPath, 1,
                Info, ProcLabel, CandidatesA, MessagesA),
            conj_build_candidate_conjunctions(Conjuncts, GoalPath, 
                Info, ProcLabel, MessagesB, CandidatesB),
            Messages = MessagesA ++ MessagesB,
            Candidates = CandidatesA ++ CandidatesB
        ;
            GoalExpr = disj_rep(Disjuncts),
            disj_get_conjunctions_worth_parallelising(Disjuncts, GoalPath, 1,
                Info, ProcLabel, Candidates, Messages)
        ;
            GoalExpr = switch_rep(_, _, Cases),
            switch_case_get_conjunctions_worth_parallelising(Cases, GoalPath, 1,
                Info, ProcLabel, Candidates, Messages)
        ;
            GoalExpr = ite_rep(Cond, Then, Else),
            ite_get_conjunctions_worth_parallelising(Cond, Then, Else,
                GoalPath, Info, ProcLabel, Candidates, Messages)
        ;
            GoalExpr = scope_rep(SubGoal, MaybeCut),
            ScopeGoalPath = 
                goal_path_add_at_end(GoalPath, step_scope(MaybeCut)),
            goal_get_conjunctions_worth_parallelising(SubGoal, ScopeGoalPath,
                Info, ProcLabel, Candidates, Messages) 
        ;
            GoalExpr = negation_rep(SubGoal),
            NegGoalPath = goal_path_add_at_end(GoalPath, step_neg),
            goal_get_conjunctions_worth_parallelising(SubGoal, NegGoalPath,
                Info, ProcLabel, Candidates, Messages) 
        )
    ;
        GoalExpr = atomic_goal_rep(_, _, _, _),
        Messages = cord.empty,
        Candidates = []
    ).

:- pred conj_get_conjunctions_worth_parallelising(
    list(goal_rep(inst_map_info))::in, goal_path::in, int::in,
    implicit_parallelism_info::in, string_proc_label::in,
    list(candidate_par_conjunction(pard_goal_detail))::out,
    cord(message)::out) is det.

conj_get_conjunctions_worth_parallelising([], _, _, _, _, [], cord.empty).
conj_get_conjunctions_worth_parallelising([Conj | Conjs], GoalPath,
        ConjunctNum, Info, ProcLabel, Candidates, Messages) :-
    ConjGoalPath = goal_path_add_at_end(GoalPath, step_conj(ConjunctNum)),
    goal_get_conjunctions_worth_parallelising(Conj, ConjGoalPath, Info,
        ProcLabel, CandidatesHead, MessagesHead), 
    
    conj_get_conjunctions_worth_parallelising(Conjs, GoalPath, ConjunctNum+1,
        Info, ProcLabel, CandidatesTail, MessagesTail),

    Candidates = CandidatesHead ++ CandidatesTail,
    Messages = MessagesHead ++ MessagesTail.

:- pred disj_get_conjunctions_worth_parallelising(
    list(goal_rep(inst_map_info))::in, goal_path::in, int::in,
    implicit_parallelism_info::in, string_proc_label::in,
    list(candidate_par_conjunction(pard_goal_detail))::out, cord(message)::out) 
    is det.

disj_get_conjunctions_worth_parallelising([], _, _, _, _, [], cord.empty).
disj_get_conjunctions_worth_parallelising([Disj | Disjs], GoalPath, DisjNum,
        Info, ProcLabel, Candidates, Messages) :-
    DisjGoalPath = goal_path_add_at_end(GoalPath, step_disj(DisjNum)),
    goal_get_conjunctions_worth_parallelising(Disj, DisjGoalPath, Info,
        ProcLabel, HeadCandidates, HeadMessages),
    disj_get_conjunctions_worth_parallelising(Disjs, GoalPath, DisjNum + 1,
        Info, ProcLabel, TailCandidates, TailMessages),
    Candidates = HeadCandidates ++ TailCandidates,
    Messages = HeadMessages ++ TailMessages.

:- pred switch_case_get_conjunctions_worth_parallelising(
    list(case_rep(inst_map_info))::in, goal_path::in, int::in,
    implicit_parallelism_info::in, string_proc_label::in,
    list(candidate_par_conjunction(pard_goal_detail))::out, cord(message)::out) is det.

switch_case_get_conjunctions_worth_parallelising([], _, _, _, _, [],
        cord.empty).
switch_case_get_conjunctions_worth_parallelising([Case | Cases], GoalPath,
        CaseNum, Info, ProcLabel, Candidates, Messages) :-
    Case = case_rep(_, _, Goal),
    CaseGoalPath = goal_path_add_at_end(GoalPath, step_switch(CaseNum, no)),
    goal_get_conjunctions_worth_parallelising(Goal, CaseGoalPath, Info,
        ProcLabel, HeadCandidates, HeadMessages),
    switch_case_get_conjunctions_worth_parallelising(Cases, GoalPath, 
        CaseNum + 1, Info, ProcLabel, TailCandidates,
        TailMessages),
    Candidates = HeadCandidates ++ TailCandidates,
    Messages = HeadMessages ++ TailMessages.

:- pred ite_get_conjunctions_worth_parallelising(goal_rep(inst_map_info)::in,
    goal_rep(inst_map_info)::in, goal_rep(inst_map_info)::in, goal_path::in,
    implicit_parallelism_info::in, string_proc_label::in,
    list(candidate_par_conjunction(pard_goal_detail))::out, cord(message)::out) is det.

ite_get_conjunctions_worth_parallelising(Cond, Then, Else, GoalPath, Info,
        ProcLabel, Candidates, Messages) :-
    CondGoalPath = goal_path_add_at_end(GoalPath, step_ite_cond),
    ThenGoalPath = goal_path_add_at_end(GoalPath, step_ite_then),
    ElseGoalPath = goal_path_add_at_end(GoalPath, step_ite_else),
    goal_get_conjunctions_worth_parallelising(Cond, CondGoalPath, Info,
        ProcLabel, CondCandidates, CondMessages),
    goal_get_conjunctions_worth_parallelising(Then, ThenGoalPath, Info, 
        ProcLabel, ThenCandidates, ThenMessages),
    goal_get_conjunctions_worth_parallelising(Else, ElseGoalPath, Info, 
        ProcLabel, ElseCandidates, ElseMessages),
    Candidates = CondCandidates ++ ThenCandidates ++ ElseCandidates,
    Messages = CondMessages ++ ThenMessages ++ ElseMessages.

    % At the end of every conjunction we call this predicate to check the list
    % of calls we've found and make any parallelisation decisions.
    %
:- pred conj_build_candidate_conjunctions(list(goal_rep(inst_map_info))::in, 
    goal_path::in, implicit_parallelism_info::in, string_proc_label::in,
    cord(message)::out, list(candidate_par_conjunction(pard_goal_detail))::out)
    is det.

conj_build_candidate_conjunctions(Conjs, GoalPath, Info, ProcLabel, Messages,
        Candidates) :-
    some [!Messages] 
    (
        !:Messages = cord.empty,
        Location = goal(ProcLabel, GoalPath),

        conj_to_pard_goal_list(Conjs, GoalPath, 1, Info, [], PardGoals, 0,
            NumCostlyCalls),
        ( NumCostlyCalls > 1 -> 
            append_message(Location,
                info_found_conjs_above_callsite_threshold(NumCostlyCalls),
                !Messages), 
            build_dependency_maps(PardGoals, DependencyMaps),
            % We don't parallelise across non-atomic goals, so split a list of
            % pard goals into partitions where non-atomic goals seperate the
            % partitions.
            partition_pard_goals(Location, PardGoals, [], _, 
                1, _NumPartitions, 0, _, [], PartitionedGoals, !Messages),
            map(pardgoals_build_candidate_conjunction(Info, 
                    DependencyMaps, Location, GoalPath), 
                PartitionedGoals, MaybeCandidates),
            filter_map(maybe_is_yes, MaybeCandidates, Candidates),
            append_message(Location,
                info_found_n_conjunctions_with_positive_speedup(
                    length(Candidates)), !Messages)
        ;
            Candidates = []
        ),
        Messages = !.Messages
    ).

:- pred partition_pard_goals(program_location::in, 
    list(pard_goal_detail)::in,
    list(pard_goal_detail)::in, list(pard_goal_detail)::out,
    int::in, int::out, int::in, int::out,
    list(pard_goals_partition)::in, list(pard_goals_partition)::out,
    cord(message)::in, cord(message)::out) is det.

partition_pard_goals(Location, [], !Partition, !PartitionNum, !NumCostlyCalls,
        !Partitions, !Messages) :-
    ( !.NumCostlyCalls > 1 ->
        Partition = 
            pard_goals_partition(reverse(!.Partition), !.PartitionNum),
        !:Partitions = [ Partition | !.Partitions ]
    ;
        true     
    ),
    ( !.PartitionNum \= 1 ->
        append_message(Location,
            info_split_conjunction_into_partitions(!.PartitionNum), !Messages)
    ;
        true
    ),
    reverse(!Partitions).
partition_pard_goals(Location, [ PG | PGs ], !Partition, !PartitionNum,
        !NumCostlyCalls, !Partitions, !Messages) :-
    PGType = PG ^ pgd_pg_type,
    (
        (
            PGType = pgt_call(_, _, _, _, _, _),
            !:NumCostlyCalls = !.NumCostlyCalls + 1
        ;
            PGType = pgt_cheap_call(_, _, _, _, _)
        ;
            PGType = pgt_other_atomic_goal
        ),
        !:Partition = [ PG | !.Partition ]
    ;
        PGType = pgt_non_atomic_goal,
        ( !.NumCostlyCalls > 1 ->
            Partition = 
                pard_goals_partition(reverse(!.Partition), !.PartitionNum),
            !:Partitions = [ Partition | !.Partitions ]
        ;
            append_message(Location,
                notice_partition_does_not_have_costly_calls(!.PartitionNum,
                    !.NumCostlyCalls), !Messages)
        ),
        !:PartitionNum = !.PartitionNum + 1,
        !:NumCostlyCalls = 0,
        !:Partition = [] 
    ),
    partition_pard_goals(Location, PGs, !Partition, !PartitionNum,
        !NumCostlyCalls, !Partitions, !Messages).

:- pred pardgoals_build_candidate_conjunction(implicit_parallelism_info::in,
    dependency_maps::in, program_location::in, goal_path::in,
    pard_goals_partition::in,
    maybe(candidate_par_conjunction(pard_goal_detail))::out) is det.

pardgoals_build_candidate_conjunction(Info, DependencyMaps, Location, GoalPath,
        GoalsPartition, MaybeCandidate) :-
    % Setting up the first parallel conjunct is a different algorithm to the
    % latter ones, at this point we have the option of moving goals from before
    % the first costly call to either before or during the parallel
    % conjunction.  Executing them during the parallel conjunction can be more
    % efficient.  However if goals within other parallel conjuncts depend on
    % them and don't depend upon the first costly call then this would make the
    % conjunction dependant when it could be independent.
    pard_goals_partition(GoalsList, PartNum) = GoalsPartition,
    Goals = cord.from_list(GoalsList),
    find_best_parallelisation(Info, Location, PartNum, DependencyMaps,
        Goals, Parallelisation),
    (
        Parallelisation = bp_no_best_parallelisation,
        MaybeCandidate = no
    ;
        Parallelisation = bp_parallel_execution(GoalsBeforeCord, ParConjsCord,
            GoalsAfterCord, IsDependent, Metrics),
        Speedup = parallel_exec_metrics_get_speedup(Metrics),
        GoalsBefore = list(GoalsBeforeCord),
        GoalsAfter = list(GoalsAfterCord),
        ParConjs = map((func(CordI) = seq_conj(list(CordI))),
            list(ParConjsCord)),
        Candidate = candidate_par_conjunction(goal_path_to_string(GoalPath),
            PartNum, IsDependent, GoalsBefore, ParConjs, GoalsAfter, Metrics),
        ( Speedup > 1.0 ->
            MaybeCandidate = yes(Candidate)
        ;
            MaybeCandidate = no,
            trace [compile_time(flag("debug_parallel_conjunction_speedup")), 
                    io(!IO)] 
            (
                (
                    ( Location = proc(ProcLabel)
                    ; Location = goal(ProcLabel, _)
                    )
                ;
                    Location = clique(_),
                    error("Location is a clique when it should be a proc " ++
                        "or goal")
                ),

                convert_candidate_par_conjunction(pard_goal_detail_to_pard_goal,
                    Candidate, FBCandidate),
                create_candidate_parallel_conj_report(ProcLabel - FBCandidate, 
                    Report),
                io.write_string("Not parallelising conjunction, " ++ 
                    "insufficient speedup:\n", !IO),
                io.write_string(append_list(cord.list(Report)), !IO)
            )
        )
    ).

:- type find_costly_call_result
    --->    costly_call_found(
                fccrfc_goals_before     :: cord(pard_goal_detail),
                fccrfc_call             :: pard_goal_detail,
                fccrfc_gaols_after      :: cord(pard_goal_detail)
            )
    ;       costly_call_not_found.

:- inst find_costly_call_result
    --->    costly_call_found(ground, pard_goal_detail(pgt_call), ground)
    ;       costly_call_not_found.

:- pred find_costly_call(cord(pard_goal_detail)::in, cord(pard_goal_detail)::in,
    find_costly_call_result::out(find_costly_call_result)) is det.

find_costly_call(Goals, GoalsBefore0, Result) :-
    ( head_tail(Goals, Goal, GoalsTail) ->
        GoalType = Goal ^ pgd_pg_type,
        ( 
            GoalType = pgt_call(_, _, _, _, _, _),
            Result = costly_call_found(GoalsBefore0, Goal, GoalsTail)
        ;
            ( GoalType = pgt_cheap_call(_, _, _, _, _)
            ; GoalType = pgt_other_atomic_goal
            ),
            GoalsBefore = snoc(GoalsBefore0, Goal),
            find_costly_call(GoalsTail, GoalsBefore, Result)
        ;
            GoalType = pgt_non_atomic_goal,
            error(this_file ++ "Found non-atomic goal")
        )
    ;
        Result = costly_call_not_found
    ).

:- type best_parallelisation
    --->    bp_parallel_execution(
                bp_goals_before         :: cord(pard_goal_detail),
                bp_par_conjs            :: cord(cord(pard_goal_detail)),
                bp_goals_after          :: cord(pard_goal_detail),
                bp_is_dependent         :: conjuncts_are_dependant,
                bp_par_exec_metrics     :: parallel_exec_metrics
            )
                % Rather than using the sequential execution as an initial 
                % value for the branch and bound search we use this value.
                % This allows us to report the best parallelisation even when
                % sequential execution is optimal.
    ;       bp_no_best_parallelisation.

:- type incomplete_parallelisation
    --->    incomplete_parallelisation(
                ip_goals_before         :: cord(pard_goal_detail),
                ip_par_conjs            :: cord(cord(pard_goal_detail)),
                ip_par_exec_overlap     :: parallel_execution_overlap,
                ip_par_exec_metrics     :: parallel_exec_metrics_incomplete,
                ip_is_outermost_conj    :: is_outermost_conjunct,
                ip_can_make_cheap_conj  :: can_make_cheap_conj
            ).

:- type can_make_cheap_conj
    --->    can_make_cheap_conj
    ;       cannot_make_cheap_conj.

:- pred find_best_parallelisation(implicit_parallelism_info::in, 
    program_location::in, int::in, dependency_maps::in, 
    cord(pard_goal_detail)::in, best_parallelisation::out) is det.

find_best_parallelisation(Info, Location, PartNum, DependencyMaps, Goals,
        FinalBestParallelisation) :-
    % Use a failure driven loop to implement a branch and bound solver.
    promise_pure (
        trace [compile_time(flag("debug_branch_and_bound")), io(!IO)] (
            io.format("D: Branch and bound loop starting:\n%s\n",
                [s(LocationString)], !IO),
            location_to_string(1, Location, LocationCord),
            string.append_list(list(LocationCord), LocationString)
        ),
        impure new_mutvar(bp_no_best_parallelisation,
            BestParallelisationMutvar),
        (
            impure find_best_parallelisation_nondet(Info, Location, PartNum, 
                DependencyMaps, Goals, BestParallelisationMutvar, 
                BestParallelisation),
            % this is the best parallelisation so far.
            impure set_mutvar(BestParallelisationMutvar, BestParallelisation),
            trace [compile_time(flag("debug_branch_and_bound")), io(!IO)] (
                (
                    BestParallelisation = bp_no_best_parallelisation
                ;
                    BestParallelisation = bp_parallel_execution(_, _, _, _,
                        Metrics),
                    io.format("D: Branch and bound: Solution par time: %f\n",
                        [f(ParTime)], !IO),
                    ParTime = parallel_exec_metrics_get_par_time(Metrics)
                )
            ),
            semidet_fail
        ->
            error("Failure driven loop must fail")
        ;
            impure get_mutvar(BestParallelisationMutvar, 
                FinalBestParallelisation),
            trace [compile_time(flag("debug_branch_and_bound")), io(!IO)] (
                io.write_string("D: Branch and bound loop finished\n", !IO)
            )
        )
    ).

:- impure pred find_best_parallelisation_nondet(implicit_parallelism_info::in,
    program_location::in, int::in, dependency_maps::in, 
    cord(pard_goal_detail)::in, 
    mutvar(best_parallelisation)::in, best_parallelisation::out) is nondet.

find_best_parallelisation_nondet(Info, Location, PartNum, DependencyMaps, Goals0, 
        BestParallelisationMutvar, BestParallelisation) :-
    find_costly_call(Goals0, cord.empty, FindCostlyCallResult),
    (
        FindCostlyCallResult = costly_call_found(GoalsBeforeFirstCall, 
            FirstCall, GoalsAfterFirstCall)
    ;
        FindCostlyCallResult = costly_call_not_found,
        location_to_string(1, Location, LocationString),
        Error = singleton(this_file) ++ singleton("\n") ++
            LocationString ++
            nl_indent(1) ++ singleton(format("partition %d", [i(PartNum)])) ++
            nl_indent(1) ++ singleton("Couldn't find first call\n"),
        error(append_list(cord.list(Error)))
    ),
    FirstCallCallSite = FirstCall ^ pgd_pg_type ^ pgtc_call_site,
    NumCalls = FirstCallCallSite ^ ccsr_call_site_summary ^
        perf_row_calls,
   
    % Generate goals before conjunction.
    cord_split(GoalsBeforeFirstCall, GoalsBeforeConj, 
        GoalsBeforeCallInFirstConj),
    Goals1 = GoalsBeforeCallInFirstConj ++ singleton(FirstCall) ++ 
        GoalsAfterFirstCall,

    foldl_pred(pardgoal_calc_cost, GoalsBeforeConj, 0.0, CostBeforeConj),
    Metrics0 = init_empty_parallel_exec_metrics(CostBeforeConj),
    Parallelisation0 = incomplete_parallelisation(GoalsBeforeConj, 
        empty, peo_empty_conjunct, Metrics0, is_outermost_conjunct,
        cannot_make_cheap_conj),
    impure find_best_parallelisation_2(Info, DependencyMaps, 
        BestParallelisationMutvar, 0, map.init, Goals1, 
        GoalsAfterConj, Parallelisation0, Parallelisation1),

    % Finalise the metrics and determine if this is the best solution so far.
    foldl_pred(pardgoal_calc_cost, GoalsAfterConj, 0.0, CostAfterConj),
    Metrics1 = Parallelisation1 ^ ip_par_exec_metrics,
    SparkDelay = Info ^ ipi_opts ^ cpc_sparking_delay,
    SparkCost = Info ^ ipi_opts ^ cpc_sparking_cost,
    Metrics = finalise_parallel_exec_metrics(Metrics1, NumCalls, CostAfterConj, 
        float(SparkDelay + SparkCost)),

    impure get_mutvar(BestParallelisationMutvar, CurrentBestParallelisation),
    cbmr_metrics_is_better = compare_best_parallelisation_and_metrics(
        CurrentBestParallelisation, Metrics),

    Conjuncts = Parallelisation1 ^ ip_par_conjs,
    Overlap = Parallelisation1 ^ ip_par_exec_overlap,
    par_conj_overlap_is_dependant(Overlap, IsDependent),
    BestParallelisation = bp_parallel_execution(GoalsBeforeConj, Conjuncts,
        GoalsAfterConj, IsDependent, Metrics).

:- impure pred find_best_parallelisation_2(implicit_parallelism_info::in,
    dependency_maps::in, mutvar(best_parallelisation)::in, 
    int::in, map(var_rep, float)::in, 
    cord(pard_goal_detail)::in, cord(pard_goal_detail)::out, 
    incomplete_parallelisation::in, incomplete_parallelisation::out) is nondet. 

find_best_parallelisation_2(Info, DependencyMaps, BestParallelisationMutvar, 
        NumConjuncts0, ProductionsMap0, !Goals, !Parallelisation) :-
    IsOutermostConjunct = !.Parallelisation ^ ip_is_outermost_conj,
    find_costly_call(!.Goals, cord.empty, FindCostlyCallResult),
    (
        FindCostlyCallResult = 
            costly_call_found(GoalsBefore0, Call, GoalsAfter0),
        
        (
            can_make_cheap_conj = !.Parallelisation ^ ip_can_make_cheap_conj, 
            find_costly_call(GoalsAfter0, cord.empty, 
                costly_call_found(_, _, _)),
            cord_split(GoalsBefore0, Conj, GoalsBefore),
            !:Goals = snoc(GoalsBefore, Call) ++ GoalsAfter0,
            !Parallelisation ^ ip_can_make_cheap_conj := cannot_make_cheap_conj
        ;
            % Determine how many goals to include after the call in this
            % parallel conjunct.
            cord_split(GoalsAfter0, GoalsAfter, !:Goals),
            % Don't include two costly calls in the same parallel conjunct.
            find_costly_call(GoalsAfter, cord.empty, costly_call_not_found),
        
            % Build the new conjunct and test to see if this is no worse than
            % our best parallelisation.
            Conj = snoc(GoalsBefore0, Call) ++ GoalsAfter,

            % If we've found the last costly call then there are no more
            % conjuncts to make and therefore we cannot make a cheap conjunct,
            % otherwise we can make a cheap conjunct.
            find_costly_call(!.Goals, cord.empty, Result2),
            (
                Result2 = costly_call_not_found,
                !Parallelisation ^ ip_can_make_cheap_conj :=
                    cannot_make_cheap_conj
            ;
                Result2 = costly_call_found(_, _, _),
                !Parallelisation ^ ip_can_make_cheap_conj := can_make_cheap_conj
            )
        ),
        not is_empty(Conj),
        Conjs0 = !.Parallelisation ^ ip_par_conjs,
        Conjs = snoc(Conjs0, Conj),
        
        Metrics0 = !.Parallelisation ^ ip_par_exec_metrics,
        Overlap0 = !.Parallelisation ^ ip_par_exec_overlap,
        calculate_parallel_cost_step(Info, IsOutermostConjunct, NumConjuncts0,
            Conj, ProductionsMap0, ProductionsMap, Metrics0, Metrics, 
            Overlap0, Overlap),
        (
            Overlap = peo_empty_conjunct,
            DepVars = set.init
        ;
            Overlap = peo_conjunction(_, _, DepVars)
        ),
        ParalleliseDepConjs = Info ^ ipi_opts ^ cpc_parallelise_dep_conjs,
        (
            ParalleliseDepConjs = do_not_parallelise_dep_conjs
        =>
            set.empty(DepVars)
        ),
        SparkCost = Info ^ ipi_opts ^ cpc_sparking_cost,
        SparkDelay = Info ^ ipi_opts ^ cpc_sparking_delay,
        MetricsComplete = finalise_parallel_exec_metrics(Metrics, 1, 0.0, 
            float(SparkDelay + SparkCost)),
        impure get_mutvar(BestParallelisationMutvar, 
            CurrentBestParallelisation),
        cbmr_metrics_is_better = compare_best_parallelisation_and_metrics(
            CurrentBestParallelisation, MetricsComplete), 

        NumConjuncts = NumConjuncts0 + 1,
        !Parallelisation ^ ip_par_exec_overlap := Overlap,
        !Parallelisation ^ ip_par_exec_metrics := Metrics,
        !Parallelisation ^ ip_par_conjs := Conjs,
        !Parallelisation ^ ip_is_outermost_conj := is_not_outermost_conjunct,

        impure find_best_parallelisation_2(Info, DependencyMaps, 
            BestParallelisationMutvar, 
            NumConjuncts, ProductionsMap, !Goals, !Parallelisation)
    ;
        FindCostlyCallResult = costly_call_not_found
    ).

:- type compare_best_and_metrics_result
    --->    cbmr_metrics_is_better
    ;       cbmr_metrics_is_not_better.

    % Compare the best parallelisation with the current parallelisation.
    %
:- func compare_best_parallelisation_and_metrics(best_parallelisation,
        parallel_exec_metrics) = compare_best_and_metrics_result.

compare_best_parallelisation_and_metrics(BestParallelisation, Metrics) = 
        Result :-
    (
        BestParallelisation = bp_no_best_parallelisation,
        Result = cbmr_metrics_is_better
    ;
        BestParallelisation = bp_parallel_execution(_, _, _, _, BestMetrics),
        BestParTime = parallel_exec_metrics_get_par_time(BestMetrics),
        ParTime = parallel_exec_metrics_get_par_time(Metrics),
        % TODO: Add other comparisons for tie breaking or a better optimisation
        % formula.
        ( BestParTime > ParTime ->
            Result = cbmr_metrics_is_better
        ;
            Result = cbmr_metrics_is_not_better
        )
    ).

    % This datastructure represents the execution of dependant conjuncts, it
    % tracks which variabes are produced and consumed.
    %
    % TODO: Implement a pretty printer for this data.
    %
:- type parallel_execution_overlap
    --->    peo_empty_conjunct
    ;       peo_conjunction(
                poec_left_conjunct      :: parallel_execution_overlap,
                poec_right_conjunct     :: dependant_conjunct_execution,
                poec_dependant_vars     :: set(var_rep)
                    % The variables produced by the left conjunct and consumed
                    % by the right conjunct.
            ).

:- type dependant_conjunct_execution
    --->    dependant_conjunct_execution(
                dce_execution           :: assoc_list(float, float),
                    % Pairs of start and stop times of the execution.  Assume
                    % that the list is not sorted.

                dce_productions         :: map(var_rep, float),
                    % The variable productions.  This may be a superset of the
                    % dependant variables.

                dce_consumptions        :: map(var_rep, float)
                    % The variable consumptions.  This will contain only
                    % references for those variables that will become futures.
            ).

:- type is_outermost_conjunct
    --->    is_outermost_conjunct
    ;       is_not_outermost_conjunct.

    % calculate_parallel_cost(Info, Conjunctions, IsOutermostConjunct,
    %   ParallelExecMetrics, ParallelExecOverlap, ProductionsMap, NumConjuncts).
    %
    % Analyse the parallel conjuncts and determine their likely performance.
    % This code performs one step of the computation the steps are linked
    % together by find_best_parallelisation.
    %
    % This is the new parallel execution overlap algorithm, it is general and
    % therefore we also use is for independent conjunctions.
    %
    % + CallerVars is the set of vars for which our caller wants us to build a
    %   productions map for.
    %
    % + ParallelExecOpverlap: A representation of how the parallel conjuncts'
    %   executions overlap.
    %
    % + ProductionsMap: A productions map that covers the production of
    %   CallerVars.
    %
:- pred calculate_parallel_cost_step(implicit_parallelism_info::in,
    is_outermost_conjunct::in, int::in, cord(pard_goal_detail)::in, 
    map(var_rep, float)::in, map(var_rep, float)::out,
    parallel_exec_metrics_incomplete::in, parallel_exec_metrics_incomplete::out,
    parallel_execution_overlap::in, parallel_execution_overlap::out) is det.

calculate_parallel_cost_step(Info, IsOutermostConjunct, NumConjuncts, Conj,
        !ProductionsMap, !Metrics, !Overlap) :-
    Goals = list(Conj),
    foldl(pardgoal_calc_cost, Goals, 0.0, CostB),
    foldl(pardgoal_consumed_vars_accum, Goals, set.init,
        RightConsumedVars),
    ProducedVars = 
        set.from_sorted_list(map.sorted_keys(!.ProductionsMap)),
    Vars = set.intersect(ProducedVars, RightConsumedVars),

    % This conjunct will actually start after it has been sparked by
    % the prevous conjunct.  Which in turn may have been sparked by an
    % earlier conjunct.
    SparkDelay = Info ^ ipi_opts ^ cpc_sparking_delay, 
    StartTime0 = (NumConjuncts * SparkDelay),

    % If there are conjuncts after this conjunct we will have the
    % additional cost of sparking them.
    (
        IsOutermostConjunct = is_not_outermost_conjunct,
        SparkCost = Info ^ ipi_opts ^ cpc_sparking_cost,
        StartTime = float(StartTime0 + SparkCost)
    ;
        IsOutermostConjunct = is_outermost_conjunct,
        StartTime = float(StartTime0)
    ),

    % Get the list of variables consumed by this conjunct that will be
    % turned into futures.
    foldl3(get_consumptions_list, Goals, Vars, _, 0.0, _, 
        [], ConsumptionsList0),
    reverse(ConsumptionsList0, ConsumptionsList),

    % Determine how the parallel conjuncts overlap.
    foldl5(calculate_dependant_parallel_cost_2(Info, !.ProductionsMap), 
        ConsumptionsList, 0.0, LastSeqConsumeTime, 
        StartTime, LastParConsumeTime, StartTime, LastResumeTime, 
        [], RevExecution0, map.init, ConsumptionsMap),
    RevExecution = [ (LastResumeTime - CostBPar) | RevExecution0 ],
    reverse(RevExecution, Execution),

    CostBPar = LastParConsumeTime + (CostB - LastSeqConsumeTime),
    !:Metrics = 
        init_parallel_exec_metrics_incomplete(!.Metrics, CostB, CostBPar),
    
    % Build the productions map for our parent.  This map contains all
    % the variables produced by this code, not just that are used for
    % dependant parallelisation.
    foldl3(get_productions_map, Goals, StartTime, _, Execution, _,
        !ProductionsMap),

    DepConjExec = dependant_conjunct_execution(Execution,
        !.ProductionsMap, ConsumptionsMap),
    !:Overlap = peo_conjunction(!.Overlap, DepConjExec, Vars).

    % The main loop of the parallel overlap analysis.
    %
:- pred calculate_dependant_parallel_cost_2(implicit_parallelism_info::in, 
    map(var_rep, float)::in, pair(var_rep, float)::in, float::in, float::out,
    float::in, float::out, float::in, float::out,
    assoc_list(float, float)::in, assoc_list(float, float)::out, 
    map(var_rep, float)::in, map(var_rep, float)::out) is det.

calculate_dependant_parallel_cost_2(Info, ProductionsMap, Var - SeqConsTime,
        !PrevSeqConsumeTime, !PrevParConsumeTime, !ResumeTime,
        !RevExecution, !ConsumptionsMap) :-
    FutureSyncTime = float(Info ^ ipi_opts ^ cpc_locking_cost),
    map.lookup(ProductionsMap, Var, ProdTime),

    % Consider (P & Q):
    %
    % Q cannot consume the variable until P produces it.  Also Q cannot consume
    % the variable until it is ready for it.  These are the two parameters to
    % max/2.
    %
    % The second parameter can be explained further, Q may have waited on a
    % future previously, if so !.PrevParConsumeTime is when it finished
    % waiting, and SeqConsTime - !.PrevSeqConsumeTime is how long Q will take
    % between the two waits.
    %
    ParConsTimeBlocked = ProdTime + FutureSyncTime,
    ParConsTimeNotBlocked = !.PrevParConsumeTime + 
        (SeqConsTime - !.PrevSeqConsumeTime),
    ParConsTime = max(ParConsTimeBlocked, ParConsTimeNotBlocked),
        
    ( 
        % True if Q had to suspend waiting for P,  Not that we don't include
        % FutureSyncTime here.  This is true if Q has to block at all even if
        % it can be made runable before the context switch is complete.
        ProdTime > ParConsTimeNotBlocked 
    ->
        !:RevExecution = 
            [ (!.ResumeTime - ParConsTimeNotBlocked) | !.RevExecution ],
        !:ResumeTime = ParConsTime
    ;
        true
    ),

    !:PrevSeqConsumeTime = SeqConsTime,
    !:PrevParConsumeTime = ParConsTime,

    svmap.det_insert(Var, ParConsTime, !ConsumptionsMap).

:- pred par_conj_overlap_is_dependant(parallel_execution_overlap::in, 
    conjuncts_are_dependant::out) is det.

par_conj_overlap_is_dependant(peo_empty_conjunct, conjuncts_are_independent).
par_conj_overlap_is_dependant(peo_conjunction(Left, _, VarSet), IsDependent) :-
    ( set.empty(VarSet) ->
        par_conj_overlap_is_dependant(Left, IsDependent)
    ;
        IsDependent = conjuncts_are_dependant
    ).

:- pred pg_get_conj_num(pard_goal_detail::in, int::out) is det.

pg_get_conj_num(PG, PG ^ pgd_conj_num).

:- pred pardgoal_calc_cost(pard_goal_detail::in, float::in, float::out) 
    is det.

pardgoal_calc_cost(Goal, !Cost) :-
    GoalType = Goal ^ pgd_pg_type,
    (
        GoalType = pgt_call(_, _, _, CostPercall, _, _),
        !:Cost = !.Cost + CostPercall
    ; 
        GoalType = pgt_cheap_call(_, _, _, _, Cost),
        ( cs_cost_get_calls(Cost) > 0.0 ->
            !:Cost = !.Cost + cs_cost_get_percall(Cost)
        ;
            % Goals that are never called have no cost
            true
        )
    ;
        GoalType = pgt_other_atomic_goal,
        % Atomic goals are usually trivial but for the purposes of calculating
        % the overlap of dependant conjunctions we'd like variable
        % production/consumption information to be in order even among atomic
        % goals.  Therefore atomic goals have a cost of 1.0.  This must be
        % included here so we can compare costs properly.
        !:Cost = !.Cost + 1.0
    ;
        GoalType = pgt_non_atomic_goal,
        error(this_file ++ "unexpected non atomic goal")
    ).

:- type dependency_maps
    ---> dependency_maps(
            dm_depends_on           :: map(int, set(int)),
                % This map maps from conjunct numbers to the conjunct numbers
                % of goals that they depend upon.

            dm_is_depended_on_by    :: map(int, set(int))
                % This is the reverse dependency map.  It maps from a dependee
                % to conjunct numbers that depend on this goal.
         ).

:- pred build_dependency_maps(list(pard_goal_detail)::in, 
    dependency_maps::out) is det.

build_dependency_maps(Goals, Maps) :-
    length(Goals, GoalsLen),
    % Both maps are initialised equally.
    fold_up(insert_empty_set, 1, GoalsLen, map.init, InitialisedMap), 
    build_dependency_map(Goals, 1, map.init, _VarDepMap, 
        InitialisedMap, Map, InitialisedMap, RevMap),
    Maps = dependency_maps(Map, RevMap).

:- pred depends_lookup(dependency_maps::in, int::in, set(int)::out) is det.

depends_lookup(DependencyMaps, GoalNum, Dependencies) :-
    Map = DependencyMaps ^ dm_depends_on,
    lookup(Map, GoalNum, Dependencies).

:- pred depends_lookup_rev(dependency_maps::in, int::in, set(int)::out) is det.

depends_lookup_rev(DependencyMaps, GoalNum, Dependencies) :-
    RevMap = DependencyMaps ^ dm_is_depended_on_by,
    lookup(RevMap, GoalNum, Dependencies).

:- pred insert_empty_set(int::in, 
    map(int, set(int))::in, map(int, set(int))::out) is det.

insert_empty_set(K, !Map) :-
    svmap.det_insert(K, set.init, !Map).

:- pred build_dependency_map(list(pard_goal_detail)::in, int::in, 
    map(var_rep, set(int))::in, map(var_rep, set(int))::out,
    map(int, set(int))::in, map(int, set(int))::out,
    map(int, set(int))::in, map(int, set(int))::out) is det.

build_dependency_map([], _ConjNum, !VarDepMap, !Map, !RevMap).
build_dependency_map([PG | PGs], ConjNum, !VarDepMap, !Map, !RevMap) :-
    InstMapInfo = PG ^ pgd_inst_map_info,
    
    % For each variable consumed by a goal we find out which goals instantiate
    % that variable and add them as it's dependencies along with their
    % dependencies.  NOTE: We only consider variables that are read
    % and not those that are set.  This is safe because we only bother
    % analysing single assignment code.
    RefedVars = InstMapInfo ^ im_consumed_vars,
    InstVars = InstMapInfo ^ im_bound_vars,
    list.map((pred(RefedVar::in, DepConjsI::out) is det :-
        map.search(!.VarDepMap, RefedVar, DepConjsPrime) -> 
            DepConjsI = DepConjsPrime
        ;
            % If we consume a variable that we don't know the producer of, it
            % may be a parameter to the procedure or have been produced by a
            % goal outside of this conjunction.  Add an empty set of
            % dependencies.
            set.init(DepConjsI)
        ), to_sorted_list(RefedVars), DepConjss),
    DepConjs = union_list(DepConjss),
    fold(transitive_map_insert(ConjNum), DepConjs, !Map),
    fold((pred(K::in, MapI0::in, MapI::out) is det :-
            transitive_map_insert(K, ConjNum, MapI0, MapI)
        ), DepConjs, !RevMap), 
    
    % For each variable instantiated by this goal add it to the VarDepMap with
    % this goal as it's instantiator.  That is a maping from the variable to
    % the conj num.  The var to conjnum map is not transitive.
    fold(add_var_to_var_dep_map(ConjNum), InstVars, !VarDepMap),

    build_dependency_map(PGs, ConjNum + 1, !VarDepMap, !Map, !RevMap).

:- pred add_var_to_var_dep_map(int::in, var_rep::in, 
    map(var_rep, set(int))::in, map(var_rep, set(int))::out) is det. 

add_var_to_var_dep_map(ConjNum, Var, !VarDepMap) :-
    ( map.search(!.VarDepMap, Var, ConjNums0) ->
        % This is a multiple instantiation.
        svmap.det_update(Var, insert(ConjNums0, ConjNum), !VarDepMap)
    ;
        singleton_set(ConjNums, ConjNum),
        svmap.det_insert(Var, ConjNums, !VarDepMap)
    ).

    % foldl(get_productions_map(Goals, 0,0, _, Vars, _, map.init, Map).
    %
    % Build a map of variable productions in Goals.
    %
:- pred get_productions_map(pard_goal_detail::in, float::in, float::out,
    assoc_list(float, float)::in, assoc_list(float, float)::out,
    map(var_rep, float)::in, map(var_rep, float)::out) is det.

get_productions_map(Goal, !Time, !Executions, !Map) :-
    InstMapInfo = Goal ^ pgd_inst_map_info,
    BoundVars = InstMapInfo ^ im_bound_vars,
    adjust_time_for_waits(!Time, !Executions),
    fold(var_production_time_to_map(!.Time, Goal), BoundVars, !Map),
    pardgoal_calc_cost(Goal, !Time).

:- pred adjust_time_for_waits(float::in, float::out, 
    assoc_list(float, float)::in, assoc_list(float, float)::out) is det.

adjust_time_for_waits(!Time, !Executions) :-
    (
        !.Executions = [ Execution | NextExecution ],
        ( Start - End ) = Execution,
        ( !.Time < Start ->
            error("adjust_time_for_waits: " ++
                "Time occurs before the current execution")
        ; !.Time < End ->
            % The production is within the current execution, no adjustment is
            % necessary.
            true
        ;
            % The time is after this execution.
            !:Executions = NextExecution,
            adjust_time_for_waits_2(End, !Time, !Executions)
        )
    ;
        !.Executions = [],
        error("adjust_time_for_waits: Time occurs after all executions")
    ).

:- pred adjust_time_for_waits_2(float::in, float::in, float::out,
    assoc_list(float, float)::in, assoc_list(float, float)::out) is det.

adjust_time_for_waits_2(LastEnd, !Time, !Executions) :-
    (
        !.Executions = [ Execution | NextExecution ],
        ( Start - End ) = Execution,

        % Do the adjustment.
        !:Time = !.Time + (Start - LastEnd),

        ( !.Time < Start ->
            error("adjust_time_for_waits: Adjustment didn't work, " ++
                "time occurs before the current execution")
        ; !.Time < End ->
            % The adjustment worked.
            true
        ;
            % Further adjustment is needed.
            !:Executions = NextExecution,
            adjust_time_for_waits_2(End, !Time, !Executions)
        )
    ;
        !.Executions = [],
        error("adjust_time_for_waits: Ran out of executions")
    ).

    % var_production_time_to_map(TimeBefore, Goal, Var, !Map).
    %
    % Find the latest production time of Var in Goal, and add TimeBefore + the
    % production time to the map.  An exception is thrown if a duplicate map
    % entry is found, our caller must prevent this.
    %
:- pred var_production_time_to_map(float::in, pard_goal_detail::in,
    var_rep::in, map(var_rep, float)::in, map(var_rep, float)::out) is det.

var_production_time_to_map(TimeBefore, Goal, Var, !Map) :-
    var_first_use_time(find_production, TimeBefore, Goal, Var, Time),
    svmap.det_insert(Var, Time, !Map).

    % foldl(get_consumptions_list(Vars), Goals, 0.0, _, [], RevConsumptions),
    %
    % Compute the order and time of variable consumptions in goals.
    %
:- pred get_consumptions_list(pard_goal_detail::in,
    set(var_rep)::in, set(var_rep)::out, float::in, float::out,
    assoc_list(var_rep, float)::in, assoc_list(var_rep, float)::out) is det.

get_consumptions_list(Goal, !Vars, !Time, !List) :-
    InstMapInfo = Goal ^ pgd_inst_map_info,
    AllConsumptionVars = InstMapInfo ^ im_consumed_vars,
    ConsumptionVars = intersect(!.Vars, AllConsumptionVars),
    map(var_consumptions(!.Time, Goal),
        ConsumptionVars, ConsumptionTimesSet0),
    % Since we re-sort the list we don't need a sorted one to start with, but
    % the set module doesn't export a "to_list" predicate,  (Sorting has no
    % cost since the set is a sorted list internally).
    set.to_sorted_list(ConsumptionTimesSet0, ConsumptionTimes0),
    sort((pred((_ - TimeA)::in, (_ - TimeB)::in, Result::out) is det :-
            % Note that the Time arguments are swapped, this list must be
            % produced in latest to earliest order.
            compare(Result, TimeB, TimeA)
        ), ConsumptionTimes0, ConsumptionTimes),
    !:List = ConsumptionTimes ++ !.List,
    !:Vars = difference(!.Vars, ConsumptionVars),
    pardgoal_calc_cost(Goal, !Time).

:- pred var_consumptions(float::in, pard_goal_detail::in, var_rep::in,
    pair.pair(var_rep, float)::out) is det.

var_consumptions(TimeBefore, Goal, Var, Var - Time) :-
    var_first_use_time(find_consumption, TimeBefore, Goal, Var, Time).

:- type find_production_or_consumption
    --->    find_production
    ;       find_consumption.

    % var_first_use_time(FindProdOrCons, Time0, Goal, Var, Time).
    %
    % if FindProdOrCons = find_production
    %   Time is Time0 + the time that Goal produces Var.
    % elif FindProdOrCons = find_consumption
    %   Time is Time0 + the time that Goal first consumes Var.
    %
:- pred var_first_use_time(find_production_or_consumption::in, 
    float::in, pard_goal_detail::in, var_rep::in, float::out) is det.

var_first_use_time(FindProdOrCons, TimeBefore, Goal, Var, Time) :-
    GoalType = Goal ^ pgd_pg_type,
    (
        ( 
            GoalType = pgt_call(_Callee, _, Vars, CostPercall, Args, _CallSite)
        ; 
            GoalType = pgt_cheap_call(_Callee, _, Vars, Args, Cost),
            CostPercall = cs_cost_get_percall(Cost)
        ),
        ( nth_member_search(Vars, Var, NthArg) ->
            index1_det(Args, NthArg, Arg),
            Use = Arg ^ vmu_use,
            UseType = Use ^ vui_use_type,
            (
                (
                    UseType = var_use_production,
                    (
                        FindProdOrCons = find_production
                    ;
                        FindProdOrCons = find_consumption,
                        error("var_first_use_time: " 
                            ++ "Found production when looking for consumption")
                    )
                ; 
                    UseType = var_use_consumption,
                    (
                        FindProdOrCons = find_production,
                        error("var_first_use_time: " 
                            ++ "Found consumption when looking for production")
                    ;
                        FindProdOrCons = find_consumption
                    )
                ),
                CostUntilUse = Use ^ vui_cost_until_use,
                (
                    CostUntilUse = cost_since_proc_start(UseTime)
                ;
                    CostUntilUse = cost_before_proc_end(CostBeforeProcEnd),
                    UseTime = CostPercall - CostBeforeProcEnd,
                    ( UseTime < 0.0 ->
                        error("var_first_use_time: "
                            ++ "CostPercall - CostBeforeProcEnd < 0.0")
                    ;
                        true
                    )
                )
            ;
                UseType = var_use_other,
                % The analysis didn't recognise the instantiation here, so use a
                % conservative default for the production time.
                % XXX: How often does this occur?
                (
                    FindProdOrCons = find_production,
                    UseTime = CostPercall
                ;
                    FindProdOrCons = find_consumption,
                    UseTime = 0.0
                )
            )
        ;
            (
                FindProdOrCons = find_production,
                error("var_first_use_time: "
                    ++ "Couldn't find var in arguments of call")
            ;
                FindProdOrCons = find_consumption,
                % This must be a higher order call where the variable being
                % consued is the higher order value.
                UseTime = 0.0
            )
        )
    ;
        GoalType = pgt_other_atomic_goal,
        (
            FindProdOrCons = find_production,
            UseTime = 1.0
        ;
            FindProdOrCons = find_consumption,
            UseTime = 0.0
        )
    ;
        GoalType = pgt_non_atomic_goal,
        error("Auto parallelisation over non-atomic goals NIY")
    ),
    Time = TimeBefore + UseTime.

%----------------------------------------------------------------------------%

:- pred pardgoal_consumed_vars_accum(pard_goal_detail::in,
    set(var_rep)::in, set(var_rep)::out) is det.

pardgoal_consumed_vars_accum(Goal, !Vars) :-
    RefedVars = Goal ^ pgd_inst_map_info ^ im_consumed_vars,
    set.union(RefedVars, !Vars).

    % Check if it is appropriate to parallelise this call.  That is it must be
    % model_det and have a cost above the call site cost threshold.
    %
:- pred can_parallelise_call(implicit_parallelism_info::in,
    detism_rep::in, clique_call_site_report::in) is semidet.

can_parallelise_call(Info, Detism, CallSiteReport) :-
    ( Detism = det_rep
    ; Detism = cc_multidet_rep ),
    CallSiteCost = get_call_site_cost(Info, CallSiteReport),
    ( cs_cost_get_calls(CallSiteCost) > 0.0 ->
        % This is conditional so that we can gauretee that it never causes a
        % divide by zero error,
        PercallCost = cs_cost_get_percall(CallSiteCost),
        PercallCost > float(Info ^ ipi_opts ^ cpc_call_site_threshold)
    ;
        fail 
    ).

:- pred maybe_costly_call(implicit_parallelism_info::in, goal_path::in,
    atomic_goal_rep::in, detism_rep::in, inst_map_info::in,
    pard_goal_type::out(pgt_atomic_goal)) is det.

maybe_costly_call(Info, GoalPath, AtomicGoal, Detism,
        InstMapInfo, GoalType) :-
    InstMapBefore = InstMapInfo ^ im_before,
    InstMapAfter = InstMapInfo ^ im_after,
    (
        ( AtomicGoal = unify_construct_rep(_, _, _)
        ; AtomicGoal = unify_deconstruct_rep(_, _, _)
        ; AtomicGoal = partial_construct_rep(_, _, _)
        ; AtomicGoal = partial_deconstruct_rep(_, _, _)
        ; AtomicGoal = unify_assign_rep(_, _)
        ; AtomicGoal = cast_rep(_, _)
        ; AtomicGoal = unify_simple_test_rep(_, _)
        % Don't bother parallelising foreign code, builtins or events.
        ; AtomicGoal = pragma_foreign_code_rep(_)
        ; AtomicGoal = builtin_call_rep(_, _, _)
        ; AtomicGoal = event_call_rep(_, _)
        ),
        GoalType = pgt_other_atomic_goal 
    ;
        ( AtomicGoal = higher_order_call_rep(_, Args)
        ; AtomicGoal = method_call_rep(_, _, Args)
        ; AtomicGoal = plain_call_rep(_, _, Args)
        ),
        (
            ( AtomicGoal = higher_order_call_rep(_, _)
            ; AtomicGoal = method_call_rep(_, _, _)
            ),
            Callee = unknown_callee 
        ; 
            AtomicGoal = plain_call_rep(ModuleName, CalleeName, _),
            Callee = named_callee(ModuleName, CalleeName)
        ),
        map.lookup(Info ^ ipi_call_sites, GoalPath, CallSite),
        % Lookup var use information.
        CallSiteKind = CallSite ^ ccsr_kind_and_callee,
        (
            CallSiteKind = normal_call_and_callee(NormalCalleeId, _),
            PSPtr = NormalCalleeId ^ pdesc_ps_ptr,
            Deep = Info ^ ipi_deep,
            create_proc_var_use_dump_report(Deep, PSPtr,
                MaybeVarUseDumpInfo),
            MaybeVarUseDumpInfo = ok(VarUseDumpInfo)
        ->
            VarUseInfos = VarUseDumpInfo ^ pvui_var_uses, 
            list.map_corresponding((pred(Arg::in, VarUseInfo::in, 
                        VarModeAndUse::out) is det :-
                    var_get_mode(InstMapBefore, InstMapAfter, Arg, ArgMode),
                    VarModeAndUse = var_mode_and_use(Arg, ArgMode,
                        VarUseInfo)
                ), Args, VarUseInfos, VarModeAndUses)
        ;
            list.map((pred(Arg::in, VarModeAndUse::out) is det :-
                    var_get_mode(InstMapBefore, InstMapAfter, Arg, ArgMode),
                    var_mode_to_var_use(ArgMode, VarUseType),
                    pessimistic_var_use_info(VarUseType, VarUseInfo),
                    VarModeAndUse = var_mode_and_use(Arg, ArgMode,
                        VarUseInfo)
                ), Args, VarModeAndUses)
        ),
        map(maybe_search_var_name(Info ^ ipi_var_table), Args, VarNames),

        ( can_parallelise_call(Info, Detism, CallSite) ->
            CostPercall = cs_cost_get_percall(get_call_site_cost(Info,
                CallSite)),
            GoalType = 
                pgt_call(Callee, VarNames, Args, CostPercall, VarModeAndUses,
                    CallSite)
        ;
            CallSiteCost = get_call_site_cost(Info, CallSite),
            GoalType = pgt_cheap_call(Callee, VarNames, Args, VarModeAndUses,
                CallSiteCost)
        )
    ).

:- pred var_get_mode(inst_map::in, inst_map::in, var_rep::in, var_mode_rep::out)
    is det.

var_get_mode(InstMapBefore, InstMapAfter, VarRep, VarModeRep) :-
    inst_map_get(InstMapBefore, VarRep, InstBefore, _),
    inst_map_get(InstMapAfter, VarRep, InstAfter, _),
    VarModeRep = var_mode_rep(InstBefore, InstAfter).

    % Transform a conjunction of goals into a list of pard goals..
    %
    % The results are returned in the order that they appear.
    %
:- pred conj_to_pard_goal_list(list(goal_rep(inst_map_info))::in,
    goal_path::in, int::in, implicit_parallelism_info::in,
    list(pard_goal_detail)::in, list(pard_goal_detail)::out,
    int::in, int::out) is det.

conj_to_pard_goal_list([], _, _, _, !PardGoals, !NumCostlyCalls) :-
    list.reverse(!PardGoals).

conj_to_pard_goal_list([Goal | Goals], GoalPath0, ConjNum, Info,
        !PardGoals, !NumCostlyCalls) :-
    Goal = goal_rep(GoalExpr, Detism, InstMapInfo),
    (
        ( GoalExpr = conj_rep(_)
        ; GoalExpr = disj_rep(_)
        ; GoalExpr = switch_rep(_, _, _)
        ; GoalExpr = ite_rep(_, _, _)
        ; GoalExpr = negation_rep(_)
        ; GoalExpr = scope_rep(_, _)
        ),
        % XXX: We my consider lifting calls out of non-atomic goals so that
        % they can be parallelised,  or parallelising the whole non-atomic
        % goal.
        PardGoalType = pgt_non_atomic_goal
    ;
        GoalExpr = atomic_goal_rep(_Context, _Line, _BoundVars, AtomicGoal),
        GoalPath = goal_path_add_at_end(GoalPath0, step_conj(ConjNum)),
        maybe_costly_call(Info, GoalPath, AtomicGoal, Detism,
            InstMapInfo, PardGoalType),
        (
            PardGoalType = pgt_call(_, _, _, _, _, _),
            !:NumCostlyCalls = !.NumCostlyCalls + 1
        ;
            PardGoalType = pgt_cheap_call(_, _, _, _, _)
        ;
            PardGoalType = pgt_other_atomic_goal
        )
    ),
    PardGoal = pard_goal_detail(PardGoalType, Detism, ConjNum,
        InstMapInfo),
    !:PardGoals = [PardGoal | !.PardGoals],
    conj_to_pard_goal_list(Goals, GoalPath0, ConjNum+1, Info, 
        !PardGoals, !NumCostlyCalls).

    % are_conjuncts_dependant(CallOutputs, InstMap, VarModeAndUse, !DepVars),
    %
    % Determine if a variables depends on an output from an earlier call either
    % directly or indirectly.  If it does add it to the DepVars set.
    %
    % Retrieve the average cost of a call site.
    %
:- func get_call_site_cost(implicit_parallelism_info, clique_call_site_report) 
    = cs_cost_csq.

get_call_site_cost(Info, CallSite) = Cost :-
    CSSummary = CallSite ^ ccsr_call_site_summary,
    GoalPath = CSSummary ^ perf_row_subject ^ csdesc_goal_path,
    ( map.search(Info ^ ipi_rec_call_sites, GoalPath, CostPrime) ->
        Cost = CostPrime
    ;
        MaybePerfTotal = CSSummary ^ perf_row_maybe_total, 
        (
            MaybePerfTotal = yes(PerfTotal),
            TotalCost = PerfTotal ^ perf_row_callseqs
        ;
            MaybePerfTotal = no,
            error(this_file ++ 
                "Could not retrieve total callseqs cost from call site")
        ),
        Calls = CSSummary ^ perf_row_calls,
        Cost = build_cs_cost_csq(Calls, float(TotalCost))
    ).

%----------------------------------------------------------------------------%
%
% Annotate a goal with instantiation information.
%

    % inst_map_info now contains information that it's not necessary to
    % contain.  Namely the im_after field can be calculated from the im_before
    % and im_bound_vars fields.  However since this information will probably
    % be attached to a different goal there is not much extra cost in having a
    % pointer to it from here.
    %
:- type inst_map_info
    --->    inst_map_info(
                im_before           :: inst_map,
                    % The inst map before this goal is executed.

                im_after            :: inst_map,
                    % The inst map after this goal was executed.

                im_consumed_vars    :: set(var_rep),
                    % Variables consumed (read but not bound) by this goal.

                im_bound_vars       :: set(var_rep)
                    % The variables produced by this goal.
            ).

    % Note: It may be useful to add other annotations such as goal path or cost 
    % information.
    %
    % SeenDuplicateInstiation is used to assert that we're analysing single
    % assignment code only.
    %
    % Vars is the set of variables used by this goal, both consumed and
    % produced.
    %
:- pred goal_annotate_with_instmap(goal_rep::in, goal_rep(inst_map_info)::out, 
    inst_map::in, inst_map::out, seen_duplicate_instantiation::out, 
    set(var_rep)::out, set(var_rep)::out) is det.

goal_annotate_with_instmap(Goal0, Goal, !InstMap, SeenDuplicateInstantiation,
        ConsumedVars, BoundVars) :-
    Goal0 = goal_rep(GoalExpr0, Detism, _),
    InstMapBefore = !.InstMap,
    (
        GoalExpr0 = conj_rep(Conjs0),
        conj_annotate_with_instmap(Conjs0, Conjs, !InstMap, 
            SeenDuplicateInstantiation, ConsumedVars, BoundVars),
        GoalExpr = conj_rep(Conjs)
    ;
        GoalExpr0 = disj_rep(Disjs0),
        disj_annotate_with_instmap(Disjs0, Disjs, !InstMap,
            SeenDuplicateInstantiation, ConsumedVars, BoundVars),
        GoalExpr = disj_rep(Disjs)
    ;
        GoalExpr0 = switch_rep(Var, CanFail, Cases0),
        switch_annotate_with_instmap(Cases0, Cases, !InstMap,
            SeenDuplicateInstantiation, ConsumedVars0, BoundVars),
        set.insert(ConsumedVars0, Var, ConsumedVars),
        GoalExpr = switch_rep(Var, CanFail, Cases)
    ;
        GoalExpr0 = ite_rep(Cond0, Then0, Else0),
        ite_annotate_with_instmap(Cond0, Cond, Then0, Then, Else0, Else,
            !InstMap, SeenDuplicateInstantiation, ConsumedVars, BoundVars),
        GoalExpr = ite_rep(Cond, Then, Else)
    ;
        % XXX: Not all scope goals can produce variables, in fact some are used
        % to isolate variables that aren't named apart.  But other scope goals
        % can bind variables.  We don't know which we're looking at here. 
        GoalExpr0 = scope_rep(Subgoal0, MaybeCut),
        goal_annotate_with_instmap(Subgoal0, Subgoal, !InstMap, 
            SeenDuplicateInstantiation, ConsumedVars, BoundVars),
        GoalExpr = scope_rep(Subgoal, MaybeCut)
    ;
        GoalExpr0 = negation_rep(Subgoal0),
        % A negated goal cannot affect instantiation.
        goal_annotate_with_instmap(Subgoal0, Subgoal, !.InstMap, 
            _InstMap, SeenDuplicateInstantiation, ConsumedVars, _),
        BoundVars = set.init,
        GoalExpr = negation_rep(Subgoal)
    ;
        GoalExpr0 = atomic_goal_rep(File, Line, BoundVarsList, AtomicGoal),
        % The binding of a variable may depend on any number of other
        % variables, and recursively the variables that those depended-on
        % variables depend upon.  
        % XXX: This doesn't include variables that can affect control flow and
        % therefore the values of other variables, this includes variables
        % referenced from conditions in ITE goals, and variables switched-on.
        % We may get away with this as our new system for determining
        % goal-dependance takes these into account.
        atomic_goal_get_vars(AtomicGoal, Vars),
        BoundVars = set.from_list(BoundVarsList),
        set.difference(Vars, BoundVars, ConsumedVars),
        inst_map_ground_vars(BoundVarsList, ConsumedVars, !InstMap,
            SeenDuplicateInstantiation),
        GoalExpr = atomic_goal_rep(File, Line, BoundVarsList, AtomicGoal) 
    ),
    InstMapAfter = !.InstMap,
    InstMapInfo = inst_map_info(InstMapBefore, InstMapAfter, ConsumedVars,
        BoundVars),
    Goal = goal_rep(GoalExpr, Detism, InstMapInfo).

:- pred conj_annotate_with_instmap(list(goal_rep)::in,
    list(goal_rep(inst_map_info))::out, inst_map::in, inst_map::out,
    seen_duplicate_instantiation::out, set(var_rep)::out, set(var_rep)::out)
    is det.

conj_annotate_with_instmap([], [], !InstMap,
    have_not_seen_duplicate_instantiation, set.init, set.init).
conj_annotate_with_instmap([Conj0 | Conjs0], [Conj | Conjs], !InstMap, 
        SeenDuplicateInstantiation, ConsumedVars, BoundVars) :-
    goal_annotate_with_instmap(Conj0, Conj, !InstMap,
        SeenDuplicateInstantiationHead, ConsumedVarsHead, BoundVarsHead),
    conj_annotate_with_instmap(Conjs0, Conjs, !InstMap,
        SeenDuplicateInstantiationTail, ConsumedVarsTail, BoundVarsTail),
    set.union(ConsumedVarsTail, ConsumedVarsHead, ConsumedVars),
    set.union(BoundVarsTail, BoundVarsHead, BoundVars),
    SeenDuplicateInstantiation = merge_seen_duplicate_instantiation(
        SeenDuplicateInstantiationHead,
        SeenDuplicateInstantiationTail).

:- pred disj_annotate_with_instmap(list(goal_rep)::in,
    list(goal_rep(inst_map_info))::out, inst_map::in, inst_map::out,
    seen_duplicate_instantiation::out, set(var_rep)::out, set(var_rep)::out)
    is det.

disj_annotate_with_instmap([], [], !InstMap,
        have_not_seen_duplicate_instantiation, set.init, set.init).
disj_annotate_with_instmap([Disj0 | Disjs0], [Disj | Disjs], InstMap0, InstMap,
        SeenDuplicateInstantiation, ConsumedVars, BoundVars) :-
    HeadDetism = Disj0 ^ goal_detism_rep,
    goal_annotate_with_instmap(Disj0, Disj, InstMap0, InstMapHead,
        SeenDuplicateInstantiationHead, ConsumedVarsHead, BoundVarsHead),
    disj_annotate_with_instmap(Disjs0, Disjs, InstMap0, InstMapTail,
        SeenDuplicateInstantiationTail, ConsumedVarsTail, BoundVarsTail),
    
    set.union(ConsumedVarsTail, ConsumedVarsHead, ConsumedVars),

    % merge_inst_map requires the detism of goals that produce both inst maps,
    % we can create fake values that satisfy merge_inst_map easily.
    % XXX: Consider inferring determinism as another simple analysis.
    % A disjunction may only bind a variable if all disjuncts bind that
    % variable.  We respect that here and handle the special case of this being
    % the last disjunct in a disjunction.
    (
        Disjs = [],
        TailDetism = failure_rep,
        BoundVars = BoundVarsHead
    ;
        Disjs = [_ | _],
        TailDetism = det_rep,
        set.intersect(BoundVarsTail, BoundVarsHead, BoundVars)
    ),
    InstMap = merge_inst_map(InstMapHead, HeadDetism, InstMapTail, TailDetism),
    SeenDuplicateInstantiation = merge_seen_duplicate_instantiation(
        SeenDuplicateInstantiationHead,
        SeenDuplicateInstantiationTail).

:- pred switch_annotate_with_instmap(list(case_rep)::in, 
    list(case_rep(inst_map_info))::out, inst_map::in, inst_map::out,
    seen_duplicate_instantiation::out, set(var_rep)::out, set(var_rep)::out) 
    is det.

switch_annotate_with_instmap([], [], !InstMap,
        have_not_seen_duplicate_instantiation, set.init, set.init).
switch_annotate_with_instmap([Case0 | Cases0], [Case | Cases], 
        InstMap0, InstMap, SeenDuplicateInstantiation, 
        ConsumedVars, BoundVars) :-
    Case0 = case_rep(ConsIdArity, ExtraConsIdAritys, Goal0),
    HeadDetism = Goal0 ^ goal_detism_rep,
    goal_annotate_with_instmap(Goal0, Goal, InstMap0, InstMapHead,
        SeenDuplicateInstantiationHead, ConsumedVarsHead, BoundVarsHead),
    Case = case_rep(ConsIdArity, ExtraConsIdAritys, Goal),
    switch_annotate_with_instmap(Cases0, Cases, InstMap0, InstMapTail,
        SeenDuplicateInstantiationTail, ConsumedVarsTail, BoundVarsTail),
    set.union(ConsumedVarsTail, ConsumedVarsHead, ConsumedVars),
    % merge_inst_map requires the detism of goals that produce both inst maps,
    % we can create fake values that satisfy merge_inst_map easily.
    (
        Cases = [],
        TailDetism = failure_rep,
        BoundVars = BoundVarsHead
    ;
        Cases = [_ | _],
        TailDetism = det_rep,
        set.intersect(BoundVarsTail, BoundVarsHead, BoundVars)
    ),
    InstMap = merge_inst_map(InstMapHead, HeadDetism, InstMapTail, TailDetism),
    SeenDuplicateInstantiation = merge_seen_duplicate_instantiation(
        SeenDuplicateInstantiationHead,
        SeenDuplicateInstantiationTail).

:- pred ite_annotate_with_instmap(goal_rep::in, goal_rep(inst_map_info)::out,
    goal_rep::in, goal_rep(inst_map_info)::out,
    goal_rep::in, goal_rep(inst_map_info)::out,
    inst_map::in, inst_map::out, 
    seen_duplicate_instantiation::out, set(var_rep)::out, set(var_rep)::out) 
    is det.

ite_annotate_with_instmap(Cond0, Cond, Then0, Then, Else0, Else, InstMap0, InstMap,
        SeenDuplicateInstantiation, ConsumedVars, BoundVars) :-
    goal_annotate_with_instmap(Cond0, Cond, InstMap0, InstMapAfterCond,
        SeenDuplicateInstantiationCond, ConsumedVarsCond, _BoundVarsCond),
    goal_annotate_with_instmap(Then0, Then, InstMapAfterCond, InstMapAfterThen,
        SeenDuplicateInstantiationThen, ConsumedVarsThen, BoundVarsThen),
    goal_annotate_with_instmap(Else0, Else, InstMap0, InstMapAfterElse,
        SeenDuplicateInstantiationElse, ConsumedVarsElse, BoundVarsElse),
    (
        SeenDuplicateInstantiationCond = have_not_seen_duplicate_instantiation,
        SeenDuplicateInstantiationThen = have_not_seen_duplicate_instantiation,
        SeenDuplicateInstantiationElse = have_not_seen_duplicate_instantiation
    ->
        SeenDuplicateInstantiation = have_not_seen_duplicate_instantiation
    ;
        SeenDuplicateInstantiation = seen_duplicate_instantiation
    ),
    set.union(ConsumedVarsCond, ConsumedVarsThen, ConsumedVarsCondThen),
    set.union(ConsumedVarsCondThen, ConsumedVarsElse, ConsumedVars),
    % Cond is only allowed to bind variables for then.  THe variables bound by
    % the ITE are only those that both Then and Else bind.
    set.intersect(BoundVarsThen, BoundVarsElse, BoundVars),
    ThenDetism = Then ^ goal_detism_rep,
    ElseDetism = Else ^ goal_detism_rep,
    InstMap = merge_inst_map(InstMapAfterThen, ThenDetism, 
        InstMapAfterElse, ElseDetism).

%----------------------------------------------------------------------------%
%
% Jerome's implicit parallelism feedback information.
%

css_list_above_threshold(Options, Deep, !Feedback) :-
    Options = calls_above_threshold_sorted_opts(MeasureType, Threshold),
    compute_css_list_above_threshold(0, Deep, Threshold,
        MeasureType, cord.empty, AboveThresholdCSSCord),
    AboveThresholdCSSs = cord.list(AboveThresholdCSSCord),
    list.map(css_to_call(Deep), AboveThresholdCSSs, Calls),
    FeedbackData = feedback_data_calls_above_threshold_sorted(Threshold,
        MeasureType, Calls),
    put_feedback_data(FeedbackData, !Feedback).

    % Determine those CSSs whose CSDs' average/median call sequence counts
    % exceed the given threshold.
    %
:- pred compute_css_list_above_threshold(int::in, deep::in, int::in,
    stat_measure::in,
    cord(call_site_static)::in, cord(call_site_static)::out) is det.

compute_css_list_above_threshold(Index, Deep, Threshold, Measure, !CSSCord) :-
    array.size(Deep ^ call_site_statics, Size),
    ( Index = Size ->
        true
    ;
        CallSiteCall = array.lookup(Deep ^ call_site_calls, Index),
        CSDListList = map.values(CallSiteCall),
        CSDList = list.condense(CSDListList),
        list.length(CSDList, NumCSD),
        ( NumCSD = 0 ->
            % The CSS doesn't have any CSDs.
            CallSeqs = 0
        ;
            (
                Measure = stat_mean,
                list.foldr(sum_callseqs_csd_ptr(Deep), CSDList,
                    0, SumCallSeqs),
                % NOTE: we have checked that NumCSD is not zero above.
                CallSeqs = SumCallSeqs // NumCSD
            ;
                Measure = stat_median,
                list.sort(compare_csd_ptr(Deep), CSDList, CSDListSorted),
                IndexMedian = NumCSD // 2,
                list.index0_det(CSDListSorted, IndexMedian, MedianPtr),
                sum_callseqs_csd_ptr(Deep, MedianPtr, 0, CallSeqs)
            )
        ),
        ( CallSeqs >= Threshold ->
            CSS = array.lookup(Deep ^ call_site_statics, Index),
            !:CSSCord = snoc(!.CSSCord, CSS),
            compute_css_list_above_threshold(Index + 1, Deep, Threshold,
                Measure, !CSSCord)
        ;
            compute_css_list_above_threshold(Index + 1, Deep, Threshold,
                Measure, !CSSCord)
        )
    ).

    % Add the call sequence counts (own and desc) of CSDPtr to the accumulator.
    %
:- pred sum_callseqs_csd_ptr(deep::in, call_site_dynamic_ptr::in,
    int::in, int::out) is det.

sum_callseqs_csd_ptr(Deep, CSDPtr, !Sum) :-
    lookup_call_site_dynamics(Deep ^ call_site_dynamics, CSDPtr, CSD),
    lookup_csd_desc(Deep ^ csd_desc, CSDPtr, IPO),
    !:Sum = !.Sum + callseqs(CSD ^ csd_own_prof) + inherit_callseqs(IPO).

    % Compare two CSD pointers on the basis of their call sequence counts
    % (own and desc).
    %
:- pred compare_csd_ptr(deep::in, call_site_dynamic_ptr::in,
    call_site_dynamic_ptr::in, comparison_result::out) is det.

compare_csd_ptr(Deep, CSDPtrA, CSDPtrB, Result) :-
    sum_callseqs_csd_ptr(Deep, CSDPtrA, 0, SumA),
    sum_callseqs_csd_ptr(Deep, CSDPtrB, 0, SumB),
    compare(Result, SumA, SumB).

    % Write to the output the list of CSSs.
    %
:- pred css_to_call(deep::in, call_site_static::in, call_site::out) is det.

css_to_call(Deep, CSS, Call) :-
    % Get the caller.
    lookup_proc_statics(Deep ^ proc_statics, CSS ^ css_container, CallerPS),
    Caller = CallerPS ^ ps_id,

    % Get the slot number.
    Slot = CSS ^ css_slot_num,

    % Get the Callee and Call Type.
    (
        CSS ^ css_kind = normal_call_and_callee(PSPtr, _),
        lookup_proc_statics(Deep ^ proc_statics, PSPtr, CalleePS),
        CallTypeAndCallee = plain_call(CalleePS ^ ps_id)
    ;
        CSS ^ css_kind = special_call_and_no_callee,
        CallTypeAndCallee = special_call
    ;
        CSS ^ css_kind = higher_order_call_and_no_callee,
        CallTypeAndCallee = higher_order_call
    ;
        CSS ^ css_kind = method_call_and_no_callee,
        CallTypeAndCallee = method_call
    ;
        CSS ^ css_kind = callback_and_no_callee,
        CallTypeAndCallee = callback_call
    ),

    % Build the call datastructure.
    Call = call_site(Caller, Slot, CallTypeAndCallee).

%----------------------------------------------------------------------------%
%
% Useful utility predicates.
%

:- pred proc_label_from_proc_desc(deep::in, proc_desc::in,
    string_proc_label::out) is det.

proc_label_from_proc_desc(Deep, ProcDesc, ProcLabel) :-
    PSPtr = ProcDesc ^ pdesc_ps_ptr,
    deep_lookup_proc_statics(Deep, PSPtr, ProcStatic),
    ProcLabel = ProcStatic ^ ps_id.

:- pred add_call_site_report_to_map(clique_call_site_report::in, 
    map(goal_path, clique_call_site_report)::in, 
    map(goal_path, clique_call_site_report)::out) is det.

add_call_site_report_to_map(CallSite, !Map) :-
    GoalPath = CallSite ^ ccsr_call_site_summary ^ perf_row_subject 
        ^ csdesc_goal_path,
    svmap.det_insert(GoalPath, CallSite, !Map).

:- func this_file = string.

this_file = "mdprof_fb.automatic_parallelism.m: ".

:- func build_cs_cost_from_perf(perf_row_data(T)) = cs_cost_csq.

build_cs_cost_from_perf(Perf) = CSCost :-
    MaybePerfTotal = Perf ^ perf_row_maybe_total,
    (
        MaybePerfTotal = yes(PerfTotal)
    ;
        MaybePerfTotal = no,
        error(this_file ++ 
            "Could not retrieve total cost from perf data")
    ),
    TotalCSQ = PerfTotal ^ perf_row_callseqs,
    Calls = Perf ^ perf_row_calls,
    CSCost = build_cs_cost_csq(Calls, float(TotalCSQ)).

:- pred transitive_map_insert(T::in, T::in, 
    map(T, set(T))::in, map(T, set(T))::out) is det.

transitive_map_insert(K, V, !Map) :-
    ( map.search(!.Map, K, Vs0) ->
        ( member(V, Vs0) ->
            true
        ;
            insert(Vs0, V, Vs1),
            ( map.search(!.Map, V, VsTransitive) ->
                union(Vs1, VsTransitive, Vs)
            ;
                Vs = Vs1
            ),
            svmap.det_update(K, Vs, !Map)
        )
    ;
        ( map.search(!.Map, V, VsTransitive) ->
            insert(VsTransitive, V, Vs)
        ;
            singleton_set(Vs, V)
        ),
        svmap.det_insert(K, Vs, !Map)
    ).

%-----------------------------------------------------------------------------%

create_candidate_parallel_conj_report(Proc - CandidateParConjunction, Report) :-
    print_proc_label_to_string(Proc, ProcString),
    CandidateParConjunction = candidate_par_conjunction(GoalPath,
        PartNum, IsDependant, GoalsBefore, Conjs, GoalsAfter, ParExecMetrics),
    NumCalls = parallel_exec_metrics_get_num_calls(ParExecMetrics),
    (
        IsDependant = conjuncts_are_independent,
        DependanceString = "no"
    ;
        IsDependant = conjuncts_are_dependant,
        DependanceString = "yes"
    ),
    SeqTime = parallel_exec_metrics_get_seq_time(ParExecMetrics),
    ParTime = parallel_exec_metrics_get_par_time(ParExecMetrics),
    Speedup = parallel_exec_metrics_get_speedup(ParExecMetrics),
    TimeSaving = parallel_exec_metrics_get_time_saving(ParExecMetrics),
    FirstConjDeadTime =
        parallel_exec_metrics_get_first_conj_dead_time(ParExecMetrics),
    FutureDeadTime =
        parallel_exec_metrics_get_future_dead_time(ParExecMetrics),
    TotalDeadTime = parallel_exec_metrics_get_total_dead_time(ParExecMetrics),
    format("      %s\n" ++
           "      Path and Partition Num: %s, %d\n" ++
           "      Dependant: %s\n" ++
           "      NumCalls: %d\n" ++
           "      SeqTime: %f\n" ++
           "      ParTime: %f\n" ++
           "      Speedup: %f\n" ++
           "      Time saving: %f\n" ++
           "      First conj dead time: %f\n" ++
           "      Future dead time: %f\n" ++
           "      Total dead time: %f\n\n", 
        [s(ProcString), s(GoalPath), i(PartNum), s(DependanceString),
            i(NumCalls), f(SeqTime), f(ParTime), f(Speedup), f(TimeSaving), 
            f(FirstConjDeadTime), f(FutureDeadTime), f(TotalDeadTime)],
        ReportHeaderStr),
    ReportHeader = singleton(ReportHeaderStr),

    format_sequential_conjuncts(3, GoalsBefore, empty, ReportGoalsBefore),
    format_parallel_conjunction(3, Conjs, ReportParConj),
    format_sequential_conjuncts(3, GoalsAfter, empty, ReportGoalsAfter),

    Report = snoc(ReportHeader ++ ReportGoalsBefore ++ ReportParConj ++ 
        ReportGoalsAfter, "\n").

:- pred format_parallel_conjunction(int::in, 
    list(seq_conj(pard_goal))::in, cord(string)::out) is det.

format_parallel_conjunction(Indent, Conjs, Report) :-
    IndentStr = indent(Indent),
    Report0 = IndentStr ++ singleton("(\n"),
    format_parallel_conjuncts(Indent, Conjs, Report0, Report). 

:- pred format_parallel_conjuncts(int::in, list(seq_conj(pard_goal))::in,
    cord(string)::in, cord(string)::out) is det.

format_parallel_conjuncts(Indent, [], !Report) :-
    IndentStr = indent(Indent),
    !:Report = snoc(!.Report ++ IndentStr, ")\n").
format_parallel_conjuncts(Indent, [ Conj | Conjs ], !Report) :-
    format_sequential_conjunction(Indent + 1, Conj, ConjReport),
    !:Report = !.Report ++ ConjReport,
    (
        Conjs = []
    ;
        Conjs = [_ | _],
        !:Report = snoc(!.Report ++ indent(Indent), "&\n")
    ),
    format_parallel_conjuncts(Indent, Conjs, !Report).

:- pred format_sequential_conjunction(int::in, seq_conj(pard_goal)::in,
    cord(string)::out) is det.

format_sequential_conjunction(Indent, seq_conj(Conjs), Report) :-
    format_sequential_conjuncts(Indent, Conjs, empty, Report).

:- pred format_sequential_conjuncts(int::in, list(pard_goal)::in,
    cord(string)::in, cord(string)::out) is det.

format_sequential_conjuncts(_Indent, [], !Report).
format_sequential_conjuncts(Indent, [ Conj | Conjs ], !Report) :-
    format_pard_goal(Indent, Conj, ConjReport),
    !:Report = !.Report ++ ConjReport,
    (
        Conjs = [],
        !:Report = snoc(!.Report, "\n")
    ;
        Conjs = [_ | _],
        !:Report = snoc(!.Report, ",\n")
    ),
    format_sequential_conjuncts(Indent, Conjs, !Report).

:- pred format_pard_goal(int::in, pard_goal::in, cord(string)::out) is det.

format_pard_goal(Indent, Goal, Report) :-
    (
        (
            Goal = pg_call(Callee, Vars, CostPercall),
            Line1 = singleton(format("%% cost: %f\n", [f(CostPercall)]))
        ;
            Goal = pg_cheap_call(Callee, Vars),
            Line1 = singleton("% Cheap call\n")
        ),
        format_callee(Callee, CalleeReport),
        ColsUsed = indent_size(Indent) + length(CalleeReport) + 1,
        format_vars(Indent + 1, ColsUsed, Vars, empty, VarsReport),
        Line2 = indent(Indent) ++ singleton(CalleeReport) ++ singleton("(") 
            ++ VarsReport ++ singleton(")"),
        Report = indent(Indent) ++ Line1 ++ Line2
    ;
        Goal = pg_other_atomic_goal,
        Report = indent(Indent) ++ singleton("other_atomic_goal")
    ).

:- pred format_vars(int::in, int::in, list(maybe(string))::in, 
    cord(string)::in, cord(string)::out) is det.

format_vars(_, _, [], !Reports).
format_vars(Indent, ColsUsed0, [Var | Vars], !Reports) :-
    (
        Var = no,
        Report0 = "_"
    ;
        Var = yes(VarName),
        Report0 = VarName
    ),
    (
        Vars = [],
        Report = Report0
    ;
        Vars = [_ | _],
        Report = Report0 ++ ", "
    ),
    ColsUsed1 = ColsUsed0 + length(Report),
    ( ColsUsed1 >= 80 ->
        !:Reports = !.Reports ++ nl_indent(Indent),
        ColsUsed = length(Report)
    ;
        ColsUsed = ColsUsed1
    ),
    !:Reports = snoc(!.Reports, Report),
    format_vars(Indent, ColsUsed, Vars, !Reports).

:- pred format_callee(callee_rep::in, string::out) is det.

format_callee(unknown_callee, "unknwon_call").
format_callee(named_callee(Module, Proc), 
    format("%s.%s", [s(Module), s(Proc)])).

%-----------------------------------------------------------------------------%

:- pred cord_split(cord(T)::in, cord(T)::out, cord(T)::out) is multi.

cord_split(Cord, A, B) :-
    ( cord.head_tail(Cord, Head, Tail) ->
        (
            % Put the split before Cord,
            A = cord.empty,
            B = Cord
        ;
            % Put the split within or after Cord.
            cord_split(Tail, TailA, B),
            A = cons(Head, TailA)
        )
    ;
        % An empty cord can only be split one way (since we say that the split
        % may happen before the cord).
        A = cord.empty,
        B = cord.empty
    ).

%-----------------------------------------------------------------------------%
:- end_module mdprof_fb.automatic_parallelism.
%-----------------------------------------------------------------------------%
