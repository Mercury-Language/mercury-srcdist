%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2005-2007, 2009, 2011-2012 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: typeclasses.m.
% Main author: mark (including code by fjh and dgj)
%
% The module implements context reduction, which is the part of type checking
% which implements the type class system.
%
%-----------------------------------------------------------------------------%

:- module check_hlds.typeclasses.
:- interface.

:- import_module check_hlds.typecheck_info.
:- import_module hlds.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_pred.
:- import_module parse_tree.
:- import_module parse_tree.prog_data.

%-----------------------------------------------------------------------------%

    % perform_context_reduction(!Info) is true
    % iff either
    % (a) !:Info is the typecheck_info that results from performing
    % context reduction on the type_assigns in !.Info, or
    % (b) if there is no valid context reduction, then an appropriate
    % error message is given.  To avoid reporting the same error at
    % subsequent calls, !:Info is !.Info with all unproven constraints
    % removed from the type assign set.
    %
    % Context reduction is the process of eliminating redundant constraints
    % from the constraints in the type_assign and adding the proof of the
    % constraint's redundancy to the proofs in the same type_assign. There
    % are three ways in which a constraint may be redundant:
    %
    % - if a constraint occurs in the pred/func declaration for this
    %   predicate or function, then it is redundant
    %   (in this case, the proof is trivial, so there is no need
    %   to record it in the proof map)
    % - if a constraint is present in the set of constraints and all
    %   of the "superclass" constraints for the constraints are all
    %   present, then all the superclass constraints are eliminated
    % - if there is an instance declaration that may be applied, the
    %   constraint is replaced by the constraints from that instance
    %   declaration
    %
    % In addition, context reduction removes repeated constraints.
    %
    % During context reduction we also try to "improve" the type binding
    % in the given type_assign (that is, binding the type variables in
    % such a way that the satisfiability of the constraints is not
    % changed).  This is done by applying improvement rules inside the
    % fixpoint loop.  The improvement rules are those which are induced
    % by functional dependencies attached to typeclass declarations.
    %
    % If context reduction fails on a type_assign, that type_assign is
    % removed from the type_assign_set. Context reduction fails if there is
    % a constraint where the type of (at least) one of the arguments to
    % the constraint has its top level functor bound, but there is no
    % instance declaration for that type.
    %
:- pred perform_context_reduction(typecheck_info::in, typecheck_info::out)
    is det.

    % Apply context reduction to the list of class constraints by applying
    % the instance rules or superclass rules, building up proofs for
    % redundant constraints.
    %
