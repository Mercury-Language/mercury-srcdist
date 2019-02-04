%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1997-2009 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: inst_util.m.
% Author: fjh.
%
% This module defines some utility routines for manipulating insts.
%
% The handling of `any' insts is not complete.  (See also inst_match.m)
%
% The major limitation is that we don't allow `free' to be passed
% where `any' is expected.  To handle that, modes.m would have to be
% changed to handle the implicit conversions from `free' to `any' at
%
%   (1) procedure calls (this is just an extension of implied modes)
%   (2) the end of branched goals
%   (3) the end of predicates.
%
% Since that is not yet done, we currently require the user to
% insert explicit calls to initialize constraint variables.
%
% Another limitation is that we don't allow any unifications between functors
% and variables of mode `any'; the reason for that is that I have no
% idea what code we should generate for them.  Currently `any' insts
% are only used for abstract types, so the type system should prevent
% any unification between functors and variables of mode `any'.
%
% Another limitation is that currently code generation assumes that insts
% `bound', `ground', and `any' are all represented the same way.
% That works fine for the CLP(R) interface but might not be ideal
% in the general case.
%
%-----------------------------------------------------------------------------%

:- module check_hlds.inst_util.
:- interface.

:- import_module hlds.
:- import_module hlds.hlds_module.
:- import_module hlds.instmap.
:- import_module parse_tree.
:- import_module parse_tree.prog_data.

:- import_module bool.
:- import_module list.
:- import_module maybe.

%-----------------------------------------------------------------------------%

    % Mode checking is like abstract interpretation. The predicates below
    % define the abstract unification operation which unifies two
    % instantiatednesses. If the unification would be illegal, then abstract
    % unification fails. If the unification would fail, then the abstract
    % unification will succeed, and the resulting instantiatedness will be
    % `not_reached'.

    % Compute the inst that results from abstractly unifying two variables.
    %
:- pred abstractly_unify_inst(is_live::in, mer_inst::in, mer_inst::in,
    unify_is_real::in, mer_inst::out, determinism::out,
    module_info::in, module_info::out) is semidet.

    % Compute the inst that results from abstractly unifying
    % a variable with a functor.
    %
:- pred abstractly_unify_inst_functor(is_live::in, mer_inst::in,
    cons_id::in, list(mer_inst)::in, list(is_live)::in, unify_is_real::in,
    mer_type::in, mer_inst::out, determinism::out,
    module_info::in, module_info::out) is semidet.

%-----------------------------------------------------------------------------%

    % Given an inst, return a new inst which is the same as the original inst
    % but with all occurrences of `unique' replaced with `mostly_unique'.
    %
:- pred make_mostly_uniq_inst(mer_inst::in, mer_inst::out,
    module_info::in, module_info::out) is det.

    % Given a list of insts, return a new list of insts which is the same
    % as the original list of insts, but with all occurrences of `unique'
    % replaced with `shared'.  It is an error if any part of the inst list
    % is free.
    %
:- pred make_shared_inst_list(list(mer_inst)::in, list(mer_inst)::out,
    module_info::in, module_info::out) is det.

%-----------------------------------------------------------------------------%

    % inst_merge(InstA, InstB, MaybeType, InstC, !ModuleInfo):
    %
    % Combine the insts found in different arms of a disjunction (or
    % if-then-else). The information in InstC is the minimum of the information
    % in InstA and InstB. Where InstA and InstB specify a binding (free or
    % bound), it must be the same in both.
    %
:- pred inst_merge(mer_inst::in, mer_inst::in, maybe(mer_type)::in,
    mer_inst::out, module_info::in, module_info::out) is semidet.

%-----------------------------------------------------------------------------%

    % inst_contains_nonstandard_func_mode(Inst, ModuleInfo) succeeds iff the
    % inst contains a higher-order function inst that does not match the
    % standard function mode `(in, ..., in) = out is det'.
    % E.g. this predicate fails for "func(in) = uo" because that matches the
    % standard func mode "func(in) = out", even though it isn't the same as
    % the standard func mode.
    %
:- pred inst_contains_nonstandard_func_mode(module_info::in, mer_inst::in)
    is semidet.

    % Succeed iff the inst is any or contains any.
    %
:- pred inst_contains_any(module_info::in, (mer_inst)::in) is semidet.

    % Succeed iff the given var's inst is any or contains any.
    %
:- pred var_inst_contains_any(module_info::in, instmap::in, prog_var::in)
    is semidet.

    % Succeed iff the first argument is a function pred_inst_info
    % whose mode does not match the standard func mode.
    %
:- pred pred_inst_info_is_nonstandard_func_mode(module_info::in,
    pred_inst_info::in) is semidet.

    % Succeed iff the first argument is a function ho_inst_info
    % whose mode does not match the standard func mode.
    %
:- pred ho_inst_info_is_nonstandard_func_mode(module_info::in,
    ho_inst_info::in) is semidet.

    % Return the standard mode for a function of the given arity.
    %
:- func pred_inst_info_standard_func_mode(arity) = pred_inst_info.

    % Return true if the given inst may restrict the set of function symbols
    % that may be successfully unified with the variable that has this inst.
    %
:- func inst_may_restrict_cons_ids(module_info, mer_inst) = bool.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.inst_match.
:- import_module check_hlds.mode_util.
:- import_module check_hlds.type_util.
:- import_module hlds.hlds_data.
:- import_module libs.
:- import_module libs.compiler_util.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.prog_mode.
:- import_module parse_tree.prog_type.

:- import_module int.
:- import_module list.
:- import_module map.
:- import_module pair.
:- import_module set.
:- import_module svmap.
:- import_module svset.

%-----------------------------------------------------------------------------%

abstractly_unify_inst(Live, InstA, InstB, UnifyIsReal, Inst, Det,
        !ModuleInfo) :-
    % Check whether this pair of insts is already in the unify_insts table.
    ThisInstPair = unify_inst(Live, InstA, InstB, UnifyIsReal),
    module_info_get_inst_table(!.ModuleInfo, InstTable0),
    inst_table_get_unify_insts(InstTable0, UnifyInsts0),
    % XXX For code that uses large facts, the deeply nested insts we unify
    % here means that searching UnifyInsts0 here, and updating it (twice)
    % in the else case below are *extremely* expensive. In one version of
    % Doug Auclair's training_cars example, the map search, insert and update
    % account for 116 out the 120 clock ticks spent in this predicate,
    % i.e. they account for almost 97% of its runtime.
    ( map.search(UnifyInsts0, ThisInstPair, Result) ->
        ( Result = inst_det_known(UnifyInst, UnifyDet) ->
            Inst0 = UnifyInst,
            Det = UnifyDet
        ;
            Inst0 = defined_inst(ThisInstPair),
            % It's ok to assume that the unification is deterministic here,
            % because the only time that this will happen is when we get to the
            % recursive case for a recursively defined inst. If the unification
            % as a whole is semidet then it must be semidet somewhere else too.
            Det = detism_det
        ),
        Inst1 = Inst0
    ;
        % Insert ThisInstPair into the table with value `unknown'.
        svmap.det_insert(ThisInstPair, inst_det_unknown,
            UnifyInsts0, UnifyInsts1),
        inst_table_set_unify_insts(UnifyInsts1, InstTable0, InstTable1),
        module_info_set_inst_table(InstTable1, !ModuleInfo),
        % Unify the insts.
        inst_expand(!.ModuleInfo, InstA, InstA2),
        inst_expand(!.ModuleInfo, InstB, InstB2),
        abstractly_unify_inst_2(Live, InstA2, InstB2, UnifyIsReal,
            Inst0, Det, !ModuleInfo),

        % If this unification cannot possible succeed, the correct inst
        % is not_reached.
        ( determinism_components(Det, _, at_most_zero) ->
            Inst1 = not_reached
        ;
            Inst1 = Inst0
        ),

        % Now update the value associated with ThisInstPair.
        module_info_get_inst_table(!.ModuleInfo, InstTable2),
        inst_table_get_unify_insts(InstTable2, UnifyInsts2),
        map.det_update(UnifyInsts2, ThisInstPair, inst_det_known(Inst1, Det),
            UnifyInsts),
        inst_table_set_unify_insts(UnifyInsts, InstTable2, InstTable),
        module_info_set_inst_table(InstTable, !ModuleInfo)
    ),
    % Avoid expanding recursive insts.
    ( inst_contains_instname(Inst1, !.ModuleInfo, ThisInstPair) ->
        Inst = defined_inst(ThisInstPair)
    ;
        Inst = Inst1
    ).

:- pred abstractly_unify_inst_2(is_live::in, mer_inst::in, mer_inst::in,
    unify_is_real::in, mer_inst::out, determinism::out,
    module_info::in, module_info::out) is semidet.

abstractly_unify_inst_2(IsLive, InstA, InstB, UnifyIsReal, Inst, Det,
        !ModuleInfo) :-
    ( InstB = not_reached ->
        Inst = not_reached,
        Det = detism_det
    ; InstA = constrained_inst_vars(InstVars, InstA1) ->
        abstractly_unify_constrained_inst_vars(IsLive, InstVars, InstA1,
            InstB, UnifyIsReal, Inst, Det, !ModuleInfo)
    ; InstB = constrained_inst_vars(InstVars, InstB1) ->
        abstractly_unify_constrained_inst_vars(IsLive, InstVars, InstB1,
            InstA, UnifyIsReal, Inst, Det, !ModuleInfo)
    ;
        abstractly_unify_inst_3(IsLive, InstA, InstB, UnifyIsReal,
            Inst, Det, !ModuleInfo)
    ).

    % Abstractly unify two expanded insts.
    % The is_live parameter is `is_live' iff *both* insts are live.
    % Given the two insts to be unified, this produces
    % a resulting inst and a determinism for the unification.
    %
    % XXX Could be extended to handle `any' insts better.
    %
:- pred abstractly_unify_inst_3(is_live::in, mer_inst::in, mer_inst::in,
    unify_is_real::in, mer_inst::out, determinism::out,
    module_info::in, module_info::out) is semidet.

abstractly_unify_inst_3(is_live, not_reached, _, _, not_reached, detism_det,
        !ModuleInfo).

abstractly_unify_inst_3(is_live, free, any(UniqY, HOInstInfo), Real,
        any(Uniq, HOInstInfo), detism_det, !ModuleInfo) :-
    unify_uniq(is_live, Real, detism_det, unique, UniqY, Uniq).

% abstractly_unify_inst_3(is_live, free, free, _, _, _, _, _) :- fail.

abstractly_unify_inst_3(is_live, free, bound(UniqY, List0), Real,
        bound(Uniq, List), detism_det, !ModuleInfo) :-
    unify_uniq(is_live, Real, detism_det, unique, UniqY, Uniq),
        % Since both are live, we must disallow free-free unifications.
    bound_inst_list_is_ground_or_any(List0, !.ModuleInfo),
        % Since both are live, we must make the result shared
        % (unless it was already shared).
    ( ( UniqY = unique ; UniqY = mostly_unique ) ->
        make_shared_bound_inst_list(List0, List, !ModuleInfo)
    ;
        List = List0
    ).

abstractly_unify_inst_3(is_live, free, ground(UniqY, PredInst), Real,
        ground(Uniq, PredInst), detism_det, !ModuleInfo) :-
    unify_uniq(is_live, Real, detism_det, unique, UniqY, Uniq).

% abstractly_unify_inst_3(is_live, free, abstract_inst(_,_), _, _, _, _) :-
%   fail.

abstractly_unify_inst_3(is_live, bound(UniqX, List0), any(UniqY, _), Real,
        bound(Uniq, List), Det, !ModuleInfo) :-
    allow_unify_bound_any(Real),
    unify_uniq(is_live, Real, detism_semi, UniqX, UniqY, Uniq),
    make_any_bound_inst_list(List0, is_live, UniqY, Real, List, Det1,
        !ModuleInfo),
    det_par_conjunction_detism(Det1, detism_semi, Det).

