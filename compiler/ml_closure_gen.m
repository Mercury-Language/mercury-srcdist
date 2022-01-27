%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1999-2012 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: ml_closure_gen.m
% Main author: fjh
%
% This module is part of the MLDS code generator.
% It handles generation of MLDS code to construct closures.
%
%-----------------------------------------------------------------------------%

:- module ml_backend.ml_closure_gen.
:- interface.

:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_pred.
:- import_module ml_backend.ml_gen_info.
:- import_module ml_backend.mlds.
:- import_module parse_tree.prog_data.

:- import_module list.

%-----------------------------------------------------------------------------%

    % ml_gen_closure(PredId, ProcId, Var, ArgVars, ArgModes,
    %   HowToConstruct, Context, Decls, Statements):
    %
    % Generate code to construct a closure for the procedure specified
    % by PredId and ProcId, with the partially applied arguments specified
    % by ArgVars (and ArgModes), and to store the pointer to the resulting
    % closure in Var.
    %
:- pred ml_gen_closure(pred_id::in, proc_id::in, prog_var::in, prog_vars::in,
    list(uni_mode)::in, how_to_construct::in, prog_context::in,
    list(statement)::out, ml_gen_info::in, ml_gen_info::out) is det.

    % ml_gen_closure_wrapper(PredId, ProcId, Offset, NumClosureArgs,
    %   Context, WrapperFuncRval, WrapperFuncType):
    %
    % Generates a wrapper function which unboxes the input arguments,
    % calls the specified procedure, passing it some extra arguments
    % from the closure, and then boxes the output arguments.
    % It adds the definition of this wrapper function to the extra_defns
    % field in the ml_gen_info, and return the wrapper function's
    % rval and type.
    %
    % The ClosureKind parameter specifies whether the closure is
    % an ordinary closure, used for higher-order procedure calls,
    % or a typeclass_info, used for class method calls, or a call
    % to a special pred.
    % The NumClosuresArgs parameter specifies how many arguments
    % to extract from the closure.
    %
:- pred ml_gen_closure_wrapper(pred_id::in, proc_id::in, closure_kind::in,
    int::in, prog_context::in, mlds_rval::out, mlds_type::out,
    ml_gen_info::in, ml_gen_info::out) is det.

:- type closure_kind
    --->    higher_order_proc_closure
    ;       typeclass_info_closure
    ;       special_pred_closure.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

% XXX The modules from the LLDS backend should not be used here.
:- import_module backend_libs.pseudo_type_info.
:- import_module backend_libs.rtti.
:- import_module check_hlds.mode_util.
:- import_module check_hlds.type_util.
:- import_module hlds.code_model.
:- import_module hlds.hlds_module.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module ll_backend.
:- import_module ll_backend.continuation_info. % for `generate_closure_layout'
:- import_module ll_backend.llds.              % for `layout_locn'
:- import_module ll_backend.stack_layout.      % for `represent_locn_as_int'
:- import_module mdbcomp.prim_data.
:- import_module ml_backend.ml_accurate_gc.
:- import_module ml_backend.ml_call_gen.
:- import_module ml_backend.ml_code_util.
:- import_module ml_backend.ml_global_data.
:- import_module ml_backend.ml_unify_gen.
:- import_module ml_backend.rtti_to_mlds.
:- import_module parse_tree.builtin_lib_types.
:- import_module parse_tree.prog_type.

:- import_module assoc_list.
:- import_module bool.
:- import_module int.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module require.
:- import_module set.
:- import_module string.
:- import_module term.

%-----------------------------------------------------------------------------%

ml_gen_closure(PredId, ProcId, Var, ArgVars, ArgModes, HowToConstruct, Context,
        Statements, !Info) :-
    % This constructs a closure.
    % The representation of closures for the LLDS backend is defined in
    % runtime/mercury_ho_call.h.
    % XXX should we use a different representation for closures
    % in the MLDS backend?

    % Generate a value for the closure layout; this is a static constant
    % that holds information about the structure of this closure.
    ml_gen_closure_layout(PredId, ProcId, Context,
        ClosureLayoutRval0, ClosureLayoutType0, !Info),

    % Generate a wrapper function which just unboxes the arguments and then
    % calls the specified procedure, and put the address of the wrapper
    % function in the closure.
    %
    % ml_gen_closure_wrapper will insert the wrapper function in the
    % extra_defns field in the ml_gen_info; ml_gen_proc will extract it
    % and will insert it before the mlds_defn for the current procedure.
    %
    list.length(ArgVars, NumArgs),
    ml_gen_closure_wrapper(PredId, ProcId, higher_order_proc_closure,
        NumArgs, Context, WrapperFuncRval0, WrapperFuncType0, !Info),

    % Compute the rval which holds the number of arguments
    NumArgsRval0 = ml_const(mlconst_int(NumArgs)),
    NumArgsType0 = mlds_native_int_type,

    % Put all the extra arguments of the closure together
    % Note that we need to box these arguments.
    NumArgsRval = ml_unop(box(NumArgsType0), NumArgsRval0),
    NumArgsType = mlds_generic_type,
    WrapperFuncRval = ml_unop(box(WrapperFuncType0), WrapperFuncRval0),
    WrapperFuncType = mlds_generic_type,
    ClosureLayoutRval = ml_unop(box(ClosureLayoutType0), ClosureLayoutRval0),
    ClosureLayoutType = mlds_generic_type,
    ExtraArgRvals = [ClosureLayoutRval, WrapperFuncRval, NumArgsRval],
    ExtraArgTypes = [ClosureLayoutType, WrapperFuncType, NumArgsType],

    % The pointer will not be tagged (i.e. the tag will be zero).
    MaybeConsId = no,
    MaybeConsName = no,
    PTag = 0,
    MaybeSTag = no,

    % Generate a `new_object' statement (or static constant) for the closure.
    ml_gen_new_object(MaybeConsId, MaybeConsName, PTag, MaybeSTag,
        Var, ExtraArgRvals, ExtraArgTypes, ArgVars, ArgModes, [],
        HowToConstruct, Context, Statements, !Info).

    % Generate a value for the closure layout struct.
    % See MR_Closure_Layout in ../runtime/mercury_ho_call.h.
    %
    % Note that the code here is similar to code in stack_layout.m;
    % any changes here may need to be reflected there, and vice versa.
    %
