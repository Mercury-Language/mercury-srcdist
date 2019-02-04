%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 2000-2008 University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: prog_rep.m.
% Authors: zs, maclarty.
%
% This module generates a representation of HLDS goals for the declarative
% debugger. Since this representation is to be included in debuggable
% executables, it should be as compact as possible, and therefore contains
% only the information required by the declarative debugger. The structure
% of this representation is defined by mdbcomp/program_representation.m.
%
%---------------------------------------------------------------------------%

:- module ll_backend.prog_rep.
:- interface.

:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_module.
:- import_module hlds.instmap.
:- import_module ll_backend.stack_layout.
:- import_module parse_tree.prog_data.

:- import_module list.
:- import_module map.
:- import_module pair.

%---------------------------------------------------------------------------%

    % A var_num_map maps each variable that occurs in any of a procedure's
    % layout structures to a number that uniquely identifies that variable,
    % and to its name.
    %
    % The integer returned by term.var_to_int are a dense set when we consider
    % all the original variables of a procedure. However, it can become less
    % dense when an optimization removes all references to a variable, and
    % becomes less dense still when we consider only variables that occur
    % in a layout structure. This is why we allocate our own id numbers.
    %
:- type var_num_map == map(prog_var, pair(int, string)).

:- pred represent_proc_as_bytecodes(list(prog_var)::in, hlds_goal::in,
    instmap::in, vartypes::in, var_num_map::in, module_info::in,
    stack_layout_info::in, stack_layout_info::out, list(int)::out) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module backend_libs.bytecode_data.
:- import_module check_hlds.inst_match.
:- import_module check_hlds.mode_util.
:- import_module hlds.code_model.
:- import_module hlds.hlds_pred.
:- import_module libs.compiler_util.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.program_representation.
:- import_module parse_tree.prog_util.

:- import_module int.
:- import_module maybe.
:- import_module set.
:- import_module string.
:- import_module term.

%---------------------------------------------------------------------------%

:- type prog_rep_info
    --->    prog_rep_info(
                pri_filename    :: string,
                pri_vartypes    :: vartypes,
                pri_var_num_map :: var_num_map,
                pri_var_num_rep :: var_num_rep,
                pri_module_info :: module_info
            ).

represent_proc_as_bytecodes(HeadVars, Goal, InstMap0, VarTypes, VarNumMap,
        ModuleInfo, !StackInfo, ProcRepBytes) :-
    Goal = hlds_goal(_, GoalInfo),
    Context = goal_info_get_context(GoalInfo),
    term.context_file(Context, FileName),
    MaxVarNum = map.foldl(max_var_num, VarNumMap, 0),
    ( MaxVarNum =< 255 ->
        VarNumRep = byte
    ;
        VarNumRep = short
    ),
    Info = prog_rep_info(FileName, VarTypes, VarNumMap, VarNumRep, ModuleInfo),
    var_num_rep_byte(VarNumRep, VarNumRepByte),

    string_to_byte_list(FileName, FileNameBytes, !StackInfo),
    goal_to_byte_list(Goal, InstMap0, Info, GoalBytes, !StackInfo),
    ProcRepBytes0 = [VarNumRepByte] ++ FileNameBytes ++
        vars_to_byte_list(Info, HeadVars) ++ GoalBytes,
    int32_to_byte_list(list.length(ProcRepBytes0) + 4, LimitBytes),
    ProcRepBytes = LimitBytes ++ ProcRepBytes0.

%---------------------------------------------------------------------------%

:- func max_var_num(prog_var, pair(int, string), int) = int.

max_var_num(_, VarNum1 - _, VarNum2) = Max :-
    ( VarNum1 > VarNum2 ->
        Max = VarNum1
    ;
        Max = VarNum2
    ).

%---------------------------------------------------------------------------%

:- pred goal_to_byte_list(hlds_goal::in, instmap::in, prog_rep_info::in,
    list(int)::out, stack_layout_info::in, stack_layout_info::out) is det.

