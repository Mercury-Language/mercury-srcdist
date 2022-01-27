%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module choose_grade.
:- interface.

:- import_module io.

:- pred main(io::di, io::uo) is det.

%---------------------------------------------------------------------------%

:- implementation.

:- import_module grade_setup.
:- import_module grade_solver.
:- import_module grade_state.
:- import_module grade_string.
:- import_module grade_structure.
:- import_module grade_vars.
:- import_module var_value_names.

:- import_module bool.
:- import_module cord.
:- import_module list.
:- import_module maybe.
:- import_module string.

main(!IO) :-
    AutoconfResults = autoconf_results(autoconf_gcc_regs_avail_yes,
        autoconf_gcc_gotos_avail_yes, autoconf_gcc_labels_avail_yes,
        autoconf_low_tag_bits_avail_3, autoconf_size_of_double_eq_ptr,
        autoconf_merc_file_no),
    setup_solver_info(AutoconfResults, SolverInfo0),
    io.command_line_arguments(Args, !IO),
    process_arguments(Args, cord.init, BadArgLinesCord,
        SolverInfo0, SolverInfo1),
    BadArgLines = cord.list(BadArgLinesCord),
    (
        BadArgLines = [_ | _],
        io.write_string("unrecognized arguments:\n", !IO),
        list.foldl(io.write_string, BadArgLines, !IO)
    ;
        BadArgLines = [],
        trace [compile_time(flag("debug_choose_grade")), io(!TIO)] (
            io.write_string("AFTER SETUP\n", !TIO),
            SolverVarMap1 = SolverInfo1 ^ si_solver_var_map,
            io.write_string(solver_var_map_to_str("    ", SolverVarMap1), !TIO)
        ),
        solve_absolute(SolverInfo1, _SolveCounts, Soln),
        io.write_string(soln_to_str("", Soln), !IO),
        (
            Soln = soln_failure(_)
        ;
            Soln = soln_success(SuccMap),
            GradeVars = success_map_to_grade_vars(SuccMap),
            GradeStructure = grade_vars_to_grade_structure(GradeVars),
            GradeStr = grade_structure_to_grade_string(
                grade_string_link_check, GradeStructure),
            io.format("GRADE %s\n", [s(GradeStr)], !IO)
        )
    ).

%---------------------------------------------------------------------------%

:- pred process_arguments(list(string)::in,
    cord(string)::in, cord(string)::out,
    solver_info::in, solver_info::out) is det.

process_arguments([], !BadArgLines, !SolverInfo).
process_arguments([Arg | Args], !BadArgLines, !SolverInfo) :-
    ( if string.remove_prefix("CONFIG", Arg, ArgSuffixPrime) then
        WhyNot = npw_config,
        ArgSuffix = ArgSuffixPrime
    else
        WhyNot = npw_user,
        ArgSuffix = Arg
    ),
    ( if
        ( if
            NeqComponents = string.split_at_string("!=", ArgSuffix),
            NeqComponents = [VarNamePrime, ValueNamePrime]
        then
            SetTo = set_to_false,
            VarName = VarNamePrime,
            ValueName = ValueNamePrime
        else if
            EqComponents = string.split_at_string("=", ArgSuffix),
            EqComponents = [VarNamePrime, ValueNamePrime]
        then
            SetTo = set_to_true,
            VarName = VarNamePrime,
            ValueName = ValueNamePrime
        else
            fail
        )
    then
        ( if solver_var_name(VarName, VarId0) then
            MaybeVarId = yes(VarId0),
            VarErrorMsg = ""
        else
            MaybeVarId = no,
            string.format("there is no solver variable named %s\n",
                [s(VarName)], VarErrorMsg)
        ),
        ( if solver_var_value_name(ValueName, ValueId0) then
            MaybeValueId = yes(ValueId0),
            ValueErrorMsg = ""
        else
            MaybeValueId = no,
            string.format("there is no solver var value named %s\n",
                [s(ValueName)], ValueErrorMsg)
        ),
        ( if
            MaybeVarId = yes(VarId),
            MaybeValueId = yes(ValueId)
        then
            set_solver_var(VarName, ValueName, VarId, ValueId, SetTo, WhyNot,
                MaybeError, !SolverInfo)
        else
            MaybeError = error(VarErrorMsg ++ ValueErrorMsg)
        )
    else
        string.format("`%s' is neither an equation nor a disequation\n",
            [s(Arg)], ArgMsg),
        MaybeError = error(ArgMsg)
    ),
    (
        MaybeError = ok
    ;
        MaybeError = error(Msg),
        !:BadArgLines = cord.snoc(!.BadArgLines, Msg)
    ),
    process_arguments(Args, !BadArgLines, !SolverInfo).

%---------------------------------------------------------------------------%
:- end_module choose_grade.
%---------------------------------------------------------------------------%
