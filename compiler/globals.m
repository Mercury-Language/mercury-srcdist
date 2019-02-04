%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1994-2008 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
% 
% File: globals.m.
% Main author: fjh.
% 
% This module exports the `globals' type and associated access predicates.
% The globals type is used to collect together all the various data
% that would be global variables in an imperative language.
% This global data is stored in the io.state.
% 
%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- module libs.globals.
:- interface.

:- import_module libs.options.
:- import_module libs.trace_params.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data. % for module_name
:- import_module mdbcomp.feedback.

:- import_module bool.
:- import_module getopt_io.
:- import_module io.
:- import_module list.
:- import_module map.
:- import_module maybe.

%-----------------------------------------------------------------------------%

:- type globals.

:- type compilation_target
    --->    target_c        % Generate C code (including GNU C).
    ;       target_il       % Generate IL assembler code.
                            % IL is the Microsoft .NET Intermediate Language.
    ;       target_java     % Generate Java.
                            % (Work in progress)
    ;       target_asm      % Compile directly to assembler via the GCC
                            % back-end. Do not go via C, instead generate GCC's
                            % internal `tree' data structure.
                            % (Work in progress.)
    ;       target_x86_64   % Compile directly to x86_64 assembler.
                            % (Work in progress.)
    ;       target_erlang.  % Generate Erlang.
                            % (Work in progress)

:- type foreign_language
    --->    lang_c
%   ;       lang_cplusplus
    ;       lang_csharp
    ;       lang_java
    ;       lang_il
    ;       lang_erlang.

    % A string representation of the compilation target suitable
    % for use in human-readable error messages.
    %
:- func compilation_target_string(compilation_target) = string.

    % A string representation of the foreign language suitable
    % for use in human-readable error messages.
    %
:- func foreign_language_string(foreign_language) = string.

    % A string representation of the foreign language suitable
    % for use in machine-readable name mangling.
    %
:- func simple_foreign_language_string(foreign_language) = string.

    % The GC method specifies how we do garbage collection.
    % The last four alternatives are for the C and asm back-ends;
    % the first alternative is for compiling to IL or Java,
    % where the target language implementation handles garbage
    % collection automatically.
    %
:- type gc_method
    --->    gc_automatic    % It is the responsibility of the target language
                            % that we are compiling to to handle GC.

    ;       gc_none         % No garbage collection.
                            % But memory may be recovered on backtracking,
                            % if the --reclaim-heap-on-*failure options are
                            % set.

    ;       gc_boehm        % The Boehm et al conservative collector.

    ;       gc_boehm_debug  % Boehm collector with debugging enabled.

    ;       gc_mps          % A different conservative collector, based on
                            % Ravenbrook Limited's MPS (Memory Pool System)
                            % kit. Benchmarking indicated that this one
                            % performed worse than the Boehm collector,
                            % so we don't really support this option anymore.

    ;       gc_accurate.    % Our own home-grown copying collector.
                            % See runtime/mercury_accurate_gc.c
                            % and compiler/ml_elim_nested.m.

    % Returns yes if the GC method is conservative, i.e. if it is `boehm'
    % or `mps'. Conservative GC methods don't support heap reclamation
    % on failure.
    %
:- func gc_is_conservative(gc_method) = bool.

:- type tags_method
    --->    tags_none
    ;       tags_low
    ;       tags_high.

:- type termination_norm
    --->    norm_simple
    ;       norm_total
    ;       norm_num_data_elems
    ;       norm_size_data_elems.

    % For the C backends, what type of C compiler are we using?
    %     
:- type c_compiler_type
    --->    cc_gcc
    ;       cc_lcc
    ;       cc_cl
    ;       cc_unknown.

    % Map from module name to file name.
    %
:- type source_file_map == map(module_name, string).

:- type may_be_thread_safe == bool.

:- pred convert_target(string::in, compilation_target::out) is semidet.
:- pred convert_foreign_language(string::in, foreign_language::out) is semidet.
:- pred convert_gc_method(string::in, gc_method::out) is semidet.
:- pred convert_tags_method(string::in, tags_method::out) is semidet.
:- pred convert_termination_norm(string::in, termination_norm::out) is semidet.
:- pred convert_maybe_thread_safe(string::in, may_be_thread_safe::out)
    is semidet.