:- pred ml_gen_closure_layout(pred_id::in, proc_id::in, prog_context::in,
    mlds_rval::out, mlds_type::out, ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_closure_layout(PredId, ProcId, Context,
        ClosureLayoutAddrRval, ClosureLayoutType, !Info) :-
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    continuation_info.generate_closure_layout(ModuleInfo, PredId, ProcId,
        ClosureLayoutInfo),

    some [!GlobalData] (
        ml_gen_info_get_global_data(!.Info, !:GlobalData),

        ml_gen_closure_proc_id(ModuleInfo, Context, InitProcId, _ProcIdType,
            !GlobalData),

        ClosureLayoutInfo = closure_layout_info(ClosureArgs, TVarLocnMap),
        ml_stack_layout_construct_closure_args(ModuleInfo, ClosureArgs,
            ClosureArgInitsAndTypes, !GlobalData),
        assoc_list.keys(ClosureArgInitsAndTypes, ClosureArgInits),

        ml_stack_layout_construct_tvar_vector(ModuleInfo, "typevar_vector",
            Context, TVarLocnMap, TVarVectorRval, TVarVectorType, !GlobalData),
        InitTVarVector =
            init_obj(ml_unop(box(TVarVectorType), TVarVectorRval)),
        Inits = [InitProcId, InitTVarVector | ClosureArgInits],
        % _ArgTypes = [ProcIdType, TVarVectorType | ClosureArgTypes],

        % XXX There's no way in C to properly represent this type,
        % since it is a struct that ends with a variable-length array.
        % For now we just treat the whole struct as an array.
        module_info_get_name(ModuleInfo, ModuleName),
        MLDS_ModuleName = mercury_module_name_to_mlds(ModuleName),
        ClosureLayoutType = mlds_array_type(mlds_generic_type),
        ml_gen_static_scalar_const_addr(MLDS_ModuleName, "closure_layout",
            ClosureLayoutType, init_array(Inits), Context,
            ClosureLayoutAddrRval, !GlobalData),
        ml_gen_info_set_global_data(!.GlobalData, !Info)
    ).

:- pred ml_gen_closure_proc_id(module_info::in, prog_context::in,
    mlds_initializer::out, mlds_type::out,
    ml_global_data::in, ml_global_data::out) is det.

ml_gen_closure_proc_id(_ModuleInfo, _Context, InitProcId, ProcIdType,
        !GlobalData) :-
    % XXX currently we don't fill in the ProcId field!
    InitProcId = init_obj(ml_const(mlconst_null(ProcIdType))),
    ProcIdType = mlds_generic_type.

%   module_info_get_name(ModuleInfo, ModuleName),
%   term.context_file(Context, FileName),
%   term.context_line(Context, LineNumber),
%   % XXX We don't have the GoalInfo here,
%   %     so we can't compute the goal path correctly
%   %   goal_info_get_goal_path(GoalInfo, GoalPath),
%   %   trace.path_to_string(GoalPath, GoalPathStr),
%   GoalPathStr = "",
%   % DataAddr = layout_addr(
%   %   closure_proc_id(CallerProcLabel, SeqNo, ClosureProcLabel)),
%   % Data = layout_data(closure_proc_id_data(CallerProcLabel, SeqNo,
%   %   ClosureProcLabel, ModuleName, FileName, LineNumber, GoalPath)),
%   % InitProcId = init_obj(const(data_addr_const(DataAddr))),
%   % ProcIdType = ...

:- pred ml_stack_layout_construct_closure_args(module_info::in,
    list(closure_arg_info)::in, assoc_list(mlds_initializer, mlds_type)::out,
    ml_global_data::in, ml_global_data::out) is det.

ml_stack_layout_construct_closure_args(ModuleInfo, ClosureArgs,
        ClosureArgInits, !GlobalData) :-
    list.map_foldl(ml_stack_layout_construct_closure_arg_rval(ModuleInfo),
        ClosureArgs, ArgInitsAndTypes, !GlobalData),
    Length = list.length(ArgInitsAndTypes),
    LengthRval = ml_const(mlconst_int(Length)),
    CastLengthRval = ml_unop(box(LengthType), LengthRval),
    LengthType = mlds_native_int_type,
    LengthInitAndType = init_obj(CastLengthRval) - LengthType,
    ClosureArgInits = [LengthInitAndType | ArgInitsAndTypes].

:- pred ml_stack_layout_construct_closure_arg_rval(module_info::in,
    closure_arg_info::in, pair(mlds_initializer, mlds_type)::out,
    ml_global_data::in, ml_global_data::out) is det.

ml_stack_layout_construct_closure_arg_rval(ModuleInfo, ClosureArg,
        ArgInit - ArgType, !GlobalData) :-
    ClosureArg = closure_arg_info(Type, _Inst),

    % For a stack layout, we can treat all type variables as universally
    % quantified. This is not the argument of a constructor, so we do not need
    % to distinguish between type variables that are and aren't in scope;
    % we can take the variable number directly from the procedure's tvar set.
    ExistQTvars = [],
    NumUnivQTvars = -1,
    pseudo_type_info.construct_pseudo_type_info(Type, NumUnivQTvars,
        ExistQTvars, PseudoTypeInfo),
    ml_gen_pseudo_type_info(ModuleInfo, PseudoTypeInfo, ArgRval, ArgType,
        !GlobalData),
    CastArgRval = ml_unop(box(ArgType), ArgRval),
    ArgInit = init_obj(CastArgRval).

:- pred ml_gen_maybe_pseudo_type_info_defn(module_info::in,
    rtti_maybe_pseudo_type_info::in,
    ml_global_data::in, ml_global_data::out) is det.

ml_gen_maybe_pseudo_type_info_defn(ModuleInfo, MaybePTI,
        !GlobalData) :-
    ml_gen_maybe_pseudo_type_info(ModuleInfo, MaybePTI, _Rval, _Type,
        !GlobalData).

:- pred ml_gen_pseudo_type_info_defn(module_info::in,
    rtti_pseudo_type_info::in,
    ml_global_data::in, ml_global_data::out) is det.

ml_gen_pseudo_type_info_defn(ModuleInfo, PTI, !GlobalData) :-
    ml_gen_pseudo_type_info(ModuleInfo, PTI, _Rval, _Type, !GlobalData).

:- pred ml_gen_type_info_defn(module_info::in, rtti_type_info::in,
    ml_global_data::in, ml_global_data::out) is det.

ml_gen_type_info_defn(ModuleInfo, TI, !GlobalData) :-
    ml_gen_type_info(ModuleInfo, TI, _Rval, _Type, !GlobalData).

:- pred ml_gen_maybe_pseudo_type_info(module_info::in,
    rtti_maybe_pseudo_type_info::in, mlds_rval::out, mlds_type::out,
    ml_global_data::in, ml_global_data::out) is det.

ml_gen_maybe_pseudo_type_info(ModuleInfo, MaybePseudoTypeInfo, Rval, Type,
        !GlobalData) :-
    (
        MaybePseudoTypeInfo = pseudo(PseudoTypeInfo),
        ml_gen_pseudo_type_info(ModuleInfo, PseudoTypeInfo, Rval, Type,
            !GlobalData)
    ;
        MaybePseudoTypeInfo = plain(TypeInfo),
        ml_gen_type_info(ModuleInfo, TypeInfo, Rval, Type, !GlobalData)
    ).

:- pred ml_gen_pseudo_type_info(module_info::in, rtti_pseudo_type_info::in,
    mlds_rval::out, mlds_type::out,
    ml_global_data::in, ml_global_data::out) is det.

ml_gen_pseudo_type_info(ModuleInfo, PseudoTypeInfo, Rval, Type, !GlobalData) :-
    (
        PseudoTypeInfo = type_var(N),
        % Type variables are represented just as integers.
        Rval = ml_const(mlconst_int(N)),
        Type = mlds_native_int_type
    ;
        ( PseudoTypeInfo = plain_arity_zero_pseudo_type_info(_)
        ; PseudoTypeInfo = plain_pseudo_type_info(_, _)
        ; PseudoTypeInfo = var_arity_pseudo_type_info(_, _)
        ),
        (
            PseudoTypeInfo = plain_arity_zero_pseudo_type_info(RttiTypeCtor0),
            % For zero-arity types, we just generate a reference to the
            % type_ctor_info, which will always be generated by other code.
            % (mercury_compile.m has code to generate type_ctor_infos for
            % all type definitions in the module.)
            RttiName = type_ctor_type_ctor_info,
            RttiTypeCtor0 = rtti_type_ctor(ModuleName0, _, _),
            ModuleName = fixup_builtin_module(ModuleName0),
            RttiTypeCtor = RttiTypeCtor0,
            RttiId = ctor_rtti_id(RttiTypeCtor, RttiName),

            MLDS_ModuleName = mercury_module_name_to_mlds(ModuleName),
            DataAddr = data_addr(MLDS_ModuleName, mlds_rtti(RttiId)),
            Rval = ml_const(mlconst_data_addr(DataAddr)),
            Type = mlds_rtti_type(item_type(RttiId))
        ;
            ( PseudoTypeInfo = plain_pseudo_type_info(_, _)
            ; PseudoTypeInfo = var_arity_pseudo_type_info(_, _)
            ),
            % For other types, we need to generate a definition of the
            % pseudo_type_info for that type, in the current module.
            RttiData = rtti_data_pseudo_type_info(PseudoTypeInfo),
            rtti_data_to_id(RttiData, RttiId),

            ml_global_data_get_pdup_rval_type_map(!.GlobalData,
                PDupRvalTypeMap),
            ( map.search(PDupRvalTypeMap,  RttiId, OldRvalType) ->
                OldRvalType = ml_rval_and_type(Rval, Type)
            ;
                module_info_get_name(ModuleInfo, ModuleName),
                MLDS_ModuleName = mercury_module_name_to_mlds(ModuleName),
                DataAddr = data_addr(MLDS_ModuleName, mlds_rtti(RttiId)),
                Rval = ml_const(mlconst_data_addr(DataAddr)),
                Type = mlds_rtti_type(item_type(RttiId)),

                add_rtti_data_to_mlds(ModuleInfo, RttiData, !GlobalData),

                % Generate definitions of any type_infos and pseudo_type_infos
                % referenced by this pseudo_type_info.
                % ZZZ is this guaranteed to add nothing?
                list.foldl(ml_gen_maybe_pseudo_type_info_defn(ModuleInfo),
                    arg_maybe_pseudo_type_infos(PseudoTypeInfo), !GlobalData)
            )
        )
    ).

:- pred ml_gen_type_info(module_info::in, rtti_type_info::in,
    mlds_rval::out, mlds_type::out,
    ml_global_data::in, ml_global_data::out) is det.

ml_gen_type_info(ModuleInfo, TypeInfo, Rval, Type, !GlobalData) :-
    (
        TypeInfo = plain_arity_zero_type_info(RttiTypeCtor0),
        % For zero-arity types, we just generate a reference to the
        % already-existing type_ctor_info.
        RttiName = type_ctor_type_ctor_info,
        RttiTypeCtor0 = rtti_type_ctor(ModuleName0, _, _),
        ModuleName = fixup_builtin_module(ModuleName0),
        RttiId = ctor_rtti_id(RttiTypeCtor0, RttiName),

        MLDS_ModuleName = mercury_module_name_to_mlds(ModuleName),
        DataAddr = data_addr(MLDS_ModuleName, mlds_rtti(RttiId)),
        Rval = ml_const(mlconst_data_addr(DataAddr)),
        Type = mlds_rtti_type(item_type(RttiId))
    ;
        ( TypeInfo = plain_type_info(_, _)
        ; TypeInfo = var_arity_type_info(_, _)
        ),
        % For other types, we need to generate a definition of the type_info
        % for that type, in the the current module.
        RttiData = rtti_data_type_info(TypeInfo),
        rtti_data_to_id(RttiData, RttiId),

        ml_global_data_get_pdup_rval_type_map(!.GlobalData, PDupRvalTypeMap),
        ( map.search(PDupRvalTypeMap,  RttiId, OldRvalType) ->
            OldRvalType = ml_rval_and_type(Rval, Type)
        ;
            module_info_get_name(ModuleInfo, ModuleName),
            MLDS_ModuleName = mercury_module_name_to_mlds(ModuleName),
            DataAddr = data_addr(MLDS_ModuleName, mlds_rtti(RttiId)),
            Rval = ml_const(mlconst_data_addr(DataAddr)),
            Type = mlds_rtti_type(item_type(RttiId)),

            add_rtti_data_to_mlds(ModuleInfo, RttiData, !GlobalData),

            % Generate definitions of any type_infos referenced
            % by this type_info.
            % ZZZ is this guaranteed to add nothing?
            list.foldl(ml_gen_type_info_defn(ModuleInfo),
                arg_type_infos(TypeInfo), !GlobalData)
        )
    ).

:- func arg_maybe_pseudo_type_infos(rtti_pseudo_type_info)
    = list(rtti_maybe_pseudo_type_info).

arg_maybe_pseudo_type_infos(type_var(_)) = [].
arg_maybe_pseudo_type_infos(plain_arity_zero_pseudo_type_info(_)) = [].
arg_maybe_pseudo_type_infos(plain_pseudo_type_info(_TypeCtor, ArgMPTIs))
    = ArgMPTIs.
arg_maybe_pseudo_type_infos(var_arity_pseudo_type_info(_VarArityId, ArgMPTIs))
    = ArgMPTIs.

:- func arg_type_infos(rtti_type_info) = list(rtti_type_info).

arg_type_infos(plain_arity_zero_type_info(_)) = [].
arg_type_infos(plain_type_info(_TypeCtor, ArgTIs)) = ArgTIs.
arg_type_infos(var_arity_type_info(_VarArityId, ArgTIs)) = ArgTIs.

:- pred ml_stack_layout_construct_tvar_vector(module_info::in,
    string::in, prog_context::in, map(tvar, set(layout_locn))::in,
    mlds_rval::out, mlds_type::out,
    ml_global_data::in, ml_global_data::out) is det.

ml_stack_layout_construct_tvar_vector(ModuleInfo, TVarVectorNameStr, Context,
        TVarLocnMap, TVarVectorAddrRval, ArrayType, !GlobalData) :-
    ArrayType = mlds_array_type(mlds_native_int_type),
    ( map.is_empty(TVarLocnMap) ->
        TVarVectorAddrRval = ml_const(mlconst_null(ArrayType))
    ;
        ml_stack_layout_construct_tvar_rvals(TVarLocnMap, Vector,
            _VectorTypes),
        Initializer = init_array(Vector),
        module_info_get_name(ModuleInfo, ModuleName),
        MLDS_ModuleName = mercury_module_name_to_mlds(ModuleName),
        ml_gen_static_scalar_const_addr(MLDS_ModuleName, TVarVectorNameStr,
            ArrayType, Initializer, Context, TVarVectorAddrRval, !GlobalData)
    ).

:- pred ml_stack_layout_construct_tvar_rvals(map(tvar, set(layout_locn))::in,
    list(mlds_initializer)::out, list(mlds_type)::out) is det.

ml_stack_layout_construct_tvar_rvals(TVarLocnMap, Vector, VectorTypes) :-
    map.to_assoc_list(TVarLocnMap, TVarLocns),
    ml_stack_layout_construct_type_param_locn_vector(TVarLocns, 1,
        TypeParamLocs),
    list.length(TypeParamLocs, TypeParamsLength),
    LengthRval = ml_const(mlconst_int(TypeParamsLength)),
    Vector = [init_obj(LengthRval) | TypeParamLocs],
    VectorTypes = list.duplicate(TypeParamsLength + 1, mlds_native_int_type).

    % Given a association list of type variables and their locations sorted
    % on the type variables, represent them in an array of location
    % descriptions indexed by the type variable. The next slot to fill is given
    % by the second argument.
    %
:- pred ml_stack_layout_construct_type_param_locn_vector(
    assoc_list(tvar, set(layout_locn))::in, int::in,
    list(mlds_initializer)::out) is det.

ml_stack_layout_construct_type_param_locn_vector([], _, []).
ml_stack_layout_construct_type_param_locn_vector([TVar - Locns | TVarLocns],
        CurSlot, Vector) :-
    term.var_to_int(TVar, TVarNum),
    NextSlot = CurSlot + 1,
    ( TVarNum = CurSlot ->
        ( set.remove_least(LeastLocn, Locns, _) ->
            Locn = LeastLocn
        ;
            unexpected($module, $pred, "tvar has empty set of locations")
        ),
        stack_layout.represent_locn_as_int(Locn, LocnAsInt),
        Rval = ml_const(mlconst_int(LocnAsInt)),
        ml_stack_layout_construct_type_param_locn_vector(TVarLocns,
            NextSlot, VectorTail),
        Vector = [init_obj(Rval) | VectorTail]
    ; TVarNum > CurSlot ->
        % This slot will never be referred to.
        ml_stack_layout_construct_type_param_locn_vector(
            [TVar - Locns | TVarLocns], NextSlot, VectorTail),
        Vector = [init_obj(ml_const(mlconst_int(0))) | VectorTail]
    ;
        unexpected($module, $pred, "unsorted tvars")
    ).

    % ml_gen_closure_wrapper:
    %   see comment in interface section for details.
    %
    % This is used to create wrappers both for ordinary closures and
    % also for type class methods.
    %
    % The generated function will look something like this:
    %
    %   MR_Box
    %   foo_wrapper(void *closure_arg,
    %       MR_Box wrapper_arg1, MR_Box *wrapper_arg2,
    %       ..., MR_Box wrapper_argn)
    %   {
    %       void *closure;
    %
    %       /* declarations needed for converting output args */
    %       Arg2Type conv_arg2;
    %       RetType conv_retval;
    %       ...
    %
    %       /* declarations needed for by-value outputs */
    %       MR_Box retval;
    %
    %       closure = closure_arg;  /* XXX should add cast */
    %
    %       /* call function, unboxing inputs if needed */
    %       conv_retval = foo(closure->f1, unbox(closure->f2), ...,
    %           unbox(wrapper_arg1), &conv_arg2,
    %           wrapper_arg3, ...);
    %
    %       /* box output arguments */
    %       *wrapper_arg2 = box(conv_arg2);
    %       ...
    %       retval = box(conv_retval);
    %
    %       return retval;
    %   }
    %
    % Actually, that is a simplified form.
    % Also when calling a special pred then the closure argument isn't
    % required. In full generality, it will look more like this:
    %
    % #if MODEL_SEMI
    %   bool
    % #elif FUNC_IN_FORWARDS_MODE
    %   MR_Box
    % #else
    %   void
    % #endif
    %   foo_wrapper(
    %       void *closure_arg /* with appropriate GC trace code */,
    %           MR_Box wrapper_arg1, MR_Box *wrapper_arg2,
    %           ..., MR_Box wrapper_argn)
    %       /* No GC tracing code needed for the wrapper_*
    %          parameters, because output parameters point to
    %          the stack, and input parameters won't be live
    %          across a GC.
    %          Likewise for the local var `closure' below.
    %          But we do need GC tracing code for closure_arg
    %          parameter since that may be referenced _during_ GC,
    %          because it is mentioned in the GC tracing code
    %          for the conv_* variables below.  */
    %   {
    % #if 0 /* XXX we should do this for HIGH_LEVEL_DATA */
    %       FooClosure *closure;
    % #else
    %       void *closure;
    % #endif
    %
    % #if defined(MR_NATIVE_GC)
    %       MR_Closure_Layout *closure_layout_ptr;
    %       MR_TypeInfo *type_params;
    %   #if 0 /* GC tracing code */
    %     #if CLOSURE_KIND == HIGHER_ORDER_PROC_CLOSURE
    %       closure_layout_ptr =
    %           ((MR_Closure *)closure_arg)->MR_closure_layout;
    %       type_params = MR_materialize_closure_typeinfos(closure_arg);
    %     #else /* CLOSURE_KIND == TYPECLASS_INFO_CLOSURE */
    %       {
    %         static const MR_Closure_Layout closure_layout = ...;
    %         closure_layout_ptr = &closure_layout;
    %       }
    %       type_params = MR_materialize_closure_typeinfos(closure_arg);
    %     #endif
    %   #endif /* GC tracing code */
    % #endif
    %
    %       /* declarations needed for converting output args */
    %       Arg2Type conv_arg2;
    %       /* GC tracing code same as below */
    %       ...
    %
    %       /* declarations needed for by-value outputs */
    %       RetType conv_retval;
    % #if defined(MR_NATIVE_GC)
    %   #if 0 /* GC tracing code */
    %     {
    %       MR_TypeInfo type_info;
    %       MR_MemoryList allocated_memory_cells = NULL;
    %       type_info = MR_make_type_info_maybe_existq(type_params,
    %           closure_layout_ptr->MR_closure_arg_pseudo_type_info
    %           [<arg number> - 1],
    %           NULL, NULL, &allocated_memory_cells);
    %       mercury__private_builtin__gc_trace_1_0(type_info, &conv_retval);
    %       MR_deallocate(allocated_memory_cells);
    %     }
    %   #endif
    % #endif
    %
    % #if MODEL_SEMI
    %       MR_bool succeeded;
    % #elif FUNC_IN_FORWARDS_MODE
    %       MR_Box retval; /* GC tracing code as above */
    % #endif
    %
    %       closure = closure_arg;  /* XXX should add cast */
    %
    %       CONJ(code_model,
    %       /* call function, unboxing inputs if needed */
    %       conv_retval = foo(closure->f1, unbox(closure->f2), ...,
    %           unbox(wrapper_arg1), &conv_arg2,
    %           wrapper_arg3, ...);
    %       ,
    %       /* box output arguments */
    %       *wrapper_arg2 = box(conv_arg2);
    %       ...
    %       retval = box(conv_retval);
    %       )
    % #if MODEL_SEMI
    %       return succeeded;
    % #else
    %       return retval;
    % #endif
    %   }
    %
    % The stuff in CONJ() expands to the appropriate code
    % for a conjunction, which depends on the code model:
    %
    % #if MODEL_DET
    %       /* call function, boxing/unboxing inputs if needed */
    %       foo(closure->f1, unbox(closure->f2), ...,
    %           unbox(wrapper_arg1), &conv_arg2,
    %           wrapper_arg3, ...);
    %
    %       /* box output arguments */
    %       *wrapper_arg2 = box(conv_arg2);
    %       ...
    % #elif MODEL_SEMI
    %       /* call function, boxing/unboxing inputs if needed */
    %       succeeded = foo(closure->f1, unbox(closure->f2), ...,
    %           unbox(wrapper_arg1), &conv_arg2,
    %           wrapper_arg3, ...);
    %
    %       if (succeeded) {
    %           /* box output arguments */
    %           *wrapper_arg2 = box(conv_arg2);
    %           ...
    %       }
    %
    %       return succeeded;
    %   }
    % #else /* MODEL_NON */
    %       foo_1() {
    %           /* box output arguments */
    %           *wrapper_arg2 = box(conv_arg2);
    %           ...
    %           (*succ_cont)();
    %       }
    %
    %       /* call function, boxing/unboxing inputs if needed */
    %       foo(closure->f1, unbox(closure->f2), ...,
    %           unbox(wrapper_arg1), &conv_arg2,
    %           wrapper_arg3, ...,
    %           foo_1);
    % #endif
    %
