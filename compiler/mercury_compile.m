%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1994-2009 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: mercury_compile.m.
% Main authors: fjh, zs.
%
% This is the top-level of the Mercury compiler.
%
% This module invokes the different passes of the compiler as appropriate.
% The constraints on pass ordering are documented in
% compiler/notes/compiler_design.html.
%
%-----------------------------------------------------------------------------%

:- module top_level.mercury_compile.
:- interface.

:- import_module io.
:- import_module list.

    % This is the main entry point for the Mercury compiler.
    % It is called from top_level.main.
    %
:- pred real_main(io::di, io::uo) is det.

    % main(Args).
    % It is called from make.module_target.call_mercury_compile_main.
    %
:- pred main(list(string)::in, io::di, io::uo) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

    % The main compiler passes (mostly in order of execution).

    % Semantic analysis.
:- import_module parse_tree.prog_foreign.
:- import_module parse_tree.prog_io.
:- import_module parse_tree.prog_out.
:- import_module parse_tree.file_names.
:- import_module parse_tree.module_imports.
:- import_module parse_tree.modules.
:- import_module parse_tree.read_modules.
:- import_module parse_tree.source_file_map.
:- import_module parse_tree.write_deps_file.
:- import_module parse_tree.prog_event.
:- import_module parse_tree.module_qual.
:- import_module parse_tree.equiv_type.
:- import_module hlds.make_hlds.
:- import_module check_hlds.typecheck.
:- import_module check_hlds.type_constraints.
:- import_module check_hlds.purity.
:- import_module check_hlds.implementation_defined_literals.
:- import_module check_hlds.polymorphism.
:- import_module check_hlds.modes.
:- import_module check_hlds.mode_constraints.
:- import_module check_hlds.switch_detection.
:- import_module check_hlds.cse_detection.
:- import_module check_hlds.det_analysis.
:- import_module check_hlds.unique_modes.
:- import_module check_hlds.stratify.
:- import_module check_hlds.try_expand.
:- import_module check_hlds.simplify.

    % High-level HLDS transformations.
:- import_module check_hlds.check_typeclass.
:- import_module hlds.mark_tail_calls.
:- import_module transform_hlds.intermod.
:- import_module transform_hlds.trans_opt.
:- import_module transform_hlds.equiv_type_hlds.
:- import_module transform_hlds.table_gen.
:- import_module transform_hlds.complexity.
:- import_module transform_hlds.lambda.
:- import_module transform_hlds.stm_expand.
:- import_module transform_hlds.closure_analysis.
:- import_module transform_hlds.termination.
:- import_module transform_hlds.ssdebug.
:- import_module transform_hlds.term_constr_main.
:- import_module transform_hlds.exception_analysis.
:- import_module transform_hlds.trailing_analysis.
:- import_module transform_hlds.tabling_analysis.
:- import_module transform_hlds.higher_order.
:- import_module transform_hlds.implicit_parallelism.
:- import_module transform_hlds.accumulator.
:- import_module transform_hlds.tupling.
:- import_module transform_hlds.untupling.
:- import_module transform_hlds.inlining.
:- import_module transform_hlds.loop_inv.
:- import_module transform_hlds.deforest.
:- import_module transform_hlds.dead_proc_elim.
:- import_module transform_hlds.delay_construct.
:- import_module transform_hlds.unused_args.
:- import_module transform_hlds.unneeded_code.
:- import_module transform_hlds.lco.
:- import_module transform_hlds.distance_granularity.
:- import_module transform_hlds.ctgc.
:- import_module transform_hlds.ctgc.structure_reuse.
:- import_module transform_hlds.ctgc.structure_reuse.analysis.
:- import_module transform_hlds.ctgc.structure_sharing.
:- import_module transform_hlds.ctgc.structure_sharing.analysis.
:- import_module transform_hlds.granularity.
:- import_module transform_hlds.dep_par_conj.
:- import_module transform_hlds.parallel_to_plain_conj.
:- import_module transform_hlds.size_prof.
:- import_module ll_backend.deep_profiling.

:- import_module transform_hlds.rbmm.

    % The LLDS back-end.
:- import_module ll_backend.continuation_info.
:- import_module ll_backend.dupproc.
:- import_module ll_backend.follow_code.
:- import_module ll_backend.global_data.
:- import_module ll_backend.liveness.
:- import_module ll_backend.llds.
:- import_module ll_backend.llds_out.
:- import_module ll_backend.optimize.
:- import_module ll_backend.proc_gen.
:- import_module ll_backend.saved_vars.
:- import_module ll_backend.stack_alloc.
:- import_module ll_backend.stack_layout.
:- import_module ll_backend.stack_opt.
:- import_module ll_backend.store_alloc.
:- import_module ll_backend.transform_llds.

    % The bytecode back-end.
:- import_module bytecode_backend.bytecode_gen.
:- import_module bytecode_backend.bytecode.

    % The x86_64 asm back-end.
    %
:- import_module ll_backend.llds_to_x86_64.
:- import_module ll_backend.llds_to_x86_64_out.
%:- import_module ll_backend.x86_64_instrs.

    % The MLDS back-end.
:- import_module ml_backend.add_trail_ops.         % HLDS -> HLDS
:- import_module ml_backend.add_heap_ops.          % HLDS -> HLDS
:- import_module ml_backend.mark_static_terms.     % HLDS -> HLDS
:- import_module ml_backend.mlds.                  % MLDS data structure
:- import_module ml_backend.ml_code_gen.
:- import_module ml_backend.rtti_to_mlds.          % HLDS/RTTI -> MLDS
:- import_module ml_backend.ml_elim_nested.        % MLDS -> MLDS
:- import_module ml_backend.ml_tailcall.           % MLDS -> MLDS
:- import_module ml_backend.ml_optimize.           % MLDS -> MLDS
:- import_module ml_backend.mlds_to_c.             % MLDS -> C
:- import_module ml_backend.mlds_to_java.          % MLDS -> Java
:- import_module ml_backend.mlds_to_ilasm.         % MLDS -> IL assembler
:- import_module ml_backend.maybe_mlds_to_gcc.     % MLDS -> GCC back-end
:- import_module ml_backend.ml_util.               % MLDS utility predicates

    % The Erlang back-end.
:- import_module erl_backend.elds.
:- import_module erl_backend.elds_to_erlang.
:- import_module erl_backend.erl_code_gen.
:- import_module erl_backend.erl_rtti.

    % Miscellaneous compiler modules.
:- import_module check_hlds.goal_path.
:- import_module check_hlds.inst_check.
:- import_module check_hlds.unused_imports.
:- import_module check_hlds.xml_documentation.
:- import_module hlds.arg_info.
:- import_module hlds.hlds_error_util.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_module.
:- import_module hlds.hlds_out.
:- import_module hlds.hlds_pred.
:- import_module hlds.passes_aux.
:- import_module ll_backend.layout.
:- import_module ll_backend.llds.
:- import_module make.
:- import_module make.options_file.
:- import_module make.util.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.program_representation.
:- import_module parse_tree.error_util.
:- import_module parse_tree.mercury_to_mercury.
:- import_module parse_tree.module_cmds.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_item.
:- import_module recompilation.
:- import_module recompilation.check.
:- import_module recompilation.usage.
:- import_module transform_hlds.dependency_graph.

    % Inter-module analysis framework.
:- import_module analysis.
:- import_module transform_hlds.mmc_analysis.

    % Compiler library modules.
:- import_module backend_libs.base_typeclass_info.
:- import_module backend_libs.compile_target_code.
:- import_module backend_libs.export.
:- import_module backend_libs.foreign.
:- import_module backend_libs.proc_label.
:- import_module backend_libs.rtti.
:- import_module backend_libs.type_class_info.
:- import_module backend_libs.type_ctor_info.
:- import_module libs.compiler_util.
:- import_module libs.file_util.
:- import_module libs.globals.
:- import_module libs.handle_options.
:- import_module libs.options.
:- import_module libs.timestamp.
:- import_module libs.trace_params.

    % Library modules.
:- import_module assoc_list.
:- import_module benchmarking.
:- import_module bool.
:- import_module gc.
:- import_module getopt_io.
:- import_module int.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module pprint.
:- import_module set.
:- import_module string.
:- import_module svmap.
:- import_module term.
:- import_module unit.

%-----------------------------------------------------------------------------%

real_main(!IO) :-
    gc_init(!IO),

    % All messages go to stderr
    io.stderr_stream(StdErr, !IO),
    io.set_output_stream(StdErr, _, !IO),
    io.command_line_arguments(Args0, !IO),

    % Replace all @file arguments with the contents of the file
    expand_at_file_arguments(Args0, Res, !IO),
    (
        Res = ok(Args),
        real_main_2(Args, !IO)
    ;
        Res = error(E),
        io.set_exit_status(1, !IO),

        io.write_string(io.error_message(E), !IO),
        io.nl(!IO)
    ).

:- pred real_main_2(list(string)::in, io::di, io::uo) is det.

real_main_2(Args0, !IO) :-
    % read_args_file and globals.io_printing_usage may attempt
    % to look up options, so we need to initialize the globals.
    handle_options([], _, _, _, _, !IO),

    ( Args0 = ["--arg-file", ArgFile] ->
        % All the configuration and options file options are passed in the
        % given file, which is created by the parent `mmc --make' process.
        % The environment is ignored, unlike with @file syntax.
        options_file.read_args_file(ArgFile, MaybeArgs1, !IO),
        (
            MaybeArgs1 = yes(Args1),
            process_options(Args1, OptionArgs, NonOptionArgs, _, !IO),
            MaybeMCFlags = yes([])
        ;
            MaybeArgs1 = no,
            OptionArgs = [],
            NonOptionArgs = [],
            MaybeMCFlags = yes([])
        ),
        Variables = options_variables_init,
        Link = no
    ;
        % Find out which options files to read.
        % Don't report errors yet, as the errors may no longer exist
        % after we have read in options files.
        handle_options(Args0, _Errors0, OptionArgs, NonOptionArgs, Link, !IO),
        read_options_files(options_variables_init, MaybeVariables0, !IO),
        (
            MaybeVariables0 = yes(Variables0),
            lookup_mmc_options(Variables0, MaybeMCFlags0, !IO),
            (
                MaybeMCFlags0 = yes(MCFlags0),
                real_main_3(MCFlags0, MaybeMCFlags, Args0,
                    Variables0, Variables, !IO)
            ;
                MaybeMCFlags0 = no,
                Variables = options_variables_init,
                MaybeMCFlags = no
            )
        ;
            MaybeVariables0 = no,
            Variables = options_variables_init,
            MaybeMCFlags = no
        )
    ),
    (
        MaybeMCFlags = yes(MCFlags),
        handle_options(MCFlags ++ OptionArgs, Errors, _, _, _, !IO),

        % When computing the option arguments to pass to `--make', only include
        % the command-line arguments, not the contents of DEFAULT_MCFLAGS.
        main_2(Errors, Variables, OptionArgs, NonOptionArgs, Link, !IO)
    ;
        MaybeMCFlags = no,
        io.set_exit_status(1, !IO)
    ).

:- pred real_main_3(list(string)::in, maybe(list(string))::out,
    list(string)::in, options_variables::in, options_variables::out,
    io::di, io::uo) is det.

real_main_3(MCFlags0, MaybeMCFlags, Args0, Variables0, Variables, !IO) :-
    % Process the options again to find out which configuration file to read.
    handle_options(MCFlags0 ++ Args0, Errors, _, _, _, !IO),
    (
        Errors = [_ | _],
        usage_errors(Errors, !IO),
        Variables = options_variables_init,
        MaybeMCFlags = no
    ;
        Errors = [],
        globals.io_lookup_maybe_string_option(config_file, MaybeConfigFile,
            !IO),
        (
            MaybeConfigFile = yes(ConfigFile),
            read_options_file(ConfigFile, Variables0, MaybeVariables, !IO),
            (
                MaybeVariables = yes(Variables),
                lookup_mmc_options(Variables, MaybeMCFlags, !IO)
            ;
                MaybeVariables = no,
                MaybeMCFlags = no,
                Variables = options_variables_init
            )
        ;
            MaybeConfigFile = no,
            Variables = options_variables_init,
            lookup_mmc_options(Variables, MaybeMCFlags, !IO)
        )
    ).

main(Args, !IO) :-
    main_2([], options_variables_init, [], Args, no, !IO).

%-----------------------------------------------------------------------------%

:- pred gc_init(io::di, io::uo) is det.

% This version is only used if there is no matching foreign_proc version.
gc_init(!IO).

:- pragma foreign_proc("C",
    gc_init(_IO0::di, _IO::uo),
    [will_not_call_mercury, promise_pure, tabled_for_io],
"
#ifdef MR_BOEHM_GC
    /*
    ** Explicitly force the initial heap size to be at least 4 Mb.
    **
    ** This works around a bug in the Boehm collector (for versions up
    ** to at least 6.2) where the collector would sometimes abort with
    ** the message `unexpected mark stack overflow' (e.g. in grade hlc.gc
    ** on dec-alpha-osf3.2).
    **
    ** Doing this should also improve performance slightly by avoiding
    ** frequent garbage collection during start-up.
    */
    GC_expand_hp(4 * 1024 * 1024);
#endif
").

%-----------------------------------------------------------------------------%

:- pred main_2(list(string)::in, options_variables::in, list(string)::in,
    list(string)::in, bool::in, io::di, io::uo) is det.

main_2(Errors, OptionVariables, OptionArgs, Args, Link, !IO) :-
    (
        Errors = [_ | _],
        usage_errors(Errors, !IO)
    ;
        Errors = [],
        globals.io_get_globals(Globals0, !IO),
        main_3(OptionVariables, OptionArgs, Args, Link,
            Globals0, _Globals, !IO)
    ).

:- pred main_3(options_variables::in, list(string)::in, list(string)::in,
    bool::in, globals::in, globals::out, io::di, io::uo) is det.

main_3(OptionVariables, OptionArgs, Args, Link, !Globals, !IO) :-
    globals.lookup_bool_option(!.Globals, version, Version),
    globals.lookup_bool_option(!.Globals, help, Help),
    globals.lookup_bool_option(!.Globals, generate_source_file_mapping,
        GenerateMapping),
    globals.lookup_bool_option(!.Globals, output_grade_string,
        OutputGrade),
    globals.lookup_bool_option(!.Globals, output_link_command,
        OutputLinkCommand),
    globals.lookup_bool_option(!.Globals, output_shared_lib_link_command,
        OutputShLibLinkCommand),
    globals.lookup_bool_option(!.Globals, filenames_from_stdin,
        FileNamesFromStdin),
    globals.lookup_bool_option(!.Globals, output_libgrades,
        OutputLibGrades),
    globals.lookup_bool_option(!.Globals, output_cc, OutputCC),
    globals.lookup_bool_option(!.Globals, output_cflags, OutputCFlags),
    globals.lookup_bool_option(!.Globals, output_library_link_flags,
        OutputLibraryLinkFlags),
    globals.lookup_bool_option(!.Globals, make, Make),
    globals.lookup_maybe_string_option(!.Globals,
        generate_standalone_interface, GenerateStandaloneInt),
    ( Version = yes ->
        io.stdout_stream(Stdout, !IO),
        io.set_output_stream(Stdout, OldOutputStream, !IO),
        display_compiler_version(!IO),
        io.set_output_stream(OldOutputStream, _, !IO)
    ; Help = yes ->
        io.stdout_stream(Stdout, !IO),
        io.set_output_stream(Stdout, OldOutputStream, !IO),
        long_usage(!IO),
        io.set_output_stream(OldOutputStream, _, !IO)
    ; OutputGrade = yes ->
        % When Mmake asks for the grade, it really wants
        % the directory component to use. This is consistent
        % with scripts/canonical_grade.
        grade_directory_component(!.Globals, Grade),
        io.stdout_stream(Stdout, !IO),
        io.write_string(Stdout, Grade, !IO),
        io.write_string(Stdout, "\n", !IO)
    ; OutputLinkCommand = yes ->
        globals.lookup_string_option(!.Globals, link_executable_command,
            LinkCommand),
        io.stdout_stream(Stdout, !IO),
        io.write_string(Stdout, LinkCommand, !IO),
        io.write_string(Stdout, "\n", !IO)
    ; OutputShLibLinkCommand = yes ->
        globals.lookup_string_option(!.Globals, link_shared_lib_command,
            LinkCommand),
        io.stdout_stream(Stdout, !IO),
        io.write_string(Stdout, LinkCommand, !IO),
        io.write_string(Stdout, "\n", !IO)
    ; OutputLibGrades = yes ->
        globals.lookup_accumulating_option(!.Globals, libgrades, LibGrades),
        io.stdout_stream(Stdout, !IO),
        io.write_list(Stdout, LibGrades, "\n", io.write_string, !IO)
    ; OutputCC = yes ->
        globals.lookup_string_option(!.Globals, cc, CC),
        io.stdout_stream(StdOut, !IO),
        io.write_string(StdOut, CC ++ "\n", !IO)
    ; OutputCFlags = yes ->
        io.stdout_stream(StdOut, !IO),
        output_c_compiler_flags(StdOut, !IO)
    ; OutputLibraryLinkFlags = yes ->
        io.stdout_stream(StdOut, !IO),
        output_library_link_flags(StdOut, !IO)
    ; GenerateMapping = yes ->
        source_file_map.write_source_file_map(Args, !IO)
    ; GenerateStandaloneInt = yes(StandaloneIntBasename) ->
        globals.io_get_target(Target, !IO),
        (
            ( Target = target_il
            ; Target = target_java
            ; Target = target_erlang
            ),
            NYIMsg = [
                words("Sorry,"),
                quote("--generate-standalone-interface"),
                words("is not yet supported with target language"),
                words(compilation_target_string(Target)),
                suffix(".")
            ],
            write_error_pieces_plain(NYIMsg, !IO),
            io.set_exit_status(1, !IO)
        ;
            ( Target = target_c
            ; Target = target_asm
            ; Target = target_x86_64
            ),
            make_standalone_interface(StandaloneIntBasename, !IO)
        )
    ; Make = yes ->
        make_process_args(OptionVariables, OptionArgs, Args, !IO)
    ; Args = [], FileNamesFromStdin = no ->
        usage(!IO)
    ;
        process_all_args(OptionVariables, OptionArgs,
            Args, ModulesToLink, FactTableObjFiles, !Globals, !IO),
        io.get_exit_status(ExitStatus, !IO),
        ( ExitStatus = 0 ->
            (
                Link = yes,
                ModulesToLink = [FirstModule | _]
            ->
                file_name_to_module_name(FirstModule,
                    MainModuleName),
                globals.get_target(!.Globals, Target),
                (
                    Target = target_java,
                    % For Java, at the "link" step we just generate a shell
                    % script; the actual linking will be done at runtime by
                    % the Java interpreter.
                    create_java_shell_script(MainModuleName, Succeeded, !IO)
                ;
                    ( Target = target_c
                    ; Target = target_il
                    ; Target = target_asm
                    ; Target = target_x86_64
                    ; Target = target_erlang
                    ),
                    compile_with_module_options(MainModuleName,
                        OptionVariables, OptionArgs,
                        link_module_list(ModulesToLink, FactTableObjFiles),
                        Succeeded, !IO)
                ),
                maybe_set_exit_status(Succeeded, !IO)
            ;
                true
            )
        ;
            % If we found some errors, but the user didn't enable the `-E'
            % (`--verbose-errors') option, give them a hint about it.
            % Of course, we should only output the hint when we have further
            % information to give the user.
            globals.lookup_bool_option(!.Globals, verbose_errors,
                VerboseErrors),
            globals.io_get_extra_error_info(ExtraErrorInfo, !IO),
            (
                VerboseErrors = no,
                (
                    ExtraErrorInfo = yes,
                    io.write_string("For more information, " ++
                        "recompile with `-E'.\n", !IO)
                ;
                    ExtraErrorInfo = no
                )
            ;
                VerboseErrors = yes
            )
        ),
        globals.lookup_bool_option(!.Globals, statistics, Statistics),
        (
            Statistics = yes,
            io.report_stats("full_memory_stats", !IO)
        ;
            Statistics = no
        )
    ).

:- pred process_all_args(options_variables::in, list(string)::in,
    list(string)::in, list(string)::out, list(string)::out,
    globals::in, globals::out, io::di, io::uo) is det.

process_all_args(OptionVariables, OptionArgs, Args, ModulesToLink,
        FactTableObjFiles, !Globals, !IO) :-
    % Because of limitations in the GCC back-end,
    % we can only call the GCC back-end once (per process),
    % to generate a single assembler file, rather than
    % calling it multiple times to generate individual
    % assembler files for each module.
    % So if we're generating code using the GCC back-end,
    % we need to call run_gcc_backend here at the top level.
    ( compiling_to_asm(!.Globals) ->
        (
            Args = [FirstArg | OtherArgs],
            globals.lookup_bool_option(!.Globals, smart_recompilation, Smart),
            (
                Smart = yes,
                (
                    OtherArgs = [],
                    % With smart recompilation we need to delay starting
                    % the gcc backend to avoid overwriting the output assembler
                    % file even if recompilation is found to be unnecessary.
                    process_args(OptionVariables, OptionArgs, Args,
                        ModulesToLink, FactTableObjFiles, !Globals, !IO)
                ;
                    OtherArgs = [_ | _],
                    Msg = "Sorry, not implemented: " ++
                        "`--target asm' with `--smart-recompilation' " ++
                        "with more than one module to compile.",
                    write_error_pieces_plain([words(Msg)], !IO),
                    io.set_exit_status(1, !IO),
                    ModulesToLink = [],
                    FactTableObjFiles = []
                )
            ;
                Smart = no,
                globals.io_set_globals(!.Globals, !IO),
                compile_using_gcc_backend(OptionVariables, OptionArgs,
                    string_to_file_or_module(FirstArg),
                    process_args_no_fact_table(OptionVariables, OptionArgs,
                        Args),
                    ModulesToLink, !IO),
                FactTableObjFiles = [],
                globals.io_get_globals(!:Globals, !IO)
            )
        ;
            Args = [],
            Msg = "Sorry, not implemented: `--target asm' " ++
                "with `--filenames-from-stdin",
            write_error_pieces_plain([words(Msg)], !IO),
            io.set_exit_status(1, !IO),
            ModulesToLink = [],
            FactTableObjFiles = []
        )
    ;
        % If we're NOT using the GCC back-end, then we can just call
        % process_args directly, rather than via GCC.
        process_args(OptionVariables, OptionArgs, Args, ModulesToLink,
            FactTableObjFiles, !Globals, !IO)
    ).

:- pred compiling_to_asm(globals::in) is semidet.

compiling_to_asm(Globals) :-
    globals.get_target(Globals, target_asm),
    % even if --target asm is specified,
    % it can be overridden by other options:
    OptionList = [convert_to_mercury, generate_dependencies,
        generate_dependency_file, make_interface,
        make_short_interface, make_private_interface,
        make_optimization_interface, make_transitive_opt_interface,
        make_analysis_registry,
        typecheck_only, errorcheck_only],
    BoolList = list.map((func(Opt) = Bool :-
        globals.lookup_bool_option(Globals, Opt, Bool)),
        OptionList),
    bool.or_list(BoolList) = no.

:- pred compile_using_gcc_backend(options_variables::in, list(string)::in,
    file_or_module::in,
    frontend_callback(list(string))::in(frontend_callback), list(string)::out,
    io::di, io::uo) is det.