:- pred convert_c_compiler_type(string::in, c_compiler_type::out)
    is semidet.

%-----------------------------------------------------------------------------%
%
% Access predicates for the `globals' structure
%

:- pred globals_init(option_table::in, compilation_target::in, gc_method::in,
    tags_method::in, termination_norm::in, termination_norm::in,
    trace_level::in, trace_suppress_items::in,
    may_be_thread_safe::in, c_compiler_type::in, feedback_info::in, 
    globals::out) is det.

:- pred get_options(globals::in, option_table::out) is det.
:- pred get_target(globals::in, compilation_target::out) is det.
:- pred get_backend_foreign_languages(globals::in,
    list(foreign_language)::out) is det.
:- pred get_gc_method(globals::in, gc_method::out) is det.
:- pred get_tags_method(globals::in, tags_method::out) is det.
:- pred get_termination_norm(globals::in, termination_norm::out) is det.
:- pred get_termination2_norm(globals::in, termination_norm::out) is det.
:- pred get_trace_level(globals::in, trace_level::out) is det.
:- pred get_trace_suppress(globals::in, trace_suppress_items::out) is det.
:- pred get_source_file_map(globals::in, maybe(source_file_map)::out) is det.
:- pred get_maybe_thread_safe(globals::in, may_be_thread_safe::out) is det.
:- pred get_c_compiler_type(globals::in, c_compiler_type::out) is det.
:- pred get_feedback_info(globals::in, feedback_info::out) is det.

:- pred set_option(option::in, option_data::in, globals::in, globals::out)
    is det.
:- pred set_options(option_table::in, globals::in, globals::out) is det.
:- pred set_gc_method(gc_method::in, globals::in, globals::out) is det.
:- pred set_tags_method(tags_method::in, globals::in, globals::out) is det.
:- pred set_trace_level(trace_level::in, globals::in, globals::out) is det.
:- pred set_trace_level_none(globals::in, globals::out) is det.
:- pred set_source_file_map(maybe(source_file_map)::in,
    globals::in, globals::out) is det.
:- pred set_feedback_info(feedback_info::in, globals::in, globals::out) 
    is det.

:- pred lookup_option(globals::in, option::in, option_data::out) is det.

:- pred lookup_bool_option(globals, option, bool).
:- mode lookup_bool_option(in, in, out) is det.
:- mode lookup_bool_option(in, in, in) is semidet. % implied
:- pred lookup_int_option(globals::in, option::in, int::out) is det.
:- pred lookup_string_option(globals::in, option::in, string::out) is det.
:- pred lookup_maybe_string_option(globals::in, option::in, maybe(string)::out)
    is det.
:- pred lookup_accumulating_option(globals::in, option::in, list(string)::out)
    is det.

%-----------------------------------------------------------------------------%
%
% More complex options
%

    % Check if we should include variable information in the layout
    % structures of call return sites.
    %
:- pred want_return_var_layouts(globals::in, bool::out) is det.

    % Check that the current grade supports tabling.
    %
:- pred current_grade_supports_tabling(globals::in, bool::out) is det.

    % Check that code compiled in the current grade can execute
    % conjunctions in parallel.
    %
:- pred current_grade_supports_par_conj(globals::in, bool::out) is det.

    % Check that code compiled in the current grade supports concurrent
    % execution, i.e. that spawn/3 will create a new thread instead of 
    % aborting execution.
    %
:- pred current_grade_supports_concurrency(globals::in, bool::out) is det.

%-----------------------------------------------------------------------------%
%
% Access predicates for storing a `globals' structure in the io.state
% using io.set_globals and io.get_globals.
%

:- pred globals_io_init(option_table::in, compilation_target::in,
    gc_method::in, tags_method::in, termination_norm::in,
    termination_norm::in, trace_level::in, trace_suppress_items::in,
    may_be_thread_safe::in, c_compiler_type::in, feedback_info::in, 
    io::di, io::uo) is det.