abstractly_unify_inst_3(is_live, bound(UniqY, List0), free, Real,
        bound(Uniq, List), detism_det, !ModuleInfo) :-
    unify_uniq(is_live, Real, detism_det, unique, UniqY, Uniq),
    % Since both are live, we must disallow free-free unifications.
    bound_inst_list_is_ground_or_any(List0, !.ModuleInfo),
    make_shared_bound_inst_list(List0, List, !ModuleInfo).

abstractly_unify_inst_3(is_live, bound(UniqX, ListX), bound(UniqY, ListY), Real,
        bound(Uniq, List), Det, !ModuleInfo) :-
    abstractly_unify_bound_inst_list(is_live, ListX, ListY, Real, List, Det,
        !ModuleInfo),
    unify_uniq(is_live, Real, Det, UniqX, UniqY, Uniq).

abstractly_unify_inst_3(is_live, bound(UniqX, BoundInsts0), ground(UniqY, _),
        Real, bound(Uniq, BoundInsts), Det, !ModuleInfo) :-
    unify_uniq(is_live, Real, detism_semi, UniqX, UniqY, Uniq),
    make_ground_bound_inst_list(BoundInsts0, is_live, UniqY, Real, BoundInsts,
        Det1, !ModuleInfo),
    det_par_conjunction_detism(Det1, detism_semi, Det).

% abstract insts not supported
% abstractly_unify_inst_3(is_live, bound(Uniq, List), abstract_inst(_,_), Real,
%       ground(shared), detism_semi, !ModuleInfo) :-
%   unify_uniq(is_live, Real, detism_semi, unique, UniqY, Uniq),
%   bound_inst_list_is_ground(List, !.ModuleInfo).

abstractly_unify_inst_3(is_live, ground(UniqX, higher_order(PredInst)),
        any(UniqY, _), Real, ground(Uniq, higher_order(PredInst)),
        detism_semi, !ModuleInfo) :-
    Real = fake_unify,
    unify_uniq(is_live, Real, detism_det, UniqX, UniqY, Uniq).

abstractly_unify_inst_3(is_live, ground(Uniq0, higher_order(PredInst)), free,
        Real, ground(Uniq, higher_order(PredInst)), detism_det, !ModuleInfo) :-
    unify_uniq(is_live, Real, detism_det, unique, Uniq0, Uniq).

abstractly_unify_inst_3(is_live, ground(UniqX, higher_order(_)),
        bound(UniqY, BoundInsts0), Real, bound(Uniq, BoundInsts),
        Det, !ModuleInfo) :-
    % check `Real = fake_unify' ?
    unify_uniq(is_live, Real, detism_semi, UniqX, UniqY, Uniq),
    make_ground_bound_inst_list(BoundInsts0, is_live, UniqX, Real, BoundInsts,
        Det1, !ModuleInfo),
    det_par_conjunction_detism(Det1, detism_semi, Det).

abstractly_unify_inst_3(is_live, ground(UniqA, higher_order(PredInstA)),
        ground(UniqB, _HOInstInfoB), Real, ground(Uniq, HOInstInfo),
        detism_semi, !ModuleInfo) :-
    % It is an error to unify higher-order preds,
    % so if Real \= fake_unify, then we must fail.
    Real = fake_unify,
    % In theory we should choose take the union of the information specified
    % by PredInstA and _HOInstInfoB. However, since our data representation
    % provides no way of doing that, and since this will only happen for
    % fake_unifys, for which it shouldn't make any difference, we just choose
    % the information specified by PredInstA.
    HOInstInfo = higher_order(PredInstA),
    unify_uniq(is_live, Real, detism_semi, UniqA, UniqB, Uniq).

abstractly_unify_inst_3(is_live, ground(Uniq, none), Inst0, Real, Inst, Det,
        !ModuleInfo) :-
    make_ground_inst(Inst0, is_live, Uniq, Real, Inst, Det, !ModuleInfo).

abstractly_unify_inst_3(is_live, any(Uniq0, higher_order(PredInst)), free,
        Real, any(Uniq, higher_order(PredInst)), detism_det, !ModuleInfo) :-
    unify_uniq(is_live, Real, detism_det, unique, Uniq0, Uniq).

abstractly_unify_inst_3(is_live, any(UniqX, higher_order(_)),
        bound(UniqY, BoundInsts0), Real, bound(Uniq, BoundInsts),
        Det, !ModuleInfo) :-
    % check `Real = fake_unify' ?
    unify_uniq(is_live, Real, detism_semi, UniqX, UniqY, Uniq),
    make_any_bound_inst_list(BoundInsts0, is_live, UniqX, Real, BoundInsts,
        Det1, !ModuleInfo),
    det_par_conjunction_detism(Det1, detism_semi, Det).

abstractly_unify_inst_3(is_live, any(UniqA, higher_order(PredInstA)),
        ground(UniqB, _HOInstInfoB), Real, ground(Uniq, HOInstInfo),
        detism_semi, !ModuleInfo) :-
    % See comment for the ground(_, higher_order(_)), ground(_, _) case.
    Real = fake_unify,
    HOInstInfo = higher_order(PredInstA),
    unify_uniq(is_live, Real, detism_semi, UniqA, UniqB, Uniq).

abstractly_unify_inst_3(is_live, any(UniqA, higher_order(PredInstA)),
        any(UniqB, _HOInstInfoB), Real, any(Uniq, HOInstInfo), detism_semi,
        !ModuleInfo) :-
    % See comment for the ground(_, higher_order(_)), ground(_, _) case.
    Real = fake_unify,
    HOInstInfo = higher_order(PredInstA),
    unify_uniq(is_live, Real, detism_semi, UniqA, UniqB, Uniq).

abstractly_unify_inst_3(is_live, any(Uniq, none), Inst0, Real, Inst, Det,
        !ModuleInfo) :-
    make_any_inst(Inst0, is_live, Uniq, Real, Inst, Det, !ModuleInfo).

% abstractly_unify_inst_3(is_live, abstract_inst(_,_), free, _, _, _, _, _)
%       :- fail.

% abstract insts not supported
% abstractly_unify_inst_3(is_live, abstract_inst(_,_), bound(Uniq, List), Real,
%       ground(shared, no), detism_semi, !ModuleInfo) :-
%   check_not_clobbered(Real, Uniq),
%   bound_inst_list_is_ground(List, !.ModuleInfo).
%
% abstractly_unify_inst_3(is_live, abstract_inst(_,_), ground(Uniq, no), Real,
%       ground(shared, no), detism_semi, !ModuleInfo) :-
%   check_not_clobbered(Real, Uniq).
%
% abstractly_unify_inst_3(is_live, abstract_inst(Name, ArgsA),
%       abstract_inst(Name, ArgsB), Real,
%       abstract_inst(Name, Args), Det, !ModuleInfo) :-
%   abstractly_unify_inst_list(ArgsA, ArgsB, is_live, Real,
%       Args, Det, !ModuleInfo).

abstractly_unify_inst_3(is_dead, not_reached, _, _, not_reached, detism_det,
        !ModuleInfo).

abstractly_unify_inst_3(is_dead, free, Inst, _, Inst, detism_det, !ModuleInfo).

abstractly_unify_inst_3(is_dead, bound(UniqX, List0), any(UniqY, _), Real,
        bound(Uniq, List), Det, !ModuleInfo) :-
    allow_unify_bound_any(Real),
    unify_uniq(is_dead, Real, detism_semi, UniqX, UniqY, Uniq),
    make_any_bound_inst_list(List0, is_live, UniqY, Real, List, Det1,
        !ModuleInfo),
    det_par_conjunction_detism(Det1, detism_semi, Det).

abstractly_unify_inst_3(is_dead, bound(UniqX, List), free, Real,
        bound(Uniq, List), detism_det, !ModuleInfo) :-
    unify_uniq(is_dead, Real, detism_det, UniqX, unique, Uniq).

abstractly_unify_inst_3(is_dead, bound(UniqX, ListX), bound(UniqY, ListY),
        Real, bound(Uniq, List), Det, !ModuleInfo) :-
    abstractly_unify_bound_inst_list(is_dead, ListX, ListY, Real,
        List, Det, !ModuleInfo),
    unify_uniq(is_dead, Real, Det, UniqX, UniqY, Uniq).

abstractly_unify_inst_3(is_dead, bound(UniqX, BoundInsts0), ground(UniqY, _),
        Real, bound(Uniq, BoundInsts), Det, !ModuleInfo) :-
    unify_uniq(is_dead, Real, detism_semi, UniqX, UniqY, Uniq),
    make_ground_bound_inst_list(BoundInsts0, is_dead, UniqY, Real, BoundInsts,
        Det1, !ModuleInfo),
    det_par_conjunction_detism(Det1, detism_semi, Det).

% abstract insts aren't really supported
% abstractly_unify_inst_3(is_dead, bound(Uniq, List), abstract_inst(N,As),
%           Result, Det, !ModuleInfo) :-
%   ( bound_inst_list_is_ground(List, !.ModuleInfo) ->
%       Result = bound(Uniq, List),
%       Det = semidet
%   ; bound_inst_list_is_free(List, !.ModuleInfo) ->
%       Result = abstract_inst(N,As),
%       Det = det
%   ;
%       fail
%   ).

abstractly_unify_inst_3(is_dead, ground(UniqX, higher_order(PredInst)),
        any(UniqY, _), Real, ground(Uniq, higher_order(PredInst)),
        detism_semi, !ModuleInfo) :-
    allow_unify_bound_any(Real),
    unify_uniq(is_dead, Real, detism_semi, UniqX, UniqY, Uniq).

abstractly_unify_inst_3(is_dead, ground(Uniq, higher_order(PredInst)), free,
        _Real, ground(Uniq, higher_order(PredInst)), detism_det, !ModuleInfo).

abstractly_unify_inst_3(is_dead, ground(UniqA, higher_order(_)),
        bound(UniqB, BoundInsts0), Real, bound(Uniq, BoundInsts),
        Det, !ModuleInfo) :-
    unify_uniq(is_dead, Real, detism_semi, UniqA, UniqB, Uniq),
    make_ground_bound_inst_list(BoundInsts0, is_dead, UniqA, Real, BoundInsts,
        Det1, !ModuleInfo),
    det_par_conjunction_detism(Det1, detism_semi, Det).

abstractly_unify_inst_3(is_dead, ground(UniqA, higher_order(PredInstA)),
        ground(UniqB, _HOInstInfoB), Real, ground(Uniq, HOInstInfo),
        detism_det, !ModuleInfo) :-
    Real = fake_unify,
    HOInstInfo = higher_order(PredInstA),
    unify_uniq(is_dead, Real, detism_det, UniqA, UniqB, Uniq).

abstractly_unify_inst_3(is_dead, ground(Uniq, none), Inst0, Real, Inst, Det,
        !ModuleInfo) :-
    make_ground_inst(Inst0, is_dead, Uniq, Real, Inst, Det, !ModuleInfo).

abstractly_unify_inst_3(is_dead, any(UniqX, higher_order(PredInst)),
        any(UniqY, _), Real, any(Uniq, higher_order(PredInst)),
        detism_semi, !ModuleInfo) :-
    unify_uniq(is_dead, Real, detism_semi, UniqX, UniqY, Uniq).

abstractly_unify_inst_3(is_dead, any(Uniq, higher_order(PredInst)), free,
        _Real, any(Uniq, higher_order(PredInst)), detism_det, !ModuleInfo).

abstractly_unify_inst_3(is_dead, any(UniqA, higher_order(_)),
        bound(UniqB, BoundInsts0), Real, bound(Uniq, BoundInsts),
        Det, !ModuleInfo) :-
    unify_uniq(is_dead, Real, detism_semi, UniqA, UniqB, Uniq),
    make_any_bound_inst_list(BoundInsts0, is_dead, UniqA, Real, BoundInsts,
        Det1, !ModuleInfo),
    det_par_conjunction_detism(Det1, detism_semi, Det).

