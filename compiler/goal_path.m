%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1997-2009 University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: goal_path.m.
% Main author: zs.
%
% This module looks after goal paths, which associate each goal with its
% position in a procedure definition,
%
%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- module check_hlds.goal_path.
:- interface.

:- import_module hlds.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_pred.
:- import_module hlds.hlds_module.
:- import_module parse_tree.
:- import_module parse_tree.prog_data.

:- import_module bool.

%-----------------------------------------------------------------------------%

    % IMPORTANT: the type constraint_id in hlds_data.m makes use of
    % goal_paths to identify constraints between the typechecking pass
    % and the polymorphism pass. For this reason, goal paths should not
    % be recalculated anywhere between these two passes. See the XXX
    % comment near the declaration of constraint_id.
    %
:- pred fill_goal_path_slots(module_info::in, proc_info::in, proc_info::out)
    is det.

    % Fill in the goal_paths for goals in the clauses_info of the predicate.
    % Clauses are given goal paths `disj(1)', ...,  `disj(N)'. If the bool
    % argument is true then the goal paths are stored in a form where any
    % prefix consisting of `disj(_)', `neg', `exist(_)' and `ite_else'
    % components is removed. This is used to optimise the constraint-based
    % mode analysis where the instantiatedness of a variable at such a goal
    % path is always equivalent to its instantiatedness at the parent goal
    % path.
    %
:- pred fill_goal_path_slots_in_clauses(module_info::in, bool::in,
    pred_info::in, pred_info::out) is det.

:- pred fill_goal_path_slots_in_goal(hlds_goal::in, vartypes::in,
    module_info::in, hlds_goal::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.type_util.
:- import_module hlds.hlds_clauses.
:- import_module hlds.hlds_goal.
:- import_module libs.
:- import_module libs.compiler_util.
:- import_module mdbcomp.
:- import_module mdbcomp.program_representation.
:- import_module parse_tree.prog_data.

:- import_module cord.
:- import_module int.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module pair.

%-----------------------------------------------------------------------------%

:- type slot_info
    --->    slot_info(
                slot_info_vartypes                  :: vartypes,
                slot_info_module_info               :: module_info,
                slot_info_omit_mode_equiv_prefix    :: bool
            ).

fill_goal_path_slots(ModuleInfo, !Proc) :-
    proc_info_get_goal(!.Proc, Goal0),
    proc_info_get_vartypes(!.Proc, VarTypes),
    fill_goal_path_slots_in_goal(Goal0, VarTypes, ModuleInfo, Goal),
    proc_info_set_goal(Goal, !Proc).

fill_goal_path_slots_in_clauses(ModuleInfo, OmitModeEquivPrefix, !PredInfo) :-
    pred_info_get_clauses_info(!.PredInfo, ClausesInfo0),
    clauses_info_clauses_only(ClausesInfo0, Clauses0),
    clauses_info_get_vartypes(ClausesInfo0, VarTypes),
    SlotInfo = slot_info(VarTypes, ModuleInfo, OmitModeEquivPrefix),
    list.map_foldl(fill_slots_in_clause(SlotInfo), Clauses0, Clauses, 1, _),
    clauses_info_set_clauses(Clauses, ClausesInfo0, ClausesInfo),
    pred_info_set_clauses_info(ClausesInfo, !PredInfo).

:- pred fill_slots_in_clause(slot_info::in, clause::in, clause::out,
    int::in, int::out) is det.

fill_slots_in_clause(SlotInfo, Clause0, Clause, ClauseNum, ClauseNum + 1) :-
    Clause0 = clause(ProcIds, Goal0, Lang, Context),
    fill_goal_slots(singleton_goal_path(step_disj(ClauseNum)), SlotInfo,
        Goal0, Goal),
    Clause = clause(ProcIds, Goal, Lang, Context).

fill_goal_path_slots_in_goal(Goal0, VarTypes, ModuleInfo, Goal) :-
    SlotInfo = slot_info(VarTypes, ModuleInfo, no),
    fill_goal_slots(empty_goal_path, SlotInfo, Goal0, Goal).

:- pred fill_goal_slots(goal_path::in, slot_info::in,
    hlds_goal::in, hlds_goal::out) is det.

fill_goal_slots(Path0, SlotInfo,
        hlds_goal(Expr0, Info0), hlds_goal(Expr, Info)) :-
    OmitModeEquivPrefix = SlotInfo ^ slot_info_omit_mode_equiv_prefix,
    (
        OmitModeEquivPrefix = yes,
        PathSteps0 = goal_path_to_list(Path0),
        list.takewhile(mode_equiv_step, PathSteps0, _, PathSteps),
        Path = list_to_goal_path(PathSteps)
    ;
        OmitModeEquivPrefix = no,
        Path = Path0
    ),
    goal_info_set_goal_path(Path, Info0, Info),
    fill_expr_slots(Info, Path0, SlotInfo, Expr0, Expr).

:- pred mode_equiv_step(goal_path_step::in) is semidet.

mode_equiv_step(Step) :-
    ( Step = step_disj(_)
    ; Step = step_neg
    ; Step = step_scope(_)
    ; Step = step_ite_else
    ).

:- pred fill_expr_slots(hlds_goal_info::in, goal_path::in, slot_info::in,
    hlds_goal_expr::in, hlds_goal_expr::out) is det.

fill_expr_slots(GoalInfo, Path0, SlotInfo, GoalExpr0, GoalExpr) :-
    (
        GoalExpr0 = conj(ConjType, Goals0),
        fill_conj_slots(Path0, 0, SlotInfo, Goals0, Goals),
        GoalExpr = conj(ConjType, Goals)
    ;
        GoalExpr0 = disj(Goals0),
        fill_disj_slots(Path0, 0, SlotInfo, Goals0, Goals),
        GoalExpr = disj(Goals)
    ;
        GoalExpr0 = switch(Var, CanFail, Cases0),
        VarTypes = SlotInfo ^ slot_info_vartypes,
        ModuleInfo = SlotInfo ^ slot_info_module_info,
        map.lookup(VarTypes, Var, Type),
        ( switch_type_num_functors(ModuleInfo, Type, NumFunctors) ->
            MaybeNumFunctors = yes(NumFunctors)
        ;
            MaybeNumFunctors = no
        ),
        fill_switch_slots(Path0, 0, MaybeNumFunctors, SlotInfo, Cases0, Cases),
        GoalExpr = switch(Var, CanFail, Cases)
    ;
        GoalExpr0 = negation(SubGoal0),
        fill_goal_slots(goal_path_add_at_end(Path0, step_neg), SlotInfo,
            SubGoal0, SubGoal),
        GoalExpr = negation(SubGoal)
    ;
        GoalExpr0 = scope(Reason, SubGoal0),
        % We should consider not filling in the goal path slots inside
        % from_ground_term_construct scopes, since we do not use them
        % for anything.
        SubGoal0 = hlds_goal(_, InnerInfo),
        OuterDetism = goal_info_get_determinism(GoalInfo),
        InnerDetism = goal_info_get_determinism(InnerInfo),
        ( InnerDetism = OuterDetism ->
            MaybeCut = scope_is_no_cut
        ;
            MaybeCut = scope_is_cut
        ),
        fill_goal_slots(goal_path_add_at_end(Path0, step_scope(MaybeCut)),
            SlotInfo, SubGoal0, SubGoal),
        GoalExpr = scope(Reason, SubGoal)
    ;
        GoalExpr0 = if_then_else(A, Cond0, Then0, Else0),
        fill_goal_slots(goal_path_add_at_end(Path0, step_ite_cond), SlotInfo,
            Cond0, Cond),
        fill_goal_slots(goal_path_add_at_end(Path0, step_ite_then), SlotInfo,
            Then0, Then),
        fill_goal_slots(goal_path_add_at_end(Path0, step_ite_else), SlotInfo,
            Else0, Else),
        GoalExpr = if_then_else(A, Cond, Then, Else)
    ;
        GoalExpr0 = unify(LHS, RHS0, Mode, Kind, Context),
        (
            RHS0 = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
                NonLocals, QuantVars, LambdaModes, Detism, LambdaGoal0),
            fill_goal_slots(Path0, SlotInfo, LambdaGoal0, LambdaGoal),
            RHS = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
                NonLocals, QuantVars, LambdaModes, Detism, LambdaGoal)
        ;
            ( RHS0 = rhs_var(_)
            ; RHS0 = rhs_functor(_, _, _)
            ),
            RHS = RHS0
        ),
        GoalExpr = unify(LHS, RHS,  Mode, Kind, Context)
    ;
        ( GoalExpr0 = plain_call(_, _, _, _, _, _)
        ; GoalExpr0 = generic_call(_, _, _, _)
        ; GoalExpr0 = call_foreign_proc(_, _, _, _, _, _, _)
        ),
        GoalExpr = GoalExpr0
    ;
        GoalExpr0 = shorthand(ShortHand0),
        (
            ShortHand0 = atomic_goal(GoalType, Outer, Inner, MaybeOutputVars,
                MainGoal0, OrElseGoals0, OrElseInners),
            fill_goal_slots(goal_path_add_at_end(Path0, step_atomic_main), 
                SlotInfo, MainGoal0, MainGoal),
            fill_orelse_slots(Path0, 0, SlotInfo, OrElseGoals0, OrElseGoals),
            ShortHand = atomic_goal(GoalType, Outer, Inner, MaybeOutputVars,
                MainGoal, OrElseGoals, OrElseInners)
        ;
            ShortHand0 = try_goal(MaybeIO, ResultVar, SubGoal0),
            fill_goal_slots(Path0, SlotInfo, SubGoal0, SubGoal),
            ShortHand = try_goal(MaybeIO, ResultVar, SubGoal)
        ;
            ShortHand0 = bi_implication(_, _),
            % These should have been expanded out by now.
            unexpected(this_file, "fill_expr_slots: unexpected bi_implication")
        ),
        GoalExpr = shorthand(ShortHand)
    ).

:- pred fill_conj_slots(goal_path::in, int::in, slot_info::in,
    list(hlds_goal)::in, list(hlds_goal)::out) is det.

fill_conj_slots(_, _, _, [], []).
fill_conj_slots(Path0, N0, SlotInfo, [Goal0 | Goals0], [Goal | Goals]) :-
    N1 = N0 + 1,
    fill_goal_slots(goal_path_add_at_end(Path0, step_conj(N1)), SlotInfo, 
        Goal0, Goal),
    fill_conj_slots(Path0, N1, SlotInfo, Goals0, Goals).

:- pred fill_disj_slots(goal_path::in, int::in, slot_info::in,
    list(hlds_goal)::in, list(hlds_goal)::out) is det.

fill_disj_slots(_, _, _, [], []).
fill_disj_slots(Path0, N0, SlotInfo, [Goal0 | Goals0], [Goal | Goals]) :-
    N1 = N0 + 1,
    fill_goal_slots(goal_path_add_at_end(Path0, step_disj(N1)), SlotInfo, 
        Goal0, Goal),
    fill_disj_slots(Path0, N1, SlotInfo, Goals0, Goals).

:- pred fill_switch_slots(goal_path::in, int::in, maybe(int)::in,
    slot_info::in, list(case)::in, list(case)::out) is det.

fill_switch_slots(_, _, _, _, [], []).
fill_switch_slots(Path0, N0, MaybeNumFunctors, SlotInfo,
        [Case0 | Cases0], [Case | Cases]) :-
    Case0 = case(MainConsId, OtherConsIds, Goal0),
    N1 = N0 + 1,
    CasePath = goal_path_add_at_end(Path0, step_switch(N1, MaybeNumFunctors)),
    fill_goal_slots(CasePath, SlotInfo, Goal0, Goal),
    Case = case(MainConsId, OtherConsIds, Goal),
    fill_switch_slots(Path0, N1, MaybeNumFunctors, SlotInfo, Cases0, Cases).

:- pred fill_orelse_slots(goal_path::in, int::in, slot_info::in,
    list(hlds_goal)::in, list(hlds_goal)::out) is det.

fill_orelse_slots(_, _, _, [], []).
fill_orelse_slots(Path0, N0, SlotInfo, [Goal0 | Goals0], [Goal | Goals]) :-
    N1 = N0 + 1,
    fill_goal_slots(goal_path_add_at_end(Path0, step_atomic_orelse(N1)),
        SlotInfo, Goal0, Goal),
    fill_orelse_slots(Path0, N1, SlotInfo, Goals0, Goals).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "goal_path.m".

%-----------------------------------------------------------------------------%
:- end_module goal_path.
%-----------------------------------------------------------------------------%