:- pred io_get_target(compilation_target::out, io::di, io::uo) is det.
:- pred io_get_backend_foreign_languages(list(foreign_language)::out,
    io::di, io::uo) is det.

:- pred io_lookup_foreign_language_option(option::in,
    foreign_language::out, io::di, io::uo) is det.

:- pred io_get_gc_method(gc_method::out, io::di, io::uo) is det.
:- pred io_get_tags_method(tags_method::out, io::di, io::uo) is det.
:- pred io_get_termination_norm(termination_norm::out, io::di, io::uo) is det.

:- pred io_get_termination2_norm(termination_norm::out, io::di, io::uo) is det.

:- pred io_get_trace_level(trace_level::out, io::di, io::uo) is det.

:- pred io_get_trace_suppress(trace_suppress_items::out, io::di, io::uo)
    is det.

:- pred io_get_maybe_thread_safe(may_be_thread_safe::out, io::di, io::uo)
    is det.

:- pred io_get_c_compiler_type(c_compiler_type::out, io::di, io::uo) is det.

:- pred io_get_extra_error_info(bool::out, io::di, io::uo) is det.

:- pred io_get_any_intermod(bool::out, io::di, io::uo) is det.

    % This is semipure because it is called in a context in which the I/O
    % state is not available.  Note that the corresponding set predicate
    % below does take the I/O state.
    %
:- semipure pred semipure_get_solver_auto_init_supported(bool::out) is det.

:- pred io_get_globals(globals::out, io::di, io::uo) is det.

:- pred io_set_globals(globals::in, io::di, io::uo) is det.

:- pred io_set_option(option::in, option_data::in, io::di, io::uo) is det.

:- pred io_set_gc_method(gc_method::in, io::di, io::uo) is det.
:- pred io_set_tags_method(tags_method::in, io::di, io::uo) is det.
:- pred io_set_trace_level(trace_level::in, io::di, io::uo) is det.
:- pred io_set_trace_level_none(io::di, io::uo) is det.
:- pred io_set_extra_error_info(bool::in, io::di, io::uo) is det.
:- pred io_set_solver_auto_init_supported(bool::in, io::di, io::uo) is det.

:- pred io_lookup_option(option::in, option_data::out, io::di, io::uo) is det.

:- pred io_lookup_bool_option(option::in, bool::out, io::di, io::uo) is det.

:- pred io_lookup_int_option(option::in, int::out, io::di, io::uo) is det.

:- pred io_lookup_string_option(option::in, string::out, io::di, io::uo)
    is det.

:- pred io_lookup_maybe_string_option(option::in, maybe(string)::out,
    io::di, io::uo) is det.

:- pred io_lookup_accumulating_option(option::in, list(string)::out,
    io::di, io::uo) is det.

:- pred io_printing_usage(bool::out, io::di, io::uo) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module libs.compiler_util.

:- import_module string.
:- import_module univ.

%-----------------------------------------------------------------------------%

convert_target(String, Target) :-
    convert_target_2(string.to_lower(String), Target).

:- pred convert_target_2(string::in, compilation_target::out) is semidet.

convert_target_2("java", target_java).
convert_target_2("asm", target_asm).
convert_target_2("il", target_il).
convert_target_2("c", target_c).
convert_target_2("x86_64", target_x86_64).
convert_target_2("erlang", target_erlang).

convert_foreign_language(String, ForeignLanguage) :-
    convert_foreign_language_2(string.to_lower(String), ForeignLanguage).

:- pred convert_foreign_language_2(string::in, foreign_language::out)
    is semidet.

convert_foreign_language_2("c", lang_c).
convert_foreign_language_2("c#", lang_csharp).
convert_foreign_language_2("csharp", lang_csharp).
convert_foreign_language_2("c sharp", lang_csharp).
convert_foreign_language_2("il", lang_il).
convert_foreign_language_2("java", lang_java).
convert_foreign_language_2("erlang", lang_erlang).

convert_gc_method("none", gc_none).
convert_gc_method("conservative", gc_boehm).
convert_gc_method("boehm", gc_boehm).
convert_gc_method("boehm_debug", gc_boehm_debug).
convert_gc_method("mps", gc_mps).
convert_gc_method("accurate", gc_accurate).
convert_gc_method("automatic", gc_automatic).