abstractly_unify_inst_3(is_dead, any(UniqA, higher_order(PredInstA)),
        ground(UniqB, _HOInstInfoB), Real, ground(Uniq, HOInstInfo),
        detism_det, !ModuleInfo) :-
    Real = fake_unify,
    HOInstInfo = higher_order(PredInstA),
    unify_uniq(is_dead, Real, detism_det, UniqA, UniqB, Uniq).

abstractly_unify_inst_3(is_dead, any(Uniq, none), Inst0, Real, Inst, Det,
        !ModuleInfo) :-
    make_any_inst(Inst0, is_dead, Uniq, Real, Inst, Det, !ModuleInfo).

% abstract insts aren't really supported
% abstractly_unify_inst_3(is_dead, abstract_inst(N,As), bound(List), Real,
%           ModuleInfo, Result, Det, ModuleInfo) :-
%   ( bound_inst_list_is_ground(List, ModuleInfo) ->
%       Result = bound(List),
%       Det = semidet
%   ; bound_inst_list_is_free(List, ModuleInfo) ->
%       Result = abstract_inst(N,As),
%       Det = det
%   ;
%       fail
%   ).
%
% abstractly_unify_inst_3(is_dead, abstract_inst(_,_), ground, _Real,
%       ground, detism_semi, !ModuleInfo).
%
% abstractly_unify_inst_3(is_dead, abstract_inst(Name, ArgsA),
%       abstract_inst(Name, ArgsB), Real,
%       abstract_inst(Name, Args), Det, !ModuleInfo) :-
%   abstractly_unify_inst_list(ArgsA, ArgsB, is_dead, Real,
%       Args, Det, !ModuleInfo).

%-----------------------------------------------------------------------------%

    % Abstractly unify two inst lists.
    %
:- pred abstractly_unify_inst_list(list(mer_inst)::in, list(mer_inst)::in,
    is_live::in, unify_is_real::in, list(mer_inst)::out, determinism::out,
    module_info::in, module_info::out) is semidet.

abstractly_unify_inst_list([], [], _, _, [], detism_det, !ModuleInfo).
abstractly_unify_inst_list([X | Xs], [Y | Ys], Live, Real, [Z | Zs], Det,
        !ModuleInfo) :-
    abstractly_unify_inst(Live, X, Y, Real, Z, Det1, !ModuleInfo),
    abstractly_unify_inst_list(Xs, Ys, Live, Real, Zs, Det2, !ModuleInfo),
    det_par_conjunction_detism(Det1, Det2, Det).

%-----------------------------------------------------------------------------%

    % This is the abstract unification operation which unifies a variable
    % (or rather, it's instantiatedness) with a functor.
    %
abstractly_unify_inst_functor(Live, InstA, ConsId, ArgInsts, ArgLives,
        Real, Type, Inst, Det, !ModuleInfo) :-
    inst_expand(!.ModuleInfo, InstA, InstA2),
    ( InstA2 = constrained_inst_vars(InstVars, InstA3) ->
        abstractly_unify_inst_functor(Live, InstA3, ConsId, ArgInsts,
            ArgLives, Real, Type, Inst0, Det, !ModuleInfo),
        (
            inst_matches_final(Inst0, InstA3, !.ModuleInfo)
        ->
            % We can keep the constrained_inst_vars.
            Inst = constrained_inst_vars(InstVars, Inst0)
        ;
            % The inst has become too instantiated so we must remove
            % the constrained_inst_var.
            % XXX This throws away the information that Inst is at least as
            % ground as InstVars and is a subtype of InstVars. I don't think
            % this is likely to be a problem in practice because:
            % a) I don't think it's likely to occur very often in typical uses
            %    of polymorphic modes (I suspect InstA3 will nearly always be
            %    `ground' or `any' in which case the only way
            %    inst_matches_final can fail is if Inst0 is clobbered
            %    -- it can't be less instantiated than InstA3); and
            % b) Even if this information is retained, I can't see what sort
            %    of situations it would actually be useful for.
            Inst = Inst0
        )
    ;
        abstractly_unify_inst_functor_2(Live, InstA2, ConsId, ArgInsts,
            ArgLives, Real, Type, Inst, Det, !ModuleInfo)
    ).

:- pred abstractly_unify_inst_functor_2(is_live::in, mer_inst::in,
    cons_id::in, list(mer_inst)::in, list(is_live)::in, unify_is_real::in,
    mer_type::in, mer_inst::out, determinism::out,
    module_info::in, module_info::out) is semidet.

abstractly_unify_inst_functor_2(is_live, not_reached, _, _, _, _, _,
        not_reached, detism_erroneous, !ModuleInfo).

abstractly_unify_inst_functor_2(is_live, free, ConsId, Args0, ArgLives, _Real,
        _, bound(unique, [bound_functor(ConsId, Args)]), detism_det,
        !ModuleInfo) :-
    inst_list_is_ground_or_any_or_dead(Args0, ArgLives, !.ModuleInfo),
    maybe_make_shared_inst_list(Args0, ArgLives, Args, !ModuleInfo).

abstractly_unify_inst_functor_2(is_live, any(Uniq, _), ConsId, ArgInsts,
        ArgLives, Real, Type, Inst, Det, !ModuleInfo) :-
    % We only allow `any' to unify with a functor if we know that
    % the type is not a solver type.
    \+ type_util.is_solver_type(!.ModuleInfo, Type),
    make_any_inst_list_lives(ArgInsts, is_live, ArgLives, Uniq, Real,
        AnyArgInsts, Det, !ModuleInfo),
    Inst = bound(Uniq, [bound_functor(ConsId, AnyArgInsts)]).

abstractly_unify_inst_functor_2(is_live, bound(Uniq, ListX), ConsId, Args,
        ArgLives, Real, _, bound(Uniq, List), Det,
        !ModuleInfo) :-
    abstractly_unify_bound_inst_list_lives(ListX, ConsId, Args, ArgLives,
        Real, List, Det, !ModuleInfo).

abstractly_unify_inst_functor_2(is_live, ground(Uniq, _), ConsId, ArgInsts,
        ArgLives, Real, _, Inst, Det, !ModuleInfo) :-
    make_ground_inst_list_lives(ArgInsts, is_live, ArgLives, Uniq, Real,
        GroundArgInsts, Det, !ModuleInfo),
    Inst = bound(Uniq, [bound_functor(ConsId, GroundArgInsts)]).

% abstractly_unify_inst_functor_2(is_live, abstract_inst(_,_), _, _, _, _, _,
%       _, _) :-
%       fail.

abstractly_unify_inst_functor_2(is_dead, not_reached, _, _, _, _, _,
        not_reached, detism_erroneous, !ModuleInfo).

abstractly_unify_inst_functor_2(is_dead, free, ConsId, Args, _ArgLives,
        _Real, _, bound(unique, [bound_functor(ConsId, Args)]), detism_det,
        !ModuleInfo).

abstractly_unify_inst_functor_2(is_dead, any(Uniq, _), ConsId, ArgInsts,
        _ArgLives, Real, Type, Inst, Det, !ModuleInfo) :-
    \+ type_util.is_solver_type(!.ModuleInfo, Type),
    make_any_inst_list(ArgInsts, is_dead, Uniq, Real, AnyArgInsts, Det,
        !ModuleInfo),
    Inst = bound(Uniq, [bound_functor(ConsId, AnyArgInsts)]).

abstractly_unify_inst_functor_2(is_dead, bound(Uniq, ListX), ConsId, Args,
        _ArgLives, Real, _, bound(Uniq, List), Det, !ModuleInfo) :-
    ListY = [bound_functor(ConsId, Args)],
    abstractly_unify_bound_inst_list(is_dead, ListX, ListY, Real, List, Det,
        !ModuleInfo).

abstractly_unify_inst_functor_2(is_dead, ground(Uniq, _), ConsId, ArgInsts,
        _ArgLives, Real, _, Inst, Det, !ModuleInfo) :-
    make_ground_inst_list(ArgInsts, is_dead, Uniq, Real, GroundArgInsts, Det,
        !ModuleInfo),
    Inst = bound(Uniq, [bound_functor(ConsId, GroundArgInsts)]).

% abstractly_unify_inst_functor_2(is_dead, abstract_inst(_,_), _, _, _, _,
%       _, _, _) :-
%       fail.

%-----------------------------------------------------------------------------%

    % This code performs abstract unification of two bound(...) insts.
    % The lists of bound_inst are guaranteed to be sorted.
    % Abstract unification of two bound(...) insts proceeds
    % like a sorted merge operation.  If two elements have the
    % same functor name, they are inserted in the output list,
    % assuming their argument inst list can be abstractly unified.
    % (If it can't, the whole thing fails).  If a functor name
    % occurs in only one of the two input lists, it is not inserted
    % in the output list.
    %
    % One way of looking at this code is that it simulates mode
    % and determinism checking of the goal for the unification
    % predicate for the type.
    %
:- pred abstractly_unify_bound_inst_list(is_live::in, list(bound_inst)::in,
    list(bound_inst)::in, unify_is_real::in,
    list(bound_inst)::out, determinism::out,
    module_info::in, module_info::out) is semidet.

abstractly_unify_bound_inst_list(Live, Xs, Ys, Real, L, Det, !ModuleInfo) :-
    ( ( Xs = [] ; Ys = [] ) ->
        % This probably shouldn't happen. If we get here, it means that
        % a previous goal had determinism `failure' or `erroneous',
        % but we should have optimized away the rest of the conjunction
        % after that goal.

        L = [],
        Det = detism_erroneous
    ;
        abstractly_unify_bound_inst_list_2(Live, Xs, Ys, Real,
            L, Det0, !ModuleInfo),

        % If there are multiple alternatives for either of the inputs,
        % or the constructor of the single alternative for each input
        % doesn't match, then the unification can fail, so adjust the
        % determinism.
        (
            Xs = [bound_functor(ConsIdX, _)],
            Ys = [bound_functor(ConsIdY, _)],
            equivalent_cons_ids(ConsIdX, ConsIdY)
        ->
            Det = Det0
        ;
            determinism_components(Det0, _, MaxSoln),
            determinism_components(Det, can_fail, MaxSoln)
        )
    ).

:- pred abstractly_unify_bound_inst_list_2(is_live::in, list(bound_inst)::in,
    list(bound_inst)::in, unify_is_real::in,
    list(bound_inst)::out, determinism::out,
    module_info::in, module_info::out) is semidet.

abstractly_unify_bound_inst_list_2(_, [], [], _, [], detism_erroneous,
        !ModuleInfo).
abstractly_unify_bound_inst_list_2(_, [], [_ | _], _, [], detism_failure,
        !ModuleInfo).
abstractly_unify_bound_inst_list_2(_, [_ | _], [], _, [], detism_failure,
        !ModuleInfo).
abstractly_unify_bound_inst_list_2(Live, [X | Xs], [Y | Ys], Real, L, Det,
        !ModuleInfo) :-
    X = bound_functor(ConsIdX, ArgsX),
    Y = bound_functor(ConsIdY, ArgsY),
    ( equivalent_cons_ids(ConsIdX, ConsIdY) ->
        abstractly_unify_inst_list(ArgsX, ArgsY, Live, Real,
            Args, Det1, !ModuleInfo),
        abstractly_unify_bound_inst_list_2(Live, Xs, Ys, Real,
            L1, Det2, !ModuleInfo),

        % If the unification of the two cons_ids is guaranteed
        % not to succeed, don't include it in the list.
        ( determinism_components(Det1, _, at_most_zero) ->
            L = L1
        ;
            L = [bound_functor(ConsIdX, Args) | L1]
        ),
        det_switch_detism(Det1, Det2, Det)
    ;
        ( compare(<, ConsIdX, ConsIdY) ->
            abstractly_unify_bound_inst_list_2(Live, Xs, [Y | Ys],
                Real, L, Det1, !ModuleInfo)
        ;
            abstractly_unify_bound_inst_list_2(Live, [X | Xs], Ys,
                Real, L, Det1, !ModuleInfo)
        ),
        det_switch_detism(Det1, detism_failure, Det)
    ).

