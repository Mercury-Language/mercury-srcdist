%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module grade_setup.
:- interface.

:- import_module grade_state.

:- import_module maybe.

:- pred setup_solver_info(solver_info::out) is det.

%---------------------------------------------------------------------------%

:- type solver_var_set_to
    --->    set_to_false
    ;       set_to_true.

:- pred set_solver_var(string::in, string::in, solver_var_set_to::in,
    not_possible_why::in, maybe_error::out,
    solver_info::in, solver_info::out) is det.

%---------------------------------------------------------------------------%

:- implementation.

:- import_module grade_spec.

:- import_module bool.
:- import_module cord.
:- import_module int.
:- import_module list.
:- import_module map.
:- import_module require.
:- import_module set.
:- import_module std_util.
:- import_module string.

setup_solver_info(SolverInfo) :-
    setup_solver_vars(SolverVarMap, SolverVarPriority),
    setup_requirements(SolverVarMap, Requirements),
    SolverInfo = solver_info(Requirements, SolverVarPriority, SolverVarMap).

%---------------------------------------------------------------------------%

:- pred setup_solver_vars(solver_var_map::out, list(solver_var_id)::out)
    is det.

setup_solver_vars(SolverVarMap, SolverVarPriority) :-
    SolverVarSpecs = init_solver_var_specs,
    init_solver_vars(SolverVarSpecs, map.init, SolverVarMap,
        cord.init, SolverVarPriorityCord),
    SolverVarPriority = cord.to_list(SolverVarPriorityCord).

:- pred init_solver_vars(list(solver_var_spec)::in,
    solver_var_map::in, solver_var_map::out,
    cord(solver_var_id)::in, cord(solver_var_id)::out) is det.

init_solver_vars([], !SolverVarMap, !SolverVarPriorityCord).
init_solver_vars([Spec | Specs], !SolverVarMap, !SolverVarPriorityCord) :-
    Spec = solver_var_spec(SolverVarId, SolverValueIds),
    !:SolverVarPriorityCord = cord.snoc(!.SolverVarPriorityCord, SolverVarId),
    init_solver_var_values(0, NumValues, SolverValueIds, Values),
    SolverVar = solver_var(NumValues, NumValues, Values),
    expect(isnt(unify(0), NumValues), $pred, "no values for solver var"),
    map.det_insert(SolverVarId, SolverVar, !SolverVarMap),
    init_solver_vars(Specs, !SolverVarMap, !SolverVarPriorityCord).

:- pred init_solver_var_values(int::in, int::out,
    list(solver_var_value_id)::in, list(solver_var_value)::out) is det.

init_solver_var_values(CurNumValues, CurNumValues, [], []).
init_solver_var_values(CurNumValues, NumValues,
        [ValueId | ValueIds], [Value | Values]) :-
    Value = solver_var_value(ValueId, is_possible),
    init_solver_var_values(CurNumValues + 1, NumValues, ValueIds, Values).

%---------------------------------------------------------------------------%

set_solver_var(VarStr, ValueStr, SetTo, WhyNot, MaybeError, !SolverInfo) :-
    ( if solver_var_name(VarStr, VarId0) then
        MaybeVarId = yes(VarId0),
        VarErrorMsg = ""
    else
        MaybeVarId = no,
        string.format("there is no solver variable named %s\n",
            [s(VarStr)], VarErrorMsg)
    ),
    ( if solver_var_value_name(ValueStr, ValueId0) then
        MaybeValueId = yes(ValueId0),
        ValueErrorMsg = ""
    else
        MaybeValueId = no,
        string.format("there is no solver var value named %s\n",
            [s(ValueStr)], ValueErrorMsg)
    ),
    ( if
        MaybeVarId = yes(VarId),
        MaybeValueId = yes(ValueId)
    then

        SolverVarMap0 = !.SolverInfo ^ si_solver_var_map,
        map.lookup(SolverVarMap0, VarId, SolverVar0),
        SolverVar0 = solver_var(CntAll, CntPoss0, Values0),
        (
            SetTo = set_to_true,
            set_value_to_true(ValueId, WhyNot, [], OldPossibles,
                Values0, Values)
        ;
            SetTo = set_to_false,
            set_value_to_false(ValueId, WhyNot, [], OldPossibles,
                Values0, Values)
        ),
        (
            OldPossibles = [],
            string.format("solver variable %s has no value named %s\n",
                [s(VarStr), s(ValueStr)], Msg),
            MaybeError = error(Msg)
        ;
            OldPossibles = [OldPossible],
            (
                SetTo = set_to_true,
                (
                    OldPossible = is_possible,
                    % This is the expected case. VarId may still be
                    % ValueId, but now it cannot be any other value.
                    MaybeError = ok,
                    CntPoss = 1,
                    SolverVar = solver_var(CntAll, CntPoss, Values),
                    map.det_update(VarId, SolverVar,
                        SolverVarMap0, SolverVarMap),
                    !SolverInfo ^ si_solver_var_map := SolverVarMap
                ;
                    OldPossible = not_possible(_),
                    % Other parameter settings have already ruled out
                    % VarId = ValueId, so this is an inconsistency
                    % between those earlier settings and this one.
                    string.format(
                        "inconsistent settings for solver variable %s\n",
                        [s(VarStr)], Msg),
                    MaybeError = error(Msg)
                )
            ;
                SetTo = set_to_false,
                (
                    OldPossible = is_possible,
                    % If the variable was set to true before, that is expected.
                    MaybeError = ok,
                    CntPoss = CntPoss0 - 1,
                    SolverVar = solver_var(CntAll, CntPoss, Values),
                    map.det_update(VarId, SolverVar,
                        SolverVarMap0, SolverVarMap),
                    !SolverInfo ^ si_solver_var_map := SolverVarMap
                ;
                    OldPossible = not_possible(_),
                    % If the variable was set to false before, our setting it
                    % to false is redundant, but ok.
                    MaybeError = ok
                )
            )
        ;
            OldPossibles = [_, _ | _],
            string.format(
                "solver var %s has more than one copy of value %s\n",
                [s(VarStr), s(ValueStr)], Msg),
            % This should have caught during setup.
            unexpected($pred, Msg)
        )
    else
        Msg = VarErrorMsg ++ ValueErrorMsg,
        MaybeError = error(Msg)
    ).