convert_tags_method("none", tags_none).
convert_tags_method("low", tags_low).
convert_tags_method("high", tags_high).

convert_termination_norm("simple", norm_simple).
convert_termination_norm("total", norm_total).
convert_termination_norm("num-data-elems", norm_num_data_elems).
convert_termination_norm("size-data-elems", norm_size_data_elems).

convert_maybe_thread_safe("yes", yes).
convert_maybe_thread_safe("no",  no).

convert_c_compiler_type("gcc",      cc_gcc).
convert_c_compiler_type("lcc",      cc_lcc).
convert_c_compiler_type("cl",       cc_cl).
convert_c_compiler_type("unknown",  cc_unknown).

compilation_target_string(target_c)    = "C".
compilation_target_string(target_il)   = "IL".
compilation_target_string(target_java) = "Java".
compilation_target_string(target_asm)  = "asm".
compilation_target_string(target_x86_64) = "x86_64".
compilation_target_string(target_erlang) = "Erlang".

foreign_language_string(lang_c) = "C".
foreign_language_string(lang_csharp) = "C#".
foreign_language_string(lang_il) = "IL".
foreign_language_string(lang_java) = "Java".
foreign_language_string(lang_erlang) = "Erlang".

simple_foreign_language_string(lang_c) = "c".
simple_foreign_language_string(lang_csharp) = "csharp".
simple_foreign_language_string(lang_il) = "il".
simple_foreign_language_string(lang_java) = "java".
simple_foreign_language_string(lang_erlang) = "erlang".

gc_is_conservative(gc_boehm) = yes.
gc_is_conservative(gc_boehm_debug) = yes.
gc_is_conservative(gc_mps) = yes.
gc_is_conservative(gc_none) = no.
gc_is_conservative(gc_accurate) = no.
gc_is_conservative(gc_automatic) = no.

%-----------------------------------------------------------------------------%

:- type globals
    --->    globals(
                options                 :: option_table,
                target                  :: compilation_target,
                gc_method               :: gc_method,
                tags_method             :: tags_method,
                termination_norm        :: termination_norm,
                termination2_norm       :: termination_norm,
                trace_level             :: trace_level,
                trace_suppress_items    :: trace_suppress_items,
                source_file_map         :: maybe(source_file_map),
                have_printed_usage      :: bool,
                may_be_thread_safe      :: bool,
                c_compiler_type         :: c_compiler_type,
                feedback                :: feedback_info
            ).