:- pred abstractly_unify_bound_inst_list_lives(list(bound_inst)::in,
    cons_id::in, list(mer_inst)::in, list(is_live)::in,
    unify_is_real::in, list(bound_inst)::out, determinism::out,
    module_info::in, module_info::out) is semidet.

abstractly_unify_bound_inst_list_lives([], _, _, _, _, [], detism_failure,
        !ModuleInfo).
abstractly_unify_bound_inst_list_lives([X | Xs], ConsIdY, ArgsY, LivesY, Real,
        L, Det, !ModuleInfo) :-
    X = bound_functor(ConsIdX, ArgsX),
    ( equivalent_cons_ids(ConsIdX, ConsIdY) ->
        abstractly_unify_inst_list_lives(ArgsX, ArgsY, LivesY, Real,
            Args, Det, !ModuleInfo),
        L = [bound_functor(ConsIdX, Args)]
    ;
        abstractly_unify_bound_inst_list_lives(Xs, ConsIdY, ArgsY,
            LivesY, Real, L, Det, !ModuleInfo)
    ).

:- pred abstractly_unify_inst_list_lives(list(mer_inst)::in,
    list(mer_inst)::in, list(is_live)::in, unify_is_real::in,
    list(mer_inst)::out, determinism::out,
    module_info::in, module_info::out) is semidet.

abstractly_unify_inst_list_lives([], [], [], _, [], detism_det, !ModuleInfo).
abstractly_unify_inst_list_lives([X | Xs], [Y | Ys], [Live | Lives], Real,
        [Z | Zs], Det, !ModuleInfo) :-
    abstractly_unify_inst(Live, X, Y, Real, Z, Det1, !ModuleInfo),
    abstractly_unify_inst_list_lives(Xs, Ys, Lives, Real, Zs, Det2,
        !ModuleInfo),
    det_par_conjunction_detism(Det1, Det2, Det).

%-----------------------------------------------------------------------------%

:- pred abstractly_unify_constrained_inst_vars(is_live::in, set(inst_var)::in,
    mer_inst::in, mer_inst::in, unify_is_real::in, mer_inst::out,
    determinism::out, module_info::in, module_info::out) is semidet.

abstractly_unify_constrained_inst_vars(IsLive, InstVars, InstConstraint, InstB,
        UnifyIsReal, Inst, Det, !ModuleInfo) :-
    abstractly_unify_inst(IsLive, InstConstraint, InstB, UnifyIsReal,
        Inst0, Det, !ModuleInfo),
    ( \+ inst_matches_final(Inst0, InstConstraint, !.ModuleInfo) ->
        % The inst has become too instantiated so the
        % constrained_inst_vars must be removed.
        Inst = Inst0
    ; Inst0 = constrained_inst_vars(InstVars0, Inst1) ->
        % Avoid nested constrained_inst_vars.
        Inst = constrained_inst_vars(set.union(InstVars0, InstVars), Inst1)
    ;
        % We can keep the constrained_inst_vars.
        Inst = constrained_inst_vars(InstVars, Inst0)
    ).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

    % Unifying shared with either shared or unique gives shared.
    % Unifying unique with unique gives shared if live, unique if dead.
    % Unifying clobbered with anything gives clobbered, except that if live
    % then it is an internal error (a clobbered value should not be live,
    % right?), and except that unifying with clobbered is not allowed for
    % semidet unifications, unless they are "fake".
    %
    % The only way this predicate can abort is if a clobbered value is live.
    %
    % The only way this predicate can fail (indicating a unique mode error)
    % is if we are attempting to unify with a clobbered value, and this was
    % a "real" unification, not a "fake" one, and the determinism of the
    % unification is semidet. (See comment in prog_data.m for more info
    % on "real" v.s. "fake".) Note that if a unification or sub-unification
    % is det, then it is OK to unify with a clobbered value. This can occur
    % e.g. with unifications between free and clobbered, or with free and
    % bound(..., clobbered, ...). Such det unifications are OK because the
    % clobbered value will not be examined, instead all that will happen
    % is that a variable or a field of a variable will become bound to the
    % clobbered value; and since the final inst will also be clobbered,
    % the variable or field's value can never be examined later either.
    % Only semidet unifications would test the value of a clobbered variable,
    % so those are the only ones we need to disallow.
    %
:- pred unify_uniq(is_live::in, unify_is_real::in, determinism::in,
    uniqueness::in, uniqueness::in, uniqueness::out) is semidet.

unify_uniq(_, _, _, shared, shared, shared).
unify_uniq(_, _, _, shared, unique, shared).
unify_uniq(_, _, _, shared, mostly_unique, shared).
unify_uniq(Live, Real, Det, shared, clobbered, clobbered) :-
    allow_unify_with_clobbered(Live, Real, Det).
unify_uniq(Live, Real, Det, shared, mostly_clobbered, mostly_clobbered) :-
    allow_unify_with_clobbered(Live, Real, Det).

unify_uniq(_, _, _, unique, shared, shared).
unify_uniq(is_live, _, _, unique, unique, shared).
unify_uniq(is_live, _, _, unique, mostly_unique, shared).
unify_uniq(is_dead, _, _, unique, unique, unique).
unify_uniq(is_dead, _, _, unique, mostly_unique, mostly_unique).
        % XXX The above line is a conservative approximation;
        % sometimes it should return unique not mostly_unique.
unify_uniq(Live, Real, Det, unique, clobbered, clobbered) :-
    allow_unify_with_clobbered(Live, Real, Det).
unify_uniq(Live, Real, Det, unique, mostly_clobbered, mostly_clobbered) :-
    allow_unify_with_clobbered(Live, Real, Det).

unify_uniq(_, _, _, mostly_unique, shared, shared).
unify_uniq(is_live, _, _, mostly_unique, unique, shared).
unify_uniq(is_live, _, _, mostly_unique, mostly_unique, shared).
unify_uniq(is_dead, _, _, mostly_unique, unique, mostly_unique).
        % XXX The above line is a conservative approximation;
        % sometimes it should return unique not mostly_unique.
unify_uniq(is_dead, _, _, mostly_unique, mostly_unique, mostly_unique).
unify_uniq(Live, Real, Det, mostly_unique, clobbered, clobbered) :-
    allow_unify_with_clobbered(Live, Real, Det).
unify_uniq(Live, Real, Det, mostly_unique, mostly_clobbered,
        mostly_clobbered) :-
    allow_unify_with_clobbered(Live, Real, Det).

unify_uniq(Live, Real, Det, clobbered, _, clobbered) :-
    allow_unify_with_clobbered(Live, Real, Det).

unify_uniq(Live, Real, Det, mostly_clobbered, Uniq0, Uniq) :-
    ( Uniq0 = clobbered ->
        Uniq = clobbered
    ;
        Uniq = mostly_clobbered
    ),
    allow_unify_with_clobbered(Live, Real, Det).

:- pred allow_unify_with_clobbered(is_live::in, unify_is_real::in,
    determinism::in) is semidet.

allow_unify_with_clobbered(is_live, _, _) :-
    unexpected(this_file,
        "allow_unify_with_clobbered: clobbered value is is_live?").
allow_unify_with_clobbered(is_dead, fake_unify, _).
allow_unify_with_clobbered(is_dead, _, detism_det).

%-----------------------------------------------------------------------------%

:- pred check_not_clobbered(uniqueness::in, unify_is_real::in) is det.

    % Sanity check.
check_not_clobbered(Uniq, Real) :-
    ( Real = real_unify, Uniq = clobbered ->
        unexpected(this_file, "abstractly_unify_inst_3: clobbered inst")
    ; Real = real_unify, Uniq = mostly_clobbered ->
        unexpected(this_file, "abstractly_unify_inst_3: mostly_clobbered inst")
    ;
        true
    ).

%-----------------------------------------------------------------------------%

:- pred make_ground_inst_list_lives(list(mer_inst)::in, is_live::in,
    list(is_live)::in, uniqueness::in, unify_is_real::in,
    list(mer_inst)::out, determinism::out,
    module_info::in, module_info::out) is semidet.

make_ground_inst_list_lives([], _, _, _, _, [], detism_det, !ModuleInfo).
make_ground_inst_list_lives([Inst0 | Insts0], Live, [ArgLive | ArgLives],
        Uniq, Real, [Inst | Insts], Det, !ModuleInfo) :-
    ( Live = is_live, ArgLive = is_live ->
        BothLive = is_live
    ;
        BothLive = is_dead
    ),
    make_ground_inst(Inst0, BothLive, Uniq, Real, Inst, Det1,
        !ModuleInfo),
    make_ground_inst_list_lives(Insts0, Live, ArgLives, Uniq, Real,
        Insts, Det2, !ModuleInfo),
    det_par_conjunction_detism(Det1, Det2, Det).

:- pred make_ground_inst_list(list(mer_inst)::in, is_live::in, uniqueness::in,
    unify_is_real::in, list(mer_inst)::out, determinism::out,
    module_info::in, module_info::out) is semidet.

