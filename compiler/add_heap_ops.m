%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2000-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: add_heap_ops.m.
% Author: fjh.
%
% This module is an HLDS-to-HLDS transformation that inserts code to
% handle heap reclamation on backtracking, by saving and restoring
% the values of the heap pointer.
% The transformation involves adding calls to impure
% predicates defined in library/private_builtin.m, which in turn call
% the MR_mark_hp() and MR_restore_hp() macros defined in
% runtime/mercury_heap.h.
%
% This pass is currently only used for the MLDS back-end.
% For some reason (perhaps efficiency?? or more likely just historical?),
% the LLDS back-end inserts the heap operations as it is generating
% LLDS code, rather than via an HLDS to HLDS transformation.
%
% This module is very similar to add_trail_ops.m.
%
%-----------------------------------------------------------------------------%
%
% XXX check goal_infos for correctness
%
%-----------------------------------------------------------------------------%

:- module ml_backend.add_heap_ops.
:- interface.

:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.

:- pred add_heap_ops(module_info::in, proc_info::in, proc_info::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module hlds.code_model.
:- import_module hlds.goal_form.
:- import_module hlds.goal_util.
:- import_module hlds.hlds_goal.
:- import_module hlds.pred_table.
:- import_module hlds.quantification.
:- import_module libs.compiler_util.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_type.

:- import_module assoc_list.
:- import_module bool.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%

    % As we traverse the goal, we add new variables to hold the saved values
    % of the heap pointer. So we need to thread a varset and a vartypes mapping
    % through, to record the names and types of the new variables.
    %
    % We also keep the module_info around, so that we can use the predicate
    % table that it contains to lookup the pred_ids for the builtin procedures
    % that we insert calls to. We do not update the module_info as we're
    % traversing the goal.
    %
:- type heap_ops_info
    --->    heap_ops_info(
                varset      :: prog_varset,
                var_types   :: vartypes,
                module_info :: module_info
            ).

add_heap_ops(ModuleInfo0, !Proc) :-
    proc_info_get_goal(!.Proc, Goal0),
    proc_info_get_varset(!.Proc, VarSet0),
    proc_info_get_vartypes(!.Proc, VarTypes0),
    TrailOpsInfo0 = heap_ops_info(VarSet0, VarTypes0, ModuleInfo0),
    goal_add_heap_ops(Goal0, Goal, TrailOpsInfo0, TrailOpsInfo),
    TrailOpsInfo = heap_ops_info(VarSet, VarTypes, _),
    proc_info_set_goal(Goal, !Proc),
    proc_info_set_varset(VarSet, !Proc),
    proc_info_set_vartypes(VarTypes, !Proc),
    % The code below does not maintain the non-local variables,
    % so we need to requantify.
    % XXX it would be more efficient to maintain them rather than recomputing
    % them every time.
    requantify_proc(!Proc).

:- pred goal_add_heap_ops(hlds_goal::in, hlds_goal::out,
    heap_ops_info::in, heap_ops_info::out) is det.

goal_add_heap_ops(hlds_goal(GoalExpr0, GoalInfo), Goal, !Info) :-
    goal_expr_add_heap_ops(GoalExpr0, GoalInfo, Goal, !Info).

:- pred goal_expr_add_heap_ops(hlds_goal_expr::in, hlds_goal_info::in,
    hlds_goal::out, heap_ops_info::in, heap_ops_info::out) is det.

goal_expr_add_heap_ops(conj(ConjType, Goals0), GI,
        hlds_goal(conj(ConjType, Goals), GI), !Info) :-
    conj_add_heap_ops(Goals0, Goals, !Info).

goal_expr_add_heap_ops(disj([]), GI, hlds_goal(disj([]), GI), !Info).
goal_expr_add_heap_ops(disj(Goals0), GoalInfo, hlds_goal(GoalExpr, GoalInfo),
        !Info) :-
    Goals0 = [FirstDisjunct | _],

    goal_info_get_context(GoalInfo, Context),
    goal_info_get_code_model(GoalInfo, CodeModel),

    % If necessary, save the heap pointer so that we can restore it
    % on back-tracking. We don't need to do this here if it is a model_det
    % or model_semi disjunction and the first disjunct won't allocate any heap
    % -- in that case, we delay saving the heap pointer until just before
    % the first disjunct that might allocate heap.
    (
        ( CodeModel = model_non
        ; goal_may_allocate_heap(FirstDisjunct)
        )
    ->
        new_saved_hp_var(SavedHeapPointerVar, !Info),
        gen_mark_hp(SavedHeapPointerVar, Context, MarkHeapPointerGoal, !Info),
        disj_add_heap_ops(Goals0, yes, yes(SavedHeapPointerVar), GoalInfo,
            Goals, !Info),
        GoalExpr = conj(plain_conj,
            [MarkHeapPointerGoal, hlds_goal(disj(Goals), GoalInfo)])
    ;
        disj_add_heap_ops(Goals0, yes, no, GoalInfo, Goals, !Info),
        GoalExpr = disj(Goals)
    ).

goal_expr_add_heap_ops(switch(Var, CanFail, Cases0), GI,
        hlds_goal(switch(Var, CanFail, Cases), GI), !Info) :-
    cases_add_heap_ops(Cases0, Cases, !Info).

goal_expr_add_heap_ops(negation(InnerGoal), OuterGoalInfo, Goal, !Info) :-
    %
    % We handle negations by converting them into if-then-elses:
    %   not(G)  ===>  (if G then fail else true)
    %
    goal_info_get_context(OuterGoalInfo, Context),
    InnerGoal = hlds_goal(_, InnerGoalInfo),
    goal_info_get_determinism(InnerGoalInfo, Determinism),
    determinism_components(Determinism, _CanFail, NumSolns),
    True = true_goal_with_context(Context),
    Fail = fail_goal_with_context(Context),
    ModuleInfo = !.Info ^ module_info,
    ( NumSolns = at_most_zero ->
        % The "then" part of the if-then-else will be unreachable, but to
        % preserve the invariants that the MLDS back-end relies on, we need to
        % make sure that it can't fail. So we use a call to
        % `private_builtin.unused' (which will call error/1) rather than
        % `fail' for the "then" part.
        generate_call("unused", detism_det, purity_pure, [], [],
            ModuleInfo, Context, ThenGoal)
    ;
        ThenGoal = Fail
    ),
    NewOuterGoal = if_then_else([], InnerGoal, ThenGoal, True),
    goal_expr_add_heap_ops(NewOuterGoal, OuterGoalInfo, Goal, !Info).

goal_expr_add_heap_ops(scope(Reason, Goal0), GoalInfo,
        hlds_goal(scope(Reason, Goal), GoalInfo), !Info) :-
    goal_add_heap_ops(Goal0, Goal, !Info).

goal_expr_add_heap_ops(if_then_else(A, Cond0, Then0, Else0), GoalInfo,
        hlds_goal(GoalExpr, GoalInfo), !Info) :-
    goal_add_heap_ops(Cond0, Cond, !Info),
    goal_add_heap_ops(Then0, Then, !Info),
    goal_add_heap_ops(Else0, Else1, !Info),

    % If the condition can allocate heap space, save the heap pointer
    % so that we can restore it if the condition fails.
    ( goal_may_allocate_heap(Cond0) ->
        new_saved_hp_var(SavedHeapPointerVar, !Info),
        goal_info_get_context(GoalInfo, Context),
        gen_mark_hp(SavedHeapPointerVar, Context, MarkHeapPointerGoal, !Info),

        % Generate code to restore the heap pointer, and insert that code
        % at the start of the Else branch.
        gen_restore_hp(SavedHeapPointerVar, Context, RestoreHeapPointerGoal,
            !Info),
        Else1 = hlds_goal(_, Else1GoalInfo),
        Else = hlds_goal(
            conj(plain_conj, [RestoreHeapPointerGoal, Else1]),
            Else1GoalInfo),
        IfThenElse = hlds_goal(if_then_else(A, Cond, Then, Else), GoalInfo),
        GoalExpr = conj(plain_conj, [MarkHeapPointerGoal, IfThenElse])
    ;
        GoalExpr = if_then_else(A, Cond, Then, Else1)
    ).

goal_expr_add_heap_ops(GoalExpr @ plain_call(_, _, _, _, _, _), GI,
        hlds_goal(GoalExpr, GI), !Info).
goal_expr_add_heap_ops(GoalExpr @ generic_call(_, _, _, _), GI,
        hlds_goal(GoalExpr, GI), !Info).
goal_expr_add_heap_ops(GoalExpr @ unify(_, _, _, _, _), GI,
        hlds_goal(GoalExpr, GI), !Info).

goal_expr_add_heap_ops(PragmaForeign, GoalInfo, Goal, !Info) :-
    PragmaForeign = call_foreign_proc(_, _, _, _, _, _, Impl),
    ( Impl = fc_impl_model_non(_, _, _, _, _, _, _, _, _) ->
        % XXX Implementing heap reclamation for nondet pragma foreign_code
        % via transformation is difficult, because there's nowhere in the HLDS
        % pragma_foreign_code goal where we can insert the heap reclamation
        % operations. For now, we don't support this. Instead, we just generate
        % a call to a procedure which will at runtime call error/1 with an
        % appropriate "Sorry, not implemented" error message.
        ModuleInfo = !.Info ^ module_info,
        goal_info_get_context(GoalInfo, Context),
        generate_call("reclaim_heap_nondet_pragma_foreign_code",
            detism_erroneous, purity_pure, [], [], ModuleInfo, Context,
            SorryNotImplementedCode),
        Goal = SorryNotImplementedCode
    ;
        Goal = hlds_goal(PragmaForeign, GoalInfo)
    ).

goal_expr_add_heap_ops(shorthand(_), _, _, !Info) :-
    % These should have been expanded out by now.
    unexpected(this_file, "goal_expr_add_heap_ops: unexpected shorthand").

:- pred conj_add_heap_ops(hlds_goals::in, hlds_goals::out,
    heap_ops_info::in, heap_ops_info::out) is det.

conj_add_heap_ops(Goals0, Goals, !Info) :-
    list.map_foldl(goal_add_heap_ops, Goals0, Goals, !Info).

:- pred disj_add_heap_ops(hlds_goals::in, bool::in, maybe(prog_var)::in,
    hlds_goal_info::in, hlds_goals::out,
    heap_ops_info::in, heap_ops_info::out) is det.

disj_add_heap_ops([], _, _, _, [], !Info).
disj_add_heap_ops([Goal0 | Goals0], IsFirstBranch, MaybeSavedHeapPointerVar,
        DisjGoalInfo, DisjGoals, !Info) :-
    goal_add_heap_ops(Goal0, Goal1, !Info),
    Goal1 = hlds_goal(_, GoalInfo),
    goal_info_get_context(GoalInfo, Context),

    % If needed, reset the heap pointer before executing the goal,
    % to reclaim heap space allocated in earlier branches.
    (
        IsFirstBranch = no,
        MaybeSavedHeapPointerVar = yes(SavedHeapPointerVar0)
    ->
        gen_restore_hp(SavedHeapPointerVar0, Context, RestoreHeapPointerGoal,
            !Info),
        conj_list_to_goal([RestoreHeapPointerGoal, Goal1], GoalInfo, Goal)
    ;
        Goal = Goal1
    ),

    % Save the heap pointer, if we haven't already done so, and if this
    % disjunct might allocate heap space.
    (
        MaybeSavedHeapPointerVar = no,
        goal_may_allocate_heap(Goal)
    ->
        % Generate code to save the heap pointer.
        new_saved_hp_var(SavedHeapPointerVar, !Info),
        gen_mark_hp(SavedHeapPointerVar, Context, MarkHeapPointerGoal, !Info),

        % Recursively handle the remaining disjuncts.
        disj_add_heap_ops(Goals0, no, yes(SavedHeapPointerVar), DisjGoalInfo,
            Goals1, !Info),
        % Put this disjunct and the remaining disjuncts in a nested
        % disjunction, so that the heap pointer variable can scope over
        % these disjuncts.
        Disj = hlds_goal(disj([Goal | Goals1]), DisjGoalInfo),
        DisjGoal = hlds_goal(
            conj(plain_conj, [MarkHeapPointerGoal, Disj]),
            DisjGoalInfo),
        DisjGoals = [DisjGoal]
    ;
        % Just recursively handle the remaining disjuncts.
        disj_add_heap_ops(Goals0, no, MaybeSavedHeapPointerVar, DisjGoalInfo,
            Goals, !Info),
        DisjGoals = [Goal | Goals]
    ).

:- pred cases_add_heap_ops(list(case)::in, list(case)::out,
    heap_ops_info::in, heap_ops_info::out) is det.

cases_add_heap_ops([], [], !Info).
cases_add_heap_ops([Case0 | Cases0], [Case | Cases], !Info) :-
    Case0 = case(ConsId, Goal0),
    Case = case(ConsId, Goal),
    goal_add_heap_ops(Goal0, Goal, !Info),
    cases_add_heap_ops(Cases0, Cases, !Info).

%-----------------------------------------------------------------------------%

:- pred gen_mark_hp(prog_var::in, prog_context::in, hlds_goal::out,
    heap_ops_info::in, heap_ops_info::out) is det.

gen_mark_hp(SavedHeapPointerVar, Context, MarkHeapPointerGoal, !Info) :-
    generate_call("mark_hp", detism_det, purity_impure, [SavedHeapPointerVar],
        [SavedHeapPointerVar - ground_inst], !.Info ^ module_info, Context,
        MarkHeapPointerGoal).

:- pred gen_restore_hp(prog_var::in, prog_context::in, hlds_goal::out,
    heap_ops_info::in, heap_ops_info::out) is det.

gen_restore_hp(SavedHeapPointerVar, Context, RestoreHeapPointerGoal, !Info) :-
    generate_call("restore_hp", detism_det, purity_impure,
        [SavedHeapPointerVar], [], !.Info ^ module_info, Context,
        RestoreHeapPointerGoal).

:- func ground_inst = mer_inst.

ground_inst = ground(unique, none).

%-----------------------------------------------------------------------------%

:- pred new_saved_hp_var(prog_var::out,
    heap_ops_info::in, heap_ops_info::out) is det.

new_saved_hp_var(Var, !Info) :-
    new_var("HeapPointer", heap_pointer_type, Var, !Info).

:- pred new_var(string::in, mer_type::in, prog_var::out,
    heap_ops_info::in, heap_ops_info::out) is det.

new_var(Name, Type, Var, !Info) :-
    VarSet0 = !.Info ^ varset,
    VarTypes0 = !.Info ^ var_types,
    varset.new_named_var(VarSet0, Name, Var, VarSet),
    map.det_insert(VarTypes0, Var, Type, VarTypes),
    !:Info = !.Info ^ varset := VarSet,
    !:Info = !.Info ^ var_types := VarTypes.

%-----------------------------------------------------------------------------%

:- pred generate_call(string::in, determinism::in, purity::in,
    list(prog_var)::in, assoc_list(prog_var, mer_inst)::in, module_info::in,
    term.context::in, hlds_goal::out) is det.

generate_call(PredName, Detism, Purity, Args, InstMap, ModuleInfo, Context,
        CallGoal) :-
    BuiltinModule = mercury_private_builtin_module,
    goal_util.generate_simple_call(BuiltinModule, PredName, pf_predicate,
        only_mode, Detism, Purity, Args, [], InstMap, ModuleInfo,
        Context, CallGoal).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "add_heap_ops.m".

%-----------------------------------------------------------------------------%