goal_to_byte_list(hlds_goal(GoalExpr, GoalInfo), InstMap0, Info, Bytes,
        !StackInfo) :-
    goal_expr_to_byte_list(GoalExpr, GoalInfo, InstMap0, Info, Bytes,
        !StackInfo).

:- pred goal_expr_to_byte_list(hlds_goal_expr::in, hlds_goal_info::in,
    instmap::in, prog_rep_info::in, list(int)::out,
    stack_layout_info::in, stack_layout_info::out) is det.

goal_expr_to_byte_list(GoalExpr, GoalInfo, InstMap0, Info, Bytes,
        !StackInfo) :-
    (
        GoalExpr = conj(ConjType, Goals),
        expect(unify(ConjType, plain_conj), this_file,
            "non-plain conjunction and declarative debugging"),
        conj_to_byte_list(Goals, InstMap0, Info, ConjBytes, !StackInfo),
        Bytes = [goal_type_to_byte(goal_conj)] ++
            length_to_byte_list(Goals) ++ ConjBytes
    ;
        GoalExpr = disj(Goals),
        disj_to_byte_list(Goals, InstMap0, Info, DisjBytes, !StackInfo),
        Bytes = [goal_type_to_byte(goal_disj)] ++
            length_to_byte_list(Goals) ++ DisjBytes
    ;
        GoalExpr = negation(SubGoal),
        goal_to_byte_list(SubGoal, InstMap0, Info, SubGoalBytes, !StackInfo),
        Bytes = [goal_type_to_byte(goal_neg)] ++ SubGoalBytes
    ;
        GoalExpr = if_then_else(_, Cond, Then, Else),
        Cond = hlds_goal(_, CondGoalInfo),
        InstMapDelta = goal_info_get_instmap_delta(CondGoalInfo),
        instmap.apply_instmap_delta(InstMap0, InstMapDelta, InstMap1),
        goal_to_byte_list(Cond, InstMap0, Info, CondBytes, !StackInfo),
        goal_to_byte_list(Then, InstMap1, Info, ThenBytes, !StackInfo),
        goal_to_byte_list(Else, InstMap0, Info, ElseBytes, !StackInfo),
        Bytes = [goal_type_to_byte(goal_ite)] ++
            CondBytes ++ ThenBytes ++ ElseBytes
    ;
        GoalExpr = unify(_, _, _, Uni, _),
        atomic_goal_info_to_byte_list(GoalInfo, InstMap0, Info,
            AtomicBytes, BoundVars, !StackInfo),
        (
            Uni = assign(Target, Source),
            Bytes = [goal_type_to_byte(goal_assign)] ++
                var_to_byte_list(Info, Target) ++
                var_to_byte_list(Info, Source) ++
                AtomicBytes
        ;
            Uni = construct(Var, ConsId, Args, ArgModes, _, _, _),
            cons_id_to_byte_list(ConsId, ConsIdBytes, !StackInfo),
            ( list.all_true(lhs_final_is_ground(Info), ArgModes) ->
                Bytes = [goal_type_to_byte(goal_construct)] ++
                    var_to_byte_list(Info, Var) ++
                    ConsIdBytes ++
                    vars_to_byte_list(Info, Args) ++
                    AtomicBytes
            ;
                filter_input_args(Info, ArgModes, Args, MaybeArgs),
                Bytes = [goal_type_to_byte(goal_partial_construct)] ++
                    var_to_byte_list(Info, Var) ++
                    ConsIdBytes ++
                    maybe_vars_to_byte_list(Info, MaybeArgs) ++
                    AtomicBytes
            )
        ;
            Uni = deconstruct(Var, ConsId, Args, ArgModes, _, _),
            cons_id_to_byte_list(ConsId, ConsIdBytes, !StackInfo),
            ( list.member(Var, BoundVars) ->
                filter_input_args(Info, ArgModes, Args, MaybeArgs),
                Bytes = [goal_type_to_byte(goal_partial_deconstruct)]++
                    var_to_byte_list(Info, Var) ++
                    ConsIdBytes ++
                    maybe_vars_to_byte_list(Info, MaybeArgs) ++
                    AtomicBytes
            ;
                Bytes = [goal_type_to_byte(goal_deconstruct)] ++
                    var_to_byte_list(Info, Var) ++
                    ConsIdBytes ++
                    vars_to_byte_list(Info, Args) ++
                    AtomicBytes
            )
        ;
            Uni = simple_test(Var1, Var2),
            Bytes = [goal_type_to_byte(goal_simple_test)] ++
                var_to_byte_list(Info, Var1) ++
                var_to_byte_list(Info, Var2) ++
                AtomicBytes
        ;
            Uni = complicated_unify(_, _, _),
            unexpected(this_file, "goal_expr_to_byte_list: complicated_unify")
        )
    ;
        GoalExpr = switch(SwitchVar, _, Cases),
        cases_to_byte_list(Cases, InstMap0, Info, CasesBytes, !StackInfo),
        Bytes = [goal_type_to_byte(goal_switch)] ++
            var_to_byte_list(Info, SwitchVar) ++
            length_to_byte_list(Cases) ++ CasesBytes
    ;
        GoalExpr = scope(_, SubGoal),
        SubGoal = hlds_goal(_, SuboalInfo),
        OuterDetism = goal_info_get_determinism(GoalInfo),
        InnerDetism = goal_info_get_determinism(SuboalInfo),
        ( InnerDetism = OuterDetism ->
            MaybeCut = 0
        ;
            MaybeCut = 1
        ),
        goal_to_byte_list(SubGoal, InstMap0, Info, GoalBytes, !StackInfo),
        Bytes = [goal_type_to_byte(goal_scope)] ++ [MaybeCut] ++ GoalBytes
    ;
        GoalExpr = generic_call(GenericCall, Args, _, _),
        atomic_goal_info_to_byte_list(GoalInfo, InstMap0, Info,
            AtomicBytes, _BoundVars, !StackInfo),
        (
            GenericCall = higher_order(PredVar, _, _, _),
            Bytes = [goal_type_to_byte(goal_ho_call)] ++
                var_to_byte_list(Info, PredVar) ++
                vars_to_byte_list(Info, Args) ++
                AtomicBytes
        ;
            GenericCall = class_method(Var, MethodNum, _, _),
            Bytes = [goal_type_to_byte(goal_method_call)] ++
                var_to_byte_list(Info, Var) ++
                method_num_to_byte_list(MethodNum) ++
                vars_to_byte_list(Info, Args) ++
                AtomicBytes
        ;
            GenericCall = event_call(EventName),
            string_to_byte_list(EventName, EventNameBytes, !StackInfo),
            Bytes = [goal_type_to_byte(goal_event_call)] ++
                EventNameBytes ++
                vars_to_byte_list(Info, Args) ++
                AtomicBytes
        ;
            GenericCall = cast(_),
            ( Args = [InputArg, OutputArg] ->
                Bytes = [goal_type_to_byte(goal_cast)] ++
                    var_to_byte_list(Info, OutputArg) ++
                    var_to_byte_list(Info, InputArg) ++
                    AtomicBytes
            ;
                unexpected(this_file, "goal_expr_to_byte_list: cast arity != 2")
            )
        )
    ;
        GoalExpr = plain_call(PredId, _, Args, Builtin, _, _),
        atomic_goal_info_to_byte_list(GoalInfo, InstMap0, Info,
            AtomicBytes, _BoundVars, !StackInfo),
        module_info_pred_info(Info ^ pri_module_info, PredId, PredInfo),
        ModuleSymName = pred_info_module(PredInfo),
        ModuleName = sym_name_to_string(ModuleSymName),
        PredName = pred_info_name(PredInfo),
        string_to_byte_list(ModuleName, ModuleNameBytes, !StackInfo),
        string_to_byte_list(PredName, PredNameBytes, !StackInfo),
        (
            Builtin = not_builtin,
            Bytes = [goal_type_to_byte(goal_plain_call)] ++
                ModuleNameBytes ++
                PredNameBytes ++
                vars_to_byte_list(Info, Args) ++
                AtomicBytes
        ;
            ( Builtin = inline_builtin
            ; Builtin = out_of_line_builtin
            ),
            Bytes = [goal_type_to_byte(goal_builtin_call)] ++
                ModuleNameBytes ++
                PredNameBytes ++
                vars_to_byte_list(Info, Args) ++
                AtomicBytes
        )
    ;
        GoalExpr = call_foreign_proc(_, _PredId, _, Args, _, _, _),
        ArgVars = list.map(foreign_arg_var, Args),
        atomic_goal_info_to_byte_list(GoalInfo, InstMap0, Info,
            AtomicBytes, _BoundVars, !StackInfo),
        Bytes = [goal_type_to_byte(goal_foreign)] ++
            vars_to_byte_list(Info, ArgVars) ++ AtomicBytes
    ;
        GoalExpr = shorthand(_),
        % These should have been expanded out by now.
        unexpected(this_file, "goal_expr_to_byte_list: unexpected shorthand")
    ).