make_ground_inst_list([], _, _, _, [], detism_det, !ModuleInfo).
make_ground_inst_list([Inst0 | Insts0], Live, Uniq, Real, [Inst | Insts], Det,
        !ModuleInfo) :-
    make_ground_inst(Inst0, Live, Uniq, Real, Inst, Det1, !ModuleInfo),
    make_ground_inst_list(Insts0, Live, Uniq, Real, Insts, Det2,
        !ModuleInfo),
    det_par_conjunction_detism(Det1, Det2, Det).

    % Abstractly unify an inst with `ground' and calculate the new inst
    % and the determinism of the unification.
    %
:- pred make_ground_inst(mer_inst::in, is_live::in, uniqueness::in,
    unify_is_real::in, mer_inst::out, determinism::out,
    module_info::in, module_info::out) is semidet.

make_ground_inst(not_reached, _, _, _, not_reached, detism_erroneous,
        !ModuleInfo).
make_ground_inst(any(Uniq0, HOInstInfo), IsLive, Uniq1, Real,
        ground(Uniq, HOInstInfo), detism_semi, !ModuleInfo) :-
    unify_uniq(IsLive, Real, detism_semi, Uniq0, Uniq1, Uniq).
make_ground_inst(free, IsLive, Uniq0, Real, ground(Uniq, none), detism_det,
        !ModuleInfo) :-
    unify_uniq(IsLive, Real, detism_det, unique, Uniq0, Uniq).
make_ground_inst(free(T), IsLive, Uniq0, Real,
        defined_inst(typed_ground(Uniq, T)), detism_det, !ModuleInfo) :-
    unify_uniq(IsLive, Real, detism_det, unique, Uniq0, Uniq).
make_ground_inst(bound(Uniq0, BoundInsts0), IsLive, Uniq1, Real,
        bound(Uniq, BoundInsts), Det, !ModuleInfo) :-
    unify_uniq(IsLive, Real, detism_semi, Uniq0, Uniq1, Uniq),
    make_ground_bound_inst_list(BoundInsts0, IsLive, Uniq1, Real,
        BoundInsts, Det1, !ModuleInfo),
    det_par_conjunction_detism(Det1, detism_semi, Det).
make_ground_inst(ground(Uniq0, HOInstInfo), IsLive, Uniq1, Real,
        ground(Uniq, HOInstInfo), detism_semi, !ModuleInfo) :-
    unify_uniq(IsLive, Real, detism_semi, Uniq0, Uniq1, Uniq).
make_ground_inst(inst_var(_), _, _, _, _, _, _, _) :-
    unexpected(this_file, "make_ground_inst: free inst var").
make_ground_inst(constrained_inst_vars(InstVars, InstConstraint), IsLive,
        Uniq, Real, Inst, Det, !ModuleInfo) :-
    abstractly_unify_constrained_inst_vars(IsLive, InstVars,
        InstConstraint, ground(Uniq, none), Real, Inst, Det, !ModuleInfo).
make_ground_inst(abstract_inst(_,_), _, _, _, ground(shared, none),
        detism_semi, !ModuleInfo).
make_ground_inst(defined_inst(InstName), IsLive, Uniq, Real, Inst, Det,
        !ModuleInfo) :-
    % Check whether the inst name is already in the ground_inst table.
    module_info_get_inst_table(!.ModuleInfo, InstTable0),
    inst_table_get_ground_insts(InstTable0, GroundInsts0),
    GroundInstKey = ground_inst(InstName, IsLive, Uniq, Real),
    ( map.search(GroundInsts0, GroundInstKey, Result) ->
        ( Result = inst_det_known(GroundInst0, Det0) ->
            GroundInst = GroundInst0,
            Det = Det0
        ;
            GroundInst = defined_inst(GroundInstKey),
            Det = detism_det
            % We can safely assume this is det, since if it were semidet,
            % we would have noticed this in the process of unfolding the
            % definition.
        )
    ;
        % Insert the inst name in the ground_inst table, with value `unknown'
        % for the moment.
        svmap.det_insert(GroundInstKey, inst_det_unknown,
            GroundInsts0, GroundInsts1),
        inst_table_set_ground_insts(GroundInsts1, InstTable0, InstTable1),
        module_info_set_inst_table(InstTable1, !ModuleInfo),

        % Expand the inst name, and invoke ourself recursively on its
        % expansion.
        inst_lookup(!.ModuleInfo, InstName, Inst0),
        inst_expand(!.ModuleInfo, Inst0, Inst1),
        make_ground_inst(Inst1, IsLive, Uniq, Real, GroundInst, Det,
            !ModuleInfo),

        % Now that we have determined the resulting Inst, store the appropriate
        % value `known(GroundInst, Det)' in the ground_inst table.
        module_info_get_inst_table(!.ModuleInfo, InstTable2),
        inst_table_get_ground_insts(InstTable2, GroundInsts2),
        svmap.det_update(GroundInstKey, inst_det_known(GroundInst, Det),
            GroundInsts2, GroundInsts),
        inst_table_set_ground_insts(GroundInsts, InstTable2, InstTable),
        module_info_set_inst_table(InstTable, !ModuleInfo)
    ),
    % Avoid expanding recursive insts.
    ( inst_contains_instname(GroundInst, !.ModuleInfo, GroundInstKey) ->
        Inst = defined_inst(GroundInstKey)
    ;
        Inst = GroundInst
    ).

:- pred make_ground_bound_inst_list(list(bound_inst)::in, is_live::in,
    uniqueness::in, unify_is_real::in,
    list(bound_inst)::out, determinism::out,
    module_info::in, module_info::out) is semidet.

make_ground_bound_inst_list([], _, _, _, [], detism_det, !ModuleInfo).
make_ground_bound_inst_list([Bound0 | Bounds0], IsLive, Uniq, Real,
            [Bound | Bounds], Det, !ModuleInfo) :-
    Bound0 = bound_functor(ConsId, ArgInsts0),
    make_ground_inst_list(ArgInsts0, IsLive, Uniq, Real, ArgInsts, Det1,
        !ModuleInfo),
    Bound = bound_functor(ConsId, ArgInsts),
    make_ground_bound_inst_list(Bounds0, IsLive, Uniq, Real, Bounds, Det2,
        !ModuleInfo),
    det_par_conjunction_detism(Det1, Det2, Det).

%-----------------------------------------------------------------------------%

    % Abstractly unify an inst with `any' and calculate the new inst
    % and the determinism of the unification.
    %
:- pred make_any_inst(mer_inst::in, is_live::in, uniqueness::in,
    unify_is_real::in, mer_inst::out, determinism::out,
    module_info::in, module_info::out) is semidet.

make_any_inst(not_reached, _, _, _, not_reached, detism_erroneous, !ModuleInfo).
make_any_inst(any(Uniq0, HOInstInfo), IsLive, Uniq1, Real,
        any(Uniq, HOInstInfo), detism_semi, !ModuleInfo) :-
    allow_unify_bound_any(Real),
    unify_uniq(IsLive, Real, detism_semi, Uniq0, Uniq1, Uniq).
make_any_inst(free, IsLive, Uniq0, Real, any(Uniq, none), detism_det,
        !ModuleInfo) :-
    unify_uniq(IsLive, Real, detism_det, unique, Uniq0, Uniq).
make_any_inst(free(T), IsLive, Uniq, Real, defined_inst(Any), detism_det,
        !ModuleInfo) :-
    % The following is a round-about way of doing this
    %   unify_uniq(IsLive, Real, detism_det, unique, Uniq0, Uniq),
    %   Any = typed_any(Uniq, T).
    % without the need for a `typed_any' inst.
    Any = typed_inst(T, unify_inst(IsLive, free, any(Uniq, none), Real)).
make_any_inst(bound(Uniq0, BoundInsts0), IsLive, Uniq1, Real,
        bound(Uniq, BoundInsts), Det, !ModuleInfo) :-
    allow_unify_bound_any(Real),
    unify_uniq(IsLive, Real, detism_semi, Uniq0, Uniq1, Uniq),
    make_any_bound_inst_list(BoundInsts0, IsLive, Uniq1, Real,
        BoundInsts, Det1, !ModuleInfo),
    det_par_conjunction_detism(Det1, detism_semi, Det).
make_any_inst(ground(Uniq0, PredInst), IsLive, Uniq1, Real,
        ground(Uniq, PredInst), detism_semi, !ModuleInfo) :-
    allow_unify_bound_any(Real),
    unify_uniq(IsLive, Real, detism_semi, Uniq0, Uniq1, Uniq).
make_any_inst(inst_var(_), _, _, _, _, _, _, _) :-
    unexpected(this_file, "make_any_inst: free inst var").
make_any_inst(constrained_inst_vars(InstVars, InstConstraint), IsLive,
        Uniq, Real, Inst, Det, !ModuleInfo) :-
    abstractly_unify_constrained_inst_vars(IsLive, InstVars,
        InstConstraint, any(Uniq, none), Real, Inst, Det, !ModuleInfo).
make_any_inst(abstract_inst(_,_), _, _, _, any(shared, none), detism_semi,
        !ModuleInfo).
make_any_inst(defined_inst(InstName), IsLive, Uniq, Real, Inst, Det,
        !ModuleInfo) :-
        % check whether the inst name is already in the
        % any_inst table
    module_info_get_inst_table(!.ModuleInfo, InstTable0),
    inst_table_get_any_insts(InstTable0, AnyInsts0),
    AnyInstKey = any_inst(InstName, IsLive, Uniq, Real),
    ( map.search(AnyInsts0, AnyInstKey, Result) ->
        ( Result = inst_det_known(AnyInst0, Det0) ->
            AnyInst = AnyInst0,
            Det = Det0
        ;
            AnyInst = defined_inst(AnyInstKey),
            Det = detism_det
            % We can safely assume this is det, since if it were semidet,
            % we would have noticed this in the process of unfolding the
            % definition.
        )
    ;
        % Insert the inst name in the any_inst table, with value `unknown'
        % for the moment.
        svmap.det_insert(AnyInstKey, inst_det_unknown, AnyInsts0, AnyInsts1),
        inst_table_set_any_insts(AnyInsts1, InstTable0, InstTable1),
        module_info_set_inst_table(InstTable1, !ModuleInfo),

        % Expand the inst name, and invoke ourself recursively on its
        % expansion.
        inst_lookup(!.ModuleInfo, InstName, Inst0),
        inst_expand(!.ModuleInfo, Inst0, Inst1),
        make_any_inst(Inst1, IsLive, Uniq, Real, AnyInst, Det, !ModuleInfo),

        % Now that we have determined the resulting Inst, store the appropriate
        % value `known(AnyInst, Det)' in the any_inst table.
        module_info_get_inst_table(!.ModuleInfo, InstTable2),
        inst_table_get_any_insts(InstTable2, AnyInsts2),
        svmap.det_update(AnyInstKey, inst_det_known(AnyInst, Det),
            AnyInsts2, AnyInsts),
        inst_table_set_any_insts(AnyInsts, InstTable2, InstTable),
        module_info_set_inst_table(InstTable, !ModuleInfo)
    ),
    % Avoid expanding recursive insts.
    ( inst_contains_instname(AnyInst, !.ModuleInfo, AnyInstKey) ->
        Inst = defined_inst(AnyInstKey)
    ;
        Inst = AnyInst
    ).

:- pred make_any_bound_inst_list(list(bound_inst)::in, is_live::in,
    uniqueness::in, unify_is_real::in,
    list(bound_inst)::out, determinism::out,
    module_info::in, module_info::out) is semidet.

make_any_bound_inst_list([], _, _, _, [], detism_det, !ModuleInfo).
make_any_bound_inst_list([Bound0 | Bounds0], IsLive, Uniq, Real,
        [Bound | Bounds], Det, !ModuleInfo) :-
    Bound0 = bound_functor(ConsId, ArgInsts0),
    make_any_inst_list(ArgInsts0, IsLive, Uniq, Real,
        ArgInsts, Det1, !ModuleInfo),
    Bound = bound_functor(ConsId, ArgInsts),
    make_any_bound_inst_list(Bounds0, IsLive, Uniq, Real, Bounds, Det2,
        !ModuleInfo),
    det_par_conjunction_detism(Det1, Det2, Det).

:- pred make_any_inst_list(list(mer_inst)::in, is_live::in, uniqueness::in,
    unify_is_real::in, list(mer_inst)::out, determinism::out,
    module_info::in, module_info::out) is semidet.

make_any_inst_list([], _, _, _, [], detism_det, !ModuleInfo).
make_any_inst_list([Inst0 | Insts0], Live, Uniq, Real, [Inst | Insts], Det,
        !ModuleInfo) :-
    make_any_inst(Inst0, Live, Uniq, Real, Inst, Det1, !ModuleInfo),
    make_any_inst_list(Insts0, Live, Uniq, Real, Insts, Det2, !ModuleInfo),
    det_par_conjunction_detism(Det1, Det2, Det).

:- pred make_any_inst_list_lives(list(mer_inst)::in, is_live::in,
    list(is_live)::in, uniqueness::in, unify_is_real::in,
    list(mer_inst)::out, determinism::out,
    module_info::in, module_info::out) is semidet.

make_any_inst_list_lives([], _, _, _, _, [], detism_det, !ModuleInfo).
make_any_inst_list_lives([Inst0 | Insts0], Live, [ArgLive | ArgLives],
        Uniq, Real, [Inst | Insts], Det, !ModuleInfo) :-
    ( Live = is_live, ArgLive = is_live ->
        BothLive = is_live
    ;
        BothLive = is_dead
    ),
    make_any_inst(Inst0, BothLive, Uniq, Real, Inst, Det1, !ModuleInfo),
    make_any_inst_list_lives(Insts0, Live, ArgLives, Uniq, Real,
        Insts, Det2, !ModuleInfo),
    det_par_conjunction_detism(Det1, Det2, Det).

%-----------------------------------------------------------------------------%

:- pred maybe_make_shared_inst_list(list(mer_inst)::in, list(is_live)::in,
    list(mer_inst)::out, module_info::in, module_info::out) is det.

maybe_make_shared_inst_list([], [], [], !ModuleInfo).
maybe_make_shared_inst_list([Inst0 | Insts0], [IsLive | IsLives],
        [Inst | Insts], !ModuleInfo) :-
    (
        IsLive = is_live,
        make_shared_inst(Inst0, Inst, !ModuleInfo)
    ;
        IsLive = is_dead,
        Inst = Inst0
    ),
    maybe_make_shared_inst_list(Insts0, IsLives, Insts, !ModuleInfo).
maybe_make_shared_inst_list([], [_ | _], _, _, _) :-
    unexpected(this_file, "maybe_make_shared_inst_list: length mismatch").
maybe_make_shared_inst_list([_ | _], [], _, _, _) :-
    unexpected(this_file, "maybe_make_shared_inst_list: length mismatch").

make_shared_inst_list([], [], !ModuleInfo).
make_shared_inst_list([Inst0 | Insts0], [Inst | Insts], !ModuleInfo) :-
    make_shared_inst(Inst0, Inst, !ModuleInfo),
    make_shared_inst_list(Insts0, Insts, !ModuleInfo).

    % Make an inst shared; replace all occurrences of `unique' or
    % `mostly_unique' in the inst with `shared'.
    %