ml_gen_closure_wrapper(PredId, ProcId, ClosureKind, NumClosureArgs,
        Context, WrapperFuncRval, WrapperFuncType, !Info) :-
    % Grab the relevant information about the called procedure.
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    module_info_pred_proc_info(ModuleInfo, PredId, ProcId, PredInfo, ProcInfo),
    pred_info_get_purity(PredInfo, Purity),
    pred_info_get_arg_types(PredInfo, ProcArgTypes),
    PredOrFunc = pred_info_is_pred_or_func(PredInfo),
    proc_info_get_headvars(ProcInfo, ProcHeadVars),
    proc_info_get_argmodes(ProcInfo, ProcArgModes),
    CodeModel = proc_info_interface_code_model(ProcInfo),
    proc_info_get_varset(ProcInfo, ProcVarSet),
    ProcArity = list.length(ProcHeadVars),
    ProcHeadVarNames = ml_gen_var_names(ProcVarSet, ProcHeadVars),

    % allocate some fresh type variables to use as the Mercury types
    % of the boxed arguments.
    ProcBoxedArgTypes = ml_make_boxed_types(ProcArity),

    % Compute the parameters for the wrapper function
    %   (void *closure_arg,
    %   MR_Box wrapper_arg1, MR_Box *wrapper_arg2, ...,
    %   MR_Box wrapper_argn)

    % First generate the declarations for the boxed arguments.
    (
        list.drop(NumClosureArgs, ProcHeadVars, WrapperHeadVars0),
        list.drop(NumClosureArgs, ProcArgModes, WrapperArgModes0),
        list.drop(NumClosureArgs, ProcArgTypes, WrapperArgTypes0),
        list.drop(NumClosureArgs, ProcBoxedArgTypes, WrapperBoxedArgTypes0)
    ->
        WrapperHeadVars = WrapperHeadVars0,
        WrapperArgModes = WrapperArgModes0,
        WrapperArgTypes = WrapperArgTypes0,
        WrapperBoxedArgTypes = WrapperBoxedArgTypes0
    ;
        unexpected($module, $pred, "list.drop failed")
    ),
    WrapperHeadVarNames = ml_gen_wrapper_head_var_names(1,
        list.length(WrapperHeadVars)),
    ml_gen_params(WrapperHeadVarNames, WrapperBoxedArgTypes,
        WrapperArgModes, PredOrFunc, CodeModel, WrapperParams0, !Info),
    WrapperParams0 = mlds_func_params(WrapperArgs0, WrapperRetType),
    % The GC handling for the wrapper arguments is wrong, because we don't have
    % type_infos for the type variables in WrapperBoxedArgTypes. We handle this
    % by just deleting it, since it turns out that it's not needed anyway.
    % We don't need to trace the WrapperParams for accurate GC, since the
    % WrapperParams are only live in the time from the entry of the wrapper
    % function to when it calls the wrapped function, and garbage collection
    % can't occur in that time, since there are no allocations (only an
    % assignment to `closure_arg' and some unbox operations).
    WrapperArgs1 = list.map(arg_delete_gc_statement, WrapperArgs0),

    % Then insert the `closure_arg' parameter, if needed.
    (
        ClosureKind = special_pred_closure,
        MaybeClosureA = no,
        WrapperArgs = WrapperArgs1
    ;
        ( ClosureKind = higher_order_proc_closure
        ; ClosureKind = typeclass_info_closure
        ),
        ClosureArgType = mlds_generic_type,
        ClosureArgName = mlds_var_name("closure_arg", no),
        ClosureArgDeclType = list.det_head(ml_make_boxed_types(1)),
        gen_closure_gc_statement(ClosureArgName, ClosureArgDeclType,
            ClosureKind, WrapperArgTypes, Purity, PredOrFunc,
            Context, ClosureArgGCStatement, !Info),
        ClosureArg = mlds_argument(entity_data(mlds_data_var(ClosureArgName)),
            ClosureArgType, ClosureArgGCStatement),
        MaybeClosureA = yes({ClosureArgType, ClosureArgName}),
        WrapperArgs = [ClosureArg | WrapperArgs1]
    ),
    WrapperParams = mlds_func_params(WrapperArgs, WrapperRetType),

    % Also compute the lvals for the parameters,
    % and local declarations for any by-value output parameters.
    ml_gen_wrapper_arg_lvals(WrapperHeadVarNames, WrapperBoxedArgTypes,
        WrapperArgModes, PredOrFunc, CodeModel, Context, 1,
        WrapperHeadVarDecls, WrapperHeadVarLvals, WrapperCopyOutLvals, !Info),

    % Generate code to declare and initialize the closure pointer,
    % if needed.
    % XXX We should use a struct type for the closure, but currently we're
    % using a low-level data representation in the closure.
    %
    % #if 0 /* HIGH_LEVEL_DATA */
    %   FooClosure *closure;
    % #else
    %   void *closure;
    % #endif
    %   closure = closure_arg;
    %
    MLDS_Context = mlds_make_context(Context),
    (
        MaybeClosureA = yes({ClosureArgType1, ClosureArgName1}),
        ClosureName = mlds_var_name("closure", no),
        ClosureType = mlds_generic_type,
        % If we were to generate GC tracing code for the closure
        % pointer, it would look like this:
        %   ClosureDeclType = list.det_head(ml_make_boxed_types(1)),
        %   gen_closure_gc_statement(ClosureName, ClosureDeclType,
        %       ClosureKind, WrapperArgTypes, Purity,
        %       PredOrFunc, Context, ClosureGCStatement),
        % But we don't need any GC tracing code for the closure pointer,
        % because it won't be live across an allocation, and because
        % (unlike the closure_arg parameter) it isn't referenced from
        % the GC tracing for other variables.
        ClosureGCStatement = gc_no_stmt,
        ClosureDecl = ml_gen_mlds_var_decl(mlds_data_var(ClosureName),
            ClosureType, ClosureGCStatement, MLDS_Context),
        ml_gen_var_lval(!.Info, ClosureName, ClosureType, ClosureLval),
        ml_gen_var_lval(!.Info, ClosureArgName1, ClosureArgType1,
            ClosureArgLval),
        InitClosure = ml_gen_assign(ClosureLval, ml_lval(ClosureArgLval),
            Context),
        MaybeClosureB = yes({ClosureDecl, InitClosure}),
        MaybeClosureC = yes(ClosureLval)
    ;
        MaybeClosureA = no,
        MaybeClosureB = no,
        MaybeClosureC = no
    ),

    % If the wrapper function is model_non, then set up the initial success
    % continuation; this is needed by ml_gen_call which we call below.
    (
        CodeModel = model_det
    ;
        CodeModel = model_semi
    ;
        CodeModel = model_non,
        globals.lookup_bool_option(Globals, nondet_copy_out, NondetCopyOut),
        (
            NondetCopyOut = yes,
            map.from_corresponding_lists(WrapperHeadVarLvals,
                WrapperBoxedArgTypes, WrapperBoxedVarTypes),
            WrapperOutputLvals = select_output_things(ModuleInfo,
                WrapperHeadVarLvals, WrapperArgModes,
                WrapperBoxedVarTypes),
            WrapperOutputTypes = map.apply_to_list(WrapperOutputLvals,
                WrapperBoxedVarTypes),
            ml_initial_cont(!.Info, WrapperOutputLvals,
                WrapperOutputTypes, InitialCont)
        ;
            NondetCopyOut = no,
            ml_initial_cont(!.Info, [], [], InitialCont)
        ),
        ml_gen_info_push_success_cont(InitialCont, !Info)
    ),

    % Generate code to call the function:
    % XXX currently we're using a low-level data representation in the closure.
    %
    %   foo(
    % #if HIGH_LEVEL_DATA
    %       closure->arg1, closure->arg2, ...,
    % #else
    %       MR_field(MR_mktag(0), closure, 3),
    %       MR_field(MR_mktag(0), closure, 4),
    %       ...
    % #endif
    %       unbox(wrapper_arg1), &conv_arg2, wrapper_arg3, ...
    %   );
    %
    % `Offset' specifies the offset to add to the argument number to
    % get the field number within the closure.  (Argument numbers start
    % from 1, and field numbers start from 0.)
    (
        MaybeClosureC = yes(ClosureLval1),
        (
            ClosureKind = higher_order_proc_closure,
            Offset = ml_closure_arg_offset
        ;
            ClosureKind = typeclass_info_closure,
            Offset = ml_typeclass_info_arg_offset
        ;
            ClosureKind = special_pred_closure,
            unexpected($module, $pred, "special_pred_closure")
        ),
        ml_gen_closure_field_lvals(ClosureLval1, Offset, 1,
            NumClosureArgs, ClosureArgLvals, !Info)
    ;
        MaybeClosureC = no,
        ClosureArgLvals = []
    ),
    CallLvals = list.append(ClosureArgLvals, WrapperHeadVarLvals),
    ml_gen_call(PredId, ProcId, ProcHeadVarNames, CallLvals, ProcBoxedArgTypes,
        CodeModel, Context, yes, Decls0, Statements0, !Info),

    % Insert the stuff to declare and initialize the closure.
    (
        MaybeClosureB = yes({ClosureDecl1, InitClosure1}),
        Decls1 = [ClosureDecl1 | Decls0],
        Statements1 = [InitClosure1 | Statements0]
    ;
        MaybeClosureB = no,
        Decls1 = Decls0,
        Statements1 = Statements0
    ),

    % For semidet code, add the declaration `MR_bool succeeded;'.
    (
        ( CodeModel = model_det
        ; CodeModel = model_non
        ),
        Decls2 = Decls1
    ;
        CodeModel = model_semi,
        SucceededVarDecl = ml_gen_succeeded_var_decl(MLDS_Context),
        Decls2 = [SucceededVarDecl | Decls1]
    ),

    % Add an appropriate `return' statement.
    ml_append_return_statement(!.Info, CodeModel, WrapperCopyOutLvals,
        Context, Statements1, Statements),

    % Generate code to declare and initialize the local variables
    % needed for accurate GC.
    module_info_get_globals(ModuleInfo, Globals),
    (
        MaybeClosureA = yes({ClosureArgType2, ClosureArgName2}),
        globals.get_gc_method(Globals, gc_accurate)
    ->
        ml_gen_closure_wrapper_gc_decls(ClosureKind, ClosureArgName2,
            ClosureArgType2, PredId, ProcId, Context, GC_Decls, !Info)
    ;
        GC_Decls = []
    ),

    % Insert the local declarations of the wrapper's output arguments,
    % if any (this is needed for functions and for `--(non)det-copy-out'),
    % and the `type_params' variable used by the GC code.
    Decls = GC_Decls ++ WrapperHeadVarDecls ++ Decls2,

    % If the wrapper function was model_non, then pop the success continuation
    % that we pushed.
    (
        CodeModel = model_det
    ;
        CodeModel = model_semi
    ;
        CodeModel = model_non,
        ml_gen_info_pop_success_cont(!Info)
    ),

    % Put it all together.
    WrapperFuncBody = ml_gen_block(Decls, Statements, Context),
    ml_gen_new_func_label(yes(WrapperParams), WrapperFuncName,
        WrapperFuncRval, !Info),
    ml_gen_wrapper_func(WrapperFuncName, WrapperParams, Context,
        WrapperFuncBody, WrapperFunc, !Info),
    WrapperFuncType = mlds_func_type(WrapperParams),
    ml_gen_info_add_closure_wrapper_defn(WrapperFunc, !Info).

:- func arg_delete_gc_statement(mlds_argument) = mlds_argument.

arg_delete_gc_statement(Argument0) = Argument :-
    Argument0 = mlds_argument(Name, Type, _GCStatement),
    Argument = mlds_argument(Name, Type, gc_no_stmt).

    % Generate the GC trace code for `closure_arg' or `closure'
    % (see ml_gen_closure_wrapper above).
    %
