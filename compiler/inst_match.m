%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1995-1998, 2000-2010 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: inst_match.m.
% Author: fjh.
%
% This module defines some utility routines for comparing insts that are used
% by modes.m and det_analysis.m.
%
% rafe: XXX The following comment needs revising in the light of
% the new solver types design.
%
% The handling of `any' insts is not complete.  (See also inst_util.m) It
% would be nice to allow `free' to match `any', but right now we only allow a
% few special cases of that.  The reason is that although the mode analysis
% would be pretty straight-forward, generating the correct code is quite a bit
% trickier.  modes.m would have to be changed to handle the implicit
% conversions from `free'/`bound'/`ground' to `any' at
%
%   (1) procedure calls (this is just an extension of implied modes)
%       currently we support only the easy cases of this
%   (2) the end of branched goals
%   (3) the end of predicates.
%
% Since that is not yet done, we currently require the user to insert explicit
% calls to initialize constraint variables.
%
% We do allow `bound' and `ground' to match `any', based on the assumption
% that `bound' and `ground' are represented in the same way as `any', i.e.
% that we use the type system rather than the mode system to distinguish
% between different representations.
%
%-----------------------------------------------------------------------------%

:- module check_hlds.inst_match.
:- interface.

:- import_module hlds.
:- import_module hlds.hlds_module.
:- import_module parse_tree.
:- import_module parse_tree.prog_data.

:- import_module list.

%-----------------------------------------------------------------------------%

    % inst_expand(ModuleInfo, Inst0, Inst) checks if the top-level
    % part of the inst is a defined inst, and if so replaces it
    % with the definition.
    %
:- pred inst_expand(module_info::in, mer_inst::in, mer_inst::out) is det.

    % inst_expand_and_remove_constrained_inst_vars is the same as inst_expand
    % except that it also removes constrained_inst_vars from the top level,
    % replacing them with the constraining inst.
    %
:- pred inst_expand_and_remove_constrained_inst_vars(module_info::in,
    mer_inst::in, mer_inst::out) is det.

%-----------------------------------------------------------------------------%

    % inst_matches_initial(InstA, InstB, Type, ModuleInfo):
    %
    % Succeed iff `InstA' specifies at least as much information as `InstB',
    % and in those parts where they specify the same information, `InstA'
    % is at least as instantiated as `InstB'. Thus, the call
    % inst_matches_initial(not_reached, ground, _) succeeds, since
    % not_reached contains more information than ground - but not vice versa.
    % Similarly, inst_matches_initial(bound(a), bound(a;b), _) should
    % succeed, but not vice versa.
    %
:- pred inst_matches_initial(mer_inst::in, mer_inst::in, mer_type::in,
    module_info::in) is semidet.

    % This version of inst_matches_initial builds up a substitution map
    % (inst_var_sub). For each inst_var which occurs in InstA there will be
    % a substitution to the corresponding inst in InstB.
    %
:- pred inst_matches_initial_sub(mer_inst::in, mer_inst::in, mer_type::in,
    module_info::in, module_info::out, inst_var_sub::in, inst_var_sub::out)
    is semidet.

    % This version of inst_matches_initial does not allow implied modes.
    % This makes it almost the same as inst_matches_final. The only difference
    % is in the way it handles constrained_inst_vars.
    %
:- pred inst_matches_initial_no_implied_modes(mer_inst::in, mer_inst::in,
    mer_type::in, module_info::in) is semidet.

    % A version of the above that also computes the inst_var_sub.
    %
:- pred inst_matches_initial_no_implied_modes_sub(mer_inst::in, mer_inst::in,
    mer_type::in, module_info::in, module_info::out,
    inst_var_sub::in, inst_var_sub::out) is semidet.

    % inst_matches_final(InstA, InstB, ModuleInfo):
    %
    % Succeed iff InstA is compatible with InstB, i.e. iff InstA will satisfy
    % the final inst requirement InstB.  This is true if the information
    % specified by InstA is at least as great as that specified by InstB,
    % and where the information is the same and both insts specify a binding,
    % the binding must be identical.
    %
:- pred inst_matches_final(mer_inst::in, mer_inst::in, module_info::in)
    is semidet.

    % This version of inst_matches_final allows you to pass in the type of the
    % variables being compared.  This allows it to be more precise (i.e. less
    % conservative) for cases such as inst_matches_final(ground(...),
    % bound(...), ...).  This version is to be preferred when the type is
    % available.
    %
:- pred inst_matches_final_typed(mer_inst::in, mer_inst::in, mer_type::in,
    module_info::in) is semidet.

    % The difference between inst_matches_initial and inst_matches_final is
    % that inst_matches_initial requires only something which is at least as
    % instantiated, whereas this predicate wants something which is an exact
    % match (or not reachable).
    %
    % Note that this predicate is not symmetric, because of the existence of
    % `not_reached' insts: not_reached matches_final with anything, but not
    % everything matches_final with not_reached - in fact only not_reached
    % matches_final with not_reached.  It is also asymmetric with respect to
    % unique insts.
    %
    % It might be a good idea to fold inst_matches_initial and
    % inst_matches_final into a single predicate inst_matches(When, ...) where
    % When is either `initial' or `final'.
    %
    % inst_is_at_least_as_instantiated(InstA, InstB, Type, ModuleInfo)
    % succeeds iff InstA is at least as instantiated as InstB. This defines
    % a partial order which is the same as inst_matches_initial except that
    % uniqueness comparisons are reversed and we don't allow
    % inst_is_at_least_as_instantiated(any, any).
    %
:- pred inst_is_at_least_as_instantiated(mer_inst::in, mer_inst::in,
    mer_type::in, module_info::in) is semidet.

    % unique_matches_initial(A, B) succeeds if A >= B in the ordering
    % clobbered < mostly_clobbered < shared < mostly_unique < unique
    %
:- pred unique_matches_initial(uniqueness::in, uniqueness::in) is semidet.

    % unique_matches_final(A, B) succeeds if A >= B in the ordering
    % clobbered < mostly_clobbered < shared < mostly_unique < unique
    %
:- pred unique_matches_final(uniqueness::in, uniqueness::in) is semidet.

    % inst_matches_binding(InstA, InstB, ModuleInfo):
    %
    % Succeed iff the binding of InstA is definitely exactly the same as
    % that of InstB. This is the same as inst_matches_final except that it
    % ignores uniqueness, and that `any' does not match itself.  It is used
    % to check whether variables get bound in negated contexts.
    %
:- pred inst_matches_binding(mer_inst::in, mer_inst::in, mer_type::in,
    module_info::in) is semidet.

    % inst_matches_binding_allow_any_any is the same as
    % inst_matches_binding except that it also allows `any' to match `any'.
    %
:- pred inst_matches_binding_allow_any_any(mer_inst::in, mer_inst::in,
    mer_type::in, module_info::in) is semidet.

%-----------------------------------------------------------------------------%

    % pred_inst_matches(PredInstA, PredInstB, ModuleInfo)
    %
    % Succeeds if PredInstA specifies a pred that can be used wherever and
    % whenever PredInstB could be used. This is true if they both have the
    % same PredOrFunc indicator and the same determinism, and if the arguments
    % match using pred_inst_argmodes_match.
    %
:- pred pred_inst_matches(pred_inst_info::in, pred_inst_info::in,
    module_info::in) is semidet.

%-----------------------------------------------------------------------------%
%
% Predicates to test various properties of insts
%
% NOTE: `not_reached' insts are considered to satisfy all of these predicates
% except inst_is_clobbered.
%

    % succeed if the inst is fully ground (i.e. contains only `ground',
    % `bound', and `not_reached' insts, with no `free' or `any' insts).
    % This predicate succeeds for non-standard function insts so some care
    % needs to be taken since these insts may not be replaced by a less
    % precise inst that uses the higher-order mode information.
    %
:- pred inst_is_ground(module_info::in, mer_inst::in) is semidet.

    % succeed if the inst is not partly free (i.e. contains only `any',
    % `ground', `bound', and `not_reached' insts, with no `free' insts).
    % This predicate succeeds for non-standard function insts so some care
    % needs to be taken since these insts may not be replaced by a less
    % precise inst that uses the higher-order mode information.
    %
:- pred inst_is_ground_or_any(module_info::in, mer_inst::in) is semidet.

    % Succeed if the inst is `mostly_unique' or `unique'.
    %
:- pred inst_is_mostly_unique(module_info::in, mer_inst::in) is semidet.

    % Succeed if the inst is `unique'.
    %
:- pred inst_is_unique(module_info::in, mer_inst::in) is semidet.

    % Succeed if the inst is not `mostly_unique' or `unique'.
    %