:- pred make_shared_inst(mer_inst::in, mer_inst::out,
    module_info::in, module_info::out) is det.

make_shared_inst(not_reached, not_reached, !ModuleInfo).
make_shared_inst(any(Uniq0, HOInstInfo), any(Uniq, HOInstInfo), !ModuleInfo) :-
    make_shared(Uniq0, Uniq).
make_shared_inst(free, free, !ModuleInfo) :-
    % The caller should ensure that this never happens.
    unexpected(this_file,
        "make_shared_inst: cannot make shared version of `free'").
make_shared_inst(free(T), free(T), !ModuleInfo) :-
    % The caller should ensure that this never happens.
    unexpected(this_file,
        "make_shared_inst: cannot make shared version of `free(T)'").
make_shared_inst(bound(Uniq0, BoundInsts0), bound(Uniq, BoundInsts),
        !ModuleInfo) :-
    % XXX This code has a performance problem.
    %
    % The problem is that e.g. in a list of length N, you'll have N variables
    % for the skeletons whose insts contain an average of N/2 occurences of
    % `bound' each, so the complexity of running make_shared_inst on all their
    % insts is quadratic in N.
    %
    % One potential way to fix this would be to introduce a new function
    % symbol for insts, make_shared(mer_inst), which would have the meaning of
    % requiring any compiler component that finds it to run make_shared_inst
    % on its argument before using it. That would require parameterizing
    % make_shared_inst to say whether it is being used in such a manner.
    %
    % Another similar fix would be to add an extra argument to bound/2
    % to say whether the insts in its last argument should implicitly be made
    % shared.
    %
    % If Uniq0 = shared, then all the other cells below it should also be
    % shared as well, which means we should be able to avoid the call to
    % make_shared_bound_inst_list below. However, for the kinds of goals
    % for which the call is a bottleneck, the goals resulting from the
    % construction of large ground terms, Uniq0 will in fact be `unique'.

    make_shared(Uniq0, Uniq),
    make_shared_bound_inst_list(BoundInsts0, BoundInsts, !ModuleInfo).
make_shared_inst(ground(Uniq0, PredInst), ground(Uniq, PredInst),
        !ModuleInfo) :-
    make_shared(Uniq0, Uniq).
make_shared_inst(inst_var(_), _, _, _) :-
    unexpected(this_file, "make_shared_inst: free inst var").
make_shared_inst(constrained_inst_vars(InstVars, Inst0), Inst, !ModuleInfo) :-
    make_shared_inst(Inst0, Inst1, !ModuleInfo),
    ( \+ inst_matches_final(Inst1, Inst0, !.ModuleInfo) ->
        Inst = Inst1
    ;
        Inst = constrained_inst_vars(InstVars, Inst1)
    ).
make_shared_inst(abstract_inst(_,_), _, !ModuleInfo) :-
    unexpected(this_file, "make_shared_inst(abstract_inst)").
make_shared_inst(defined_inst(InstName), Inst, !ModuleInfo) :-
    % Check whether the inst name is already in the shared_inst table.
    module_info_get_inst_table(!.ModuleInfo, InstTable0),
    inst_table_get_shared_insts(InstTable0, SharedInsts0),
    ( map.search(SharedInsts0, InstName, Result) ->
        ( Result = inst_known(SharedInst0) ->
            SharedInst = SharedInst0
        ;
            SharedInst = defined_inst(InstName)
        )
    ;
        % Insert the inst name in the shared_inst table, with value `unknown'
        % for the moment.
        svmap.det_insert(InstName, inst_unknown, SharedInsts0, SharedInsts1),
        inst_table_set_shared_insts(SharedInsts1, InstTable0, InstTable1),
        module_info_set_inst_table(InstTable1, !ModuleInfo),

        % Expand the inst name, and invoke ourself recursively on its
        % expansion.
        inst_lookup(!.ModuleInfo, InstName, Inst0),
        inst_expand(!.ModuleInfo, Inst0, Inst1),
        make_shared_inst(Inst1, SharedInst, !ModuleInfo),

        % Now that we have determined the resulting Inst, store the appropriate
        % value `known(SharedInst)' in the shared_inst table.
        module_info_get_inst_table(!.ModuleInfo, InstTable2),
        inst_table_get_shared_insts(InstTable2, SharedInsts2),
        svmap.det_update(InstName, inst_known(SharedInst),
            SharedInsts2, SharedInsts),
        inst_table_set_shared_insts(SharedInsts, InstTable2, InstTable),
        module_info_set_inst_table(InstTable, !ModuleInfo)
    ),
    % Avoid expanding recursive insts.
    ( inst_contains_instname(SharedInst, !.ModuleInfo, InstName) ->
        Inst = defined_inst(InstName)
    ;
        Inst = SharedInst
    ).

:- pred make_shared(uniqueness::in, uniqueness::out) is det.

make_shared(unique, shared).
make_shared(mostly_unique, shared).
make_shared(shared, shared).
make_shared(mostly_clobbered, mostly_clobbered).
make_shared(clobbered, clobbered).

:- pred make_shared_bound_inst_list(list(bound_inst)::in,
    list(bound_inst)::out, module_info::in, module_info::out) is det.

make_shared_bound_inst_list([], [], !ModuleInfo).
make_shared_bound_inst_list([Bound0 | Bounds0], [Bound | Bounds],
        !ModuleInfo) :-
    Bound0 = bound_functor(ConsId, ArgInsts0),
    make_shared_inst_list(ArgInsts0, ArgInsts, !ModuleInfo),
    Bound = bound_functor(ConsId, ArgInsts),
    make_shared_bound_inst_list(Bounds0, Bounds, !ModuleInfo).

%-----------------------------------------------------------------------------%

    % Make an inst mostly-uniq: replace all occurrences of `unique'
    % in the inst with `mostly_unique'.  (Used by unique_modes.m to
    % change the insts of semidet-live or nondet-live insts.)
    %
make_mostly_uniq_inst(not_reached, not_reached, !ModuleInfo).
make_mostly_uniq_inst(any(Uniq0, HOInstInfo), any(Uniq, HOInstInfo),
        !ModuleInfo) :-
    make_mostly_uniq(Uniq0, Uniq).
make_mostly_uniq_inst(free, free, !ModuleInfo).
make_mostly_uniq_inst(free(T), free(T), !ModuleInfo).
make_mostly_uniq_inst(bound(Uniq0, BoundInsts0), bound(Uniq, BoundInsts),
        !ModuleInfo) :-
        % XXX could improve efficiency by avoiding recursion here
    make_mostly_uniq(Uniq0, Uniq),
    make_mostly_uniq_bound_inst_list(BoundInsts0, BoundInsts, !ModuleInfo).
make_mostly_uniq_inst(ground(Uniq0, PredInst), ground(Uniq, PredInst),
        !ModuleInfo) :-
    make_mostly_uniq(Uniq0, Uniq).
make_mostly_uniq_inst(inst_var(_), _, _, _) :-
    unexpected(this_file, "make_mostly_uniq_inst: free inst var").
make_mostly_uniq_inst(constrained_inst_vars(InstVars, Inst0), Inst,
        !ModuleInfo) :-
    make_mostly_uniq_inst(Inst0, Inst1, !ModuleInfo),
    ( \+ inst_matches_final(Inst1, Inst0, !.ModuleInfo) ->
        Inst = Inst1
    ;
        Inst = constrained_inst_vars(InstVars, Inst1)
    ).
make_mostly_uniq_inst(abstract_inst(_,_), _, !ModuleInfo) :-
    unexpected(this_file, "make_mostly_uniq_inst(abstract_inst)").
make_mostly_uniq_inst(defined_inst(InstName), Inst, !ModuleInfo) :-
    % Check whether the inst name is already in the mostly_uniq_inst table.
    module_info_get_inst_table(!.ModuleInfo, InstTable0),
    inst_table_get_mostly_uniq_insts(InstTable0, NondetLiveInsts0),
    ( map.search(NondetLiveInsts0, InstName, Result) ->
        ( Result = inst_known(NondetLiveInst0) ->
            NondetLiveInst = NondetLiveInst0
        ;
            NondetLiveInst = defined_inst(InstName)
        )
    ;
        % Insert the inst name in the mostly_uniq_inst table, with value
        % `unknown' for the moment.
        svmap.det_insert(InstName, inst_unknown,
            NondetLiveInsts0, NondetLiveInsts1),
        inst_table_set_mostly_uniq_insts(NondetLiveInsts1,
            InstTable0, InstTable1),
        module_info_set_inst_table(InstTable1, !ModuleInfo),

        % Expand the inst name, and invoke ourself recursively on its
        % expansion.
        inst_lookup(!.ModuleInfo, InstName, Inst0),
        inst_expand(!.ModuleInfo, Inst0, Inst1),
        make_mostly_uniq_inst(Inst1, NondetLiveInst, !ModuleInfo),

        % Now that we have determined the resulting Inst, store the appropriate
        % value `known(NondetLiveInst)' in the mostly_uniq_inst table.
        module_info_get_inst_table(!.ModuleInfo, InstTable2),
        inst_table_get_mostly_uniq_insts(InstTable2, NondetLiveInsts2),
        svmap.det_update(InstName, inst_known(NondetLiveInst),
            NondetLiveInsts2, NondetLiveInsts),
        inst_table_set_mostly_uniq_insts(NondetLiveInsts,
            InstTable2, InstTable),
        module_info_set_inst_table(InstTable, !ModuleInfo)
    ),
    % Avoid expanding recursive insts.
    ( inst_contains_instname(NondetLiveInst, !.ModuleInfo, InstName) ->
        Inst = defined_inst(InstName)
    ;
        Inst = NondetLiveInst
    ).

:- pred make_mostly_uniq(uniqueness::in, uniqueness::out) is det.

make_mostly_uniq(unique, mostly_unique).
make_mostly_uniq(mostly_unique, mostly_unique).
make_mostly_uniq(shared, shared).
make_mostly_uniq(mostly_clobbered, mostly_clobbered).
make_mostly_uniq(clobbered, clobbered).

:- pred make_mostly_uniq_bound_inst_list(list(bound_inst)::in,
    list(bound_inst)::out, module_info::in, module_info::out) is det.

make_mostly_uniq_bound_inst_list([], [], !ModuleInfo).
make_mostly_uniq_bound_inst_list([Bound0 | Bounds0], [Bound | Bounds],
        !ModuleInfo) :-
    Bound0 = bound_functor(ConsId, ArgInsts0),
    make_mostly_uniq_inst_list(ArgInsts0, ArgInsts, !ModuleInfo),
    Bound = bound_functor(ConsId, ArgInsts),
    make_mostly_uniq_bound_inst_list(Bounds0, Bounds, !ModuleInfo).

:- pred make_mostly_uniq_inst_list(list(mer_inst)::in, list(mer_inst)::out,
    module_info::in, module_info::out) is det.

make_mostly_uniq_inst_list([], [], !ModuleInfo).
make_mostly_uniq_inst_list([Inst0 | Insts0], [Inst | Insts], !ModuleInfo) :-
    make_mostly_uniq_inst(Inst0, Inst, !ModuleInfo),
    make_mostly_uniq_inst_list(Insts0, Insts, !ModuleInfo).