:- pred reduce_context_by_rule_application(class_table::in, instance_table::in,
    head_type_params::in, tsubst::in, tsubst::out, tvarset::in, tvarset::out,
    constraint_proof_map::in, constraint_proof_map::out,
    constraint_map::in, constraint_map::out,
    hlds_constraints::in, hlds_constraints::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.type_util.
:- import_module check_hlds.typecheck_errors.
:- import_module hlds.hlds_module.
:- import_module parse_tree.prog_type.
:- import_module parse_tree.prog_type_subst.

:- import_module bool.
:- import_module int.
:- import_module list.
:- import_module map.
:- import_module set.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%

perform_context_reduction(!Info) :-
    trace [compiletime(flag("type_checkpoint")), io(!IO)] (
        type_checkpoint("before context reduction", !.Info, !IO)
    ),
    TypeAssignSet0 = tc_info_type_assign_set(!.Info),
    ModuleInfo = tc_info_module_info(!.Info),
    module_info_get_class_table(ModuleInfo, ClassTable),
    module_info_get_instance_table(ModuleInfo, InstanceTable),
    list.foldl2(reduce_type_assign_context(ClassTable, InstanceTable),
        TypeAssignSet0, [], TypeAssignSet1, [], UnsatTypeAssignSet),
    (
        % Check that this context reduction hasn't eliminated
        % all the type assignments.
        TypeAssignSet0 = [_ | _],
        TypeAssignSet1 = []
    ->
        Spec = report_unsatisfiable_constraints(!.Info, UnsatTypeAssignSet),
        typecheck_info_add_error(Spec, !Info),
        DeleteConstraints = (pred(TA0::in, TA::out) is det :-
            % Make a new hlds_constraints structure for the type assign,
            % with the same assumed constraints but all unproven constraints
            % deleted.
            type_assign_get_typeclass_constraints(TA0, Constraints0),
            type_assign_get_typevarset(TA0, TVarSet),
            make_hlds_constraints(ClassTable, TVarSet, [],
                Constraints0 ^ hcs_assumed, Constraints),
            type_assign_set_typeclass_constraints(Constraints, TA0, TA)
        ),
        list.map(DeleteConstraints, TypeAssignSet0, TypeAssignSet)
    ;
        TypeAssignSet = TypeAssignSet1
    ),
    !Info ^ tc_info_type_assign_set := TypeAssignSet.

:- pred reduce_type_assign_context(class_table::in, instance_table::in,
    type_assign::in, list(type_assign)::in, list(type_assign)::out,
    list(type_assign)::in, list(type_assign)::out) is det.

reduce_type_assign_context(ClassTable, InstanceTable, !.TypeAssign,
        !TypeAssignSet, !UnsatTypeAssignSet) :-
    type_assign_get_typeclass_constraints(!.TypeAssign, Constraints0),
    (
        % Optimize the common case of no typeclass constraints at all.
        Constraints0 =
            hlds_constraints(Unproven0, Assumed0, Redundant0, Ancestors0),
        Unproven0 = [],
        Assumed0 = [],
        map.is_empty(Redundant0),
        map.is_empty(Ancestors0)
    ->
        !:TypeAssignSet = !.TypeAssignSet ++ [!.TypeAssign]
    ;
        type_assign_get_head_type_params(!.TypeAssign, HeadTypeParams),
        type_assign_get_type_bindings(!.TypeAssign, Bindings0),
        type_assign_get_typevarset(!.TypeAssign, TVarSet0),
        type_assign_get_constraint_proofs(!.TypeAssign, Proofs0),
        type_assign_get_constraint_map(!.TypeAssign, ConstraintMap0),

        reduce_context_by_rule_application(ClassTable, InstanceTable,
            HeadTypeParams, Bindings0, Bindings, TVarSet0, TVarSet,
            Proofs0, Proofs, ConstraintMap0, ConstraintMap,
            Constraints0, Constraints),

        type_assign_set_reduce_results(Bindings, TVarSet, Constraints,
            Proofs, ConstraintMap, !TypeAssign),


        Unproven = Constraints ^ hcs_unproven,
        ( all_constraints_are_satisfiable(Unproven, HeadTypeParams) ->
            !:TypeAssignSet = !.TypeAssignSet ++ [!.TypeAssign]
        ;
            % Remember the unsatisfiable type_assign_set so we can produce more
            % specific error messages.
            !:UnsatTypeAssignSet = [!.TypeAssign | !.UnsatTypeAssignSet]
        )
    ).

    % all_constraints_are_satisfiable(Constraints, HeadTypeParams):
    %
    % Check that all of the constraints are satisfiable. Fail if any are
    % definitely not satisfiable.
    %
    % We disallow ground constraints for which there are no matching instance
    % rules, even though the module system means that it would make sense
    % to allow them: even if there is no instance declaration visible
    % in the current module, there may be one visible in the caller. The reason
    % we disallow them is that in practice allowing this causes type inference
    % to let too many errors slip through, with the error diagnosis being
    % too far removed from the real cause of the error. Note that ground
    % constraints *are* allowed if you declare them, since we removed declared
    % constraints before checking satisfiability.
    %
    % Similarly, for constraints on head type params (universally quantified
    % type vars in this pred's type decl, or existentially quantified type vars
    % in type decls for callees), we know that the head type params can
    % never get bound. This means that if the constraint wasn't an assumed
    % constraint and can't be eliminated by instance rule or class rule
    % application, then we can report an error now, rather than later.
    % (For non-head-type-param type variables, we need to wait, in case
    % the type variable gets bound to a type for which there is a valid
    % instance declaration.)
    %
    % So a constraint is considered satisfiable iff it contains at least one
    % type variable that is not in the head type params.
    %
:- pred all_constraints_are_satisfiable(list(hlds_constraint)::in,
    head_type_params::in) is semidet.

all_constraints_are_satisfiable([], _).
all_constraints_are_satisfiable([Constraint | Constraints], HeadTypeParams) :-
    Constraint = hlds_constraint(_Ids, _ClassName, Types),
    some [TVar] (
        type_list_contains_var(Types, TVar),
        not list.member(TVar, HeadTypeParams)
    ),
    all_constraints_are_satisfiable(Constraints, HeadTypeParams).

reduce_context_by_rule_application(ClassTable, InstanceTable, HeadTypeParams,
        !Bindings, !TVarSet, !Proofs, !ConstraintMap, !Constraints) :-
    reduce_context_by_rule_application_2(ClassTable, InstanceTable,
        HeadTypeParams, !Bindings, !TVarSet, !Proofs, !ConstraintMap,
        !Constraints, !.Constraints ^ hcs_unproven, _).

:- pred reduce_context_by_rule_application_2(class_table::in,
    instance_table::in, head_type_params::in,
    tsubst::in, tsubst::out, tvarset::in, tvarset::out,
    constraint_proof_map::in, constraint_proof_map::out,
    constraint_map::in, constraint_map::out,
    hlds_constraints::in, hlds_constraints::out,
    list(hlds_constraint)::in, list(hlds_constraint)::out) is det.

reduce_context_by_rule_application_2(ClassTable, InstanceTable, HeadTypeParams,
        !Bindings, !TVarSet, !Proofs, !ConstraintMap, !Constraints, !Seen) :-
    apply_rec_subst_to_constraints(!.Bindings, !Constraints),
    apply_improvement_rules(ClassTable, InstanceTable, HeadTypeParams,
        !.Constraints, !TVarSet, !Bindings, AppliedImprovementRule),

    % We want to make sure that any changes to the bindings are reflected
    % in the constraints, so that the full effect of the improvement rules
    % applies as soon as possible. We therefore apply the bindings to the
    % constraints (but only if the bindings have actually changed since
    % they were last applied).
    (
        AppliedImprovementRule = yes,
        apply_rec_subst_to_constraints(!.Bindings, !Constraints)
    ;
        AppliedImprovementRule = no
    ),

    eliminate_assumed_constraints(!ConstraintMap, !Constraints,
        EliminatedAssumed),
    apply_instance_rules(ClassTable, InstanceTable, !TVarSet, !Proofs,
        !ConstraintMap, !Seen, !Constraints, AppliedInstanceRule),
    apply_class_rules(!Proofs, !ConstraintMap, !Constraints, AppliedClassRule),
    (
        AppliedImprovementRule = no,
        EliminatedAssumed = no,
        AppliedInstanceRule = no,
        AppliedClassRule = no
    ->
        % We have reached fixpoint.
        sort_and_merge_dups(!Constraints)
    ;
        reduce_context_by_rule_application_2(ClassTable, InstanceTable,
            HeadTypeParams, !Bindings, !TVarSet, !Proofs, !ConstraintMap,
            !Constraints, !Seen)
    ).

:- pred sort_and_merge_dups(hlds_constraints::in, hlds_constraints::out)
    is det.

sort_and_merge_dups(!Constraints) :-
    % Should we also sort and merge the other fields?
    Unproven0 = !.Constraints ^ hcs_unproven,
    list.sort(compare_hlds_constraints, Unproven0, Unproven1),
    merge_adjacent_constraints(Unproven1, Unproven),
    !Constraints ^ hcs_unproven := Unproven.

:- pred merge_adjacent_constraints(list(hlds_constraint)::in,
    list(hlds_constraint)::out) is det.

merge_adjacent_constraints([], []).
merge_adjacent_constraints([C | Cs], Constraints) :-
    merge_adjacent_constraints_2(C, Cs, Constraints).

:- pred merge_adjacent_constraints_2(hlds_constraint::in,
    list(hlds_constraint)::in, list(hlds_constraint)::out) is det.

merge_adjacent_constraints_2(C0, [], [C0]).
merge_adjacent_constraints_2(C0, [C1 | Cs], Constraints) :-
    ( merge_constraints(C0, C1, C) ->
        merge_adjacent_constraints_2(C, Cs, Constraints)
    ;
        merge_adjacent_constraints_2(C1, Cs, Constraints0),
        Constraints = [C0 | Constraints0]
    ).

    % merge_constraints(A, B, C) succeeds if A and B represent equivalent
    % constraints. In this case, C is the equivalent constraint with the
    % list of ids being the union of the ids of A and B.
    %
:- pred merge_constraints(hlds_constraint::in, hlds_constraint::in,
    hlds_constraint::out) is semidet.

merge_constraints(ConstraintA, ConstraintB, Constraint) :-
    ConstraintA = hlds_constraint(IdsA, Name, Types),
    ConstraintB = hlds_constraint(IdsB, Name, Types),
    list.append(IdsA, IdsB, Ids0),
    list.sort_and_remove_dups(Ids0, Ids),
    Constraint = hlds_constraint(Ids, Name, Types).

:- pred apply_improvement_rules(class_table::in, instance_table::in,
    head_type_params::in, hlds_constraints::in, tvarset::in, tvarset::out,
    tsubst::in, tsubst::out, bool::out) is det.

apply_improvement_rules(ClassTable, InstanceTable, HeadTypeParams, Constraints,
        !TVarSet, !Bindings, Changed) :-
    % XXX Should we sort and merge the constraints here?
    do_class_improvement(ClassTable, HeadTypeParams, Constraints, !Bindings,
        Changed1),
    % XXX Do we really need to modify the varset? See the comment above
    % find_matching_instance_rule.
    do_instance_improvement(ClassTable, InstanceTable, HeadTypeParams,
        Constraints, !TVarSet, !Bindings, Changed2),
    Changed = bool.or(Changed1, Changed2).

:- pred do_class_improvement(class_table::in, head_type_params::in,
    hlds_constraints::in, tsubst::in, tsubst::out, bool::out) is det.

do_class_improvement(ClassTable, HeadTypeParams, Constraints, !Bindings,
        Changed) :-
    Redundant = Constraints ^ hcs_redundant,
    map.keys(Redundant, ClassIds),
    list.foldl2(
        do_class_improvement_2(ClassTable, HeadTypeParams, Redundant),
        ClassIds, !Bindings, no, Changed).

:- pred do_class_improvement_2(class_table::in, head_type_params::in,
    redundant_constraints::in, class_id::in, tsubst::in, tsubst::out,
    bool::in, bool::out) is det.

do_class_improvement_2(ClassTable, HeadTypeParams, RedundantConstraints,
        ClassId, !Bindings, !Changed) :-
    map.lookup(ClassTable, ClassId, ClassDefn),
    FunDeps = ClassDefn ^ class_fundeps,
    map.lookup(RedundantConstraints, ClassId, ConstraintSet),
    set.to_sorted_list(ConstraintSet, ConstraintList),
    do_class_improvement_by_pairs(ConstraintList, FunDeps, HeadTypeParams,
        !Bindings, !Changed).

:- pred has_class_id(class_id::in, hlds_constraint::in) is semidet.

has_class_id(class_id(Name, Arity), hlds_constraint(_, Name, Args)) :-
    list.length(Args, Arity).

    % Try to find an opportunity for improvement for each (unordered)
    % pair of constraints from the list.
    %
:- pred do_class_improvement_by_pairs(list(hlds_constraint)::in,
    hlds_class_fundeps::in, head_type_params::in, tsubst::in, tsubst::out,
    bool::in, bool::out) is det.

do_class_improvement_by_pairs([], _, _, !Bindings, !Changed).
do_class_improvement_by_pairs([Constraint | Constraints], FunDeps,
        HeadTypeParams, !Bindings, !Changed) :-
    do_class_improvement_by_pairs_2(Constraint, Constraints, FunDeps,
        HeadTypeParams, !Bindings, !Changed),
    do_class_improvement_by_pairs(Constraints, FunDeps, HeadTypeParams,
        !Bindings, !Changed).

:- pred do_class_improvement_by_pairs_2(hlds_constraint::in,
    list(hlds_constraint)::in, hlds_class_fundeps::in, head_type_params::in,
    tsubst::in, tsubst::out, bool::in, bool::out) is det.

do_class_improvement_by_pairs_2(_, [], _, _, !Bindings, !Changed).
do_class_improvement_by_pairs_2(Constraint, [HeadConstraint | TailConstraints],
        FunDeps, HeadTypeParams, !Bindings, !Changed) :-
    do_class_improvement_pair(Constraint, HeadConstraint, FunDeps,
        HeadTypeParams, !Bindings, !Changed),
    do_class_improvement_by_pairs_2(Constraint, TailConstraints, FunDeps,
        HeadTypeParams, !Bindings, !Changed).

    % Try to find an opportunity for improvement for this pair of
    % constraints, using each fundep in turn.
    %
:- pred do_class_improvement_pair(hlds_constraint::in, hlds_constraint::in,
    hlds_class_fundeps::in, head_type_params::in, tsubst::in, tsubst::out,
    bool::in, bool::out) is det.

do_class_improvement_pair(_, _, [], _, !Bindings, !Changed).
do_class_improvement_pair(ConstraintA, ConstraintB, [FunDep | FunDeps],
        HeadTypeParams, !Bindings, !Changed) :-
    do_class_improvement_fundep(ConstraintA, ConstraintB, FunDep,
        HeadTypeParams, !Bindings, !Changed),
    do_class_improvement_pair(ConstraintA, ConstraintB, FunDeps,
        HeadTypeParams, !Bindings, !Changed).

:- pred do_class_improvement_fundep(hlds_constraint::in, hlds_constraint::in,
    hlds_class_fundep::in, head_type_params::in, tsubst::in, tsubst::out,
    bool::in, bool::out) is det.

do_class_improvement_fundep(ConstraintA, ConstraintB, FunDep, HeadTypeParams,
        !Bindings, !Changed) :-
    ConstraintA = hlds_constraint(_, _, TypesA),
    ConstraintB = hlds_constraint(_, _, TypesB),
    FunDep = fundep(Domain, Range),
    (
        % We already know that the name/arity of the constraints match,
        % since we have partitioned them already.
        lists_match_on_elements(Domain, TypesA, TypesB),
        \+ lists_match_on_elements(Range, TypesA, TypesB),

        % The unification can fail if type parameters in the declaration
        % would be bound by the improvement rule. This means that the
        % declaration is not as specific as it could be, but that is not
        % a problem for us.
        unify_on_elements(Range, TypesA, TypesB, HeadTypeParams, !Bindings)
    ->
        !:Changed = yes
    ;
        true
    ).

:- pred do_instance_improvement(class_table::in, instance_table::in,
    head_type_params::in, hlds_constraints::in, tvarset::in, tvarset::out,
    tsubst::in, tsubst::out, bool::out) is det.

do_instance_improvement(ClassTable, InstanceTable, HeadTypeParams, Constraints,
        !TVarSet, !Bindings, Changed) :-
    RedundantConstraints = Constraints ^ hcs_redundant,
    map.keys(RedundantConstraints, ClassIds),
    list.foldl3(
        do_instance_improvement_2(ClassTable, InstanceTable,
            HeadTypeParams, RedundantConstraints),
        ClassIds, !TVarSet, !Bindings, no, Changed).

:- pred do_instance_improvement_2(class_table::in, instance_table::in,
    head_type_params::in, redundant_constraints::in, class_id::in,
    tvarset::in, tvarset::out, tsubst::in, tsubst::out,
    bool::in, bool::out) is det.

do_instance_improvement_2(ClassTable, InstanceTable, HeadTypeParams,
        RedundantConstraints, ClassId, !TVarSet, !Bindings, !Changed) :-
    map.lookup(ClassTable, ClassId, ClassDefn),
    FunDeps = ClassDefn ^ class_fundeps,
    map.lookup(InstanceTable, ClassId, InstanceDefns),
    map.lookup(RedundantConstraints, ClassId, ConstraintSet),
    set.to_sorted_list(ConstraintSet, ConstraintList),
    list.foldl3(
        do_instance_improvement_3(ConstraintList, FunDeps, HeadTypeParams),
        InstanceDefns, !TVarSet, !Bindings, !Changed).

:- pred do_instance_improvement_3(list(hlds_constraint)::in,
    hlds_class_fundeps::in, head_type_params::in, hlds_instance_defn::in,
    tvarset::in, tvarset::out, tsubst::in, tsubst::out,
    bool::in, bool::out) is det.

do_instance_improvement_3(Constraints, FunDeps, HeadTypeParams, InstanceDefn,
        !TVarSet, !Bindings, !Changed) :-
    InstanceTVarSet = InstanceDefn ^ instance_tvarset,
    InstanceTypes0 = InstanceDefn ^ instance_types,
    tvarset_merge_renaming(!.TVarSet, InstanceTVarSet, NewTVarSet, Renaming),
    apply_variable_renaming_to_type_list(Renaming, InstanceTypes0,
        InstanceTypes),
    list.foldl2(
        do_instance_improvement_4(FunDeps, InstanceTypes, HeadTypeParams),
        Constraints, !Bindings, no, Changed0),
    (
        Changed0 = yes,
        !:TVarSet = NewTVarSet,
        !:Changed = yes
    ;
        Changed0 = no
    ).

:- pred do_instance_improvement_4(hlds_class_fundeps::in, list(mer_type)::in,
    head_type_params::in, hlds_constraint::in, tsubst::in, tsubst::out,
    bool::in, bool::out) is det.

do_instance_improvement_4(FunDeps, InstanceTypes, HeadTypeParams, Constraint,
        !Bindings, !Changed) :-
    list.foldl2(
        do_instance_improvement_fundep(Constraint, InstanceTypes,
            HeadTypeParams),
        FunDeps, !Bindings, !Changed).

:- pred do_instance_improvement_fundep(hlds_constraint::in, list(mer_type)::in,
    head_type_params::in, hlds_class_fundep::in, tsubst::in, tsubst::out,
    bool::in, bool::out) is det.

do_instance_improvement_fundep(Constraint, InstanceTypes0, HeadTypeParams,
        FunDep, !Bindings, !Changed) :-
    Constraint = hlds_constraint(_, _, ConstraintTypes),
    FunDep = fundep(Domain, Range),
    (
        % We already know that the name/arity of the constraints match,
        % since we have partitioned them already.
        subsumes_on_elements(Domain, InstanceTypes0, ConstraintTypes, Subst),
        apply_rec_subst_to_type_list(Subst, InstanceTypes0, InstanceTypes),

        % Improvement occurs iff the instance range types are not more
        % general than the constraint range types.  If they *are* more
        % general, we stop here.
        \+ subsumes_on_elements(Range, InstanceTypes, ConstraintTypes, _),

        % The unification can fail if type parameters in the declaration
        % would be bound by the improvement rule. This means that the
        % declaration is not as specific as it could be, but that is not
        % a problem for us.
        unify_on_elements(Range, InstanceTypes, ConstraintTypes,
            HeadTypeParams, !Bindings)
    ->
        !:Changed = yes
    ;
        true
    ).

    % For each index in the set, check that the types in the corresponding
    % positions in the lists are identical.
    %
:- pred lists_match_on_elements(set(hlds_class_argpos)::in, list(mer_type)::in,
    list(mer_type)::in) is semidet.

lists_match_on_elements(Elements, TypesA, TypesB) :-
    RTypesA = restrict_list_elements(Elements, TypesA),
    RTypesB = restrict_list_elements(Elements, TypesB),
    RTypesA = RTypesB.

    % For each index in the set, unify the types in the corresponding
    % positions in the lists and add to the current bindings.
    %
:- pred unify_on_elements(set(hlds_class_argpos)::in, list(mer_type)::in,
    list(mer_type)::in, head_type_params::in, tsubst::in, tsubst::out)
    is semidet.

unify_on_elements(Elements, TypesA, TypesB, HeadTypeParams, !Bindings) :-
    RTypesA = restrict_list_elements(Elements, TypesA),
    RTypesB = restrict_list_elements(Elements, TypesB),
    type_unify_list(RTypesA, RTypesB, HeadTypeParams, !Bindings).

    % Analogous to type_list_subsumes except that it only checks those
    % elements of the list specified by the set of indices.
    %
:- pred subsumes_on_elements(set(hlds_class_argpos)::in, list(mer_type)::in,
    list(mer_type)::in, tsubst::out) is semidet.

subsumes_on_elements(Elements, TypesA, TypesB, Subst) :-
    RTypesA = restrict_list_elements(Elements, TypesA),
    RTypesB = restrict_list_elements(Elements, TypesB),
    type_vars_list(RTypesB, RTypesBVars),
    map.init(Subst0),
    type_unify_list(RTypesA, RTypesB, RTypesBVars, Subst0, Subst).

:- pred eliminate_assumed_constraints(constraint_map::in, constraint_map::out,
    hlds_constraints::in, hlds_constraints::out, bool::out) is det.

eliminate_assumed_constraints(!ConstraintMap, !Constraints, Changed) :-
    !.Constraints = hlds_constraints(Unproven0, Assumed, Redundant, Ancestors),
    eliminate_assumed_constraints_2(Assumed, !ConstraintMap,
        Unproven0, Unproven, Changed),
    !:Constraints = hlds_constraints(Unproven, Assumed, Redundant, Ancestors).

:- pred eliminate_assumed_constraints_2(list(hlds_constraint)::in,
    constraint_map::in, constraint_map::out,
    list(hlds_constraint)::in, list(hlds_constraint)::out,
    bool::out) is det.

eliminate_assumed_constraints_2(_, !ConstraintMap, [], [], no).
eliminate_assumed_constraints_2(AssumedCs, !ConstraintMap, [C | Cs], NewCs,
        Changed) :-
    eliminate_assumed_constraints_2(AssumedCs, !ConstraintMap, Cs, NewCs0,
        Changed0),
    (
        some [A] (
            list.member(A, AssumedCs),
            matching_constraints(A, C)
        )
    ->
        update_constraint_map(C, !ConstraintMap),
        NewCs = NewCs0,
        Changed = yes
    ;
        NewCs = [C | NewCs0],
        Changed = Changed0
    ).

:- pred apply_instance_rules(class_table::in, instance_table::in,
    tvarset::in, tvarset::out,
    constraint_proof_map::in, constraint_proof_map::out,
    constraint_map::in, constraint_map::out,
    list(hlds_constraint)::in, list(hlds_constraint)::out,
    hlds_constraints::in, hlds_constraints::out, bool::out) is det.

apply_instance_rules(ClassTable, InstanceTable, !TVarSet, !Proofs,
        !ConstraintMap, !Seen, !Constraints, Changed) :-
    !.Constraints = hlds_constraints(Unproven0, Assumed,
        Redundant0, Ancestors),
    apply_instance_rules_2(ClassTable, InstanceTable, !TVarSet, !Proofs,
        !ConstraintMap, Redundant0, Redundant, !Seen,
        Unproven0, Unproven, Changed),
    !:Constraints = hlds_constraints(Unproven, Assumed, Redundant, Ancestors).

:- pred apply_instance_rules_2(class_table::in, instance_table::in,
    tvarset::in, tvarset::out,
    constraint_proof_map::in, constraint_proof_map::out,
    constraint_map::in, constraint_map::out,
    redundant_constraints::in, redundant_constraints::out,
    list(hlds_constraint)::in, list(hlds_constraint)::out,
    list(hlds_constraint)::in, list(hlds_constraint)::out, bool::out) is det.

apply_instance_rules_2(_, _, !TVarSet, !Proofs, !ConstraintMap, !Redundant,
        !Seen, [], [], no).
apply_instance_rules_2(ClassTable, InstanceTable, !TVarSet, !Proofs,
        !ConstraintMap, !Redundant, !Seen, [C | Cs], Constraints, Changed) :-
    C = hlds_constraint(_, ClassName, Types),
    list.length(Types, Arity),
    map.lookup(InstanceTable, class_id(ClassName, Arity), Instances),
    InitialTVarSet = !.TVarSet,
    (
        find_matching_instance_rule(Instances, C, !TVarSet, !Proofs,
            NewConstraints0)
    ->
        update_constraint_map(C, !ConstraintMap),
        % Remove any constraints we've already seen.
        % This ensures we don't get into an infinite loop.
        list.filter(matches_no_constraint(!.Seen), NewConstraints0,
            NewConstraints),
        update_redundant_constraints(ClassTable, !.TVarSet,
            NewConstraints, !Redundant),
        % Put the new constraints at the front of the list.
        !:Seen = NewConstraints ++ !.Seen,
        Changed1 = yes
    ;
        % Put the old constraint at the front of the list.
        NewConstraints = [C],
        !:TVarSet = InitialTVarSet,
        Changed1 = no
    ),
    apply_instance_rules_2(ClassTable, InstanceTable, !TVarSet, !Proofs,
        !ConstraintMap, !Redundant, !Seen, Cs, TailConstraints, Changed2),
    bool.or(Changed1, Changed2, Changed),
    list.append(NewConstraints, TailConstraints, Constraints).

:- pred matches_no_constraint(list(hlds_constraint)::in, hlds_constraint::in)
    is semidet.

matches_no_constraint(Seen, Constraint) :-
    \+ ( some [S] (
        list.member(S, Seen),
        matching_constraints(S, Constraint)
    )).

    % We take the first matching instance rule that we can find; any
    % overlapping instance declarations will have been caught earlier.
    %
    % This pred also catches tautological constraints since the
    % NewConstraints will be [].
    %
    % XXX Surely we shouldn't need to rename the variables and return
    % a new varset: this substitution should have been worked out before,
    % as these varsets would already have been merged.
    %
:- pred find_matching_instance_rule(list(hlds_instance_defn)::in,
    hlds_constraint::in, tvarset::in, tvarset::out,
    constraint_proof_map::in, constraint_proof_map::out,
    list(hlds_constraint)::out) is semidet.

find_matching_instance_rule(Instances, Constraint, !TVarSet, !Proofs,
        NewConstraints) :-
    % Start a counter so we remember which instance decl we have used.
    find_matching_instance_rule_2(Instances, 1, Constraint, !TVarSet,
        !Proofs, NewConstraints).

:- pred find_matching_instance_rule_2(list(hlds_instance_defn)::in, int::in,
    hlds_constraint::in, tvarset::in, tvarset::out,
    constraint_proof_map::in, constraint_proof_map::out,
    list(hlds_constraint)::out) is semidet.

find_matching_instance_rule_2([Instance | Instances], InstanceNum0, Constraint,
        !TVarSet, !Proofs, NewConstraints) :-
    Constraint = hlds_constraint(_Ids, _Name, Types),
    ProgConstraints0 = Instance ^ instance_constraints,
    InstanceTypes0 = Instance ^ instance_types,
    InstanceTVarSet = Instance ^ instance_tvarset,
    tvarset_merge_renaming(!.TVarSet, InstanceTVarSet, NewTVarSet, Renaming),
    apply_variable_renaming_to_type_list(Renaming, InstanceTypes0,
        InstanceTypes),
    (
        type_list_subsumes(InstanceTypes, Types, Subst)
    ->
        !:TVarSet = NewTVarSet,
        apply_variable_renaming_to_prog_constraint_list(Renaming,
            ProgConstraints0, ProgConstraints1),
        apply_rec_subst_to_prog_constraint_list(Subst,
            ProgConstraints1, ProgConstraints),
        init_hlds_constraint_list(ProgConstraints, NewConstraints),

        NewProof = apply_instance(InstanceNum0),
        retrieve_prog_constraint(Constraint, ProgConstraint),
        map.set(ProgConstraint, NewProof, !Proofs)
    ;
        InstanceNum = InstanceNum0 + 1,
        find_matching_instance_rule_2(Instances, InstanceNum,
            Constraint, !TVarSet, !Proofs, NewConstraints)
    ).

    % To reduce a constraint using class declarations, we search the
    % ancestors in the hlds_constraints to find a path from the inferred
    % constraint to another (declared or inferred) constraint.
    %
:- pred apply_class_rules(constraint_proof_map::in, constraint_proof_map::out,
    constraint_map::in, constraint_map::out,
    hlds_constraints::in, hlds_constraints::out, bool::out) is det.

apply_class_rules(!Proofs, !ConstraintMap, !Constraints, Changed) :-
    !.Constraints = hlds_constraints(Unproven0, _, _, Ancestors),
    apply_class_rules_2(Ancestors, !Proofs, !ConstraintMap,
        Unproven0, Unproven, Changed),
    !Constraints ^ hcs_unproven := Unproven.

:- pred apply_class_rules_2(ancestor_constraints::in,
    constraint_proof_map::in, constraint_proof_map::out,
    constraint_map::in, constraint_map::out,
    list(hlds_constraint)::in, list(hlds_constraint)::out, bool::out) is det.

apply_class_rules_2(_, !Proofs, !ConstraintMap, [], [], no).
apply_class_rules_2(Ancestors, !Proofs, !ConstraintMap,
        [Constraint0 | Constraints0], Constraints, Changed) :-
    retrieve_prog_constraint(Constraint0, ProgConstraint0),
    (
        map.search(Ancestors, ProgConstraint0, Descendants)
    ->
        update_constraint_map(Constraint0, !ConstraintMap),
        add_superclass_proofs(ProgConstraint0, Descendants, !Proofs),
        apply_class_rules_2(Ancestors, !Proofs, !ConstraintMap,
            Constraints0, Constraints, _),
        Changed = yes
    ;
        apply_class_rules_2(Ancestors, !Proofs, !ConstraintMap,
            Constraints0, TailConstraints, Changed),
        Constraints = [Constraint0 | TailConstraints]
    ).

:- pred add_superclass_proofs(prog_constraint::in, list(prog_constraint)::in,
    constraint_proof_map::in, constraint_proof_map::out) is det.

add_superclass_proofs(_, [], !Proofs).
add_superclass_proofs(Constraint, [Descendant | Descendants], !Proofs) :-
    map.set(Constraint, superclass(Descendant), !Proofs),
    add_superclass_proofs(Descendant, Descendants, !Proofs).

%-----------------------------------------------------------------------------%
:- end_module check_hlds.typeclasses.
%-----------------------------------------------------------------------------%