:- pred inst_is_not_partly_unique(module_info::in, mer_inst::in) is semidet.

    % Succeed if the inst is not `unique'.
    %
:- pred inst_is_not_fully_unique(module_info::in, mer_inst::in) is semidet.

    % inst_is_clobbered succeeds iff the inst passed is `clobbered'
    % or `mostly_clobbered' or if it is a user-defined inst which
    % is defined as one of those.
    %
:- pred inst_is_clobbered(module_info::in, mer_inst::in) is semidet.

:- pred inst_list_is_ground(list(mer_inst)::in, module_info::in) is semidet.

:- pred inst_list_is_ground_or_any(list(mer_inst)::in, module_info::in)
    is semidet.

:- pred inst_list_is_unique(list(mer_inst)::in, module_info::in) is semidet.

:- pred inst_list_is_mostly_unique(list(mer_inst)::in, module_info::in)
    is semidet.

:- pred inst_list_is_not_partly_unique(list(mer_inst)::in, module_info::in)
    is semidet.

:- pred inst_list_is_not_fully_unique(list(mer_inst)::in, module_info::in)
    is semidet.

:- pred bound_inst_list_is_ground(list(bound_inst)::in, module_info::in)
    is semidet.

:- pred bound_inst_list_is_ground_or_any(list(bound_inst)::in,
    module_info::in) is semidet.

:- pred bound_inst_list_is_unique(list(bound_inst)::in, module_info::in)
    is semidet.

:- pred bound_inst_list_is_mostly_unique(list(bound_inst)::in, module_info::in)
    is semidet.

:- pred bound_inst_list_is_not_partly_unique(list(bound_inst)::in,
    module_info::in) is semidet.

:- pred bound_inst_list_is_not_fully_unique(list(bound_inst)::in,
    module_info::in) is semidet.

    % inst_is_free succeeds iff the inst passed is `free'
    % or is a user-defined inst which is defined as `free'.
    % Abstract insts must not be free.
    %
:- pred inst_is_free(module_info::in, mer_inst::in) is semidet.

:- pred inst_is_any(module_info::in, mer_inst::in) is semidet.

:- pred inst_list_is_free(list(mer_inst)::in, module_info::in) is semidet.

:- pred bound_inst_list_is_free(list(bound_inst)::in, module_info::in)
    is semidet.

    % inst_is_bound succeeds iff the inst passed is not `free'
    % or is a user-defined inst which is not defined as `free'.
    % Abstract insts must be bound.
    %
:- pred inst_is_bound(module_info::in, mer_inst::in) is semidet.

:- pred inst_is_bound_to_functors(module_info::in, mer_inst::in,
    list(bound_inst)::out) is semidet.

%-----------------------------------------------------------------------------%

    % Succeed iff the specified inst contains (directly or indirectly) the
    % specified inst_name.
    %
:- pred inst_contains_instname(mer_inst::in, module_info::in, inst_name::in)
    is semidet.

    % Nondeterministically produce all the inst_vars contained in the
    % specified list of modes.
    %
:- pred mode_list_contains_inst_var(list(mer_mode)::in, module_info::in,
    inst_var::out) is nondet.

    % Given a list of insts, and a corresponding list of livenesses, return
    % true iff for every element in the list of insts, either the elemement is
    % ground or the corresponding element in the liveness list is dead.
    %
:- pred inst_list_is_ground_or_dead(list(mer_inst)::in, list(is_live)::in,
    module_info::in) is semidet.

    % Given a list of insts, and a corresponding list of livenesses, return
    % true iff for every element in the list of insts, either the elemement is
    % ground or any, or the corresponding element in the liveness list is
    % dead.
    %
:- pred inst_list_is_ground_or_any_or_dead(list(mer_inst)::in,
    list(is_live)::in, module_info::in) is semidet.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.inst_util.
:- import_module check_hlds.mode_util.
:- import_module check_hlds.type_util.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_type.

:- import_module bool.
:- import_module int.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module require.
:- import_module set.
:- import_module set_tree234.
:- import_module svset.
:- import_module term.

%-----------------------------------------------------------------------------%

:- type inst_match_inputs
    --->    inst_match_inputs(
                mer_inst,
                mer_inst,
                maybe(mer_type)
            ).

:- type expansions == set_tree234(inst_match_inputs).

:- func expansion_init = expansions.
:- pragma inline(expansion_init/0).

expansion_init = set_tree234.init.

:- pred expansion_member(inst_match_inputs::in, expansions::in) is semidet.
:- pragma inline(expansion_member/2).

expansion_member(E, S) :-
    set_tree234.is_member(S, E) = yes.

:- pred expansion_insert(inst_match_inputs::in,
    expansions::in, expansions::out) is det.
:- pragma inline(expansion_insert/3).

expansion_insert(E, S0, S) :-
    set_tree234.insert(E, S0, S).

inst_expand(ModuleInfo, !Inst) :-
    ( !.Inst = defined_inst(InstName) ->
        inst_lookup(ModuleInfo, InstName, !:Inst),
        inst_expand(ModuleInfo, !Inst)
    ;
        true
    ).

inst_expand_and_remove_constrained_inst_vars(ModuleInfo, !Inst) :-
    ( !.Inst = defined_inst(InstName) ->
        inst_lookup(ModuleInfo, InstName, !:Inst),
        inst_expand(ModuleInfo, !Inst)
    ; !.Inst = constrained_inst_vars(_, !:Inst) ->
        inst_expand(ModuleInfo, !Inst)
    ;
        true
    ).

%-----------------------------------------------------------------------------%

    % The uniqueness_comparison type is used by the predicate
    % compare_uniqueness to determine what order should be used for
    % comparing two uniqueness annotations.

:- type uniqueness_comparison
    --->    match
            % We are doing a "matches" comparison, e.g. at a predicate call
            % or the end of a procedure body.
    ;       instantiated.
            % We are comparing two insts for how "instantiated" they are.
            % The uniqueness order here should be the reverse of the order
            % used for matching.

:- type inst_match_info
    --->    inst_match_info(
                imi_module_info             :: module_info,
                imi_expansions              :: expansions,
                imi_maybe_sub               :: maybe(inst_var_sub),
                imi_calculate_sub           :: calculate_sub,
                imi_uniqueness_comparison   :: uniqueness_comparison,
                imi_any_matches_any         :: bool
            ).

    % The calculate_sub type determines how the inst var substitution
    % should be calculated.
:- type calculate_sub
    --->    forward
            % Calculate in the (normal) forward direction
            % (used by inst_matches_initial).

    ;       reverse
            % Calculate in the reverse direction.  Used by the call
            % to inst_matches_final from pred_inst_argmodes_match
            % to ensure contravariance of the initial argument
            % insts of higher order pred insts.

    ;       none.
            % Do not calculate inst var substitions.

:- func init_inst_match_info(module_info, maybe(inst_var_sub),
    calculate_sub, uniqueness_comparison, bool) = inst_match_info.

init_inst_match_info(ModuleInfo, MaybeSub, CalculateSub, Comparison,
        AnyMatchesAny) =
    inst_match_info(ModuleInfo, expansion_init, MaybeSub, CalculateSub,
        Comparison, AnyMatchesAny).

:- type inst_matches_pred ==
    pred(mer_inst, mer_inst, maybe(mer_type),
        inst_match_info, inst_match_info).
:- inst inst_matches_pred == (pred(in, in, in, in, out) is semidet).

:- pred swap_sub(
    pred(inst_match_info, inst_match_info)::in(pred(in, out) is semidet),
    inst_match_info::in, inst_match_info::out) is semidet.

swap_sub(P, !Info) :-
    CalculateSub = !.Info ^ imi_calculate_sub,
    !Info ^ imi_calculate_sub := swap_calculate_sub(CalculateSub),
    P(!Info),
    !Info ^ imi_calculate_sub := CalculateSub.

:- func swap_calculate_sub(calculate_sub) = calculate_sub.

swap_calculate_sub(forward) = reverse.
swap_calculate_sub(reverse) = forward.
swap_calculate_sub(none) = none.

:- pred swap_args(inst_matches_pred::in(inst_matches_pred),
    mer_inst::in, mer_inst::in, maybe(mer_type)::in,
    inst_match_info::in, inst_match_info::out) is semidet.

swap_args(P, InstA, InstB, Type, !Info) :-
    P(InstB, InstA, Type, !Info).

%-----------------------------------------------------------------------------%

:- pred handle_inst_var_subs(
    inst_matches_pred::in(inst_matches_pred),
    inst_matches_pred::in(inst_matches_pred),
    mer_inst::in, mer_inst::in, maybe(mer_type)::in,
    inst_match_info::in, inst_match_info::out) is semidet.

handle_inst_var_subs(Recurse, Continue, InstA, InstB, Type, !Info) :-
    CalculateSub = !.Info ^ imi_calculate_sub,
    (
        CalculateSub = forward,
        handle_inst_var_subs_2(Recurse, Continue, InstA, InstB,
            Type, !Info)
    ;
        CalculateSub = reverse,
        handle_inst_var_subs_2(swap_args(Recurse), swap_args(Continue),
            InstB, InstA, Type, !Info)
    ;
        CalculateSub = none,
        Continue(InstA, InstB, Type, !Info)
    ).

:- pred handle_inst_var_subs_2(
    inst_matches_pred::in(inst_matches_pred),
    inst_matches_pred::in(inst_matches_pred),
    mer_inst::in, mer_inst::in, maybe(mer_type)::in,
    inst_match_info::in, inst_match_info::out) is semidet.

handle_inst_var_subs_2(Recurse, Continue, InstA, InstB, Type, !Info) :-
    ( InstB = constrained_inst_vars(InstVarsB, InstB1) ->
        % InstB is a constrained_inst_var with upper bound InstB1.
        % We need to check that InstA matches_initial InstB1 and add the
        % appropriate inst_var substitution.
        Recurse(InstA, InstB1, Type, !Info),

        % Call abstractly_unify_inst to calculate the uniqueness of the
        % inst represented by the constrained_inst_var.
        % We pass `Live = is_dead' because we want
        % abstractly_unify(unique, unique) = unique, not shared.
        Live = is_dead,
        ModuleInfo0 = !.Info ^ imi_module_info,
        abstractly_unify_inst(Live, InstA, InstB1, fake_unify,
            Inst, _Det, ModuleInfo0, ModuleInfo),
        !Info ^ imi_module_info := ModuleInfo,
        update_inst_var_sub(InstVarsB, Inst, Type, !Info)
    ; InstA = constrained_inst_vars(_InstVarsA, InstA1) ->
        Recurse(InstA1, InstB, Type, !Info)
    ;
        Continue(InstA, InstB, Type, !Info)
    ).

    % Update the inst_var_sub that is computed by inst_matches_initial.
    % The inst_var_sub records what inst should be substituted for each
    % inst_var that occurs in the called procedure's argument modes.
    %
:- pred update_inst_var_sub(set(inst_var)::in, mer_inst::in,
    maybe(mer_type)::in, inst_match_info::in, inst_match_info::out) is semidet.

update_inst_var_sub(InstVars, InstA, MaybeType, !Info) :-
    (
        !.Info ^ imi_maybe_sub = yes(_),
        set.fold(update_inst_var_sub_2(InstA, MaybeType), InstVars, !Info)
    ;
        !.Info ^ imi_maybe_sub = no
    ).

:- pred update_inst_var_sub_2(mer_inst::in, maybe(mer_type)::in, inst_var::in,
    inst_match_info::in, inst_match_info::out) is semidet.

update_inst_var_sub_2(InstA, MaybeType, InstVar, !Info) :-
    (
        !.Info ^ imi_maybe_sub = yes(InstVarSub0),
        ( map.search(InstVarSub0, InstVar, InstB) ->
            % If InstVar already has an inst associated with it, merge
            % the old inst and the new inst. Fail if this merge is not
            % possible.
            ModuleInfo0 = !.Info ^ imi_module_info,
            inst_merge(InstA, InstB, MaybeType, Inst,
                ModuleInfo0, ModuleInfo),
            !Info ^ imi_module_info := ModuleInfo,
            map.det_update(InstVarSub0, InstVar, Inst, InstVarSub),
            !Info ^ imi_maybe_sub := yes(InstVarSub)
        ;
            map.det_insert(InstVarSub0, InstVar, InstA, InstVarSub),
            !Info ^ imi_maybe_sub := yes(InstVarSub)
        )
    ;
        !.Info ^ imi_maybe_sub = no,
        map.det_insert(map.init, InstVar, InstA, InstVarSub),
        !Info ^ imi_maybe_sub := yes(InstVarSub)
    ).

%-----------------------------------------------------------------------------%

inst_matches_initial(InstA, InstB, Type, ModuleInfo) :-
    inst_matches_initial_1(InstA, InstB, Type, ModuleInfo, _, no, _).

inst_matches_initial_sub(InstA, InstB, Type, !ModuleInfo, !Sub) :-
    inst_matches_initial_1(InstA, InstB, Type, !ModuleInfo,
        yes(!.Sub), MaybeSub),
    (
        MaybeSub = yes(!:Sub)
    ;
        MaybeSub = no,
        unexpected(this_file, "inst_matches_initial_sub: missing inst_var_sub")
    ).

inst_matches_initial_no_implied_modes(InstA, InstB, Type, ModuleInfo) :-
    Info0 = init_inst_match_info(ModuleInfo, no, forward, match, yes),
    inst_matches_final_2(InstA, InstB, yes(Type), Info0, _).

inst_matches_initial_no_implied_modes_sub(InstA, InstB, Type,
        !ModuleInfo, !Sub) :-
    Info0 = init_inst_match_info(!.ModuleInfo, yes(!.Sub), forward,
        match, yes),
    inst_matches_final_2(InstA, InstB, yes(Type), Info0, Info),
    !:ModuleInfo = Info ^ imi_module_info,
    yes(!:Sub) = Info ^ imi_maybe_sub.

:- pred inst_matches_initial_1(mer_inst::in, mer_inst::in, mer_type::in,
    module_info::in, module_info::out,
    maybe(inst_var_sub)::in, maybe(inst_var_sub)::out) is semidet.

inst_matches_initial_1(InstA, InstB, Type, !ModuleInfo, !MaybeSub) :-
    Info0 = init_inst_match_info(!.ModuleInfo, !.MaybeSub, forward,
        match, yes),
    inst_matches_initial_2(InstA, InstB, yes(Type), Info0, Info),
    !:ModuleInfo = Info ^ imi_module_info,
    !:MaybeSub = Info ^ imi_maybe_sub.

:- pred inst_matches_initial_2(mer_inst::in, mer_inst::in, maybe(mer_type)::in,
    inst_match_info::in, inst_match_info::out) is semidet.

inst_matches_initial_2(InstA, InstB, MaybeType, !Info) :-
    ThisExpansion = inst_match_inputs(InstA, InstB, MaybeType),
    Expansions0 = !.Info ^ imi_expansions,
    ( expansion_member(ThisExpansion, Expansions0) ->
        true
    ;
        inst_expand(!.Info ^ imi_module_info, InstA, InstA2),
        inst_expand(!.Info ^ imi_module_info, InstB, InstB2),
        expansion_insert(ThisExpansion, Expansions0, Expansions),
        !Info ^ imi_expansions := Expansions,
        handle_inst_var_subs(inst_matches_initial_2, inst_matches_initial_4,
            InstA2, InstB2, MaybeType, !Info)
    ).