:- pred lhs_final_is_ground(prog_rep_info::in, uni_mode::in) is semidet.

lhs_final_is_ground(Info, (_ - _) -> (LHSFinalInst - _)) :-
    inst_is_ground(Info ^ pri_module_info, LHSFinalInst).

:- pred rhs_is_input(prog_rep_info::in, uni_mode::in) is semidet.

rhs_is_input(Info, (_ - RHSInitialInst) -> (_ - RHSFinalInst)) :-
    mode_is_input(Info ^ pri_module_info, RHSInitialInst -> RHSFinalInst).

:- pred filter_input_args(prog_rep_info::in, list(uni_mode)::in,
    list(prog_var)::in, list(maybe(prog_var))::out) is det.

filter_input_args(_, [], [], []).
filter_input_args(Info, [Mode | Modes], [Var | Vars],
        [MaybeVar | MaybeVars]) :-
    ( rhs_is_input(Info, Mode) ->
        MaybeVar = yes(Var)
    ;
        MaybeVar = no
    ),
    filter_input_args(Info, Modes, Vars, MaybeVars).
filter_input_args(_, [], [_ | _], _) :-
    unexpected(this_file, "filter_input_args: mismatched lists").
filter_input_args(_, [_ | _], [], _) :-
    unexpected(this_file, "filter_input_args: mismatched lists").