:- mutable(globals, univ, univ(0), ground,
    [untrailed, attach_to_io_state, thread_local]).

    % Is there extra information about errors available that could be printed
    % out if `-E' were enabled.
    %
:- mutable(extra_error_info, bool, no, ground,
    [untrailed, attach_to_io_state, thread_local]).

    % This mutable is used to control how the parser handles `initialisation'
    % attributes in solver type definitions.  They are not currently part
    % of the language, so by default if we encounter one it is reported
    % as a syntax error.   If the developer-only option
    % `--solver-type-auto-init' is given then we enable support for them.
    %
    % Since this information is only needed at one place in the parser
    % we use this mutable in preference to passing an extra argument
    % throughout the parser.
    %
:- mutable(solver_auto_init_supported, bool, no, ground,
    [untrailed, attach_to_io_state, thread_local]).

globals_init(Options, Target, GC_Method, TagsMethod,
        TerminationNorm, Termination2Norm, TraceLevel, TraceSuppress,
        MaybeThreadSafe, C_CompilerType, Feedback, Globals) :-
    Globals = globals(Options, Target, GC_Method, TagsMethod,
        TerminationNorm, Termination2Norm, TraceLevel, TraceSuppress,
        no, no, MaybeThreadSafe, C_CompilerType, Feedback).

get_options(Globals, Globals ^ options).
get_target(Globals, Globals ^ target).
get_gc_method(Globals, Globals ^ gc_method).
get_tags_method(Globals, Globals ^ tags_method).
get_termination_norm(Globals, Globals ^ termination_norm).
get_termination2_norm(Globals, Globals ^ termination2_norm).
get_trace_level(Globals, Globals ^ trace_level).
get_trace_suppress(Globals, Globals ^ trace_suppress_items).
get_source_file_map(Globals, Globals ^ source_file_map).
get_maybe_thread_safe(Globals, Globals ^ may_be_thread_safe).
get_c_compiler_type(Globals, Globals ^ c_compiler_type).
get_feedback_info(Globals, Globals ^ feedback).

get_backend_foreign_languages(Globals, ForeignLangs) :-
    lookup_accumulating_option(Globals, backend_foreign_languages, LangStrs),
    ForeignLangs = list.map(func(String) = ForeignLang :-
        ( convert_foreign_language(String, ForeignLang0) ->
            ForeignLang = ForeignLang0
        ;
            unexpected(this_file, "io_get_backend_foreign_languages: " ++
                "invalid foreign_language string")
        ), LangStrs).

set_options(Options, Globals, Globals ^ options := Options).

set_option(Option, OptionData, !Globals) :-
    get_options(!.Globals, OptionTable0),
    map.set(OptionTable0, Option, OptionData, OptionTable),
    set_options(OptionTable, !Globals).

set_gc_method(GC_Method, Globals, Globals ^ gc_method := GC_Method).

set_tags_method(Tags_Method, Globals, Globals ^ tags_method := Tags_Method).

set_trace_level(TraceLevel, Globals,
    Globals ^ trace_level := TraceLevel).
set_trace_level_none(Globals,
    Globals ^ trace_level := trace_level_none).

set_source_file_map(SourceFileMap, Globals,
    Globals ^ source_file_map := SourceFileMap).

set_feedback_info(Feedback, Globals,
    Globals ^ feedback := Feedback).

lookup_option(Globals, Option, OptionData) :-
    get_options(Globals, OptionTable),
    map.lookup(OptionTable, Option, OptionData).

%-----------------------------------------------------------------------------%

lookup_bool_option(Globals, Option, Value) :-
    lookup_option(Globals, Option, OptionData),
    ( OptionData = bool(Bool) ->
        Value = Bool
    ;
        unexpected(this_file, "lookup_bool_option: invalid bool option")
    ).

lookup_string_option(Globals, Option, Value) :-
    lookup_option(Globals, Option, OptionData),
    ( OptionData = string(String) ->
        Value = String
    ;
        unexpected(this_file, "lookup_string_option: invalid string option")
    ).

lookup_int_option(Globals, Option, Value) :-
    lookup_option(Globals, Option, OptionData),
    ( OptionData = int(Int) ->
        Value = Int
    ;
        unexpected(this_file, "lookup_int_option: invalid int option")
    ).

lookup_maybe_string_option(Globals, Option, Value) :-
    lookup_option(Globals, Option, OptionData),
    ( OptionData = maybe_string(MaybeString) ->
        Value = MaybeString
    ;
        unexpected(this_file,
            "lookup_string_option: invalid maybe_string option")
    ).

lookup_accumulating_option(Globals, Option, Value) :-
    lookup_option(Globals, Option, OptionData),
    ( OptionData = accumulating(Accumulating) ->
        Value = Accumulating
    ;
        unexpected(this_file,
            "lookup_accumulating_option: invalid accumulating option")
    ).

%-----------------------------------------------------------------------------%

current_grade_supports_tabling(Globals, TablingSupported) :-
    globals.get_target(Globals, Target),
    globals.get_gc_method(Globals, GC_Method),
    globals.lookup_bool_option(Globals, highlevel_data, HighLevelData),
    ( 
        Target = target_c,
        GC_Method \= gc_accurate,
        HighLevelData = no
    ->
        TablingSupported = yes 
    ;
        TablingSupported = no 
    ).

    % Parallel conjunctions only supported on lowlevel C parallel grades.
    % They are not (currently) supported if trailing is enabled.
    %
current_grade_supports_par_conj(Globals, ParConjSupported) :-
    globals.get_target(Globals, Target),
    globals.lookup_bool_option(Globals, highlevel_code, HighLevelCode),
    globals.lookup_bool_option(Globals, parallel, Parallel),
    globals.lookup_bool_option(Globals, use_trail, UseTrail),
    (
        Target = target_c,
        HighLevelCode = no,
        Parallel = yes,
        UseTrail = no
    ->
        ParConjSupported = yes
    ;
        ParConjSupported = no
    ).

current_grade_supports_concurrency(Globals, ThreadsSupported) :-
    globals.get_target(Globals, Target),
    (
        Target = target_c,
        globals.lookup_bool_option(Globals, highlevel_code, HighLevelCode),
        % In high-level C grades we only support threads in .par grades.
        (
            HighLevelCode = no,
            ThreadsSupported = yes
        ;
            HighLevelCode = yes,
            globals.lookup_bool_option(Globals, parallel, Parallel),
            ThreadsSupported = Parallel
        )
    ;
        ( Target = target_erlang
        ; Target = target_il
        ),
        ThreadsSupported = yes
    ;
        % Threads are not yet supported in the Java or x86_64 backends.
        % XXX I'm not sure what their status in the gcc backend is.
        ( Target = target_java
        ; Target = target_asm
        ; Target = target_x86_64
        ),
        ThreadsSupported = no
    ).

want_return_var_layouts(Globals, WantReturnLayouts) :-
    % We need to generate layout info for call return labels
    % if we are using accurate gc or if the user wants uplevel printing.
    (
        (
            get_gc_method(Globals, GC_Method),
            GC_Method = gc_accurate
        ;
            get_trace_level(Globals, TraceLevel),
            get_trace_suppress(Globals, TraceSuppress),
            trace_needs_return_info(TraceLevel, TraceSuppress) = yes
        )
    ->
        WantReturnLayouts = yes
    ;
        WantReturnLayouts = no
    ).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

globals_io_init(Options, Target, GC_Method, TagsMethod, TerminationNorm,
        Termination2Norm, TraceLevel, TraceSuppress, MaybeThreadSafe,
        C_CompilerType, Feedback, !IO) :-
    globals_init(Options, Target, GC_Method, TagsMethod,
        TerminationNorm, Termination2Norm, TraceLevel,
        TraceSuppress, MaybeThreadSafe, C_CompilerType, Feedback, Globals),
    io_set_globals(Globals, !IO),
    getopt_io.lookup_bool_option(Options, solver_type_auto_init,
        AutoInitSupported),
    io_set_solver_auto_init_supported(AutoInitSupported, !IO).

io_get_target(Target, !IO) :-
    io_get_globals(Globals, !IO),
    get_target(Globals, Target).

io_get_gc_method(GC_Method, !IO) :-
    io_get_globals(Globals, !IO),
    get_gc_method(Globals, GC_Method).

io_get_tags_method(Tags_Method, !IO) :-
    io_get_globals(Globals, !IO),
    get_tags_method(Globals, Tags_Method).

io_get_termination_norm(TerminationNorm, !IO) :-
    io_get_globals(Globals, !IO),
    get_termination_norm(Globals, TerminationNorm).

io_get_termination2_norm(Termination2Norm, !IO) :-
    io_get_globals(Globals, !IO),
    get_termination2_norm(Globals, Termination2Norm).

io_get_trace_level(TraceLevel, !IO) :-
    io_get_globals(Globals, !IO),
    get_trace_level(Globals, TraceLevel).

io_get_trace_suppress(TraceSuppress, !IO) :-
    io_get_globals(Globals, !IO),
    get_trace_suppress(Globals, TraceSuppress).

io_get_maybe_thread_safe(MaybeThreadSafe, !IO) :-
    io_get_globals(Globals, !IO),
    get_maybe_thread_safe(Globals, MaybeThreadSafe).

io_get_c_compiler_type(C_CompilerType, !IO) :-
    io_get_globals(Globals, !IO),
    get_c_compiler_type(Globals,  C_CompilerType).

io_get_extra_error_info(ExtraErrorInfo, !IO) :-
    get_extra_error_info(ExtraErrorInfo, !IO).

io_get_any_intermod(AnyIntermod, !IO) :-
    io_get_globals(Globals, !IO),
    lookup_bool_option(Globals, intermodule_optimization, IntermodOpt),
    lookup_bool_option(Globals, intermodule_analysis, IntermodAnalysis),
    AnyIntermod = bool.or(IntermodOpt, IntermodAnalysis).

semipure_get_solver_auto_init_supported(AutoInitSupported) :-
    semipure get_solver_auto_init_supported(AutoInitSupported).

io_get_globals(Globals, !IO) :-
    globals.get_globals(UnivGlobals, !IO),
    ( univ_to_type(UnivGlobals, Globals0) ->
        Globals = Globals0
    ;
        unexpected(this_file, "io_get_globals: univ_to_type failed")
    ).

io_set_globals(Globals, !IO) :-
    type_to_univ(Globals, UnivGlobals),
    globals.set_globals(UnivGlobals, !IO).

%-----------------------------------------------------------------------------%

io_lookup_option(Option, OptionData, !IO) :-
    io_get_globals(Globals, !IO),
    get_options(Globals, OptionTable),
    map.lookup(OptionTable, Option, OptionData).

io_set_option(Option, OptionData, !IO) :-
    io_get_globals(Globals0, !IO),
    get_options(Globals0, OptionTable0),
    map.set(OptionTable0, Option, OptionData, OptionTable),
    set_options(OptionTable, Globals0, Globals),
    io_set_globals(Globals, !IO).

io_set_gc_method(GC_Method, !IO) :-
    io_get_globals(Globals0, !IO),
    set_gc_method(GC_Method, Globals0, Globals),
    io_set_globals(Globals, !IO).

io_set_tags_method(Tags_Method, !IO) :-
    io_get_globals(Globals0, !IO),
    set_tags_method(Tags_Method, Globals0, Globals),
    io_set_globals(Globals, !IO).

io_set_trace_level(TraceLevel, !IO) :-
    io_get_globals(Globals0, !IO),
    set_trace_level(TraceLevel, Globals0, Globals),
    io_set_globals(Globals, !IO).

io_set_extra_error_info(ExtraErrorInfo, !IO) :-
    set_extra_error_info(ExtraErrorInfo, !IO).

io_set_solver_auto_init_supported(AutoInitSupported, !IO) :-
    set_solver_auto_init_supported(AutoInitSupported, !IO).

    % This predicate is needed because mercury_compile.m doesn't know
    % anything about type trace_level.
io_set_trace_level_none(!IO) :-
    io_set_trace_level(trace_level_none, !IO).

%-----------------------------------------------------------------------------%

io_lookup_foreign_language_option(Option, ForeignLang, !IO) :-
    io_lookup_string_option(Option, String, !IO),
    ( convert_foreign_language(String, ForeignLang0) ->
        ForeignLang = ForeignLang0
    ;
        unexpected(this_file, "io_lookup_foreign_language_option: "
            ++ "invalid foreign_language option")
    ).

io_get_backend_foreign_languages(ForeignLangs, !IO) :-
    io_get_globals(Globals, !IO),
    get_backend_foreign_languages(Globals, ForeignLangs).

io_lookup_bool_option(Option, Value, !IO) :-
    io_get_globals(Globals, !IO),
    lookup_bool_option(Globals, Option, Value).

io_lookup_int_option(Option, Value, !IO) :-
    io_get_globals(Globals, !IO),
    lookup_int_option(Globals, Option, Value).

io_lookup_string_option(Option, Value, !IO) :-
    io_get_globals(Globals, !IO),
    lookup_string_option(Globals, Option, Value).

io_lookup_maybe_string_option(Option, Value, !IO) :-
    io_get_globals(Globals, !IO),
    lookup_maybe_string_option(Globals, Option, Value).

io_lookup_accumulating_option(Option, Value, !IO) :-
    io_get_globals(Globals, !IO),
    lookup_accumulating_option(Globals, Option, Value).

%-----------------------------------------------------------------------------%

io_printing_usage(AlreadyPrinted, !IO) :-
    io_get_globals(Globals0, !IO),
    AlreadyPrinted = Globals0 ^ have_printed_usage,
    Globals = Globals0 ^ have_printed_usage := yes,
    io_set_globals(Globals, !IO).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "globals.m".

%-----------------------------------------------------------------------------%
:- end_module globals.
%-----------------------------------------------------------------------------%