%-----------------------------------------------------------------------------%

    % Should we allow unifications between bound (or ground) insts
    % and `any' insts?
    % Previously we only allowed this for fake_unifies,
    % but now we allow it for real_unifies too.
    %
:- pred allow_unify_bound_any(unify_is_real::in) is det.

allow_unify_bound_any(_) :- true.

%-----------------------------------------------------------------------------%

inst_merge(InstA, InstB, MaybeType, Inst, !ModuleInfo) :-
    % Check whether this pair of insts is already in the merge_insts table.
    module_info_get_inst_table(!.ModuleInfo, InstTable0),
    inst_table_get_merge_insts(InstTable0, MergeInstTable0),
    ThisInstPair = InstA - InstB,
    ( map.search(MergeInstTable0, ThisInstPair, Result) ->
        ( Result = inst_known(MergedInst) ->
            Inst0 = MergedInst
        ;
            Inst0 = defined_inst(merge_inst(InstA, InstB))
        )
    ;
        % Insert ThisInstPair into the table with value `unknown'.
        svmap.det_insert(ThisInstPair, inst_unknown,
            MergeInstTable0, MergeInstTable1),
        inst_table_set_merge_insts(MergeInstTable1, InstTable0, InstTable1),
        module_info_set_inst_table(InstTable1, !ModuleInfo),

        % Merge the insts.
        inst_merge_2(InstA, InstB, MaybeType, Inst0, !ModuleInfo),

        % Now update the value associated with ThisInstPair.
        module_info_get_inst_table(!.ModuleInfo, InstTable2),
        inst_table_get_merge_insts(InstTable2, MergeInstTable2),
        svmap.det_update(ThisInstPair, inst_known(Inst0),
            MergeInstTable2, MergeInstTable3),
        inst_table_set_merge_insts(MergeInstTable3, InstTable2, InstTable3),
        module_info_set_inst_table(InstTable3, !ModuleInfo)
    ),
    % Avoid expanding recursive insts.
    ( inst_contains_instname(Inst0, !.ModuleInfo, merge_inst(InstA, InstB)) ->
        Inst = defined_inst(merge_inst(InstA, InstB))
    ;
        Inst = Inst0
    ).

:- pred inst_merge_2(mer_inst::in, mer_inst::in, maybe(mer_type)::in,
    mer_inst::out, module_info::in, module_info::out) is semidet.