compile_using_gcc_backend(OptionVariables, OptionArgs, FirstFileOrModule,
        CallBack, ModulesToLink, !IO) :-
    % The name of the assembler file that we generate is based on name
    % of the first module named on the command line. (Mmake requires this.)
    %
    % There are two cases:
    %
    % (1) If the argument ends in ".m", we assume that the argument is a file
    % name. To find the corresponding module name, we would need to read in
    % the file (at least up to the first item); this is needed to handle
    % the case where the module name does not match the file name, e.g.
    % file "browse.m" containing ":- module mdb.browse." as its first item.
    % Rather than reading in the source file here, we just pick a name
    % for the asm file based on the file name argument, (e.g. "browse.s")
    % and if necessary rename it later (e.g. to "mdb.browse.s").
    %
    % (2) If the argument doesn't end in `.m', then we assume it is
    % a module name. (Is it worth checking that the name doesn't contain
    % directory separators, and issuing a warning or error in that case?)

    (
        FirstFileOrModule = fm_file(FirstFileName),
        file_name_to_module_name(FirstFileName, FirstModuleName)
    ;
        FirstFileOrModule = fm_module(FirstModuleName)
    ),

    % Invoke run_gcc_backend. It will call us back, and then we will continue
    % with the normal work of the compilation, which will be done by the
    % callback function (`process_args').
    maybe_mlds_to_gcc.run_gcc_backend(FirstModuleName, CallBack, ModulesToLink,
        !IO),

    % Now we know what the real module name was, so we can rename
    % the assembler file if needed (see above).
    (
        ModulesToLink = [Module | _],
        file_name_to_module_name(Module, ModuleName),
        globals.io_lookup_bool_option(pic, Pic, !IO),
        AsmExt = (Pic = yes -> ".pic_s" ; ".s"),
        module_name_to_file_name(ModuleName, AsmExt, do_create_dirs,
            AsmFile, !IO),
        ( ModuleName \= FirstModuleName ->
            module_name_to_file_name(FirstModuleName, AsmExt,
                do_not_create_dirs, FirstAsmFile, !IO),
            do_rename_file(FirstAsmFile, AsmFile, Result, !IO)
        ;
            Result = ok
        ),

        % Invoke the assembler to produce an object file, if needed.
        globals.io_lookup_bool_option(target_code_only, TargetCodeOnly, !IO),
        (
            Result = ok,
            TargetCodeOnly = no
        ->
            io.output_stream(OutputStream, !IO),
            get_linked_target_type(TargetType, !IO),
            get_object_code_type(TargetType, PIC, !IO),
            compile_with_module_options(ModuleName, OptionVariables,
                OptionArgs,
                compile_target_code.assemble(OutputStream, PIC, ModuleName),
                AssembleOK, !IO),
            maybe_set_exit_status(AssembleOK, !IO)
        ;
            true
        )
    ;
        ModulesToLink = []
        % This can happen if smart recompilation decided
        % that nothing needed to be compiled.
    ).

:- pred do_rename_file(string::in, string::in, io.res::out,
    io::di, io::uo) is det.

do_rename_file(OldFileName, NewFileName, Result, !IO) :-
    globals.io_lookup_bool_option(verbose, Verbose, !IO),
    globals.io_lookup_bool_option(very_verbose, VeryVerbose, !IO),
    maybe_write_string(Verbose, "% Renaming `", !IO),
    maybe_write_string(Verbose, OldFileName, !IO),
    maybe_write_string(Verbose, "' as `", !IO),
    maybe_write_string(Verbose, NewFileName, !IO),
    maybe_write_string(Verbose, "'...", !IO),
    maybe_flush_output(Verbose, !IO),
    io.rename_file(OldFileName, NewFileName, Result0, !IO),
    (
        Result0 = error(Error0),
        maybe_write_string(VeryVerbose, " failed.\n", !IO),
        maybe_flush_output(VeryVerbose, !IO),
        io.error_message(Error0, ErrorMsg0),
        % On some systems, we need to remove the existing file
        % first, if any.  So try again that way.
        maybe_write_string(VeryVerbose, "% Removing `", !IO),
        maybe_write_string(VeryVerbose, OldFileName, !IO),
        maybe_write_string(VeryVerbose, "'...", !IO),
        maybe_flush_output(VeryVerbose, !IO),
        io.remove_file(NewFileName, Result1, !IO),
        (
            Result1 = error(Error1),
            maybe_write_string(Verbose, " failed.\n", !IO),
            maybe_flush_output(Verbose, !IO),
            io.error_message(Error1, ErrorMsg1),
            string.append_list(["can't rename file `", OldFileName,
                "' as `", NewFileName, "': ", ErrorMsg0,
                "; and can't remove file `", NewFileName, "': ", ErrorMsg1],
                Message),
            report_error(Message, !IO),
            Result = Result1
        ;
            Result1 = ok,
            maybe_write_string(VeryVerbose, " done.\n", !IO),
            maybe_write_string(VeryVerbose, "% Renaming `", !IO),
            maybe_write_string(VeryVerbose, OldFileName, !IO),
            maybe_write_string(VeryVerbose, "' as `", !IO),
            maybe_write_string(VeryVerbose, NewFileName, !IO),
            maybe_write_string(VeryVerbose, "' again...", !IO),
            maybe_flush_output(VeryVerbose, !IO),
            io.rename_file(OldFileName, NewFileName, Result2, !IO),
            (
                Result2 = error(Error2),
                maybe_write_string(Verbose, " failed.\n", !IO),
                maybe_flush_output(Verbose, !IO),
                io.error_message(Error2, ErrorMsg),
                string.append_list(
                    ["can't rename file `", OldFileName, "' as `", NewFileName,
                    "': ", ErrorMsg], Message),
                report_error(Message, !IO)
            ;
                Result2 = ok,
                maybe_write_string(Verbose, " done.\n", !IO)
            ),
            Result = Result2
        )
    ;
        Result0 = ok,
        maybe_write_string(Verbose, " done.\n", !IO),
        Result = Result0
    ).

:- pred process_args_no_fact_table(options_variables::in, list(string)::in,
    list(string)::in, list(string)::out, io::di, io::uo) is det.

process_args_no_fact_table(OptionVariables, OptionArgs, Args, ModulesToLink,
        !IO) :-
    globals.io_get_globals(Globals0, !IO),
    process_args(OptionVariables, OptionArgs, Args, ModulesToLink,
        _FactTableObjFiles, Globals0, Globals, !IO),
    globals.io_set_globals(Globals, !IO).

:- pred process_args(options_variables::in, list(string)::in, list(string)::in,
    list(string)::out, list(string)::out,
    globals::in, globals::out, io::di, io::uo) is det.

process_args(OptionVariables, OptionArgs, Args, ModulesToLink,
        FactTableObjFiles, !Globals, !IO) :-
    globals.lookup_bool_option(!.Globals, filenames_from_stdin,
        FileNamesFromStdin),
    (
        FileNamesFromStdin = yes,
        process_stdin_arg_list(OptionVariables, OptionArgs,
            [], ModulesToLink, [], FactTableObjFiles, !Globals, !IO)
    ;
        FileNamesFromStdin = no,
        process_arg_list(OptionVariables, OptionArgs,
            Args, ModulesToLink, FactTableObjFiles, !Globals, !IO)
    ).
:- pred process_stdin_arg_list(options_variables::in, list(string)::in,
    list(string)::in, list(string)::out,
    list(string)::in, list(string)::out,
    globals::in, globals::out, io::di, io::uo) is det.

process_stdin_arg_list(OptionVariables, OptionArgs, !Modules,
        !FactTableObjFiles, !Globals, !IO) :-
    (
        !.Modules = [_ | _],
        garbage_collect(!IO)
    ;
        !.Modules = []
    ),
    io.read_line_as_string(FileResult, !IO),
    (
        FileResult = ok(Line),
        Arg = string.rstrip(Line),
        process_arg(OptionVariables, OptionArgs, Arg, Module,
            FactTableObjFileList, !Globals, !IO),
        list.append(Module, !Modules),
        list.append(FactTableObjFileList, !FactTableObjFiles),
        process_stdin_arg_list(OptionVariables, OptionArgs,
            !Modules, !FactTableObjFiles, !Globals, !IO)
    ;
        FileResult = eof
    ;
        FileResult = error(Error),
        io.error_message(Error, Msg),
        io.write_string("Error reading module name: ", !IO),
        io.write_string(Msg, !IO),
        io.set_exit_status(1, !IO)
    ).

:- pred process_arg_list(options_variables::in, list(string)::in,
    list(string)::in, list(string)::out, list(string)::out,
    globals::in, globals::out, io::di, io::uo) is det.

process_arg_list(OptionVariables, OptionArgs, Args, Modules, FactTableObjFiles,
        !Globals, !IO) :-
    process_arg_list_2(OptionVariables, OptionArgs, Args, ModulesList,
        FactTableObjFileLists, !Globals, !IO),
    list.condense(ModulesList, Modules),
    list.condense(FactTableObjFileLists, FactTableObjFiles).

:- pred process_arg_list_2(options_variables::in, list(string)::in,
    list(string)::in, list(list(string))::out, list(list(string))::out,
    globals::in, globals::out, io::di, io::uo) is det.

process_arg_list_2(_, _, [], [], [], !Globals, !IO).
process_arg_list_2(OptionVariables, OptionArgs, [Arg | Args],
        [Modules | ModulesTail], [FactTableObjFiles | FactTableObjFileTail],
        !Globals, !IO) :-
    process_arg(OptionVariables, OptionArgs, Arg, Modules, FactTableObjFiles,
        !Globals, !IO),
    (
        Args = [_ | _],
        garbage_collect(!IO)
    ;
        Args = []
    ),
    process_arg_list_2(OptionVariables, OptionArgs, Args, ModulesTail,
        FactTableObjFileTail, !Globals, !IO).

    % Figure out whether the argument is a module name or a file name.
    % Open the specified file or module, and process it.
    % Return the list of modules (including sub-modules,
    % if they were compiled to separate object files)
    % that should be linked into the final executable.

:- pred process_arg(options_variables::in, list(string)::in, string::in,
    list(string)::out, list(string)::out,
    globals::in, globals::out, io::di, io::uo) is det.

process_arg(OptionVariables, OptionArgs, Arg, ModulesToLink, FactTableObjFiles,
        !Globals, !IO) :-
    FileOrModule = string_to_file_or_module(Arg),
    globals.io_lookup_bool_option(invoked_by_mmc_make, InvokedByMake, !IO),
    (
        InvokedByMake = no,
        globals.io_set_globals(!.Globals, !IO),
        build_with_module_options_args(
            file_or_module_to_module_name(FileOrModule),
            OptionVariables, OptionArgs, [],
            process_arg_build(FileOrModule, OptionVariables, OptionArgs),
            _, [], MaybePair, !IO),
        globals.io_get_globals(!:Globals, !IO),
        (
            MaybePair = yes(ModulesToLink - FactTableObjFiles)
        ;
            MaybePair = no,
            ModulesToLink = [],
            FactTableObjFiles = []
        )
    ;
        InvokedByMake = yes,
        % `mmc --make' has already set up the options.
        process_arg_2(OptionVariables, OptionArgs, FileOrModule,
            ModulesToLink, FactTableObjFiles, !Globals, !IO)
    ).

:- pred process_arg_build(file_or_module::in, options_variables::in,
    list(string)::in, list(string)::in, bool::out,
    list(string)::in, pair(list(string))::out, io::di, io::uo) is det.

process_arg_build(FileOrModule, OptionVariables, OptionArgs, _, yes,
        _, Modules - FactTableObjFiles, !IO) :-
    globals.io_get_globals(Globals0, !IO),
    process_arg_2(OptionVariables, OptionArgs, FileOrModule, Modules,
        FactTableObjFiles, Globals0, Globals, !IO),
    globals.io_set_globals(Globals, !IO).

:- pred process_arg_2(options_variables::in, list(string)::in,
    file_or_module::in, list(string)::out, list(string)::out,
    globals::in, globals::out, io::di, io::uo) is det.

process_arg_2(OptionVariables, OptionArgs, FileOrModule, ModulesToLink,
        FactTableObjFiles, !Globals, !IO) :-
    globals.lookup_bool_option(!.Globals, generate_dependencies, GenerateDeps),
    (
        GenerateDeps = yes,
        ModulesToLink = [],
        FactTableObjFiles = [],
        (
            FileOrModule = fm_file(FileName),
            generate_file_dependencies(!.Globals, FileName, !IO)
        ;
            FileOrModule = fm_module(ModuleName),
            generate_module_dependencies(!.Globals, ModuleName, !IO)
        )
    ;
        GenerateDeps = no,
        globals.lookup_bool_option(!.Globals, generate_dependency_file,
            GenerateDepFile),
        (
            GenerateDepFile = yes,
            ModulesToLink = [],
            FactTableObjFiles = [],
            (
                FileOrModule = fm_file(FileName),
                generate_file_dependency_file(!.Globals, FileName, !IO)
            ;
                FileOrModule = fm_module(ModuleName),
                generate_module_dependency_file(!.Globals, ModuleName, !IO)
            )
        ;
            GenerateDepFile = no,
            process_module(OptionVariables, OptionArgs,
                FileOrModule, ModulesToLink, FactTableObjFiles, !Globals, !IO)
        )
    ).

:- type file_or_module
    --->    fm_file(file_name)
    ;       fm_module(module_name).

:- func string_to_file_or_module(string) = file_or_module.

string_to_file_or_module(String) = FileOrModule :-
    ( string.remove_suffix(String, ".m", FileName) ->
        % If the argument name ends in `.m', then we assume it is a file name.
        FileOrModule = fm_file(FileName)
    ;
        % If it doesn't end in `.m', then we assume it is a module name.
        % (Is it worth checking that the name doesn't contain directory
        % separators, and issuing a warning or error in that case?)
        file_name_to_module_name(String, ModuleName),
        FileOrModule = fm_module(ModuleName)
    ).

:- func file_or_module_to_module_name(file_or_module) = module_name.

file_or_module_to_module_name(fm_file(FileName)) = ModuleName :-
    % Assume the module name matches the file name.
    file_name_to_module_name(FileName, ModuleName).
file_or_module_to_module_name(fm_module(ModuleName)) = ModuleName.

:- pred read_module_or_file(file_or_module::in,
    maybe_return_timestamp::in, module_name::out, file_name::out,
    maybe(timestamp)::out, list(item)::out,
    list(error_spec)::out, module_error::out,
    have_read_module_map::in, have_read_module_map::out,
    globals::in, globals::out, io::di, io::uo) is det.

read_module_or_file(FileOrModuleName, ReturnTimestamp,
        ModuleName, SourceFileName, MaybeTimestamp, Items, Specs, Error,
        !HaveReadModuleMap, !Globals, !IO) :-
    (
        FileOrModuleName = fm_module(ModuleName),
        globals.lookup_bool_option(!.Globals, verbose, Verbose),
        maybe_write_string(Verbose, "% Parsing module `", !IO),
        ModuleNameString = sym_name_to_string(ModuleName),
        maybe_write_string(Verbose, ModuleNameString, !IO),
        maybe_write_string(Verbose, "' and imported interfaces...\n", !IO),
        (
            % Avoid rereading the module if it was already read
            % by recompilation_version.m.
            find_read_module(!.HaveReadModuleMap, ModuleName, ".m",
                ReturnTimestamp, ItemsPrime, SpecsPrime, ErrorPrime,
                SourceFileNamePrime, MaybeTimestampPrime)
        ->
            svmap.delete(ModuleName - ".m", !HaveReadModuleMap),
            Items = ItemsPrime,
            Specs = SpecsPrime,
            Error = ErrorPrime,
            SourceFileName = SourceFileNamePrime,
            MaybeTimestamp = MaybeTimestampPrime
        ;
            % We don't search `--search-directories' for source files
            % because that can result in the generated interface files
            % being created in the wrong directory.
            read_module(!.Globals, ModuleName, ".m", "Reading module",
                do_not_search, ReturnTimestamp, Items, Specs, Error,
                SourceFileName, MaybeTimestamp, !IO)
        ),
        globals.lookup_bool_option(!.Globals, statistics, Stats),
        maybe_report_stats(Stats, !IO)
    ;
        FileOrModuleName = fm_file(FileName),
        globals.lookup_bool_option(!.Globals, verbose, Verbose),
        maybe_write_string(Verbose, "% Parsing file `", !IO),
        maybe_write_string(Verbose, FileName, !IO),
        maybe_write_string(Verbose, "' and imported interfaces...\n", !IO),

        file_name_to_module_name(FileName, DefaultModuleName),
        (
            % Avoid rereading the module if it was already read
            % by recompilation_version.m.
            find_read_module(!.HaveReadModuleMap, DefaultModuleName, ".m",
                ReturnTimestamp, ItemsPrime, SpecsPrime, ErrorPrime,
                _, MaybeTimestampPrime)
        ->
            svmap.delete(ModuleName - ".m", !HaveReadModuleMap),
            ModuleName = DefaultModuleName,
            Items = ItemsPrime,
            Specs = SpecsPrime,
            Error = ErrorPrime,
            MaybeTimestamp = MaybeTimestampPrime
        ;
            % We don't search `--search-directories' for source files
            % because that can result in the generated interface files
            % being created in the wrong directory.
            read_module_from_file(FileName, ".m", "Reading file",
                do_not_search, ReturnTimestamp, Items, Specs, Error,
                ModuleName, MaybeTimestamp, !IO),

            % XXX If the module name doesn't match the file name, the compiler
            % won't be able to find the `.used' file (the name of the `.used'
            % file is derived from the module name not the file name).
            % This will be fixed when mmake functionality is moved into
            % the compiler.

            globals.lookup_bool_option(!.Globals, smart_recompilation, Smart),
            (
                Smart = yes,
                ModuleName \= DefaultModuleName
            ->
                globals.lookup_bool_option(!.Globals, warn_smart_recompilation,
                    Warn),
                (
                    Warn = yes,
                    Pieces =
                        [words("Warning:"),
                        words("module name does not match file name: "), nl,
                        fixed(FileName), words("contains module"),
                        sym_name(ModuleName), suffix("."), nl,
                        words("Smart recompilation will not work unless"),
                        words("a module name to file name mapping is created"),
                        words("using `mmc -f *.m'."), nl],
                    write_error_pieces_plain(Pieces, !IO),
                    record_warning(!IO)
                ;
                    Warn = no
                ),
                globals.set_option(smart_recompilation, bool(no), !Globals),
                globals.io_set_globals(!.Globals, !IO)
            ;
                true
            )
        ),
        globals.lookup_bool_option(!.Globals, detailed_statistics, Stats),
        maybe_report_stats(Stats, !IO),
        string.append(FileName, ".m", SourceFileName)
    ).

:- func version_numbers_return_timestamp(bool) = maybe_return_timestamp.

version_numbers_return_timestamp(no) = do_not_return_timestamp.
version_numbers_return_timestamp(yes) = do_return_timestamp.

:- pred process_module(options_variables::in, list(string)::in,
    file_or_module::in, list(string)::out, list(string)::out,
    globals::in, globals::out, io::di, io::uo) is det.

