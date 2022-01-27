%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2009-2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: ml_foreign_proc.m.
% Main author: fjh.
%

:- module ml_backend.ml_foreign_proc_gen.
:- interface.

:- import_module hlds.code_model.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_pred.
:- import_module ml_backend.ml_gen_info.
:- import_module ml_backend.mlds.
:- import_module parse_tree.prog_data.

:- import_module list.

:- pred ml_gen_trace_runtime_cond(trace_expr(trace_runtime)::in,
    prog_context::in, list(mlds_defn)::out, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

:- pred ml_gen_ordinary_pragma_foreign_proc(code_model::in,
    pragma_foreign_proc_attributes::in, pred_id::in, proc_id::in,
    list(foreign_arg)::in, list(foreign_arg)::in, string::in,
    prog_context::in, list(mlds_defn)::out, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module backend_libs.builtin_ops.
:- import_module backend_libs.c_util.
:- import_module backend_libs.foreign. % XXX needed for pragma foreign code
:- import_module check_hlds.mode_util.
:- import_module check_hlds.type_util.
:- import_module hlds.hlds_module.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module ml_backend.ml_code_util.
:- import_module ml_backend.ml_global_data.
:- import_module parse_tree.builtin_lib_types.

:- import_module bool.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module require.
:- import_module string.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

ml_gen_trace_runtime_cond(TraceRuntimeCond, Context, Decls, Statements,
        !Info) :-
    Decls = [],
    MLDSContext = mlds_make_context(Context),
    ml_success_lval(!.Info, SuccessLval),
    ml_generate_runtime_cond_code(TraceRuntimeCond, CondRval, !Info),
    Statement = statement(ml_stmt_atomic(assign(SuccessLval, CondRval)),
        MLDSContext),
    Statements = [Statement].

:- pred ml_generate_runtime_cond_code(trace_expr(trace_runtime)::in,
    mlds_rval::out, ml_gen_info::in, ml_gen_info::out) is det.

ml_generate_runtime_cond_code(Expr, CondRval, !Info) :-
    (
        Expr = trace_base(trace_envvar(EnvVar)),
        ml_gen_info_add_env_var_name(EnvVar, !Info),
        EnvVarRval = ml_lval(ml_global_var_ref(env_var_ref(EnvVar))),
        ZeroRval = ml_const(mlconst_int(0)),
        CondRval = ml_binop(ne, EnvVarRval, ZeroRval)
    ;
        Expr = trace_not(ExprA),
        ml_generate_runtime_cond_code(ExprA, RvalA, !Info),
        CondRval = ml_unop(std_unop(logical_not), RvalA)
    ;
        Expr = trace_op(TraceOp, ExprA, ExprB),
        ml_generate_runtime_cond_code(ExprA, RvalA, !Info),
        ml_generate_runtime_cond_code(ExprB, RvalB, !Info),
        (
            TraceOp = trace_or,
            Op = logical_or
        ;
            TraceOp = trace_and,
            Op = logical_and
        ),
        CondRval = ml_binop(Op, RvalA, RvalB)
    ).

ml_gen_ordinary_pragma_foreign_proc(CodeModel, Attributes, PredId, ProcId,
        Args, ExtraArgs, Foreign_Code, Context, Decls, Statements, !Info) :-
    Lang = get_foreign_language(Attributes),
    (
        CodeModel = model_det,
        OrdinaryKind = kind_det
    ;
        CodeModel = model_semi,
        ml_gen_info_get_module_info(!.Info, ModuleInfo),
        module_info_pred_proc_info(ModuleInfo, PredId, ProcId,
            _PredInfo, ProcInfo),
        proc_info_interface_determinism(ProcInfo, Detism),
        determinism_components(Detism, _, MaxSoln),
        (
            MaxSoln = at_most_zero,
            OrdinaryKind = kind_failure
        ;
            ( MaxSoln = at_most_one
            ; MaxSoln = at_most_many
            ; MaxSoln = at_most_many_cc
            ),
            OrdinaryKind = kind_semi
        )
    ;
        CodeModel = model_non,
        OrdinaryDespiteDetism = get_ordinary_despite_detism(Attributes),
        (
            OrdinaryDespiteDetism = no,
            unexpected($module, $pred, "unexpected code model")
        ;
            OrdinaryDespiteDetism = yes,
            OrdinaryKind = kind_semi
        )
    ),
    (
        Lang = lang_c,
        ml_gen_ordinary_pragma_c_proc(OrdinaryKind, Attributes,
            PredId, ProcId, Args, ExtraArgs,
            Foreign_Code, Context, Decls, Statements, !Info)
    ;
        Lang = lang_csharp,
        ml_gen_info_get_target(!.Info, Target),
        (
            Target = target_csharp,
            ml_gen_ordinary_pragma_csharp_java_proc(ml_target_csharp,
                OrdinaryKind, Attributes, PredId, ProcId, Args, ExtraArgs,
                Foreign_Code, Context, Decls, Statements, !Info)
        ;
            Target = target_il,
            ml_gen_ordinary_pragma_managed_proc(OrdinaryKind, Attributes,
                PredId, ProcId, Args, ExtraArgs,
                Foreign_Code, Context, Decls, Statements, !Info)
        ;
            ( Target = target_c
            ; Target = target_java
            ; Target = target_erlang
            ),
            unexpected($module, $pred,
                "C# foreign code not supported for compilation target")
        )
    ;
        Lang = lang_il,
        % XXX should pass OrdinaryKind
        ml_gen_ordinary_pragma_il_proc(CodeModel, Attributes,
            PredId, ProcId, Args, ExtraArgs,
            Foreign_Code, Context, Decls, Statements, !Info)
    ;
        Lang = lang_java,
        ml_gen_ordinary_pragma_csharp_java_proc(ml_target_java, OrdinaryKind,
            Attributes, PredId, ProcId, Args, ExtraArgs,
            Foreign_Code, Context, Decls, Statements, !Info)
    ;
        Lang = lang_erlang,
        unexpected($module, $pred, "unexpected language Erlang")
    ).

:- inst java_or_csharp
    --->    ml_target_java
    ;       ml_target_csharp.

:- pred ml_gen_ordinary_pragma_csharp_java_proc(
    mlds_target_lang::in(java_or_csharp), ordinary_pragma_kind::in,
    pragma_foreign_proc_attributes::in, pred_id::in, proc_id::in,
    list(foreign_arg)::in, list(foreign_arg)::in, string::in,
    prog_context::in, list(mlds_defn)::out, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_ordinary_pragma_csharp_java_proc(TargetLang, OrdinaryKind, Attributes,
        PredId, _ProcId, Args, ExtraArgs, JavaCode, Context, Decls, Statements,
        !Info) :-
    Lang = get_foreign_language(Attributes),

    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    pred_info_get_markers(PredInfo, Markers),
    ( check_marker(Markers, marker_mutable_access_pred) ->
        MutableSpecial = mutable_special_case
    ;
        MutableSpecial = not_mutable_special_case
    ),

    % Generate <declaration of one local variable for each arg>
    ml_gen_pragma_csharp_java_decls(!.Info, MutableSpecial, Args,
        ArgDeclsList),
    expect(unify(ExtraArgs, []), $module, $pred, "extra args"),

    % Generate code to set the values of the input variables.
    ml_gen_pragma_ccsj_input_arg_list(Lang, Args, AssignInputsList, !Info),

    % Generate MLDS statements to assign the values of the output variables.
    ml_gen_pragma_csharp_java_output_arg_list(MutableSpecial, Args, Context,
        AssignOutputsList, ConvDecls, ConvStatements, !Info),

    % Put it all together.

    (
        OrdinaryKind = kind_det,
        SucceededDecl = [],
        AssignSucceeded = []
    ;
        OrdinaryKind = kind_semi,
        ml_success_lval(!.Info, SucceededLval),
        (
            TargetLang = ml_target_java,
            BoolType = "boolean"
        ;
            TargetLang = ml_target_csharp,
            BoolType = "bool"
        ),
        SucceededDecl = [
            raw_target_code("\t" ++ BoolType ++ " SUCCESS_INDICATOR;\n", [])],
        AssignSucceeded = [
            raw_target_code("\t", []),
            target_code_output(SucceededLval),
            raw_target_code(" = SUCCESS_INDICATOR;\n", [])
        ]
    ;
        OrdinaryKind = kind_failure,
        ml_success_lval(!.Info, SucceededLval),
        SucceededDecl = [],
        AssignSucceeded = [
            raw_target_code("\t", []),
            target_code_output(SucceededLval),
            raw_target_code(" = false;\n", [])
        ]
    ),

    Starting_Code = list.condense([
        [raw_target_code("{\n", [])],
        ArgDeclsList,
        SucceededDecl,
        AssignInputsList,
        [user_target_code(JavaCode, yes(Context), [])]
    ]),
    Starting_Code_Stmt = inline_target_code(TargetLang, Starting_Code),
    Starting_Code_Statement = statement(ml_stmt_atomic(Starting_Code_Stmt),
        mlds_make_context(Context)),

    Ending_Code = list.condense([
        AssignSucceeded,
        [raw_target_code("\t}\n", [])]
    ]),
    Ending_Code_Stmt = inline_target_code(TargetLang, Ending_Code),
    Ending_Code_Statement = statement(ml_stmt_atomic(Ending_Code_Stmt),
        mlds_make_context(Context)),

    Statements = list.condense([
        [Starting_Code_Statement],
        AssignOutputsList,
        ConvStatements,
        [Ending_Code_Statement]
    ]),
    Decls = ConvDecls.

:- type ordinary_pragma_kind
    --->    kind_det
    ;       kind_semi
    ;       kind_failure.

    % For ordinary (not model_non) pragma foreign_code in C#,
    % we generate a call to an out-of-line procedure that contains
    % the user's code.
    %
:- pred ml_gen_ordinary_pragma_managed_proc(ordinary_pragma_kind::in,
    pragma_foreign_proc_attributes::in, pred_id::in, proc_id::in,
    list(foreign_arg)::in, list(foreign_arg)::in, string::in,
    prog_context::in, list(mlds_defn)::out, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_ordinary_pragma_managed_proc(OrdinaryKind, Attributes, _PredId, _ProcId,
        Args, ExtraArgs, ForeignCode, Context, Decls, Statements, !Info) :-
    ml_gen_outline_args(Args, OutlineArgs, !Info),
    expect(unify(ExtraArgs, []), $module, $pred, "extra args"),

    ForeignLang = get_foreign_language(Attributes),
    MLDSContext = mlds_make_context(Context),
    ml_gen_info_get_value_output_vars(!.Info, OutputVars),
    ml_gen_var_list(!.Info, OutputVars, OutputVarLvals),
    OutlineStmt = outline_foreign_proc(ForeignLang, OutlineArgs,
        OutputVarLvals, ForeignCode),

    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    module_info_get_name(ModuleInfo, ModuleName),
    MLDSModuleName = mercury_module_name_to_mlds(ModuleName),

    ml_success_lval(!.Info, SucceededLval),
    (
        OrdinaryKind = kind_det,
        SuccessVarLocals = [],
        SuccessIndicatorStatements = []
    ;
        OrdinaryKind = kind_semi,
        % If the code is semidet, we should copy SUCCESS_INDICATOR
        % out into "success".
        SuccessIndicatorVarName = mlds_var_name("SUCCESS_INDICATOR", no),
        SuccessIndicatorDecl = ml_gen_mlds_var_decl(
            mlds_data_var(SuccessIndicatorVarName),
            mlds_native_bool_type,
            gc_no_stmt, MLDSContext),
        SuccessIndicatorLval = ml_var(qual(MLDSModuleName, module_qual,
            SuccessIndicatorVarName), mlds_native_bool_type),
        SuccessIndicatorStatement = ml_gen_assign(SucceededLval,
            ml_lval(SuccessIndicatorLval), Context),
        SuccessVarLocals = [SuccessIndicatorDecl],
        SuccessIndicatorStatements = [SuccessIndicatorStatement]
    ;
        OrdinaryKind = kind_failure,
        unexpected($module, $pred, "kind_failure not yet implemented")
    ),

    OutlineStatement = statement(ml_stmt_atomic(OutlineStmt), MLDSContext),
    Statements = [OutlineStatement | SuccessIndicatorStatements],
    Decls = SuccessVarLocals.

:- pred ml_gen_outline_args(list(foreign_arg)::in, list(outline_arg)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_outline_args([], [], !Info).
ml_gen_outline_args([Arg | Args], [OutlineArg | OutlineArgs], !Info) :-
    Arg = foreign_arg(Var, MaybeVarMode, OrigType, BoxPolicy),
    ml_gen_outline_args(Args, OutlineArgs, !Info),
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    ml_gen_var(!.Info, Var, VarLval),
    (
        BoxPolicy = native_if_possible,
        ml_gen_type(!.Info, OrigType, MldsType)
    ;
        BoxPolicy = always_boxed,
        MldsType = mlds_generic_type
    ),
    (
        MaybeVarMode = yes(ArgName - Mode),
        check_dummy_type(ModuleInfo, OrigType) = is_not_dummy_type,
        not var_is_singleton(ArgName)
    ->
        mode_to_arg_mode(ModuleInfo, Mode, OrigType, ArgMode),
        (
            ArgMode = top_in,
            OutlineArg = ola_in(MldsType, ArgName, ml_lval(VarLval))
        ;
            ArgMode = top_out,
            OutlineArg = ola_out(MldsType, ArgName, VarLval)
        ;
            ArgMode = top_unused,
            OutlineArg = ola_unused
        )
    ;
        OutlineArg = ola_unused
    ).

:- pred ml_gen_ordinary_pragma_il_proc(code_model::in,
    pragma_foreign_proc_attributes::in, pred_id::in, proc_id::in,
    list(foreign_arg)::in, list(foreign_arg)::in, string::in,
    prog_context::in, list(mlds_defn)::out, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_ordinary_pragma_il_proc(_CodeModel, Attributes, PredId, ProcId,
        Args, ExtraArgs, ForeignCode, Context, Decls, Statements, !Info) :-
    expect(unify(ExtraArgs, []), $module, $pred, "extra args"),

    % XXX FIXME need to handle model_semi code here,
    % i.e. provide some equivalent to SUCCESS_INDICATOR.

    % XXX FIXME do we handle top_unused mode correctly?

    MLDSContext = mlds_make_context(Context),

    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    module_info_pred_proc_info(ModuleInfo, PredId, ProcId,
        _PredInfo, ProcInfo),
    proc_info_get_varset(ProcInfo, VarSet),
%   proc_info_get_vartypes(ProcInfo, VarTypes),
    % note that for headvars we must use the types from
    % the procedure interface, not from the procedure body
    ml_gen_info_get_byref_output_vars(!.Info, ByRefOutputVars),
    ml_gen_info_get_value_output_vars(!.Info, CopiedOutputVars),
    module_info_get_name(ModuleInfo, ModuleName),
    MLDSModuleName = mercury_module_name_to_mlds(ModuleName),

    % XXX in the code to marshall parameters, fjh says:
    % We need to handle the case where the types in the procedure interface
    % are polymorphic, but the types of the vars in the `foreign_proc' HLDS
    % goal are concrete instances of those types, which can happen when the
    % procedure is inlined or specialized. The assignment that you
    % generate here with ml_gen_assign won't be type-correct. In general
    % you may need to box/unbox the arguments.

    build_arg_map(Args, map.init, ArgMap),

    % Generate statements to assign by-ref output arguments.
    list.filter_map(ml_gen_pragma_il_proc_assign_output(ModuleInfo,
            MLDSModuleName, ArgMap, VarSet, Context, yes),
        ByRefOutputVars, ByRefAssignStatements),

    % Generate statements to assign copied output arguments.
    list.filter_map(ml_gen_pragma_il_proc_assign_output(ModuleInfo,
            MLDSModuleName, ArgMap, VarSet, Context, no),
        CopiedOutputVars, CopiedOutputStatements),

    ArgVars = list.map(foreign_arg_var, Args),
    % Generate declarations for all the variables, and initializers for
    % input variables.
    list.map(
        ml_gen_pragma_il_proc_var_decl_defn(ModuleInfo, MLDSModuleName,
            ArgMap, VarSet, MLDSContext, ByRefOutputVars, CopiedOutputVars),
        ArgVars, VarLocals),

    OutlineStmt = inline_target_code(ml_target_il, [
        user_target_code(ForeignCode, yes(Context),
            get_target_code_attributes(lang_il,
                get_extra_attributes(Attributes)))
        ]),

    ILCodeFragment = statement(ml_stmt_atomic(OutlineStmt), MLDSContext),
    BlockStatements = [ILCodeFragment | ByRefAssignStatements] ++
        CopiedOutputStatements,
    BlockStatement = statement(ml_stmt_block(VarLocals, BlockStatements),
        mlds_make_context(Context)),
    Statements = [BlockStatement],
    Decls = [].

:- pred build_arg_map(list(foreign_arg)::in, map(prog_var, foreign_arg)::in,
    map(prog_var, foreign_arg)::out) is det.

build_arg_map([], !ArgMap).
build_arg_map([ForeignArg | ForeignArgs], !ArgMap) :-
    ForeignArg = foreign_arg(Var, _, _, _),
    map.det_insert(Var, ForeignArg, !ArgMap),
    build_arg_map(ForeignArgs, !ArgMap).

:- pred ml_gen_pragma_il_proc_assign_output(module_info::in,
    mlds_module_name::in, map(prog_var, foreign_arg)::in, prog_varset::in,
    prog_context::in, bool::in, prog_var::in, statement::out)
    is semidet.

ml_gen_pragma_il_proc_assign_output(ModuleInfo, MLDSModuleName, ArgMap,
        VarSet, Context, IsByRef, Var, Statement) :-
    map.lookup(ArgMap, Var, ForeignArg),
    ForeignArg = foreign_arg(_, MaybeNameMode, Type, BoxPolicy),
    check_dummy_type(ModuleInfo, Type) = is_not_dummy_type,
    (
        BoxPolicy = always_boxed,
        MLDSType = mlds_generic_type
    ;
        BoxPolicy = native_if_possible,
        MLDSType = mercury_type_to_mlds_type(ModuleInfo, Type)
    ),

    VarName = ml_gen_var_name(VarSet, Var),
    QualVarName = qual(MLDSModuleName, module_qual, VarName),
    (
        IsByRef = yes,
        OutputVarLval = ml_mem_ref(ml_lval(ml_var(QualVarName, MLDSType)),
            MLDSType)
    ;
        IsByRef = no,
        OutputVarLval = ml_var(QualVarName, MLDSType)
    ),

    MaybeNameMode = yes(UserVarNameString - _),
    NonMangledVarName = mlds_var_name(UserVarNameString, no),
    QualLocalVarName= qual(MLDSModuleName, module_qual, NonMangledVarName),
    LocalVarLval = ml_var(QualLocalVarName, MLDSType),

    Statement = ml_gen_assign(OutputVarLval, ml_lval(LocalVarLval), Context).

:- pred ml_gen_pragma_il_proc_var_decl_defn(module_info::in,
    mlds_module_name::in, map(prog_var, foreign_arg)::in, prog_varset::in,
    mlds_context::in, list(prog_var)::in, list(prog_var)::in,
    prog_var::in, mlds_defn::out) is det.

ml_gen_pragma_il_proc_var_decl_defn(ModuleInfo, MLDSModuleName, ArgMap, VarSet,
        MLDSContext, ByRefOutputVars, CopiedOutputVars, Var, Defn) :-
    map.lookup(ArgMap, Var, ForeignArg),
    ForeignArg = foreign_arg(_, MaybeNameMode, Type, BoxPolicy),
    VarName = ml_gen_var_name(VarSet, Var),
    (
        MaybeNameMode = yes(UserVarNameString - _),
        NonMangledVarName = mlds_var_name(UserVarNameString, no)
    ;
        MaybeNameMode = no,
        sorry($module, $pred, "no variable name for var")
    ),
    (
        BoxPolicy = always_boxed,
        MLDSType0 = mlds_generic_type
    ;
        BoxPolicy = native_if_possible,
        MLDSType0 = mercury_type_to_mlds_type(ModuleInfo, Type)
    ),

    % Dummy arguments are just mapped to integers, since they shouldn't be
    % used in any way that requires them to have a real value.
    ( check_dummy_type(ModuleInfo, Type) = is_dummy_type ->
        Initializer = no_initializer,
        MLDSType = mlds_native_int_type
    ; list.member(Var, ByRefOutputVars) ->
        Initializer = no_initializer,
        MLDSType = MLDSType0
    ; list.member(Var, CopiedOutputVars) ->
        Initializer = no_initializer,
        MLDSType = MLDSType0
    ;
        MLDSType = MLDSType0,
        QualVarName = qual(MLDSModuleName, module_qual, VarName),
        Initializer = init_obj(ml_lval(ml_var(QualVarName, MLDSType)))
    ),
    % XXX Accurate GC is not supported for IL foreign code;
    % this would only be useful if interfacing to
    % IL when compiling to C, which is not yet supported.
    GCStatement = gc_no_stmt,
    Defn = ml_gen_mlds_var_decl_init(mlds_data_var(NonMangledVarName),
        MLDSType, Initializer, GCStatement, MLDSContext).

    % For ordinary (not model_non) pragma c_proc,
    % we generate code of the following form:
    %
    % model_det pragma_c_proc:
    %
    %   #define MR_ALLOC_ID <allocation id>
    %   #define MR_PROC_LABEL <procedure name>
    %   <declaration of locals needed for boxing/unboxing>
    %   {
    %       <declaration of one local variable for each arg>
    %
    %       <assign input args>
    %       <obtain global lock>
    %       <c code>
    %       <boxing/unboxing of outputs>
    %       <release global lock>
    %       <assign output args>
    %   }
    %   #undef MR_ALLOC_ID
    %   #undef MR_PROC_LABEL
    %
    % model_semi pragma_c_proc:
    %
    %   #define MR_ALLOC_ID <allocation id>
    %   #define MR_PROC_LABEL <procedure name>
    %   <declaration of locals needed for boxing/unboxing>
    %   {
    %       <declaration of one local variable for each arg>
    %       MR_bool SUCCESS_INDICATOR;
    %
    %       <assign input args>
    %       <obtain global lock>
    %       <c code>
    %       <release global lock>
    %       if (SUCCESS_INDICATOR) {
    %           <assign output args>
    %           <boxing/unboxing of outputs>
    %       }
    %
    %       <succeeded> = SUCCESS_INDICATOR;
    %   }
    %   #undef MR_ALLOC_ID
    %   #undef MR_PROC_LABEL
    %
    % We insert a #define MR_ALLOC_ID so that the C code in the Mercury
    % standard library that allocates memory manually can use MR_ALLOC_ID as an
    % argument to incr_hp_msg(), for memory profiling.  It replaces an older
    % macro MR_PROC_LABEL, which is retained only for backwards compatibility.
    %
    % Note that we generate this code directly as
    % `target_code(lang_C, <string>)' instructions in the MLDS.
    % It would probably be nicer to encode more of the structure
    % in the MLDS, so that (a) we could do better MLDS optimization
    % and (b) so that the generation of C code strings could be
    % isolated in mlds_to_c.m. Also we will need to do something
    % different for targets other than C, e.g. when compiling to
    % Java.
    %
:- pred ml_gen_ordinary_pragma_c_proc(ordinary_pragma_kind::in,
    pragma_foreign_proc_attributes::in, pred_id::in, proc_id::in,
    list(foreign_arg)::in, list(foreign_arg)::in, string::in,
    prog_context::in, list(mlds_defn)::out, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_ordinary_pragma_c_proc(OrdinaryKind, Attributes, PredId, _ProcId,
        OrigArgs, ExtraArgs, C_Code, Context, Decls, Statements, !Info) :-
    Lang = get_foreign_language(Attributes),

    % Generate <declaration of one local variable for each arg>
    list.append(OrigArgs, ExtraArgs, Args),
    ml_gen_pragma_c_decls(!.Info, Lang, Args, ArgDeclsList),

    % Generate code to set the values of the input variables.
    ml_gen_pragma_ccsj_input_arg_list(Lang, Args, AssignInputsList, !Info),

    % Generate code to assign the values of the output variables.
    ml_gen_pragma_c_output_arg_list(Args, Context,
        AssignOutputsList, ConvDecls, ConvStatements, !Info),

    % Generate code fragments to obtain and release the global lock.
    ThreadSafe = get_thread_safe(Attributes),
    ml_gen_obtain_release_global_lock(!.Info, ThreadSafe, PredId,
        ObtainLock, ReleaseLock),

    % Generate the MR_ALLOC_ID #define.
    ml_gen_hash_define_mr_alloc_id([C_Code], Context,
        HashDefineAllocId, HashUndefAllocId, !Info),

    % Generate the MR_PROC_LABEL #define.
    ml_gen_hash_define_mr_proc_label(!.Info, HashDefineProcLabel),

    % Put it all together.
    (
        OrdinaryKind = kind_det,
        Starting_C_Code = list.condense([
            [raw_target_code("{\n", [])],
            HashDefineAllocId,
            HashDefineProcLabel,
            ArgDeclsList,
            [raw_target_code("\n", [])],
            AssignInputsList,
            [raw_target_code(ObtainLock, []),
            raw_target_code("\t\t{\n", []),
            user_target_code(C_Code, yes(Context), []),
            raw_target_code("\n\t\t;}\n", [])],
            HashUndefAllocId,
            [raw_target_code("#undef MR_PROC_LABEL\n", []),
            raw_target_code(ReleaseLock, [])],
            AssignOutputsList
        ]),
        Ending_C_Code = [raw_target_code("}\n", [])]
    ;
        OrdinaryKind = kind_failure,
        % We need to treat this case separately, because for these
        % foreign_procs the C code fragment won't assign anything
        % SUCCESS_INDICATOR; the code we generate for CanSucceed = yes
        % would test an undefined value.
        ml_success_lval(!.Info, SucceededLval),
        Starting_C_Code = list.condense([
            [raw_target_code("{\n", [])],
            HashDefineAllocId,
            HashDefineProcLabel,
            ArgDeclsList,
            [raw_target_code("\n", [])],
            AssignInputsList,
            [raw_target_code(ObtainLock, []),
            raw_target_code("\t\t{\n", []),
            user_target_code(C_Code, yes(Context), []),
            raw_target_code("\n\t\t;}\n", [])],
            HashUndefAllocId,
            [raw_target_code("#undef MR_PROC_LABEL\n", []),
            raw_target_code(ReleaseLock, [])]
        ]),
        Ending_C_Code = [
            target_code_output(SucceededLval),
            raw_target_code(" = MR_FALSE;\n", []),
            raw_target_code("}\n", [])
        ]
    ;
        OrdinaryKind = kind_semi,
        ml_success_lval(!.Info, SucceededLval),
        Starting_C_Code = list.condense([
            [raw_target_code("{\n", [])],
            HashDefineAllocId,
            HashDefineProcLabel,
            ArgDeclsList,
            [raw_target_code("\tMR_bool SUCCESS_INDICATOR;\n", []),
            raw_target_code("\n", [])],
            AssignInputsList,
            [raw_target_code(ObtainLock, []),
            raw_target_code("\t\t{\n", []),
            user_target_code(C_Code, yes(Context), []),
            raw_target_code("\n\t\t;}\n", [])],
            HashUndefAllocId,
            [raw_target_code("#undef MR_PROC_LABEL\n", []),
            raw_target_code(ReleaseLock, []),
            raw_target_code("\tif (SUCCESS_INDICATOR) {\n", [])],
            AssignOutputsList
        ]),
        Ending_C_Code = [
            raw_target_code("\t}\n", []),
            target_code_output(SucceededLval),
            raw_target_code(" = SUCCESS_INDICATOR;\n", []),
            raw_target_code("}\n", [])
        ]
    ),
    Starting_C_Code_Stmt = inline_target_code(ml_target_c, Starting_C_Code),
    Ending_C_Code_Stmt = inline_target_code(ml_target_c, Ending_C_Code),
    Starting_C_Code_Statement = statement(
        ml_stmt_atomic(Starting_C_Code_Stmt), mlds_make_context(Context)),
    Ending_C_Code_Statement = statement(ml_stmt_atomic(Ending_C_Code_Stmt),
        mlds_make_context(Context)),
    Statements = [Starting_C_Code_Statement | ConvStatements] ++
        [Ending_C_Code_Statement],
    Decls = ConvDecls.

    % Generate code fragments to obtain and release the global lock
    % (this is used for ensuring thread safety in a concurrent implementation).
    %
:- pred ml_gen_obtain_release_global_lock(ml_gen_info::in,
    proc_thread_safe::in, pred_id::in, string::out, string::out) is det.

ml_gen_obtain_release_global_lock(Info, ThreadSafe, PredId,
        ObtainLock, ReleaseLock) :-
    ml_gen_info_get_module_info(Info, ModuleInfo),
    module_info_get_globals(ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, parallel, Parallel),
    (
        Parallel = yes,
        ThreadSafe = proc_not_thread_safe
    ->
        module_info_pred_info(ModuleInfo, PredId, PredInfo),
        Name = pred_info_name(PredInfo),
        MangledName = c_util.quote_string(Name),
        string.append_list(["\tMR_OBTAIN_GLOBAL_LOCK(""",
            MangledName, """);\n"], ObtainLock),
        string.append_list(["\tMR_RELEASE_GLOBAL_LOCK(""",
            MangledName, """);\n"], ReleaseLock)
    ;
        ObtainLock = "",
        ReleaseLock = ""
    ).

:- pred ml_gen_hash_define_mr_alloc_id(list(string)::in, prog_context::in,
    list(target_code_component)::out, list(target_code_component)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_hash_define_mr_alloc_id(C_Codes, Context, HashDefine, HashUndef,
        !Info) :-
    ml_gen_info_get_globals(!.Info, Globals),
    globals.lookup_bool_option(Globals, profile_memory, ProfileMemory),
    (
        ProfileMemory = yes,
        list.member(C_Code, C_Codes),
        string.sub_string_search(C_Code, "MR_ALLOC_ID", _)
    ->
        ml_gen_info_get_module_info(!.Info, ModuleInfo),
        ml_gen_info_get_pred_id(!.Info, PredId),
        ml_gen_info_get_proc_id(!.Info, ProcId),
        ml_gen_info_get_global_data(!.Info, GlobalData0),
        ml_gen_proc_label(ModuleInfo, PredId, ProcId, ProcLabel, _Module),
        ml_gen_alloc_site(ProcLabel, no, 0, Context, AllocId,
            GlobalData0, GlobalData),
        ml_gen_info_set_global_data(GlobalData, !Info),
        HashDefine = [
            raw_target_code("#define MR_ALLOC_ID ", []),
            target_code_alloc_id(AllocId),
            raw_target_code("\n", [])],
        HashUndef = [raw_target_code("#undef MR_ALLOC_ID\n", [])]
    ;
        HashDefine = [],
        HashUndef = []
    ).

:- pred ml_gen_hash_define_mr_proc_label(ml_gen_info::in,
    list(target_code_component)::out) is det.

ml_gen_hash_define_mr_proc_label(Info, HashDefine) :-
    ml_gen_info_get_module_info(Info, ModuleInfo),
    % Note that we use the pred_id and proc_id of the current procedure,
    % not the one that the pragma foreign_code originally came from.
    % There may not be any function address for the latter, e.g. if it
    % has been inlined and the original definition optimized away.
    ml_gen_info_get_pred_id(Info, PredId),
    ml_gen_info_get_proc_id(Info, ProcId),
    ml_gen_proc_label(ModuleInfo, PredId, ProcId, Name, Module),
    HashDefine = [raw_target_code("#define MR_PROC_LABEL ", []),
        target_code_name(qual(Module, module_qual, Name)),
        raw_target_code("\n", [])].

:- func get_target_code_attributes(foreign_language,
    pragma_foreign_proc_extra_attributes) = target_code_attributes.

get_target_code_attributes(_Lang, []) = [].
get_target_code_attributes(Lang, [ProcAttr | ProcAttrs]) = TargetAttrs :-
    TargetAttrs1 = get_target_code_attributes(Lang, ProcAttrs),
    (
        ProcAttr = max_stack_size(N),
        (
            Lang = lang_il,
            TargetAttrs = [max_stack_size(N) | TargetAttrs1]
        ;
            ( Lang = lang_c
            ; Lang = lang_csharp
            ; Lang = lang_java
            ; Lang = lang_erlang
            ),
            TargetAttrs = TargetAttrs1
        )
    ;
        ( ProcAttr = refers_to_llds_stack
        ; ProcAttr = backend(_)
        ; ProcAttr = needs_call_standard_output_registers
        ),
        TargetAttrs = TargetAttrs1
    ).

%---------------------------------------------------------------------------%

    % ml_gen_pragma_c_decls generates C code to declare the arguments
    % for a `pragma foreign_proc' declaration.
    %
:- pred ml_gen_pragma_c_decls(ml_gen_info::in, foreign_language::in,
    list(foreign_arg)::in, list(target_code_component)::out) is det.

ml_gen_pragma_c_decls(_, _, [], []).
ml_gen_pragma_c_decls(Info, Lang, [Arg | Args], [Decl | Decls]) :-
    ml_gen_pragma_c_decl(Info, Lang, Arg, Decl),
    ml_gen_pragma_c_decls(Info, Lang, Args, Decls).

    % ml_gen_pragma_c_decl generates C code to declare an argument
    % of a `pragma foreign_proc' declaration.
    %
:- pred ml_gen_pragma_c_decl(ml_gen_info::in, foreign_language::in,
    foreign_arg::in, target_code_component::out) is det.

ml_gen_pragma_c_decl(Info, Lang, Arg, Decl) :-
    Arg = foreign_arg(_Var, MaybeNameAndMode, Type, BoxPolicy),
    ml_gen_info_get_module_info(Info, ModuleInfo),
    (
        MaybeNameAndMode = yes(ArgName - _Mode),
        not var_is_singleton(ArgName)
    ->
        (
            BoxPolicy = always_boxed,
            TypeString = "MR_Word"
        ;
            BoxPolicy = native_if_possible,
            TypeString = mercury_exported_type_to_string(ModuleInfo, Lang,
                Type)
        ),
        string.format("\t%s %s;\n", [s(TypeString), s(ArgName)], DeclString)
    ;
        % If the variable doesn't occur in the ArgNames list,
        % it can't be used, so we just ignore it.
        DeclString = ""
    ),
    Decl = raw_target_code(DeclString, []).

%-----------------------------------------------------------------------------%

    % The foreign code generated to implement mutable variables requires
    % special case treatment, enabled by passing `mutable_special_case'.
    %
:- type mutable_special_case
    --->    mutable_special_case
    ;       not_mutable_special_case.

    % ml_gen_pragma_csharp_java_decls generates C# or Java code to declare the
    % arguments for a `pragma foreign_proc' declaration.
    %
:- pred ml_gen_pragma_csharp_java_decls(ml_gen_info::in,
    mutable_special_case::in, list(foreign_arg)::in,
    list(target_code_component)::out) is det.

ml_gen_pragma_csharp_java_decls(_, _, [], []).
ml_gen_pragma_csharp_java_decls(Info, MutableSpecial, [Arg | Args],
        Decl ++ Decls) :-
    ml_gen_pragma_csharp_java_decl(Info, MutableSpecial, Arg, Decl),
    ml_gen_pragma_csharp_java_decls(Info, MutableSpecial, Args, Decls).

    % ml_gen_pragma_csharp_java_decl generates C# or Java code to declare an
    % argument of a `pragma foreign_proc' declaration.
    %
:- pred ml_gen_pragma_csharp_java_decl(ml_gen_info::in,
    mutable_special_case::in, foreign_arg::in,
    list(target_code_component)::out) is det.

ml_gen_pragma_csharp_java_decl(Info, MutableSpecial, Arg, Decl) :-
    Arg = foreign_arg(_Var, MaybeNameAndMode, Type, _BoxPolicy),
    ml_gen_info_get_module_info(Info, ModuleInfo),
    (
        MaybeNameAndMode = yes(ArgName - _Mode),
        not var_is_singleton(ArgName)
    ->
        (
            MutableSpecial = not_mutable_special_case,
            MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, Type)
        ;
            MutableSpecial = mutable_special_case,
            % The code for mutables is generated in the frontend.
            ( Type = int_type ->
                MLDS_Type = mlds_native_int_type
            ;
                MLDS_Type = mlds_generic_type
            )
        ),
        TypeDecl = target_code_type(MLDS_Type),
        string.format(" %s;\n", [s(ArgName)], VarDeclString),
        VarDecl = raw_target_code(VarDeclString, []),
        Decl = [TypeDecl, VarDecl]
    ;
        % If the variable doesn't occur in the ArgNames list,
        % it can't be used, so we just ignore it.
        Decl = []
    ).

%-----------------------------------------------------------------------------%

    % var_is_singleton determines whether or not a given foreign_proc variable
    % is singleton (i.e. starts with an underscore)
    %
    % Singleton vars should be ignored when generating the declarations for
    % foreign_proc arguments because:
    %
    %   - they should not appear in the C code
    %   - they could clash with the system name space
    %
:- pred var_is_singleton(string::in) is semidet.

var_is_singleton(Name) :-
    string.first_char(Name, '_', _).

%-----------------------------------------------------------------------------%

    % For C, C# and Java.
    %
:- pred ml_gen_pragma_ccsj_input_arg_list(foreign_language::in,
    list(foreign_arg)::in, list(target_code_component)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_ccsj_input_arg_list(Lang, ArgList, AssignInputs, !Info) :-
    list.map_foldl(ml_gen_pragma_ccsj_input_arg(Lang), ArgList,
        AssignInputsList, !Info),
    list.condense(AssignInputsList, AssignInputs).

    % ml_gen_pragma_c_input_arg generates C, C# or Java code to assign the
    % value of an input arg for a `pragma foreign_proc' declaration.
    %
:- pred ml_gen_pragma_ccsj_input_arg(foreign_language::in, foreign_arg::in,
    list(target_code_component)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_ccsj_input_arg(Lang, ForeignArg, AssignInput, !Info) :-
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    (
        ForeignArg = foreign_arg(Var, MaybeNameAndMode, OrigType, BoxPolicy),
        MaybeNameAndMode = yes(ArgName - Mode),
        not var_is_singleton(ArgName),
        mode_to_arg_mode(ModuleInfo, Mode, OrigType, top_in)
    ->
        ml_gen_pragma_ccsj_gen_input_arg(Lang, Var, ArgName, OrigType,
            BoxPolicy, AssignInput, !Info)
    ;
        % If the variable doesn't occur in the ArgNames list,
        % it can't be used, so we just ignore it.
        AssignInput = []
    ).

:- pred ml_gen_pragma_ccsj_gen_input_arg(foreign_language::in, prog_var::in,
    string::in, mer_type::in, box_policy::in, list(target_code_component)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_ccsj_gen_input_arg(Lang, Var, ArgName, OrigType, BoxPolicy,
        AssignInput, !Info) :-
    ml_variable_type(!.Info, Var, VarType),
    ml_gen_var(!.Info, Var, VarLval),
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    IsDummy = check_dummy_type(ModuleInfo, VarType),
    (
        IsDummy = is_dummy_type,
        % The variable may not have been declared, so we need to generate
        % a dummy value for it. Using a constant here is more efficient than
        % using private_builtin.dummy_var, which is what ml_gen_var will have
        % generated for this variable.
        ArgRval = dummy_arg_rval(Lang, ModuleInfo, VarType)
    ;
        IsDummy = is_not_dummy_type,
        ml_gen_box_or_unbox_rval(ModuleInfo, VarType, OrigType, BoxPolicy,
            ml_lval(VarLval), ArgRval)
    ),
    % At this point we have an rval with the right type for *internal* use
    % in the code generated by the Mercury compiler's MLDS back-end. We need
    % to convert this to the appropriate type to use for the C interface.
    ExportedType = foreign.to_exported_type(ModuleInfo, OrigType),
    TypeString = exported_type_to_string(Lang, ExportedType),
    module_info_get_globals(ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, highlevel_data, HighLevelData),
    (
        input_arg_assignable_with_cast(Lang, HighLevelData, OrigType,
            ExportedType, TypeString, Cast)
    ->
        % In the usual case, we can just use an assignment and perhaps a cast.
        string.format("\t%s = %s ", [s(ArgName), s(Cast)], AssignToArgName),
        AssignInput = [
            raw_target_code(AssignToArgName, []),
            target_code_input(ArgRval),
            raw_target_code(";\n", [])
        ]
    ;
        % For foreign types (without the `can_pass_as_mercury_type' assertion)
        % we need to call MR_MAYBE_UNBOX_FOREIGN_TYPE.
        AssignInput = [
            raw_target_code("\tMR_MAYBE_UNBOX_FOREIGN_TYPE("
                ++ TypeString ++ ", ", []),
            target_code_input(ArgRval),
            raw_target_code(", " ++ ArgName ++ ");\n", [])
        ]
    ).

:- func dummy_arg_rval(foreign_language, module_info, mer_type) = mlds_rval.

dummy_arg_rval(Lang, ModuleInfo, Type) = Rval :-
    MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, Type),
    ( Lang = lang_java ->
        Rval = ml_const(mlconst_null(MLDS_Type))
    ;
        Rval = ml_const(mlconst_int(0))
    ).

:- pred input_arg_assignable_with_cast(foreign_language::in, bool::in,
    mer_type::in, exported_type::in, string::in, string::out) is semidet.

input_arg_assignable_with_cast(Lang, HighLevelData, OrigType, ExportedType,
        TypeString, Cast) :-
    (
        Lang = lang_c,
        HighLevelData = yes,
        IsForeign = foreign.is_foreign_type(ExportedType),
        (
            IsForeign = yes(Assertions),
            list.member(foreign_type_can_pass_as_mercury_type, Assertions)
        ;
            IsForeign = no
        ),
        % In general, the types used for the C interface are not the same
        % as the types used by --high-level-data, so we always use a cast
        % here. (Strictly speaking the cast is not needed for a few cases
        % like `int', but it doesn't do any harm.)
        Cast = "(" ++ TypeString ++ ")"
    ;
        Lang = lang_c,
        HighLevelData = no,
        ( OrigType = type_variable(_, _) ->
            % For --no-high-level-data, we only need to use a cast for
            % polymorphic types, which are `MR_Word' in the C interface but
            % `MR_Box' in the MLDS back-end.
            Cast = "(MR_Word)"
        ;
            IsForeign = foreign.is_foreign_type(ExportedType),
            (
                IsForeign = yes(Assertions),
                list.member(foreign_type_can_pass_as_mercury_type, Assertions),
                Cast = "(" ++ TypeString ++ ")"
            ;
                IsForeign = no,
                Cast = ""
            )
        )
    ;
        Lang = lang_java,
        % There is no difference between types used by the foreign interface
        % and the generated code.
        Cast = ""
    ;
        Lang = lang_csharp,
        Cast = ""
    ;
        ( Lang = lang_il
        ; Lang = lang_erlang
        ),
        unexpected($module, $pred, "unexpected language")
    ).

:- pred ml_gen_pragma_csharp_java_output_arg_list(mutable_special_case::in,
    list(foreign_arg)::in, prog_context::in, list(statement)::out,
    list(mlds_defn)::out, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_csharp_java_output_arg_list(_, [], _, [], [], [], !Info).
ml_gen_pragma_csharp_java_output_arg_list(MutableSpecial, [JavaArg | JavaArgs],
        Context, Statements, ConvDecls, ConvStatements, !Info) :-
    ml_gen_pragma_csharp_java_output_arg(MutableSpecial, JavaArg, Context,
        Statements1, ConvDecls1, ConvStatements1, !Info),
    ml_gen_pragma_csharp_java_output_arg_list(MutableSpecial, JavaArgs,
        Context, Statements2, ConvDecls2, ConvStatements2, !Info),
    Statements = Statements1 ++ Statements2,
    ConvDecls = ConvDecls1 ++ ConvDecls2,
    ConvStatements = ConvStatements1 ++ ConvStatements2.

    % ml_gen_pragma_csharp_java_output_arg generates MLDS statements
    % to assign the value of an output arg for a `pragma foreign_proc'
    % declaration.
    %
:- pred ml_gen_pragma_csharp_java_output_arg(mutable_special_case::in,
    foreign_arg::in, prog_context::in, list(statement)::out,
    list(mlds_defn)::out, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_csharp_java_output_arg(MutableSpecial, ForeignArg, Context,
        AssignOutput, ConvDecls, ConvOutputStatements, !Info) :-
    ForeignArg = foreign_arg(Var, MaybeNameAndMode, OrigType, BoxPolicy),
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    (
        MaybeNameAndMode = yes(ArgName - Mode),
        not var_is_singleton(ArgName),
        check_dummy_type(ModuleInfo, OrigType) = is_not_dummy_type,
        mode_to_arg_mode(ModuleInfo, Mode, OrigType, top_out)
    ->
        % Create a target lval with the right type for *internal* use in the
        % code generated by the Mercury compiler's MLDS back-end.
        ml_variable_type(!.Info, Var, VarType),
        ml_gen_var(!.Info, Var, VarLval),
        ml_gen_box_or_unbox_lval(VarType, OrigType, BoxPolicy,
            VarLval, mlds_var_name(ArgName, no), Context, no, 0,
            ArgLval, ConvDecls, _ConvInputStatements,
            ConvOutputStatements, !Info),
        MLDSType = mercury_type_to_mlds_type(ModuleInfo, OrigType),
        module_info_get_name(ModuleInfo, ModuleName),
        MLDSModuleName = mercury_module_name_to_mlds(ModuleName),
        NonMangledVarName = mlds_var_name(ArgName, no),
        QualLocalVarName = qual(MLDSModuleName, module_qual,
            NonMangledVarName),
        LocalVarLval = ml_var(QualLocalVarName, MLDSType),
        (
            MutableSpecial = not_mutable_special_case,
            Rval = ml_lval(LocalVarLval)
        ;
            MutableSpecial = mutable_special_case,
            % The code for mutables is generated in the frontend.
            ( OrigType = int_type ->
                Rval = ml_lval(LocalVarLval)
            ;
                Rval = ml_unop(unbox(MLDSType), ml_lval(LocalVarLval))
            )
        ),
        AssignOutput = [ml_gen_assign(ArgLval, Rval, Context)]
    ;
        % If the variable doesn't occur in the ArgNames list,
        % it can't be used, so we just ignore it.
        AssignOutput = [],
        ConvDecls = [],
        ConvOutputStatements = []
    ).

:- pred ml_gen_pragma_c_output_arg_list(list(foreign_arg)::in,
    prog_context::in, list(target_code_component)::out,
    list(mlds_defn)::out, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_c_output_arg_list([], _, [], [], [], !Info).
ml_gen_pragma_c_output_arg_list([ForeignArg | ForeignArgs], Context,
        Components, ConvDecls, ConvStatements, !Info) :-
    ml_gen_pragma_c_output_arg(ForeignArg, Context, Components1,
        ConvDecls1, ConvStatements1, !Info),
    ml_gen_pragma_c_output_arg_list(ForeignArgs, Context,
        Components2, ConvDecls2, ConvStatements2, !Info),
    Components = Components1 ++ Components2,
    ConvDecls = ConvDecls1 ++ ConvDecls2,
    ConvStatements = ConvStatements1 ++ ConvStatements2.

    % ml_gen_pragma_c_output_arg generates C code to assign the value of
    % an output arg for a `pragma foreign_proc' declaration.
    %
:- pred ml_gen_pragma_c_output_arg(foreign_arg::in,
    prog_context::in, list(target_code_component)::out,
    list(mlds_defn)::out, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_c_output_arg(Arg, Context, AssignOutput, ConvDecls,
        ConvOutputStatements, !Info) :-
    Arg = foreign_arg(Var, MaybeNameAndMode, OrigType, BoxPolicy),
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    (
        MaybeNameAndMode = yes(ArgName - Mode),
        not var_is_singleton(ArgName),
        check_dummy_type(ModuleInfo, OrigType) = is_not_dummy_type,
        mode_to_arg_mode(ModuleInfo, Mode, OrigType, top_out)
    ->
        ml_gen_pragma_c_gen_output_arg(Var, ArgName, OrigType, BoxPolicy,
            Context, AssignOutput, ConvDecls, ConvOutputStatements, !Info)
    ;
        % If the variable doesn't occur in the ArgNames list,
        % it can't be used, so we just ignore it.
        AssignOutput = [],
        ConvDecls = [],
        ConvOutputStatements = []
    ).

:- pred ml_gen_pragma_c_gen_output_arg(prog_var::in,
    string::in, mer_type::in, box_policy::in, prog_context::in,
    list(target_code_component)::out,
    list(mlds_defn)::out, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_c_gen_output_arg(Var, ArgName, OrigType, BoxPolicy,
        Context, AssignOutput, ConvDecls, ConvOutputStatements, !Info) :-
    ml_variable_type(!.Info, Var, VarType),
    ml_gen_var(!.Info, Var, VarLval),
    ml_gen_box_or_unbox_lval(VarType, OrigType, BoxPolicy, VarLval,
        mlds_var_name(ArgName, no), Context, no, 0, ArgLval,
        ConvDecls, _ConvInputStatements, ConvOutputStatements, !Info),
    % At this point we have an lval with the right type for *internal* use
    % in the code generated by the Mercury compiler's MLDS back-end. We need
    % to convert this to the appropriate type to use for the C interface.
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    ExportedType = foreign.to_exported_type(ModuleInfo, OrigType),
    TypeString = exported_type_to_string(lang_c, ExportedType),
    IsForeign = foreign.is_foreign_type(ExportedType),
    (
        (
            IsForeign = no,
            Cast = no
        ;
            IsForeign = yes(Assertions),
            list.member(foreign_type_can_pass_as_mercury_type, Assertions),
            Cast = yes
        )
    ->
        % In the usual case, we can just use an assignment,
        % perhaps with a cast.
        ml_gen_info_get_high_level_data(!.Info, HighLevelData),
        (
            HighLevelData = yes,
            % In general, the types used for the C interface are not the same
            % as the types used by --high-level-data, so we always use a cast
            % here. (Strictly speaking the cast is not needed for a few cases
            % like `int', but it doesn't do any harm.) Note that we can't
            % easily obtain the type string for the RHS of the assignment,
            % so instead we cast the LHS.
            LHS_Cast = "* (" ++ TypeString ++ " *) &",
            RHS_Cast = ""
        ;
            HighLevelData = no,
            % For --no-high-level-data, we only need to use a cast is for
            % polymorphic types, which are `MR_Word' in the C interface but
            % `MR_Box' in the MLDS back-end.
            (
                ( OrigType = type_variable(_, _)
                ; Cast = yes
                )
            ->
                RHS_Cast = "(MR_Box) "
            ;
                RHS_Cast = ""
            ),
            LHS_Cast = ""
        ),
        string.format(" = %s%s;\n", [s(RHS_Cast), s(ArgName)],
            AssignFromArgName),
        string.format("\t%s ", [s(LHS_Cast)], AssignTo),
        AssignOutput = [
            raw_target_code(AssignTo, []),
            target_code_output(ArgLval),
            raw_target_code(AssignFromArgName, [])
        ]
    ;
        % For foreign types, we need to call MR_MAYBE_BOX_FOREIGN_TYPE.
        AssignOutput = [
            raw_target_code("\tMR_MAYBE_BOX_FOREIGN_TYPE("
                ++ TypeString ++ ", " ++ ArgName ++ ", ", []),
            target_code_output(ArgLval),
            raw_target_code(");\n", [])
        ]
    ).

%-----------------------------------------------------------------------------%
:- end_module ml_backend.ml_foreign_proc_gen.
%-----------------------------------------------------------------------------%