:- pred gen_closure_gc_statement(mlds_var_name::in, mer_type::in,
    closure_kind::in, list(mer_type)::in, purity::in, pred_or_func::in,
    prog_context::in, mlds_gc_statement::out,
    ml_gen_info::in, ml_gen_info::out) is det.

gen_closure_gc_statement(ClosureName, ClosureDeclType,
        ClosureKind, WrapperArgTypes, Purity, PredOrFunc,
        Context, ClosureGCStatement, !Info) :-
    % We can't use WrapperArgTypes here, because we don't have type_infos
    % for the type variables in WrapperArgTypes; those type variables come from
    % the callee. But when copying closures, we don't care what the types of
    %% the not-yet-applied arguments are. So we can just use dummy values here.
    HigherOrderArgTypes = list.duplicate(list.length(WrapperArgTypes),
        c_pointer_type),
    (
        ClosureKind = higher_order_proc_closure,
        LambdaEvalMethod = lambda_normal,
        construct_higher_order_type(Purity, PredOrFunc, LambdaEvalMethod,
            HigherOrderArgTypes, ClosureActualType)
    ;
        ClosureKind = typeclass_info_closure,
        ClosureActualType = sample_typeclass_info_type
    ;
        ClosureKind = special_pred_closure,
        unexpected($module, $pred, "special_pred_closure")
    ),
    ml_gen_gc_statement_poly(ClosureName, ClosureDeclType, ClosureActualType,
        Context, ClosureGCStatement, !Info).