process_module(OptionVariables, OptionArgs, FileOrModule, ModulesToLink,
        FactTableObjFiles, !Globals, !IO) :-
    globals.lookup_bool_option(!.Globals, halt_at_syntax_errors, HaltSyntax),
    globals.lookup_bool_option(!.Globals, make_interface, MakeInterface),
    globals.lookup_bool_option(!.Globals, make_short_interface,
        MakeShortInterface),
    globals.lookup_bool_option(!.Globals, make_private_interface,
        MakePrivateInterface),
    globals.lookup_bool_option(!.Globals, convert_to_mercury,
        ConvertToMercury),
    globals.lookup_bool_option(!.Globals, generate_item_version_numbers,
        GenerateVersionNumbers),
    (
        ( MakeInterface = yes ->
            ProcessModule = call_make_interface(!.Globals),
            ReturnTimestamp =
                version_numbers_return_timestamp(GenerateVersionNumbers)
        ; MakeShortInterface = yes ->
            ProcessModule = call_make_short_interface(!.Globals),
            ReturnTimestamp = do_not_return_timestamp
        ; MakePrivateInterface = yes ->
            ProcessModule = call_make_private_interface(!.Globals),
            ReturnTimestamp =
                version_numbers_return_timestamp(GenerateVersionNumbers)
        ;
            fail
        )
    ->
        read_module_or_file(FileOrModule, ReturnTimestamp,
            ModuleName, FileName, MaybeTimestamp, Items, Specs0, Error,
            map.init, _, !Globals, !IO),
        ( halt_at_module_error(HaltSyntax, Error) ->
            true
        ;
            split_into_submodules(ModuleName, Items, SubModuleList,
                Specs0, Specs),
            % XXX _NumErrors
            write_error_specs(Specs, !.Globals, 0, _NumWarnings, 0, _NumErrors,
                !IO),
            list.foldl(
                apply_process_module(ProcessModule, FileName, ModuleName,
                    MaybeTimestamp),
                SubModuleList, !IO)
        ),
        ModulesToLink = [],
        FactTableObjFiles = []
    ;
        ConvertToMercury = yes
    ->
        read_module_or_file(FileOrModule, do_not_return_timestamp,
            ModuleName, _, _, Items, Specs, Error, map.init, _, !Globals, !IO),
        % XXX _NumErrors
        write_error_specs(Specs, !.Globals, 0, _NumWarnings, 0, _NumErrors,
            !IO),
        ( halt_at_module_error(HaltSyntax, Error) ->
            true
        ;
            module_name_to_file_name(ModuleName, ".ugly", do_create_dirs,
                OutputFileName, !IO),
            convert_to_mercury(ModuleName, OutputFileName, Items, !IO)
        ),
        ModulesToLink = [],
        FactTableObjFiles = []
    ;
        globals.lookup_bool_option(!.Globals, smart_recompilation, Smart),
        globals.get_target(!.Globals, Target),
        (
            Smart = yes,
            (
                FileOrModule = fm_module(ModuleName)
            ;
                FileOrModule = fm_file(FileName),
                % XXX This won't work if the module name doesn't match
                % the file name -- such modules will always be recompiled.
                %
                % This problem will be fixed when mmake functionality
                % is moved into the compiler. The file_name->module_name
                % mapping will be explicitly recorded.
                file_name_to_module_name(FileName, ModuleName)
            ),

            find_smart_recompilation_target_files(ModuleName, !.Globals,
                FindTargetFiles),
            find_timestamp_files(ModuleName, !.Globals, FindTimestampFiles),
            recompilation.check.should_recompile(!.Globals, ModuleName,
                FindTargetFiles, FindTimestampFiles, ModulesToRecompile0,
                HaveReadModuleMap, !IO),
            (
                Target = target_asm,
                ModulesToRecompile0 = some_modules([_ | _])
            ->
                % With `--target asm', if one module needs to be recompiled,
                % all need to be recompiled because they are all compiled
                % into a single object file.
                ModulesToRecompile = all_modules
            ;
                ModulesToRecompile = ModulesToRecompile0
            )
        ;
            Smart = no,
            map.init(HaveReadModuleMap),
            ModulesToRecompile = all_modules
        ),
        ( ModulesToRecompile = some_modules([]) ->
            % XXX Currently smart recompilation is disabled if mmc is linking
            % the executable because it doesn't know how to check whether
            % all the necessary intermediate files are present and up-to-date.
            ModulesToLink = [],
            FactTableObjFiles = []
        ;
            (
                Target = target_asm,
                Smart = yes
            ->
                % See the comment in process_all_args.
                globals.io_set_globals(!.Globals, !IO),
                compile_using_gcc_backend(OptionVariables,
                    OptionArgs, FileOrModule,
                    process_module_2_no_fact_table(FileOrModule,
                        ModulesToRecompile, HaveReadModuleMap),
                    ModulesToLink, !IO),
                FactTableObjFiles = [],
                globals.io_get_globals(!:Globals, !IO)
            ;
                process_module_2(FileOrModule, ModulesToRecompile,
                    HaveReadModuleMap, ModulesToLink, FactTableObjFiles,
                    !Globals, !IO)
            )
        )
    ).

:- pred apply_process_module(
    pred(file_name, module_name, maybe(timestamp),
        pair(module_name, list(item)), io, io)::
        in(pred(in, in, in, in, di, uo) is det),
    file_name::in, module_name::in, maybe(timestamp)::in,
    pair(module_name, list(item))::in, io::di, io::uo) is det.

apply_process_module(ProcessModule, FileName, ModuleName, MaybeTimestamp,
        SubModule, !IO) :-
    ProcessModule(FileName, ModuleName, MaybeTimestamp, SubModule, !IO).

:- pred process_module_2_no_fact_table(file_or_module::in,
    modules_to_recompile::in, have_read_module_map::in, list(string)::out,
    io::di, io::uo) is det.

process_module_2_no_fact_table(FileOrModule, MaybeModulesToRecompile,
        HaveReadModuleMap0, ModulesToLink, !IO) :-
    globals.io_get_globals(Globals0, !IO),
    process_module_2(FileOrModule, MaybeModulesToRecompile, HaveReadModuleMap0,
        ModulesToLink, _FactTableObjFiles, Globals0, Globals, !IO),
    globals.io_set_globals(Globals, !IO).

:- pred process_module_2(file_or_module::in, modules_to_recompile::in,
    have_read_module_map::in, list(string)::out, list(string)::out,
    globals::in, globals::out, io::di, io::uo) is det.

process_module_2(FileOrModule, MaybeModulesToRecompile,
        HaveReadModuleMap0, ModulesToLink, FactTableObjFiles, !Globals, !IO) :-
    read_module_or_file(FileOrModule, do_return_timestamp,
        ModuleName, FileName, MaybeTimestamp, Items, Specs0, Error,
        HaveReadModuleMap0, HaveReadModuleMap, !Globals, !IO),
    globals.lookup_bool_option(!.Globals, halt_at_syntax_errors, HaltSyntax),
    ( halt_at_module_error(HaltSyntax, Error) ->
        % XXX _NumErrors
        write_error_specs(Specs0, !.Globals, 0, _NumWarnings, 0, _NumErrors,
            !IO),
        ModulesToLink = [],
        FactTableObjFiles = []
    ;
        split_into_submodules(ModuleName, Items, SubModuleList0,
            Specs0, Specs1),
        (
            MaybeModulesToRecompile = some_modules(ModulesToRecompile),
            ToRecompile = (pred((SubModule - _)::in) is semidet :-
                list.member(SubModule, ModulesToRecompile)
            ),
            list.filter(ToRecompile, SubModuleList0, SubModuleListToCompile)
        ;
            MaybeModulesToRecompile = all_modules,
            SubModuleListToCompile = SubModuleList0
        ),
        assoc_list.keys(SubModuleList0, NestedSubModules0),
        list.delete_all(NestedSubModules0, ModuleName, NestedSubModules),

        find_timestamp_files(ModuleName, !.Globals, FindTimestampFiles),

        globals.lookup_bool_option(!.Globals, trace_prof, TraceProf),

        (
            non_traced_mercury_builtin_module(ModuleName),
            not (
                ModuleName = mercury_profiling_builtin_module,
                TraceProf = yes
            )
        ->
            % Some predicates in the builtin modules are missing typeinfo
            % arguments, which means that execution tracing will not work
            % on them. Predicates defined there should never be part of
            % an execution trace anyway; they are effectively language
            % primitives. (They may still be parts of stack traces.)
            globals.lookup_bool_option(!.Globals, trace_stack_layout, TSL),
            globals.get_trace_level(!.Globals, TraceLevel),

            globals.set_option(trace_stack_layout, bool(no), !Globals),
            globals.set_trace_level_none(!Globals),
            globals.io_set_globals(!.Globals, !IO),

            compile_all_submodules(!.Globals, FileName, ModuleName,
                NestedSubModules, MaybeTimestamp, HaveReadModuleMap,
                FindTimestampFiles, SubModuleListToCompile, Specs1,
                ModulesToLink, FactTableObjFiles, !IO),

            globals.set_option(trace_stack_layout, bool(TSL), !Globals),
            globals.set_trace_level(TraceLevel, !Globals),
            globals.io_set_globals(!.Globals, !IO)
        ;
            compile_all_submodules(!.Globals, FileName, ModuleName,
                NestedSubModules, MaybeTimestamp, HaveReadModuleMap,
                FindTimestampFiles, SubModuleListToCompile, Specs1,
                ModulesToLink, FactTableObjFiles, !IO)
        )
    ).

    % For the MLDS->C and LLDS->C back-ends, we currently
    % compile each sub-module to its own C file.
    % XXX it would be better to do something like
    %
    %   list.map2_foldl(compile_to_llds, SubModuleList,
    %       LLDS_FragmentList),
    %   merge_llds_fragments(LLDS_FragmentList, LLDS),
    %   output_pass(LLDS_FragmentList)
    %
    % i.e. compile nested modules to a single C file.

:- pred compile_all_submodules(globals::in, string::in, module_name::in,
    list(module_name)::in, maybe(timestamp)::in, have_read_module_map::in,
    find_timestamp_file_names::in(find_timestamp_file_names),
    list(pair(module_name, list(item)))::in, list(error_spec)::in,
    list(string)::out, list(string)::out, io::di, io::uo) is det.

compile_all_submodules(Globals, FileName, SourceFileModuleName,
        NestedSubModules, MaybeTimestamp, HaveReadModuleMap,
        FindTimestampFiles, SubModuleList, !.Specs,
        ModulesToLink, FactTableObjFiles, !IO) :-
    list.map_foldl2(
        compile(Globals, FileName, SourceFileModuleName, NestedSubModules,
            MaybeTimestamp, HaveReadModuleMap, FindTimestampFiles),
        SubModuleList, FactTableObjFileLists, !Specs, !IO),
    % XXX _NumErrors
    write_error_specs(!.Specs, Globals, 0, _NumWarnings, 0, _NumErrors, !IO),
    list.map(module_to_link, SubModuleList, ModulesToLink),
    list.condense(FactTableObjFileLists, FactTableObjFiles).

:- pred call_make_interface(globals::in, file_name::in, module_name::in,
    maybe(timestamp)::in, pair(module_name, list(item))::in, io::di, io::uo)
    is det.

call_make_interface(Globals, SourceFileName, SourceFileModuleName,
        MaybeTimestamp, ModuleName - Items, !IO) :-
    make_interface(Globals, SourceFileName, SourceFileModuleName,
        ModuleName, MaybeTimestamp, Items, !IO).

:- pred call_make_short_interface(globals::in, file_name::in, module_name::in,
    maybe(timestamp)::in, pair(module_name, list(item))::in,
    io::di, io::uo) is det.

call_make_short_interface(Globals, SourceFileName, _, _, ModuleName - Items,
        !IO) :-
    make_short_interface(Globals, SourceFileName, ModuleName, Items, !IO).

:- pred call_make_private_interface(globals::in, file_name::in,
    module_name::in, maybe(timestamp)::in, pair(module_name, list(item))::in,
    io::di, io::uo) is det.

call_make_private_interface(Globals, SourceFileName, SourceFileModuleName,
        MaybeTimestamp, ModuleName - Items, !IO) :-
    make_private_interface(Globals, SourceFileName, SourceFileModuleName,
        ModuleName, MaybeTimestamp, Items, !IO).

:- pred halt_at_module_error(bool::in, module_error::in) is semidet.

halt_at_module_error(_, fatal_module_errors).
halt_at_module_error(HaltSyntax, some_module_errors) :- HaltSyntax = yes.

:- pred module_to_link(pair(module_name, list(item))::in, string::out) is det.

module_to_link(ModuleName - _Items, ModuleToLink) :-
    module_name_to_file_name(ModuleName, ModuleToLink).

:- type compile == pred(bool, io, io).
:- inst compile == (pred(out, di, uo) is det).

:- pred compile_with_module_options(module_name::in, options_variables::in,
    list(string)::in, compile::in(compile), bool::out, io::di, io::uo)
    is det.

compile_with_module_options(ModuleName, OptionVariables, OptionArgs,
        Compile, Succeeded, !IO) :-
    globals.io_lookup_bool_option(invoked_by_mmc_make, InvokedByMake, !IO),
    (
        InvokedByMake = yes,
        % `mmc --make' has already set up the options.
        Compile(Succeeded, !IO)
    ;
        InvokedByMake = no,
        Builder =
            (pred(_::in, Succeeded0::out, X::in, X::out, IO0::di, IO::uo)
                    is det :-
                Compile(Succeeded0, IO0, IO)
            ),
        build_with_module_options_args(ModuleName, OptionVariables, OptionArgs,
            [], Builder, Succeeded, unit, _, !IO)
    ).

%-----------------------------------------------------------------------------%

    % Return a closure which will work out what the target files are for
    % a module, so recompilation_check.m can check that they are
    % up-to-date which deciding whether compilation is necessary.
    % Note that `--smart-recompilation' only works with
    % `--target-code-only', which is always set when the compiler is
    % invoked by mmake. Using smart recompilation without using mmake is
    % not a sensible thing to do.  handle_options.m will disable smart
    % recompilation if `--target-code-only' is not set.
    %
:- pred find_smart_recompilation_target_files(module_name::in, globals::in,
    find_target_file_names::out(find_target_file_names)) is det.

find_smart_recompilation_target_files(TopLevelModuleName,
        Globals, FindTargetFiles) :-
    globals.get_target(Globals, CompilationTarget),
    ( CompilationTarget = target_c, TargetSuffix = ".c"
    ; CompilationTarget = target_il, TargetSuffix = ".il"
    ; CompilationTarget = target_java, TargetSuffix = ".java"
    ; CompilationTarget = target_asm, TargetSuffix = ".s"
    ; CompilationTarget = target_x86_64, TargetSuffix = ".s"
    ; CompilationTarget = target_erlang, TargetSuffix = ".erl"
    ),
    FindTargetFiles = usual_find_target_files(CompilationTarget,
        TargetSuffix, TopLevelModuleName).

:- pred usual_find_target_files(compilation_target::in, string::in,
    module_name::in, module_name::in, list(file_name)::out,
    io::di, io::uo) is det.

usual_find_target_files(CompilationTarget, TargetSuffix, TopLevelModuleName,
        ModuleName, TargetFiles, !IO) :-
    % XXX Should we check the generated header files?
    (
        CompilationTarget = target_asm,
        ModuleName \= TopLevelModuleName
    ->
        % With `--target asm' all the nested sub-modules are placed
        % in the `.s' file of the top-level module.
        TargetFiles = []
    ;
        module_name_to_file_name(ModuleName, TargetSuffix, do_create_dirs,
            FileName, !IO),
        TargetFiles = [FileName]
    ).

:- pred find_timestamp_files(module_name::in, globals::in,
    find_timestamp_file_names::out(find_timestamp_file_names)) is det.

find_timestamp_files(TopLevelModuleName, Globals, FindTimestampFiles) :-
    globals.lookup_bool_option(Globals, pic, Pic),
    globals.get_target(Globals, CompilationTarget),
    (
        CompilationTarget = target_c,
        TimestampSuffix = ".c_date"
    ;
        CompilationTarget = target_il,
        TimestampSuffix = ".il_date"
    ;
        CompilationTarget = target_java,
        TimestampSuffix = ".java_date"
    ;
        CompilationTarget = target_asm,
        (
            Pic = yes,
            TimestampSuffix = ".pic_s_date"
        ;
            Pic = no,
            TimestampSuffix = ".s_date"
        )
    ;
        CompilationTarget = target_x86_64,
        TimestampSuffix = ".s_date"
    ;
        CompilationTarget = target_erlang,
        TimestampSuffix = ".erl_date"
    ),
    FindTimestampFiles = find_timestamp_files_2(CompilationTarget,
        TimestampSuffix, TopLevelModuleName).

:- pred find_timestamp_files_2(compilation_target::in, string::in,
    module_name::in, module_name::in, list(file_name)::out,
    io::di, io::uo) is det.

find_timestamp_files_2(CompilationTarget, TimestampSuffix,
        TopLevelModuleName, ModuleName, TimestampFiles, !IO) :-
    (
        CompilationTarget = target_asm,
        ModuleName \= TopLevelModuleName
    ->
        % With `--target asm' all the nested sub-modules are placed in
        % the `.s' file of the top-level module.
        TimestampFiles = []
    ;
        module_name_to_file_name(ModuleName, TimestampSuffix, do_create_dirs,
            FileName, !IO),
        TimestampFiles = [FileName]
    ).

%-----------------------------------------------------------------------------%

    % Given a fully expanded module (i.e. a module name and a list
    % of all the items in the module and any of its imports),
    % compile it.

    % Stage number assignments:
    %
    %     1 to  99  front end pass
    %   100 to 299  middle pass
    %   300 to 399  LLDS back end pass
    %   400 to 499  MLDS back end pass
    %   500 to 599  bytecode back end pass
    %
    % The initial arrangement has the stage numbers increasing by five
    % so that new stages can be slotted in without too much trouble.

:- pred compile(globals::in, file_name::in, module_name::in,
    list(module_name)::in, maybe(timestamp)::in, have_read_module_map::in,
    find_timestamp_file_names::in(find_timestamp_file_names),
    pair(module_name, list(item))::in, list(string)::out,
    list(error_spec)::in, list(error_spec)::out,
    io::di, io::uo) is det.

compile(Globals, SourceFileName, SourceFileModuleName, NestedSubModules0,
        MaybeTimestamp, HaveReadModuleMap, FindTimestampFiles,
        ModuleName - Items, FactTableObjFiles, !Specs, !IO) :-
    check_for_no_exports(Globals, Items, ModuleName, !Specs, !IO),
    ( ModuleName = SourceFileModuleName ->
        NestedSubModules = NestedSubModules0
    ;
        NestedSubModules = []
    ),
    grab_imported_modules(Globals, SourceFileName, SourceFileModuleName,
        ModuleName, NestedSubModules, HaveReadModuleMap, MaybeTimestamp,
        Items, Module, !IO),
    module_and_imports_get_results(Module, _, ImportedSpecs, Error),
    !:Specs = ImportedSpecs ++ !.Specs,
    (
        ( Error = no_module_errors
        ; Error = some_module_errors
        ),
        mercury_compile(Globals, Module, NestedSubModules, FindTimestampFiles,
            FactTableObjFiles, no_prev_dump, _, !Specs, !IO)
    ;
        Error = fatal_module_errors,
        FactTableObjFiles = []
    ).

:- pred mercury_compile(globals::in, module_and_imports::in,
    list(module_name)::in,
    find_timestamp_file_names::in(find_timestamp_file_names),
    list(string)::out, dump_info::in, dump_info::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

mercury_compile(Globals, Module, NestedSubModules, FindTimestampFiles,
        FactTableObjFiles, !DumpInfo, !Specs, !IO) :-
    module_and_imports_get_module_name(Module, ModuleName),
    % If we are only typechecking or error checking, then we should not
    % modify any files, this includes writing to .d files.
    globals.lookup_bool_option(Globals, typecheck_only, TypeCheckOnly),
    globals.lookup_bool_option(Globals, errorcheck_only, ErrorCheckOnly),
    bool.or(TypeCheckOnly, ErrorCheckOnly, DontWriteDFile),
    pre_hlds_pass(Globals, Module, DontWriteDFile, HLDS1, QualInfo,
        MaybeTimestamps, UndefTypes, UndefModes, Errors1, !DumpInfo,
        !Specs, !IO),
    frontend_pass(QualInfo, UndefTypes, UndefModes, Errors1, Errors2,
        HLDS1, HLDS20, !DumpInfo, !Specs, !IO),
    (
        Errors1 = no,
        Errors2 = no
    ->
        globals.io_lookup_bool_option(verbose, Verbose, !IO),
        globals.io_lookup_bool_option(statistics, Stats, !IO),
        maybe_write_dependency_graph(Verbose, Stats, HLDS20, HLDS21, !IO),
        globals.io_lookup_bool_option(make_optimization_interface,
            MakeOptInt, !IO),
        globals.io_lookup_bool_option(make_transitive_opt_interface,
            MakeTransOptInt, !IO),
        globals.io_lookup_bool_option(make_analysis_registry,
            MakeAnalysisRegistry, !IO),
        globals.io_lookup_bool_option(make_xml_documentation,
            MakeXmlDocumentation, !IO),
        ( TypeCheckOnly = yes ->
            FactTableObjFiles = []
        ; ErrorCheckOnly = yes ->
            % We may still want to run `unused_args' so that we get
            % the appropriate warnings.
            globals.io_lookup_bool_option(warn_unused_args, UnusedArgs, !IO),
            (
                UnusedArgs = yes,
                globals.io_set_option(optimize_unused_args, bool(no), !IO),
                maybe_unused_args(Verbose, Stats, HLDS21, _HLDS22, !IO)
            ;
                UnusedArgs = no
            ),
            FactTableObjFiles = []
        ; MakeOptInt = yes ->
            % only run up to typechecking when making the .opt file
            FactTableObjFiles = []
        ; MakeTransOptInt = yes ->
            output_trans_opt_file(HLDS21, !DumpInfo, !IO),
            FactTableObjFiles = []
        ; MakeAnalysisRegistry = yes ->
            prepare_intermodule_analysis(Verbose, Stats, HLDS21, HLDS22, !IO),
            output_analysis_file(HLDS22, !DumpInfo, !IO),
            FactTableObjFiles = []
        ; MakeXmlDocumentation = yes ->
            xml_documentation(HLDS21, !IO),
            FactTableObjFiles = []
        ;
            maybe_prepare_intermodule_analysis(Verbose, Stats, HLDS21, HLDS22,
                !IO),
            mercury_compile_after_front_end(NestedSubModules,
                FindTimestampFiles, MaybeTimestamps, ModuleName, HLDS22,
                !.Specs, FactTableObjFiles, !DumpInfo, !IO)
        )
    ;
        % If the number of errors is > 0, make sure that the compiler
        % exits with a non-zero exit status.
        io.get_exit_status(ExitStatus, !IO),
        ( ExitStatus = 0 ->
            io.set_exit_status(1, !IO)
        ;
            true
        ),
        FactTableObjFiles = []
    ).

:- pred maybe_prepare_intermodule_analysis(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_prepare_intermodule_analysis(Verbose, Stats, !HLDS, !IO) :-
    globals.io_lookup_bool_option(intermodule_analysis, IntermodAnalysis, !IO),
    (
        IntermodAnalysis = yes,
        prepare_intermodule_analysis(Verbose, Stats, !HLDS, !IO)
    ;
        IntermodAnalysis = no
    ).

:- pred prepare_intermodule_analysis(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

prepare_intermodule_analysis(Verbose, Stats, !HLDS, !IO) :-
    maybe_write_string(Verbose, "% Preparing for intermodule analysis...\n",
        !IO),

    module_info_get_all_deps(!.HLDS, ModuleNames),

    globals.io_lookup_accumulating_option(local_module_id, LocalModulesList,
        !IO),
    SymNames = list.map(string_to_sym_name, LocalModulesList),
    LocalModuleNames = set.from_list(SymNames),

    module_info_get_analysis_info(!.HLDS, AnalysisInfo0),
    analysis.prepare_intermodule_analysis(ModuleNames, LocalModuleNames,
        AnalysisInfo0, AnalysisInfo, !IO),
    module_info_set_analysis_info(AnalysisInfo, !HLDS),

    maybe_write_string(Verbose, "% done.\n", !IO),
    maybe_report_stats(Stats, !IO).

:- pred mercury_compile_after_front_end(list(module_name)::in,
    find_timestamp_file_names::in(find_timestamp_file_names),
    maybe(module_timestamps)::in, module_name::in, module_info::in,
    list(error_spec)::in, list(string)::out,
    dump_info::in, dump_info::out, io::di, io::uo) is det.

mercury_compile_after_front_end(NestedSubModules, FindTimestampFiles,
        MaybeTimestamps, ModuleName, !.HLDS, Specs, FactTableBaseFiles,
        !DumpInfo, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),
    maybe_output_prof_call_graph(Verbose, Stats, !HLDS, !IO),
    middle_pass(ModuleName, !HLDS, !DumpInfo, !IO),
    globals.lookup_bool_option(Globals, highlevel_code, HighLevelCode),
    globals.get_target(Globals, Target),
    globals.lookup_bool_option(Globals, target_code_only, TargetCodeOnly),

    % Remove any existing `.used' file before writing the output file.
    % This avoids leaving the old `used' file lying around if compilation
    % is interrupted after the new output file is written but before the new
    % `.used' file is written.

    module_name_to_file_name(ModuleName, ".used", do_not_create_dirs,
        UsageFileName, !IO),
    io.remove_file(UsageFileName, _, !IO),

    FrontEndErrors = contains_errors(Globals, Specs),
    module_info_get_num_errors(!.HLDS, NumErrors),
    (
        FrontEndErrors = no,
        NumErrors = 0
    ->
        (
            ( Target = target_c
            ; Target = target_asm
            ; Target = target_x86_64
            ),
            % Produce the grade independent header file <module>.mh
            % containing function prototypes for the procedures
            % referred to by foreign_export pragmas.
            export.get_foreign_export_decls(!.HLDS, ExportDecls),
            export.produce_header_file(!.HLDS, ExportDecls, ModuleName, !IO)
        ;
            ( Target = target_java
            ; Target = target_il
            ; Target = target_erlang
            )
        ),
        (
            Target = target_il,
            mlds_backend(!.HLDS, _, MLDS, !DumpInfo, !IO),
            (
                TargetCodeOnly = yes,
                mlds_to_il_assembler(Globals, MLDS, !IO)
            ;
                TargetCodeOnly = no,
                HasMain = mlds_has_main(MLDS),
                mlds_to_il_assembler(Globals, MLDS, !IO),
                io.output_stream(OutputStream, !IO),
                compile_target_code.il_assemble(OutputStream, ModuleName,
                    HasMain, Succeeded, !IO),
                maybe_set_exit_status(Succeeded, !IO)
            ),
            FactTableBaseFiles = []
        ;
            Target = target_java,
            mlds_backend(!.HLDS, _, MLDS, !DumpInfo, !IO),
            mlds_to_java(!.HLDS, MLDS, !IO),
            (
                TargetCodeOnly = yes
            ;
                TargetCodeOnly = no,
                io.output_stream(OutputStream, !IO),
                module_name_to_file_name(ModuleName, ".java",
                    do_not_create_dirs, JavaFile, !IO),
                compile_target_code.compile_java_files(OutputStream, [JavaFile],
                    Succeeded, !IO),
                maybe_set_exit_status(Succeeded, !IO)
            ),
            FactTableBaseFiles = []
        ;
            Target = target_asm,
            % Compile directly to assembler using the gcc back-end.
            mlds_backend(!.HLDS, _, MLDS, !DumpInfo, !IO),
            maybe_mlds_to_gcc(Globals, MLDS, ContainsCCode, !IO),
            (
                TargetCodeOnly = yes
            ;
                TargetCodeOnly = no,
                % We don't invoke the assembler to produce an object file yet
                % -- that is done at the top level.
                %
                % But if the module contained `pragma c_code', then we will
                % have compiled that to a separate C file. We need to invoke
                % the C compiler on that.
                (
                    ContainsCCode = yes,
                    mercury_compile_asm_c_code(ModuleName, !IO)
                ;
                    ContainsCCode = no
                )
            ),
            FactTableBaseFiles = []
        ;
            Target = target_c,
            (
                HighLevelCode = yes,
                mlds_backend(!.HLDS, _, MLDS, !DumpInfo, !IO),
                mlds_to_high_level_c(Globals, MLDS, !IO),
                (
                    TargetCodeOnly = yes
                ;
                    TargetCodeOnly = no,
                    module_name_to_file_name(ModuleName, ".c",
                        do_not_create_dirs, C_File, !IO),
                    get_linked_target_type(TargetType, !IO),
                    get_object_code_type(TargetType, PIC, !IO),
                    maybe_pic_object_file_extension(PIC, Obj, !IO),
                    module_name_to_file_name(ModuleName, Obj,
                        do_create_dirs, O_File, !IO),
                    io.output_stream(OutputStream, !IO),
                    compile_target_code.compile_c_file(OutputStream, PIC,
                        C_File, O_File, CompileOK, !IO),
                    maybe_set_exit_status(CompileOK, !IO)
                ),
                FactTableBaseFiles = []
            ;
                HighLevelCode = no,
                backend_pass(!HLDS, GlobalData, LLDS, !DumpInfo, !IO),
                output_pass(!.HLDS, GlobalData, LLDS, ModuleName,
                    _CompileErrors, FactTableBaseFiles, !IO)
            )
        ;
            Target = target_x86_64,
            backend_pass(!HLDS, _GlobalData, LLDS, !DumpInfo, !IO),
            % XXX Eventually we will call the LLDS->x86_64 asm code
            % generator here and then output the assembler.  At the moment
            % we just output the LLDS as C code.
            llds_to_x86_64_asm(!.HLDS, LLDS, X86_64_Asm),
            % XXX This should eventually be written to a file rather
            % than stdout.
            io.stdout_stream(Stdout, !IO),
            output_x86_64_asm(Stdout, X86_64_Asm, !IO),
            FactTableBaseFiles = []
        ;
            Target = target_erlang,
            erlang_backend(!.HLDS, ELDS, !DumpInfo, !IO),
            elds_to_erlang(!.HLDS, ELDS, !IO),
            FactTableBaseFiles = []
        ),
        recompilation.usage.write_usage_file(!.HLDS, NestedSubModules,
            MaybeTimestamps, !IO),
        FindTimestampFiles(ModuleName, TimestampFiles, !IO),
        list.foldl(touch_datestamp, TimestampFiles, !IO)
    ;
        % If the number of errors is > 0, make sure that the compiler
        % exits with a non-zero exit status.
        io.get_exit_status(ExitStatus, !IO),
        ( ExitStatus = 0 ->
            io.set_exit_status(1, !IO)
        ;
            true
        ),
        FactTableBaseFiles = []
    ).

:- pred mercury_compile_asm_c_code(module_name::in, io::di, io::uo) is det.

mercury_compile_asm_c_code(ModuleName, !IO) :-
    get_linked_target_type(TargetType, !IO),
    get_object_code_type(TargetType, PIC, !IO),
    maybe_pic_object_file_extension(PIC, Obj, !IO),
    module_name_to_file_name(ModuleName, ".c", do_not_create_dirs,
        CCode_C_File, !IO),
    ForeignModuleName = foreign_language_module_name(ModuleName, lang_c),
    module_name_to_file_name(ForeignModuleName, Obj, do_create_dirs,
        CCode_O_File, !IO),
    io.output_stream(OutputStream, !IO),
    compile_target_code.compile_c_file(OutputStream, PIC,
        CCode_C_File, CCode_O_File, CompileOK, !IO),
    maybe_set_exit_status(CompileOK, !IO),
    % Add this object file to the list of extra object files to link in.
    globals.io_lookup_accumulating_option(link_objects, LinkObjects, !IO),
    globals.io_set_option(link_objects,
        accumulating([CCode_O_File | LinkObjects]), !IO).

    % Return `yes' iff this module defines the main/2 entry point.
    %
:- func mlds_has_main(mlds) = has_main.

mlds_has_main(MLDS) =
    (
        Defns = MLDS ^ mlds_defns,
        defns_contain_main(Defns)
    ->
        has_main
    ;
        no_main
    ).

:- pred get_linked_target_type(linked_target_type::out, io::di, io::uo) is det.

get_linked_target_type(LinkedTargetType, !IO) :-
    globals.io_lookup_bool_option(compile_to_shared_lib, MakeSharedLib, !IO),
    (
        MakeSharedLib = yes,
        LinkedTargetType = shared_library
    ;
        MakeSharedLib = no,
        LinkedTargetType = executable
    ).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- pred pre_hlds_pass(globals::in, module_and_imports::in, bool::in,
    module_info::out, make_hlds_qual_info::out, maybe(module_timestamps)::out,
    bool::out, bool::out, bool::out, dump_info::in, dump_info::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

pre_hlds_pass(Globals, ModuleImports0, DontWriteDFile0, HLDS1, QualInfo,
        MaybeTimestamps, UndefTypes, UndefModes, FoundError, !DumpInfo,
        !Specs, !IO) :-
    globals.lookup_bool_option(Globals, statistics, Stats),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, invoked_by_mmc_make, MMCMake),
    DontWriteDFile1 = bool.or(DontWriteDFile0, MMCMake),

    % Don't write the `.d' file when making the `.opt' file because
    % we can't work out the full transitive implementation dependencies.
    globals.lookup_bool_option(Globals, make_optimization_interface,
        MakeOptInt),
    DontWriteDFile = bool.or(DontWriteDFile1, MakeOptInt),

    module_and_imports_get_module_name(ModuleImports0, ModuleName),
    (
        DontWriteDFile = yes,
        % The only time the TransOptDeps are required is when creating the
        % .trans_opt file. If DontWriteDFile is yes, then error check only
        % or type-check only is enabled, so we can't be creating the
        % .trans_opt file.
        MaybeTransOptDeps = no
    ;
        DontWriteDFile = no,
        maybe_read_dependency_file(ModuleName, MaybeTransOptDeps, !IO)
    ),

    % Errors in .opt and .trans_opt files result in software errors.
    maybe_grab_optfiles(Globals, ModuleImports0, Verbose, MaybeTransOptDeps,
        ModuleImports1, IntermodError, !IO),

    % We pay attention to IntermodError instead of _Error. XXX Is this right?
    module_and_imports_get_results(ModuleImports1, Items1, ItemSpecs, _Error),
    !:Specs = ItemSpecs ++ !.Specs,
    MaybeTimestamps = ModuleImports1 ^ mai_maybe_timestamps,

    globals.lookup_string_option(Globals, event_set_file_name,
        EventSetFileName),
    ( EventSetFileName = "" ->
        EventSetName = "",
        EventSpecMap1 = map.init,
        EventSetErrors = no
    ;
        read_event_set(EventSetFileName, EventSetName0, EventSpecMap0,
            EventSetSpecs, !IO),
        !:Specs = EventSetSpecs ++ !.Specs,
        EventSetErrors = contains_errors(Globals, EventSetSpecs),
        (
            EventSetErrors = no,
            EventSetName = EventSetName0,
            EventSpecMap1 = EventSpecMap0
        ;
            EventSetErrors = yes,
            EventSetName = "",
            EventSpecMap1 = map.init
        )
    ),

    invoke_module_qualify_items(Globals, Items1, Items2,
        EventSpecMap1, EventSpecMap2, ModuleName, EventSetFileName,
        Verbose, Stats, MQInfo0, MQUndefTypes, MQUndefModes, !Specs, !IO),

    mq_info_get_recompilation_info(MQInfo0, RecompInfo0),
    expand_equiv_types(Globals, ModuleName, Verbose, Stats, Items2, Items,
        EventSpecMap2, EventSpecMap, EqvMap, UsedModules,
        RecompInfo0, RecompInfo, ExpandErrors, !Specs, !IO),
    mq_info_set_recompilation_info(RecompInfo, MQInfo0, MQInfo),

    EventSet = event_set(EventSetName, EventSpecMap),
    make_hlds(Globals, ModuleName, Items, EventSet, MQInfo, EqvMap,
        UsedModules, Verbose, Stats, HLDS0, QualInfo,
        MakeHLDSUndefTypes, MakeHLDSUndefModes, FoundError, !Specs, !IO),

    bool.or_list([MQUndefTypes, EventSetErrors, ExpandErrors,
        MakeHLDSUndefTypes], UndefTypes),
    bool.or(MQUndefModes, MakeHLDSUndefModes, UndefModes),

    maybe_dump_hlds(HLDS0, 1, "initial", !DumpInfo, !IO),

    (
        DontWriteDFile = yes
    ;
        DontWriteDFile = no,
        module_info_get_all_deps(HLDS0, AllDeps),
        write_dependency_file(ModuleImports0, AllDeps, MaybeTransOptDeps, !IO),
        globals.lookup_bool_option(Globals,
            generate_mmc_make_module_dependencies, OutputMMCMakeDeps),
        (
            OutputMMCMakeDeps = yes,
            make_write_module_dep_file(ModuleImports0, !IO)
        ;
            OutputMMCMakeDeps = no
        )
    ),

    % Only stop on syntax errors in .opt files.
    (
        ( FoundError = yes
        ; IntermodError = yes
        )
    ->
        module_info_incr_errors(HLDS0, HLDS1)
    ;
        HLDS1 = HLDS0
    ).