:- pred inst_matches_initial_4(mer_inst::in, mer_inst::in, maybe(mer_type)::in,
    inst_match_info::in, inst_match_info::out) is semidet.

    % To avoid infinite regress, we assume that inst_matches_initial is true
    % for any pairs of insts which occur in `Expansions'.
inst_matches_initial_4(any(UniqA, HOInstInfoA), any(UniqB, HOInstInfoB), Type,
        !Info) :-
    !.Info ^ imi_any_matches_any = yes,
    compare_uniqueness(!.Info ^ imi_uniqueness_comparison, UniqA, UniqB),
    ho_inst_info_matches_initial(HOInstInfoA, HOInstInfoB, UniqB, Type, !Info).
inst_matches_initial_4(any(_, _), free, _, !Info).
inst_matches_initial_4(any(UniqA, HOInstInfoA), ground(_, _)@InstB, Type,
        !Info) :-
    maybe_any_to_bound(Type, !.Info ^ imi_module_info, UniqA,
        HOInstInfoA, InstA),
    inst_matches_initial_2(InstA, InstB, Type, !Info).
inst_matches_initial_4(any(UniqA, HOInstInfoA), bound(_, _)@InstB, Type,
        !Info) :-
    maybe_any_to_bound(Type, !.Info ^ imi_module_info, UniqA,
        HOInstInfoA, InstA),
    inst_matches_initial_2(InstA, InstB, Type, !Info).
inst_matches_initial_4(free, free, _, !Info).
inst_matches_initial_4(bound(UniqA, ListA), any(UniqB, none), _, !Info) :-
    compare_uniqueness(!.Info ^ imi_uniqueness_comparison, UniqA, UniqB),
    compare_bound_inst_list_uniq(!.Info ^ imi_uniqueness_comparison,
        ListA, UniqB, !.Info ^ imi_module_info).
inst_matches_initial_4(bound(_Uniq, _List), free, _, !Info).
inst_matches_initial_4(bound(UniqA, ListA), bound(UniqB, ListB), Type,
        !Info) :-
    compare_uniqueness(!.Info ^ imi_uniqueness_comparison, UniqA, UniqB),
    bound_inst_list_matches_initial(ListA, ListB, Type, !Info).
inst_matches_initial_4(bound(UniqA, ListA), ground(UniqB, none), Type,
        !Info) :-
    compare_uniqueness(!.Info ^ imi_uniqueness_comparison, UniqA, UniqB),
    bound_inst_list_is_ground(ListA, Type, !.Info ^ imi_module_info),
    compare_bound_inst_list_uniq(!.Info ^ imi_uniqueness_comparison,
        ListA, UniqB, !.Info ^ imi_module_info).
inst_matches_initial_4(bound(Uniq, List), abstract_inst(_,_), _, !Info) :-
    Uniq = unique,
    bound_inst_list_is_ground(List, !.Info ^ imi_module_info),
    bound_inst_list_is_unique(List, !.Info ^ imi_module_info).
inst_matches_initial_4(bound(Uniq, List), abstract_inst(_,_), _, !Info) :-
    Uniq = mostly_unique,
    bound_inst_list_is_ground(List, !.Info ^ imi_module_info),
    bound_inst_list_is_mostly_unique(List, !.Info ^ imi_module_info).
inst_matches_initial_4(ground(UniqA, HOInstInfoA), any(UniqB, HOInstInfoB),
        Type, !Info) :-
    compare_uniqueness(!.Info ^ imi_uniqueness_comparison, UniqA, UniqB),
    ho_inst_info_matches_initial(HOInstInfoA, HOInstInfoB, UniqB, Type, !Info).
inst_matches_initial_4(ground(_Uniq, _PredInst), free, _, !Info).
inst_matches_initial_4(ground(UniqA, _GII_A), bound(UniqB, ListB), MaybeType,
        !Info) :-
    MaybeType = yes(Type),
    % We can only check this case properly if the type is known.
    compare_uniqueness(!.Info ^ imi_uniqueness_comparison, UniqA, UniqB),
    bound_inst_list_is_complete_for_type(set.init, !.Info ^ imi_module_info,
        ListB, Type),
    ground_matches_initial_bound_inst_list(UniqA, ListB, yes(Type),
        !Info).
inst_matches_initial_4(ground(UniqA, HOInstInfoA),
        ground(UniqB, HOInstInfoB), Type, !Info) :-
    compare_uniqueness(!.Info ^ imi_uniqueness_comparison, UniqA, UniqB),
    ho_inst_info_matches_initial(HOInstInfoA, HOInstInfoB, UniqB, Type, !Info).
inst_matches_initial_4(ground(_UniqA, none), abstract_inst(_,_), _, !Info) :-
    % I don't know what this should do.
    % Abstract insts aren't really supported.
    unexpected(this_file, "inst_matches_initial(ground, abstract_inst) == ??").
inst_matches_initial_4(abstract_inst(_,_), any(shared, none), _, !Info).
inst_matches_initial_4(abstract_inst(_,_), free, _, !Info).
inst_matches_initial_4(abstract_inst(Name, ArgsA), abstract_inst(Name, ArgsB),
        _Type, !Info) :-
    list.duplicate(length(ArgsA), no, MaybeTypes),
    % XXX how do we get the argument types for an abstract inst?
    inst_list_matches_initial(ArgsA, ArgsB, MaybeTypes, !Info).
inst_matches_initial_4(not_reached, _, _, !Info).

%-----------------------------------------------------------------------------%

    % This predicate assumes that the check of
    % `bound_inst_list_is_complete_for_type' is done by the caller.
    %
:- pred ground_matches_initial_bound_inst_list(uniqueness::in,
    list(bound_inst)::in, maybe(mer_type)::in,
    inst_match_info::in, inst_match_info::out) is semidet.

ground_matches_initial_bound_inst_list(_, [], _, !Info).
ground_matches_initial_bound_inst_list(Uniq,
        [bound_functor(ConsId, Args) | List], MaybeType, !Info) :-
    maybe_get_cons_id_arg_types(!.Info ^ imi_module_info, MaybeType, ConsId,
        list.length(Args), MaybeTypes),
    ground_matches_initial_inst_list(Uniq, Args, MaybeTypes, !Info),
    ground_matches_initial_bound_inst_list(Uniq, List, MaybeType, !Info).

:- pred ground_matches_initial_inst_list(uniqueness::in, list(mer_inst)::in,
    list(maybe(mer_type))::in, inst_match_info::in, inst_match_info::out)
    is semidet.

ground_matches_initial_inst_list(_, [], [], !Info).
ground_matches_initial_inst_list(Uniq, [Inst | Insts], [Type | Types],
        !Info) :-
    inst_matches_initial_2(ground(Uniq, none), Inst, Type, !Info),
    ground_matches_initial_inst_list(Uniq, Insts, Types, !Info).

%-----------------------------------------------------------------------------%

    % A list(bound_inst) is ``complete'' for a given type iff it includes
    % each functor of the type and each argument of each functor is also
    % ``complete'' for its type.
    %
:- pred bound_inst_list_is_complete_for_type(set(inst_name)::in,
    module_info::in, list(bound_inst)::in, mer_type::in) is semidet.