:- pred ml_gen_wrapper_func(ml_label_func::in, mlds_func_params::in,
    prog_context::in, statement::in, mlds_defn::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_wrapper_func(FuncLabel, FuncParams, Context, Statement, Func, !Info) :-
    ml_gen_label_func(!.Info, FuncLabel, FuncParams, Context, Statement,
        Func0),
    Func0 = mlds_defn(Name, Ctxt, DeclFlags0, Defn),
    DeclFlags1 = set_per_instance(DeclFlags0, one_copy),
    DeclFlags = set_access(DeclFlags1, acc_private),
    Func = mlds_defn(Name, Ctxt, DeclFlags, Defn).

:- func ml_gen_wrapper_head_var_names(int, int) = list(mlds_var_name).

ml_gen_wrapper_head_var_names(Num, Max) = Names :-
    ( Num > Max ->
        Names = []
    ;
        Name = string.format("wrapper_arg_%d", [i(Num)]),
        Names1 = ml_gen_wrapper_head_var_names(Num + 1, Max),
        Names = [mlds_var_name(Name, no) | Names1]
    ).

    % ml_gen_wrapper_arg_lvals(HeadVarNames, Types, ArgModes, PredOrFunc,
    %   CodeModel, Context, ArgNum, LocalVarDefns, HeadVarLvals, CopyOutLvals):
    %
    % Generate lvals for the specified head variables passed in the specified
    % modes. Also generate local definitions for output variables, if those
    % output variables will be copied out, rather than passed by reference.
    %
:- pred ml_gen_wrapper_arg_lvals(list(mlds_var_name)::in, list(mer_type)::in,
    list(mer_mode)::in, pred_or_func::in, code_model::in, prog_context::in,
    int::in, list(mlds_defn)::out, list(mlds_lval)::out,
    list(mlds_lval)::out, ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_wrapper_arg_lvals(Names, Types, Modes, PredOrFunc, CodeModel, Context,
        ArgNum, Defns, Lvals, CopyOutLvals, !Info) :-
    (
        Names = [],
        Types = [],
        Modes = []
    ->
        Lvals = [],
        CopyOutLvals = [],
        Defns = []
    ;
        Names = [Name | NamesTail],
        Types = [Type | TypesTail],
        Modes = [Mode | ModesTail]
    ->
        ml_gen_wrapper_arg_lvals(NamesTail, TypesTail, ModesTail, PredOrFunc,
            CodeModel, Context, ArgNum + 1, DefnsTail, LvalsTail,
            CopyOutLvalsTail, !Info),
        ml_gen_type(!.Info, Type, MLDS_Type),
        ml_gen_var_lval(!.Info, Name, MLDS_Type, VarLval),
        ml_gen_info_get_module_info(!.Info, ModuleInfo),
        mode_to_arg_mode(ModuleInfo, Mode, Type, ArgMode),
        (
            ( ArgMode = top_in
            ; ArgMode = top_unused
            ),
            Lval = VarLval,
            CopyOutLvals = CopyOutLvalsTail,
            Defns = DefnsTail
        ;
            ArgMode = top_out,
            % Handle output variables.
            ml_gen_info_get_globals(!.Info, Globals),
            CopyOut = get_copy_out_option(Globals, CodeModel),
            IsDummy = check_dummy_type(ModuleInfo, Type),
            (
                (
                    CopyOut = yes
                ;
                    % For model_det functions, output mode function results
                    % are mapped to MLDS return values.
                    PredOrFunc = pf_function,
                    CodeModel = model_det,
                    ArgMode = top_out,
                    TypesTail = [],
                    IsDummy = is_not_dummy_type
                )
            ->
                % Output arguments are copied out, so we need to generate
                % a local declaration for them here.
                Lval = VarLval,
                (
                    IsDummy = is_dummy_type,
                    CopyOutLvals = CopyOutLvalsTail,
                    Defns = DefnsTail
                ;
                    IsDummy = is_not_dummy_type,
                    CopyOutLvals = [Lval | CopyOutLvalsTail],
                    ml_gen_local_for_output_arg(Name, Type,
                        ArgNum, Context, Defn, !Info),
                    Defns = [Defn | DefnsTail]
                )
            ;
                % Output arguments are passed by reference, so we need to
                % dereference them.
                Lval = ml_mem_ref(ml_lval(VarLval), MLDS_Type),
                CopyOutLvals = CopyOutLvalsTail,
                Defns = DefnsTail
            )
        ),
        Lvals = [Lval | LvalsTail]
    ;
        sorry($module, $pred, "length mismatch")
    ).

    % This is used for accurate GC with the MLDS->C back-end.
    % It generates the following variable declarations:
    %   MR_Closure_Layout *closure_layout_ptr;
    %   MR_TypeInfo *type_params;
    % and code to initialize them: either
    %   closure_layout_ptr =
    %       ((MR_Closure *)closure_arg)->MR_closure_layout;
    %   type_params = MR_materialize_closure_typeinfos(closure_arg);
    % or
    %   {
    %     static const MR_Closure_Layout closure_layout = { ... }
    %     closure_layout_ptr = &closure_layout;
    %   }
    %   type_params = MR_materialize_typeclass_info_typeinfos(
    %       closure_arg, closure_layout);
    %
:- pred ml_gen_closure_wrapper_gc_decls(closure_kind::in, mlds_var_name::in,
    mlds_type::in, pred_id::in, proc_id::in, prog_context::in,
    list(mlds_defn)::out, ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_closure_wrapper_gc_decls(ClosureKind, ClosureArgName, ClosureArgType,
        PredId, ProcId, Context, GC_Decls, !Info) :-
    MLDS_Context = mlds_make_context(Context),

    ml_gen_var_lval(!.Info, ClosureArgName, ClosureArgType, ClosureArgLval),

    ClosureLayoutPtrName = mlds_var_name("closure_layout_ptr", no),
    % This type is really `const MR_Closure_Layout *', but there's no easy
    % way to represent that in the MLDS; using MR_Box instead works fine.
    ClosureLayoutPtrType = mlds_generic_type,
    % We use 'gc_initialiser' for the garbage collection code as it is code to
    % initialise local variables used during garbage collection and must
    % run before variables are traced.
    ClosureLayoutPtrDecl = ml_gen_mlds_var_decl(
        mlds_data_var(ClosureLayoutPtrName), ClosureLayoutPtrType,
        gc_initialiser(ClosureLayoutPtrGCInit), MLDS_Context),
    ml_gen_var_lval(!.Info, ClosureLayoutPtrName, ClosureLayoutPtrType,
        ClosureLayoutPtrLval),

    TypeParamsName = mlds_var_name("type_params", no),
    % This type is really MR_TypeInfoParams, but there's no easy way to
    % represent that in the MLDS; using MR_Box instead works fine.
    TypeParamsType = mlds_generic_type,
    % We use 'gc_initialiser' for the garbage collection code as it is code to
    % initialise local variables used during garbage collection and must
    % run before variables are traced.
    TypeParamsDecl = ml_gen_mlds_var_decl(mlds_data_var(TypeParamsName),
        TypeParamsType, gc_initialiser(TypeParamsGCInit), MLDS_Context),
    ml_gen_var_lval(!.Info, TypeParamsName, TypeParamsType, TypeParamsLval),
    (
        ClosureKind = higher_order_proc_closure,
        ClosureLayoutPtrGCInitFragments = [
            target_code_output(ClosureLayoutPtrLval),
            raw_target_code(" = (MR_Box) ((MR_Closure *)\n", []),
            target_code_input(ml_lval(ClosureArgLval)),
            raw_target_code(")->MR_closure_layout;\n", [])
        ],
        ClosureLayoutPtrGCInit = statement(ml_stmt_atomic(
            inline_target_code(ml_target_c,
            ClosureLayoutPtrGCInitFragments)), MLDS_Context),
        TypeParamsGCInitFragments = [
            target_code_output(TypeParamsLval),
            raw_target_code(" = (MR_Box) " ++
              "MR_materialize_closure_type_params(\n", []),
            target_code_input(ml_lval(ClosureArgLval)),
            raw_target_code(");\n", [])
        ]
    ;
        ClosureKind = typeclass_info_closure,
        ml_gen_closure_layout(PredId, ProcId, Context,
            ClosureLayoutRval, ClosureLayoutType, !Info),
        ClosureLayoutPtrGCInit = statement(
            ml_stmt_atomic(
                assign(ClosureLayoutPtrLval,
                    ml_unop(box(ClosureLayoutType), ClosureLayoutRval))),
            MLDS_Context),
        TypeParamsGCInitFragments = [
            target_code_output(TypeParamsLval),
            raw_target_code(" = (MR_Box) " ++
                "MR_materialize_typeclass_info_type_params(\n"
                ++ "(MR_Word) ", []),
            target_code_input(ml_lval(ClosureArgLval)),
            raw_target_code(", (MR_Closure_Layout *) ", []),
            target_code_input(ml_lval(ClosureLayoutPtrLval)),
            raw_target_code(");\n", [])
        ]
    ;
        ClosureKind = special_pred_closure,
        unexpected($module, $pred, "special_pred_closure")

    ),
    TypeParamsGCInit = statement(ml_stmt_atomic(inline_target_code(
        ml_target_c, TypeParamsGCInitFragments)), MLDS_Context),
    GC_Decls = [ClosureLayoutPtrDecl, TypeParamsDecl].

:- pred ml_gen_closure_field_lvals(mlds_lval::in, int::in, int::in, int::in,
    list(mlds_lval)::out, ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_closure_field_lvals(ClosureLval, Offset, ArgNum, NumClosureArgs,
        ClosureArgLvals, !Info) :-
    ( ArgNum > NumClosureArgs ->
        ClosureArgLvals = []
    ;
        % Generate `MR_field(MR_mktag(0), closure, <N>)'.
        FieldId = ml_field_offset(ml_const(mlconst_int(ArgNum + Offset))),
        % XXX These types might not be right.
        FieldLval = ml_field(yes(0), ml_lval(ClosureLval), FieldId,
            mlds_generic_type, mlds_generic_type),
        % Recursively handle the remaining fields.
        ml_gen_closure_field_lvals(ClosureLval, Offset, ArgNum + 1,
            NumClosureArgs, ClosureArgLvals0, !Info),
        ClosureArgLvals = [FieldLval | ClosureArgLvals0]
    ).

%-----------------------------------------------------------------------------%
:- end_module ml_backend.ml_closure_gen.
%-----------------------------------------------------------------------------%