:- pred invoke_module_qualify_items(globals::in,
    list(item)::in, list(item)::out, event_spec_map::in, event_spec_map::out,
    module_name::in, string::in, bool::in, bool::in, mq_info::out,
    bool::out, bool::out, list(error_spec)::in, list(error_spec)::out,
    io::di, io::uo) is det.

invoke_module_qualify_items(Globals, Items0, Items, EventSpecMap0, EventSpecMap,
        ModuleName, EventSpecFileName, Verbose, Stats, MQInfo,
        UndefTypes, UndefModes, !Specs, !IO) :-
    maybe_write_out_errors_no_module(Verbose, Globals, !Specs, !IO),
    maybe_write_string(Verbose, "% Module qualifying items...\n", !IO),
    maybe_flush_output(Verbose, !IO),
    module_name_to_file_name(ModuleName, ".m", do_not_create_dirs,
        FileName, !IO),
    module_qualify_items(Items0, Items, EventSpecMap0, EventSpecMap,
        Globals, ModuleName, yes(FileName), EventSpecFileName, MQInfo,
        UndefTypes, UndefModes, [], QualifySpecs),
    !:Specs = QualifySpecs ++ !.Specs,
    maybe_write_out_errors_no_module(Verbose, Globals, !Specs, !IO),
    maybe_write_string(Verbose, "% done.\n", !IO),
    maybe_report_stats(Stats, !IO).

:- pred maybe_grab_optfiles(globals::in, module_and_imports::in, bool::in,
    maybe(list(module_name))::in, module_and_imports::out, bool::out,
    io::di, io::uo) is det.