%---------------------------------------------------------------------------%

:- pred atomic_goal_info_to_byte_list(hlds_goal_info::in, instmap::in,
    prog_rep_info::in, list(int)::out, list(prog_var)::out,
    stack_layout_info::in, stack_layout_info::out) is det.

atomic_goal_info_to_byte_list(GoalInfo, InstMap0, Info, Bytes, BoundVars,
        !StackInfo) :-
    Detism = goal_info_get_determinism(GoalInfo),
    Context = goal_info_get_context(GoalInfo),
    term.context_file(Context, FileName0),
    ( FileName0 = Info ^ pri_filename ->
        FileName = ""
    ;
        FileName = FileName0
    ),
    term.context_line(Context, LineNo),
    InstMapDelta = goal_info_get_instmap_delta(GoalInfo),
    instmap.apply_instmap_delta(InstMap0, InstMapDelta, InstMap),
    instmap_changed_vars(InstMap0, InstMap, Info ^ pri_vartypes,
        Info ^ pri_module_info, ChangedVars),
    set.to_sorted_list(ChangedVars, BoundVars),
    string_to_byte_list(FileName, FileNameBytes, !StackInfo),
    Bytes = [represent_determinism(Detism)] ++
        FileNameBytes ++
        lineno_to_byte_list(LineNo) ++
        vars_to_byte_list(Info, BoundVars).

:- pred cons_id_and_arity_to_byte_list(cons_id::in, list(int)::out,
    stack_layout_info::in, stack_layout_info::out) is det.

