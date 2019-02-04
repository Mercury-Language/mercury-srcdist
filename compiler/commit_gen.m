%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 1997-1998, 2003-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: commit_gen.m.
% Main authors: conway, fjh, zs.
%
% The predicates of this module generate code for performing commits.
%
%---------------------------------------------------------------------------%

:- module ll_backend.commit_gen.
:- interface.

:- import_module hlds.code_model.
:- import_module hlds.hlds_goal.
:- import_module ll_backend.code_info.
:- import_module ll_backend.llds.
:- import_module parse_tree.prog_data.

:- import_module set.

%---------------------------------------------------------------------------%

:- pred generate_scope(scope_reason::in, code_model::in, hlds_goal_info::in,
    set(prog_var)::in, hlds_goal::in, code_tree::out,
    code_info::in, code_info::out) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module libs.compiler_util.
:- import_module libs.tree.
:- import_module ll_backend.code_gen.

:- import_module list.
:- import_module maybe.
:- import_module pair.
:- import_module string.

%---------------------------------------------------------------------------%

generate_scope(Reason, OuterCodeModel, OuterGoalInfo,
        ForwardLiveVarsBeforeGoal, Goal, Code, !CI) :-
    (
        Reason = trace_goal(_, MaybeTraceRuntimeCond, _, _, _),
        MaybeTraceRuntimeCond = yes(_)
    ->
        % These goals should have been transformed into other forms of goals
        % by simplify.m at the end of semantic analysis.
        unexpected(this_file, "generate_scope: trace_goal")
    ;
        generate_commit(OuterCodeModel, OuterGoalInfo,
            ForwardLiveVarsBeforeGoal, Goal, Code, !CI)
    ).

:- pred generate_commit(code_model::in, hlds_goal_info::in, set(prog_var)::in,
    hlds_goal::in, code_tree::out, code_info::in, code_info::out) is det.

generate_commit(OuterCodeModel, OuterGoalInfo, ForwardLiveVarsBeforeGoal,
        Goal, Code, !CI) :-
    AddTrailOps = should_add_trail_ops(!.CI, OuterGoalInfo),
    AddRegionOps = should_add_region_ops(!.CI, OuterGoalInfo),

    Goal = hlds_goal(_, InnerGoalInfo),
    InnerCodeModel = goal_info_get_code_model(InnerGoalInfo),
    (
        OuterCodeModel = model_det,
        (
            InnerCodeModel = model_det,
            code_gen.generate_goal(InnerCodeModel, Goal, Code, !CI)
        ;
            InnerCodeModel = model_semi,
            unexpected(this_file,
                "generate_commit: semidet model in det context")
        ;
            InnerCodeModel = model_non,
            code_info.prepare_for_det_commit(AddTrailOps, AddRegionOps,
                ForwardLiveVarsBeforeGoal, CommitInfo, PreCommit, !CI),
            code_gen.generate_goal(InnerCodeModel, Goal, GoalCode, !CI),
            code_info.generate_det_commit(CommitInfo, Commit, !CI),
            Code = tree_list([PreCommit, GoalCode, Commit])
        )
    ;
        OuterCodeModel = model_semi,
        (
            InnerCodeModel = model_det,
            code_gen.generate_goal(InnerCodeModel, Goal, Code, !CI)
        ;
            InnerCodeModel = model_semi,
            code_gen.generate_goal(InnerCodeModel, Goal, Code, !CI)
        ;
            InnerCodeModel = model_non,
            code_info.prepare_for_semi_commit(AddTrailOps, AddRegionOps,
                ForwardLiveVarsBeforeGoal, CommitInfo, PreCommit, !CI),
            code_gen.generate_goal(InnerCodeModel, Goal, GoalCode, !CI),
            code_info.generate_semi_commit(CommitInfo, Commit, !CI),
            Code = tree_list([PreCommit, GoalCode, Commit])
        )
    ;
        OuterCodeModel = model_non,
        code_gen.generate_goal(InnerCodeModel, Goal, Code, !CI)
    ).

%---------------------------------------------------------------------------%

:- func this_file = string.

this_file = "commit_gen.m".

%---------------------------------------------------------------------------%
:- end_module commit_gen.
%---------------------------------------------------------------------------%