bound_inst_list_is_complete_for_type(Expansions, ModuleInfo, BoundInsts,
        Type) :-
    % Is this a type for which cons_ids are recorded in the type_table?
    type_util.cons_id_arg_types(ModuleInfo, Type, _, _),

    % Is there a bound_inst for each cons_id in the type_table?
    all [ConsId, ArgTypes] (
        type_util.cons_id_arg_types(ModuleInfo, Type, ConsId, ArgTypes)
    =>
        (
            list.member(bound_functor(ConsId0, ArgInsts), BoundInsts),
            % Cons_ids returned from type_util.cons_id_arg_types
            % are not module-qualified, so we need to call
            % equivalent_cons_ids instead of just using `=/2'.
            equivalent_cons_ids(ConsId0, ConsId),
            list.map(inst_is_complete_for_type(Expansions, ModuleInfo),
                ArgInsts, ArgTypes)
        )
    ).

:- pred inst_is_complete_for_type(set(inst_name)::in, module_info::in,
    mer_inst::in, mer_type::in) is semidet.

inst_is_complete_for_type(Expansions, ModuleInfo, Inst, Type) :-
    ( Inst = defined_inst(Name) ->
        ( set.member(Name, Expansions) ->
            true
        ;
            inst_lookup(ModuleInfo, Name, ExpandedInst),
            inst_is_complete_for_type(Expansions `set.insert` Name,
                ModuleInfo, ExpandedInst, Type)
        )
    ; Inst = bound(_, List) ->
        bound_inst_list_is_complete_for_type(Expansions, ModuleInfo,
            List, Type)
    ;
        Inst \= not_reached
    ).

    % Check that the first cons_id is lexically greater than the
    % second, after all module qualifiers have been removed.
    %
:- pred greater_than_disregard_module_qual(cons_id::in, cons_id::in)
    is semidet.

greater_than_disregard_module_qual(ConsIdA, ConsIdB) :-
    (
        ConsIdA = cons(QNameA, ArityA, _),
        ConsIdB = cons(QNameB, ArityB, _)
    ->
        ( QNameA = unqualified(NameA)
        ; QNameA = qualified(_, NameA)
        ),
        ( QNameB = unqualified(NameB)
        ; QNameB = qualified(_, NameB)
        ),
        compare(O, NameA, NameB),
        (
            O = (>)
        ;
            O = (=),
            ArityA > ArityB
        )
    ;
        compare((>), ConsIdA, ConsIdB)
    ).

%-----------------------------------------------------------------------------%

    % This predicate checks if two ho_inst_infos match_initial.
    % It does not check uniqueness.
    %
:- pred ho_inst_info_matches_initial(ho_inst_info::in,
    ho_inst_info::in, uniqueness::in, maybe(mer_type)::in,
    inst_match_info::in, inst_match_info::out) is semidet.

ho_inst_info_matches_initial(HOInstInfoA, none, _, _, !Info) :-
    \+ ho_inst_info_is_nonstandard_func_mode(!.Info ^ imi_module_info,
        HOInstInfoA).
ho_inst_info_matches_initial(none, higher_order(PredInstB), _, Type, !Info) :-
    PredInstB = pred_inst_info(pf_function, ArgModes, _Det),
    Arity = list.length(ArgModes),
    PredInstA = pred_inst_info_standard_func_mode(Arity),
    pred_inst_matches_2(PredInstA, PredInstB, Type, !Info).
ho_inst_info_matches_initial(higher_order(PredInstA), higher_order(PredInstB),
        _, MaybeType, !Info) :-
    pred_inst_matches_2(PredInstA, PredInstB, MaybeType, !Info).

pred_inst_matches(PredInstA, PredInstB, ModuleInfo) :-
    pred_inst_matches_1(PredInstA, PredInstB, no, ModuleInfo).

:- pred pred_inst_matches_1(pred_inst_info::in, pred_inst_info::in,
    maybe(mer_type)::in, module_info::in) is semidet.

pred_inst_matches_1(PredInstA, PredInstB, MaybeType, ModuleInfo) :-
    Info0 = init_inst_match_info(ModuleInfo, no, none, match, yes),
    pred_inst_matches_2(PredInstA, PredInstB, MaybeType, Info0, _).

    % pred_inst_matches_2(PredInstA, PredInstB, !Info)
    %
    % Same as pred_inst_matches/3, except that it updates the inst_var_sub
    % in the inst_match_info, and that any inst pairs in !.Info ^ expansions
    % are assumed to match_final each other. (This avoids infinite loops
    % when calling inst_matches_final on higher-order recursive insts.)
    %
:- pred pred_inst_matches_2(pred_inst_info::in, pred_inst_info::in,
    maybe(mer_type)::in, inst_match_info::in, inst_match_info::out) is semidet.

pred_inst_matches_2(pred_inst_info(PredOrFunc, ModesA, Det),
        pred_inst_info(PredOrFunc, ModesB, Det), MaybeType, !Info) :-
    maybe_get_higher_order_arg_types(MaybeType, length(ModesA),
        MaybeTypes),
    pred_inst_argmodes_matches(ModesA, ModesB, MaybeTypes, !Info).

    % pred_inst_argmodes_matches(ModesA, ModesB, !Info):
    %
    % succeeds if the initial insts of ModesB specify at least as
    % much information as, and the same binding as, the initial
    % insts of ModesA; and the final insts of ModesA specify at
    % least as much information as, and the same binding as, the
    % final insts of ModesB.  Any inst pairs in Inst0 ^ expansions
    % are assumed to match_final each other.
    %
    % (In other words, as far as subtyping goes it is contravariant in
    % the initial insts, and covariant in the final insts;
    % as far as binding goes, it is invariant for both.)
    %
:- pred pred_inst_argmodes_matches(list(mer_mode)::in, list(mer_mode)::in,
    list(maybe(mer_type))::in, inst_match_info::in, inst_match_info::out)
    is semidet.

pred_inst_argmodes_matches([], [], [], !Info).
pred_inst_argmodes_matches([ModeA | ModeAs], [ModeB | ModeBs],
        [MaybeType | MaybeTypes], !Info) :-
    ModuleInfo = !.Info ^ imi_module_info,
    mode_get_insts(ModuleInfo, ModeA, InitialA, FinalA),
    mode_get_insts(ModuleInfo, ModeB, InitialB, FinalB),
    swap_sub(inst_matches_final_2(InitialB, InitialA, MaybeType), !Info),
    inst_matches_final_2(FinalA, FinalB, MaybeType, !Info),
    pred_inst_argmodes_matches(ModeAs, ModeBs, MaybeTypes, !Info).

%-----------------------------------------------------------------------------%

    % Determine what kind of uniqueness comparison we are doing and then do it.
    % If we are doing a "match" then call unique_matches_initial to do the
    % comparison. If we are comparing "instantiatedness" then the uniqueness
    % comparison is the reverse of when we are doing a match so call
    % unique_matches_initial with the arguments reversed.
    %
:- pred compare_uniqueness(uniqueness_comparison::in,
    uniqueness::in, uniqueness::in) is semidet.

compare_uniqueness(match, InstA, InstB) :-
    unique_matches_initial(InstA, InstB).
compare_uniqueness(instantiated, InstA, InstB) :-
    unique_matches_initial(InstB, InstA).

unique_matches_initial(unique, _).
unique_matches_initial(mostly_unique, mostly_unique).
unique_matches_initial(mostly_unique, shared).
unique_matches_initial(mostly_unique, mostly_clobbered).
unique_matches_initial(mostly_unique, clobbered).
unique_matches_initial(shared, shared).
unique_matches_initial(shared, mostly_clobbered).
unique_matches_initial(shared, clobbered).
unique_matches_initial(mostly_clobbered, mostly_clobbered).
unique_matches_initial(mostly_clobbered, clobbered).
unique_matches_initial(clobbered, clobbered).

unique_matches_final(A, B) :-
    unique_matches_initial(A, B).

%-----------------------------------------------------------------------------%

:- pred compare_bound_inst_list_uniq(uniqueness_comparison::in,
    list(bound_inst)::in, uniqueness::in, module_info::in) is semidet.

compare_bound_inst_list_uniq(match, List, Uniq, ModuleInfo) :-
    bound_inst_list_matches_uniq(List, Uniq, ModuleInfo).
compare_bound_inst_list_uniq(instantiated, List, Uniq, ModuleInfo) :-
    uniq_matches_bound_inst_list(Uniq, List, ModuleInfo).

:- pred bound_inst_list_matches_uniq(list(bound_inst)::in, uniqueness::in,
    module_info::in) is semidet.

bound_inst_list_matches_uniq(List, Uniq, ModuleInfo) :-
    ( Uniq = unique ->
        bound_inst_list_is_unique(List, ModuleInfo)
    ; Uniq = mostly_unique ->
        bound_inst_list_is_mostly_unique(List, ModuleInfo)
    ;
        true
    ).

:- pred uniq_matches_bound_inst_list(uniqueness::in, list(bound_inst)::in,
    module_info::in) is semidet.

uniq_matches_bound_inst_list(Uniq, List, ModuleInfo) :-
    ( Uniq = shared ->
        bound_inst_list_is_not_partly_unique(List, ModuleInfo)
    ; Uniq = mostly_unique ->
        bound_inst_list_is_not_fully_unique(List, ModuleInfo)
    ;
        true
    ).

%-----------------------------------------------------------------------------%

    % Here we check that the functors in the first list are a subset of the
    % functors in the second list. (If a bound(...) inst only specifies the
    % insts for some of the constructors of its type, then it implicitly means
    % that all other constructors must have all their arguments `not_reached'.)
    % The code here makes use of the fact that the bound_inst lists are sorted.
    %
:- pred bound_inst_list_matches_initial(list(bound_inst)::in,
    list(bound_inst)::in, maybe(mer_type)::in,
    inst_match_info::in, inst_match_info::out) is semidet.

bound_inst_list_matches_initial([], _, _, !Info).
bound_inst_list_matches_initial([X | Xs], [Y | Ys], MaybeType, !Info) :-
    X = bound_functor(ConsIdX, ArgsX),
    Y = bound_functor(ConsIdY, ArgsY),
    ( equivalent_cons_ids(ConsIdX, ConsIdY) ->
        maybe_get_cons_id_arg_types(!.Info ^ imi_module_info, MaybeType,
            ConsIdX, list.length(ArgsX), MaybeTypes),
        inst_list_matches_initial(ArgsX, ArgsY, MaybeTypes, !Info),
        bound_inst_list_matches_initial(Xs, Ys, MaybeType, !Info)
    ;
        greater_than_disregard_module_qual(ConsIdX, ConsIdY),
        % ConsIdY does not occur in [X | Xs].
        % Hence [X | Xs] implicitly specifies `not_reached' for the args
        % of ConsIdY, and hence automatically matches_initial Y. We just
        % need to check that [X | Xs] matches_initial Ys.
        bound_inst_list_matches_initial([X | Xs], Ys, MaybeType, !Info)
    ).

:- pred inst_list_matches_initial(list(mer_inst)::in, list(mer_inst)::in,
    list(maybe(mer_type))::in, inst_match_info::in, inst_match_info::out)
    is semidet.

inst_list_matches_initial([], [], [], !Info).
inst_list_matches_initial([X | Xs], [Y | Ys], [Type | Types], !Info) :-
    inst_matches_initial_2(X, Y, Type, !Info),
    inst_list_matches_initial(Xs, Ys, Types, !Info).

%-----------------------------------------------------------------------------%

inst_matches_final(InstA, InstB, ModuleInfo) :-
    Info0 = init_inst_match_info(ModuleInfo, no, none, match, yes),
    inst_matches_final_2(InstA, InstB, no, Info0, _).

inst_matches_final_typed(InstA, InstB, Type, ModuleInfo) :-
    Info0 = init_inst_match_info(ModuleInfo, no, none, match, yes),
    inst_matches_final_2(InstA, InstB, yes(Type), Info0, _).

:- pred inst_matches_final_2(mer_inst::in, mer_inst::in, maybe(mer_type)::in,
    inst_match_info::in, inst_match_info::out) is semidet.

inst_matches_final_2(InstA, InstB, MaybeType, !Info) :-
    ThisExpansion = inst_match_inputs(InstA, InstB, MaybeType),
    Expansions0 = !.Info ^ imi_expansions,
    ( expansion_member(ThisExpansion, Expansions0) ->
        true
    ; InstA = InstB ->
        true
    ;
        inst_expand(!.Info ^ imi_module_info, InstA, InstA2),
        inst_expand(!.Info ^ imi_module_info, InstB, InstB2),
        expansion_insert(ThisExpansion, Expansions0, Expansions),
        !Info ^ imi_expansions := Expansions,
        handle_inst_var_subs(inst_matches_final_2, inst_matches_final_3,
            InstA2, InstB2, MaybeType, !Info)
    ).

:- pred inst_matches_final_3(mer_inst::in, mer_inst::in, maybe(mer_type)::in,
    inst_match_info::in, inst_match_info::out) is semidet.

inst_matches_final_3(any(UniqA, HOInstInfoA), any(UniqB, HOInstInfoB), Type,
        !Info) :-
    ho_inst_info_matches_final(HOInstInfoA, HOInstInfoB, Type, !Info),
    unique_matches_final(UniqA, UniqB).
inst_matches_final_3(any(UniqA, HOInstInfoA), ground(_, _)@InstB, Type,
        !Info) :-
    maybe_any_to_bound(Type, !.Info ^ imi_module_info, UniqA,
        HOInstInfoA, InstA),
    inst_matches_final_2(InstA, InstB, Type, !Info).
inst_matches_final_3(any(UniqA, HOInstInfoA), bound(_, _)@InstB, Type, !Info) :-
    maybe_any_to_bound(Type, !.Info ^ imi_module_info, UniqA,
        HOInstInfoA, InstA),
    inst_matches_final_2(InstA, InstB, Type, !Info).
inst_matches_final_3(free, any(Uniq, _), _, !Info) :-
    % We do not yet allow `free' to match `any',
    % unless the `any' is `clobbered_any' or `mostly_clobbered_any'.
    % Among other things, changing this would break compare_inst
    % in modecheck_call.m.
    ( Uniq = clobbered ; Uniq = mostly_clobbered ).
inst_matches_final_3(free, free, _, !Info).
inst_matches_final_3(bound(UniqA, ListA), any(UniqB, none), _, !Info) :-
    unique_matches_final(UniqA, UniqB),
    bound_inst_list_matches_uniq(ListA, UniqB, !.Info ^ imi_module_info),
    % We do not yet allow `free' to match `any'.
    % Among other things, changing this would break compare_inst
    % in modecheck_call.m.
    bound_inst_list_is_ground_or_any(ListA, !.Info ^ imi_module_info).
inst_matches_final_3(bound(UniqA, ListA), bound(UniqB, ListB), MaybeType,
        !Info) :-
    unique_matches_final(UniqA, UniqB),
    bound_inst_list_matches_final(ListA, ListB, MaybeType, !Info).
inst_matches_final_3(bound(UniqA, ListA), ground(UniqB, none), Type,
        !Info) :-
    unique_matches_final(UniqA, UniqB),
    bound_inst_list_is_ground(ListA, Type, !.Info ^ imi_module_info),
    bound_inst_list_matches_uniq(ListA, UniqB, !.Info ^ imi_module_info).
inst_matches_final_3(ground(UniqA, HOInstInfoA), any(UniqB, HOInstInfoB),
        MaybeType, !Info) :-
    ho_inst_info_matches_final(HOInstInfoA, HOInstInfoB, MaybeType, !Info),
    unique_matches_final(UniqA, UniqB).
inst_matches_final_3(ground(UniqA, HOInstInfoA), bound(UniqB, ListB),
        MaybeType, !Info) :-
    ModuleInfo = !.Info ^ imi_module_info,
    \+ ho_inst_info_is_nonstandard_func_mode(ModuleInfo, HOInstInfoA),
    unique_matches_final(UniqA, UniqB),
    bound_inst_list_is_ground(ListB, MaybeType, ModuleInfo),
    uniq_matches_bound_inst_list(UniqA, ListB, ModuleInfo),
    (
        MaybeType = yes(Type),
        % We can only do this check if the type is known.
        bound_inst_list_is_complete_for_type(set.init, ModuleInfo, ListB, Type)
    ;
        true
        % XXX enabling the check for bound_inst_list_is_complete
        % for type makes the mode checker too conservative in
        % the absence of alias tracking, so we currently always
        % succeed, even if this check fails.
    ).
inst_matches_final_3(ground(UniqA, HOInstInfoA), ground(UniqB, HOInstInfoB),
        MaybeType, !Info) :-
    ho_inst_info_matches_final(HOInstInfoA, HOInstInfoB, MaybeType, !Info),
    unique_matches_final(UniqA, UniqB).
inst_matches_final_3(abstract_inst(_, _), any(shared, none), _, !Info).
inst_matches_final_3(abstract_inst(Name, ArgsA), abstract_inst(Name, ArgsB),
        _MaybeType, !Info) :-
    list.duplicate(length(ArgsA), no, MaybeTypes),
    % XXX how do we get the argument types for an abstract inst?
    inst_list_matches_final(ArgsA, ArgsB, MaybeTypes, !Info).
inst_matches_final_3(not_reached, _, _, !Info).
inst_matches_final_3(constrained_inst_vars(InstVarsA, InstA), InstB, MaybeType,
        !Info) :-
    ( InstB = constrained_inst_vars(InstVarsB, InstB1) ->
        % Constrained_inst_vars match_final only if InstVarsA contains
        % all the variables in InstVarsB.
        InstVarsB `set.subset` InstVarsA,
        inst_matches_final_2(InstA, InstB1, MaybeType, !Info)
    ;
        inst_matches_final_2(InstA, InstB, MaybeType, !Info)
    ).

:- pred ho_inst_info_matches_final(ho_inst_info::in, ho_inst_info::in,
    maybe(mer_type)::in, inst_match_info::in, inst_match_info::out) is semidet.

ho_inst_info_matches_final(HOInstInfoA, none, _, !Info) :-
    \+ ho_inst_info_is_nonstandard_func_mode(!.Info ^ imi_module_info,
        HOInstInfoA).
ho_inst_info_matches_final(none, higher_order(PredInstB), Type, !Info) :-
    PredInstB = pred_inst_info(pf_function, ArgModes, _Det),
    Arity = list.length(ArgModes),
    PredInstA = pred_inst_info_standard_func_mode(Arity),
    pred_inst_matches_2(PredInstA, PredInstB, Type, !Info).
ho_inst_info_matches_final(higher_order(PredInstA),
        higher_order(PredInstB), MaybeType, !Info) :-
    pred_inst_matches_2(PredInstA, PredInstB, MaybeType, !Info).

:- pred inst_list_matches_final(list(mer_inst)::in, list(mer_inst)::in,
    list(maybe(mer_type))::in, inst_match_info::in, inst_match_info::out)
    is semidet.

inst_list_matches_final([], [], [], !Info).
inst_list_matches_final([ArgA | ArgsA], [ArgB | ArgsB], [Type | Types],
        !Info) :-
    inst_matches_final_2(ArgA, ArgB, Type, !Info),
    inst_list_matches_final(ArgsA, ArgsB, Types, !Info).

    % Here we check that the functors in the first list are a subset of the
    % functors in the second list. (If a bound(...) inst only specifies
    % the insts for some of the constructors of its type, then it implicitly
    % means that all other constructors must have all their arguments
    % `not_reached'.) The code here makes use of the fact that the bound_inst
    % lists are sorted.
    %
:- pred bound_inst_list_matches_final(list(bound_inst)::in,
    list(bound_inst)::in, maybe(mer_type)::in,
    inst_match_info::in, inst_match_info::out) is semidet.

bound_inst_list_matches_final([], _, _, !Info).
bound_inst_list_matches_final([X | Xs], [Y | Ys], MaybeType, !Info) :-
    X = bound_functor(ConsIdX, ArgsX),
    Y = bound_functor(ConsIdY, ArgsY),
    ( equivalent_cons_ids(ConsIdX, ConsIdY) ->
        maybe_get_cons_id_arg_types(!.Info ^ imi_module_info, MaybeType,
            ConsIdX, list.length(ArgsX), MaybeTypes),
        inst_list_matches_final(ArgsX, ArgsY, MaybeTypes, !Info),
        bound_inst_list_matches_final(Xs, Ys, MaybeType, !Info)
    ;
        greater_than_disregard_module_qual(ConsIdX, ConsIdY),
        % ConsIdY does not occur in [X | Xs].
        % Hence [X | Xs] implicitly specifies `not_reached' for the args
        % of ConsIdY, and hence automatically matches_final Y. We just
        % need to check that [X | Xs] matches_final Ys.
        bound_inst_list_matches_final([X | Xs], Ys, MaybeType, !Info)
    ).

inst_is_at_least_as_instantiated(InstA, InstB, Type, ModuleInfo) :-
    Info = init_inst_match_info(ModuleInfo, no, none, instantiated, no),
    inst_matches_initial_2(InstA, InstB, yes(Type), Info, _).

inst_matches_binding(InstA, InstB, Type, ModuleInfo) :-
    Info0 = init_inst_match_info(ModuleInfo, no, none, match, no),
    inst_matches_binding_2(InstA, InstB, yes(Type), Info0, _).

inst_matches_binding_allow_any_any(InstA, InstB, Type, ModuleInfo) :-
    Info0 = init_inst_match_info(ModuleInfo, no, none, match, yes),
    inst_matches_binding_2(InstA, InstB, yes(Type), Info0, _).

:- pred inst_matches_binding_2(mer_inst::in, mer_inst::in, maybe(mer_type)::in,
    inst_match_info::in, inst_match_info::out) is semidet.

inst_matches_binding_2(InstA, InstB, MaybeType, !Info) :-
    ThisExpansion = inst_match_inputs(InstA, InstB, MaybeType),
    Expansions0 = !.Info ^ imi_expansions,
    ( expansion_member(ThisExpansion, Expansions0) ->
        true
    ;
        inst_expand_and_remove_constrained_inst_vars(!.Info ^ imi_module_info,
            InstA, InstA2),
        inst_expand_and_remove_constrained_inst_vars(!.Info ^ imi_module_info,
            InstB, InstB2),
        expansion_insert(ThisExpansion, Expansions0, Expansions),
        !Info ^ imi_expansions := Expansions,
        inst_matches_binding_3(InstA2, InstB2, MaybeType, !Info)
    ).

:- pred inst_matches_binding_3(mer_inst::in, mer_inst::in, maybe(mer_type)::in,
    inst_match_info::in, inst_match_info::out) is semidet.

% Note that `any' is *not* considered to match `any' unless
% Info ^ any_matches_any = yes or the type is not a solver type (and does not
% contain any solver types).
inst_matches_binding_3(free, free, _, !Info).
inst_matches_binding_3(any(UniqA, HOInstInfoA), any(UniqB, HOInstInfoB), Type,
        !Info) :-
    AnyMatchesAny = !.Info ^ imi_any_matches_any,
    (
        AnyMatchesAny = yes,
        ho_inst_info_matches_final(HOInstInfoA, HOInstInfoB, Type, !Info)
    ;
        AnyMatchesAny = no,
        maybe_any_to_bound(Type, !.Info ^ imi_module_info, UniqA, HOInstInfoA,
            InstA),
        maybe_any_to_bound(Type, !.Info ^ imi_module_info, UniqB, HOInstInfoB,
            InstB),
        inst_matches_binding_2(InstA, InstB, Type, !Info)
    ).
inst_matches_binding_3(any(UniqA, HOInstInfoA), ground(_, _)@InstB, Type,
        !Info) :-
    maybe_any_to_bound(Type, !.Info ^ imi_module_info, UniqA,
        HOInstInfoA, InstA),
    inst_matches_binding_2(InstA, InstB, Type, !Info).
inst_matches_binding_3(any(UniqA, HOInstInfoA), bound(_, _)@InstB, Type,
        !Info) :-
    maybe_any_to_bound(Type, !.Info ^ imi_module_info, UniqA,
        HOInstInfoA, InstA),
    inst_matches_binding_2(InstA, InstB, Type, !Info).
inst_matches_binding_3(ground(_, _)@InstA, any(UniqB, HOInstInfoB), Type,
        !Info) :-
    maybe_any_to_bound(Type, !.Info ^ imi_module_info, UniqB,
        HOInstInfoB, InstB),
    inst_matches_binding_2(InstA, InstB, Type, !Info).
inst_matches_binding_3(bound(_, _)@InstA, any(UniqB, HOInstInfoB), Type,
        !Info) :-
    maybe_any_to_bound(Type, !.Info ^ imi_module_info, UniqB,
        HOInstInfoB, InstB),
    inst_matches_binding_2(InstA, InstB, Type, !Info).
inst_matches_binding_3(bound(_UniqA, ListA), bound(_UniqB, ListB), MaybeType,
        !Info) :-
    bound_inst_list_matches_binding(ListA, ListB, MaybeType, !Info).
inst_matches_binding_3(bound(_UniqA, ListA), ground(_UniqB, none), Type,
        !Info) :-
    bound_inst_list_is_ground(ListA, Type, !.Info ^ imi_module_info).
inst_matches_binding_3(ground(_UniqA, _), bound(_UniqB, ListB), MaybeType,
        !Info) :-
    bound_inst_list_is_ground(ListB, MaybeType, !.Info ^ imi_module_info),
    (
        MaybeType = yes(Type),
        % We can only do this check if the type is known.
        bound_inst_list_is_complete_for_type(set.init,
            !.Info ^ imi_module_info, ListB, Type)
    ;
        true
        % XXX enabling the check for bound_inst_list_is_complete
        % for type makes the mode checker too conservative in
        % the absence of alias tracking, so we currently always
        % succeed, even if this check fails.
    ).
inst_matches_binding_3(ground(_UniqA, HOInstInfoA),
        ground(_UniqB, HOInstInfoB), MaybeType, !Info) :-
    ho_inst_info_matches_binding(HOInstInfoA, HOInstInfoB, MaybeType,
        !.Info ^ imi_module_info).
inst_matches_binding_3(abstract_inst(Name, ArgsA), abstract_inst(Name, ArgsB),
        _MaybeType, !Info) :-
    list.duplicate(length(ArgsA), no, MaybeTypes),
    % XXX how do we get the argument types for an abstract inst?
    inst_list_matches_binding(ArgsA, ArgsB, MaybeTypes, !Info).
inst_matches_binding_3(not_reached, _, _, !Info).

:- pred ho_inst_info_matches_binding(ho_inst_info::in, ho_inst_info::in,
    maybe(mer_type)::in, module_info::in) is semidet.

ho_inst_info_matches_binding(_, none, _, _).
ho_inst_info_matches_binding(none, higher_order(PredInstB), MaybeType,
        ModuleInfo) :-
    PredInstB = pred_inst_info(pf_function, ArgModes, _Det),
    Arity = list.length(ArgModes),
    PredInstA = pred_inst_info_standard_func_mode(Arity),
    pred_inst_matches_1(PredInstA, PredInstB, MaybeType, ModuleInfo).
ho_inst_info_matches_binding(higher_order(PredInstA),
        higher_order(PredInstB), MaybeType, ModuleInfo) :-
    pred_inst_matches_1(PredInstA, PredInstB, MaybeType, ModuleInfo).

:- pred inst_list_matches_binding(list(mer_inst)::in, list(mer_inst)::in,
    list(maybe(mer_type))::in, inst_match_info::in, inst_match_info::out)
    is semidet.

inst_list_matches_binding([], [], [], !Info).
inst_list_matches_binding([ArgA | ArgsA], [ArgB | ArgsB],
        [MaybeType | MaybeTypes], !Info) :-
    inst_matches_binding_2(ArgA, ArgB, MaybeType, !Info),
    inst_list_matches_binding(ArgsA, ArgsB, MaybeTypes, !Info).

    % Here we check that the functors in the first list are a subset of the
    % functors in the second list. (If a bound(...) inst only specifies
    % the insts for some of the constructors of its type, then it implicitly
    % means that all other constructors must have all their arguments
    % `not_reached'.) The code here makes use of the fact that the bound_inst
    % lists are sorted.
    %
:- pred bound_inst_list_matches_binding(list(bound_inst)::in,
    list(bound_inst)::in, maybe(mer_type)::in,
    inst_match_info::in, inst_match_info::out) is semidet.

bound_inst_list_matches_binding([], _, _, !Info).
bound_inst_list_matches_binding([X | Xs], [Y | Ys], MaybeType, !Info) :-
    X = bound_functor(ConsIdX, ArgsX),
    Y = bound_functor(ConsIdY, ArgsY),
    ( equivalent_cons_ids(ConsIdX, ConsIdY) ->
        maybe_get_cons_id_arg_types(!.Info ^ imi_module_info, MaybeType,
            ConsIdX, list.length(ArgsX), MaybeTypes),
        inst_list_matches_binding(ArgsX, ArgsY, MaybeTypes, !Info),
        bound_inst_list_matches_binding(Xs, Ys, MaybeType, !Info)
    ;
        greater_than_disregard_module_qual(ConsIdX, ConsIdY),
        % ConsIdX does not occur in [X | Xs].
        % Hence [X | Xs] implicitly specifies `not_reached' for the args
        % of ConsIdY, and hence automatically matches_binding Y. We just
        % need to check that [X | Xs] matches_binding Ys.
        bound_inst_list_matches_binding([X | Xs], Ys, MaybeType, !Info)
    ).

%-----------------------------------------------------------------------------%

inst_is_clobbered(_, not_reached) :- fail.
inst_is_clobbered(_, any(mostly_clobbered, _)).
inst_is_clobbered(_, any(clobbered, _)).
inst_is_clobbered(_, ground(clobbered, _)).
inst_is_clobbered(_, ground(mostly_clobbered, _)).
inst_is_clobbered(_, bound(clobbered, _)).
inst_is_clobbered(_, bound(mostly_clobbered, _)).
inst_is_clobbered(_, inst_var(_)) :-
    unexpected(this_file, "internal error: uninstantiated inst parameter").
inst_is_clobbered(ModuleInfo, constrained_inst_vars(_, Inst)) :-
    inst_is_clobbered(ModuleInfo, Inst).
inst_is_clobbered(ModuleInfo, defined_inst(InstName)) :-
    inst_lookup(ModuleInfo, InstName, Inst),
    inst_is_clobbered(ModuleInfo, Inst).

inst_is_free(_, free).
inst_is_free(_, free(_Type)).
inst_is_free(_, inst_var(_)) :-
    unexpected(this_file, "internal error: uninstantiated inst parameter").
inst_is_free(ModuleInfo, constrained_inst_vars(_, Inst)) :-
    inst_is_free(ModuleInfo, Inst).
inst_is_free(ModuleInfo, defined_inst(InstName)) :-
    inst_lookup(ModuleInfo, InstName, Inst),
    inst_is_free(ModuleInfo, Inst).

inst_is_any(_, any(_, _)).
inst_is_any(_, inst_var(_)) :-
    unexpected(this_file, "internal error: uninstantiated inst parameter").
inst_is_any(ModuleInfo, constrained_inst_vars(_, Inst)) :-
    inst_is_any(ModuleInfo, Inst).
inst_is_any(ModuleInfo, defined_inst(InstName)) :-
    inst_lookup(ModuleInfo, InstName, Inst),
    inst_is_any(ModuleInfo, Inst).

inst_is_bound(_, not_reached).
inst_is_bound(_, any(_, _)).
inst_is_bound(_, ground(_, _)).
inst_is_bound(_, bound(_, _)).
inst_is_bound(_, inst_var(_)) :-
    unexpected(this_file, "internal error: uninstantiated inst parameter").
inst_is_bound(ModuleInfo, constrained_inst_vars(_, Inst)) :-
    inst_is_bound(ModuleInfo, Inst).
inst_is_bound(ModuleInfo, defined_inst(InstName)) :-
    inst_lookup(ModuleInfo, InstName, Inst),
    inst_is_bound(ModuleInfo, Inst).
inst_is_bound(_, abstract_inst(_, _)).

    % inst_is_bound_to_functors succeeds iff the inst passed is
    % `bound(_Uniq, Functors)' or is a user-defined inst which expands to
    % `bound(_Uniq, Functors)'.
    %
inst_is_bound_to_functors(_, bound(_Uniq, Functors), Functors).
inst_is_bound_to_functors(_, inst_var(_), _) :-
    unexpected(this_file, "internal error: uninstantiated inst parameter").
inst_is_bound_to_functors(ModuleInfo, constrained_inst_vars(_, Inst),
        Functors) :-
    inst_is_bound_to_functors(ModuleInfo, Inst, Functors).
inst_is_bound_to_functors(ModuleInfo, defined_inst(InstName), Functors) :-
    inst_lookup(ModuleInfo, InstName, Inst),
    inst_is_bound_to_functors(ModuleInfo, Inst, Functors).

%-----------------------------------------------------------------------------%

    % inst_is_ground succeeds iff the inst passed is `ground' or the
    % equivalent. Abstract insts are not considered ground.
    %
inst_is_ground(ModuleInfo, Inst) :-
    inst_is_ground(ModuleInfo, no, Inst).

:- pred inst_is_ground(module_info::in, maybe(mer_type)::in, mer_inst::in)
    is semidet.

inst_is_ground(ModuleInfo, MaybeType, Inst) :-
    Expansions0 = set_tree234.init,
    inst_is_ground_1(ModuleInfo, MaybeType, Inst, Expansions0, _Expansions).

    % The third arg is the set of insts which have already been expanded;
    % we use this to avoid going into an infinite loop.
    %
:- pred inst_is_ground_1(module_info::in, maybe(mer_type)::in, mer_inst::in,
    set_tree234(mer_inst)::in, set_tree234(mer_inst)::out) is semidet.

inst_is_ground_1(ModuleInfo, MaybeType, Inst, !Expansions) :-
    ( set_tree234.contains(!.Expansions, Inst) ->
        true
    ;
        ( Inst \= any(_, _) ->
            set_tree234.insert(Inst, !Expansions)
        ;
            true
        ),
        inst_is_ground_2(ModuleInfo, MaybeType, Inst, !Expansions)
    ).

:- pred inst_is_ground_2(module_info::in, maybe(mer_type)::in, mer_inst::in,
    set_tree234(mer_inst)::in, set_tree234(mer_inst)::out) is semidet.

inst_is_ground_2(_, _, not_reached, !Expansions).
inst_is_ground_2(ModuleInfo, MaybeType, bound(_, List), !Expansions) :-
    bound_inst_list_is_ground_2(List, MaybeType, ModuleInfo, !Expansions).
inst_is_ground_2(_, _, ground(_, _), !Expansions).
inst_is_ground_2(_, _, inst_var(_), !Expansions) :-
    unexpected(this_file, "internal error: uninstantiated inst parameter").
inst_is_ground_2(ModuleInfo, MaybeType, Inst, !Expansions) :-
    Inst = constrained_inst_vars(_, Inst2),
    inst_is_ground_1(ModuleInfo, MaybeType, Inst2, !Expansions).
inst_is_ground_2(ModuleInfo, MaybeType, Inst, !Expansions) :-
    Inst = defined_inst(InstName),
    inst_lookup(ModuleInfo, InstName, Inst2),
    inst_is_ground_1(ModuleInfo, MaybeType, Inst2, !Expansions).
inst_is_ground_2(ModuleInfo, MaybeType, any(Uniq, HOInstInfo), !Expansions) :-
    maybe_any_to_bound(MaybeType, ModuleInfo, Uniq, HOInstInfo, Inst),
    inst_is_ground_1(ModuleInfo, MaybeType, Inst, !Expansions).

    % inst_is_ground_or_any succeeds iff the inst passed is `ground',
    % `any', or the equivalent.  Fails for abstract insts.
    %
inst_is_ground_or_any(ModuleInfo, Inst) :-
    set.init(Expansions0),
    inst_is_ground_or_any_2(ModuleInfo, Inst, Expansions0, _Expansions).

    % The third arg is the set of insts which have already been expanded;
    % we use this to avoid going into an infinite loop.
    %
:- pred inst_is_ground_or_any_2(module_info::in, mer_inst::in,
    set(mer_inst)::in, set(mer_inst)::out) is semidet.

inst_is_ground_or_any_2(_, not_reached, !Expansions).
inst_is_ground_or_any_2(ModuleInfo, bound(_, List), !Expansions) :-
    bound_inst_list_is_ground_or_any_2(List, ModuleInfo, !Expansions).
inst_is_ground_or_any_2(_, ground(_, _), !Expansions).
inst_is_ground_or_any_2(_, any(_, _), !Expansions).
inst_is_ground_or_any_2(_, inst_var(_), !Expansions) :-
    unexpected(this_file, "internal error: uninstantiated inst parameter").
inst_is_ground_or_any_2(ModuleInfo, Inst, !Expansions) :-
    Inst = constrained_inst_vars(_, Inst2),
    inst_is_ground_or_any_2(ModuleInfo, Inst2, !Expansions).
inst_is_ground_or_any_2(ModuleInfo, Inst, !Expansions) :-
    Inst = defined_inst(InstName),
    ( set.member(Inst, !.Expansions) ->
        true
    ;
        svset.insert(Inst, !Expansions),
        inst_lookup(ModuleInfo, InstName, Inst2),
        inst_is_ground_or_any_2(ModuleInfo, Inst2, !Expansions)
    ).

    % inst_is_unique succeeds iff the inst passed is unique or free.
    % Abstract insts are not considered unique.
    %
inst_is_unique(ModuleInfo, Inst) :-
    set.init(Expansions0),
    inst_is_unique_2(ModuleInfo, Inst, Expansions0, _Expansions).

    % The third arg is the set of insts which have already been expanded;
    % we use this to avoid going into an infinite loop.
    %
:- pred inst_is_unique_2(module_info::in, mer_inst::in,
    set(mer_inst)::in, set(mer_inst)::out) is semidet.

inst_is_unique_2(_, not_reached, !Expansions).
inst_is_unique_2(ModuleInfo, bound(unique, List), !Expansions) :-
    bound_inst_list_is_unique_2(List, ModuleInfo, !Expansions).
inst_is_unique_2(_, any(unique, _), !Expansions).
inst_is_unique_2(_, free, !Expansions).
inst_is_unique_2(_, ground(unique, _), !Expansions).
inst_is_unique_2(_, inst_var(_), !Expansions) :-
    unexpected(this_file, "internal error: uninstantiated inst parameter").
inst_is_unique_2(ModuleInfo, Inst, !Expansions) :-
    Inst = constrained_inst_vars(_, Inst2),
    inst_is_unique_2(ModuleInfo, Inst2, !Expansions).
inst_is_unique_2(ModuleInfo, Inst, !Expansions) :-
    Inst = defined_inst(InstName),
    ( set.member(Inst, !.Expansions) ->
        true
    ;
        svset.insert(Inst, !Expansions),
        inst_lookup(ModuleInfo, InstName, Inst2),
        inst_is_unique_2(ModuleInfo, Inst2, !Expansions)
    ).

    % inst_is_mostly_unique succeeds iff the inst passed is unique,
    % mostly_unique, or free. Abstract insts are not considered unique.
    %
inst_is_mostly_unique(ModuleInfo, Inst) :-
    set.init(Expansions0),
    inst_is_mostly_unique_2(ModuleInfo, Inst, Expansions0, _Expansions).

    % The third arg is the set of insts which have already been expanded;
    % we use this to avoid going into an infinite loop.
    %
:- pred inst_is_mostly_unique_2(module_info::in, mer_inst::in,
    set(mer_inst)::in, set(mer_inst)::out) is semidet.

inst_is_mostly_unique_2(_, not_reached, !Expansions).
inst_is_mostly_unique_2(ModuleInfo, bound(unique, List), !Expansions) :-
    bound_inst_list_is_mostly_unique_2(List, ModuleInfo, !Expansions).
inst_is_mostly_unique_2(ModuleInfo, bound(mostly_unique, List), !Expansions) :-
    bound_inst_list_is_mostly_unique_2(List, ModuleInfo, !Expansions).
inst_is_mostly_unique_2(_, any(unique, _), !Expansions).
inst_is_mostly_unique_2(_, any(mostly_unique, _), !Expansions).
inst_is_mostly_unique_2(_, free, !Expansions).
inst_is_mostly_unique_2(_, ground(unique, _), !Expansions).
inst_is_mostly_unique_2(_, ground(mostly_unique, _), !Expansions).
inst_is_mostly_unique_2(_, inst_var(_), !Expansions) :-
    unexpected(this_file, "internal error: uninstantiated inst parameter").
inst_is_mostly_unique_2(ModuleInfo, Inst, !Expansions) :-
    Inst = constrained_inst_vars(_, Inst2),
    inst_is_mostly_unique_2(ModuleInfo, Inst2, !Expansions).
inst_is_mostly_unique_2(ModuleInfo, Inst, !Expansions) :-
    Inst = defined_inst(InstName),
    ( set.member(Inst, !.Expansions) ->
        true
    ;
        svset.insert(Inst, !Expansions),
        inst_lookup(ModuleInfo, InstName, Inst2),
        inst_is_mostly_unique_2(ModuleInfo, Inst2, !Expansions)
    ).

    % inst_is_not_partly_unique succeeds iff the inst passed is not unique
    % or mostly_unique, i.e. if it is shared free. It fails for abstract insts.
    %
inst_is_not_partly_unique(ModuleInfo, Inst) :-
    set.init(Expansions0),
    inst_is_not_partly_unique_2(ModuleInfo, Inst, Expansions0, _Expansions).

    % The third arg is the set of insts which have already been expanded;
    % we use this to avoid going into an infinite loop.
    %
:- pred inst_is_not_partly_unique_2(module_info::in, mer_inst::in,
    set(mer_inst)::in, set(mer_inst)::out) is semidet.

inst_is_not_partly_unique_2(_, not_reached, !Expansions).
inst_is_not_partly_unique_2(ModuleInfo, bound(shared, List), !Expansions) :-
    bound_inst_list_is_not_partly_unique_2(List, ModuleInfo, !Expansions).
inst_is_not_partly_unique_2(_, free, !Expansions).
inst_is_not_partly_unique_2(_, any(shared, _), !Expansions).
inst_is_not_partly_unique_2(_, ground(shared, _), !Expansions).
inst_is_not_partly_unique_2(_, inst_var(_), !Expansions) :-
    unexpected(this_file, "internal error: uninstantiated inst parameter").
inst_is_not_partly_unique_2(ModuleInfo, Inst, !Expansions) :-
    Inst = constrained_inst_vars(_, Inst2),
    inst_is_not_partly_unique_2(ModuleInfo, Inst2, !Expansions).
inst_is_not_partly_unique_2(ModuleInfo, Inst, !Expansions) :-
    Inst = defined_inst(InstName),
    ( set.member(Inst, !.Expansions) ->
        true
    ;
        svset.insert(Inst, !Expansions),
        inst_lookup(ModuleInfo, InstName, Inst2),
        inst_is_not_partly_unique_2(ModuleInfo, Inst2, !Expansions)
    ).

    % inst_is_not_fully_unique succeeds iff the inst passed is not unique,
    % i.e. if it is mostly_unique, shared, or free.  It fails for abstract
    % insts.
    %
inst_is_not_fully_unique(ModuleInfo, Inst) :-
    set.init(Expansions0),
    inst_is_not_fully_unique_2(ModuleInfo, Inst, Expansions0, _Expansions).

    % The third arg is the set of insts which have already been expanded - we
    % use this to avoid going into an infinite loop.
    %
:- pred inst_is_not_fully_unique_2(module_info::in, mer_inst::in,
    set(mer_inst)::in, set(mer_inst)::out) is semidet.

inst_is_not_fully_unique_2(_, not_reached, !Expansions).
inst_is_not_fully_unique_2(ModuleInfo, bound(shared, List),
        !Expansions) :-
    bound_inst_list_is_not_fully_unique_2(List, ModuleInfo,
        !Expansions).
inst_is_not_fully_unique_2(ModuleInfo, bound(mostly_unique, List),
        !Expansions) :-
    bound_inst_list_is_not_fully_unique_2(List, ModuleInfo,
        !Expansions).
inst_is_not_fully_unique_2(_, any(shared, _), !Expansions).
inst_is_not_fully_unique_2(_, any(mostly_unique, _), !Expansions).
inst_is_not_fully_unique_2(_, free, !Expansions).
inst_is_not_fully_unique_2(_, ground(shared, _), !Expansions).
inst_is_not_fully_unique_2(_, ground(mostly_unique, _), !Expansions).
inst_is_not_fully_unique_2(_, inst_var(_), _, _) :-
    unexpected(this_file, "internal error: uninstantiated inst parameter").
inst_is_not_fully_unique_2(ModuleInfo, Inst, !Expansions) :-
    Inst = constrained_inst_vars(_, Inst2),
    inst_is_not_fully_unique_2(ModuleInfo, Inst2, !Expansions).
inst_is_not_fully_unique_2(ModuleInfo, Inst, !Expansions) :-
    Inst = defined_inst(InstName),
    ( set.member(Inst, !.Expansions) ->
        true
    ;
        svset.insert(Inst, !Expansions),
        inst_lookup(ModuleInfo, InstName, Inst2),
        inst_is_not_fully_unique_2(ModuleInfo, Inst2, !Expansions)
    ).

%-----------------------------------------------------------------------------%

bound_inst_list_is_ground(BoundInsts, ModuleInfo) :-
    bound_inst_list_is_ground(BoundInsts, no, ModuleInfo).

:- pred bound_inst_list_is_ground(list(bound_inst)::in, maybe(mer_type)::in,
    module_info::in) is semidet.

bound_inst_list_is_ground([], _, _).
bound_inst_list_is_ground([bound_functor(Name, Args) | BoundInsts], MaybeType,
        ModuleInfo) :-
    maybe_get_cons_id_arg_types(ModuleInfo, MaybeType, Name,
        list.length(Args), MaybeTypes),
    inst_list_is_ground(Args, MaybeTypes, ModuleInfo),
    bound_inst_list_is_ground(BoundInsts, MaybeType, ModuleInfo).

bound_inst_list_is_ground_or_any([], _).
bound_inst_list_is_ground_or_any([bound_functor(_Name, Args) | BoundInsts],
        ModuleInfo) :-
    inst_list_is_ground_or_any(Args, ModuleInfo),
    bound_inst_list_is_ground_or_any(BoundInsts, ModuleInfo).

bound_inst_list_is_unique([], _).
bound_inst_list_is_unique([bound_functor(_Name, Args) | BoundInsts],
        ModuleInfo) :-
    inst_list_is_unique(Args, ModuleInfo),
    bound_inst_list_is_unique(BoundInsts, ModuleInfo).

bound_inst_list_is_mostly_unique([], _).
bound_inst_list_is_mostly_unique([bound_functor(_Name, Args) | BoundInsts],
        ModuleInfo) :-
    inst_list_is_mostly_unique(Args, ModuleInfo),
    bound_inst_list_is_mostly_unique(BoundInsts, ModuleInfo).

bound_inst_list_is_not_partly_unique([], _).
bound_inst_list_is_not_partly_unique([bound_functor(_Name, Args) | BoundInsts],
        ModuleInfo) :-
    inst_list_is_not_partly_unique(Args, ModuleInfo),
    bound_inst_list_is_not_partly_unique(BoundInsts, ModuleInfo).

bound_inst_list_is_not_fully_unique([], _).
bound_inst_list_is_not_fully_unique([bound_functor(_Name, Args) | BoundInsts],
        ModuleInfo) :-
    inst_list_is_not_fully_unique(Args, ModuleInfo),
    bound_inst_list_is_not_fully_unique(BoundInsts, ModuleInfo).

%-----------------------------------------------------------------------------%

:- pred bound_inst_list_is_ground_2(list(bound_inst)::in, maybe(mer_type)::in,
    module_info::in, set_tree234(mer_inst)::in, set_tree234(mer_inst)::out)
    is semidet.

bound_inst_list_is_ground_2([], _, _, !Expansions).
bound_inst_list_is_ground_2([bound_functor(Name, Args) | BoundInsts],
        MaybeType, ModuleInfo, !Expansions) :-
    maybe_get_cons_id_arg_types(ModuleInfo, MaybeType, Name,
        list.length(Args), MaybeTypes),
    inst_list_is_ground_2(Args, MaybeTypes, ModuleInfo, !Expansions),
    bound_inst_list_is_ground_2(BoundInsts, MaybeType, ModuleInfo,
        !Expansions).

:- pred bound_inst_list_is_ground_or_any_2(list(bound_inst)::in,
    module_info::in, set(mer_inst)::in, set(mer_inst)::out) is semidet.

bound_inst_list_is_ground_or_any_2([], _, !Expansions).
bound_inst_list_is_ground_or_any_2([bound_functor(_Name, Args) | BoundInsts],
        ModuleInfo, !Expansions) :-
    inst_list_is_ground_or_any_2(Args, ModuleInfo, !Expansions),
    bound_inst_list_is_ground_or_any_2(BoundInsts, ModuleInfo, !Expansions).

:- pred bound_inst_list_is_unique_2(list(bound_inst)::in, module_info::in,
    set(mer_inst)::in, set(mer_inst)::out) is semidet.

bound_inst_list_is_unique_2([], _, !Expansions).
bound_inst_list_is_unique_2([bound_functor(_Name, Args) | BoundInsts],
        ModuleInfo, !Expansions) :-
    inst_list_is_unique_2(Args, ModuleInfo, !Expansions),
    bound_inst_list_is_unique_2(BoundInsts, ModuleInfo, !Expansions).

:- pred bound_inst_list_is_mostly_unique_2(list(bound_inst)::in,
    module_info::in, set(mer_inst)::in, set(mer_inst)::out) is semidet.

bound_inst_list_is_mostly_unique_2([], _, !Expansions).
bound_inst_list_is_mostly_unique_2([bound_functor(_Name, Args) | BoundInsts],
        ModuleInfo, !Expansions) :-
    inst_list_is_mostly_unique_2(Args, ModuleInfo, !Expansions),
    bound_inst_list_is_mostly_unique_2(BoundInsts, ModuleInfo,
        !Expansions).

:- pred bound_inst_list_is_not_partly_unique_2(list(bound_inst)::in,
    module_info::in, set(mer_inst)::in, set(mer_inst)::out) is semidet.

bound_inst_list_is_not_partly_unique_2([], _, !Expansions).
bound_inst_list_is_not_partly_unique_2(
        [bound_functor(_Name, Args) | BoundInsts], ModuleInfo, !Expansions) :-
    inst_list_is_not_partly_unique_2(Args, ModuleInfo, !Expansions),
    bound_inst_list_is_not_partly_unique_2(BoundInsts, ModuleInfo,
        !Expansions).

:- pred bound_inst_list_is_not_fully_unique_2(list(bound_inst)::in,
    module_info::in, set(mer_inst)::in, set(mer_inst)::out) is semidet.

bound_inst_list_is_not_fully_unique_2([], _, !Expansions).
bound_inst_list_is_not_fully_unique_2(
        [bound_functor(_Name, Args) | BoundInsts], ModuleInfo, !Expansions) :-
    inst_list_is_not_fully_unique_2(Args, ModuleInfo, !Expansions),
    bound_inst_list_is_not_fully_unique_2(BoundInsts, ModuleInfo,
        !Expansions).

%-----------------------------------------------------------------------------%

inst_list_is_ground(Insts, ModuleInfo) :-
    MaybeTypes = list.duplicate(list.length(Insts), no),
    inst_list_is_ground(Insts, MaybeTypes, ModuleInfo).

:- pred inst_list_is_ground(list(mer_inst)::in, list(maybe(mer_type))::in,
    module_info::in) is semidet.

inst_list_is_ground([], [], _).
inst_list_is_ground([Inst | Insts], [MaybeType | MaybeTypes], ModuleInfo) :-
    inst_is_ground(ModuleInfo, MaybeType, Inst),
    inst_list_is_ground(Insts, MaybeTypes, ModuleInfo).

inst_list_is_ground_or_any([], _).
inst_list_is_ground_or_any([Inst | Insts], ModuleInfo) :-
    inst_is_ground_or_any(ModuleInfo, Inst),
    inst_list_is_ground_or_any(Insts, ModuleInfo).

inst_list_is_unique([], _).
inst_list_is_unique([Inst | Insts], ModuleInfo) :-
    inst_is_unique(ModuleInfo, Inst),
    inst_list_is_unique(Insts, ModuleInfo).

inst_list_is_mostly_unique([], _).
inst_list_is_mostly_unique([Inst | Insts], ModuleInfo) :-
    inst_is_mostly_unique(ModuleInfo, Inst),
    inst_list_is_mostly_unique(Insts, ModuleInfo).

inst_list_is_not_partly_unique([], _).
inst_list_is_not_partly_unique([Inst | Insts], ModuleInfo) :-
    inst_is_not_partly_unique(ModuleInfo, Inst),
    inst_list_is_not_partly_unique(Insts, ModuleInfo).

inst_list_is_not_fully_unique([], _).
inst_list_is_not_fully_unique([Inst | Insts], ModuleInfo) :-
    inst_is_not_fully_unique(ModuleInfo, Inst),
    inst_list_is_not_fully_unique(Insts, ModuleInfo).

%-----------------------------------------------------------------------------%

:- pred inst_list_is_ground_2(list(mer_inst)::in, list(maybe(mer_type))::in,
    module_info::in, set_tree234(mer_inst)::in, set_tree234(mer_inst)::out)
    is semidet.

inst_list_is_ground_2([], [], _, !Expansions).
inst_list_is_ground_2([], [_ | _], _, !Expansions) :-
    unexpected(this_file, "inst_list_is_ground_2: list length mismatch").
inst_list_is_ground_2([_ | _], [], _, !Expansions) :-
    unexpected(this_file, "inst_list_is_ground_2: list length mismatch").
inst_list_is_ground_2([Inst | Insts], [MaybeType | MaybeTypes], ModuleInfo,
        !Expansions) :-
    inst_is_ground_1(ModuleInfo, MaybeType, Inst, !Expansions),
    inst_list_is_ground_2(Insts, MaybeTypes, ModuleInfo, !Expansions).

:- pred inst_list_is_ground_or_any_2(list(mer_inst)::in, module_info::in,
    set(mer_inst)::in, set(mer_inst)::out) is semidet.

inst_list_is_ground_or_any_2([], _, !Expansions).
inst_list_is_ground_or_any_2([Inst | Insts], ModuleInfo, !Expansions) :-
    inst_is_ground_or_any_2(ModuleInfo, Inst, !Expansions),
    inst_list_is_ground_or_any_2(Insts, ModuleInfo, !Expansions).

:- pred inst_list_is_unique_2(list(mer_inst)::in, module_info::in,
    set(mer_inst)::in, set(mer_inst)::out) is semidet.

inst_list_is_unique_2([], _, !Expansions).
inst_list_is_unique_2([Inst | Insts], ModuleInfo, !Expansions) :-
    inst_is_unique_2(ModuleInfo, Inst, !Expansions),
    inst_list_is_unique_2(Insts, ModuleInfo, !Expansions).

:- pred inst_list_is_mostly_unique_2(list(mer_inst)::in, module_info::in,
    set(mer_inst)::in, set(mer_inst)::out) is semidet.

inst_list_is_mostly_unique_2([], _, !Expansions).
inst_list_is_mostly_unique_2([Inst | Insts], ModuleInfo, !Expansions) :-
    inst_is_mostly_unique_2(ModuleInfo, Inst, !Expansions),
    inst_list_is_mostly_unique_2(Insts, ModuleInfo, !Expansions).

:- pred inst_list_is_not_partly_unique_2(list(mer_inst)::in, module_info::in,
    set(mer_inst)::in, set(mer_inst)::out) is semidet.

inst_list_is_not_partly_unique_2([], _, !Expansions).
inst_list_is_not_partly_unique_2([Inst | Insts], ModuleInfo, !Expansions) :-
    inst_is_not_partly_unique_2(ModuleInfo, Inst, !Expansions),
    inst_list_is_not_partly_unique_2(Insts, ModuleInfo, !Expansions).

:- pred inst_list_is_not_fully_unique_2(list(mer_inst)::in, module_info::in,
    set(mer_inst)::in, set(mer_inst)::out) is semidet.

inst_list_is_not_fully_unique_2([], _, !Expansions).
inst_list_is_not_fully_unique_2([Inst | Insts], ModuleInfo, !Expansions) :-
    inst_is_not_fully_unique_2(ModuleInfo, Inst, !Expansions),
    inst_list_is_not_fully_unique_2(Insts, ModuleInfo, !Expansions).

%-----------------------------------------------------------------------------%

bound_inst_list_is_free([], _).
bound_inst_list_is_free([bound_functor(_Name, Args) | BoundInsts],
        ModuleInfo) :-
    inst_list_is_free(Args, ModuleInfo),
    bound_inst_list_is_free(BoundInsts, ModuleInfo).

inst_list_is_free([], _).
inst_list_is_free([Inst | Insts], ModuleInfo) :-
    inst_is_free(ModuleInfo, Inst),
    inst_list_is_free(Insts, ModuleInfo).

%-----------------------------------------------------------------------------%

inst_list_is_ground_or_dead([], [], _).
inst_list_is_ground_or_dead([Inst | Insts], [Live | Lives], ModuleInfo) :-
    (
        Live = is_live,
        inst_is_ground(ModuleInfo, Inst)
    ;
        Live = is_dead
    ),
    inst_list_is_ground_or_dead(Insts, Lives, ModuleInfo).

inst_list_is_ground_or_any_or_dead([], [], _).
inst_list_is_ground_or_any_or_dead([Inst | Insts], [Live | Lives],
        ModuleInfo) :-
    (
        Live = is_live,
        inst_is_ground_or_any(ModuleInfo, Inst)
    ;
        Live = is_dead
    ),
    inst_list_is_ground_or_any_or_dead(Insts, Lives, ModuleInfo).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

inst_contains_instname(Inst, ModuleInfo, InstName) :-
    set.init(Expansions0),
    inst_contains_instname_2(Inst, ModuleInfo, InstName, yes,
        Expansions0, _Expansions).

:- type inst_names == set(inst_name).

:- pred inst_contains_instname_2(mer_inst::in, module_info::in, inst_name::in,
    bool::out, inst_names::in, inst_names::out) is det.

inst_contains_instname_2(abstract_inst(_, _), _, _, no, !Expansions).
inst_contains_instname_2(any(_, _), _, _, no, !Expansions).
inst_contains_instname_2(free, _, _, no, !Expansions).
inst_contains_instname_2(free(_T), _, _, no, !Expansions).
inst_contains_instname_2(ground(_Uniq, _), _, _, no, !Expansions).
inst_contains_instname_2(inst_var(_), _, _, no, !Expansions).
inst_contains_instname_2(not_reached, _, _, no, !Expansions).
inst_contains_instname_2(constrained_inst_vars(_, Inst), ModuleInfo, InstName,
        Result, !Expansions) :-
    inst_contains_instname_2(Inst, ModuleInfo, InstName, Result,
        !Expansions).
inst_contains_instname_2(defined_inst(InstName1), ModuleInfo, InstName,
        Result, !Expansions) :-
    ( InstName = InstName1 ->
        Result = yes
    ;
        ( set.member(InstName1, !.Expansions) ->
            Result = no
        ;
            inst_lookup(ModuleInfo, InstName1, Inst1),
            svset.insert(InstName1, !Expansions),
            inst_contains_instname_2(Inst1, ModuleInfo, InstName, Result,
                !Expansions)
        )
    ).
inst_contains_instname_2(bound(_Uniq, ArgInsts), ModuleInfo,
        InstName, Result, !Expansions) :-
    % XXX This code has a performance problem.
    %
    % The problem is that e.g. in a list of length N, you'll have N variables
    % for the skeletons whose insts contain an average of N/2 occurences of
    % `bound' each, so the complexity of running inst_contains_instname_2
    % on all their insts is quadratic in N.
    %
    % One solution to this would be to add an extra argument to bound/2
    % that gives the set of included inst_names, or simply asserts that this
    % set is empty. This field can be set at the time of the construction
    % of the inst, avoiding quadratic behavior in inst_contains_instname_2.
    % The complexity of constructing all the insts will remain quadratic in N,
    % of course.

    bound_inst_list_contains_instname(ArgInsts, ModuleInfo,
        InstName, Result, !Expansions).

:- pred bound_inst_list_contains_instname(list(bound_inst)::in,
    module_info::in, inst_name::in, bool::out,
    inst_names::in, inst_names::out) is det.

bound_inst_list_contains_instname([], _ModuleInfo, _InstName, no, !Expansions).
bound_inst_list_contains_instname([BoundInst | BoundInsts], ModuleInfo,
        InstName, Result, !Expansions) :-
    BoundInst = bound_functor(_Functor, ArgInsts),
    inst_list_contains_instname(ArgInsts, ModuleInfo, InstName, Result1,
        !Expansions),
    (
        Result1 = yes,
        Result = yes
    ;
        Result1 = no,
        bound_inst_list_contains_instname(BoundInsts, ModuleInfo,
            InstName, Result, !Expansions)
    ).

:- pred inst_list_contains_instname(list(mer_inst)::in, module_info::in,
    inst_name::in, bool::out, inst_names::in, inst_names::out) is det.

inst_list_contains_instname([], _ModuleInfo, _InstName, no, !Expansions).
inst_list_contains_instname([Inst | Insts], ModuleInfo, InstName, Result,
        !Expansions) :-
    inst_contains_instname_2(Inst, ModuleInfo, InstName, Result1, !Expansions),
    (
        Result1 = yes,
        Result = yes
    ;
        Result1 = no,
        inst_list_contains_instname(Insts, ModuleInfo, InstName, Result,
            !Expansions)
    ).

%-----------------------------------------------------------------------------%

:- pred inst_name_contains_inst_var(inst_name::in, inst_var::out) is nondet.

inst_name_contains_inst_var(user_inst(_Name, ArgInsts), InstVar) :-
    inst_list_contains_inst_var(ArgInsts, InstVar).
inst_name_contains_inst_var(merge_inst(InstA, InstB), InstVar) :-
    ( inst_contains_inst_var(InstA, InstVar)
    ; inst_contains_inst_var(InstB, InstVar)
    ).
inst_name_contains_inst_var(unify_inst(_Live, InstA, InstB, _Real), InstVar) :-
    ( inst_contains_inst_var(InstA, InstVar)
    ; inst_contains_inst_var(InstB, InstVar)
    ).
inst_name_contains_inst_var(ground_inst(InstName, _Live, _Uniq, _Real),
        InstVar) :-
    inst_name_contains_inst_var(InstName, InstVar).
inst_name_contains_inst_var(any_inst(InstName, _Live, _Uniq, _Real),
        InstVar) :-
    inst_name_contains_inst_var(InstName, InstVar).
inst_name_contains_inst_var(shared_inst(InstName), InstVar) :-
    inst_name_contains_inst_var(InstName, InstVar).
inst_name_contains_inst_var(mostly_uniq_inst(InstName), InstVar) :-
    inst_name_contains_inst_var(InstName, InstVar).
inst_name_contains_inst_var(typed_ground(_Uniq, _Type), _InstVar) :- fail.
inst_name_contains_inst_var(typed_inst(_Type, InstName), InstVar) :-
    inst_name_contains_inst_var(InstName, InstVar).

:- pred inst_contains_inst_var(mer_inst::in, inst_var::out) is nondet.

inst_contains_inst_var(inst_var(InstVar), InstVar).
inst_contains_inst_var(defined_inst(InstName), InstVar) :-
    inst_name_contains_inst_var(InstName, InstVar).
inst_contains_inst_var(bound(_Uniq, ArgInsts), InstVar) :-
    bound_inst_list_contains_inst_var(ArgInsts, InstVar).
inst_contains_inst_var(ground(_Uniq, HOInstInfo), InstVar) :-
    HOInstInfo = higher_order(pred_inst_info(_PredOrFunc, Modes, _Det)),
    mode_list_contains_inst_var(Modes, InstVar).
inst_contains_inst_var(abstract_inst(_Name, ArgInsts), InstVar) :-
    inst_list_contains_inst_var(ArgInsts, InstVar).

:- pred bound_inst_list_contains_inst_var(list(bound_inst)::in, inst_var::out)
    is nondet.

bound_inst_list_contains_inst_var([BoundInst | BoundInsts], InstVar) :-
    BoundInst = bound_functor(_Functor, ArgInsts),
    (
        inst_list_contains_inst_var(ArgInsts, InstVar)
    ;
        bound_inst_list_contains_inst_var(BoundInsts, InstVar)
    ).

:- pred inst_list_contains_inst_var(list(mer_inst)::in, inst_var::out)
    is nondet.

inst_list_contains_inst_var([Inst | Insts], InstVar) :-
    (
        inst_contains_inst_var(Inst, InstVar)
    ;
        inst_list_contains_inst_var(Insts, InstVar)
    ).

mode_list_contains_inst_var(Modes, _ModuleInfo, InstVar) :-
    mode_list_contains_inst_var(Modes, InstVar).

:- pred mode_list_contains_inst_var(list(mer_mode)::in, inst_var::out)
    is nondet.

mode_list_contains_inst_var([Mode | _Modes], InstVar) :-
    mode_contains_inst_var(Mode, InstVar).
mode_list_contains_inst_var([_ | Modes], InstVar) :-
    mode_list_contains_inst_var(Modes, InstVar).

:- pred mode_contains_inst_var(mer_mode::in, inst_var::out) is nondet.

mode_contains_inst_var(Mode, InstVar) :-
    (
        Mode = (Initial -> Final),
        ( Inst = Initial ; Inst = Final )
    ;
        Mode = user_defined_mode(_Name, Insts),
        list.member(Inst, Insts)
    ),
    inst_contains_inst_var(Inst, InstVar).

%-----------------------------------------------------------------------------%

    % For a non-solver type t (i.e. any type declared without using the
    % `solver' keyword), the inst `any' should be considered to be equivalent
    % to a bound inst i where i contains all the functors of the type t and
    % each argument has inst `any'.
    %
    % Note that pred and func types are considered solver types, since
    % higher-order terms that contain non-local solver variables are
    % themselves not ground -- they only become ground when all non-locals do.
    %
:- pred maybe_any_to_bound(maybe(mer_type)::in, module_info::in,
    uniqueness::in, ho_inst_info::in, mer_inst::out) is semidet.

maybe_any_to_bound(yes(Type), ModuleInfo, Uniq, none, Inst) :-
    \+ type_util.is_solver_type(ModuleInfo, Type),
    ( type_constructors(ModuleInfo, Type, Constructors) ->
        type_to_ctor_det(Type, TypeCtor),
        constructors_to_bound_any_insts(ModuleInfo, Uniq, TypeCtor,
            Constructors, BoundInsts0),
        list.sort_and_remove_dups(BoundInsts0, BoundInsts),
        Inst = bound(Uniq, BoundInsts)
    ; type_may_contain_solver_type(ModuleInfo, Type) ->
        % For a type for which constructors are not available (e.g. an
        % abstract type) and which may contain solver types, we fail, meaning
        % that we will use `any' for this type.
        fail
    ;
        Inst = ground(Uniq, none)
    ).

:- pred type_may_contain_solver_type(module_info::in, mer_type::in) is semidet.

type_may_contain_solver_type(ModuleInfo, Type) :-
    type_may_contain_solver_type_2(classify_type(ModuleInfo, Type)) = yes.

:- func type_may_contain_solver_type_2(type_ctor_category) = bool.

type_may_contain_solver_type_2(CtorCat) = MayContainSolverType :-
    (
        ( CtorCat = ctor_cat_builtin(_)
        ; CtorCat = ctor_cat_enum(_)
        ; CtorCat = ctor_cat_higher_order
        ; CtorCat = ctor_cat_builtin_dummy
        ; CtorCat = ctor_cat_void
        ; CtorCat = ctor_cat_system(_)
        ; CtorCat = ctor_cat_user(cat_user_direct_dummy)
        ),
        MayContainSolverType = no
    ;
        ( CtorCat = ctor_cat_variable
        ; CtorCat = ctor_cat_tuple
        ; CtorCat = ctor_cat_user(cat_user_notag)
        ; CtorCat = ctor_cat_user(cat_user_general)
        ),
        MayContainSolverType = yes
    ).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "inst_match.m".

%-----------------------------------------------------------------------------%
:- end_module inst_match.
%-----------------------------------------------------------------------------%