:- pred set_value_to_false(solver_var_value_id::in, not_possible_why::in,
    list(solver_var_value_possible)::in, list(solver_var_value_possible)::out,
    list(solver_var_value)::in, list(solver_var_value)::out) is det.

set_value_to_false(_SetId, _WhyNot, !OldPossibles, [], []).
set_value_to_false(SetId, WhyNot, !OldPossibles,
        [HeadValue0 | TailValues0], [HeadValue | TailValues]) :-
    HeadValue0 = solver_var_value(Id, Possible0),
    ( if SetId = Id then
        !:OldPossibles = [Possible0 | !.OldPossibles],
        Possible = not_possible(WhyNot),
        HeadValue = solver_var_value(Id, Possible)
    else
        HeadValue = HeadValue0
    ),
    set_value_to_false(SetId, WhyNot, !OldPossibles, TailValues0, TailValues).

:- pred set_value_to_true(solver_var_value_id::in, not_possible_why::in,
    list(solver_var_value_possible)::in, list(solver_var_value_possible)::out,
    list(solver_var_value)::in, list(solver_var_value)::out) is det.

set_value_to_true(_SetId, _WhyNot, !OldPossibles, [], []).
set_value_to_true(SetId, WhyNot, !OldPossibles,
        [HeadValue0 | TailValues0], [HeadValue | TailValues]) :-
    HeadValue0 = solver_var_value(Id, Possible0),
    ( if SetId = Id then
        !:OldPossibles = [Possible0 | !.OldPossibles],
        Possible = is_possible,
        HeadValue = solver_var_value(Id, Possible)
    else
        Possible = not_possible(WhyNot),
        HeadValue = solver_var_value(Id, Possible)
    ),
    set_value_to_true(SetId, WhyNot, !OldPossibles, TailValues0, TailValues).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- pred setup_requirements(solver_var_map::in, list(requirement)::out) is det.

setup_requirements(SolverVarMap, Requirements) :-
    RequirementSpecs = init_requirement_specs,
    convert_and_check_requirements(0, SolverVarMap,
        RequirementSpecs, Requirements, BadRequirements),
    (
        BadRequirements = []
    ;
        BadRequirements = [_ | _],
        trace [io(!IO)] (
            io.write(BadRequirements, !IO)
        ),
        unexpected($pred, "some bad requirements")
    ).

:- pred convert_and_check_requirements(int::in, solver_var_map::in,
    list(requirement_spec)::in, list(requirement)::out, list(requirement)::out)
    is det.

convert_and_check_requirements(_CurId, _SolverVarMap, [], [], []).
convert_and_check_requirements(CurId, SolverVarMap,
        [ReqSpec | ReqSpecs], OkRequirements, BadRequirements) :-
    convert_and_check_requirements(CurId + 1, SolverVarMap, ReqSpecs,
        OkRequirementsTail, BadRequirementsTail),
    ReqSpec = requirement_spec(ReqDesc,
        (IfVar `being` IfValue) `implies_that`
        (ThenVar `is_one_of` ThenValues)),
    Requirement = requirement(requirement_id(CurId), ReqDesc,
        IfVar, IfValue, ThenVar, ThenValues),
    ( if
        % Both variable ids in the requirement must be in SolverMap,
        % and all the value ids must be in the SolverMap entries
        % of their respective variables. If they are not, the requirement
        % does not make sense.
        known_var_values(SolverVarMap, IfVar, [IfValue]),
        known_var_values(SolverVarMap, ThenVar, ThenValues),

        % ReqSpec represents the implication:
        %
        %   (IfVar = IfValue) -> (ThenVar in ThenValues)
        %
        % If ThenValues = [], then the requirement is unsatisfiable.
        ThenValues = [_ | _]
    then
        OkRequirements = [Requirement | OkRequirementsTail],
        BadRequirements = BadRequirementsTail
    else
        OkRequirements = OkRequirementsTail,
        BadRequirements = [Requirement | BadRequirementsTail]
    ).

:- pred known_var_values(solver_var_map::in,
    solver_var_id::in, list(solver_var_value_id)::in) is semidet.

known_var_values(SolverVarMap, SearchVarId, SearchValueId) :-
    map.search(SolverVarMap, SearchVarId, SolverVar),
    SolverVar = solver_var(_, _, VarValues),
    set.list_to_set(SearchValueId, SearchSet),
    ValueId = list.map(solver_var_value_project_id, VarValues),
    set.list_to_set(ValueId, Set),
    set.subset(SearchSet, Set).

:- func solver_var_value_project_id(solver_var_value)
    = solver_var_value_id.

solver_var_value_project_id(SolverVarValue) = SolverVarValue ^ svv_id.

%---------------------------------------------------------------------------%
:- end_module grade_setup.
%---------------------------------------------------------------------------%