inst_merge_2(InstA, InstB, MaybeType, Inst, !ModuleInfo) :-
%   % would this test improve efficiency??
%   ( InstA = InstB ->
%       Inst = InstA,
%   ;
    inst_expand(!.ModuleInfo, InstA, InstA2),
    inst_expand(!.ModuleInfo, InstB, InstB2),
    ( InstB2 = not_reached ->
        Inst = InstA2
    ;
        inst_merge_3(InstA2, InstB2, MaybeType, Inst, !ModuleInfo)
    ).

:- pred inst_merge_3(mer_inst::in, mer_inst::in, maybe(mer_type)::in,
    mer_inst::out, module_info::in, module_info::out) is semidet.

inst_merge_3(InstA, InstB, MaybeType, Inst, !ModuleInfo) :-
    ( InstA = constrained_inst_vars(InstVarsA, InstA1) ->
        ( InstB = constrained_inst_vars(InstVarsB, InstB1) ->
            inst_merge(InstA1, InstB1, MaybeType, Inst0, !ModuleInfo),
            InstVars = InstVarsA `set.intersect` InstVarsB,
            ( set.non_empty(InstVars) ->
                Inst = constrained_inst_vars(InstVars, Inst0)
                % We can keep the constrained_inst_vars here since
                % Inst0 = InstA1 `lub` InstB1 and the original constraint
                % on the InstVars, InstC, must have been such that
                % InstA1 `lub` InstB1 =< InstC.
            ;
                Inst = Inst0
            )
        ;
            inst_merge(InstA1, InstB, MaybeType, Inst, !ModuleInfo)
        )
    ;
        inst_merge_4(InstA, InstB, MaybeType, Inst, !ModuleInfo)
    ).

:- pred inst_merge_4(mer_inst::in, mer_inst::in, maybe(mer_type)::in,
    mer_inst::out, module_info::in, module_info::out) is semidet.

% We do not yet allow merging of `free' and `any',
% except in the case where the any is `mostly_clobbered_any'
% or `clobbered_any', because that would require inserting
% additional code to initialize the free var.
%
% We do NOT plan to allow merging of `free' and `ground'
% to produce `any', because that would introduce `any'
% insts even for builtin types such as `int' which can't
% support `any'.  It might also make the mode system
% too weak -- it might not be able to detect bugs as well
% as it can currently.

inst_merge_4(any(UniqA, HOInstInfoA), any(UniqB, HOInstInfoB), _,
        any(Uniq, HOInstInfo), !ModuleInfo) :-
    merge_ho_inst_info(HOInstInfoA, HOInstInfoB, HOInstInfo, !ModuleInfo),
    merge_uniq(UniqA, UniqB, Uniq).
inst_merge_4(any(Uniq, HOInstInfo), free, _, any(Uniq, HOInstInfo),
        !ModuleInfo) :-
    % We do not yet allow merge of any with free, except for clobbered anys.
    ( Uniq = clobbered ; Uniq = mostly_clobbered ).
inst_merge_4(any(UniqA, _), bound(UniqB, ListB), _, any(Uniq, none),
        !ModuleInfo) :-
    merge_uniq_bound(UniqA, UniqB, ListB, !.ModuleInfo, Uniq),
    % We do not yet allow merge of any with free, except for clobbered anys.
    ( ( Uniq = clobbered ; Uniq = mostly_clobbered ) ->
        true
    ;
        bound_inst_list_is_ground_or_any(ListB, !.ModuleInfo)
    ).
inst_merge_4(any(UniqA, HOInstInfoA), ground(UniqB, HOInstInfoB), _,
        any(Uniq, HOInstInfo), !ModuleInfo) :-
    merge_ho_inst_info(HOInstInfoA, HOInstInfoB, HOInstInfo, !ModuleInfo),
    merge_uniq(UniqA, UniqB, Uniq).
inst_merge_4(any(UniqA, _), abstract_inst(_, _), _, any(Uniq, none),
        !ModuleInfo) :-
    merge_uniq(UniqA, shared, Uniq),
    % We do not yet allow merge of any with free, except for clobbered anys.
    ( Uniq = clobbered ; Uniq = mostly_clobbered ).
inst_merge_4(free, any(Uniq, HOInstInfo), _, any(Uniq, HOInstInfo),
        !ModuleInfo) :-
    % We do not yet allow merge of any with free, except for clobbered anys.
    ( Uniq = clobbered ; Uniq = mostly_clobbered ).
inst_merge_4(bound(UniqA, ListA), any(UniqB, _), _, any(Uniq, none),
        !ModuleInfo) :-
    merge_uniq_bound(UniqB, UniqA, ListA, !.ModuleInfo, Uniq),
    % We do not yet allow merge of any with free, except for clobbered anys.
    ( ( Uniq = clobbered ; Uniq = mostly_clobbered ) ->
        true
    ;
        bound_inst_list_is_ground_or_any(ListA, !.ModuleInfo)
    ).
inst_merge_4(ground(UniqA, HOInstInfoA), any(UniqB, HOInstInfoB), _,
        any(Uniq, HOInstInfo), !ModuleInfo) :-
    merge_ho_inst_info(HOInstInfoA, HOInstInfoB, HOInstInfo, !ModuleInfo),
    merge_uniq(UniqA, UniqB, Uniq).
inst_merge_4(abstract_inst(_, _), any(UniqB, _), _, any(Uniq, none),
        !ModuleInfo) :-
    merge_uniq(shared, UniqB, Uniq),
    % We do not yet allow merge of any with free, except for clobbered anys.
    ( Uniq = clobbered ; Uniq = mostly_clobbered ).
inst_merge_4(free, free, _, free, !ModuleInfo).
inst_merge_4(bound(UniqA, ListA), bound(UniqB, ListB), MaybeType,
        bound(Uniq, List), !ModuleInfo) :-
    merge_uniq(UniqA, UniqB, Uniq),
    bound_inst_list_merge(ListA, ListB, MaybeType, List, !ModuleInfo).
inst_merge_4(bound(UniqA, ListA), ground(UniqB, _), MaybeType, Result,
        !ModuleInfo) :-
    inst_merge_bound_ground(UniqA, ListA, UniqB, MaybeType, Result,
        !ModuleInfo).
inst_merge_4(ground(UniqA, _), bound(UniqB, ListB), MaybeType, Result,
        !ModuleInfo) :-
    inst_merge_bound_ground(UniqB, ListB, UniqA, MaybeType, Result,
        !ModuleInfo).
inst_merge_4(ground(UniqA, HOInstInfoA), ground(UniqB, HOInstInfoB), _,
        ground(Uniq, HOInstInfo), !ModuleInfo) :-
    merge_ho_inst_info(HOInstInfoA, HOInstInfoB, HOInstInfo, !ModuleInfo),
    merge_uniq(UniqA, UniqB, Uniq).
inst_merge_4(abstract_inst(Name, ArgsA), abstract_inst(Name, ArgsB),
        _, abstract_inst(Name, Args), !ModuleInfo) :-
    % We don't know the arguments types of an abstract inst.
    MaybeTypes = list.duplicate(list.length(ArgsA), no),
    inst_list_merge(ArgsA, ArgsB, MaybeTypes, Args, !ModuleInfo).
inst_merge_4(not_reached, Inst, _, Inst, !ModuleInfo).

    % merge_uniq(A, B, C) succeeds if C is minimum of A and B in the ordering
    % clobbered < mostly_clobbered < shared < mostly_unique < unique.
    %
:- pred merge_uniq(uniqueness::in, uniqueness::in, uniqueness::out) is det.

merge_uniq(UniqA, UniqB, Merged) :-
    ( unique_matches_initial(UniqA, UniqB) ->       % A >= B
        Merged = UniqB
    ;
        Merged = UniqA
    ).

:- pred merge_ho_inst_info(ho_inst_info::in, ho_inst_info::in,
    ho_inst_info::out, module_info::in, module_info::out) is semidet.

merge_ho_inst_info(HOInstInfoA, HOInstInfoB, HOInstInfo, !ModuleInfo) :-
    (
        HOInstInfoA = higher_order(PredA),
        HOInstInfoB = higher_order(PredB)
    ->
        % If they specify matching pred insts, but one is more precise
        % (specifies more info) than the other, then we want to choose
        % the least precise one.
        ( pred_inst_matches(PredA, PredB, !.ModuleInfo) ->
            HOInstInfo = higher_order(PredB)
        ; pred_inst_matches(PredB, PredA, !.ModuleInfo) ->
            HOInstInfo = higher_order(PredA)
        ;
            % If either is a function inst with non-standard modes,
            % don't allow the higher-order information to be lost.
            \+ pred_inst_info_is_nonstandard_func_mode(!.ModuleInfo, PredA),
            \+ pred_inst_info_is_nonstandard_func_mode(!.ModuleInfo, PredB),
            HOInstInfo = none
        )
    ;
        \+ ho_inst_info_is_nonstandard_func_mode(!.ModuleInfo, HOInstInfoA),
        \+ ho_inst_info_is_nonstandard_func_mode(!.ModuleInfo, HOInstInfoB),
        HOInstInfo = none
    ).

    % merge_uniq_bound(UniqA, UniqB, ListB, ModuleInfo, Uniq) succeeds iff
    % Uniq is the result of merging
    %
:- pred merge_uniq_bound(uniqueness::in, uniqueness::in, list(bound_inst)::in,
    module_info::in, uniqueness::out) is det.

merge_uniq_bound(UniqA, UniqB, ListB, ModuleInfo, Uniq) :-
    merge_uniq(UniqA, UniqB, Uniq0),
    set.init(Expansions0),
    merge_bound_inst_list_uniq(ListB, Uniq0, ModuleInfo,
        Expansions0, _Expansions, Uniq).

:- pred merge_bound_inst_list_uniq(list(bound_inst)::in, uniqueness::in,
    module_info::in, set(inst_name)::in,
    set(inst_name)::out, uniqueness::out) is det.

merge_bound_inst_list_uniq([], Uniq, _, !Expansions, Uniq).
merge_bound_inst_list_uniq([BoundInst | BoundInsts], Uniq0, ModuleInfo,
        !Expansions, Uniq) :-
    BoundInst = bound_functor(_ConsId, ArgInsts),
    merge_inst_list_uniq(ArgInsts, Uniq0, ModuleInfo, !Expansions, Uniq1),
    merge_bound_inst_list_uniq(BoundInsts, Uniq1, ModuleInfo, !Expansions,
        Uniq).

:- pred merge_inst_list_uniq(list(mer_inst)::in, uniqueness::in,
    module_info::in, set(inst_name)::in, set(inst_name)::out, uniqueness::out)
    is det.

merge_inst_list_uniq([], Uniq, _, !Expansions, Uniq).
merge_inst_list_uniq([Inst | Insts], Uniq0, ModuleInfo, !Expansions, Uniq) :-
    merge_inst_uniq(Inst, Uniq0, ModuleInfo, !Expansions, Uniq1),
    merge_inst_list_uniq(Insts, Uniq1, ModuleInfo, !Expansions, Uniq).

:- pred merge_inst_uniq(mer_inst::in, uniqueness::in, module_info::in,
    set(inst_name)::in, set(inst_name)::out, uniqueness::out) is det.

merge_inst_uniq(any(UniqA, _), UniqB, _, !Expansions, Uniq) :-
    merge_uniq(UniqA, UniqB, Uniq).
merge_inst_uniq(free, Uniq, _, !Expansions, Uniq).
merge_inst_uniq(free(_), Uniq, _, !Expansions, Uniq).
merge_inst_uniq(bound(UniqA, ListA), UniqB, ModuleInfo, !Expansions, Uniq) :-
    merge_uniq(UniqA, UniqB, Uniq0),
    merge_bound_inst_list_uniq(ListA, Uniq0, ModuleInfo,
        !Expansions, Uniq).
merge_inst_uniq(ground(UniqA, _), UniqB, _, !Expansions, Uniq) :-
    merge_uniq(UniqA, UniqB, Uniq).
merge_inst_uniq(abstract_inst(_,_), UniqB, _, !Expansions, Uniq) :-
    merge_uniq(shared, UniqB, Uniq).
merge_inst_uniq(defined_inst(InstName), UniqB, ModuleInfo,
        !Expansions, Uniq) :-
    ( set.member(InstName, !.Expansions) ->
        Uniq = UniqB
    ;
        svset.insert(InstName, !Expansions),
        inst_lookup(ModuleInfo, InstName, Inst),
        merge_inst_uniq(Inst, UniqB, ModuleInfo, !Expansions, Uniq)
    ).
merge_inst_uniq(not_reached, Uniq, _, !Expansions, Uniq).
merge_inst_uniq(inst_var(_), _, _, !Expansions, _) :-
    unexpected(this_file, "merge_inst_uniq: unexpected inst_var").
merge_inst_uniq(constrained_inst_vars(_InstVars, Inst0), UniqB, ModuleInfo,
        !Expansions, Uniq) :-
    merge_inst_uniq(Inst0, UniqB, ModuleInfo, !Expansions, Uniq).

%-----------------------------------------------------------------------------%

:- pred inst_merge_bound_ground(uniqueness::in, list(bound_inst)::in,
    uniqueness::in, maybe(mer_type)::in, mer_inst::out,
    module_info::in, module_info::out) is semidet.

inst_merge_bound_ground(UniqA, ListA, UniqB, MaybeType, Result, !ModuleInfo) :-
    ( bound_inst_list_is_ground(ListA, !.ModuleInfo) ->
        merge_uniq_bound(UniqB, UniqA, ListA, !.ModuleInfo, Uniq),
        Result = ground(Uniq, none)
    ;
        bound_inst_list_is_ground_or_any(ListA, !.ModuleInfo),
        % If we know the type, we can give a more accurate result than
        % just "any".
        (
            MaybeType = yes(Type),
            type_constructors(!.ModuleInfo, Type, Constructors),
            type_to_ctor_det(Type, TypeCtor),
            constructors_to_bound_insts(!.ModuleInfo, UniqB, TypeCtor,
                Constructors, ListB0),
            list.sort_and_remove_dups(ListB0, ListB),
            inst_merge_4(bound(UniqA, ListA), bound(UniqB, ListB),
                MaybeType, Result, !ModuleInfo)
        ;
            MaybeType = no,
            merge_uniq_bound(UniqB, UniqA, ListA, !.ModuleInfo, Uniq),
            Result = any(Uniq, none)
        )
    ).

%-----------------------------------------------------------------------------%

:- pred inst_list_merge(list(mer_inst)::in, list(mer_inst)::in,
    list(maybe(mer_type))::in, list(mer_inst)::out,
    module_info::in, module_info::out) is semidet.

inst_list_merge([], [], _, [], !ModuleInfo).
inst_list_merge([ArgA | ArgsA], [ArgB | ArgsB], [MaybeType | MaybeTypes],
        [Arg | Args], !ModuleInfo) :-
    inst_merge(ArgA, ArgB, MaybeType, Arg, !ModuleInfo),
    inst_list_merge(ArgsA, ArgsB, MaybeTypes, Args, !ModuleInfo).

    % bound_inst_list_merge(Xs, Ys, Zs, !ModuleInfo):
    %
    % The two input lists Xs and Ys must already be sorted.
    % Here we perform a sorted merge operation,
    % so that the functors of the output list Zs are the union
    % of the functors of the input lists Xs and Ys.
    %
:- pred bound_inst_list_merge(list(bound_inst)::in, list(bound_inst)::in,
    maybe(mer_type)::in, list(bound_inst)::out,
    module_info::in, module_info::out) is semidet.

bound_inst_list_merge(Xs, Ys, MaybeType, Zs, !ModuleInfo) :-
    ( Xs = [] ->
        Zs = Ys
    ; Ys = [] ->
        Zs = Xs
    ;
        Xs = [X | Xs1],
        Ys = [Y | Ys1],
        X = bound_functor(ConsIdX, ArgsX),
        Y = bound_functor(ConsIdY, ArgsY),
        ( equivalent_cons_ids(ConsIdX, ConsIdY) ->
            maybe_get_cons_id_arg_types(!.ModuleInfo, MaybeType,
                ConsIdX, list.length(ArgsX), MaybeTypes),
            inst_list_merge(ArgsX, ArgsY, MaybeTypes, Args, !ModuleInfo),
            Z = bound_functor(ConsIdX, Args),
            Zs = [Z | Zs1],
            bound_inst_list_merge(Xs1, Ys1, MaybeType, Zs1, !ModuleInfo)
        ; compare(<, ConsIdX, ConsIdY) ->
            Zs = [X | Zs1],
            bound_inst_list_merge(Xs1, Ys, MaybeType, Zs1, !ModuleInfo)
        ;
            Zs = [Y | Zs1],
            bound_inst_list_merge(Xs, Ys1, MaybeType, Zs1, !ModuleInfo)
        )
    ).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

inst_contains_nonstandard_func_mode(ModuleInfo, Inst) :-
    set.init(Expansions0),
    inst_contains_nonstandard_func_mode_2(ModuleInfo, Inst, Expansions0).

:- pred inst_contains_nonstandard_func_mode_2(module_info::in, mer_inst::in,
    set(mer_inst)::in) is semidet.

inst_contains_nonstandard_func_mode_2(ModuleInfo, ground(_, HOInstInfo),
        _Expansions) :-
    ho_inst_info_is_nonstandard_func_mode(ModuleInfo, HOInstInfo).
inst_contains_nonstandard_func_mode_2(ModuleInfo, bound(_, BoundInsts),
        Expansions) :-
    list.member(bound_functor(_, Insts), BoundInsts),
    list.member(Inst, Insts),
    inst_contains_nonstandard_func_mode_2(ModuleInfo, Inst, Expansions).
inst_contains_nonstandard_func_mode_2(_, inst_var(_), _) :-
    unexpected(this_file, "internal error: uninstantiated inst parameter").
inst_contains_nonstandard_func_mode_2(ModuleInfo, Inst, Expansions0) :-
    Inst = defined_inst(InstName),
    \+ set.member(Inst, Expansions0),
    set.insert(Expansions0, Inst, Expansions1),
    inst_lookup(ModuleInfo, InstName, Inst2),
    inst_contains_nonstandard_func_mode_2(ModuleInfo, Inst2, Expansions1).

%-----------------------------------------------------------------------------%

inst_contains_any(ModuleInfo, Inst) :-
    set.init(Expansions),
    inst_contains_any_2(ModuleInfo, Inst, Expansions).

:- pred inst_contains_any_2(module_info::in, (mer_inst)::in,
    set(inst_name)::in) is semidet.

inst_contains_any_2(_ModuleInfo, any(_, _), _Expansions).

inst_contains_any_2(ModuleInfo, bound(_, BoundInsts), Expansions) :-
    list.member(bound_functor(_, Insts), BoundInsts),
    list.member(Inst, Insts),
    inst_contains_any_2(ModuleInfo, Inst, Expansions).

inst_contains_any_2(_ModuleInfo, inst_var(_), _Expansions) :-
    unexpected(this_file, "internal error: uninstantiated inst parameter").

inst_contains_any_2(ModuleInfo, defined_inst(InstName), Expansions0) :-
    \+ set.member(InstName, Expansions0),
    Expansions = set.insert(Expansions0, InstName),
    inst_lookup(ModuleInfo, InstName, Inst),
    inst_contains_any_2(ModuleInfo, Inst, Expansions).

%-----------------------------------------------------------------------------%

var_inst_contains_any(ModuleInfo, Instmap, Var) :-
    instmap_lookup_var(Instmap, Var, Inst),
    inst_contains_any(ModuleInfo, Inst).

%-----------------------------------------------------------------------------%

pred_inst_info_is_nonstandard_func_mode(ModuleInfo, PredInstInfo) :-
    PredInstInfo = pred_inst_info(pf_function, ArgModes, _),
    Arity = list.length(ArgModes),
    \+ pred_inst_matches(PredInstInfo,
        pred_inst_info_standard_func_mode(Arity), ModuleInfo).

ho_inst_info_is_nonstandard_func_mode(ModuleInfo, HOInstInfo) :-
    HOInstInfo = higher_order(PredInstInfo),
    pred_inst_info_is_nonstandard_func_mode(ModuleInfo, PredInstInfo).

pred_inst_info_standard_func_mode(Arity) =
        pred_inst_info(pf_function, ArgModes, detism_det) :-
    in_mode(InMode),
    out_mode(OutMode),
    ArgModes = list.duplicate(Arity - 1, InMode) ++ [OutMode].

%-----------------------------------------------------------------------------%

inst_may_restrict_cons_ids(ModuleInfo, Inst) = MayRestrict :-
    (
        Inst = any(_, _),
        MayRestrict = yes
    ;
        Inst = free,
        MayRestrict = no
    ;
        Inst = free(_),
        MayRestrict = no
    ;
        Inst = bound(_, _),
        MayRestrict = yes
    ;
        Inst = ground(_, _),
        MayRestrict = no
    ;
        Inst = not_reached,
        MayRestrict = no
    ;
        Inst = inst_var(_),
        MayRestrict = yes
    ;
        Inst = constrained_inst_vars(_, _),
        MayRestrict = yes
    ;
        Inst = defined_inst(InstName),
        inst_lookup(ModuleInfo, InstName, NewInst),
        MayRestrict = inst_may_restrict_cons_ids(ModuleInfo, NewInst)
    ;
        Inst = abstract_inst(_, _),
        MayRestrict = yes
    ).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "inst_util".

%-----------------------------------------------------------------------------%
:- end_module inst_util.
%-----------------------------------------------------------------------------%