maybe_grab_optfiles(Globals, Imports0, Verbose, MaybeTransOptDeps,
        Imports, Error, !IO) :-
    globals.lookup_bool_option(Globals, intermodule_optimization,
        IntermodOpt),
    globals.lookup_bool_option(Globals, use_opt_files, UseOptInt),
    globals.lookup_bool_option(Globals, make_optimization_interface,
        MakeOptInt),
    globals.lookup_bool_option(Globals, transitive_optimization, TransOpt),
    globals.lookup_bool_option(Globals, make_transitive_opt_interface,
        MakeTransOptInt),
    globals.lookup_bool_option(Globals, intermodule_analysis,
        IntermodAnalysis),
    (
        ( UseOptInt = yes
        ; IntermodOpt = yes
        ; IntermodAnalysis = yes
        ),
        MakeOptInt = no
    ->
        maybe_write_string(Verbose, "% Reading .opt files...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        grab_opt_files(Globals, Imports0, Imports1, Error1, !IO),
        maybe_write_string(Verbose, "% Done.\n", !IO)
    ;
        Imports1 = Imports0,
        Error1 = no
    ),
    ( MakeTransOptInt = yes ->
        (
            MaybeTransOptDeps = yes(TransOptDeps),
            % When creating the trans_opt file, only import the
            % trans_opt files which are lower in the ordering.
            grab_trans_opt_files(Globals, TransOptDeps, Imports1, Imports,
                Error2, !IO)
        ;
            MaybeTransOptDeps = no,
            Imports = Imports1,
            Error2 = no,
            module_and_imports_get_module_name(Imports, ModuleName),
            globals.lookup_bool_option(Globals, warn_missing_trans_opt_deps,
                WarnNoTransOptDeps),
            (
                WarnNoTransOptDeps = yes,
                Pieces = [words("Warning: cannot read trans-opt dependencies"),
                    words("for module"), sym_name(ModuleName), suffix("."), nl,
                    words("You need to remake the dependencies."), nl],
                Msg = error_msg(no, do_not_treat_as_first, 0,
                    [always(Pieces)]),
                Spec = error_spec(severity_warning, phase_read_files, [Msg]),
                % XXX _NumErrors
                write_error_spec(Spec, Globals, 0, _NumWarnings, 0, _NumErrors,
                    !IO)
            ;
                WarnNoTransOptDeps = no
            )
        )
    ; MakeOptInt = yes ->
        % If we're making the `.opt' file, then we can't read any `.trans_opt'
        % files, since `.opt' files aren't allowed to depend on `.trans_opt'
        % files.
        Imports = Imports1,
        Error2 = no
    ;
        (
            TransOpt = yes,
            % If transitive optimization is enabled, but we are not creating
            % the .opt or .trans opt file, then import the trans_opt files
            % for all the modules that are imported (or used), and for all
            % ancestor modules.
            TransOptFilesList =
                [Imports0 ^ mai_parent_deps,
                Imports0 ^ mai_int_deps,
                Imports0 ^ mai_impl_deps],
            list.condense(TransOptFilesList, TransOptFiles),
            grab_trans_opt_files(Globals, TransOptFiles, Imports1, Imports,
                Error2, !IO)
        ;
            TransOpt = no,
            Imports = Imports1,
            Error2 = no
        )
    ),
    bool.or(Error1, Error2, Error).

:- pred expand_equiv_types(globals::in, module_name::in, bool::in, bool::in,
    list(item)::in, list(item)::out, event_spec_map::in, event_spec_map::out,
    eqv_map::out, used_modules::out,
    maybe(recompilation_info)::in, maybe(recompilation_info)::out, bool::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

expand_equiv_types(Globals, ModuleName, Verbose, Stats, Items0, Items,
        EventSpecMap0, EventSpecMap, EqvMap, UsedModules,
        RecompInfo0, RecompInfo, FoundError, !Specs, !IO) :-
    maybe_write_out_errors_no_module(Verbose, Globals, !Specs, !IO),
    maybe_write_string(Verbose, "% Expanding equivalence types...\n", !IO),
    maybe_flush_output(Verbose, !IO),
    equiv_type.expand_eqv_types(ModuleName, Items0, Items,
        EventSpecMap0, EventSpecMap, EqvMap, UsedModules,
        RecompInfo0, RecompInfo, ExpandSpecs),
    FoundError = contains_errors(Globals, ExpandSpecs),
    !:Specs = ExpandSpecs ++ !.Specs,
    maybe_write_out_errors_no_module(Verbose, Globals, !Specs, !IO),
    maybe_write_string(Verbose, "% done.\n", !IO),
    maybe_report_stats(Stats, !IO).

:- pred make_hlds(globals::in, module_name::in, list(item)::in, event_set::in,
    mq_info::in, eqv_map::in, used_modules::in, bool::in, bool::in,
    module_info::out, make_hlds_qual_info::out,
    bool::out, bool::out, bool::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

make_hlds(Globals, ModuleName, Items, EventSet, MQInfo, EqvMap, UsedModules,
        Verbose, Stats, !:HLDS, QualInfo, UndefTypes, UndefModes,
        FoundSemanticError, !Specs, !IO) :-
    maybe_write_out_errors_no_module(Verbose, Globals, !Specs, !IO),
    maybe_write_string(Verbose, "% Converting parse tree to hlds...\n", !IO),
    ParseTree = unit_module(ModuleName, Items),
    parse_tree_to_hlds(Globals, ParseTree, MQInfo, EqvMap, UsedModules,
        QualInfo, UndefTypes, UndefModes, !:HLDS, MakeSpecs),
    !:Specs = MakeSpecs ++ !.Specs,
    module_info_set_event_set(EventSet, !HLDS),
    io.get_exit_status(Status, !IO),
    SpecsErrors = contains_errors(Globals, !.Specs),
    (
        ( Status \= 0
        ; SpecsErrors = yes
        )
    ->
        FoundSemanticError = yes,
        io.set_exit_status(1, !IO)
    ;
        FoundSemanticError = no
    ),
    maybe_write_out_errors_no_module(Verbose, Globals, !Specs, !IO),
    maybe_write_string(Verbose, "% done.\n", !IO),
    maybe_report_stats(Stats, !IO).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- pred frontend_pass(make_hlds_qual_info::in, bool::in, bool::in,
    bool::in, bool::out, module_info::in, module_info::out,
    dump_info::in, dump_info::out, list(error_spec)::in, list(error_spec)::out,
    io::di, io::uo) is det.

frontend_pass(QualInfo0, FoundUndefTypeError, FoundUndefModeError, !FoundError,
        !HLDS, !DumpInfo, !Specs, !IO) :-
    % We can't continue after an undefined type error, since typecheck
    % would get internal errors.
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    (
        FoundUndefTypeError = yes,
        % We can't continue after an undefined type error, because if we did,
        % typecheck could get internal errors.
        !:FoundError = yes,
        maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
        maybe_write_string(Verbose,
            "% Program contains undefined type error(s).\n", !IO),
        io.set_exit_status(1, !IO)
    ;
        FoundUndefTypeError = no,
        maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
        maybe_write_string(Verbose, "% Checking typeclasses...\n", !IO),
        check_typeclasses(!HLDS, QualInfo0, QualInfo, [], TypeClassSpecs),
        !:Specs = TypeClassSpecs ++ !.Specs,
        maybe_dump_hlds(!.HLDS, 5, "typeclass", !DumpInfo, !IO),
        set_module_recomp_info(QualInfo, !HLDS),

        TypeClassErrors = contains_errors(Globals, TypeClassSpecs),
        (
            TypeClassErrors = yes,
            % We can't continue after a typeclass error, because if we did,
            % typecheck could get internal errors.
            !:FoundError = yes
        ;
            TypeClassErrors = no,
            frontend_pass_no_type_error(FoundUndefModeError,
                !FoundError, !HLDS, !DumpInfo, !Specs, !IO)
        )
    ).

:- pred frontend_pass_no_type_error(bool::in, bool::in, bool::out,
    module_info::in, module_info::out, dump_info::in, dump_info::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

frontend_pass_no_type_error(FoundUndefModeError, !FoundError,
        !HLDS, !DumpInfo, !Specs, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),
    globals.lookup_bool_option(Globals, intermodule_optimization, IntermodOpt),
    globals.lookup_bool_option(Globals, intermodule_analysis,
        IntermodAnalysis),
    globals.lookup_bool_option(Globals, use_opt_files, UseOptFiles),
    globals.lookup_bool_option(Globals, make_optimization_interface,
        MakeOptInt),
    globals.lookup_bool_option(Globals, type_check_constraints,
        TypeCheckConstraints),
    (
        ( IntermodOpt = yes
        ; IntermodAnalysis = yes
        ; UseOptFiles = yes
        ),
        MakeOptInt = no
    ->
        % Eliminate unnecessary clauses from `.opt' files,
        % to speed up compilation. This must be done after
        % typeclass instances have been checked, since that
        % fills in which pred_ids are needed by instance decls.
        maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
        maybe_write_string(Verbose, "% Eliminating dead predicates... ", !IO),
        dead_pred_elim(!HLDS),
        maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
        maybe_write_string(Verbose, "done.\n", !IO),
        maybe_dump_hlds(!.HLDS, 10, "dead_pred_elim", !DumpInfo, !IO)
    ;
        true
    ),

    globals.lookup_bool_option(Globals, warn_insts_without_matching_type,
        WarnInstsWithNoMatchingType),
    (
        WarnInstsWithNoMatchingType = yes,
        maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
        maybe_write_string(Verbose,
            "% Checking that insts have matching types... ", !IO),
        check_insts_have_matching_types(!.HLDS, !Specs),
        maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
        maybe_write_string(Verbose, "done.\n", !IO),
        maybe_dump_hlds(!.HLDS, 12, "warn_insts_without_matching_type",
            !DumpInfo, !IO)
    ;
        WarnInstsWithNoMatchingType = no
    ),

    % Next typecheck the clauses.
    maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
    maybe_write_string(Verbose, "% Type-checking...\n", !IO),
    maybe_write_string(Verbose, "% Type-checking clauses...\n", !IO),
    (
        TypeCheckConstraints = yes,
        typecheck_constraints(!HLDS, TypeCheckSpecs),
        ExceededTypeCheckIterationLimit = no
    ;
        TypeCheckConstraints = no,
        typecheck_module(!HLDS, TypeCheckSpecs,
            ExceededTypeCheckIterationLimit)
    ),
    !:Specs = TypeCheckSpecs ++ !.Specs,
    maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
    FoundTypeError = contains_errors(Globals, TypeCheckSpecs),
    (
        FoundTypeError = yes,
        maybe_write_string(Verbose,
            "% Program contains type error(s).\n", !IO)
    ;
        FoundTypeError = no,
        maybe_write_string(Verbose, "% Program is type-correct.\n", !IO)
    ),
    maybe_report_stats(Stats, !IO),
    maybe_dump_hlds(!.HLDS, 15, "typecheck", !DumpInfo, !IO),

    % We can't continue after an undefined inst/mode error, since
    % propagate_types_into_proc_modes (in post_typecheck.m -- called by
    % purity.m) and mode analysis would get internal errors. Also mode analysis
    % can loop if there are cyclic insts/modes.
    %
    % We can't continue if the type inference iteration limit was exceeeded
    % because the code to resolve overloading in post_typecheck.m (called by
    % purity.m) could abort.
    ( FoundUndefModeError = yes ->
        !:FoundError = yes,
        maybe_write_string(Verbose,
            "% Program contains undefined inst " ++
            "or undefined mode error(s).\n", !IO),
        io.set_exit_status(1, !IO)
    ; ExceededTypeCheckIterationLimit = yes ->
        % FoundTypeError will always be true here, so if Verbose = yes,
        % we've already printed a message about the program containing
        % type errors.
        !:FoundError = yes,
        io.set_exit_status(1, !IO)
    ;
        puritycheck(Verbose, Stats, !HLDS, FoundTypeError,
            FoundPostTypecheckError, !Specs, !IO),
        maybe_dump_hlds(!.HLDS, 20, "puritycheck", !DumpInfo, !IO),

        !:FoundError = !.FoundError `or` FoundTypeError,

        % Stop here if `--typecheck-only' was specified.
        globals.lookup_bool_option(Globals, typecheck_only, TypecheckOnly),
        (
            TypecheckOnly = yes
        ;
            TypecheckOnly = no,
            (
                ( FoundTypeError = yes
                ; FoundPostTypecheckError = yes
                )
            ->
                % XXX It would be nice if we could go on and mode-check the
                % predicates which didn't have type errors, but we need to run
                % polymorphism before running mode analysis, and currently
                % polymorphism may get internal errors if any of the predicates
                % are not type-correct.
                !:FoundError = yes
            ;
                % Substitute implementation-defined literals before clauses are
                % written out to `.opt' files.
                subst_implementation_defined_literals(Verbose, Stats, !HLDS,
                    !Specs, !IO),
                maybe_dump_hlds(!.HLDS, 25, "implementation_defined_literals",
                    !DumpInfo, !IO),

                % Only write out the `.opt' file if there are no errors.
                (
                    !.FoundError = no,
                    FoundUndefModeError = no
                ->
                    maybe_write_optfile(MakeOptInt, !HLDS, !DumpInfo, !Specs,
                        !IO)
                ;
                    true
                ),
                % If our job was to write out the `.opt' file, then we're done.
                (
                    MakeOptInt = yes
                ;
                    MakeOptInt = no,
                    % Now go ahead and do the rest of mode checking
                    % and determinism analysis.
                    frontend_pass_by_phases(!HLDS,
                        FoundModeOrDetError, !DumpInfo, !Specs, !IO),
                    !:FoundError = !.FoundError `or` FoundModeOrDetError
                )
            )
        )
    ).

:- pred maybe_write_optfile(bool::in, module_info::in, module_info::out,
    dump_info::in, dump_info::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

maybe_write_optfile(MakeOptInt, !HLDS, !DumpInfo, !Specs, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, intermodule_optimization, IntermodOpt),
    globals.lookup_bool_option(Globals, intermodule_analysis,
        IntermodAnalysis),
    globals.lookup_bool_option(Globals, intermod_unused_args, IntermodArgs),
    globals.lookup_accumulating_option(Globals, intermod_directories,
        IntermodDirs),
    globals.lookup_bool_option(Globals, use_opt_files, UseOptFiles),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),
    globals.lookup_bool_option(Globals, termination, Termination),
    globals.lookup_bool_option(Globals, termination2, Termination2),
    globals.lookup_bool_option(Globals, structure_sharing_analysis,
        SharingAnalysis),
    globals.lookup_bool_option(Globals, structure_reuse_analysis,
        ReuseAnalysis),
    globals.lookup_bool_option(Globals, analyse_exceptions,
        ExceptionAnalysis),
    globals.lookup_bool_option(Globals, analyse_closures,
        ClosureAnalysis),
    globals.lookup_bool_option(Globals, analyse_trail_usage,
        TrailingAnalysis),
    globals.lookup_bool_option(Globals, analyse_mm_tabling,
        TablingAnalysis),
    (
        MakeOptInt = yes,
        write_opt_file(!HLDS, !IO),

        % The following passes are only run with `--intermodule-optimisation'
        % to append their results to the `.opt.tmp' file.  For
        % `--intermodule-analysis', analyses results should be recorded
        % using the intermodule analysis framework instead.
        %
        % If intermod_unused_args is being performed, run polymorphism,
        % mode analysis and determinism analysis before unused_args.
        (
            IntermodAnalysis = no,
            ( IntermodArgs = yes
            ; Termination = yes
            ; Termination2 = yes
            ; ExceptionAnalysis = yes
            ; TrailingAnalysis = yes
            ; TablingAnalysis = yes
            ; SharingAnalysis = yes
            ; ReuseAnalysis = yes
            )
        ->
            frontend_pass_by_phases(!HLDS, FoundModeError, !DumpInfo,
                !Specs, !IO),
            (
                FoundModeError = no,
                (
                    % Closure analysis assumes that lambda expressions have
                    % been converted into separate predicates.
                    % Structure sharing/reuse analysis results can be affected
                    % by process_lambdas.
                    ( ClosureAnalysis = yes
                    ; SharingAnalysis = yes
                    )
                ->
                    mercury_compile.process_lambdas(Verbose, Stats,
                        !HLDS, !IO),

                    mercury_compile.process_stms(Verbose, Stats, !HLDS, !IO),
                    mercury_compile.maybe_closure_analysis(Verbose, Stats,
                        !HLDS, !IO)
                ;
                    true
                ),
                (
                    ExceptionAnalysis = yes,
                    maybe_exception_analysis(Verbose, Stats, !HLDS, !IO)
                ;
                    ExceptionAnalysis = no
                ),
                (
                    IntermodArgs = yes,
                    maybe_unused_args(Verbose, Stats, !HLDS, !IO)
                ;
                    IntermodArgs = no
                ),
                (
                    Termination = yes,
                    maybe_termination(Verbose, Stats, !HLDS, !IO)
                ;
                    Termination = no
                ),
                (
                    Termination2 = yes,
                    maybe_termination2(Verbose, Stats, !HLDS, !IO)
                ;
                    Termination2 = no
                ),
                (
                    SharingAnalysis = yes,
                    maybe_structure_sharing_analysis(Verbose, Stats,
                        !HLDS, !IO)
                ;
                    SharingAnalysis = no
                ),
                (
                    ReuseAnalysis = yes,
                    maybe_structure_reuse_analysis(Verbose, Stats, !HLDS, !IO)
                ;
                    ReuseAnalysis = no
                ),
                (
                    TrailingAnalysis = yes,
                    maybe_analyse_trail_usage(Verbose, Stats, !HLDS, !IO)
                ;
                    TrailingAnalysis = no
                ),
                (
                    TablingAnalysis = yes,
                    maybe_analyse_mm_tabling(Verbose, Stats, !HLDS, !IO)
                ;
                    TablingAnalysis = no
                )
            ;
                FoundModeError = yes,
                io.set_exit_status(1, !IO)
            )
        ;
            true
        ),
        module_info_get_name(!.HLDS, ModuleName),
        module_name_to_file_name(ModuleName, ".opt", do_create_dirs,
            OptName, !IO),
        update_interface(OptName, !IO),
        touch_interface_datestamp(ModuleName, ".optdate", !IO)
    ;
        MakeOptInt = no,
        % If there is a `.opt' file for this module the import
        % status of items in the `.opt' file needs to be updated.
        ( IntermodOpt = yes ->
            UpdateStatus = yes
        ; IntermodAnalysis = yes ->
            UpdateStatus = yes
        ; UseOptFiles = yes ->
            module_info_get_name(!.HLDS, ModuleName),
            module_name_to_search_file_name(ModuleName, ".opt", OptName, !IO),
            search_for_file_returning_dir(do_not_open_file, IntermodDirs,
                OptName, Found, !IO),
            (
                Found = ok(_),
                UpdateStatus = yes
            ;
                Found = error(_),
                UpdateStatus = no
            )
        ;
            UpdateStatus = no
        ),
        (
            UpdateStatus = yes,
            intermod.adjust_pred_import_status(!HLDS, !IO)
        ;
            UpdateStatus = no
        )
    ).

:- pred output_trans_opt_file(module_info::in, dump_info::in, dump_info::out,
    io::di, io::uo) is det.

output_trans_opt_file(!.HLDS, !DumpInfo, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),
    globals.lookup_bool_option(Globals, analyse_closures, ClosureAnalysis),
    globals.lookup_bool_option(Globals, structure_sharing_analysis,
        SharingAnalysis),

    % Closure analysis assumes that lambda expressions have
    % been converted into separate predicates.
    (
        ( ClosureAnalysis = yes
        ; SharingAnalysis = yes
        )
    ->
        process_lambdas(Verbose, Stats, !HLDS, !IO)
    ;
        true
    ),
    maybe_dump_hlds(!.HLDS, 110, "lambda", !DumpInfo, !IO),
    maybe_closure_analysis(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 117, "closure_analysis", !DumpInfo, !IO),
    maybe_exception_analysis(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 118, "exception_analysis", !DumpInfo, !IO),
    maybe_termination(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 120, "termination", !DumpInfo, !IO),
    maybe_termination2(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 121, "termination_2", !DumpInfo, !IO),
    (
        SharingAnalysis = yes,
        % These affect the results we write out for structure sharing/reuse
        % analysis.
        maybe_higher_order(Verbose, Stats, !HLDS, !IO),
        maybe_dump_hlds(!.HLDS, 135, "higher_order", !DumpInfo, !IO),
        maybe_do_inlining(Verbose, Stats, !HLDS, !IO),
        maybe_dump_hlds(!.HLDS, 145, "inlining", !DumpInfo, !IO),
        maybe_loop_inv(Verbose, Stats, !HLDS, !DumpInfo, !IO),
        maybe_dump_hlds(!.HLDS, 150, "loop_inv", !DumpInfo, !IO),
        maybe_deforestation(Verbose, Stats, !HLDS, !IO),
        maybe_dump_hlds(!.HLDS, 155, "deforestation", !DumpInfo, !IO)
    ;
        SharingAnalysis = no
    ),
    maybe_structure_sharing_analysis(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 162, "structure_sharing", !DumpInfo, !IO),
    maybe_structure_reuse_analysis(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 163, "structure_reuse", !DumpInfo, !IO),
    maybe_analyse_trail_usage(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 167, "trail_usage", !DumpInfo, !IO),
    maybe_analyse_mm_tabling(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 185, "mm_tabling_analysis", !DumpInfo, !IO),
    write_trans_opt_file(!.HLDS, !IO).

:- pred output_analysis_file(module_info::in,
    dump_info::in, dump_info::out, io::di, io::uo) is det.

output_analysis_file(!.HLDS, !DumpInfo, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),
    globals.lookup_bool_option(Globals, analyse_closures, ClosureAnalysis),
    globals.lookup_bool_option(Globals, structure_sharing_analysis,
        SharingAnalysis),

    % Closure analysis assumes that lambda expressions have
    % been converted into separate predicates.
    (
        ( ClosureAnalysis = yes
        ; SharingAnalysis = yes
        )
    ->
        process_lambdas(Verbose, Stats, !HLDS, !IO)
    ;
        true
    ),
    maybe_dump_hlds(!.HLDS, 110, "lambda", !DumpInfo, !IO),
    maybe_closure_analysis(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 117, "closure_analysis", !DumpInfo, !IO),
    maybe_exception_analysis(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 118, "exception_analysis", !DumpInfo, !IO),
    maybe_termination(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 120, "termination", !DumpInfo, !IO),
    maybe_termination2(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 121, "termination_2", !DumpInfo, !IO),
    (
        SharingAnalysis = yes,
        % These affect the results we write out for structure sharing/reuse
        % analysis.
        maybe_higher_order(Verbose, Stats, !HLDS, !IO),
        maybe_dump_hlds(!.HLDS, 135, "higher_order", !DumpInfo, !IO),
        maybe_do_inlining(Verbose, Stats, !HLDS, !IO),
        maybe_dump_hlds(!.HLDS, 145, "inlining", !DumpInfo, !IO),
        maybe_loop_inv(Verbose, Stats, !HLDS, !DumpInfo, !IO),
        maybe_dump_hlds(!.HLDS, 150, "loop_inv", !DumpInfo, !IO),
        maybe_deforestation(Verbose, Stats, !HLDS, !IO),
        maybe_dump_hlds(!.HLDS, 155, "deforestation", !DumpInfo, !IO)
    ;
        SharingAnalysis = no
    ),
    maybe_structure_sharing_analysis(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 162, "structure_sharing", !DumpInfo, !IO),
    maybe_structure_reuse_analysis(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 163, "structure_reuse", !DumpInfo, !IO),
    maybe_unused_args(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 165, "unused_args", !DumpInfo, !IO),
    maybe_analyse_trail_usage(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 167, "trail_usage", !DumpInfo, !IO),
    maybe_analyse_mm_tabling(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 185, "mm_tabling_analysis", !DumpInfo, !IO),

    module_info_get_analysis_info(!.HLDS, AnalysisInfo),
    module_info_get_all_deps(!.HLDS, ImportedModules),
    analysis.write_analysis_files(mmc, !.HLDS, ImportedModules,
        AnalysisInfo, _AnalysisInfo, !IO).

:- pred frontend_pass_by_phases(module_info::in, module_info::out,
    bool::out, dump_info::in, dump_info::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

frontend_pass_by_phases(!HLDS, FoundError, !DumpInfo, !Specs, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),

    maybe_polymorphism(Verbose, Stats, !HLDS, !Specs, !IO),
    maybe_dump_hlds(!.HLDS, 30, "polymorphism", !DumpInfo, !IO),

    maybe_unused_imports(Verbose, Stats, !HLDS, !Specs, !IO),
    maybe_dump_hlds(!.HLDS, 31, "unused_imports", !DumpInfo, !IO),

    % XXX Convert the mode constraints pass to use error_specs.
    maybe_mode_constraints(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 33, "mode_constraints", !DumpInfo, !IO),

    modecheck(Verbose, Stats, !HLDS, FoundModeError, SafeToContinue,
        !Specs, !IO),
    maybe_dump_hlds(!.HLDS, 35, "modecheck", !DumpInfo, !IO),

    (
        SafeToContinue = modes_unsafe_to_continue,
        FoundError = yes
    ;
        SafeToContinue = modes_safe_to_continue,
        detect_switches(Verbose, Stats, !HLDS, !IO),
        maybe_dump_hlds(!.HLDS, 40, "switch_detect", !DumpInfo, !IO),

        detect_cse(Verbose, Stats, !HLDS, !IO),
        maybe_dump_hlds(!.HLDS, 45, "cse", !DumpInfo, !IO),

        check_determinism(Verbose, Stats, !HLDS, !Specs, !IO),
        maybe_dump_hlds(!.HLDS, 50, "determinism", !DumpInfo, !IO),

        check_unique_modes(Verbose, Stats, !HLDS, FoundUniqError, !Specs, !IO),
        maybe_dump_hlds(!.HLDS, 55, "unique_modes", !DumpInfo, !IO),

        check_stratification(Verbose, Stats, !HLDS, FoundStratError,
            !Specs, !IO),
        maybe_dump_hlds(!.HLDS, 60, "stratification", !DumpInfo, !IO),

        process_try_goals(Verbose, Stats, !HLDS, FoundTryError, !Specs, !IO),
        maybe_dump_hlds(!.HLDS, 62, "try", !DumpInfo, !IO),

        maybe_simplify(yes, frontend, Verbose, Stats, !HLDS, !Specs, !IO),
        maybe_dump_hlds(!.HLDS, 65, "frontend_simplify", !DumpInfo, !IO),

        % Work out whether we encountered any errors.
        module_info_get_num_errors(!.HLDS, NumErrors),
        io.get_exit_status(ExitStatus, !IO),
        (
            FoundModeError = no,
            FoundUniqError = no,
            FoundStratError = no,
            FoundTryError = no,
            NumErrors = 0,
            % Strictly speaking, we shouldn't need to check the exit status.
            % But the values returned for FoundModeError etc. aren't always
            % correct.
            ExitStatus = 0
        ->
            FoundError = no
        ;
            FoundError = yes
        )
    ),
    maybe_dump_hlds(!.HLDS, 99, "front_end", !DumpInfo, !IO).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- pred middle_pass(module_name::in, module_info::in, module_info::out,
    dump_info::in, dump_info::out, io::di, io::uo) is det.

middle_pass(ModuleName, !HLDS, !DumpInfo, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),

    maybe_read_experimental_complexity_file(!HLDS, !IO),

    tabling(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 105, "tabling", !DumpInfo, !IO),

    process_lambdas(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 110, "lambda", !DumpInfo, !IO),

    process_stms(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 113, "stm", !DumpInfo, !IO),

    expand_equiv_types_hlds(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 115, "equiv_types", !DumpInfo, !IO),

    maybe_closure_analysis(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 117, "closure_analysis", !DumpInfo, !IO),

    % Uncomment the following code to check that unique mode analysis works
    % after simplification has been run. Currently it does not because common.m
    % does not preserve unique mode correctness (this test fails on about
    % five modules in the compiler and library). It is important that unique
    % mode analysis work most of the time after optimizations because
    % deforestation reruns it.

    % check_unique_modes(Verbose, Stats, !HLDS,
    %   FoundUniqError, !IO),
    % ( FoundUniqError = yes ->
    %   error("unique modes failed")
    % ;
    %   true
    % ),

    % Exception analysis and termination analysis need to come before any
    % optimization passes that could benefit from the information that
    % they provide.

    maybe_exception_analysis(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 118, "exception_analysis", !DumpInfo, !IO),

    maybe_termination(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 120, "termination", !DumpInfo, !IO),

    maybe_termination2(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 121, "termination2", !DumpInfo, !IO),

    maybe_type_ctor_infos(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 125, "type_ctor_infos", !DumpInfo, !IO),

    % warn_dead_procs must come after type_ctor_infos, so that it handles
    % unification & comparison procedures correctly, but it must also come
    % before optimizations such as higher-order specialization and inlining,
    % which can make the original code for a procedure dead by
    % inlining/specializing all uses of it.
    maybe_warn_dead_procs(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 130, "warn_dead_procs", !DumpInfo, !IO),

    maybe_bytecodes(!.HLDS, ModuleName, Verbose, Stats, !DumpInfo, !IO),
    % stage number 31 is used by maybe_bytecodes

    maybe_untuple_arguments(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 133, "untupling", !DumpInfo, !IO),

    maybe_tuple_arguments(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 134, "tupling", !DumpInfo, !IO),

    maybe_higher_order(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 135, "higher_order", !DumpInfo, !IO),

    maybe_ssdb(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 137, "ssdb", !DumpInfo, !IO),

    maybe_implicit_parallelism(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 139, "implicit_parallelism", !DumpInfo, !IO),

    maybe_introduce_accumulators(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 140, "accum", !DumpInfo, !IO),

    maybe_do_inlining(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 145, "inlining", !DumpInfo, !IO),

    % Hoisting loop invariants first invokes pass 148, "mark_static".
    % "mark_static" is also run at stage 420.
    maybe_loop_inv(Verbose, Stats, !HLDS, !DumpInfo, !IO),
    maybe_dump_hlds(!.HLDS, 150, "loop_inv", !DumpInfo, !IO),

    maybe_deforestation(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 155, "deforestation", !DumpInfo, !IO),

    maybe_delay_construct(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 160, "delay_construct", !DumpInfo, !IO),

    maybe_structure_sharing_analysis(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 162, "structure_sharing", !DumpInfo, !IO),

    maybe_structure_reuse_analysis(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 163, "structure_reuse", !DumpInfo, !IO),

    maybe_unused_args(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 165, "unused_args", !DumpInfo, !IO),

    maybe_analyse_trail_usage(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 167, "trail_usage", !DumpInfo, !IO),

    maybe_unneeded_code(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 170, "unneeded_code", !DumpInfo, !IO),

    maybe_lco(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 175, "lco", !DumpInfo, !IO),

    maybe_analyse_mm_tabling(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 185, "mm_tabling_analysis", !DumpInfo, !IO),

    maybe_control_granularity(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 200, "granularity", !DumpInfo, !IO),

    maybe_control_distance_granularity(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 201, "distance_granularity", !DumpInfo, !IO),

    maybe_impl_dependent_par_conjs(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 205, "dependent_par_conj", !DumpInfo, !IO),

    % If we are compiling in a deep profiling grade then now rerun simplify.
    % The reason for doing this now is that we want to take advantage of any
    % opportunities the other optimizations have provided for constant
    % propagation and we cannot do that once the term-size profiling or deep
    % profiling transformations have been applied.
    maybe_simplify(no, pre_prof_transforms, Verbose, Stats, !HLDS,
        [], SimplifySpecs, !IO),
    expect(unify(contains_errors(Globals, SimplifySpecs), no), this_file,
        "middle_pass: simplify has errors"),
    maybe_dump_hlds(!.HLDS, 215, "pre_prof_transforms_simplify", !DumpInfo,
        !IO),

    % The term size profiling transformation should be after all
    % transformations that construct terms of non-zero size. (Deep profiling
    % does not construct non-zero size terms.)
    maybe_term_size_prof(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 220, "term_size_prof", !DumpInfo, !IO),

    % The deep profiling transformation should be done late in the piece
    % since it munges the code a fair amount and introduces strange
    % disjunctions that might confuse other hlds->hlds transformations.
    maybe_deep_profiling(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 225, "deep_profiling", !DumpInfo, !IO),

    % Experimental complexity transformation should be done late in the
    % piece for the same reason as deep profiling. At the moment, they are
    % exclusive.
    maybe_experimental_complexity(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 230, "complexity", !DumpInfo, !IO),

    % XXX This may be moved to later.
    maybe_region_analysis(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 240, "region_analysis", !DumpInfo, !IO),

    maybe_eliminate_dead_procs(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 250, "dead_procs", !DumpInfo, !IO),

    maybe_dump_hlds(!.HLDS, 299, "middle_pass", !DumpInfo, !IO).

%-----------------------------------------------------------------------------%

:- pred backend_pass(module_info::in, module_info::out,
    global_data::out, list(c_procedure)::out, dump_info::in, dump_info::out,
    io::di, io::uo) is det.

backend_pass(!HLDS, !:GlobalData, LLDS, !DumpInfo, !IO) :-
    module_info_get_name(!.HLDS, ModuleName),
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, unboxed_float, OptUnboxFloat),
    globals.lookup_bool_option(Globals, common_data, DoCommonData),
    (
        OptUnboxFloat = yes,
        UnboxFloats = have_unboxed_floats
    ;
        OptUnboxFloat = no,
        UnboxFloats = do_not_have_unboxed_floats
    ),
    StaticCellInfo0 = init_static_cell_info(ModuleName, UnboxFloats,
        DoCommonData),
    global_data_init(StaticCellInfo0, !:GlobalData),

    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),

    % map_args_to_regs affects the interface to a predicate,
    % so it must be done in one phase immediately before code generation

    map_args_to_regs(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 305, "args_to_regs", !DumpInfo, !IO),

    globals.lookup_bool_option(Globals, trad_passes, TradPasses),
    add_all_tabling_info_structs(!.HLDS, !GlobalData),
    (
        TradPasses = no,
        backend_pass_by_phases(!HLDS, !GlobalData, LLDS, !DumpInfo, !IO)
    ;
        TradPasses = yes,
        backend_pass_by_preds(!HLDS, !GlobalData, LLDS, !IO)
    ).

%-----------------------------------------------------------------------------%

:- pred backend_pass_by_phases(module_info::in, module_info::out,
    global_data::in, global_data::out, list(c_procedure)::out,
    dump_info::in, dump_info::out, io::di, io::uo) is det.

backend_pass_by_phases(!HLDS, !GlobalData, LLDS, !DumpInfo, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),

    maybe_saved_vars(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 310, "saved_vars_const", !DumpInfo, !IO),

    maybe_stack_opt(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 315, "saved_vars_cell", !DumpInfo, !IO),

    maybe_followcode(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 320, "followcode", !DumpInfo, !IO),

    maybe_simplify(no, ll_backend, Verbose, Stats, !HLDS,
        [], SimplifySpecs, !IO),
    expect(unify(contains_errors(Globals, SimplifySpecs), no), this_file,
        "backend_pass_by_phases: simplify has errors"),
    maybe_dump_hlds(!.HLDS, 325, "ll_backend_simplify", !DumpInfo, !IO),

    compute_liveness(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 330, "liveness", !DumpInfo, !IO),

    maybe_mark_tail_rec_calls(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 332, "mark_debug_tailrec_calls", !DumpInfo, !IO),

    compute_stack_vars(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 335, "stackvars", !DumpInfo, !IO),

    allocate_store_map(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 340, "store_map", !DumpInfo, !IO),

    maybe_goal_paths(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 345, "precodegen", !DumpInfo, !IO),

    generate_code_for_module(!.HLDS, Verbose, Stats, !GlobalData, LLDS1, !IO),

    maybe_generate_stack_layouts(!.HLDS, LLDS1, Verbose, Stats, !GlobalData,
        !IO),
    % maybe_dump_global_data(!.GlobalData, !IO),

    maybe_do_optimize(!.HLDS, !.GlobalData, Verbose, Stats, LLDS1, LLDS, !IO).

:- pred backend_pass_by_preds(module_info::in, module_info::out,
    global_data::in, global_data::out, list(c_procedure)::out,
    io::di, io::uo) is det.

backend_pass_by_preds(!HLDS, !GlobalData, LLDS, !IO) :-
    module_info_predids(PredIds, !HLDS),
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, optimize_proc_dups, ProcDups),
    (
        ProcDups = no,
        OrderedPredIds = PredIds,
        MaybeDupProcMap = no
    ;
        ProcDups = yes,
        dependency_graph.build_pred_dependency_graph(!.HLDS, PredIds,
            do_not_include_imported, DepInfo),
        hlds_dependency_info_get_dependency_ordering(DepInfo, PredSCCs),
        list.condense(PredSCCs, OrderedPredIds),
        MaybeDupProcMap = yes(map.init)
    ),
    backend_pass_by_preds_2(OrderedPredIds, !HLDS, !GlobalData,
        MaybeDupProcMap, [], RevCodes, !IO),
    list.reverse(RevCodes, Codes),
    list.condense(Codes, LLDS).

:- pred backend_pass_by_preds_2(list(pred_id)::in,
    module_info::in, module_info::out, global_data::in, global_data::out,
    maybe(map(mdbcomp.prim_data.proc_label, mdbcomp.prim_data.proc_label))::in,
    list(list(c_procedure))::in, list(list(c_procedure))::out, io::di, io::uo)
    is det.

backend_pass_by_preds_2([], !HLDS, !GlobalData, _, !RevCodes, !IO).
backend_pass_by_preds_2([PredId | PredIds], !HLDS,
        !GlobalData, !.MaybeDupProcMap, !RevCodes, !IO) :-
    module_info_preds(!.HLDS, PredTable),
    map.lookup(PredTable, PredId, PredInfo),
    ProcIds = pred_info_non_imported_procids(PredInfo),
    (
        ProcIds = [],
        ProcList = []
    ;
        ProcIds = [_ | _],
        module_info_get_globals(!.HLDS, Globals0),
        globals.lookup_bool_option(Globals0, verbose, Verbose),
        (
            Verbose = yes,
            io.write_string("% Generating code for ", !IO),
            hlds_out.write_pred_id(!.HLDS, PredId, !IO),
            io.write_string("\n", !IO)
        ;
            Verbose = no
        ),
        (
            PredModule = pred_info_module(PredInfo),
            PredName = pred_info_name(PredInfo),
            PredArity = pred_info_orig_arity(PredInfo),
            no_type_info_builtin(PredModule, PredName, PredArity)
        ->
            % These predicates should never be traced, since they do not obey
            % typeinfo_liveness. Since they may be opt_imported into other
            % modules, we must switch off the tracing of such preds on a
            % pred-by-pred basis; module-by-module wouldn't work.
            globals.get_trace_level(Globals0, TraceLevel),
            globals.set_trace_level_none(Globals0, Globals1),
            module_info_set_globals(Globals1, !HLDS),
            copy(Globals1, Globals1Unique),
            globals.io_set_globals(Globals1Unique, !IO),
            backend_pass_by_preds_3(ProcIds, PredId, PredInfo, !HLDS,
                !GlobalData, IdProcList, !IO),
            module_info_get_globals(!.HLDS, Globals2),
            globals.set_trace_level(TraceLevel, Globals2, Globals),
            module_info_set_globals(Globals, !HLDS),
            copy(Globals, GlobalsUnique),
            globals.io_set_globals(GlobalsUnique, !IO)
        ;
            backend_pass_by_preds_3(ProcIds, PredId, PredInfo, !HLDS,
                !GlobalData, IdProcList, !IO)
        ),
        (
            !.MaybeDupProcMap = no,
            assoc_list.values(IdProcList, ProcList)
        ;
            !.MaybeDupProcMap = yes(DupProcMap0),
            eliminate_duplicate_procs(IdProcList, ProcList,
                DupProcMap0, DupProcMap),
            !:MaybeDupProcMap = yes(DupProcMap)
        )
    ),
    !:RevCodes = [ProcList | !.RevCodes],
    backend_pass_by_preds_2(PredIds, !HLDS, !GlobalData, !.MaybeDupProcMap,
        !RevCodes, !IO).

:- pred backend_pass_by_preds_3(list(proc_id)::in, pred_id::in, pred_info::in,
    module_info::in, module_info::out, global_data::in, global_data::out,
    assoc_list(mdbcomp.prim_data.proc_label, c_procedure)::out,
    io::di, io::uo) is det.

backend_pass_by_preds_3([], _, _, !HLDS, !GlobalData, [], !IO).
backend_pass_by_preds_3([ProcId | ProcIds], PredId, PredInfo, !HLDS,
        !GlobalData, [ProcLabel - Proc | Procs], !IO) :-
    ProcLabel = make_proc_label(!.HLDS, PredId, ProcId),
    pred_info_get_procedures(PredInfo, ProcTable),
    map.lookup(ProcTable, ProcId, ProcInfo),
    backend_pass_by_preds_4(PredInfo, ProcInfo, _, ProcId, PredId, !HLDS,
        !GlobalData, Proc, !IO),
    backend_pass_by_preds_3(ProcIds, PredId, PredInfo, !HLDS, !GlobalData,
        Procs, !IO).

:- pred backend_pass_by_preds_4(pred_info::in, proc_info::in, proc_info::out,
    proc_id::in, pred_id::in, module_info::in, module_info::out,
    global_data::in, global_data::out, c_procedure::out, io::di, io::uo)
    is det.

backend_pass_by_preds_4(PredInfo, !ProcInfo, ProcId, PredId, !HLDS,
        !GlobalData, ProcCode, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, optimize_saved_vars_const,
        SavedVarsConst),
    (
        SavedVarsConst = yes,
        saved_vars_proc(PredId, ProcId, !ProcInfo, !HLDS, !IO)
    ;
        SavedVarsConst = no
    ),
    globals.lookup_bool_option(Globals, optimize_saved_vars_cell,
        SavedVarsCell),
    (
        SavedVarsCell = yes,
        stack_opt_cell(PredId, ProcId, !ProcInfo, !HLDS, !IO)
    ;
        SavedVarsCell = no
    ),
    globals.lookup_bool_option(Globals, follow_code, FollowCode),
    (
        FollowCode = yes,
        move_follow_code_in_proc(PredId, ProcId, PredInfo, !ProcInfo, !HLDS)
    ;
        FollowCode = no
    ),
    find_simplifications(no, Globals, Simplifications0),
    SimpList0 = simplifications_to_list(Simplifications0),

    globals.lookup_bool_option(Globals, constant_propagation, ConstProp),
    globals.lookup_bool_option(Globals, profile_deep, DeepProf),
    globals.lookup_bool_option(Globals, record_term_sizes_as_words, TSWProf),
    globals.lookup_bool_option(Globals, record_term_sizes_as_cells, TSCProf),
    ProfTrans = bool.or_list([DeepProf, TSWProf, TSCProf]),

    % Don't run constant propagation if any of the profiling
    % transformations has been applied.
    %
    % NOTE: Any changes here may also need to be made to
    % mercury_compile.simplify.

    (
        ConstProp = yes,
        ProfTrans = no
    ->
        list.cons(simp_constant_prop, SimpList0, SimpList1)
    ;
        SimpList1 = list.delete_all(SimpList0, simp_constant_prop)
    ),

    SimpList = [simp_do_once, simp_elim_removable_scopes | SimpList1],
    Simplifications = list_to_simplifications(SimpList),
    write_proc_progress_message("% Simplifying ", PredId, ProcId,
        !.HLDS, !IO),
    simplify_proc(Simplifications, PredId, ProcId, !HLDS, !ProcInfo),
    write_proc_progress_message("% Computing liveness in ", PredId, ProcId,
        !.HLDS, !IO),
    detect_liveness_proc(PredId, ProcId, !.HLDS, !ProcInfo, !IO),
    globals.lookup_bool_option(Globals, exec_trace_tail_rec, ExecTraceTailRec),
    (
        ExecTraceTailRec = yes,
        write_proc_progress_message(
            "% Marking directly tail recursive calls in ", PredId, ProcId,
            !.HLDS, !IO),
        mark_tail_calls(feature_debug_tail_rec_call, PredId, ProcId,
            !.HLDS, PredInfo, !ProcInfo)
    ;
        ExecTraceTailRec = no
    ),
    write_proc_progress_message("% Allocating stack slots in ", PredId,
        ProcId, !.HLDS, !IO),
    allocate_stack_slots_in_proc(PredId, ProcId, !.HLDS, !ProcInfo, !IO),
    write_proc_progress_message(
        "% Allocating storage locations for live vars in ",
        PredId, ProcId, !.HLDS, !IO),
    allocate_store_maps(final_allocation, PredId, !.HLDS, !ProcInfo),
    globals.io_get_trace_level(TraceLevel, !IO),
    ( given_trace_level_is_none(TraceLevel) = no ->
        write_proc_progress_message("% Calculating goal paths in ",
            PredId, ProcId, !.HLDS, !IO),
        fill_goal_path_slots(!.HLDS, !ProcInfo)
    ;
        true
    ),
    write_proc_progress_message("% Generating low-level (LLDS) code for ",
        PredId, ProcId, !.HLDS, !IO),
    generate_proc_code(PredInfo, !.ProcInfo, PredId, ProcId, !.HLDS,
        !GlobalData, ProcCode0),
    globals.lookup_bool_option(Globals, optimize, Optimize),
    (
        Optimize = yes,
        optimize_proc(!.GlobalData, ProcCode0, ProcCode, !IO)
    ;
        Optimize = no,
        ProcCode = ProcCode0
    ),
    PredProcId = ProcCode ^ cproc_id,
    Instructions = ProcCode ^ cproc_code,
    write_proc_progress_message(
        "% Generating call continuation information for ",
        PredId, ProcId, !.HLDS, !IO),
    continuation_info.maybe_process_proc_llds(Instructions, PredProcId,
        !.HLDS, !GlobalData).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- pred puritycheck(bool::in, bool::in, module_info::in, module_info::out,
    bool::in, bool::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

puritycheck(Verbose, Stats, !HLDS, FoundTypeError, FoundPostTypecheckError,
        !Specs, !IO) :-
    puritycheck_module(FoundTypeError, FoundPostTypecheckError, !HLDS,
        [], PuritySpecs),
    !:Specs = PuritySpecs ++ !.Specs,
    module_info_get_globals(!.HLDS, Globals),
    PurityErrors = contains_errors(Globals, PuritySpecs),
    maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
    (
        PurityErrors = yes,
        maybe_write_string(Verbose,
            "% Program contains purity error(s).\n", !IO)
    ;
        PurityErrors = no,
        maybe_write_string(Verbose,
            "% Program is purity-correct.\n", !IO)
    ),
    maybe_report_stats(Stats, !IO).

:- pred modecheck(bool::in, bool::in, module_info::in, module_info::out,
    bool::out, modes_safe_to_continue::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

modecheck(Verbose, Stats, !HLDS, FoundModeError, SafeToContinue,
        !Specs, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
    globals.lookup_bool_option(Globals, benchmark_modes, BenchmarkModes),
    (
        BenchmarkModes = yes,
        globals.lookup_int_option(Globals, benchmark_modes_repeat, Repeats),
        promise_equivalent_solutions [!:HLDS, SafeToContinue, ModeSpecs, Time] (
            benchmark_det(modecheck_module,
                !.HLDS, {!:HLDS, SafeToContinue, ModeSpecs}, Repeats, Time)
        ),
        io.format("BENCHMARK modecheck, %d repeats: %d ms\n",
            [i(Repeats), i(Time)], !IO)
    ;
        BenchmarkModes = no,
        modecheck_module(!.HLDS, {!:HLDS, SafeToContinue, ModeSpecs})
    ),
    !:Specs = ModeSpecs ++ !.Specs,
    FoundModeError = contains_errors(Globals, ModeSpecs),
    (
        FoundModeError = no,
        maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
        maybe_write_string(Verbose, "% Program is mode-correct.\n", !IO)
    ;
        FoundModeError = yes,
        maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
        maybe_write_string(Verbose, "% Program contains mode error(s).\n", !IO)
    ),
    maybe_report_stats(Stats, !IO).

:- pred maybe_mode_constraints(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_mode_constraints(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, mode_constraints, ModeConstraints),
    (
        ModeConstraints = yes,
        maybe_write_string(Verbose, "% Dumping mode constraints...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        maybe_benchmark_modes(mode_constraints.process_module,
            "mode-constraints", !HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        ModeConstraints = no
    ).

:- pred maybe_benchmark_modes(
    pred(module_info, module_info, io, io)::in(pred(in, out, di, uo) is det),
    string::in, module_info::in, module_info::out, io::di, io::uo) is det.

maybe_benchmark_modes(Pred, Stage, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, benchmark_modes, BenchmarkModes),
    (
        BenchmarkModes = yes,
        globals.lookup_int_option(Globals, benchmark_modes_repeat, Repeats),
        io.format("%s %d ", [s(Stage), i(Repeats)], !IO),
        promise_equivalent_solutions [!:HLDS, Time, !:IO] (
            do_io_benchmark(Pred, Repeats, !.HLDS, !:HLDS - Time, !IO)
        ),
        io.format("%d ms\n", [i(Time)], !IO)
    ;
        BenchmarkModes = no,
        Pred(!HLDS, !IO)
    ).

:- pred do_io_benchmark(pred(T1, T2, io, io)::in(pred(in, out, di, uo) is det),
    int::in, T1::in, pair(T2, int)::out, io::di, io::uo) is cc_multi.

do_io_benchmark(Pred, Repeats, A0, A - Time, !IO) :-
    benchmark_det_io(Pred, A0, A, !IO, Repeats, Time).

:- pred detect_switches(bool::in, bool::in, module_info::in, module_info::out,
    io::di, io::uo) is det.

detect_switches(Verbose, Stats, !HLDS, !IO) :-
    maybe_write_string(Verbose, "% Detecting switches...\n", !IO),
    maybe_flush_output(Verbose, !IO),
    detect_switches_in_module(!HLDS),
    maybe_write_string(Verbose, "% done.\n", !IO),
    maybe_report_stats(Stats, !IO).

:- pred detect_cse(bool::in, bool::in, module_info::in, module_info::out,
    io::di, io::uo) is det.

detect_cse(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, common_goal, CommonGoal),
    (
        CommonGoal = yes,
        maybe_write_string(Verbose,
            "% Detecting common deconstructions...\n", !IO),
        detect_cse_in_module(!HLDS),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        CommonGoal = no
    ).

:- pred check_determinism(bool::in, bool::in,
    module_info::in, module_info::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

check_determinism(Verbose, Stats, !HLDS, !Specs, !IO) :-
    determinism_pass(!HLDS, DetismSpecs),
    !:Specs = DetismSpecs ++ !.Specs,
    module_info_get_globals(!.HLDS, Globals),
    FoundError = contains_errors(Globals, DetismSpecs),
    maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
    (
        FoundError = yes,
        maybe_write_string(Verbose,
            "% Program contains determinism error(s).\n", !IO)
    ;
        FoundError = no,
        maybe_write_string(Verbose, "% Program is determinism-correct.\n", !IO)
    ),
    maybe_report_stats(Stats, !IO).

:- pred maybe_analyse_mm_tabling(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_analyse_mm_tabling(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, analyse_mm_tabling, TablingAnalysis),
    (
        TablingAnalysis = yes,
        maybe_write_string(Verbose, "% Analysing minimal model tabling...\n",
            !IO),
        analyse_mm_tabling_in_module(!HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        TablingAnalysis = no
    ).

:- pred maybe_closure_analysis(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_closure_analysis(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, analyse_closures, ClosureAnalysis),
    (
        ClosureAnalysis = yes,
        maybe_write_string(Verbose, "% Analysing closures...\n", !IO),
        closure_analysis.process_module(!HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        ClosureAnalysis = no
    ).

:- pred mercury_compile.maybe_exception_analysis(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

mercury_compile.maybe_exception_analysis(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, analyse_exceptions, ExceptionAnalysis),
    (
        ExceptionAnalysis = yes,
        maybe_write_string(Verbose, "% Analysing exceptions...\n", !IO),
        analyse_exceptions_in_module(!HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        ExceptionAnalysis = no
    ).

:- pred maybe_termination(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_termination(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, polymorphism, Polymorphism),
    globals.lookup_bool_option(Globals, termination, Termination),
    % Termination analysis requires polymorphism to be run,
    % since it does not handle complex unification
    (
        Polymorphism = yes,
        Termination = yes
    ->
        maybe_write_string(Verbose, "% Detecting termination...\n", !IO),
        analyse_termination_in_module(!HLDS, !IO),
        maybe_write_string(Verbose, "% Termination checking done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        true
    ).

:- pred maybe_termination2(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_termination2(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, polymorphism, Polymorphism),
    globals.lookup_bool_option(Globals, termination2, Termination2),
    % Termination analysis requires polymorphism to be run,
    % as termination analysis does not handle complex unification.
    (
        Polymorphism = yes,
        Termination2 = yes
    ->
        maybe_write_string(Verbose, "% Detecting termination 2...\n", !IO),
        term_constr_main.pass(!HLDS, !IO),
        maybe_write_string(Verbose, "% Termination 2 checking done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        true
    ).

:- pred maybe_ssdb(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_ssdb(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, source_to_source_debug, SSDB),
    globals.lookup_bool_option(Globals, force_disable_ssdebug,
        ForceDisableSSDB),
    (
        SSDB = yes,
        ForceDisableSSDB = no
    ->
        maybe_write_string(Verbose,
            "% Apply debugging source to source transformation ...\n", !IO),
        process_all_nonimported_procs(
            update_module_io(ssdebug.process_proc), !HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO),

        % XXX Must be remove to manage the determinism by hand
        % XXX zs: what does the above comment mean?
        determinism_pass(!HLDS, _Specs)
    ;
        true
    ).

:- pred maybe_analyse_trail_usage(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_analyse_trail_usage(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, analyse_trail_usage, AnalyseTrail),
    (
        AnalyseTrail = yes,
        maybe_write_string(Verbose, "% Analysing trail usage...\n", !IO),
        analyse_trail_usage(!HLDS, !IO),
        maybe_write_string(Verbose, "% Trail usage analysis done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        AnalyseTrail = no
    ).

:- pred check_unique_modes(bool::in, bool::in,
    module_info::in, module_info::out, bool::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

check_unique_modes(Verbose, Stats, !HLDS, FoundError, !Specs, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
    maybe_write_string(Verbose,
        "% Checking for backtracking over unique modes...\n", !IO),
    unique_modes_check_module(!HLDS, UniqueSpecs),
    !:Specs = UniqueSpecs ++ !.Specs,
    FoundError = contains_errors(Globals, UniqueSpecs),
    maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
    (
        FoundError = yes,
        maybe_write_string(Verbose,
            "% Program contains unique mode error(s).\n", !IO)
    ;
        FoundError = no,
        maybe_write_string(Verbose, "% Program is unique-mode-correct.\n", !IO)
    ),
    maybe_report_stats(Stats, !IO).

:- pred check_stratification(bool::in, bool::in,
    module_info::in, module_info::out, bool::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

check_stratification(Verbose, Stats, !HLDS, FoundError, !Specs, !IO) :-
    module_info_get_stratified_preds(!.HLDS, StratifiedPreds),
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, warn_non_stratification, Warn),
    (
        ( \+ set.empty(StratifiedPreds)
        ; Warn = yes
        )
    ->
        maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
        maybe_write_string(Verbose,
            "% Checking stratification...\n", !IO),
        check_stratification(!HLDS, [], StratifySpecs),
        !:Specs = StratifySpecs ++ !.Specs,
        FoundError = contains_errors(Globals, StratifySpecs),
        maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
        (
            FoundError = yes,
            maybe_write_string(Verbose,
                "% Program contains stratification error(s).\n", !IO)
        ;
            FoundError = no,
            maybe_write_string(Verbose, "% done.\n", !IO)
        ),
        maybe_report_stats(Stats, !IO)
    ;
        FoundError = no
    ).

:- pred process_try_goals(bool::in, bool::in,
    module_info::in, module_info::out, bool::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

process_try_goals(Verbose, Stats, !HLDS, FoundError, !Specs, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
    maybe_write_string(Verbose, "% Transforming try goals...\n", !IO),
    expand_try_goals_in_module(!HLDS, [], TryExpandSpecs),
    !:Specs = TryExpandSpecs ++ !.Specs,
    FoundError = contains_errors(Globals, TryExpandSpecs),
    maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
    (
        FoundError = yes,
        maybe_write_string(Verbose, "% Program contains error(s).\n", !IO)
    ;
        FoundError = no,
        maybe_write_string(Verbose, "% done.\n", !IO)
    ),
    maybe_report_stats(Stats, !IO).

:- pred maybe_warn_dead_procs(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_warn_dead_procs(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, warn_dead_procs, WarnDead),
    (
        WarnDead = yes,
        maybe_write_string(Verbose, "% Warning about dead procedures...\n",
            !IO),
        maybe_flush_output(Verbose, !IO),
        dead_proc_elim(do_not_elim_opt_imported, !.HLDS, _HLDS1, Specs),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO),
        write_error_specs(Specs, Globals, 0, _NumWarnings, 0, NumErrors, !IO),
        module_info_incr_num_errors(NumErrors, !HLDS)

%       XXX The warning pass also does all the work of optimizing
%       away the dead procedures.  If we're optimizing, then
%       it would be nice if we could keep the HLDS that results.
%       However, because this pass gets run before type
%       specialization, dead code elimination at this point
%       incorrectly optimizes away procedures created for
%       `pragma type_spec' declarations.  So we can't use the
%       code below.  Instead we need to keep original HLDS.
%
%       %%% globals.io_lookup_bool_option(optimize_dead_procs,
%       %%%     OptimizeDead, !IO),
%       %%% ( OptimizeDead = yes ->
%       %%%     !:HLDS = HLDS1
%       %%% ;
%       %%%     true
%       %%% )
    ;
        WarnDead = no
    ).

    % This type indicates what stage of compilation we are running
    % the simplification pass at.  The exact simplifications we run
    % will depend upon this.
    %
:- type simplify_pass
    --->    frontend
            % Immediately after the frontend passes.

    ;       post_untuple
            % After the untupling transformation has been applied.

    ;       pre_prof_transforms
            % If deep/term-size profiling is enabled then immediately
            % before the source-to-source transformations that
            % implement them.

    ;       ml_backend
            % The first stage of MLDS code generation.

    ;       ll_backend.
            % The first stage of LLDS code generation.

    % This predicate set up and maybe run the simplification pass.
    %
:- pred maybe_simplify(bool::in, simplify_pass::in, bool::in, bool::in,
    module_info::in, module_info::out,
    list(error_spec)::in, list(error_spec)::out,
    io::di, io::uo) is det.

maybe_simplify(Warn, SimplifyPass, Verbose, Stats, !HLDS, !Specs, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    some [!SimpList] (
        simplify.find_simplifications(Warn, Globals, Simplifications0),
        !:SimpList = simplifications_to_list(Simplifications0),
        (
            SimplifyPass = frontend,
            list.cons(simp_after_front_end, !SimpList)
        ;
            SimplifyPass = post_untuple,
            list.cons(simp_do_once, !SimpList)
        ;
            SimplifyPass = pre_prof_transforms,

            % We run the simplify pass before the profiling transformations,
            % only if those transformations are being applied - otherwise we
            % just leave things to the backend simplification passes.

            globals.lookup_bool_option(Globals, pre_prof_transforms_simplify,
                Simplify215),
            (
                Simplify215 = yes,
                list.cons(simp_do_once, !SimpList)
            ;
                Simplify215 = no,
                !:SimpList = []
            )
        ;
            SimplifyPass = ml_backend,
            list.cons(simp_do_once, !SimpList)
        ;
            SimplifyPass = ll_backend,
            % Don't perform constant propagation if one of the
            % profiling transformations has been applied.
            %
            % NOTE: Any changes made here may also need to be made
            % to the relevant parts of backend_pass_by_preds_4/12.
            globals.lookup_bool_option(Globals, constant_propagation,
                ConstProp),
            globals.lookup_bool_option(Globals, profile_deep, DeepProf),
            globals.lookup_bool_option(Globals, record_term_sizes_as_words,
                TSWProf),
            globals.lookup_bool_option(Globals, record_term_sizes_as_cells,
                TSCProf),
            (
                ConstProp = yes,
                DeepProf = no,
                TSWProf = no,
                TSCProf = no
            ->
                list.cons(simp_constant_prop, !SimpList)
            ;
                !:SimpList = list.delete_all(!.SimpList,
                    simp_constant_prop)
            ),
            list.cons(simp_do_once, !SimpList),
            list.cons(simp_elim_removable_scopes, !SimpList)
        ),
        SimpList = !.SimpList
    ),
    (
        SimpList = [_ | _],

        maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
        maybe_write_string(Verbose, "% Simplifying goals...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        Simplifications = list_to_simplifications(SimpList),
        process_all_nonimported_procs_errors(
            update_pred_error(simplify_pred(Simplifications)),
            !HLDS, [], SimplifySpecs, !IO),
        (
            SimplifyPass = frontend,
            !:Specs = SimplifySpecs ++ !.Specs,
            maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO)
        ;
            ( SimplifyPass = ll_backend
            ; SimplifyPass = ml_backend
            ; SimplifyPass = post_untuple
            ; SimplifyPass = pre_prof_transforms
            )
        ),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        SimpList = []
    ).

%-----------------------------------------------------------------------------%

:- pred maybe_mark_static_terms(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_mark_static_terms(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, static_ground_cells, SGCells),
    (
        SGCells = yes,
        maybe_write_string(Verbose, "% Marking static ground terms...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        process_all_nonimported_procs(update_proc(mark_static_terms),
            !HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        SGCells = no
    ).

%-----------------------------------------------------------------------------%

:- pred maybe_add_trail_ops(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_add_trail_ops(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, use_trail, UseTrail),
    (
        UseTrail = no,
        EmitTrailOps = no
    ;
        UseTrail = yes,
        globals.lookup_bool_option(Globals, disable_trail_ops,
            DisableTrailOps),
        (
            DisableTrailOps = yes,
            EmitTrailOps = no
        ;
            DisableTrailOps = no,
            EmitTrailOps = yes
        )
    ),
    (
        EmitTrailOps = yes,
        globals.lookup_bool_option(Globals, optimize_trail_usage, OptTrailUse),
        globals.get_target(Globals, Target),
        (
            Target = target_c,
            globals.io_lookup_bool_option(generate_trail_ops_inline,
                GenerateInline, !IO)
        ;
            % XXX Currently, we can only generate trail ops inline for
            % the C backends.
            %
            ( Target = target_il
            ; Target = target_java
            ; Target = target_asm
            ; Target = target_x86_64
            ; Target = target_erlang
            ),
            GenerateInline = no
        ),
        maybe_write_string(Verbose, "% Adding trailing operations...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        process_all_nonimported_procs(
            update_proc(add_trail_ops(OptTrailUse, GenerateInline)),
            !HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        EmitTrailOps = no
    ).

:- pred maybe_add_heap_ops(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_add_heap_ops(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.get_gc_method(Globals, GC),
    globals.lookup_bool_option(Globals, reclaim_heap_on_semidet_failure,
        SemidetReclaim),
    globals.lookup_bool_option(Globals, reclaim_heap_on_nondet_failure,
        NondetReclaim),
    (
        gc_is_conservative(GC) = yes
    ->
        % We can't do heap reclamation with conservative GC.
        true
    ;
        SemidetReclaim = no,
        NondetReclaim = no
    ->
        true
    ;
        SemidetReclaim = yes,
        NondetReclaim = yes
    ->
        maybe_write_string(Verbose,
            "% Adding heap reclamation operations...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        process_all_nonimported_procs(update_proc(add_heap_ops), !HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        Msg = "Sorry, not implemented: `--high-level-code' and just one of " ++
            "`--reclaim-heap-on-semidet-failure' and " ++
            "`--reclaim-heap-on-nondet-failure'. " ++
            "Use `--(no-)reclaim-heap-on-failure' instead.",
        write_error_pieces_plain([words(Msg)], !IO),
        io.set_exit_status(1, !IO)
    ).

%-----------------------------------------------------------------------------%

:- pred maybe_write_dependency_graph(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_write_dependency_graph(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, show_dependency_graph, ShowDepGraph),
    (
        ShowDepGraph = yes,
        maybe_write_string(Verbose, "% Writing dependency graph...", !IO),
        module_info_get_name(!.HLDS, ModuleName),
        module_name_to_file_name(ModuleName, ".dependency_graph",
            do_create_dirs, FileName, !IO),
        io.open_output(FileName, Res, !IO),
        (
            Res = ok(FileStream),
            io.set_output_stream(FileStream, OutputStream, !IO),
            dependency_graph.write_dependency_graph(!HLDS, !IO),
            io.set_output_stream(OutputStream, _, !IO),
            io.close_output(FileStream, !IO),
            maybe_write_string(Verbose, " done.\n", !IO)
        ;
            Res = error(IOError),
            ErrorMsg = "unable to write dependency graph: " ++
                io.error_message(IOError),
            report_error(ErrorMsg, !IO)
        ),
        maybe_report_stats(Stats, !IO)
    ;
        ShowDepGraph = no
    ).

    % Outputs the file <module_name>.prof, which contains the static
    % call graph in terms of label names, if the profiling flag is enabled.
    %
:- pred maybe_output_prof_call_graph(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_output_prof_call_graph(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, profile_calls, ProfileCalls),
    globals.lookup_bool_option(Globals, profile_time, ProfileTime),
    (
        ( ProfileCalls = yes
        ; ProfileTime = yes
        )
    ->
        maybe_write_string(Verbose,
            "% Outputing profiling call graph...", !IO),
        maybe_flush_output(Verbose, !IO),
        module_info_get_name(!.HLDS, ModuleName),
        module_name_to_file_name(ModuleName, ".prof", do_create_dirs,
            ProfFileName, !IO),
        io.open_output(ProfFileName, Res, !IO),
        (
            Res = ok(FileStream),
            io.set_output_stream(FileStream, OutputStream, !IO),
            dependency_graph.write_prof_dependency_graph(!HLDS, !IO),
            io.set_output_stream(OutputStream, _, !IO),
            io.close_output(FileStream, !IO)
        ;
            Res = error(IOError),
            ErrorMsg = "unable to write profiling static call graph: " ++
                io.error_message(IOError),
            report_error(ErrorMsg, !IO)
        ),
        maybe_write_string(Verbose, " done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        true
    ).

%-----------------------------------------------------------------------------%

:- pred tabling(bool::in, bool::in, module_info::in, module_info::out,
    io::di, io::uo) is det.

tabling(Verbose, Stats, !HLDS, !IO) :-
    maybe_write_string(Verbose, "% Transforming tabled predicates...", !IO),
    maybe_flush_output(Verbose, !IO),
    table_gen_process_module(!HLDS, [], Specs),
    maybe_write_string(Verbose, " done.\n", !IO),
    maybe_report_stats(Stats, !IO),
    module_info_get_globals(!.HLDS, Globals),
    write_error_specs(Specs, Globals, 0, _NumWarnings, 0, NumErrors, !IO),
    module_info_incr_num_errors(NumErrors, !HLDS).

%-----------------------------------------------------------------------------%

:- pred process_lambdas(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

process_lambdas(Verbose, Stats, !HLDS, !IO) :-
    maybe_write_string(Verbose, "% Transforming lambda expressions...", !IO),
    maybe_flush_output(Verbose, !IO),
    lambda_process_module(!HLDS),
    maybe_write_string(Verbose, " done.\n", !IO),
    maybe_report_stats(Stats, !IO).

%-----------------------------------------------------------------------------%

:- pred process_stms(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

process_stms(Verbose, Stats, !HLDS, !IO) :-
    maybe_write_string(Verbose, "% Transforming stm expressions...", !IO),
    maybe_flush_output(Verbose, !IO),
    stm_process_module(!HLDS),
    maybe_write_string(Verbose, " done.\n", !IO),
    maybe_report_stats(Stats, !IO).

%-----------------------------------------------------------------------------%

:- pred expand_equiv_types_hlds(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

expand_equiv_types_hlds(Verbose, Stats, !HLDS, !IO) :-
    maybe_write_string(Verbose, "% Fully expanding equivalence types...", !IO),
    maybe_flush_output(Verbose, !IO),
    equiv_type_hlds.replace_in_hlds(!HLDS),
    maybe_write_string(Verbose, " done.\n", !IO),
    maybe_report_stats(Stats, !IO).

%-----------------------------------------------------------------------------%

:- pred subst_implementation_defined_literals(bool::in, bool::in,
    module_info::in, module_info::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

subst_implementation_defined_literals(Verbose, Stats, !HLDS, !Specs, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
    maybe_write_string(Verbose,
        "% Substituting implementation-defined literals...\n", !IO),
    maybe_flush_output(Verbose, !IO),
    subst_impl_defined_literals(!HLDS),
    maybe_write_string(Verbose, "% done.\n", !IO),
    maybe_report_stats(Stats, !IO).

:- pred maybe_polymorphism(bool::in, bool::in,
    module_info::in, module_info::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

maybe_polymorphism(Verbose, Stats, !HLDS, !Specs, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
    globals.lookup_bool_option(Globals, polymorphism, Polymorphism),
    (
        Polymorphism = yes,
        globals.lookup_bool_option(Globals, very_verbose, VeryVerbose),
        (
            VeryVerbose = no,
            maybe_write_string(Verbose,
                "% Transforming polymorphic unifications...", !IO)
        ;
            VeryVerbose = yes,
            maybe_write_string(Verbose,
                "% Transforming polymorphic unifications...\n", !IO)
        ),
        maybe_flush_output(Verbose, !IO),
        polymorphism_process_module(!HLDS),
        (
            VeryVerbose = no,
            maybe_write_string(Verbose, " done.\n", !IO)
        ;
            VeryVerbose = yes,
            maybe_write_string(Verbose, "% done.\n", !IO)
        ),
        maybe_report_stats(Stats, !IO)
    ;
        Polymorphism = no,
        % The --no-polymorphism option really doesn't make much
        % sense anymore, because the polymorphism pass is necessary
        % for the proper mode analysis of code using existential
        % types.
        unexpected(this_file,
            "sorry, `--no-polymorphism' is no longer supported")
    ).

:- pred maybe_unused_imports(bool::in, bool::in,
    module_info::in, module_info::out,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

maybe_unused_imports(Verbose, Stats, !HLDS, !Specs, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, warn_unused_imports,
        WarnUnusedImports),
    (
        WarnUnusedImports = yes,
        maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
        maybe_write_string(Verbose, "% Checking for unused imports...", !IO),
        unused_imports(!.HLDS, UnusedImportSpecs, !IO),
        !:Specs = UnusedImportSpecs ++ !.Specs,
        maybe_write_out_errors(Verbose, Globals, !HLDS, !Specs, !IO),
        maybe_write_string(Verbose, " done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        WarnUnusedImports = no
    ).

:- pred maybe_type_ctor_infos(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_type_ctor_infos(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, type_ctor_info, TypeCtorInfo),
    (
        TypeCtorInfo = yes,
        maybe_write_string(Verbose,
            "% Generating type_ctor_info structures...", !IO),
        maybe_flush_output(Verbose, !IO),
        type_ctor_info.generate_hlds(!HLDS),
        maybe_write_string(Verbose, " done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        TypeCtorInfo = no
    ).

:- pred maybe_bytecodes(module_info::in, module_name::in,
    bool::in, bool::in, dump_info::in, dump_info::out, io::di, io::uo) is det.

maybe_bytecodes(HLDS0, ModuleName, Verbose, Stats, !DumpInfo, !IO) :-
    module_info_get_globals(HLDS0, Globals),
    globals.lookup_bool_option(Globals, generate_bytecode, GenBytecode),
    (
        GenBytecode = yes,
        map_args_to_regs(Verbose, Stats, HLDS0, HLDS1, !IO),
        maybe_dump_hlds(HLDS1, 505, "bytecode_args_to_regs", !DumpInfo, !IO),
        maybe_write_string(Verbose, "% Generating bytecodes...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        bytecode_gen.gen_module(HLDS1, _HLDS2, Bytecode, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO),
        module_name_to_file_name(ModuleName, ".bytedebug", do_create_dirs,
            BytedebugFile, !IO),
        maybe_write_string(Verbose, "% Writing bytecodes to `", !IO),
        maybe_write_string(Verbose, BytedebugFile, !IO),
        maybe_write_string(Verbose, "'...", !IO),
        maybe_flush_output(Verbose, !IO),
        debug_bytecode_file(BytedebugFile, Bytecode, !IO),
        maybe_write_string(Verbose, " done.\n", !IO),
        module_name_to_file_name(ModuleName, ".mbc", do_create_dirs,
            BytecodeFile, !IO),
        maybe_write_string(Verbose, "% Writing bytecodes to `", !IO),
        maybe_write_string(Verbose, BytecodeFile, !IO),
        maybe_write_string(Verbose, "'...", !IO),
        maybe_flush_output(Verbose, !IO),
        output_bytecode_file(BytecodeFile, Bytecode, !IO),
        maybe_write_string(Verbose, " done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        GenBytecode = no
    ).

:- pred maybe_untuple_arguments(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_untuple_arguments(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, untuple, Untuple),
    (
        Untuple = yes,
        maybe_write_string(Verbose, "% Untupling...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        untuple_arguments(!HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_simplify(no, post_untuple, Verbose, Stats, !HLDS,
            [], SimplifySpecs, !IO),
        expect(unify(contains_errors(Globals, SimplifySpecs), no), this_file,
            "maybe_untuple_arguments: simplify has errors"),
        maybe_report_stats(Stats, !IO)
    ;
        Untuple = no
    ).

:- pred maybe_tuple_arguments(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_tuple_arguments(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, tuple, Tuple),
    (
        Tuple = yes,
        maybe_write_string(Verbose, "% Tupling...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        tuple_arguments(!HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        Tuple = no
    ).

:- pred maybe_higher_order(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_higher_order(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, optimize_higher_order, HigherOrder),
    % --type-specialization implies --user-guided-type-specialization.
    globals.lookup_bool_option(Globals, user_guided_type_specialization,
        Types),

    % Always produce the specialized versions for which
    % `:- pragma type_spec' declarations exist, because
    % importing modules might call them.
    module_info_get_type_spec_info(!.HLDS, TypeSpecInfo),
    TypeSpecInfo = type_spec_info(TypeSpecPreds, _, _, _),
    (
        ( HigherOrder = yes
        ; Types = yes
        ; \+ set.empty(TypeSpecPreds)
        )
    ->
        maybe_write_string(Verbose,
            "% Specializing higher-order and polymorphic predicates...\n",
            !IO),
        maybe_flush_output(Verbose, !IO),

        specialize_higher_order(!HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        true
    ).

:- pred maybe_do_inlining(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_do_inlining(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, allow_inlining, Allow),
    globals.lookup_bool_option(Globals, inline_simple, Simple),
    globals.lookup_bool_option(Globals, inline_single_use, SingleUse),
    globals.lookup_int_option(Globals, inline_compound_threshold, Threshold),
    (
        Allow = yes,
        ( Simple = yes
        ; SingleUse = yes
        ; Threshold > 0
        )
    ->
        maybe_write_string(Verbose, "% Inlining...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        inlining(!HLDS),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        true
    ).

:- pred maybe_deforestation(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_deforestation(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, deforestation, Deforest),

    % --constraint-propagation implies --local-constraint-propagation.
    globals.lookup_bool_option(Globals, local_constraint_propagation,
        Constraints),
    (
        ( Deforest = yes
        ; Constraints = yes
        )
    ->
        (
            Deforest = no,
            Constraints = no,
            unexpected(this_file, "maybe_deforestation")
        ;
            Deforest = yes,
            Constraints = yes,
            Msg = "% Deforestation and constraint propagation...\n"
        ;
            Deforest = yes,
            Constraints = no,
            Msg = "% Deforestation...\n"
        ;
            Deforest = no,
            Constraints = yes,
            Msg = "% Constraint propagation...\n"
        ),
        maybe_write_string(Verbose, Msg, !IO),
        maybe_flush_output(Verbose, !IO),
        deforestation(!HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        true
    ).

:- pred maybe_loop_inv(bool::in, bool::in,
    module_info::in, module_info::out, dump_info::in, dump_info::out,
    io::di, io::uo) is det.

maybe_loop_inv(Verbose, Stats, !HLDS, !DumpInfo, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, loop_invariants, LoopInv),
    (
        LoopInv = yes,
        % We run the mark_static pass because we need the construct_how flag
        % to be valid.
        %
        maybe_mark_static_terms(Verbose, Stats, !HLDS, !IO),
        maybe_dump_hlds(!.HLDS, 148, "mark_static", !DumpInfo, !IO),

        maybe_write_string(Verbose, "% Hoisting loop invariants...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        process_all_nonimported_procs(update_module(hoist_loop_invariants),
            !HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        LoopInv = no
    ).

:- pred maybe_delay_construct(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_delay_construct(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, delay_construct, DelayConstruct),
    (
        DelayConstruct = yes,
        maybe_write_string(Verbose,
            "% Delaying construction unifications ...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        process_all_nonimported_procs(update_proc_io(delay_construct_proc),
            !HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        DelayConstruct = no
    ).

:- pred maybe_unused_args(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_unused_args(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, intermod_unused_args, Intermod),
    globals.lookup_bool_option(Globals, optimize_unused_args, Optimize),
    globals.lookup_bool_option(Globals, warn_unused_args, Warn),
    (
        ( Optimize = yes
        ; Warn = yes
        ; Intermod = yes
        )
    ->
        maybe_write_string(Verbose, "% Finding unused arguments ...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        unused_args_process_module(!HLDS, [], Specs, !IO),
        write_error_specs(Specs, Globals, 0, _NumWarnings, 0, NumErrors, !IO),
        module_info_incr_num_errors(NumErrors, !HLDS),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        true
    ).

:- pred maybe_unneeded_code(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_unneeded_code(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, unneeded_code, UnneededCode),
    (
        UnneededCode = yes,
        maybe_write_string(Verbose,
            "% Removing unneeded code from procedure bodies...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        process_all_nonimported_procs(
            update_module_io(unneeded_process_proc_msg), !HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        UnneededCode = no
    ).

:- pred maybe_eliminate_dead_procs(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_eliminate_dead_procs(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, optimize_dead_procs, Dead),
    (
        Dead = yes,
        maybe_write_string(Verbose, "% Eliminating dead procedures...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        % Ignore any warning messages generated.
        dead_proc_elim(elim_opt_imported, !HLDS, _ElimSpecs),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        Dead = no
    ).

:- pred maybe_structure_sharing_analysis(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_structure_sharing_analysis(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, structure_sharing_analysis, Sharing),
    (
        Sharing = yes,
        maybe_write_string(Verbose, "% Structure sharing analysis...\n",
            !IO),
        maybe_flush_output(Verbose, !IO),
        structure_sharing_analysis(!HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        Sharing = no
    ).

:- pred maybe_implicit_parallelism(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_implicit_parallelism(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, implicit_parallelism,
        ImplicitParallelism),
    (
        ImplicitParallelism = yes,
        maybe_write_string(Verbose, "% Applying implicit " ++
            "parallelism...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        apply_implicit_parallelism_transformation(!.HLDS, MaybeHLDS),
        (
            MaybeHLDS = ok(!:HLDS)
        ;
            MaybeHLDS = error(Error),
            io.write_string(Error ++ "\n", !IO),
            io.set_exit_status(1, !IO)
        ),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        % The user hasn't asked for implicit parallelism.
        ImplicitParallelism = no
    ).

:- pred maybe_control_granularity(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_control_granularity(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, parallel, Parallel),
    globals.lookup_bool_option(Globals, highlevel_code, HighLevelCode),
    globals.lookup_bool_option(Globals, control_granularity, Control),
    module_info_get_contains_par_conj(!.HLDS, ContainsParConj),
    (
        % If either of these is false, there is no parallelism to control.
        Parallel = yes,
        ContainsParConj = yes,

        % Our mechanism for granularity control only works for the low level
        % backend.
        HighLevelCode = no,

        % If this is false, then the user hasn't asked for granularity control.
        Control = yes
    ->
        globals.get_target(Globals, Target),
        (
            Target = target_c,
            maybe_write_string(Verbose,
                "% Granularity control transformation...\n", !IO),
            maybe_flush_output(Verbose, !IO),
            control_granularity(!HLDS),
            maybe_write_string(Verbose, "% done.\n", !IO),
            maybe_report_stats(Stats, !IO)
        ;
            ( Target = target_il
            ; Target = target_java
            ; Target = target_asm
            ; Target = target_x86_64
            ; Target = target_erlang
            )
            % Leave the HLDS alone. We cannot implement parallelism,
            % so there is not point in controlling its granularity.
        )
    ;
        true
    ).

:- pred maybe_control_distance_granularity(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_control_distance_granularity(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, parallel, Parallel),
    globals.lookup_bool_option(Globals, highlevel_code, HighLevelCode),
    globals.lookup_int_option(Globals, distance_granularity, Distance),
    module_info_get_contains_par_conj(!.HLDS, ContainsParConj),
    (
        % If either of these is false, there is no parallelism to control.
        Parallel = yes,
        ContainsParConj = yes,

        % Our mechanism for granularity control only works for the low level
        % backend.
        HighLevelCode = no,

        % Distance must be greater than 0 to apply the distance granularity
        % transformation.
        Distance > 0
    ->
        globals.get_target(Globals, Target),
        (
            Target = target_c,
            maybe_write_string(Verbose,
                "% Distance granularity transformation...\n", !IO),
            maybe_flush_output(Verbose, !IO),
            control_distance_granularity(!HLDS, Distance),
            maybe_write_string(Verbose, "% done.\n", !IO),
            maybe_report_stats(Stats, !IO)
        ;
            ( Target = target_il
            ; Target = target_java
            ; Target = target_asm
            ; Target = target_x86_64
            ; Target = target_erlang
            )
            % Leave the HLDS alone. We cannot implement parallelism,
            % so there is not point in controlling its granularity.
        )
    ;
        true
    ).

:- pred maybe_impl_dependent_par_conjs(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_impl_dependent_par_conjs(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_contains_par_conj(!.HLDS, ContainsParConj),
    (
        ContainsParConj = yes,
        module_info_get_globals(!.HLDS, Globals),
        current_grade_supports_par_conj(Globals, SupportsParConj),
        (
            SupportsParConj = no,
            process_all_nonimported_procs(update_proc(parallel_to_plain_conjs),
                !HLDS, !IO)
        ;
            SupportsParConj = yes,
            maybe_write_string(Verbose,
                "% Dependent parallel conjunction transformation...\n", !IO),
            maybe_flush_output(Verbose, !IO),
            impl_dep_par_conjs_in_module(!HLDS),
            dead_proc_elim(do_not_elim_opt_imported, !HLDS, _ElimSpecs),
            maybe_write_string(Verbose, "% done.\n", !IO),
            maybe_report_stats(Stats, !IO)
        )
    ;
        ContainsParConj = no
    ).

:- pred maybe_structure_reuse_analysis(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_structure_reuse_analysis(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, structure_reuse_analysis,
        ReuseAnalysis),
    (
        ReuseAnalysis = yes,
        maybe_write_string(Verbose, "% Structure reuse analysis...\n",
            !IO),
        maybe_flush_output(Verbose, !IO),
        structure_reuse_analysis(!HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        ReuseAnalysis = no
    ).

:- pred maybe_term_size_prof(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_term_size_prof(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, record_term_sizes_as_words, AsWords),
    globals.lookup_bool_option(Globals, record_term_sizes_as_cells, AsCells),
    (
        AsWords = yes,
        AsCells = yes,
        unexpected(this_file, "maybe_term_size_prof: as_words and as_cells")
    ;
        AsWords = yes,
        AsCells = no,
        MaybeTransform = yes(term_words)
    ;
        AsWords = no,
        AsCells = yes,
        MaybeTransform = yes(term_cells)
    ;
        AsWords = no,
        AsCells = no,
        MaybeTransform = no
    ),
    (
        MaybeTransform = yes(Transform),
        maybe_write_string(Verbose,
            "% Applying term size profiling transformation...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        process_all_nonimported_procs(
            update_module_io(size_prof_process_proc_msg(Transform)),
            !HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        MaybeTransform = no
    ).

:- pred maybe_read_experimental_complexity_file(
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_read_experimental_complexity_file(!HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_string_option(Globals, experimental_complexity, FileName),
    globals.lookup_bool_option(Globals, record_term_sizes_as_words,
        RecordTermSizesAsWords),
    globals.lookup_bool_option(Globals, record_term_sizes_as_cells,
        RecordTermSizesAsCells),
    bool.or(RecordTermSizesAsWords, RecordTermSizesAsCells,
        RecordTermSizes),
    ( FileName = "" ->
%       While we could include the following sanity check, it is overly
%       strong. For example, a bootcheck in a term size profiling grade
%       would have to supply an --experimental-complexity option for
%       both the stage3 compiler and the test cases. Since the runtime
%       checks that all procedures mentioned in the files actually
%       exist and are transformed by the compiler, this would require
%       a different complexity experiment file for each test case,
%       which is impractical.
%       (
%           RecordTermSizes = yes,
%           report_error("term size profiling grades require " ++
%               "the --experimental-complexity option", !IO)
%       ;
%           RecordTermSizes = no
%       )
            true
    ;
        (
            RecordTermSizes = yes
        ;
            RecordTermSizes = no,
            report_error("the --experimental-complexity option " ++
                "requires a term size profiling grade", !IO)
        ),
        complexity.read_spec_file(FileName, MaybeNumProcMap, !IO),
        (
            MaybeNumProcMap = ok(NumProcs - ProcMap),
            module_info_set_maybe_complexity_proc_map(yes(NumProcs - ProcMap),
                !HLDS)
        ;
            MaybeNumProcMap = error(Msg),
            report_error(Msg, !IO)
        )
    ).

:- pred maybe_experimental_complexity(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_experimental_complexity(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_maybe_complexity_proc_map(!.HLDS, MaybeNumProcMap),
    (
        MaybeNumProcMap = no
    ;
        MaybeNumProcMap = yes(NumProcs - ProcMap),
        maybe_write_string(Verbose,
            "% Applying complexity experiment transformation...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        process_all_nonimported_procs(
            update_module_io(complexity.process_proc_msg(NumProcs, ProcMap)),
            !HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ).

:- pred maybe_region_analysis(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_region_analysis(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, region_analysis, Analysis),
    (
        Analysis = yes,
        maybe_write_string(Verbose, "% Analysing regions ...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        do_region_analysis(!HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        Analysis = no
    ).

:- pred maybe_deep_profiling(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_deep_profiling(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, profile_deep, ProfileDeep),
    (
        ProfileDeep = yes,
        maybe_write_string(Verbose,
            "% Applying deep profiling transformation...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        apply_deep_profiling_transform(!HLDS),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        ProfileDeep = no
    ).

:- pred maybe_introduce_accumulators(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_introduce_accumulators(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, introduce_accumulators, Optimize),
    (
        Optimize = yes,
        maybe_write_string(Verbose,
            "% Attempting to introduce accumulators...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        process_all_nonimported_procs(
            update_module_io(accumulator.process_proc), !HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        Optimize = no
    ).

:- pred maybe_lco(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_lco(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, optimize_constructor_last_call, LCO),
    (
        LCO = yes,
        maybe_write_string(Verbose,
            "% Looking for LCO modulo constructor application ...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        lco_modulo_constructors(!HLDS),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        LCO = no
    ).

%-----------------------------------------------------------------------------%
%
% The backend passes
%

:- pred map_args_to_regs(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

map_args_to_regs(Verbose, Stats, !HLDS, !IO) :-
    maybe_write_string(Verbose, "% Mapping args to regs...", !IO),
    maybe_flush_output(Verbose, !IO),
    generate_arg_info(!HLDS),
    maybe_write_string(Verbose, " done.\n", !IO),
    maybe_report_stats(Stats, !IO).

:- pred maybe_saved_vars(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_saved_vars(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, optimize_saved_vars_const, SavedVars),
    (
        SavedVars = yes,
        maybe_write_string(Verbose,
            "% Minimizing variable saves using constants...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        process_all_nonimported_procs(update_module_io(saved_vars_proc),
            !HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        SavedVars = no
    ).

:- pred maybe_stack_opt(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_stack_opt(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, optimize_saved_vars_cell, SavedVars),
    (
        SavedVars = yes,
        maybe_write_string(Verbose,
            "% Minimizing variable saves using cells...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        process_all_nonimported_procs(update_module_io(stack_opt_cell),
            !HLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        SavedVars = no
    ).

:- pred maybe_followcode(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_followcode(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, follow_code, FollowCode),
    (
        FollowCode = yes,
        maybe_write_string(Verbose, "% Migrating branch code...", !IO),
        maybe_flush_output(Verbose, !IO),
        process_all_nonimported_procs(update_module(move_follow_code_in_proc),
            !HLDS, !IO),
        maybe_write_string(Verbose, " done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        FollowCode = no
    ).

:- pred compute_liveness(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

compute_liveness(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, parallel_liveness, ParallelLiveness),
    globals.lookup_int_option(Globals, debug_liveness, DebugLiveness),
    maybe_write_string(Verbose, "% Computing liveness...\n", !IO),
    maybe_flush_output(Verbose, !IO),
    (
        ParallelLiveness = yes,
        DebugLiveness = -1
    ->
        detect_liveness_preds_parallel(!HLDS)
    ;
        process_all_nonimported_procs(update_proc_io(detect_liveness_proc),
            !HLDS, !IO)
    ),
    maybe_write_string(Verbose, "% done.\n", !IO),
    maybe_report_stats(Stats, !IO).

:- pred maybe_mark_tail_rec_calls(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_mark_tail_rec_calls(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, exec_trace_tail_rec, ExecTraceTailRec),
    (
        ExecTraceTailRec = yes,
        maybe_write_string(Verbose,
            "% Marking directly tail recursive calls...", !IO),
        maybe_flush_output(Verbose, !IO),
        process_all_nonimported_procs(
            update_proc_predprocid(
                mark_tail_calls(feature_debug_tail_rec_call)),
            !HLDS, !IO),
        maybe_write_string(Verbose, " done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        ExecTraceTailRec = no
    ).

:- pred compute_stack_vars(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

compute_stack_vars(Verbose, Stats, !HLDS, !IO) :-
    maybe_write_string(Verbose, "% Computing stack vars...", !IO),
    maybe_flush_output(Verbose, !IO),
    process_all_nonimported_procs(
        update_proc_io(allocate_stack_slots_in_proc), !HLDS, !IO),
    maybe_write_string(Verbose, " done.\n", !IO),
    maybe_report_stats(Stats, !IO).

:- pred allocate_store_map(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

allocate_store_map(Verbose, Stats, !HLDS, !IO) :-
    maybe_write_string(Verbose, "% Allocating store map...", !IO),
    maybe_flush_output(Verbose, !IO),
    process_all_nonimported_procs(
        update_proc_predid(allocate_store_maps(final_allocation)), !HLDS, !IO),
    maybe_write_string(Verbose, " done.\n", !IO),
    maybe_report_stats(Stats, !IO).

:- pred maybe_goal_paths(bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_goal_paths(Verbose, Stats, !HLDS, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.get_trace_level(Globals, TraceLevel),
    ( given_trace_level_is_none(TraceLevel) = no ->
        maybe_write_string(Verbose, "% Calculating goal paths...", !IO),
        maybe_flush_output(Verbose, !IO),
        process_all_nonimported_procs(update_proc(fill_goal_path_slots),
            !HLDS, !IO),
        maybe_write_string(Verbose, " done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        true
    ).

:- pred generate_code_for_module(module_info::in, bool::in, bool::in,
    global_data::in, global_data::out, list(c_procedure)::out,
    io::di, io::uo) is det.

generate_code_for_module(HLDS, Verbose, Stats, !GlobalData, LLDS, !IO) :-
    maybe_write_string(Verbose, "% Generating code...\n", !IO),
    maybe_flush_output(Verbose, !IO),
    generate_module_code(HLDS, _HLDS, !GlobalData, LLDS, !IO),
    maybe_write_string(Verbose, "% done.\n", !IO),
    maybe_report_stats(Stats, !IO).

:- pred maybe_do_optimize(module_info::in, global_data::in, bool::in, bool::in,
    list(c_procedure)::in, list(c_procedure)::out, io::di, io::uo) is det.

maybe_do_optimize(HLDS, GlobalData, Verbose, Stats, !LLDS, !IO) :-
    module_info_get_globals(HLDS, Globals),
    globals.lookup_bool_option(Globals, optimize, Optimize),
    (
        Optimize = yes,
        maybe_write_string(Verbose, "% Doing optimizations...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        optimize_procs(GlobalData, !LLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        Optimize = no
    ).

:- pred maybe_generate_stack_layouts(module_info::in, list(c_procedure)::in,
    bool::in, bool::in, global_data::in, global_data::out, io::di, io::uo)
    is det.

maybe_generate_stack_layouts(HLDS, LLDS, Verbose, Stats, !GlobalData, !IO) :-
    maybe_write_string(Verbose,
        "% Generating call continuation information...", !IO),
    maybe_flush_output(Verbose, !IO),
    continuation_info.maybe_process_llds(LLDS, HLDS, !GlobalData),
    maybe_write_string(Verbose, " done.\n", !IO),
    maybe_report_stats(Stats, !IO).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

    % Gather together the information from the HLDS, given the foreign
    % language we are going to use, that is used for the foreign language
    % interface.
    % This stuff mostly just gets passed directly to the LLDS unchanged, but
    % we do do a bit of code generation -- for example, we call
    % export.get_foreign_export_{decls,defns} here, which do the generation
    % of C code for `pragma foreign_export' declarations.
    %
:- pred get_c_interface_info(module_info::in, foreign_language::in,
    foreign_interface_info::out) is det.

get_c_interface_info(HLDS, UseForeignLanguage, Foreign_InterfaceInfo) :-
    module_info_get_name(HLDS, ModuleName),
    module_info_get_foreign_decl(HLDS, ForeignDecls),
    module_info_get_foreign_import_module(HLDS, ForeignImports0),

    % Always include the module we are compiling amongst the foreign import
    % modules so that pragma foreign_exported procedures are visible to
    % foreign code in this module.
    %
    % XXX The frontend should really handle this but it is quite
    % inconsistent in its treatement of self-imports.  Both this backend
    % (the LLDS) and the MLDS backend currently handle self foreign imports
    % directly.

    ForeignSelfImport = foreign_import_module_info(UseForeignLanguage,
        ModuleName, term.context_init),
    ForeignImports = [ ForeignSelfImport | ForeignImports0 ],
    module_info_get_foreign_body_code(HLDS, ForeignBodyCode),
    foreign.filter_decls(UseForeignLanguage, ForeignDecls,
        WantedForeignDecls, _OtherDecls),
    foreign.filter_imports(UseForeignLanguage, ForeignImports,
        WantedForeignImports, _OtherImports),
    foreign.filter_bodys(UseForeignLanguage, ForeignBodyCode,
        WantedForeignBodys, _OtherBodys),
    export.get_foreign_export_decls(HLDS, Foreign_ExportDecls),
    export.get_foreign_export_defns(HLDS, Foreign_ExportDefns),

    Foreign_InterfaceInfo = foreign_interface_info(ModuleName,
        WantedForeignDecls, WantedForeignImports,
        WantedForeignBodys, Foreign_ExportDecls, Foreign_ExportDefns).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%
%
% The LLDS output pass
%

:- pred output_pass(module_info::in, global_data::in, list(c_procedure)::in,
    module_name::in, bool::out, list(string)::out, io::di, io::uo) is det.

output_pass(HLDS, GlobalData0, Procs, ModuleName, CompileErrors,
        FactTableObjFiles, !IO) :-
    module_info_get_globals(HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),

    % Here we generate the LLDS representations for various data structures
    % used for RTTI, type classes, and stack layouts.
    % XXX This should perhaps be part of backend_pass rather than output_pass.
    type_ctor_info.generate_rtti(HLDS, TypeCtorRttiData),
    generate_base_typeclass_info_rtti(HLDS, OldTypeClassInfoRttiData),
    globals.lookup_bool_option(Globals, new_type_class_rtti, NewTypeClassRtti),
    generate_type_class_info_rtti(HLDS, NewTypeClassRtti,
        NewTypeClassInfoRttiData),
    list.append(OldTypeClassInfoRttiData, NewTypeClassInfoRttiData,
        TypeClassInfoRttiData),
    stack_layout.generate_llds(HLDS, GlobalData0, GlobalData, StackLayoutDatas,
        LayoutLabels),

    % Here we perform some optimizations on the LLDS data.
    % XXX This should perhaps be part of backend_pass rather than output_pass.
    % XXX We assume that the foreign language we use is C.
    get_c_interface_info(HLDS, lang_c, C_InterfaceInfo),
    global_data_get_all_proc_vars(GlobalData, TablingInfoStructs),
    global_data_get_all_closure_layouts(GlobalData, ClosureLayoutDatas),
    global_data_get_static_cell_info(GlobalData, StaticCellInfo),
    get_static_cells(StaticCellInfo,
        ScalarCommonCellDatas, VectorCommonCellDatas),

    % Next we put it all together and output it to one or more C files.
    RttiDatas = TypeCtorRttiData ++ TypeClassInfoRttiData,
    LayoutDatas = ClosureLayoutDatas ++ StackLayoutDatas,
    construct_c_file(HLDS, C_InterfaceInfo, Procs, TablingInfoStructs,
        ScalarCommonCellDatas, VectorCommonCellDatas, RttiDatas, LayoutDatas,
        CFile, !IO),
    module_info_get_complexity_proc_infos(HLDS, ComplexityProcs),
    output_llds(ModuleName, CFile, ComplexityProcs, LayoutLabels,
        Verbose, Stats, !IO),

    C_InterfaceInfo = foreign_interface_info(_, _, _, _, C_ExportDecls, _),
    export.produce_header_file(HLDS, C_ExportDecls, ModuleName, !IO),

    % Finally we invoke the C compiler to compile it.
    globals.lookup_bool_option(Globals, target_code_only, TargetCodeOnly),
    (
        TargetCodeOnly = no,
        io.output_stream(OutputStream, !IO),
        c_to_obj(OutputStream, ModuleName, CompileOK, !IO),
        module_get_fact_table_files(HLDS, FactTableBaseFiles),
        list.map2_foldl(compile_fact_table_file(OutputStream),
            FactTableBaseFiles, FactTableObjFiles, FactTableCompileOKs, !IO),
        bool.and_list([CompileOK | FactTableCompileOKs], AllOk),
        maybe_set_exit_status(AllOk, !IO),
        bool.not(AllOk, CompileErrors)
    ;
        TargetCodeOnly = yes,
        CompileErrors = no,
        FactTableObjFiles = []
    ).

    % Split the code up into bite-size chunks for the C compiler.
    %
:- pred construct_c_file(module_info::in, foreign_interface_info::in,
    list(c_procedure)::in, list(tabling_info_struct)::in,
    list(scalar_common_data_array)::in, list(vector_common_data_array)::in,
    list(rtti_data)::in, list(layout_data)::in, c_file::out, io::di, io::uo)
    is det.

construct_c_file(ModuleInfo, C_InterfaceInfo, Procedures, TablingInfoStructs,
        ScalarCommonCellDatas, VectorCommonCellDatas, RttiDatas, LayoutDatas,
        CFile, !IO) :-
    C_InterfaceInfo = foreign_interface_info(ModuleSymName, C_HeaderCode0,
        C_Includes, C_BodyCode0, _C_ExportDecls, C_ExportDefns),
    MangledModuleName = sym_name_mangle(ModuleSymName),
    string.append(MangledModuleName, "_module", ModuleName),
    module_info_get_globals(ModuleInfo, Globals),
    globals.lookup_int_option(Globals, procs_per_c_function, ProcsPerFunc),
    get_c_body_code(C_BodyCode0, C_BodyCode),
    ( ProcsPerFunc = 0 ->
        % ProcsPerFunc = 0 really means infinity -
        % we store all the procs in a single function.
        ChunkedModules = [comp_gen_c_module(ModuleName, Procedures)]
    ;
        list.chunk(Procedures, ProcsPerFunc, ChunkedProcs),
        combine_chunks(ChunkedProcs, ModuleName, ChunkedModules)
    ),
    list.map_foldl(make_foreign_import_header_code, C_Includes,
        C_IncludeHeaderCode, !IO),

    % The lists are reversed because insertions into them are at the front.
    % We don't want to put C_LocalHeaderCode between Start and End, because
    % C_IncludeHeaderCode may include our own header file, which defines
    % the module's guard macro, which in turn #ifdefs out the stuff between
    % Start and End.
    list.filter(foreign_decl_code_is_local, list.reverse(C_HeaderCode0),
        C_LocalHeaderCode, C_ExportedHeaderCode),
    make_decl_guards(ModuleSymName, Start, End),
    C_HeaderCode = list.reverse(C_IncludeHeaderCode) ++
        C_LocalHeaderCode ++ [Start | C_ExportedHeaderCode] ++ [End],

    module_info_user_init_pred_c_names(ModuleInfo, UserInitPredCNames),
    module_info_user_final_pred_c_names(ModuleInfo, UserFinalPredCNames),

    CFile = c_file(ModuleSymName, C_HeaderCode, C_BodyCode, C_ExportDefns,
        TablingInfoStructs, ScalarCommonCellDatas, VectorCommonCellDatas,
        RttiDatas, LayoutDatas, ChunkedModules, UserInitPredCNames,
        UserFinalPredCNames).

:- pred foreign_decl_code_is_local(foreign_decl_code::in) is semidet.

foreign_decl_code_is_local(Decl) :-
    Decl = foreign_decl_code(_, foreign_decl_is_local, _, _).

:- pred make_decl_guards(sym_name::in, foreign_decl_code::out,
    foreign_decl_code::out) is det.

make_decl_guards(ModuleName, StartGuard, EndGuard) :-
    Define = decl_guard(ModuleName),
    Start = "#ifndef " ++ Define ++ "\n#define " ++ Define ++ "\n",
    End = "\n#endif",
    StartGuard = foreign_decl_code(lang_c, foreign_decl_is_exported, Start,
        term.context_init),
    EndGuard = foreign_decl_code(lang_c, foreign_decl_is_exported, End,
        term.context_init).

:- pred make_foreign_import_header_code(foreign_import_module_info::in,
    foreign_decl_code::out, io::di, io::uo) is det.

make_foreign_import_header_code(ForeignImportModule, Include, !IO) :-
    ForeignImportModule = foreign_import_module_info(Lang, ModuleName,
        Context),
    (
        Lang = lang_c,
        module_name_to_search_file_name(ModuleName, ".mh", HeaderFileName,
            !IO),
        IncludeString = "#include """ ++ HeaderFileName ++ """\n",
        Include = foreign_decl_code(lang_c, foreign_decl_is_exported,
            IncludeString, Context)
    ;
        Lang = lang_csharp,
        sorry(this_file, ":- import_module not yet implemented: " ++
            "`:- pragma foreign_import_module' for C#")
    ;
        Lang = lang_il,
        sorry(this_file, ":- import_module not yet implemented: " ++
            "`:- pragma foreign_import_module' for IL")
    ;
        Lang = lang_java,
        sorry(this_file, ":- import_module not yet implemented: " ++
            "`:- pragma foreign_import_module' for Java")
    ;
        Lang = lang_erlang,
        sorry(this_file, ":- import_module not yet implemented: " ++
            "`:- pragma foreign_import_module' for Erlang")
    ).

:- pred get_c_body_code(foreign_body_info::in, list(user_foreign_code)::out)
    is det.

get_c_body_code([], []).
get_c_body_code([foreign_body_code(Lang, Code, Context) | CodesAndContexts],
        [user_foreign_code(Lang, Code, Context) | C_Modules]) :-
    get_c_body_code(CodesAndContexts, C_Modules).

:- pred combine_chunks(list(list(c_procedure))::in, string::in,
    list(comp_gen_c_module)::out) is det.

combine_chunks(ChunkList, ModName, Modules) :-
    combine_chunks_2(ChunkList, ModName, 0, Modules).

:- pred combine_chunks_2(list(list(c_procedure))::in,
    string::in, int::in, list(comp_gen_c_module)::out) is det.

combine_chunks_2([], _ModName, _N, []).
combine_chunks_2([Chunk | Chunks], ModuleName, Num, [Module | Modules]) :-
    string.int_to_string(Num, NumString),
    string.append(ModuleName, NumString, ThisModuleName),
    Module = comp_gen_c_module(ThisModuleName, Chunk),
    Num1 = Num + 1,
    combine_chunks_2(Chunks, ModuleName, Num1, Modules).

:- pred output_llds(module_name::in, c_file::in,
    list(complexity_proc_info)::in, map(llds.label, llds.data_addr)::in,
    bool::in, bool::in, io::di, io::uo) is det.

output_llds(ModuleName, LLDS0, ComplexityProcs, StackLayoutLabels,
        Verbose, Stats, !IO) :-
    maybe_write_string(Verbose, "% Writing output to `", !IO),
    module_name_to_file_name(ModuleName, ".c", do_create_dirs, FileName, !IO),
    maybe_write_string(Verbose, FileName, !IO),
    maybe_write_string(Verbose, "'...", !IO),
    maybe_flush_output(Verbose, !IO),
    transform_llds(LLDS0, LLDS, !IO),
    output_llds(LLDS, ComplexityProcs, StackLayoutLabels, !IO),
    maybe_write_string(Verbose, " done.\n", !IO),
    maybe_flush_output(Verbose, !IO),
    maybe_report_stats(Stats, !IO).

:- pred c_to_obj(io.output_stream::in, module_name::in, bool::out,
    io::di, io::uo) is det.

c_to_obj(ErrorStream, ModuleName, Succeeded, !IO) :-
    get_linked_target_type(LinkedTargetType, !IO),
    get_object_code_type(LinkedTargetType, PIC, !IO),
    maybe_pic_object_file_extension(PIC, Obj, !IO),
    module_name_to_file_name(ModuleName, ".c", do_not_create_dirs,
        C_File, !IO),
    module_name_to_file_name(ModuleName, Obj, do_create_dirs, O_File, !IO),
    compile_target_code.compile_c_file(ErrorStream, PIC, C_File, O_File,
        Succeeded, !IO).

:- pred compile_fact_table_file(io.output_stream::in, string::in,
    string::out, bool::out, io::di, io::uo) is det.

compile_fact_table_file(ErrorStream, BaseName, O_File, Succeeded, !IO) :-
    get_linked_target_type(LinkedTargetType, !IO),
    get_object_code_type(LinkedTargetType, PIC, !IO),
    maybe_pic_object_file_extension(PIC, Obj, !IO),
    string.append(BaseName, ".c", C_File),
    string.append(BaseName, Obj, O_File),
    compile_target_code.compile_c_file(ErrorStream, PIC, C_File, O_File,
        Succeeded, !IO).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%
%
% The MLDS backend
%

:- pred mlds_backend(module_info::in, module_info::out, mlds::out,
    dump_info::in, dump_info::out, io::di, io::uo) is det.

mlds_backend(!HLDS, !:MLDS, !DumpInfo, !IO) :-
    module_info_get_globals(!.HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),

    maybe_simplify(no, ml_backend, Verbose, Stats, !HLDS, [], SimplifySpecs,
        !IO),
    expect(unify(contains_errors(Globals, SimplifySpecs), no), this_file,
        "ml_backend: simplify has errors"),
    maybe_dump_hlds(!.HLDS, 405, "ml_backend_simplify", !DumpInfo, !IO),

    % NOTE: it is unsafe for passes after add_trail_ops to reorder
    % disjunctions if trail usage has been optimized.  Such reordering
    % may result in the trail being corrupted.
    %
    maybe_add_trail_ops(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 410, "add_trail_ops", !DumpInfo, !IO),

    maybe_add_heap_ops(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 415, "add_heap_ops", !DumpInfo, !IO),

    maybe_mark_static_terms(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 420, "mark_static", !DumpInfo, !IO),

    % We need to do map_args_to_regs, even though that module is meant
    % for the LLDS back-end, because with the MLDS back-end the arg_infos
    % that map_args_to_regs generates are used by continuation_info.m,
    % which is used by ml_unify_gen.m when outputting closure layout structs.
    map_args_to_regs(Verbose, Stats, !HLDS, !IO),
    maybe_dump_hlds(!.HLDS, 425, "args_to_regs", !DumpInfo, !IO),

    maybe_write_string(Verbose, "% Converting HLDS to MLDS...\n", !IO),
    ml_code_gen(!HLDS, !:MLDS),
    maybe_write_string(Verbose, "% done.\n", !IO),
    maybe_report_stats(Stats, !IO),
    maybe_dump_hlds(!.HLDS, 499, "final", !DumpInfo, !IO),
    maybe_dump_mlds(Globals, !.MLDS, 0, "initial", !IO),

    maybe_write_string(Verbose, "% Generating RTTI data...\n", !IO),
    mlds_gen_rtti_data(!.HLDS, !MLDS),
    maybe_write_string(Verbose, "% done.\n", !IO),
    maybe_report_stats(Stats, !IO),
    maybe_dump_mlds(Globals, !.MLDS, 10, "rtti", !IO),

    % Detection of tail calls needs to occur before the
    % chain_gc_stack_frame pass of ml_elim_nested, because we need to
    % unlink the stack frame from the stack chain before tail calls.
    globals.lookup_bool_option(Globals, optimize_tailcalls, OptimizeTailCalls),
    (
        OptimizeTailCalls = yes,
        maybe_write_string(Verbose, "% Detecting tail calls...\n", !IO),
        ml_mark_tailcalls(!MLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO)
    ;
        OptimizeTailCalls = no
    ),
    maybe_report_stats(Stats, !IO),
    maybe_dump_mlds(Globals, !.MLDS, 20, "tailcalls", !IO),

    % Warning about non-tail calls must come after detection of tail calls.
    globals.lookup_bool_option(Globals, warn_non_tail_recursion,
        WarnTailCalls),
    (
        OptimizeTailCalls = yes,
        WarnTailCalls = yes
    ->
        maybe_write_string(Verbose,
            "% Warning about non-tail recursive calls...\n", !IO),
        ml_warn_tailcalls(Globals, !.MLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO)
    ;
        true
    ),
    maybe_report_stats(Stats, !IO),

    % Run the ml_optimize pass before ml_elim_nested, so that we eliminate
    % as many local variables as possible before the ml_elim_nested
    % transformations. We also want to do tail recursion optimization before
    % ml_elim_nested, since this means that the stack-handling code for
    % accurate GC will go outside the loop rather than inside the loop.
    %
    % However, we need to disable optimize_initializations, because
    % ml_elim_nested doesn't correctly handle code containing initializations.
    globals.lookup_bool_option(Globals, optimize, Optimize),
    (
        Optimize = yes,
        globals.lookup_bool_option(Globals, optimize_initializations,
            OptimizeInitializations),
        globals.io_set_option(optimize_initializations, bool(no), !IO),
        maybe_write_string(Verbose, "% Optimizing MLDS...\n", !IO),
        mlds_optimize(!MLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),

        globals.io_set_option(optimize_initializations,
            bool(OptimizeInitializations), !IO)
    ;
        Optimize = no
    ),
    maybe_report_stats(Stats, !IO),
    maybe_dump_mlds(Globals, !.MLDS, 25, "optimize1", !IO),

    % Note that we call ml_elim_nested twice -- the first time to chain
    % the stack frames together, for accurate GC, and the second time to
    % flatten nested functions. These two passes are quite similar, but
    % must be done separately. Currently chaining the stack frames together
    % for accurate GC needs to be done first, because the code for doing that
    % can't handle the env_ptr references that the other pass generates.

    globals.get_gc_method(Globals, GC),
    (
        GC = gc_accurate,
        maybe_write_string(Verbose,
            "% Threading GC stack frames...\n", !IO),
        ml_elim_nested(chain_gc_stack_frames, Globals, !MLDS),
        maybe_write_string(Verbose, "% done.\n", !IO)
    ;
        ( GC = gc_automatic
        ; GC = gc_none
        ; GC = gc_boehm
        ; GC = gc_boehm_debug
        ; GC = gc_mps
        )
    ),
    maybe_report_stats(Stats, !IO),
    maybe_dump_mlds(Globals, !.MLDS, 30, "gc_frames", !IO),

    globals.lookup_bool_option(Globals, gcc_nested_functions, NestedFuncs),
    (
        NestedFuncs = no,
        maybe_write_string(Verbose, "% Flattening nested functions...\n", !IO),
        ml_elim_nested(hoist_nested_funcs, Globals, !MLDS),
        maybe_write_string(Verbose, "% done.\n", !IO)
    ;
        NestedFuncs = yes
    ),
    maybe_report_stats(Stats, !IO),
    maybe_dump_mlds(Globals, !.MLDS, 35, "nested_funcs", !IO),

    % Run the ml_optimize pass again after ml_elim_nested,
    % to do optimize_initializations.  (It may also help pick
    % up some additional optimization opportunities for the
    % other optimizations in this pass.)
    (
        Optimize = yes,
        maybe_write_string(Verbose, "% Optimizing MLDS again...\n", !IO),
        mlds_optimize(!MLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO)
    ;
        Optimize = no
    ),
    maybe_report_stats(Stats, !IO),
    maybe_dump_mlds(Globals, !.MLDS, 40, "optimize2", !IO),

    maybe_dump_mlds(Globals, !.MLDS, 99, "final", !IO).

:- pred mlds_gen_rtti_data(module_info::in, mlds::in, mlds::out) is det.

mlds_gen_rtti_data(HLDS, !MLDS) :-
    type_ctor_info.generate_rtti(HLDS, TypeCtorRtti),
    generate_base_typeclass_info_rtti(HLDS, TypeClassInfoRtti),

    module_info_get_globals(HLDS, Globals),
    globals.lookup_bool_option(Globals, new_type_class_rtti, NewTypeClassRtti),
    generate_type_class_info_rtti(HLDS, NewTypeClassRtti,
        NewTypeClassInfoRttiData),
    RttiDatas = TypeCtorRtti ++ TypeClassInfoRtti ++ NewTypeClassInfoRttiData,
    !.MLDS = mlds(ModuleName, ForeignCode, Imports, GlobalData0, Defns,
        InitPreds, FinalPreds, ExportedEnums),
    add_rtti_datas_to_mlds(HLDS, RttiDatas, GlobalData0, GlobalData),
    !:MLDS = mlds(ModuleName, ForeignCode, Imports, GlobalData, Defns,
        InitPreds, FinalPreds, ExportedEnums).

%-----------------------------------------------------------------------------%
%
% The `--high-level-code' MLDS output pass
%

:- pred mlds_to_high_level_c(globals::in, mlds::in, io::di, io::uo) is det.

mlds_to_high_level_c(Globals, MLDS, !IO) :-
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),

    maybe_write_string(Verbose, "% Converting MLDS to C...\n", !IO),
    output_c_mlds(MLDS, Globals, "", !IO),
    maybe_write_string(Verbose, "% Finished converting MLDS to C.\n", !IO),
    maybe_report_stats(Stats, !IO).

:- pred mlds_to_java(module_info::in, mlds::in, io::di, io::uo) is det.

mlds_to_java(HLDS, MLDS, !IO) :-
    module_info_get_globals(HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),

    maybe_write_string(Verbose, "% Converting MLDS to Java...\n", !IO),
    output_java_mlds(HLDS, MLDS, !IO),
    maybe_write_string(Verbose, "% Finished converting MLDS to Java.\n", !IO),
    maybe_report_stats(Stats, !IO).

:- pred maybe_mlds_to_gcc(globals::in, mlds::in, bool::out, io::di, io::uo)
    is det.

maybe_mlds_to_gcc(Globals, MLDS, ContainsCCode, !IO) :-
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),

    maybe_write_string(Verbose,
        "% Passing MLDS to GCC and compiling to assembler...\n", !IO),
    maybe_mlds_to_gcc.compile_to_asm(MLDS, ContainsCCode, !IO),
    maybe_write_string(Verbose, "% Finished compiling to assembler.\n", !IO),
    maybe_report_stats(Stats, !IO).

:- pred mlds_to_il_assembler(globals::in, mlds::in, io::di, io::uo) is det.

mlds_to_il_assembler(Globals, MLDS, !IO) :-
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),

    maybe_write_string(Verbose, "% Converting MLDS to IL...\n", !IO),
    output_mlds_via_ilasm(Globals, MLDS, !IO),
    maybe_write_string(Verbose, "% Finished converting MLDS to IL.\n", !IO),
    maybe_report_stats(Stats, !IO).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- type dump_info
    --->    no_prev_dump
    ;       prev_dumped_hlds(string, module_info).

:- pred maybe_dump_hlds(module_info::in, int::in, string::in,
    dump_info::in, dump_info::out, io::di, io::uo) is det.

maybe_dump_hlds(HLDS, StageNum, StageName, !DumpInfo, !IO) :-
    module_info_get_globals(HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_accumulating_option(Globals, dump_hlds, DumpHLDSStages),
    globals.lookup_accumulating_option(Globals, dump_trace_counts,
        DumpTraceStages),
    globals.lookup_string_option(Globals, dump_hlds_file_suffix,
        UserFileSuffix),
    StageNumStr = stage_num_str(StageNum),
    ( should_dump_stage(StageNum, StageNumStr, StageName, DumpHLDSStages) ->
        module_info_get_name(HLDS, ModuleName),
        module_name_to_file_name(ModuleName, ".hlds_dump", do_create_dirs,
            BaseFileName, !IO),
        DumpFileName = BaseFileName ++ "." ++ StageNumStr ++ "-" ++ StageName
            ++ UserFileSuffix,
        (
            !.DumpInfo = prev_dumped_hlds(PrevDumpFileName, PrevHLDS),
            HLDS = PrevHLDS
        ->
            globals.lookup_bool_option(Globals, dump_same_hlds, DumpSameHLDS),
            (
                DumpSameHLDS = no,
                % Don't create a dump file for this stage, and keep the records
                % about previously dumped stages as they are. We do print a
                % message (if asked to) about *why* we don't create this file.
                maybe_write_string(Verbose, "% HLDS dump `", !IO),
                maybe_write_string(Verbose, DumpFileName, !IO),
                maybe_write_string(Verbose, "' would be identical ", !IO),
                maybe_write_string(Verbose, "to previous dump.\n", !IO),

                % If a previous dump exists with this name, leaving it around
                % would be quite misleading. However, there is nothing useful
                % we can do if the removal fails.
                io.remove_file(DumpFileName, _Result, !IO)
            ;
                DumpSameHLDS = yes,
                CurDumpFileName = PrevDumpFileName,
                io.open_output(DumpFileName, Res, !IO),
                (
                    Res = ok(FileStream),
                    io.write_string(FileStream, "This stage is identical " ++
                        "to the stage in " ++ PrevDumpFileName ++ ".\n", !IO),
                    io.close_output(FileStream, !IO)
                ;
                    Res = error(IOError),
                    maybe_write_string(Verbose, "\n", !IO),
                    Msg = "can't open file `" ++ DumpFileName ++
                        "' for output: " ++ io.error_message(IOError),
                    report_error(Msg, !IO)
                ),
                !:DumpInfo = prev_dumped_hlds(CurDumpFileName, HLDS)
            )
        ;
            dump_hlds(DumpFileName, HLDS, !IO),
            CurDumpFileName = DumpFileName,
            !:DumpInfo = prev_dumped_hlds(CurDumpFileName, HLDS)
        )
    ; should_dump_stage(StageNum, StageNumStr, StageName, DumpTraceStages) ->
        module_info_get_name(HLDS, ModuleName),
        module_name_to_file_name(ModuleName, ".trace_counts", do_create_dirs,
            BaseFileName, !IO),
        DumpFileName = BaseFileName ++ "." ++ StageNumStr ++ "-" ++ StageName
            ++ UserFileSuffix,
        write_out_trace_counts(DumpFileName, MaybeTraceCountsError, !IO),
        (
            MaybeTraceCountsError = no,
            maybe_write_string(Verbose, "% Dumped trace counts to `", !IO),
            maybe_write_string(Verbose, DumpFileName, !IO),
            maybe_write_string(Verbose, "'\n", !IO),
            maybe_flush_output(Verbose, !IO)
        ;
            MaybeTraceCountsError = yes(TraceCountsError),
            io.write_string("% ", !IO),
            io.write_string(TraceCountsError, !IO),
            io.nl(!IO),
            io.flush_output(!IO)
        )
    ;
        true
    ).

:- func stage_num_str(int) = string.

stage_num_str(StageNum) = StageNumStr :-
    int_to_string(StageNum, StageNumStr0),
    ( string.length(StageNumStr0, 1) ->
        StageNumStr = "00" ++ StageNumStr0
    ; string.length(StageNumStr0, 2) ->
        StageNumStr = "0" ++ StageNumStr0
    ;
        StageNumStr = StageNumStr0
    ).

:- pred should_dump_stage(int::in, string::in, string::in, list(string)::in)
    is semidet.

should_dump_stage(StageNum, StageNumStr, StageName, DumpStages) :-
    list.member(DumpStage, DumpStages),
    (
        StageName = DumpStage
    ;
        "all" = DumpStage
    ;
        (
            DumpStage = StageNumStr
        ;
            string.append("0", DumpStage, StageNumStr)
        ;
            string.append("00", DumpStage, StageNumStr)
        )
    ;
        string.append(From, "+", DumpStage),
        string.to_int(From, FromInt),
        StageNum >= FromInt
    ).

:- pred dump_hlds(string::in, module_info::in, io::di, io::uo) is det.

dump_hlds(DumpFile, HLDS, !IO) :-
    module_info_get_globals(HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),
    maybe_write_string(Verbose, "% Dumping out HLDS to `", !IO),
    maybe_write_string(Verbose, DumpFile, !IO),
    maybe_write_string(Verbose, "'...", !IO),
    maybe_flush_output(Verbose, !IO),
    io.open_output(DumpFile, Res, !IO),
    (
        Res = ok(FileStream),
        io.set_output_stream(FileStream, OutputStream, !IO),
        hlds_out.write_hlds(0, HLDS, !IO),
        io.set_output_stream(OutputStream, _, !IO),
        io.close_output(FileStream, !IO),
        maybe_write_string(Verbose, " done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        Res = error(IOError),
        maybe_write_string(Verbose, "\n", !IO),
        Msg = "can't open file `" ++ DumpFile ++
            "' for output: " ++ io.error_message(IOError),
        report_error(Msg, !IO)
    ).

:- pred maybe_dump_mlds(globals::in, mlds::in, int::in, string::in,
    io::di, io::uo) is det.

maybe_dump_mlds(Globals, MLDS, StageNum, StageName, !IO) :-
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_accumulating_option(Globals, dump_mlds, DumpStages),
    globals.lookup_accumulating_option(Globals, verbose_dump_mlds,
        VerboseDumpStages),
    StageNumStr = stage_num_str(StageNum),
    ( should_dump_stage(StageNum, StageNumStr, StageName, DumpStages) ->
        maybe_write_string(Verbose, "% Dumping out MLDS as C...\n", !IO),
        maybe_flush_output(Verbose, !IO),
        DumpSuffix = "_dump." ++ StageNumStr ++ "-" ++ StageName,
        output_c_mlds(MLDS, Globals, DumpSuffix, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO)
    ;
        true
    ),
    ( should_dump_stage(StageNum, StageNumStr, StageName, VerboseDumpStages) ->
        maybe_write_string(Verbose, "% Dumping out raw MLDS...\n", !IO),
        ModuleName = mlds_get_module_name(MLDS),
        module_name_to_file_name(ModuleName, ".mlds_dump", do_create_dirs,
            BaseFileName, !IO),
        string.append_list([BaseFileName, ".", StageNumStr, "-", StageName],
            DumpFile),
        dump_mlds(Globals, DumpFile, MLDS, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO)
    ;
        true
    ).

:- pred dump_mlds(globals::in, string::in, mlds::in, io::di, io::uo) is det.

dump_mlds(Globals, DumpFile, MLDS, !IO) :-
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),
    maybe_write_string(Verbose, "% Dumping out MLDS to `", !IO),
    maybe_write_string(Verbose, DumpFile, !IO),
    maybe_write_string(Verbose, "'...", !IO),
    maybe_flush_output(Verbose, !IO),
    io.open_output(DumpFile, Res, !IO),
    (
        Res = ok(FileStream),
        io.set_output_stream(FileStream, OutputStream, !IO),
        pprint.write(80, pprint.to_doc(MLDS), !IO),
        io.nl(!IO),
        io.set_output_stream(OutputStream, _, !IO),
        io.close_output(FileStream, !IO),
        maybe_write_string(Verbose, " done.\n", !IO),
        maybe_report_stats(Stats, !IO)
    ;
        Res = error(IOError),
        maybe_write_string(Verbose, "\n", !IO),
        ErrorMessage = "can't open file `" ++ DumpFile ++ "' for output: " ++
            io.error_message(IOError),
        report_error(ErrorMessage, !IO)
    ).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%
%
% Erlang backend
%

:- pred erlang_backend(module_info::in, elds::out,
    dump_info::in, dump_info::out, io::di, io::uo) is det.

erlang_backend(HLDS, ELDS, !DumpInfo, !IO) :-
    module_info_get_globals(HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),

    maybe_write_string(Verbose, "% Converting HLDS to ELDS...\n", !IO),
    erl_code_gen(HLDS, ELDS0, !IO),
    maybe_write_string(Verbose, "% done.\n", !IO),
    maybe_report_stats(Stats, !IO),

    maybe_write_string(Verbose, "% Generating RTTI data...\n", !IO),
    elds_gen_rtti_data(HLDS, ELDS0, ELDS, !IO),
    maybe_write_string(Verbose, "% done.\n", !IO),
    maybe_report_stats(Stats, !IO).

:- pred elds_gen_rtti_data(module_info::in, elds::in, elds::out,
    io::di, io::uo) is det.

elds_gen_rtti_data(HLDS, !ELDS, !IO) :-
    % Generate the representations for various data structures
    % used for type classes.
    module_info_get_globals(HLDS, Globals),
    type_ctor_info.generate_rtti(HLDS, TypeCtorRttiData),
    generate_base_typeclass_info_rtti(HLDS, OldTypeClassInfoRttiData),
    globals.lookup_bool_option(Globals, new_type_class_rtti, NewTypeClassRtti),
    generate_type_class_info_rtti(HLDS, NewTypeClassRtti,
        NewTypeClassInfoRttiData),
    list.append(OldTypeClassInfoRttiData, NewTypeClassInfoRttiData,
        TypeClassInfoRttiData),
    RttiDatas = TypeCtorRttiData ++ TypeClassInfoRttiData,
    ErlangRttiDatas = list.map(erlang_rtti_data(HLDS), RttiDatas),

    RttiDefns0 = !.ELDS ^ elds_rtti_funcs,
    rtti_data_list_to_elds(HLDS, ErlangRttiDatas, RttiDefns),
    !ELDS ^ elds_rtti_funcs := RttiDefns0 ++ RttiDefns.

:- pred elds_to_erlang(module_info::in, elds::in, io::di, io::uo) is det.

elds_to_erlang(HLDS, ELDS, !IO) :-
    module_info_get_globals(HLDS, Globals),
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),

    maybe_write_string(Verbose, "% Converting ELDS to Erlang...\n", !IO),
    elds_to_erlang.output_elds(HLDS, ELDS, !IO),
    maybe_write_string(Verbose, "% Finished converting ELDS to Erlang.\n",
        !IO),
    maybe_report_stats(Stats, !IO).

%-----------------------------------------------------------------------------%

    % Expand @File arguments.
    % Each argument in the above form is replaced with a list of arguments
    % where each arg is each line in the file File which is not just whitespace.
    %
:- pred expand_at_file_arguments(list(string)::in, io.res(list(string))::out,
    io::di, io::uo) is det.

expand_at_file_arguments([], ok([]), !IO).
expand_at_file_arguments([Arg | Args], Result, !IO) :-
    ( string.remove_prefix("@", Arg, File) ->
        io.open_input(File, OpenRes, !IO),
        (
            OpenRes = ok(S),
            expand_file_into_arg_list(S, ReadRes, !IO),
            ( ReadRes = ok(FileArgs),
                expand_at_file_arguments(FileArgs ++ Args, Result, !IO)
            ; ReadRes = error(E),
                Result = error(at_file_error(File, E))
            )
        ;
            OpenRes = error(_E),
            Msg = "mercury_compile: cannot open '" ++ File ++ "'",
            Result = error(io.make_io_error(Msg))
        )
    ;
        expand_at_file_arguments(Args, Result0, !IO),
        (
            Result0 = ok(ExpandedArgs),
            Result = ok([Arg | ExpandedArgs])
        ;
            Result0 = error(E),
            Result = error(E)
        )
    ).

:- func at_file_error(string, io.error) = io.error.

at_file_error(File, E) =
    io.make_io_error("While attempting to process '" ++ File ++
        "' the following error occurred: " ++ io.error_message(E)).

    % Read each of the command line arguments from the given input file.
    % Note lines which consist purely of whitespace are ignored.
    %
:- pred expand_file_into_arg_list(io.input_stream::in,
    io.res(list(string))::out, io::di, io::uo) is det.

expand_file_into_arg_list(S, Res, !IO) :-
    io.read_line_as_string(S, LineRes, !IO),
    (
        LineRes = ok(Line),
        expand_file_into_arg_list(S, Res0, !IO),
        ( Res0 = ok(Lines),
            StrippedLine = strip(Line),
            ( StrippedLine = "" ->
                Res = ok(Lines)
            ;
                Res = ok([StrippedLine | Lines])
            )
        ; Res0 = error(_E),
            Res = Res0
        )
    ;
        LineRes = eof,
        Res = ok([])
    ;
        LineRes = error(E),
        Res = error(E)
    ).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "mercury_compile.m".

%-----------------------------------------------------------------------------%