cons_id_and_arity_to_byte_list(ConsId, ConsIdBytes, !StackInfo) :-
    cons_id_to_byte_list(ConsId, FunctorBytes, !StackInfo),
    MaybeArity = cons_id_maybe_arity(ConsId),
    (
        MaybeArity = yes(Arity)
    ;
        MaybeArity = no,
        Arity = 0
    ),
    short_to_byte_list(Arity, ArityBytes),
    ConsIdBytes = FunctorBytes ++ ArityBytes.

:- pred cons_id_to_byte_list(cons_id::in, list(int)::out,
    stack_layout_info::in, stack_layout_info::out) is det.

cons_id_to_byte_list(SymName, Bytes, !StackInfo) :-
    string_to_byte_list(cons_id_rep(SymName), Bytes, !StackInfo).

:- func cons_id_rep(cons_id) = string.

cons_id_rep(cons(SymName, _)) = prog_rep.sym_base_name_to_string(SymName).
cons_id_rep(int_const(Int)) = string.int_to_string(Int).
cons_id_rep(float_const(Float)) = string.float_to_string(Float).
cons_id_rep(string_const(String)) = string.append_list(["""", String, """"]).
cons_id_rep(implementation_defined_const(Name)) = "$" ++ Name.
cons_id_rep(pred_const(_, _)) = "$pred_const".
cons_id_rep(type_ctor_info_const(_, _, _)) = "$type_ctor_info_const".
cons_id_rep(base_typeclass_info_const(_, _, _, _)) =
    "$base_typeclass_info_const".
cons_id_rep(type_info_cell_constructor(_)) = "$type_info_cell_constructor".
cons_id_rep(typeclass_info_cell_constructor) =
    "$typeclass_info_cell_constructor".
cons_id_rep(tabling_info_const(_)) = "$tabling_info_const".
cons_id_rep(deep_profiling_proc_layout(_)) = "$deep_profiling_procedure_data".
cons_id_rep(table_io_decl(_)) = "$table_io_decl".

:- func sym_base_name_to_string(sym_name) = string.

sym_base_name_to_string(unqualified(String)) = String.
sym_base_name_to_string(qualified(_, String)) = String.

%---------------------------------------------------------------------------%

:- pred conj_to_byte_list(hlds_goals::in, instmap::in, prog_rep_info::in,
    list(int)::out, stack_layout_info::in, stack_layout_info::out) is det.

conj_to_byte_list([], _, _, [], !StackInfo).
conj_to_byte_list([Goal | Goals], InstMap0, Info, Bytes, !StackInfo) :-
    goal_to_byte_list(Goal, InstMap0, Info, GoalBytes, !StackInfo),
    Goal = hlds_goal(_, GoalInfo),
    InstMapDelta = goal_info_get_instmap_delta(GoalInfo),
    instmap.apply_instmap_delta(InstMap0, InstMapDelta, InstMap1),
    conj_to_byte_list(Goals, InstMap1, Info, GoalsBytes, !StackInfo),
    Bytes = GoalBytes ++ GoalsBytes.

%---------------------------------------------------------------------------%

:- pred disj_to_byte_list(hlds_goals::in, instmap::in, prog_rep_info::in,
    list(int)::out, stack_layout_info::in, stack_layout_info::out) is det.

disj_to_byte_list([], _, _, [], !StackInfo).
disj_to_byte_list([Goal | Goals], InstMap0, Info, Bytes, !StackInfo) :-
    goal_to_byte_list(Goal, InstMap0, Info, GoalBytes, !StackInfo),
    disj_to_byte_list(Goals, InstMap0, Info, GoalsBytes, !StackInfo),
    Bytes = GoalBytes ++ GoalsBytes.

%---------------------------------------------------------------------------%

:- pred cases_to_byte_list(list(case)::in, instmap::in, prog_rep_info::in,
    list(int)::out, stack_layout_info::in, stack_layout_info::out) is det.

cases_to_byte_list([], _, _, [], !StackInfo).
cases_to_byte_list([Case | Cases], InstMap0, Info, Bytes, !StackInfo) :-
    Case = case(MainConsId, OtherConsIds, Goal),
    cons_id_and_arity_to_byte_list(MainConsId, MainConsIdBytes, !StackInfo),
    list.map_foldl(cons_id_and_arity_to_byte_list, OtherConsIds,
        OtherConsIdsByteLists, !StackInfo),
    list.condense(OtherConsIdsByteLists, OtherConsIdsBytes),
    NumOtherConsIdBytes = length_to_byte_list(OtherConsIds),
    goal_to_byte_list(Goal, InstMap0, Info, GoalBytes, !StackInfo),
    cases_to_byte_list(Cases, InstMap0, Info, CasesBytes, !StackInfo),
    Bytes = MainConsIdBytes ++ NumOtherConsIdBytes ++ OtherConsIdsBytes
        ++ GoalBytes ++ CasesBytes.

%---------------------------------------------------------------------------%

% The operations to convert primitive constructs to bytecode.
%
% We use the operations defined in bytecode_data. Each of the functions below
% stands for a given primitive construct. If we need to expand the number of
% bytes we use to represent one of these, it should be sufficient to change
% the number of bits here and in mdbcomp/program_representation.m.
%
% Warning: the predicates we use from bytecode_data deal with signed integers,
% but we here use them to represent unsigned quantities. This effectively
% halves their range.

:- pred string_to_byte_list(string::in, list(int)::out,
    stack_layout_info::in, stack_layout_info::out) is det.

string_to_byte_list(String, Bytes, !StackInfo) :-
    stack_layout.lookup_string_in_table(String, Index, !StackInfo),
    int32_to_byte_list(Index, Bytes).

:- func vars_to_byte_list(prog_rep_info, list(prog_var)) = list(int).

vars_to_byte_list(Info, Vars) =
    length_to_byte_list(Vars) ++
    list.condense(list.map(var_to_byte_list(Info), Vars)).

:- func maybe_vars_to_byte_list(prog_rep_info, list(maybe(prog_var))) =
    list(int).

maybe_vars_to_byte_list(Info, Vars) =
    length_to_byte_list(Vars) ++
    list.condense(list.map(maybe_var_to_byte_list(Info), Vars)).

:- func var_to_byte_list(prog_rep_info, prog_var) = list(int).

var_to_byte_list(Info, Var) = Bytes :-
    map.lookup(Info ^ pri_var_num_map, Var, VarNum - _),
    (
        Info ^ pri_var_num_rep = byte,
        Bytes = [VarNum]
    ;
        Info ^ pri_var_num_rep = short,
        short_to_byte_list(VarNum, Bytes)
    ).

:- func maybe_var_to_byte_list(prog_rep_info, maybe(prog_var)) = list(int).

maybe_var_to_byte_list(Info, MaybeVar) = Bytes :-
    % This is not the most efficient representation, however maybe(prog_var)s
    % are only used for partial unifications which are rare.
    (
        MaybeVar = yes(Var),
        Bytes = [1 | var_to_byte_list(Info, Var)]
    ;
        MaybeVar = no,
        Bytes = [0]
    ).

:- func length_to_byte_list(list(T)) = list(int).

length_to_byte_list(List) = Bytes :-
    short_to_byte_list(list.length(List), Bytes).

:- func lineno_to_byte_list(int) = list(int).

lineno_to_byte_list(VarNum) = Bytes :-
    short_to_byte_list(VarNum, Bytes).

:- func method_num_to_byte_list(int) = list(int).

method_num_to_byte_list(VarNum) = Bytes :-
    short_to_byte_list(VarNum, Bytes).

%---------------------------------------------------------------------------%

:- func this_file = string.

this_file = "prog_rep.m".

%---------------------------------------------------------------------------%
:- end_module prog_rep.
%---------------------------------------------------------------------------%
