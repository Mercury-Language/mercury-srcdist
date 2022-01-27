%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1999-2012, 2014 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: ml_unify_gen.m
% Main author: fjh
%
% This module is part of the MLDS code generator.
% It handles MLDS code generation for unifications.
%
% Code for deconstruction unifications
%
%
%   det (cannot_fail) deconstruction:
%       <succeeded = (X => f(A1, A2, ...))>
%   ===>
%       A1 = arg(X, f, 1);                  % extract arguments
%       A2 = arg(X, f, 2);
%       ...
%
%   semidet (can_fail) deconstruction:
%       <X => f(A1, A2, ...)>
%   ===>
%       <succeeded = (X => f(_, _, _, _))>  % tag test
%       if (succeeded) {
%           A1 = arg(X, f, 1);              % extract arguments
%           A2 = arg(X, f, 2);
%           ...
%       }
%
%-----------------------------------------------------------------------------%

:- module ml_backend.ml_unify_gen.
:- interface.

:- import_module hlds.code_model.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_module.
:- import_module ml_backend.ml_gen_info.
:- import_module ml_backend.ml_global_data.
:- import_module ml_backend.mlds.
:- import_module parse_tree.prog_data.

:- import_module bool.
:- import_module list.
:- import_module maybe.

%-----------------------------------------------------------------------------%

    % Generate MLDS code for a unification.
    %
:- pred ml_gen_unification(unification::in, code_model::in, prog_context::in,
    list(statement)::out, ml_gen_info::in, ml_gen_info::out) is det.

    % Convert a cons_id to a cons_tag.
    %
:- pred ml_cons_id_to_tag(ml_gen_info::in, cons_id::in, cons_tag::out) is det.

    % ml_gen_tag_test(Var, ConsId, Expression, !Info):
    %
    % Generate code to perform a tag test.
    %
    % The test checks whether Var has the functor specified by ConsId.
    % The generated code will not contain Defns or Statements; it will be
    % only an Expression, which will be a boolean rval. Expression will
    % evaluate to true iff the Var has the functor specified by ConsId.
    %
:- pred ml_gen_tag_test(prog_var::in, cons_id::in, mlds_rval::out,
    ml_gen_info::in, ml_gen_info::out) is det.

    % ml_gen_known_tag_test(Var, TaggedConsId, Expression, !Info):
    %
    % Same as ml_gen_tag_test, but the tag of ConsId is already known.
    %
:- pred ml_gen_known_tag_test(prog_var::in, tagged_cons_id::in, mlds_rval::out,
    ml_gen_info::in, ml_gen_info::out) is det.

    % ml_gen_secondary_tag_rval(ModuleInfo, PrimaryTag, VarType, VarRval):
    %
    % Return the rval for the secondary tag field of VarRval, assuming that
    % VarRval has the specified VarType and PrimaryTag.
    %
:- func ml_gen_secondary_tag_rval(module_info, tag_bits, mer_type, mlds_rval)
    = mlds_rval.

    % Generate an MLDS rval for a given reserved address,
    % cast to the appropriate type.
    %
:- func ml_gen_reserved_address(module_info, reserved_address, mlds_type) =
    mlds_rval.

    % ml_gen_new_object(MaybeConsId, MaybeCtorName, Tag, ExplicitSecTag, Var,
    %   ExtraRvals, ExtraTypes, ArgVars, ArgModes, TakeAddr, HowToConstruct,
    %   Context, Statements, !Info):
    %
    % Generate a `new_object' statement, or a static constant, depending on the
    % value of the how_to_construct argument. The `ExtraRvals' and `ExtraTypes'
    % arguments specify additional constants to insert at the start of the
    % argument list.
    %
:- pred ml_gen_new_object(maybe(cons_id)::in, maybe(ctor_name)::in,
    mlds_tag::in, bool::in, prog_var::in,
    list(mlds_rval)::in, list(mlds_type)::in,
    list(prog_var)::in, list(uni_mode)::in, list(int)::in,
    how_to_construct::in, prog_context::in, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

    % Generate MLDS code for a scope that constructs a ground term.
    %
:- pred ml_gen_ground_term(prog_var::in, hlds_goal::in,
    list(statement)::out, ml_gen_info::in, ml_gen_info::out) is det.

:- pred ml_gen_const_structs(module_info::in, ml_const_struct_map::out,
    ml_global_data::in, ml_global_data::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module backend_libs.arg_pack.
:- import_module backend_libs.builtin_ops.
:- import_module backend_libs.rtti.
:- import_module backend_libs.type_class_info.
:- import_module check_hlds.mode_util.
:- import_module check_hlds.type_util.
:- import_module hlds.const_struct.
:- import_module hlds.hlds_code_util.
:- import_module hlds.hlds_out.
:- import_module hlds.hlds_out.hlds_out_util.
:- import_module hlds.hlds_pred.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module mdbcomp.sym_name.
:- import_module ml_backend.ml_closure_gen.
:- import_module ml_backend.ml_code_gen.
:- import_module ml_backend.ml_code_util.
:- import_module ml_backend.ml_target_util.
:- import_module ml_backend.ml_type_gen.
:- import_module ml_backend.ml_util.
:- import_module parse_tree.builtin_lib_types.
:- import_module parse_tree.prog_type.
:- import_module parse_tree.set_of_var.

:- import_module assoc_list.
:- import_module int.
:- import_module map.
:- import_module pair.
:- import_module require.
:- import_module set.
:- import_module term.
:- import_module unit.
:- import_module varset.

:- inst no_or_direct_arg_tag
    --->    no_tag
    ;       direct_arg_tag(ground).

%-----------------------------------------------------------------------------%

ml_gen_unification(Unification, CodeModel, Context, Statements, !Info) :-
    (
        Unification = assign(TargetVar, SourceVar),
        expect(unify(CodeModel, model_det), $module, $pred, "assign not det"),
        ml_variable_type(!.Info, TargetVar, Type),
        ml_gen_info_get_module_info(!.Info, ModuleInfo),
        IsDummyType = check_dummy_type(ModuleInfo, Type),
        (
            % Skip dummy argument types, since they will not have been
            % declared.
            IsDummyType = is_dummy_type,
            Statements = []
        ;
            IsDummyType = is_not_dummy_type,
            ml_gen_var(!.Info, TargetVar, TargetLval),
            ml_gen_var(!.Info, SourceVar, SourceLval),
            Statement = ml_gen_assign(TargetLval, ml_lval(SourceLval),
                Context),
            Statements = [Statement]
        ),
        ( ml_gen_info_search_const_var(!.Info, SourceVar, GroundTerm) ->
            % If the source variable is a constant, so is the target after
            % this assignment.
            %
            % The mark_static_terms assumes that if SourceVar is a constant
            % term, then after this assignment unification TargetVar is a
            % constant term also. Therefore later constant terms may contain
            % TargetVar among their arguments. If we didn't copy the constant
            % info here, the construction of the later constant could cause
            % a code generator abort.
            ml_gen_info_set_const_var(TargetVar, GroundTerm, !Info)
        ;
            true
        )
    ;
        Unification = simple_test(VarA, VarB),
        expect(unify(CodeModel, model_semi), $module, $pred,
            "simple_test not semidet"),
        ml_variable_type(!.Info, VarA, Type),
        ( Type = builtin_type(builtin_type_string) ->
            EqualityOp = str_eq
        ; Type = builtin_type(builtin_type_float) ->
            EqualityOp = float_eq
        ;
            EqualityOp = eq
        ),
        ml_gen_var(!.Info, VarA, VarALval),
        ml_gen_var(!.Info, VarB, VarBLval),
        Test = ml_binop(EqualityOp, ml_lval(VarALval), ml_lval(VarBLval)),
        ml_gen_set_success(!.Info, Test, Context, Statement),
        Statements = [Statement]
    ;
        Unification = construct(Var, ConsId, Args, ArgModes, HowToConstruct,
            _CellIsUnique, SubInfo),
        expect(unify(CodeModel, model_det), $module, $pred,
            "construct not det"),
        (
            SubInfo = no_construct_sub_info,
            TakeAddr = []
        ;
            SubInfo = construct_sub_info(MaybeTakeAddr, MaybeSizeProfInfo),
            (
                MaybeTakeAddr = no,
                TakeAddr = []
            ;
                MaybeTakeAddr = yes(TakeAddr)
            ),
            expect(unify(MaybeSizeProfInfo, no), $module, $pred,
                "term size profiling not yet supported")
        ),
        ml_gen_construct(Var, ConsId, Args, ArgModes, TakeAddr,
            HowToConstruct, Context, Statements, !Info)
    ;
        Unification = deconstruct(Var, ConsId, Args, ArgModes, CanFail,
            CanCGC),
        (
            CanFail = can_fail,
            ExpectedCodeModel = model_semi,
            ml_gen_semi_deconstruct(Var, ConsId, Args, ArgModes, Context,
                Unif_Statements, !Info)
        ;
            CanFail = cannot_fail,
            ExpectedCodeModel = model_det,
            ml_gen_det_deconstruct(Var, ConsId, Args, ArgModes, Context,
                Unif_Statements, !Info)
        ),
        (
            % Note that we can deallocate a cell even if the unification fails;
            % it is the responsibility of the structure reuse phase to ensure
            % that this is safe.
            CanCGC = can_cgc,
            ml_gen_var(!.Info, Var, VarLval),
            % XXX Avoid strip_tag when we know what tag it will have.
            Delete = delete_object(
                ml_unop(std_unop(strip_tag), ml_lval(VarLval))),
            Stmt = ml_stmt_atomic(Delete),
            CGC_Statement = statement(Stmt, mlds_make_context(Context)),
            Statements0 = Unif_Statements ++ [CGC_Statement]
        ;
            CanCGC = cannot_cgc,
            Statements0 = Unif_Statements
        ),

        % We used to require that CodeModel = ExpectedCodeModel. But the
        % determinism field in the goal_info is allowed to be a conservative
        % approximation, so we need to handle the case were CodeModel is less
        % precise than ExpectedCodeModel.
        ml_gen_maybe_convert_goal_code_model(CodeModel, ExpectedCodeModel,
            Context, Statements0, Statements, !Info)
    ;
        Unification = complicated_unify(_, _, _),
        % Simplify.m should have converted these into procedure calls.
        unexpected($module, $pred, "complicated unify")
    ).

    % ml_gen_construct generates code for a construction unification.
    %
:- pred ml_gen_construct(prog_var::in, cons_id::in, list(prog_var)::in,
    list(uni_mode)::in, list(int)::in, how_to_construct::in, prog_context::in,
    list(statement)::out, ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_construct(Var, ConsId, Args, ArgModes, TakeAddr, HowToConstruct,
        Context, Statements, !Info) :-
    % Figure out how this cons_id is represented.
    ml_variable_type(!.Info, Var, Type),
    ml_cons_id_to_tag(!.Info, ConsId, Tag),
    ml_gen_construct_tag(Tag, Type, Var, ConsId, Args, ArgModes, TakeAddr,
        HowToConstruct, Context, Statements, !Info).

:- pred ml_gen_construct_tag(cons_tag::in, mer_type::in, prog_var::in,
    cons_id::in, list(prog_var)::in, list(uni_mode)::in, list(int)::in,
    how_to_construct::in, prog_context::in, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_construct_tag(Tag, Type, Var, ConsId, Args, ArgModes, TakeAddr,
        HowToConstruct, Context, Statements, !Info) :-
    (
        % Types for which some other constructor has a reserved_address
        % -- that only makes a difference when deconstructing, so here we
        % ignore that, and just recurse on the representation for this
        % constructor.

        Tag = shared_with_reserved_addresses_tag(_, ThisTag),
        ml_gen_construct_tag(ThisTag, Type, Var, ConsId, Args, ArgModes,
            TakeAddr, HowToConstruct, Context, Statements, !Info)
    ;
        ( Tag = no_tag
        ; Tag = direct_arg_tag(_)
        ),
        (
            Args = [ArgVar],
            ArgModes = [ArgMode]
        ->
            ml_gen_var(!.Info, Var, VarLval),
            ml_gen_info_get_module_info(!.Info, ModuleInfo),
            MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, Type),
            ( ml_gen_info_search_const_var(!.Info, ArgVar, ArgGroundTerm) ->
                ArgGroundTerm = ml_ground_term(ArgRval, _ArgType,
                    MLDS_ArgType),
                ml_gen_info_get_global_data(!.Info, GlobalData0),
                DoubleWidth = no,
                ml_gen_box_const_rval(ModuleInfo, Context, MLDS_ArgType,
                    DoubleWidth, ArgRval, Rval0, GlobalData0, GlobalData),
                ml_gen_info_set_global_data(GlobalData, !Info),
                Rval = ml_cast_cons_tag(MLDS_Type, Tag, Rval0),
                GroundTerm = ml_ground_term(Rval, Type, MLDS_Type),
                ml_gen_info_set_const_var(Var, GroundTerm, !Info),
                Statement = ml_gen_assign(VarLval, Rval, Context),
                Statements = [Statement]
            ;
                ml_gen_var(!.Info, ArgVar, ArgLval),
                ml_variable_type(!.Info, ArgVar, ArgType),
                (
                    Tag = no_tag,
                    ArgRval = ml_lval(ArgLval),
                    ml_gen_box_or_unbox_rval(ModuleInfo, ArgType, Type,
                        native_if_possible, ArgRval, Rval),
                    Statement = ml_gen_assign(VarLval, Rval, Context),
                    Statements = [Statement]
                ;
                    Tag = direct_arg_tag(Ptag),
                    ml_variable_type(!.Info, Var, VarType),
                    ml_gen_direct_arg_construct(ModuleInfo, ArgMode, Ptag,
                        ArgLval, ArgType, VarLval, VarType, Context,
                        Statements)
                )
            )
        ;
            (
                Tag = no_tag,
                unexpected($module, $pred, "no_tag: arity != 1")
            ;
                Tag = direct_arg_tag(_),
                unexpected($module, $pred, "direct_arg_tag: arity != 1")
            )
        )
    ;
        % Ordinary compound terms.
        (
            Tag = single_functor_tag,
            Ptag = 0,
            MaybeStag = no
        ;
            Tag = unshared_tag(Ptag),
            MaybeStag = no
        ;
            Tag = shared_remote_tag(Ptag, Stag),
            MaybeStag = yes(Stag)
        ),
        UsesBaseClass = ml_tag_uses_base_class(Tag),
        ml_gen_compound(ConsId, Ptag, MaybeStag, UsesBaseClass, Var,
            Args, ArgModes, TakeAddr, HowToConstruct, Context,
            Statements, !Info)
    ;
        % Lambda expressions.
        Tag = closure_tag(PredId, ProcId, _EvalMethod),
        ml_gen_closure(PredId, ProcId, Var, Args, ArgModes, HowToConstruct,
            Context, Statements, !Info)
    ;
        ( Tag = type_info_const_tag(ConstNum)
        ; Tag = typeclass_info_const_tag(ConstNum)
        ; Tag = ground_term_const_tag(ConstNum, _)
        ),
        ml_gen_info_get_const_struct_map(!.Info, ConstStructMap),
        map.lookup(ConstStructMap, ConstNum, GroundTerm0),
        GroundTerm0 = ml_ground_term(Rval, _Type, _MLDS_Type),
        ml_gen_var(!.Info, Var, VarLval),
        ml_gen_info_get_module_info(!.Info, ModuleInfo),
        MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, Type),
        GroundTerm = ml_ground_term(Rval, Type, MLDS_Type),
        ml_gen_info_set_const_var(Var, GroundTerm, !Info),
        Statement = ml_gen_assign(VarLval, Rval, Context),
        Statements = [Statement]
    ;
        % Constants.
        ( Tag = int_tag(_)
        ; Tag = foreign_tag(_, _)
        ; Tag = float_tag(_)
        ; Tag = string_tag(_)
        ; Tag = reserved_address_tag(_)
        ; Tag = shared_local_tag(_, _)
        ; Tag = type_ctor_info_tag(_, _, _)
        ; Tag = base_typeclass_info_tag(_, _, _)
        ; Tag = deep_profiling_proc_layout_tag(_, _)
        ; Tag = tabling_info_tag(_, _)
        ; Tag = table_io_entry_tag(_, _)
        ),
        (
            Args = [],
            ml_gen_var(!.Info, Var, VarLval),
            ml_gen_info_get_module_info(!.Info, ModuleInfo),
            MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, Type),
            ml_gen_constant(Tag, Type, MLDS_Type, Rval, !Info),
            GroundTerm = ml_ground_term(Rval, Type, MLDS_Type),
            ml_gen_info_set_const_var(Var, GroundTerm, !Info),
            Statement = ml_gen_assign(VarLval, Rval, Context),
            Statements = [Statement]
        ;
            Args = [_ | _],
            unexpected($module, $pred, "bad constant term")
        )
    ).

:- pred ml_gen_info_lookup_const_var_rval(ml_gen_info::in, prog_var::in,
    mlds_rval::out) is det.

ml_gen_info_lookup_const_var_rval(Info, Var, Rval) :-
    ml_gen_info_lookup_const_var(Info, Var, GroundTerm),
    GroundTerm = ml_ground_term(Rval, _, _).

    % Generate the rval for a given constant.
    %
:- pred ml_gen_constant(cons_tag::in, mer_type::in, mlds_type::in,
    mlds_rval::out, ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_constant(Tag, VarType, MLDS_VarType, Rval, !Info) :-
    (
        Tag = int_tag(Int),
        ( VarType = int_type ->
            Rval = ml_const(mlconst_int(Int))
        ; VarType = char_type ->
            Rval = ml_const(mlconst_char(Int))
        ;
            Rval = ml_const(mlconst_enum(Int, MLDS_VarType))
        )
    ;
        Tag = float_tag(Float),
        Rval = ml_const(mlconst_float(Float))
    ;
        Tag = string_tag(String),
        Rval = ml_const(mlconst_string(String))
    ;
        Tag = foreign_tag(ForeignLang, ForeignTag),
        Rval = ml_const(mlconst_foreign(ForeignLang, ForeignTag, MLDS_VarType))
    ;
        Tag = shared_local_tag(Bits1, Num1),
        Rval = ml_unop(cast(MLDS_VarType), ml_mkword(Bits1,
            ml_unop(std_unop(mkbody), ml_const(mlconst_int(Num1)))))
    ;
        Tag = type_ctor_info_tag(ModuleName0, TypeName, TypeArity),
        ModuleName = fixup_builtin_module(ModuleName0),
        MLDS_Module = mercury_module_name_to_mlds(ModuleName),
        RttiTypeCtor = rtti_type_ctor(ModuleName, TypeName, TypeArity),
        DataAddr = data_addr(MLDS_Module,
            mlds_rtti(ctor_rtti_id(RttiTypeCtor, type_ctor_type_ctor_info))),
        Rval = ml_unop(cast(MLDS_VarType),
            ml_const(mlconst_data_addr(DataAddr)))
    ;
        Tag = base_typeclass_info_tag(ModuleName, ClassId, Instance),
        MLDS_Module = mercury_module_name_to_mlds(ModuleName),
        TCName = generate_class_name(ClassId),
        DataAddr = data_addr(MLDS_Module, mlds_rtti(tc_rtti_id(TCName,
            type_class_base_typeclass_info(ModuleName, Instance)))),
        Rval = ml_unop(cast(MLDS_VarType),
            ml_const(mlconst_data_addr(DataAddr)))
    ;
        Tag = tabling_info_tag(PredId, ProcId),
        ml_gen_info_get_module_info(!.Info, ModuleInfo),
        ml_gen_pred_label(ModuleInfo, PredId, ProcId, PredLabel, PredModule),
        DataAddr = data_addr(PredModule,
            mlds_tabling_ref(mlds_proc_label(PredLabel, ProcId),
                tabling_info)),
        Rval = ml_unop(cast(MLDS_VarType),
            ml_const(mlconst_data_addr(DataAddr)))
    ;
        Tag = deep_profiling_proc_layout_tag(_, _),
        unexpected($module, $pred, "deep_profiling_proc_layout_tag NYI")
    ;
        Tag = table_io_entry_tag(_, _),
        unexpected($module, $pred, "table_io_entry_tag NYI")
    ;
        Tag = reserved_address_tag(ReservedAddr),
        ml_gen_info_get_module_info(!.Info, ModuleInfo),
        Rval = ml_gen_reserved_address(ModuleInfo, ReservedAddr, MLDS_VarType)
    ;
        Tag = shared_with_reserved_addresses_tag(_, ThisTag),
        % Whether or not some other constructors in the type are represented
        % by reserved addresses makes a difference only when deconstructing
        % the term, not when constructing it.
        ml_gen_constant(ThisTag, VarType, MLDS_VarType, Rval, !Info)
    ;
        % These tags, which are not (necessarily) constants, are handled
        % in ml_gen_construct, so we don't need to handle them here.
        ( Tag = no_tag
        ; Tag = single_functor_tag
        ; Tag = unshared_tag(_)
        ; Tag = direct_arg_tag(_)
        ; Tag = shared_remote_tag(_, _)
        ; Tag = closure_tag(_, _, _)
        ; Tag = type_info_const_tag(_)
        ; Tag = typeclass_info_const_tag(_)
        ; Tag = ground_term_const_tag(_, _)
        ),
        unexpected($module, $pred, "unexpected tag")
    ).

%-----------------------------------------------------------------------------%

ml_gen_reserved_address(ModuleInfo, ResAddr, MLDS_Type) = Rval :-
    (
        ResAddr = null_pointer,
        Rval = ml_const(mlconst_null(MLDS_Type))
    ;
        ResAddr = small_pointer(Int),
        Rval = ml_unop(cast(MLDS_Type), ml_const(mlconst_int(Int)))
    ;
        ResAddr = reserved_object(TypeCtor, QualCtorName, CtorArity),
        (
            QualCtorName = qualified(ModuleName, CtorName),
            module_info_get_globals(ModuleInfo, Globals),
            MLDS_ModuleName = mercury_module_name_to_mlds(ModuleName),
            TypeCtor = type_ctor(TypeName, TypeArity),
            UnqualTypeName = unqualify_name(TypeName),
            globals.get_target(Globals, Target),
            MLDS_TypeName = mlds_append_class_qualifier(Target,
                MLDS_ModuleName, module_qual, UnqualTypeName, TypeArity),
            Name = ml_format_reserved_object_name(CtorName, CtorArity),
            Rval0 = ml_const(mlconst_data_addr(
                data_addr(MLDS_TypeName, mlds_data_var(Name)))),

            % The MLDS type of the reserved object may be a class derived from
            % the base class for this Mercury type. So for some back-ends,
            % we need to insert a (down-)cast here to convert from the derived
            % class to the base class. In particular, this is needed to avoid
            % compiler warnings in the C code generated by the MLDS->C
            % back-end. But inserting the cast could slow down the generated
            % code for the .NET back-end (where the JIT probably doesn't
            % optimize downcasts). So we only do it if the back-end
            % requires it.

            SupportsInheritance = target_supports_inheritence(Target),
            (
                SupportsInheritance = yes,
                Rval = Rval0
            ;
                SupportsInheritance = no,
                CastMLDS_Type = mlds_ptr_type(mlds_class_type(
                    qual(MLDS_ModuleName, module_qual, UnqualTypeName),
                    TypeArity, mlds_class)),
                Rval = ml_unop(cast(CastMLDS_Type), Rval0)
            )
        ;
            QualCtorName = unqualified(_),
            unexpected($module, $pred, "unqualified ctor name")
        )
    ).

%-----------------------------------------------------------------------------%

    % Convert a cons_id for a given type to a cons_tag.
    %
ml_cons_id_to_tag(Info, ConsId, Tag) :-
    ml_gen_info_get_module_info(Info, ModuleInfo),
    Tag = cons_id_to_tag(ModuleInfo, ConsId).

    % Generate code to construct a new object.
    %
:- pred ml_gen_compound(cons_id::in, int::in, maybe(int)::in,
    tag_uses_base_class::in, prog_var::in, list(prog_var)::in,
    list(uni_mode)::in, list(int)::in, how_to_construct::in, prog_context::in,
    list(statement)::out, ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_compound(ConsId, Ptag, MaybeStag, UsesBaseClass, Var, ArgVars, ArgModes,
        TakeAddr, HowToConstruct, Context, Statements, !Info) :-
    ml_gen_info_get_target(!.Info, CompilationTarget),

    % Figure out which class name to construct.
    (
        UsesBaseClass = tag_uses_base_class,
        MaybeCtorName = no
    ;
        UsesBaseClass = tag_does_not_use_base_class,
        ml_cons_name(CompilationTarget, ConsId, CtorName),
        MaybeCtorName = yes(CtorName)
    ),

    % If there is a secondary tag, it goes in the first field.
    (
        MaybeStag = yes(Stag),
        UsesConstructors = ml_target_uses_constructors(CompilationTarget),
        (
            UsesConstructors = no,
            ExplicitSecTag = yes,
            StagRval0 = ml_const(mlconst_int(Stag)),
            StagType0 = mlds_native_int_type,
            % With the low-level data representation, all fields -- even the
            % secondary tag -- are boxed, and so we need box it here.
            StagRval = ml_unop(box(StagType0), StagRval0),
            StagType = mlds_generic_type,
            ExtraRvals = [StagRval],
            ExtraArgTypes = [StagType]
        ;
            UsesConstructors = yes,
            % Secondary tag is implicitly initialised by the constructor.
            ExplicitSecTag = no,
            ExtraRvals = [],
            ExtraArgTypes = []
        )
    ;
        MaybeStag = no,
        ExplicitSecTag = no,
        ExtraRvals = [],
        ExtraArgTypes = []
    ),
    ml_gen_new_object(yes(ConsId), MaybeCtorName, Ptag, ExplicitSecTag,
        Var, ExtraRvals, ExtraArgTypes, ArgVars, ArgModes, TakeAddr,
        HowToConstruct, Context, Statements, !Info).

ml_gen_new_object(MaybeConsId, MaybeCtorName, Tag, ExplicitSecTag, Var,
        ExtraRvals, ExtraTypes, ArgVars, ArgModes, TakeAddr,
        HowToConstruct, Context, Statements, !Info) :-
    % Determine the variable's type and lval, the tag to use, and the types
    % of the argument vars.
    ml_variable_type(!.Info, Var, VarType),
    ml_gen_type(!.Info, VarType, MLDS_Type),
    ml_gen_var(!.Info, Var, VarLval),
    ( Tag = 0 ->
        MaybeTag = no
    ;
        MaybeTag = yes(Tag)
    ),
    ml_variable_types(!.Info, ArgVars, ArgTypes),

    (
        HowToConstruct = construct_dynamically,
        ml_gen_new_object_dynamically(MaybeConsId, MaybeCtorName,
            MaybeTag, ExplicitSecTag, Var, VarLval, VarType, MLDS_Type,
            ExtraRvals, ExtraTypes, ArgVars, ArgTypes, ArgModes, TakeAddr,
            Context, Statements, !Info)
    ;
        HowToConstruct = construct_statically,
        expect(unify(TakeAddr, []), $module, $pred,
            "cannot take address of static object's field"),
        ml_gen_new_object_statically(MaybeConsId, MaybeCtorName, MaybeTag,
            Var, VarLval, VarType, MLDS_Type, ExtraRvals, ExtraTypes,
            ArgVars, ArgTypes, Context, Statements, !Info)
    ;
        HowToConstruct = reuse_cell(CellToReuse),
        ml_gen_new_object_reuse_cell(MaybeConsId, MaybeCtorName, Tag, MaybeTag,
            ExplicitSecTag, Var, VarLval, VarType, MLDS_Type,
            ExtraRvals, ExtraTypes, ArgVars, ArgTypes, ArgModes, TakeAddr,
            CellToReuse, Context, Statements, !Info)
    ;
        HowToConstruct = construct_in_region(_RegVar),
        sorry($module, $pred, "construct_in_region NYI")
    ).

:- pred ml_gen_new_object_dynamically(maybe(cons_id)::in, maybe(ctor_name)::in,
    maybe(mlds_tag)::in, bool::in, prog_var::in, mlds_lval::in, mer_type::in,
    mlds_type::in, list(mlds_rval)::in, list(mlds_type)::in,
    list(prog_var)::in, list(mer_type)::in, list(uni_mode)::in,
    list(int)::in, prog_context::in, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_new_object_dynamically(MaybeConsId, MaybeCtorName, MaybeTag,
        ExplicitSecTag, _Var, VarLval, VarType, MLDS_Type,
        ExtraRvals, ExtraTypes, ArgVars, ArgTypes, ArgModes, TakeAddr,
        Context, Statements, !Info) :-
    % Find out the types of the constructor arguments and generate rvals
    % for them (boxing/unboxing if needed).
    ml_gen_var_list(!.Info, ArgVars, ArgLvals),
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    get_maybe_cons_id_arg_types(ModuleInfo, MaybeConsId, ArgTypes, VarType,
        ConsArgTypes, ConsArgWidths),
    NumExtraRvals = length(ExtraRvals),
    module_info_get_globals(ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, use_atomic_cells, UseAtomicCells),
    (
        UseAtomicCells = yes,
        MayUseAtomic0 = may_use_atomic_alloc
    ;
        UseAtomicCells = no,
        MayUseAtomic0 = may_not_use_atomic_alloc
    ),
    ml_gen_info_get_high_level_data(!.Info, HighLevelData),
    ml_gen_cons_args(ArgVars, ArgLvals, ArgTypes, ConsArgTypes, ConsArgWidths,
        ArgModes, NumExtraRvals, TakeAddr, ModuleInfo, HighLevelData,
        ArgRvals0, MLDS_ArgTypes0, TakeAddrInfos, MayUseAtomic0, MayUseAtomic),

    % Replace double-word and packed arguments by uniform single word rvals.
    assoc_list.from_corresponding_lists(ArgRvals0, MLDS_ArgTypes0, ArgsTypes0),
    ml_expand_double_word_rvals(ConsArgWidths, ArgWidths1,
        ArgsTypes0, ArgsTypes1),
    pack_args(ml_shift_combine_rval_type, ArgWidths1, ArgsTypes1, ArgsTypes2,
        unit, _, unit, _),
    assoc_list.keys_and_values(ArgsTypes2, ArgRvals2, MLDS_ArgTypes2),

    % Add the extra rvals to the start.
    ArgRvals = ExtraRvals ++ ArgRvals2,
    MLDS_ArgTypes = ExtraTypes ++ MLDS_ArgTypes2,

    % Compute the number of words to allocate.
    list.length(ArgRvals, Size),
    SizeInWordsRval = ml_const(mlconst_int(Size)),

    % Generate an allocation site id.
    globals.lookup_bool_option(Globals, profile_memory, ProfileMemory),
    (
        ProfileMemory = yes,
        ml_gen_info_get_pred_id(!.Info, PredId),
        ml_gen_info_get_proc_id(!.Info, ProcId),
        ml_gen_info_get_global_data(!.Info, GlobalData0),
        ml_gen_proc_label(ModuleInfo, PredId, ProcId, ProcLabel, _Module),
        ml_gen_alloc_site(ProcLabel, MaybeConsId, Size, Context, AllocId,
            GlobalData0, GlobalData),
        ml_gen_info_set_global_data(GlobalData, !Info),
        MaybeAllocId = yes(AllocId)
    ;
        ProfileMemory = no,
        MaybeAllocId = no
    ),

    % Generate a `new_object' statement to dynamically allocate the memory
    % for this term from the heap. The `new_object' statement will also
    % initialize the fields of this term with the specified arguments.
    MakeNewObject = new_object(VarLval, MaybeTag, ExplicitSecTag, MLDS_Type,
        yes(SizeInWordsRval), MaybeCtorName, ArgRvals, MLDS_ArgTypes,
        MayUseAtomic, MaybeAllocId),
    Stmt = ml_stmt_atomic(MakeNewObject),
    Statement = statement(Stmt, mlds_make_context(Context)),

    ml_gen_field_take_address_assigns(TakeAddrInfos, VarLval, MLDS_Type,
        MaybeTag, Context, !.Info, TakeAddrStatements),
    Statements = [Statement | TakeAddrStatements].

%-----------------------------------------------------------------------------%

:- pred ml_gen_new_object_statically(maybe(cons_id)::in, maybe(ctor_name)::in,
    maybe(mlds_tag)::in,
    prog_var::in, mlds_lval::in, mer_type::in, mlds_type::in,
    list(mlds_rval)::in, list(mlds_type)::in,
    list(prog_var)::in, list(mer_type)::in,
    prog_context::in, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_new_object_statically(MaybeConsId, MaybeCtorName, MaybeTag,
        Var, VarLval, VarType, MLDS_Type, ExtraRvals, ExtraTypes,
        ArgVars, ArgTypes, Context, Statements, !Info) :-
    % Find out the types of the constructor arguments.
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    ml_gen_info_get_high_level_data(!.Info, HighLevelData),
    ml_gen_info_get_target(!.Info, Target),

    get_maybe_cons_id_arg_types(ModuleInfo, MaybeConsId, ArgTypes, VarType,
        ConsArgTypes, ConsArgWidths),

    some [!GlobalData] (
        % Generate rvals for the arguments.
        ml_gen_info_get_global_data(!.Info, !:GlobalData),

        % Box or unbox the arguments, if needed, and insert the extra rvals
        % at the start.
        (
            HighLevelData = no,
            % Box *all* the arguments, including the ExtraRvals.
            list.map(ml_gen_info_lookup_const_var(!.Info), ArgVars,
                ArgGroundTerms),
            ml_gen_box_extra_const_rval_list_lld(ModuleInfo, Context,
                ExtraTypes, ExtraRvals, ExtraArgRvals, !GlobalData),
            assoc_list.from_corresponding_lists(ArgGroundTerms, ConsArgWidths,
                ArgGroundTermsWidths),
            ml_gen_box_const_rval_list_lld(ModuleInfo, Context,
                ArgGroundTermsWidths, ArgRvals1, !GlobalData)
        ;
            HighLevelData = yes,
            list.map(ml_gen_info_lookup_const_var_rval(!.Info), ArgVars,
                ArgRvals0),
            list.map_corresponding(ml_type_as_field(ModuleInfo, HighLevelData),
                ConsArgTypes, ConsArgWidths, FieldTypes),
            ml_gen_box_or_unbox_const_rval_list_hld(ModuleInfo, ArgTypes,
                FieldTypes, ArgRvals0, Context, ArgRvals1, !GlobalData),
            % For --high-level-data, the ExtraRvals should already have
            % the right type, so we do not need to worry about boxing
            % or unboxing them.
            ExtraArgRvals = ExtraRvals
        ),

        % Generate a static constant for this term.
        (
            MaybeCtorName = yes(_),
            UsesBaseClass = tag_does_not_use_base_class
        ;
            MaybeCtorName = no,
            UsesBaseClass = tag_uses_base_class
        ),
        ConstType = get_const_type_for_cons_id(Target, HighLevelData,
            MLDS_Type, UsesBaseClass, MaybeConsId),
        % XXX If the secondary tag is in a base class, then ideally its
        % initializer should be wrapped in `init_struct([init_obj(X)])'
        % rather than just `init_obj(X)' -- the fact that we don't leads to
        % some warnings from GNU C about missing braces in initializers.
        pack_args(ml_shift_combine_rval, ConsArgWidths, ArgRvals1, ArgRvals,
            unit, _, unit, _),
        AllArgRvals = ExtraArgRvals ++ ArgRvals,
        ArgInits = list.map(func(X) = init_obj(X), AllArgRvals),
        ( ConstType = mlds_array_type(_) ->
            Initializer = init_array(ArgInits)
        ;
            Initializer = init_struct(ConstType, ArgInits)
        ),
        module_info_get_name(ModuleInfo, ModuleName),
        MLDS_ModuleName = mercury_module_name_to_mlds(ModuleName),
        ml_gen_static_scalar_const_addr(MLDS_ModuleName, "const_var",
            ConstType, Initializer, Context, ConstAddrRval, !GlobalData),
        ml_gen_info_set_global_data(!.GlobalData, !Info)
    ),

    % Assign the address of the local static constant to the variable.
    %
    % Any later references to Var in later code on the right hand side of
    % another construct_statically construction unification will refer to
    % ConstAddrRval, not to VarLval. If the only later references to Var
    % are in such places, then the definition of VarLval and AssignStatement
    % are both useless, and can be deleted without harm. Unfortunately,
    % at this point in the code generation process, we do not know if
    % there are any other kinds of references to Var later on.
    (
        MaybeTag = no,
        TaggedRval = ConstAddrRval
    ;
        MaybeTag = yes(Tag),
        TaggedRval = ml_mkword(Tag, ConstAddrRval)
    ),
    Rval = ml_unop(cast(MLDS_Type), TaggedRval),
    GroundTerm = ml_ground_term(Rval, VarType, MLDS_Type),
    ml_gen_info_set_const_var(Var, GroundTerm, !Info),

    AssignStatement = ml_gen_assign(VarLval, Rval, Context),
    Statements = [AssignStatement].

:- pred ml_gen_new_object_reuse_cell(maybe(cons_id)::in, maybe(ctor_name)::in,
    mlds_tag::in, maybe(mlds_tag)::in, bool::in,
    prog_var::in, mlds_lval::in, mer_type::in, mlds_type::in,
    list(mlds_rval)::in, list(mlds_type)::in,
    list(prog_var)::in, list(mer_type)::in, list(uni_mode)::in,
    list(int)::in, cell_to_reuse::in, prog_context::in,
    list(statement)::out, ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_new_object_reuse_cell(MaybeConsId, MaybeCtorName, Tag, MaybeTag,
        ExplicitSecTag, Var, VarLval, VarType, MLDS_Type,
        ExtraRvals, ExtraTypes, ArgVars, ArgTypes, ArgModes, TakeAddr,
        CellToReuse, Context, Statements, !Info) :-
    % NOTE: if it is ever used, NeedsUpdates needs to be modified to take into
    % account argument packing, as in unify_gen.m.
    CellToReuse = cell_to_reuse(ReuseVar, ReuseConsIds, _NeedsUpdates),
    (
        MaybeConsId = yes(ConsId0),
        ConsId = ConsId0
    ;
        MaybeConsId = no,
        unexpected($module, $pred, "unknown cons id")
    ),
    list.map(
        (pred(ReuseConsId::in, ReusePrimTag::out) is det :-
            ml_cons_id_to_tag(!.Info, ReuseConsId, ReuseConsIdTag),
            ml_tag_offset_and_argnum(ReuseConsIdTag, ReusePrimTag,
                _ReuseOffSet, _ReuseArgNum)
        ), ReuseConsIds, ReusePrimaryTags0),
    list.remove_dups(ReusePrimaryTags0, ReusePrimaryTags),

    ml_cons_id_to_tag(!.Info, ConsId, ConsIdTag),
    ml_field_names_and_types(!.Info, VarType, ConsId, ArgTypes, Fields),
    ml_tag_offset_and_argnum(ConsIdTag, PrimaryTag, OffSet, ArgNum),

    ml_gen_var(!.Info, Var, Var1Lval),
    ml_gen_var(!.Info, ReuseVar, Var2Lval),

    list.filter(
        (pred(ReuseTag::in) is semidet :-
            ReuseTag \= PrimaryTag
        ), ReusePrimaryTags, DifferentTags),
    (
        DifferentTags = [],
        Var2Rval = ml_lval(Var2Lval)
    ;
        DifferentTags = [ReusePrimaryTag],
        % The body operator is slightly more efficient than the strip_tag
        % operator so we use it when the old tag is known.
        Var2Rval = ml_mkword(PrimaryTag,
            ml_binop(body,
                ml_lval(Var2Lval),
                ml_gen_mktag(ReusePrimaryTag)))
    ;
        DifferentTags = [_, _ | _],
        Var2Rval = ml_mkword(PrimaryTag,
            ml_unop(std_unop(strip_tag), ml_lval(Var2Lval)))
    ),

    CastVar2Rval = ml_unop(cast(MLDS_Type), Var2Rval),
    MLDS_Context = mlds_make_context(Context),
    HeapTestStmt = ml_stmt_atomic(assign_if_in_heap(Var1Lval, CastVar2Rval)),
    HeapTestStatement = statement(HeapTestStmt, MLDS_Context),

    % For each field in the construction unification we need to generate
    % an rval. ExtraRvals need to be inserted at the start of the object.
    ml_gen_extra_arg_assign(ExtraRvals, ExtraTypes, VarType, VarLval,
        0, ConsIdTag, Context, ExtraRvalStatements, !Info),
    % XXX we do more work than we need to here, as some of the cells
    % may already contain the correct values.
    ml_gen_unify_args_for_reuse(ConsId, ArgVars, ArgModes, ArgTypes,
        Fields, TakeAddr, VarType, VarLval, OffSet, ArgNum, ConsIdTag,
        Context, FieldStatements, TakeAddrInfos, !Info),
    ml_gen_field_take_address_assigns(TakeAddrInfos, VarLval, MLDS_Type,
        MaybeTag, Context, !.Info, TakeAddrStatements),
    ThenStatements =
        ExtraRvalStatements ++ FieldStatements ++ TakeAddrStatements,
    ThenStmt = ml_stmt_block([], ThenStatements),
    ThenStatement = statement(ThenStmt, MLDS_Context),

    % If the reassignment isn't possible because the target is statically
    % allocated then fall back to dynamic allocation.
    ml_gen_new_object(MaybeConsId, MaybeCtorName, Tag, ExplicitSecTag, Var,
        ExtraRvals, ExtraTypes, ArgVars, ArgModes, TakeAddr,
        construct_dynamically, Context, DynamicStmts, !Info),
    ElseStmt = ml_stmt_block([], DynamicStmts),
    ElseStatement = statement(ElseStmt, MLDS_Context),

    IfStmt = ml_stmt_if_then_else(ml_lval(Var1Lval), ThenStatement,
        yes(ElseStatement)),
    IfStatement = statement(IfStmt, mlds_make_context(Context)),

    Statements = [HeapTestStatement, IfStatement].

:- pred ml_gen_field_take_address_assigns(list(take_addr_info)::in,
    mlds_lval::in, mlds_type::in, maybe(mlds_tag)::in, prog_context::in,
    ml_gen_info::in, list(statement)::out) is det.

ml_gen_field_take_address_assigns([], _, _, _, _, _, []).
ml_gen_field_take_address_assigns([TakeAddrInfo | TakeAddrInfos],
        CellLval, CellType, MaybeTag, Context, Info, [Assign | Assigns]) :-
    TakeAddrInfo = take_addr_info(AddrVar, Offset, _ConsArgType, FieldType),

    ml_gen_info_get_module_info(Info, ModuleInfo),
    module_info_get_globals(ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, highlevel_data, HighLevelData),
    (
        HighLevelData = no,
        % XXX I am not sure that the types specified here are always the right
        % ones, particularly in cases where the field whose address we are
        % taking has a non-du type such as int or float. However, I can't think
        % of a test case in which a predicate fills in a field of such a type
        % after a *recursive* call, since recursive calls tend to generate
        % values of recursive (i.e. discriminated union) types. -zs
        Offset = offset(OffsetInt),
        SourceRval = ml_mem_addr(ml_field(MaybeTag, ml_lval(CellLval),
            ml_field_offset(ml_const(mlconst_int(OffsetInt))),
            FieldType, CellType)),
        ml_gen_var(Info, AddrVar, AddrLval),
        ml_variable_type(Info, AddrVar, AddrVarType),
        MLDS_AddrVarType = mercury_type_to_mlds_type(ModuleInfo, AddrVarType),
        CastSourceRval = ml_unop(cast(MLDS_AddrVarType), SourceRval),
        Assign = ml_gen_assign(AddrLval, CastSourceRval, Context)
    ;
        HighLevelData = yes,
        % For high-level data lco.m uses a different transformation where we
        % simply pass the base address of the cell. The transformation does not
        % generate unifications.
        ml_gen_var(Info, AddrVar, AddrLval),
        Assign = ml_gen_assign(AddrLval, ml_lval(CellLval), Context)
    ),
    ml_gen_field_take_address_assigns(TakeAddrInfos, CellLval, CellType,
        MaybeTag, Context, Info, Assigns).

    % Return the MLDS type suitable for constructing a constant static
    % ground term with the specified cons_id.
    %
    % In all cases, mlds_array_type(mlds_generic_type) is provisional.
    % ml_gen_static_scalar_const* will replace it by a more specialized type,
    % mlds_mostly_generic_array_type(_), if required by the elements.
    %
:- func get_const_type_for_cons_id(compilation_target, bool, mlds_type,
    tag_uses_base_class, maybe(cons_id)) = mlds_type.

get_const_type_for_cons_id(Target, HighLevelData, MLDS_Type, UsesBaseClass,
        MaybeConsId) = ConstType :-
    (
        HighLevelData = no,
        ConstType = mlds_array_type(mlds_generic_type)
    ;
        HighLevelData = yes,
        (
            % Check for type_infos and typeclass_infos, since these
            % need to be handled specially; their Mercury type definitions
            % are lies on C backends.
            MLDS_Type = mercury_type(_, TypeCtorCategory, _),
            TypeCtorCategory = ctor_cat_system(_),
            Target = target_c
        ->
            ConstType = mlds_array_type(mlds_generic_type)
        ;
            % Check if we are constructing a value for a discriminated union
            % where the specified cons_id which is represented as a derived
            % class that is derived from the base class for this discriminated
            % union type.
            UsesBaseClass = tag_does_not_use_base_class,
            MaybeConsId = yes(ConsId),
            ConsId = cons(CtorSymName, CtorArity, _TypeCtor),
            (
                MLDS_Type = mlds_class_type(QualTypeName, TypeArity, _)
            ;
                MLDS_Type = mercury_type(MercuryType, ctor_cat_user(_), _),
                type_to_ctor(MercuryType, TypeCtor),
                ml_gen_type_name(TypeCtor, QualTypeName, TypeArity)
            )
        ->
            % If so, append the name of the derived class to the name of the
            % base class for this type (since the derived class will also be
            % nested inside the base class).
            QualTypeName = qual(_, _, UnqualTypeName),
            CtorName = ml_gen_du_ctor_name_unqual_type(Target, UnqualTypeName,
                TypeArity, CtorSymName, CtorArity),
            QualTypeName = qual(MLDS_Module, _QualKind, TypeName),
            ClassQualifier = mlds_append_class_qualifier(Target, MLDS_Module,
                module_qual, TypeName, TypeArity),
            ConstType = mlds_class_type(
                qual(ClassQualifier, type_qual, CtorName),
                CtorArity, mlds_class)
        ;
            % Convert mercury_types for user-defined types to the corresponding
            % `mlds_class_type'. This is needed because these types get
            % mapped to `mlds_ptr_type(mlds_class_type(...))', but when
            % declarating static constants we want just the class type,
            % not the pointer type.
            MLDS_Type = mercury_type(MercuryType, ctor_cat_user(_), _),
            type_to_ctor(MercuryType, TypeCtor)
        ->
            ml_gen_type_name(TypeCtor, ClassName, ClassArity),
            ConstType = mlds_class_type(ClassName, ClassArity, mlds_class)
        ;
            % For tuples, a similar issue arises; we want tuple constants
            % to have array type, not the pointer type MR_Tuple.
            MLDS_Type = mercury_type(_, ctor_cat_tuple, _)
        ->
            ConstType = mlds_array_type(mlds_generic_type)
        ;
            % Likewise for closures, we need to use an array type rather than
            % the pointer type MR_ClosurePtr. Note that we use a low-level
            % data representation for closures, even when --high-level-data
            % is enabled.
            MLDS_Type = mercury_type(_, ctor_cat_higher_order, _)
        ->
            ConstType = mlds_array_type(mlds_generic_type)
        ;
            ConstType = MLDS_Type
        )
    ).

:- pred ml_type_as_field(module_info::in, bool::in, mer_type::in,
    arg_width::in, mer_type::out) is det.

ml_type_as_field(ModuleInfo, HighLevelData, FieldType, FieldWidth,
        BoxedFieldType) :-
    (
        (
            HighLevelData = no,
            % With the low-level data representation, we store all fields
            % except for double-width floats as "boxed" so we ignore the
            % original field type and instead generate a polymorphic type
            % BoxedFieldType which we use for the type of the field. This type
            % is used in the calls to ml_gen_box_or_unbox_rval to ensure that
            % we box values when storing them into fields and unbox them when
            % extracting them from fields.
            FieldWidth \= double_word
        ;
            HighLevelData = yes,
            % With the high-level data representation, we don't box everything,
            % but for the MLDS->C and MLDS->asm back-ends we still need to box
            % floating point fields if they are wider than a word.
            ml_must_box_field_type(ModuleInfo, FieldType, FieldWidth)
        )
    ->
        % XXX zs: I do not see any reason why TypeVar cannot be confused with
        % other type variables (whether constructed the same way or not),
        % nor do I see any reason why such confusion would not lead to errors.
        varset.init(TypeVarSet0),
        varset.new_var(TypeVar, TypeVarSet0, _TypeVarSet),
        % The kind is `star' since there are values with this type.
        BoxedFieldType = type_variable(TypeVar, kind_star)
    ;
        BoxedFieldType = FieldType
    ).

:- pred get_maybe_cons_id_arg_types(module_info::in, maybe(cons_id)::in,
    list(mer_type)::in, mer_type::in, list(mer_type)::out,
    list(arg_width)::out) is det.

get_maybe_cons_id_arg_types(ModuleInfo, MaybeConsId, ArgTypes, Type,
        ConsArgTypes, ConsArgWidths) :-
    (
        MaybeConsId = yes(ConsId),
        constructor_arg_types(ModuleInfo, ConsId, ArgTypes, Type,
            ConsArgTypes, ConsArgWidths)
    ;
        MaybeConsId = no,
        % It is a closure. In this case, the arguments are all boxed.
        Length = list.length(ArgTypes),
        ConsArgTypes = ml_make_boxed_types(Length),
        ConsArgWidths = list.duplicate(Length, full_word)
    ).

:- pred constructor_arg_types(module_info::in, cons_id::in, list(mer_type)::in,
    mer_type::in, list(mer_type)::out, list(arg_width)::out) is det.

constructor_arg_types(ModuleInfo, ConsId, ArgTypes, Type,
        ConsArgTypes, ConsArgWidths) :-
    (
        ConsId = cons(_, _, _),
        \+ is_introduced_type_info_type(Type)
    ->
        % Determine the type_ctor, and then look up the data constructor.
        type_to_ctor_det(Type, TypeCtor),
        (
            type_util.get_cons_defn(ModuleInfo, TypeCtor, ConsId, ConsDefn)
        ->
            ConsArgDefns = ConsDefn ^ cons_args,
            list.map2(
                (pred(C::in, CType::out, CWidth::out) is det :-
                    C = ctor_arg(_, CType, CWidth, _)
                ),
                ConsArgDefns, ConsArgTypes0, ConsArgWidths0),

            % There may have been additional types inserted to hold the
            % type_infos and type_class_infos for existentially quantified
            % types. We can get these from the ArgTypes.

            NumExtraArgs = list.length(ArgTypes) - list.length(ConsArgTypes0),
            ExtraArgTypes = list.take_upto(NumExtraArgs, ArgTypes),
            ExtraArgWidths = list.duplicate(NumExtraArgs, full_word),
            ConsArgTypes = ExtraArgTypes ++ ConsArgTypes0,
            ConsArgWidths = ExtraArgWidths ++ ConsArgWidths0
        ;
            % If we did not find a constructor definition, maybe that is
            % because this type was a built-in tuple type.
            type_is_tuple(Type, _)
        ->
            % In this case, the argument types are all fresh variables.
            % Note that we do not need to worry about using the right varset
            % here, since all we really care about at this point is whether
            % something is a type variable or not, not which type variable
            % it is.
            Length = list.length(ArgTypes),
            ConsArgTypes = ml_make_boxed_types(Length),
            ConsArgWidths = list.duplicate(Length, full_word)
        ;
            % Type_util.get_cons_defn shouldn't have failed.
            unexpected($module, $pred, "get_cons_defn failed")
        )
    ;
        % For cases when ConsId \= hlds_cons(_, _) and it is not a tuple,
        % as can happen e.g. for closures and type_infos, we assume that
        % the arguments all have the right type already.
        % XXX is this the right thing to do?
        ConsArgTypes = ArgTypes,
        Length = list.length(ArgTypes),
        ConsArgWidths = list.duplicate(Length, full_word)
    ).

:- func ml_gen_mktag(int) = mlds_rval.

ml_gen_mktag(Tag) = ml_unop(std_unop(mktag), ml_const(mlconst_int(Tag))).

:- func ml_cast_cons_tag(mlds_type::in, cons_tag::in(no_or_direct_arg_tag),
    mlds_rval::in) = (mlds_rval::out) is det.

ml_cast_cons_tag(Type, Tag, Rval) = CastRval :-
    (
        Tag = no_tag,
        TagRval = Rval
    ;
        Tag = direct_arg_tag(Ptag),
        TagRval = ml_mkword(Ptag, Rval)
    ),
    CastRval = ml_unop(cast(Type), TagRval).

:- pred ml_gen_box_or_unbox_const_rval_list_hld(module_info::in,
    list(mer_type)::in, list(mer_type)::in, list(mlds_rval)::in,
    prog_context::in, list(mlds_rval)::out,
    ml_global_data::in, ml_global_data::out) is det.

ml_gen_box_or_unbox_const_rval_list_hld(ModuleInfo, ArgTypes, FieldTypes,
        ArgRvals, Context, FieldRvals, !GlobalData) :-
    (
        ArgTypes = [],
        FieldTypes = [],
        ArgRvals = []
    ->
        FieldRvals = []
    ;
        ArgTypes = [ArgType | ArgTypesTail],
        FieldTypes = [FieldType | FieldTypesTail],
        ArgRvals = [ArgRval | ArgRvalsTail]
    ->
        ml_gen_box_or_unbox_const_rval_hld(ModuleInfo,
            ArgType, FieldType, ArgRval, Context, FieldRval, !GlobalData),
        ml_gen_box_or_unbox_const_rval_list_hld(ModuleInfo,
            ArgTypesTail, FieldTypesTail, ArgRvalsTail, Context,
            FieldRvalsTail, !GlobalData),
        FieldRvals = [FieldRval | FieldRvalsTail]
    ;
        unexpected($module, $pred, "list length mismatch")
    ).

:- pred ml_gen_box_or_unbox_const_rval_hld(module_info::in,
    mer_type::in, mer_type::in, mlds_rval::in, prog_context::in,
    mlds_rval::out, ml_global_data::in, ml_global_data::out) is det.

ml_gen_box_or_unbox_const_rval_hld(ModuleInfo, ArgType, FieldType, ArgRval,
        Context, FieldRval, !GlobalData) :-
    (
        % Handle the case where the field type is a boxed type
        % -- in that case, we can just box the argument type.
        FieldType = type_variable(_, _),
        MLDS_ArgType = mercury_type_to_mlds_type(ModuleInfo, ArgType),
        DoubleWidth = no,
        ml_gen_box_const_rval(ModuleInfo, Context, MLDS_ArgType, DoubleWidth,
            ArgRval, FieldRval, !GlobalData)
    ;
        ( FieldType = defined_type(_, _, _)
        ; FieldType = builtin_type(_)
        ; FieldType = tuple_type(_, _)
        ; FieldType = higher_order_type(_, _, _, _)
        ; FieldType = apply_n_type(_, _, _)
        ; FieldType = kinded_type(_, _)
        ),
        % Otherwise, fall back on ml_gen_box_or_unbox_rval in ml_call_gen.m.
        % XXX This might generate an rval which is not legal in a static
        % initializer!
        ml_gen_box_or_unbox_rval(ModuleInfo, ArgType, FieldType,
            native_if_possible, ArgRval, FieldRval)
    ).

:- pred ml_gen_box_const_rval_list_lld(module_info::in, prog_context::in,
    assoc_list(ml_ground_term, arg_width)::in, list(mlds_rval)::out,
    ml_global_data::in, ml_global_data::out) is det.

ml_gen_box_const_rval_list_lld(_, _, [], [], !GlobalData).
ml_gen_box_const_rval_list_lld(ModuleInfo, Context,
        [GroundTerm - ArgWidth | GroundTerms], [BoxedRval | BoxedRvals],
        !GlobalData) :-
    GroundTerm = ml_ground_term(Rval, _MercuryType, MLDS_Type),
    arg_width_is_double(ArgWidth, DoubleWidth),
    ml_gen_box_const_rval(ModuleInfo, Context, MLDS_Type, DoubleWidth, Rval,
        BoxedRval, !GlobalData),
    ml_gen_box_const_rval_list_lld(ModuleInfo, Context, GroundTerms,
        BoxedRvals, !GlobalData).

:- pred ml_gen_box_extra_const_rval_list_lld(module_info::in, prog_context::in,
    list(mlds_type)::in, list(mlds_rval)::in, list(mlds_rval)::out,
    ml_global_data::in, ml_global_data::out) is det.

ml_gen_box_extra_const_rval_list_lld(_, _, [], [], [], !GlobalData).
ml_gen_box_extra_const_rval_list_lld(ModuleInfo, Context,
        [MLDS_Type | MLDS_Types], [Rval | Rvals], [BoxedRval | BoxedRvals],
        !GlobalData) :-
    % Extras are always a single word.
    DoubleWidth = no,
    ml_gen_box_const_rval(ModuleInfo, Context, MLDS_Type, DoubleWidth,
        Rval, BoxedRval, !GlobalData),
    ml_gen_box_extra_const_rval_list_lld(ModuleInfo, Context, MLDS_Types,
        Rvals, BoxedRvals, !GlobalData).
ml_gen_box_extra_const_rval_list_lld(_, _, [], [_ | _], _, !GlobalData) :-
    unexpected($module, $pred, "length mismatch").
ml_gen_box_extra_const_rval_list_lld(_, _, [_ | _], [], _, !GlobalData) :-
    unexpected($module, $pred, "length mismatch").

:- pred ml_cons_name(compilation_target::in, cons_id::in, ctor_name::out)
    is det.

ml_cons_name(CompilationTarget, HLDS_ConsId, QualifiedConsId) :-
    (
        HLDS_ConsId = cons(ConsSymName, ConsArity, TypeCtor),
        ConsSymName = qualified(SymModuleName, _)
    ->
        ConsName = ml_gen_du_ctor_name(CompilationTarget, TypeCtor,
            ConsSymName, ConsArity),
        ConsId = ctor_id(ConsName, ConsArity),
        ModuleName = mercury_module_name_to_mlds(SymModuleName)
    ;
        ConsName = cons_id_and_arity_to_string(HLDS_ConsId),
        ConsId = ctor_id(ConsName, 0),
        ModuleName = mercury_module_name_to_mlds(unqualified(""))
    ),
    QualifiedConsId = qual(ModuleName, module_qual, ConsId).

:- type take_addr_info
    --->    take_addr_info(
                prog_var,           % The variable we record the address in.
                field_offset,       % The offset of the field. This must take
                                    % into account extra arguments and
                                    % argument packing.
                mlds_type,          % The type of the field variable.
                mlds_type           % The type of the field, possibly
                                    % after boxing.
            ).

:- type field_offset
    --->    offset(int).

    % Create a list of rvals for the arguments for a construction unification.
    % For each argument which is input to the construction unification,
    % we produce the corresponding lval, boxed or unboxed if needed,
    % but if the argument is free, we produce a null value.
    %
:- pred ml_gen_cons_args(list(prog_var)::in, list(mlds_lval)::in,
    list(mer_type)::in, list(mer_type)::in, list(arg_width)::in,
    list(uni_mode)::in, int::in, list(int)::in, module_info::in, bool::in,
    list(mlds_rval)::out, list(mlds_type)::out, list(take_addr_info)::out,
    may_use_atomic_alloc::in, may_use_atomic_alloc::out) is det.

ml_gen_cons_args(Vars, Lvals, ArgTypes, ConsArgTypes, ConsArgWidths,
        UniModes, NumExtraArgs, TakeAddr, ModuleInfo, HighLevelData,
        !:Rvals, !:MLDS_Types, !:TakeAddrInfos, !MayUseAtomic) :-
    (
        ml_gen_cons_args_2(Vars, Lvals, ArgTypes, ConsArgTypes, ConsArgWidths,
            UniModes, NumExtraArgs, 1, TakeAddr, ModuleInfo, HighLevelData,
            !:Rvals, !:MLDS_Types, !:TakeAddrInfos, !MayUseAtomic)
    ->
        true
    ;
        unexpected($module, $pred, "length mismatch")
    ).

:- pred ml_gen_cons_args_2(list(prog_var)::in, list(mlds_lval)::in,
    list(mer_type)::in, list(mer_type)::in, list(arg_width)::in,
    list(uni_mode)::in, int::in, int::in, list(int)::in,
    module_info::in, bool::in, list(mlds_rval)::out, list(mlds_type)::out,
    list(take_addr_info)::out,
    may_use_atomic_alloc::in, may_use_atomic_alloc::out) is semidet.

ml_gen_cons_args_2([], [], [], [], _, [],
        _NumExtraArgs, _CurArgNum, _TakeAddr,
        _ModuleInfo, _HighLevelData, [], [], [], !MayUseAtomic).
ml_gen_cons_args_2([Var | Vars], [Lval | Lvals], [ArgType | ArgTypes],
        [ConsArgType | ConsArgTypes], ConsArgWidths,
        [UniMode | UniModes], NumExtraArgs, CurArgNum, !.TakeAddr,
        ModuleInfo, HighLevelData, [Rval | Rvals],
        [MLDS_Type | MLDS_Types], TakeAddrInfos, !MayUseAtomic) :-
    % It is important to use ArgType instead of ConsArgType here. ConsArgType
    % is the declared type of the argument of the cons_id, while ArgType is
    % the actual type of the variable being assigned to the given slot.
    % ConsArgType may be a type such as pred_id, which is a user-defined type
    % that may not appear in atomic cells, while ArgType may be a type such
    % as int, which may appear in atomic cells. This is because the actual type
    % may see behind abstraction barriers, and may thus see that e.g. pred_id
    % is actually the same as integer.
    update_type_may_use_atomic_alloc(ModuleInfo, ArgType, !MayUseAtomic),

    % Figure out the type of the field.
    list.det_index1(ConsArgWidths, CurArgNum, ConsArgWidth),
    ml_type_as_field(ModuleInfo, HighLevelData, ConsArgType, ConsArgWidth,
        BoxedArgType),
    MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, BoxedArgType),

    % Compute the value of the field.
    UniMode = ((_LI - RI) -> (_LF - RF)),
    ( !.TakeAddr = [CurArgNum | !:TakeAddr] ->
        expect(unify(ConsArgWidth, full_word), $module, $pred,
            "taking address of non word-sized argument"),
        Rval = ml_const(mlconst_null(MLDS_Type)),
        ml_gen_cons_args_2(Vars, Lvals, ArgTypes, ConsArgTypes, ConsArgWidths,
            UniModes, NumExtraArgs, CurArgNum + 1, !.TakeAddr,
            ModuleInfo, HighLevelData, Rvals, MLDS_Types, TakeAddrInfosTail,
            !MayUseAtomic),
        Offset = ml_calc_field_offset(NumExtraArgs, ConsArgWidths, CurArgNum),
        OrigMLDS_Type = mercury_type_to_mlds_type(ModuleInfo, ConsArgType),
        TakeAddrInfo = take_addr_info(Var, Offset, OrigMLDS_Type, MLDS_Type),
        TakeAddrInfos = [TakeAddrInfo | TakeAddrInfosTail]
    ;
        (
            mode_to_arg_mode(ModuleInfo, (RI -> RF), ArgType, top_in),
            check_dummy_type(ModuleInfo, ArgType) = is_not_dummy_type,
            check_dummy_type(ModuleInfo, ConsArgType) = is_not_dummy_type
        ->
            ml_gen_box_or_unbox_rval(ModuleInfo, ArgType, BoxedArgType,
                native_if_possible, ml_lval(Lval), Rval)
        ;
            Rval = ml_const(mlconst_null(MLDS_Type))
        ),
        ml_gen_cons_args_2(Vars, Lvals, ArgTypes, ConsArgTypes, ConsArgWidths,
            UniModes, NumExtraArgs, CurArgNum + 1, !.TakeAddr,
            ModuleInfo, HighLevelData, Rvals, MLDS_Types, TakeAddrInfos,
            !MayUseAtomic)
    ).

:- func ml_calc_field_offset(int, list(arg_width), int) = field_offset.

ml_calc_field_offset(NumExtraArgs, ConsArgWidths, ArgNum) = Offset :-
    ( list.take(ArgNum - 1, ConsArgWidths, WidthsBeforeArg) ->
        WordsBeforeArg = count_distinct_words(WidthsBeforeArg),
        Offset = offset(NumExtraArgs + WordsBeforeArg)
    ;
        unexpected($module, $pred, "more fields than arg_widths")
    ).

    % Generate assignment statements for each of ExtraRvals into the object at
    % VarLval, beginning at Offset.
    %
:- pred ml_gen_extra_arg_assign(list(mlds_rval)::in,
    list(mlds_type)::in, mer_type::in, mlds_lval::in,
    int::in, cons_tag::in, prog_context::in,
    list(statement)::out, ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_extra_arg_assign([_ | _], [], _, _, _, _, _, _, !Info) :-
    unexpected($module, $pred, "length mismatch").
ml_gen_extra_arg_assign([], [_ | _], _, _, _, _, _, _, !Info) :-
    unexpected($module, $pred, "length mismatch").
ml_gen_extra_arg_assign([], [], _, _, _, _, _, [], !Info).
ml_gen_extra_arg_assign([ExtraRval | ExtraRvals], [ExtraType | ExtraTypes],
        VarType, VarLval, Offset, ConsIdTag, Context,
        [Statement | Statements], !Info) :-
    ml_gen_info_get_high_level_data(!.Info, HighLevelData),
    expect(unify(HighLevelData, no), $module, $pred, "high-level data"),

    ml_gen_type(!.Info, VarType, MLDS_VarType),
    FieldId = ml_field_offset(ml_const(mlconst_int(Offset))),
    MaybePrimaryTag = get_primary_tag(ConsIdTag),
    FieldLval = ml_field(MaybePrimaryTag, ml_lval(VarLval), FieldId,
        ExtraType, MLDS_VarType),
    Statement = ml_gen_assign(FieldLval, ExtraRval, Context),

    ml_gen_extra_arg_assign(ExtraRvals, ExtraTypes, VarType, VarLval,
        Offset + 1, ConsIdTag, Context, Statements, !Info).

%-----------------------------------------------------------------------------%

    % Generate a deterministic deconstruction. In a deterministic
    % deconstruction, we know the value of the tag, so we don't need
    % to generate a test.
    %
    %   det (cannot_fail) deconstruction:
    %       <do (X => f(A1, A2, ...))>
    %   ===>
    %       A1 = arg(X, f, 1);      % extract arguments
    %       A2 = arg(X, f, 2);
    %       ...
    %
:- pred ml_gen_det_deconstruct(prog_var::in, cons_id::in, list(prog_var)::in,
    list(uni_mode)::in, prog_context::in, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_det_deconstruct(Var, ConsId, Args, Modes, Context, Statements, !Info) :-
    ml_variable_type(!.Info, Var, Type),
    ml_cons_id_to_tag(!.Info, ConsId, Tag),
    ml_gen_det_deconstruct_tag(Tag, Type, Var, ConsId, Args, Modes, Context,
        Statements, !Info).

:- pred ml_gen_det_deconstruct_tag(cons_tag::in, mer_type::in, prog_var::in,
    cons_id::in, list(prog_var)::in, list(uni_mode)::in, prog_context::in,
    list(statement)::out, ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_det_deconstruct_tag(Tag, Type, Var, ConsId, Args, Modes, Context,
        Statements, !Info) :-
    % For constants, if the deconstruction is det, then we already know
    % the value of the constant, so Statements = [].
    (
        ( Tag = string_tag(_String)
        ; Tag = int_tag(_Int)
        ; Tag = foreign_tag(_, _)
        ; Tag = float_tag(_Float)
        ; Tag = shared_local_tag(_Bits1, _Num1)
        ; Tag = reserved_address_tag(_)
        ),
        Statements = []
    ;
        ( Tag = closure_tag(_, _, _)
        ; Tag = type_ctor_info_tag(_, _, _)
        ; Tag = base_typeclass_info_tag(_, _, _)
        ; Tag = type_info_const_tag(_)
        ; Tag = typeclass_info_const_tag(_)
        ; Tag = ground_term_const_tag(_, _)
        ; Tag = tabling_info_tag(_, _)
        ; Tag = deep_profiling_proc_layout_tag(_, _)
        ; Tag = table_io_entry_tag(_, _)
        ),
        unexpected($module, $pred, "unexpected tag")
    ;
        Tag = no_tag,
        (
            Args = [Arg],
            Modes = [Mode]
        ->
            ml_variable_type(!.Info, Arg, ArgType),
            ml_gen_var(!.Info, Arg, ArgLval),
            ml_gen_var(!.Info, Var, VarLval),
            ml_gen_info_get_module_info(!.Info, ModuleInfo),
            ml_gen_info_get_high_level_data(!.Info, HighLevelData),
            ml_gen_sub_unify(ModuleInfo, HighLevelData, Mode, ArgLval, ArgType,
                VarLval, Type, full_word, Context, [], Statements)
        ;
            unexpected($module, $pred, "no_tag: arity != 1")
        )
    ;
        Tag = direct_arg_tag(Ptag),
        (
            Args = [Arg],
            Modes = [Mode]
        ->
            ml_variable_type(!.Info, Arg, ArgType),
            ml_gen_var(!.Info, Arg, ArgLval),
            ml_gen_var(!.Info, Var, VarLval),
            ml_gen_info_get_module_info(!.Info, ModuleInfo),
            ml_gen_direct_arg_deconstruct(ModuleInfo, Mode, Ptag,
                ArgLval, ArgType, VarLval, Type, Context, Statements)
        ;
            unexpected($module, $pred, "direct_arg_tag: arity != 1")
        )
    ;
        ( Tag = single_functor_tag
        ; Tag = unshared_tag(_UnsharedTag)
        ; Tag = shared_remote_tag(_PrimaryTag, _SecondaryTag)
        ),
        ml_gen_var(!.Info, Var, VarLval),
        ml_variable_types(!.Info, Args, ArgTypes),
        ml_field_names_and_types(!.Info, Type, ConsId, ArgTypes, Fields),
        ml_tag_offset_and_argnum(Tag, _, OffSet, ArgNum),
        ml_gen_unify_args(ConsId, Args, Modes, ArgTypes, Fields, Type,
            VarLval, OffSet, ArgNum, Tag, Context, Statements, !Info)
    ;
        % For shared_with_reserved_address, the sharing is only important
        % for tag tests, not for det deconstructions, so here we just recurse
        % on the real representation.
        Tag = shared_with_reserved_addresses_tag(_, ThisTag),
        ml_gen_det_deconstruct_tag(ThisTag, Type, Var, ConsId, Args,
            Modes, Context, Statements, !Info)
    ).

    % Calculate the integer offset used to reference the first field of a
    % structure for lowlevel data or the first argument number to access
    % the field using the highlevel data representation. Abort if the tag
    % indicates that the data doesn't have any fields.
    %
:- pred ml_tag_offset_and_argnum(cons_tag::in, tag_bits::out,
    field_offset::out, int::out) is det.

ml_tag_offset_and_argnum(Tag, TagBits, Offset, ArgNum) :-
    (
        Tag = single_functor_tag,
        TagBits = 0,
        Offset = offset(0),
        ArgNum = 1
    ;
        ( Tag = unshared_tag(UnsharedTag)
        ; Tag = direct_arg_tag(UnsharedTag)
        ),
        TagBits = UnsharedTag,
        Offset = offset(0),
        ArgNum = 1
    ;
        Tag = shared_remote_tag(PrimaryTag, _SecondaryTag),
        TagBits = PrimaryTag,
        Offset = offset(1),
        ArgNum = 1
    ;
        Tag = shared_with_reserved_addresses_tag(_, SubTag),
        ml_tag_offset_and_argnum(SubTag, TagBits, Offset, ArgNum)
    ;
        Tag = ground_term_const_tag(_, SubTag),
        ml_tag_offset_and_argnum(SubTag, TagBits, Offset, ArgNum)
    ;
        ( Tag = string_tag(_String)
        ; Tag = int_tag(_Int)
        ; Tag = foreign_tag(_, _)
        ; Tag = float_tag(_Float)
        ; Tag = closure_tag(_, _, _)
        ; Tag = type_ctor_info_tag(_, _, _)
        ; Tag = base_typeclass_info_tag(_, _, _)
        ; Tag = type_info_const_tag(_)
        ; Tag = typeclass_info_const_tag(_)
        ; Tag = tabling_info_tag(_, _)
        ; Tag = deep_profiling_proc_layout_tag(_, _)
        ; Tag = table_io_entry_tag(_, _)
        ; Tag = no_tag
        ; Tag = shared_local_tag(_Bits1, _Num1)
        ; Tag = reserved_address_tag(_)
        ),
        unexpected($module, $pred, "unexpected tag")
    ).

    % Given a type and a cons_id, and also the types of the actual arguments
    % of that cons_id in some particular use of it, look up the original types
    % of the fields of that cons_id from the type definition. Note that the
    % field types need not be the same as the actual argument types; for
    % polymorphic types, the types of the actual arguments can be an instance
    % of the field types.
    %
:- pred ml_field_names_and_types(ml_gen_info::in, mer_type::in,
    cons_id::in, list(mer_type)::in, list(constructor_arg)::out) is det.

ml_field_names_and_types(Info, Type, ConsId, ArgTypes, Fields) :-
    % Lookup the field types for the arguments of this cons_id.
    Context = term.context_init,
    MakeUnnamedField = (func(FieldType) =
        % Tuples and extra fields are word-sized.
        ctor_arg(no, FieldType, full_word, Context)
    ),
    (
        type_is_tuple(Type, _),
        list.length(ArgTypes, TupleArity)
    ->
        % The argument types for tuples are unbound type variables.
        FieldTypes = ml_make_boxed_types(TupleArity),
        Fields = list.map(MakeUnnamedField, FieldTypes)
    ;
        ml_gen_info_get_module_info(Info, ModuleInfo),
        type_to_ctor_det(Type, TypeCtor),
        get_cons_defn_det(ModuleInfo, TypeCtor, ConsId, ConsDefn),
        Fields0 = ConsDefn ^ cons_args,

        % Add the fields for any type_infos and/or typeclass_infos inserted
        % for existentially quantified data types. For these, we just copy
        % the types from the ArgTypes.
        NumArgs = list.length(ArgTypes),
        NumFieldTypes0 = list.length(Fields0),
        NumExtraTypes = NumArgs - NumFieldTypes0,
        ExtraFieldTypes = list.take_upto(NumExtraTypes, ArgTypes),
        ExtraFields = list.map(MakeUnnamedField, ExtraFieldTypes),
        Fields = ExtraFields ++ Fields0
    ).

:- pred ml_gen_unify_args(cons_id::in, list(prog_var)::in, list(uni_mode)::in,
    list(mer_type)::in, list(constructor_arg)::in, mer_type::in,
    mlds_lval::in, field_offset::in, int::in, cons_tag::in,
    prog_context::in, list(statement)::out, ml_gen_info::in, ml_gen_info::out)
    is det.

ml_gen_unify_args(ConsId, Args, Modes, ArgTypes, Fields, VarType, VarLval,
        Offset, ArgNum, Tag, Context, Statements, !Info) :-
    (
        ml_gen_unify_args_2(ConsId, Args, Modes, ArgTypes, Fields,
            VarType, VarLval, Offset, ArgNum, Tag, Context,
            [], Statements0, !Info)
    ->
        Statements = Statements0
    ;
        unexpected($module, $pred, "length mismatch")
    ).

:- pred ml_gen_unify_args_2(cons_id::in, list(prog_var)::in,
    list(uni_mode)::in, list(mer_type)::in, list(constructor_arg)::in,
    mer_type::in, mlds_lval::in, field_offset::in, int::in,
    cons_tag::in, prog_context::in, list(statement)::in, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is semidet.

ml_gen_unify_args_2(_, [], [], [], _, _, _, _, _, _, _, !Statements, !Info).
ml_gen_unify_args_2(ConsId, [Arg | Args], [Mode | Modes], [ArgType | ArgTypes],
        [Field | Fields], VarType, VarLval, Offset, ArgNum, Tag,
        Context, !Statements, !Info) :-
    ml_next_field_offset(Field, Fields, Offset, Offset1),
    ArgNum1 = ArgNum + 1,
    ml_gen_unify_args_2(ConsId, Args, Modes, ArgTypes, Fields, VarType,
        VarLval, Offset1, ArgNum1, Tag, Context, !Statements, !Info),
    ml_gen_unify_arg(ConsId, Arg, Mode, ArgType, Field, VarType, VarLval,
        Offset, ArgNum, Tag, Context, !Statements, !Info).

:- pred ml_next_field_offset(constructor_arg::in, list(constructor_arg)::in,
    field_offset::in, field_offset::out) is det.

ml_next_field_offset(_, [], Offset, Offset).
ml_next_field_offset(CurArg, [NextArg | _], PrevOffset, NextOffset) :-
    CurArg = ctor_arg(_, _, CurWidth, _),
    NextArg = ctor_arg(_, _, NextWidth, _),
    (
        CurWidth = full_word,
        (
            ( NextWidth = full_word
            ; NextWidth = double_word
            ; NextWidth = partial_word_first(_)
            ),
            PrevOffset = offset(Int),
            NextOffset = offset(Int + 1)
        ;
            NextWidth = partial_word_shifted(_, _),
            unexpected($module, $pred,
                "partial_word_shifted follows full_word")
        )
    ;
        CurWidth = double_word,
        (
            ( NextWidth = full_word
            ; NextWidth = double_word
            ; NextWidth = partial_word_first(_)
            ),
            PrevOffset = offset(Int),
            NextOffset = offset(Int + 2)
        ;
            NextWidth = partial_word_shifted(_, _),
            unexpected($module, $pred,
                "partial_word_shifted follows double_word")
        )
    ;
        CurWidth = partial_word_first(_),
        (
            NextWidth = partial_word_shifted(_, _),
            NextOffset = PrevOffset
        ;
            ( NextWidth = full_word
            ; NextWidth = double_word
            ; NextWidth = partial_word_first(_)
            ),
            unexpected($module, $pred,
                "partial_word_first not followed by partial_word_shifted")
        )
    ;
        CurWidth = partial_word_shifted(_, _),
        (
            ( NextWidth = full_word
            ; NextWidth = double_word
            ; NextWidth = partial_word_first(_)
            ),
            PrevOffset = offset(Int),
            NextOffset = offset(Int + 1)
        ;
            NextWidth = partial_word_shifted(_, _),
            NextOffset = PrevOffset
        )
    ).

:- pred ml_gen_unify_args_for_reuse(cons_id::in, list(prog_var)::in,
    list(uni_mode)::in, list(mer_type)::in, list(constructor_arg)::in,
    list(int)::in, mer_type::in, mlds_lval::in, field_offset::in,
    int::in, cons_tag::in, prog_context::in,
    list(statement)::out, list(take_addr_info)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_unify_args_for_reuse(ConsId, Args, Modes, ArgTypes, Fields, TakeAddr,
        VarType, VarLval, Offset, ArgNum, Tag, Context,
        Statements, TakeAddrInfos, !Info) :-
    (
        Args = [],
        Modes = [],
        ArgTypes = [],
        Fields = []
    ->
        Statements = [],
        TakeAddrInfos = []
    ;
        Args = [Arg | Args1],
        Modes = [Mode | Modes1],
        ArgTypes = [ArgType | ArgTypes1],
        Fields = [Field | Fields1]
    ->
        ml_next_field_offset(Field, Fields1, Offset, Offset1),
        ArgNum1 = ArgNum + 1,
        ( TakeAddr = [ArgNum | TakeAddr1] ->
            ml_gen_unify_args_for_reuse(ConsId, Args1, Modes1, ArgTypes1,
                Fields1, TakeAddr1, VarType, VarLval, Offset1, ArgNum1,
                Tag, Context, Statements, TakeAddrInfos0, !Info),

            ml_gen_info_get_module_info(!.Info, ModuleInfo),
            ml_gen_info_get_high_level_data(!.Info, HighLevelData),
            FieldType = Field ^ arg_type,
            FieldWidth = Field ^ arg_width,
            ml_type_as_field(ModuleInfo, HighLevelData, FieldType, FieldWidth,
                BoxedFieldType),
            ml_gen_type(!.Info, FieldType, MLDS_FieldType),
            ml_gen_type(!.Info, BoxedFieldType, MLDS_BoxedFieldType),
            TakeAddrInfo = take_addr_info(Arg, Offset, MLDS_FieldType,
                MLDS_BoxedFieldType),
            TakeAddrInfos = [TakeAddrInfo | TakeAddrInfos0]
        ;
            ml_gen_unify_args_for_reuse(ConsId, Args1, Modes1, ArgTypes1,
                Fields1, TakeAddr, VarType, VarLval, Offset1, ArgNum1,
                Tag, Context, Statements0, TakeAddrInfos, !Info),
            ml_gen_unify_arg(ConsId, Arg, Mode, ArgType, Field,
                VarType, VarLval, Offset, ArgNum, Tag, Context,
                Statements0, Statements, !Info)
        )
    ;
        unexpected($module, $pred, "length mismatch")
    ).

:- pred ml_gen_unify_arg(cons_id::in, prog_var::in, uni_mode::in,
    mer_type::in, constructor_arg::in, mer_type::in, mlds_lval::in,
    field_offset::in, int::in, cons_tag::in, prog_context::in,
    list(statement)::in, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_unify_arg(ConsId, Arg, Mode, ArgType, Field, VarType, VarLval,
        Offset, ArgNum, Tag, Context, !Statements, !Info) :-
    MaybeFieldName = Field ^ arg_field_name,
    FieldType = Field ^ arg_type,
    FieldWidth = Field ^ arg_width,
    ml_gen_info_get_high_level_data(!.Info, HighLevelData),
    (
        % With the low-level data representation, we access all fields
        % using offsets.
        HighLevelData = no,
        Offset = offset(OffsetInt),
        FieldId = ml_field_offset(ml_const(mlconst_int(OffsetInt)))
    ;
        % With the high-level data representation, we always use named fields,
        % except for tuple types.
        HighLevelData = yes,
        ml_gen_info_get_target(!.Info, Target),
        (
            ( type_is_tuple(VarType, _)
            ; type_needs_lowlevel_rep(Target, VarType)
            )
        ->
            Offset = offset(OffsetInt),
            FieldId = ml_field_offset(ml_const(mlconst_int(OffsetInt)))
        ;
            FieldName = ml_gen_field_name(MaybeFieldName, ArgNum),
            ( ConsId = cons(ConsName, ConsArity, TypeCtor) ->
                UnqualConsName = ml_gen_du_ctor_name(Target, TypeCtor,
                    ConsName, ConsArity),
                FieldId = ml_gen_field_id(Target, VarType, Tag, UnqualConsName,
                    ConsArity, FieldName)
            ;
                unexpected($module, $pred, "invalid cons_id")
            )
        )
    ),
    % Box the field type, if needed.
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    ml_type_as_field(ModuleInfo, HighLevelData, FieldType, FieldWidth,
        BoxedFieldType),

    % Generate lvals for the LHS and the RHS.
    ml_gen_type(!.Info, VarType, MLDS_VarType),
    ml_gen_type(!.Info, BoxedFieldType, MLDS_BoxedFieldType),
    MaybePrimaryTag = get_primary_tag(Tag),
    FieldLval = ml_field(MaybePrimaryTag, ml_lval(VarLval), FieldId,
        MLDS_BoxedFieldType, MLDS_VarType),
    ml_gen_var(!.Info, Arg, ArgLval),

    % Now generate code to unify them.
    ml_gen_sub_unify(ModuleInfo, HighLevelData, Mode, ArgLval, ArgType,
        FieldLval, BoxedFieldType, FieldWidth, Context, !Statements).

:- pred ml_gen_sub_unify(module_info::in, bool::in, uni_mode::in,
    mlds_lval::in, mer_type::in, mlds_lval::in, mer_type::in, arg_width::in,
    prog_context::in, list(statement)::in, list(statement)::out) is det.

ml_gen_sub_unify(ModuleInfo, HighLevelData, Mode, ArgLval, ArgType, FieldLval,
        FieldType, FieldWidth, Context, !Statements) :-
    % Figure out the direction of data-flow from the mode,
    % and generate code accordingly.
    %
    % Note that in some cases, the code we generate assigns to a variable
    % that is never referred to. This happens quite often for deconstruct
    % unifications that implement field access; the argument variables that
    % correspond to the fields other than the one being accessed end up
    % being assigned to but not used. While we generate suboptimal C code,
    % the C compiler is smart enough to compile these useless assignments
    % into nothing. We hope that the compilers for the other MLDS target
    % languages can do the same.

    Mode = ((LI - RI) -> (LF - RF)),
    mode_to_arg_mode(ModuleInfo, (LI -> LF), ArgType, LeftMode),
    mode_to_arg_mode(ModuleInfo, (RI -> RF), ArgType, RightMode),
    (
        % Skip dummy argument types, since they will not have been declared.
        ( check_dummy_type(ModuleInfo, ArgType) = is_dummy_type
        ; check_dummy_type(ModuleInfo, FieldType) = is_dummy_type
        )
    ->
        true
    ;
        % Both input: it is a test unification.
        LeftMode = top_in,
        RightMode = top_in
    ->
        % This shouldn't happen, since mode analysis should avoid creating
        % any tests in the arguments of a construction or deconstruction
        % unification.
        unexpected($module, $pred, "test in arg of [de]construction")
    ;
        % Input - output: it is an assignment to the RHS.
        LeftMode = top_in,
        RightMode = top_out
    ->
        (
            ( FieldWidth = full_word
            ; FieldWidth = partial_word_first(_)
            ; FieldWidth = partial_word_shifted(_, _)
            ),
            ml_gen_box_or_unbox_rval(ModuleInfo, FieldType, ArgType,
                native_if_possible, ml_lval(FieldLval), FieldRval),
            (
                FieldWidth = full_word,
                Statement = ml_gen_assign(ArgLval, FieldRval, Context)
            ;
                FieldWidth = partial_word_first(Mask),
                UnpackRval = ml_bitwise_and(FieldRval, Mask),
                Statement = ml_gen_assign(ArgLval, UnpackRval, Context)
            ;
                FieldWidth = partial_word_shifted(Shift, Mask),
                UnpackRval = ml_bitwise_and(ml_rshift(FieldRval, Shift), Mask),
                Statement = ml_gen_assign(ArgLval, UnpackRval, Context)
            )
        ;
            FieldWidth = double_word,
            ( ml_field_offset_pair(FieldLval, FieldLvalA, FieldLvalB) ->
                FieldRval = ml_binop(float_from_dword,
                    ml_lval(FieldLvalA), ml_lval(FieldLvalB))
            ;
                ml_gen_box_or_unbox_rval(ModuleInfo, FieldType, ArgType,
                    native_if_possible, ml_lval(FieldLval), FieldRval)
            ),
            Statement = ml_gen_assign(ArgLval, FieldRval, Context)
        ),
        !:Statements = [Statement | !.Statements]
    ;
        % Output - input: it is an assignment to the LHS.
        LeftMode = top_out,
        RightMode = top_in
    ->
        ml_gen_box_or_unbox_rval(ModuleInfo, ArgType, FieldType,
            native_if_possible, ml_lval(ArgLval), ArgRval),
        (
            FieldWidth = full_word,
            Statement = ml_gen_assign(FieldLval, ArgRval, Context),
            !:Statements = [Statement | !.Statements]
        ;
            (
                FieldWidth = partial_word_first(Mask),
                Shift = 0
            ;
                FieldWidth = partial_word_shifted(Shift, Mask)
            ),
            CastVal = ml_unop(unbox(mlds_native_int_type), ml_lval(FieldLval)),
            MaskOld = ml_bitwise_and(CastVal, \ (Mask << Shift)),
            ShiftNew = ml_lshift(ArgRval, Shift),
            Combined = ml_bitwise_or(MaskOld, ShiftNew),
            Statement = ml_gen_assign(FieldLval, Combined, Context),
            !:Statements = [Statement | !.Statements]
        ;
            FieldWidth = double_word,
            ( ml_field_offset_pair(FieldLval, FieldLvalA, FieldLvalB) ->
                FloatWordA = ml_binop(float_word_bits, ArgRval,
                    ml_const(mlconst_int(0))),
                FloatWordB = ml_binop(float_word_bits, ArgRval,
                    ml_const(mlconst_int(1))),
                ml_type_as_field(ModuleInfo, HighLevelData, int_type,
                    full_word, IntFieldType),
                ml_gen_box_or_unbox_rval(ModuleInfo, int_type, IntFieldType,
                    native_if_possible, FloatWordA, ArgRvalA),
                ml_gen_box_or_unbox_rval(ModuleInfo, int_type, IntFieldType,
                    native_if_possible, FloatWordB, ArgRvalB),
                StatementA = ml_gen_assign(FieldLvalA, ArgRvalA, Context),
                StatementB = ml_gen_assign(FieldLvalB, ArgRvalB, Context),
                !:Statements = [StatementA, StatementB | !.Statements]
            ;
                Statement = ml_gen_assign(FieldLval, ArgRval, Context),
                !:Statements = [Statement | !.Statements]
            )
        )
    ;
        % Unused - unused: the unification has no effect.
        LeftMode = top_unused,
        RightMode = top_unused
    ->
        true
    ;
        unexpected($module, $pred, "some strange unify")
    ).

:- pred ml_field_offset_pair(mlds_lval::in, mlds_lval::out, mlds_lval::out)
    is semidet.

ml_field_offset_pair(FieldLval, FieldLvalA, FieldLvalB) :-
    FieldLval = ml_field(Tag, Address, FieldIdA, _, PtrType),
    FieldIdA = ml_field_offset(FieldOffsetA),
    ( FieldOffsetA = ml_const(mlconst_int(Offset)) ->
        FieldIdB = ml_field_offset(ml_const(mlconst_int(Offset + 1))),
        SubstType = mlds_generic_type,
        FieldLvalA = ml_field(Tag, Address, FieldIdA, SubstType, PtrType),
        FieldLvalB = ml_field(Tag, Address, FieldIdB, SubstType, PtrType)
    ;
        sorry($module, $pred, "unexpected field offset")
    ).

:- pred ml_gen_direct_arg_construct(module_info::in, uni_mode::in, int::in,
    mlds_lval::in, mer_type::in, mlds_lval::in, mer_type::in, prog_context::in,
    list(statement)::out) is det.

ml_gen_direct_arg_construct(ModuleInfo, Mode, Ptag,
        ArgLval, ArgType, VarLval, VarType, Context, Statements) :-
    Mode = ((LI - RI) -> (LF - RF)),
    mode_to_arg_mode(ModuleInfo, (LI -> LF), ArgType, LeftMode),
    mode_to_arg_mode(ModuleInfo, (RI -> RF), ArgType, RightMode),
    (
        % Skip dummy argument types, since they will not have been declared.
        ( check_dummy_type(ModuleInfo, ArgType) = is_dummy_type
        ; check_dummy_type(ModuleInfo, VarType) = is_dummy_type
        )
    ->
        unexpected($module, $pred, "dummy unify")
    ;
        % Both input: it is a test unification.
        LeftMode = top_in,
        RightMode = top_in
    ->
        % This shouldn't happen, since mode analysis should avoid creating
        % any tests in the arguments of a construction or deconstruction
        % unification.
        unexpected($module, $pred, "test in arg of [de]construction")
    ;
        % Input - output: it is an assignment to the RHS.
        LeftMode = top_in,
        RightMode = top_out
    ->
        unexpected($module, $pred, "left-to-right data flow in construction")
    ;
        % Output - input: it is an assignment to the LHS.
        LeftMode = top_out,
        RightMode = top_in
    ->
        ml_gen_box_or_unbox_rval(ModuleInfo, ArgType, VarType,
            native_if_possible, ml_lval(ArgLval), ArgRval),
        MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, VarType),
        CastRval = ml_unop(cast(MLDS_Type), ml_mkword(Ptag, ArgRval)),
        Statement = ml_gen_assign(VarLval, CastRval, Context),
        Statements = [Statement]
    ;
        % Unused - unused: it is a partial assignment to the LHS
        % where the tag is known but the argument isn't.
        LeftMode = top_unused,
        RightMode = top_unused
    ->
        MLDS_ArgType = mercury_type_to_mlds_type(ModuleInfo, ArgType),
        ml_gen_box_or_unbox_rval(ModuleInfo, ArgType, VarType,
            native_if_possible, ml_const(mlconst_null(MLDS_ArgType)), ArgRval),
        MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, VarType),
        CastRval = ml_unop(cast(MLDS_Type), ml_mkword(Ptag, ArgRval)),
        Statement = ml_gen_assign(VarLval, CastRval, Context),
        Statements = [Statement]
    ;
        unexpected($module, $pred, "some strange unify")
    ).

:- pred ml_gen_direct_arg_deconstruct(module_info::in, uni_mode::in, int::in,
    mlds_lval::in, mer_type::in, mlds_lval::in, mer_type::in, prog_context::in,
    list(statement)::out) is det.

ml_gen_direct_arg_deconstruct(ModuleInfo, Mode, Ptag,
        ArgLval, ArgType, VarLval, VarType, Context, Statements) :-
    Mode = ((LI - RI) -> (LF - RF)),
    mode_to_arg_mode(ModuleInfo, (LI -> LF), ArgType, LeftMode),
    mode_to_arg_mode(ModuleInfo, (RI -> RF), ArgType, RightMode),
    (
        % Skip dummy argument types, since they will not have been declared.
        ( check_dummy_type(ModuleInfo, ArgType) = is_dummy_type
        ; check_dummy_type(ModuleInfo, VarType) = is_dummy_type
        )
    ->
        unexpected($module, $pred, "dummy unify")
    ;
        % Both input: it is a test unification.
        LeftMode = top_in,
        RightMode = top_in
    ->
        % This shouldn't happen, since mode analysis should avoid creating
        % any tests in the arguments of a construction or deconstruction
        % unification.
        unexpected($module, $pred, "test in arg of [de]construction")
    ;
        % Input - output: it is an assignment to the RHS.
        LeftMode = top_in,
        RightMode = top_out
    ->
        ml_gen_box_or_unbox_rval(ModuleInfo, VarType, ArgType,
            native_if_possible, ml_lval(VarLval), VarRval),
        MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, ArgType),
        CastRval = ml_unop(cast(MLDS_Type),
            ml_binop(body, VarRval, ml_const(mlconst_int(Ptag)))),
        Statement = ml_gen_assign(ArgLval, CastRval, Context),
        Statements = [Statement]
    ;
        % Output - input: it is an assignment to the LHS.
        LeftMode = top_out,
        RightMode = top_in
    ->
        ml_gen_box_or_unbox_rval(ModuleInfo, ArgType, VarType,
            native_if_possible, ml_lval(ArgLval), ArgRval),
        MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, VarType),
        CastRval = ml_unop(cast(MLDS_Type), ml_mkword(Ptag, ArgRval)),
        Statement = ml_gen_assign(VarLval, CastRval, Context),
        Statements = [Statement]
    ;
        % Unused - unused: the unification has no effect.
        LeftMode = top_unused,
        RightMode = top_unused
    ->
        Statements = []
    ;
        unexpected($module, $pred, "some strange unify")
    ).

%-----------------------------------------------------------------------------%

    % Generate a semidet deconstruction. A semidet deconstruction unification
    % is a tag test, followed by a deterministic deconstruction which is
    % executed only if the tag test succeeds.
    %
    %   semidet (can_fail) deconstruction:
    %       <succeeded = (X => f(A1, A2, ...))>
    %   ===>
    %       <succeeded = (X => f(_, _, _, _))>  % tag test
    %       if (succeeded) {
    %           A1 = arg(X, f, 1);      % extract arguments
    %           A2 = arg(X, f, 2);
    %           ...
    %       }
    %
:- pred ml_gen_semi_deconstruct(prog_var::in, cons_id::in, list(prog_var)::in,
    list(uni_mode)::in, prog_context::in, list(statement)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_semi_deconstruct(Var, ConsId, Args, ArgModes, Context, Statements,
        !Info) :-
    ml_gen_tag_test(Var, ConsId, TagTestExpression, !Info),
    ml_gen_set_success(!.Info, TagTestExpression, Context, SetTagTestResult),
    ml_gen_test_success(!.Info, SucceededExpression),
    ml_gen_det_deconstruct(Var, ConsId, Args, ArgModes, Context,
        GetArgsStatements, !Info),
    (
        GetArgsStatements = [],
        Statements = [SetTagTestResult]
    ;
        GetArgsStatements = [_ | _],
        GetArgs = ml_gen_block([], GetArgsStatements, Context),
        IfStmt = ml_stmt_if_then_else(SucceededExpression, GetArgs, no),
        IfStatement = statement(IfStmt, mlds_make_context(Context)),
        Statements = [SetTagTestResult, IfStatement]
    ).

ml_gen_tag_test(Var, ConsId, TagTestExpression, !Info) :-
    % NOTE: Keep in sync with ml_gen_known_tag_test below.

    % TODO: apply the reverse tag test optimization for types with two
    % functors (see unify_gen.m).

    ml_gen_var(!.Info, Var, VarLval),
    ml_variable_type(!.Info, Var, Type),
    ml_cons_id_to_tag(!.Info, ConsId, Tag),
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    TagTestExpression = ml_gen_tag_test_rval(Tag, Type, ModuleInfo,
        ml_lval(VarLval)).

ml_gen_known_tag_test(Var, TaggedConsId, TagTestExpression, !Info) :-
    % NOTE: Keep in sync with ml_gen_tag_test above.

    % TODO: apply the reverse tag test optimization for types with two
    % functors (see unify_gen.m).

    ml_gen_var(!.Info, Var, VarLval),
    ml_variable_type(!.Info, Var, Type),
    TaggedConsId = tagged_cons_id(_ConsId, Tag),
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    TagTestExpression = ml_gen_tag_test_rval(Tag, Type, ModuleInfo,
        ml_lval(VarLval)).

    % ml_gen_tag_test_rval(Tag, Type, ModuleInfo, VarRval) = TestRval:
    %
    % TestRval is an Rval of type bool which evaluates to true if VarRval has
    % the specified Tag and false otherwise. Type is the type of VarRval.
    %
:- func ml_gen_tag_test_rval(cons_tag, mer_type, module_info, mlds_rval)
    = mlds_rval.

ml_gen_tag_test_rval(Tag, Type, ModuleInfo, Rval) = TagTestRval :-
    (
        Tag = string_tag(String),
        TagTestRval = ml_binop(str_eq, Rval, ml_const(mlconst_string(String)))
    ;
        Tag = float_tag(Float),
        TagTestRval = ml_binop(float_eq, Rval, ml_const(mlconst_float(Float)))
    ;
        Tag = int_tag(Int),
        ( Type = int_type ->
            ConstRval = ml_const(mlconst_int(Int))
        ; Type = char_type ->
            ConstRval = ml_const(mlconst_char(Int))
        ;
            MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, Type),
            ConstRval = ml_const(mlconst_enum(Int, MLDS_Type))
        ),
        TagTestRval = ml_binop(eq, Rval, ConstRval)
    ;
        Tag = foreign_tag(ForeignLang, ForeignVal),
        MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, Type),
        Const = ml_const(mlconst_foreign(ForeignLang, ForeignVal, MLDS_Type)),
        TagTestRval = ml_binop(eq, Rval, Const)
    ;
        ( Tag = closure_tag(_, _, _)
        ; Tag = type_ctor_info_tag(_, _, _)
        ; Tag = base_typeclass_info_tag(_, _, _)
        ; Tag = type_info_const_tag(_)
        ; Tag = typeclass_info_const_tag(_)
        ; Tag = ground_term_const_tag(_, _)
        ; Tag = tabling_info_tag(_, _)
        ; Tag = deep_profiling_proc_layout_tag(_, _)
        ; Tag = table_io_entry_tag(_, _)
        ),
        unexpected($module, $pred, "bad tag")
    ;
        Tag = no_tag,
        TagTestRval = ml_const(mlconst_true)
    ;
        Tag = single_functor_tag,
        TagTestRval = ml_const(mlconst_true)
    ;
        ( Tag = unshared_tag(UnsharedTagNum)
        ; Tag = direct_arg_tag(UnsharedTagNum)
        ),
        RvalTag = ml_unop(std_unop(tag), Rval),
        UnsharedTag = ml_unop(std_unop(mktag),
            ml_const(mlconst_int(UnsharedTagNum))),
        TagTestRval = ml_binop(eq, RvalTag, UnsharedTag)
    ;
        Tag = shared_remote_tag(PrimaryTagNum, SecondaryTagNum),
        SecondaryTagField = ml_gen_secondary_tag_rval(ModuleInfo,
            PrimaryTagNum, Type, Rval),
        SecondaryTagTestRval = ml_binop(eq, SecondaryTagField,
            ml_const(mlconst_int(SecondaryTagNum))),
        module_info_get_globals(ModuleInfo, Globals),
        globals.lookup_int_option(Globals, num_tag_bits, NumTagBits),
        ( NumTagBits = 0 ->
            % No need to test the primary tag.
            TagTestRval = SecondaryTagTestRval
        ;
            RvalPTag = ml_unop(std_unop(tag), Rval),
            PrimaryTagRval = ml_unop(std_unop(mktag),
                ml_const(mlconst_int(PrimaryTagNum))),
            PrimaryTagTestRval = ml_binop(eq, RvalPTag, PrimaryTagRval),
            TagTestRval = ml_binop(logical_and,
                PrimaryTagTestRval, SecondaryTagTestRval)
        )
    ;
        Tag = shared_local_tag(Bits, Num),
        MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, Type),
        TagTestRval = ml_binop(eq, Rval,
            ml_unop(cast(MLDS_Type),
                ml_mkword(Bits,
                    ml_unop(std_unop(mkbody), ml_const(mlconst_int(Num))))))
    ;
        Tag = reserved_address_tag(ReservedAddr),
        MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, Type),
        ReservedAddrRval = ml_gen_reserved_address(ModuleInfo, ReservedAddr,
            MLDS_Type),
        TagTestRval = ml_binop(eq, Rval, ReservedAddrRval)
    ;
        Tag = shared_with_reserved_addresses_tag(ReservedAddrs, ThisTag),
        % We first check that the Rval doesn't match any of the ReservedAddrs,
        % and then check that it matches ThisTag.
        CheckReservedAddrs = (func(RA, TestRval0) = TestRval :-
            EqualRA = ml_gen_tag_test_rval(reserved_address_tag(RA), Type,
                ModuleInfo, Rval),
            TestRval = ml_gen_and(ml_gen_not(EqualRA), TestRval0)
        ),
        MatchesThisTag = ml_gen_tag_test_rval(ThisTag, Type, ModuleInfo, Rval),
        TagTestRval = list.foldr(CheckReservedAddrs, ReservedAddrs,
            MatchesThisTag)
    ).

ml_gen_secondary_tag_rval(ModuleInfo, PrimaryTagVal, VarType, Rval) =
        SecondaryTagField :-
    MLDS_VarType = mercury_type_to_mlds_type(ModuleInfo, VarType),
    module_info_get_globals(ModuleInfo, Globals),
    globals.get_target(Globals, Target),
    globals.lookup_bool_option(Globals, highlevel_data, HighLevelData),
    (
        ( HighLevelData = no
        ; type_needs_lowlevel_rep(Target, VarType)
        )
    ->
        % Note: with the low-level data representation, all fields -- even
        % the secondary tag -- are boxed, and so we need to unbox (i.e. cast)
        % it back to the right type here.
        SecondaryTagField =
            ml_unop(unbox(mlds_native_int_type),
                ml_lval(ml_field(yes(PrimaryTagVal), Rval,
                    ml_field_offset(ml_const(mlconst_int(0))),
                    mlds_generic_type, MLDS_VarType)))
    ;
        FieldId = ml_gen_hl_tag_field_id(ModuleInfo, VarType),
        SecondaryTagField = ml_lval(ml_field(yes(PrimaryTagVal), Rval,
            FieldId, mlds_native_int_type, MLDS_VarType))
    ).

    % Return the field_id for the "data_tag" field of the specified
    % Mercury type, which holds the secondary tag.
    %
:- func ml_gen_hl_tag_field_id(module_info, mer_type) = mlds_field_id.

ml_gen_hl_tag_field_id(ModuleInfo, Type) = FieldId :-
    FieldName = "data_tag",
    % Figure out the type name and arity.
    type_to_ctor_det(Type, TypeCtor),
    ml_gen_type_name(TypeCtor, QualifiedTypeName, TypeArity),
    QualifiedTypeName = qual(MLDS_Module, TypeQualKind, TypeName),

    module_info_get_globals(ModuleInfo, Globals),
    globals.get_target(Globals, Target),

    % Figure out whether this type has constructors both with and without
    % secondary tags. If so, then the secondary tag field is in a class
    % "tag_type" that is derived from the base class for this type,
    % rather than in the base class itself.
    module_info_get_type_table(ModuleInfo, TypeTable),
    lookup_type_ctor_defn(TypeTable, TypeCtor, TypeDefn),
    hlds_data.get_type_defn_body(TypeDefn, TypeDefnBody),
    (
        TypeDefnBody =
            hlds_du_type(Ctors, TagValues, _, _, _, _, _ReservedTag, _, _),
        % XXX We probably shouldn't ignore ReservedTag here.
        (
            some [Ctor] (
                list.member(Ctor, Ctors),
                ml_uses_secondary_tag(TypeCtor, TagValues, Ctor, _)
            ),
            some [Ctor] (
                list.member(Ctor, Ctors),
                \+ ml_uses_secondary_tag(TypeCtor, TagValues, Ctor, _)
            )
        ->
            ClassQualifier = mlds_append_class_qualifier(Target, MLDS_Module,
                module_qual, TypeName, TypeArity),
            ClassQualKind = TypeQualKind,
            ClassName = "tag_type",
            ClassArity = 0
        ;
            ClassQualifier = MLDS_Module,
            ClassQualKind = module_qual,
            ClassName = TypeName,
            ClassArity = TypeArity
        )
    ;
        ( TypeDefnBody = hlds_eqv_type(_)
        ; TypeDefnBody = hlds_foreign_type(_)
        ; TypeDefnBody = hlds_solver_type(_, _)
        ; TypeDefnBody = hlds_abstract_type(_)
        ),
        unexpected($module, $pred, "non-du type")
    ),

    % Put it all together.
    QualClassName = qual(ClassQualifier, ClassQualKind, ClassName),
    ClassPtrType = mlds_ptr_type(mlds_class_type(QualClassName, ClassArity,
        mlds_class)),
    FieldQualifier = mlds_append_class_qualifier(Target, ClassQualifier,
        ClassQualKind, ClassName, ClassArity),
    QualifiedFieldName = qual(FieldQualifier, type_qual, FieldName),
    FieldId = ml_field_named(QualifiedFieldName, ClassPtrType).

:- func ml_gen_field_id(compilation_target, mer_type, cons_tag,
    mlds_class_name, arity, mlds_field_name) = mlds_field_id.

ml_gen_field_id(Target, Type, Tag, ConsName, ConsArity, FieldName) = FieldId :-
    type_to_ctor_det(Type, TypeCtor),
    ml_gen_type_name(TypeCtor, QualTypeName, TypeArity),
    QualTypeName = qual(MLDS_Module, QualKind, TypeName),
    TypeQualifier = mlds_append_class_qualifier(Target, MLDS_Module, QualKind,
        TypeName, TypeArity),

    UsesBaseClass = ml_tag_uses_base_class(Tag),
    (
        UsesBaseClass = tag_uses_base_class,
        % In this case, there is only one functor for the type (other than
        % reserved_address constants), and so the class name is determined
        % by the type name.
        ClassPtrType = mlds_ptr_type(mlds_class_type(QualTypeName,
            TypeArity, mlds_class)),
        QualifiedFieldName = qual(TypeQualifier, type_qual, FieldName)
    ;
        UsesBaseClass = tag_does_not_use_base_class,
        % In this case, the class name is determined by the constructor.
        QualConsName = qual(TypeQualifier, type_qual, ConsName),
        ClassPtrType = mlds_ptr_type(mlds_class_type(QualConsName,
            ConsArity, mlds_class)),
        FieldQualifier = mlds_append_class_qualifier(Target, TypeQualifier,
            type_qual, ConsName, ConsArity),
        QualifiedFieldName = qual(FieldQualifier, type_qual, FieldName)
    ),
    FieldId = ml_field_named(QualifiedFieldName, ClassPtrType).

%-----------------------------------------------------------------------------%

ml_gen_ground_term(TermVar, Goal, Statements, !Info) :-
    Goal = hlds_goal(GoalExpr, GoalInfo),
    NonLocals = goal_info_get_nonlocals(GoalInfo),
    set_of_var.to_sorted_list(NonLocals, NonLocalList),
    (
        NonLocalList = [],
        % The term being constructed by the scope is not needed, so there is
        % nothing to do.
        Statements = []
    ;
        NonLocalList = [NonLocal],
        ( NonLocal = TermVar ->
            ( GoalExpr = conj(plain_conj, Conjuncts) ->
                ml_gen_info_get_module_info(!.Info, ModuleInfo),
                ml_gen_info_get_target(!.Info, Target),
                ml_gen_info_get_high_level_data(!.Info, HighLevelData),
                ml_gen_info_get_var_types(!.Info, VarTypes),

                ml_gen_info_get_global_data(!.Info, GlobalData0),
                ml_gen_ground_term_conjuncts(ModuleInfo, Target, HighLevelData,
                    VarTypes, Conjuncts, GlobalData0, GlobalData,
                    map.init, GroundTermMap),
                ml_gen_info_set_global_data(GlobalData, !Info),

                map.lookup(GroundTermMap, TermVar, TermVarGroundTerm),
                ml_gen_info_set_const_var(TermVar, TermVarGroundTerm, !Info),

                ml_gen_var(!.Info, TermVar, TermVarLval),
                TermVarGroundTerm = ml_ground_term(TermVarRval, _, _),
                Context = goal_info_get_context(GoalInfo),
                Statement = ml_gen_assign(TermVarLval, TermVarRval, Context),
                Statements = [Statement]
            ;
                unexpected($module, $pred, "malformed goal")
            )
        ;
            unexpected($module, $pred, "unexpected nonlocal")
        )
    ;
        NonLocalList = [_, _ | _],
        unexpected($module, $pred, "unexpected nonlocals")
    ).

:- pred ml_gen_ground_term_conjuncts(module_info::in, compilation_target::in,
    bool::in, vartypes::in, list(hlds_goal)::in,
    ml_global_data::in, ml_global_data::out,
    ml_ground_term_map::in, ml_ground_term_map::out) is det.

ml_gen_ground_term_conjuncts(_, _, _, _, [], !GlobalData, !GroundTermMap).
ml_gen_ground_term_conjuncts(ModuleInfo, Target, HighLevelData, VarTypes,
        [Goal | Goals], !GlobalData, !GroundTermMap) :-
    ml_gen_ground_term_conjunct(ModuleInfo, Target, HighLevelData, VarTypes,
        Goal, !GlobalData, !GroundTermMap),
    ml_gen_ground_term_conjuncts(ModuleInfo, Target, HighLevelData, VarTypes,
        Goals, !GlobalData, !GroundTermMap).

:- pred ml_gen_ground_term_conjunct(module_info::in, compilation_target::in,
    bool::in, vartypes::in, hlds_goal::in,
    ml_global_data::in, ml_global_data::out,
    ml_ground_term_map::in, ml_ground_term_map::out) is det.

ml_gen_ground_term_conjunct(ModuleInfo, Target, HighLevelData, VarTypes,
        Goal, !GlobalData, !GroundTermMap) :-
    Goal = hlds_goal(GoalExpr, GoalInfo),
    (
        GoalExpr = unify(_, _, _, Unify, _),
        Unify = construct(Var, ConsId, Args, _, _HowToConstruct, _, SubInfo),
        SubInfo = no_construct_sub_info
    ->
        lookup_var_type(VarTypes, Var, VarType),
        MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, VarType),
        ConsTag = cons_id_to_tag(ModuleInfo, ConsId),
        Context = goal_info_get_context(GoalInfo),
        ml_gen_ground_term_conjunct_tag(ModuleInfo, Target, HighLevelData,
            VarTypes, Var, VarType, MLDS_Type, ConsId, ConsTag, Args, Context,
            !GlobalData, !GroundTermMap)
    ;
        unexpected($module, $pred, "malformed goal")
    ).

:- pred ml_gen_ground_term_conjunct_tag(module_info::in,
    compilation_target::in, bool::in, vartypes::in,
    prog_var::in, mer_type::in, mlds_type::in, cons_id::in, cons_tag::in,
    list(prog_var)::in, prog_context::in,
    ml_global_data::in, ml_global_data::out,
    ml_ground_term_map::in, ml_ground_term_map::out) is det.

ml_gen_ground_term_conjunct_tag(ModuleInfo, Target, HighLevelData, VarTypes,
        Var, VarType, MLDS_Type, ConsId, ConsTag, Args, Context,
        !GlobalData, !GroundTermMap) :-
    (
        % Constants.
        (
            ConsTag = int_tag(Int),
            ( VarType = int_type ->
                ConstRval = ml_const(mlconst_int(Int))
            ; VarType = char_type ->
                ConstRval = ml_const(mlconst_char(Int))
            ;
                ConstRval = ml_const(mlconst_enum(Int, MLDS_Type))
            )
        ;
            ConsTag = float_tag(Float),
            ConstRval = ml_const(mlconst_float(Float))
        ;
            ConsTag = string_tag(String),
            ConstRval = ml_const(mlconst_string(String))
        ;
            ConsTag = reserved_address_tag(ResAddr),
            ConstRval = ml_gen_reserved_address(ModuleInfo, ResAddr, MLDS_Type)
        ;
            ConsTag = shared_local_tag(Ptag, Stag),
            ConstRval = ml_unop(cast(MLDS_Type), ml_mkword(Ptag,
                ml_unop(std_unop(mkbody), ml_const(mlconst_int(Stag)))))
        ;
            ConsTag = foreign_tag(ForeignLang, ForeignTag),
            ConstRval = ml_const(mlconst_foreign(ForeignLang, ForeignTag,
                MLDS_Type))
        ),
        expect(unify(Args, []), $module, $pred, "constant tag with args"),
        ConstGroundTerm = ml_ground_term(ConstRval, VarType, MLDS_Type),
        map.det_insert(Var, ConstGroundTerm, !GroundTermMap)
    ;
        ( ConsTag = type_ctor_info_tag(_, _, _)
        ; ConsTag = base_typeclass_info_tag(_, _, _)
        ; ConsTag = type_info_const_tag(_)
        ; ConsTag = typeclass_info_const_tag(_)
        ; ConsTag = ground_term_const_tag(_, _)
        ; ConsTag = deep_profiling_proc_layout_tag(_, _)
        ; ConsTag = tabling_info_tag(_, _)
        ; ConsTag = table_io_entry_tag(_, _)
        ),
        unexpected($module, $pred, "bad constant")
    ;
        ConsTag = shared_with_reserved_addresses_tag(_, ThisTag),
        % Whether or not some other constructors in the type are represented
        % by reserved addresses makes a difference only when deconstructing
        % the term, not when constructing it.
        ml_gen_ground_term_conjunct_tag(ModuleInfo, Target, HighLevelData,
            VarTypes, Var, VarType, MLDS_Type, ConsId, ThisTag, Args, Context,
            !GlobalData, !GroundTermMap)
    ;
        ( ConsTag = no_tag
        ; ConsTag = direct_arg_tag(_)
        ),
        (
            Args = [Arg],
            map.det_remove(Arg, ArgGroundTerm, !GroundTermMap),
            ArgGroundTerm = ml_ground_term(ArgRval, _ArgType, MLDS_ArgType),
            DoubleWidth = no,
            ml_gen_box_const_rval(ModuleInfo, Context, MLDS_ArgType,
                DoubleWidth, ArgRval, Rval0, !GlobalData),
            Rval = ml_cast_cons_tag(MLDS_Type, ConsTag, Rval0),
            GroundTerm = ml_ground_term(Rval, VarType, MLDS_Type),
            map.det_insert(Var, GroundTerm, !GroundTermMap)
        ;
            ( Args = []
            ; Args = [_, _ | _]
            ),
            unexpected($module, $pred, "no_tag arity != 1")
        )
    ;
        % Lambda expressions cannot occur in from_ground_term_construct scopes
        % during code generation, because if they do occur there originally,
        % semantic analysis will change the scope reason to something else.
        ConsTag = closure_tag(_PredId, _ProcId, _EvalMethod),
        unexpected($module, $pred, "pred_closure_tag")
    ;
        % Ordinary compound terms.
        % This code (loosely) follows the code of ml_gen_compound.
        (
            ConsTag = single_functor_tag,
            Ptag = 0,
            ExtraInitializers = []
        ;
            ConsTag = unshared_tag(Ptag),
            ExtraInitializers = []
        ;
            ConsTag = shared_remote_tag(Ptag, Stag),
            UsesConstructors = ml_target_uses_constructors(Target),
            (
                UsesConstructors = no,
                StagRval0 = ml_const(mlconst_int(Stag)),
                (
                    HighLevelData = no,
                    % XXX why is this cast here?
                    StagRval = ml_unop(box(mlds_native_char_type), StagRval0)
                ;
                    HighLevelData = yes,
                    StagRval = StagRval0
                ),
                ExtraInitializers = [init_obj(StagRval)]
            ;
                UsesConstructors = yes,
                ExtraInitializers = []
            )
        ),
        ml_gen_ground_term_conjunct_compound(ModuleInfo, Target, HighLevelData,
            VarTypes, Var, VarType, MLDS_Type,
            ConsId, ConsTag, Ptag, ExtraInitializers, Args, Context,
            !GlobalData, !GroundTermMap)
    ).

:- pred ml_gen_ground_term_conjunct_compound(module_info::in,
    compilation_target::in, bool::in, vartypes::in,
    prog_var::in, mer_type::in, mlds_type::in, cons_id::in, cons_tag::in,
    int::in, list(mlds_initializer)::in, list(prog_var)::in,
    prog_context::in, ml_global_data::in, ml_global_data::out,
    ml_ground_term_map::in, ml_ground_term_map::out) is det.

ml_gen_ground_term_conjunct_compound(ModuleInfo, Target, HighLevelData,
        VarTypes, Var, VarType, MLDS_Type, ConsId, ConsTag,
        Ptag, ExtraInitializers, Args, Context,
        !GlobalData, !GroundTermMap) :-
    % This code (loosely) follows the code of ml_gen_new_object.

    % This part does a simplied version of the job of
    % get_maybe_cons_id_arg_types.
    lookup_var_types(VarTypes, Args, ArgTypes),
    (
        ConsId = cons(_, _, _),
        \+ is_introduced_type_info_type(VarType)
    ->
        % Determine the type_ctor, and then look up the data constructor.
        type_to_ctor_det(VarType, TypeCtor),
        (
            type_util.get_cons_defn(ModuleInfo, TypeCtor, ConsId, ConsDefn)
        ->
            ConsArgDefns = ConsDefn ^ cons_args,
            % XXX the compiler crashes if you try to write this with list.map2
            ConsArgTypes = list.map(func(C) = C ^ arg_type, ConsArgDefns),
            ConsArgWidths = list.map(func(C) = C ^ arg_width, ConsArgDefns),
            NumExtraArgs = list.length(Args) - list.length(ConsArgTypes),
            % If the scope contains existentially typed constructions,
            % then polymorphism should have changed its scope_reason
            % away from from_ground_term_construct.
            expect(unify(NumExtraArgs, 0), $module, $pred,
                "extra args in from_ground_term_construct scope")
        ;
            % If we didn't find a constructor definition, maybe that is because
            % this type was a built-in tuple type.
            type_is_tuple(VarType, _)
        ->
            % In this case, the argument types are all fresh variables.
            % Note that we do not need to worry about using the right varset
            % here, since all we really care about at this point is whether
            % something is a type variable or not, not which type variable
            % it is.
            Length = list.length(Args),
            ConsArgTypes = ml_make_boxed_types(Length),
            ConsArgWidths = list.duplicate(Length, full_word)
        ;
            % Type_util.get_cons_defn shouldn't have failed.
            unexpected($module, $pred, "get_cons_defn failed")
        )
    ;
        Length = list.length(ArgTypes),
        ConsArgTypes = ArgTypes,
        ConsArgWidths = list.duplicate(Length, full_word)
    ),
    (
        HighLevelData = yes,
        construct_ground_term_initializers_hld(ModuleInfo, Context,
            Args, ConsArgTypes, ConsArgWidths, ArgRvals1, !GlobalData,
            !GroundTermMap)
    ;
        HighLevelData = no,
        assoc_list.from_corresponding_lists(Args, ConsArgWidths,
            ArgConsArgWidths),
        construct_ground_term_initializers_lld(ModuleInfo, Context,
            ArgConsArgWidths, ArgRvals1, !GlobalData, !GroundTermMap)
    ),
    pack_args(ml_shift_combine_rval, ConsArgWidths, ArgRvals1, ArgRvals,
        unit, _, unit, _),
    ArgInitializers = list.map(func(Init) = init_obj(Init), ArgRvals),

    % By construction, boxing the rvals in ExtraInitializers would be a no-op.
    SubInitializers = ExtraInitializers ++ ArgInitializers,

    % Generate a local static constant for this term.
    ConstType = get_const_type_for_cons_id(Target, HighLevelData, MLDS_Type,
        ml_tag_uses_base_class(ConsTag), yes(ConsId)),
    % XXX If the secondary tag is in a base class, then ideally its
    % initializer should be wrapped in `init_struct([init_obj(X)])'
    % rather than just `init_obj(X)' -- the fact that we don't leads to
    % some warnings from GNU C about missing braces in initializers.
    ( ConstType = mlds_array_type(_) ->
        Initializer = init_array(SubInitializers)
    ;
        Initializer = init_struct(ConstType, SubInitializers)
    ),
    module_info_get_name(ModuleInfo, ModuleName),
    MLDS_ModuleName = mercury_module_name_to_mlds(ModuleName),
    ml_gen_static_scalar_const_addr(MLDS_ModuleName, "const_var", ConstType,
        Initializer, Context, ConstDataAddrRval, !GlobalData),

    % Assign the (possibly tagged) address of the local static constant
    % to the variable.
    ( Ptag = 0 ->
        TaggedRval = ConstDataAddrRval
    ;
        TaggedRval = ml_mkword(Ptag, ConstDataAddrRval)
    ),
    Rval = ml_unop(cast(MLDS_Type), TaggedRval),
    GroundTerm = ml_ground_term(Rval, VarType, MLDS_Type),
    map.det_insert(Var, GroundTerm, !GroundTermMap).

%-----------------------------------------------------------------------------%

:- pred construct_ground_term_initializers_hld(module_info::in,
    prog_context::in, list(prog_var)::in, list(mer_type)::in,
    list(arg_width)::in, list(mlds_rval)::out,
    ml_global_data::in, ml_global_data::out,
    ml_ground_term_map::in, ml_ground_term_map::out) is det.

construct_ground_term_initializers_hld(ModuleInfo, Context, Args, ConsArgTypes,
        ConsArgWidths, ArgRvals, !GlobalData, !GroundTermMap) :-
    (
        Args = [],
        ConsArgTypes = [],
        ConsArgWidths = []
    ->
        ArgRvals = []
    ;
        Args = [Arg | Args1],
        ConsArgTypes = [ConsArgType | ConsArgTypes1],
        ConsArgWidths = [ConsArgWidth | ConsArgWidths1]
    ->
        construct_ground_term_initializer_hld(ModuleInfo, Context,
            Arg, ConsArgType, ConsArgWidth, ArgRval,
            !GlobalData, !GroundTermMap),
        construct_ground_term_initializers_hld(ModuleInfo, Context,
            Args1, ConsArgTypes1, ConsArgWidths1, ArgRvals1,
            !GlobalData, !GroundTermMap),
        ArgRvals = [ArgRval | ArgRvals1]
    ;
        unexpected($module, $pred, "list length mismatch")
    ).

:- pred construct_ground_term_initializer_hld(module_info::in,
    prog_context::in, prog_var::in, mer_type::in, arg_width::in,
    mlds_rval::out, ml_global_data::in, ml_global_data::out,
    ml_ground_term_map::in, ml_ground_term_map::out) is det.

construct_ground_term_initializer_hld(ModuleInfo, Context,
        Arg, ConsArgType, ConsArgWidth, ArgRval,
        !GlobalData, !GroundTermMap) :-
    map.det_remove(Arg, ArgGroundTerm, !GroundTermMap),
    ArgGroundTerm = ml_ground_term(ArgRval0, ArgType, _MLDS_ArgType),
    ml_type_as_field(ModuleInfo, yes, ConsArgType, ConsArgWidth, BoxedArgType),
    ml_gen_box_or_unbox_const_rval_hld(ModuleInfo, ArgType, BoxedArgType,
        ArgRval0, Context, ArgRval, !GlobalData).

:- pred construct_ground_term_initializers_lld(module_info::in,
    prog_context::in, assoc_list(prog_var, arg_width)::in,
    list(mlds_rval)::out, ml_global_data::in, ml_global_data::out,
    ml_ground_term_map::in, ml_ground_term_map::out) is det.

construct_ground_term_initializers_lld(_, _, [], [],
        !GlobalData, !GroundTermMap).
construct_ground_term_initializers_lld(ModuleInfo, Context,
        [Arg - ConsArgWidth | ArgConsArgWidths], [ArgRval | ArgRvals],
        !GlobalData, !GroundTermMap) :-
    construct_ground_term_initializer_lld(ModuleInfo, Context,
        Arg, ConsArgWidth, ArgRval, !GlobalData, !GroundTermMap),
    construct_ground_term_initializers_lld(ModuleInfo, Context,
        ArgConsArgWidths, ArgRvals, !GlobalData, !GroundTermMap).

:- pred construct_ground_term_initializer_lld(module_info::in,
    prog_context::in, prog_var::in, arg_width::in,
    mlds_rval::out, ml_global_data::in, ml_global_data::out,
    ml_ground_term_map::in, ml_ground_term_map::out) is det.

construct_ground_term_initializer_lld(ModuleInfo, Context,
        Arg, ConsArgWidth, ArgRval, !GlobalData, !GroundTermMap) :-
    map.det_remove(Arg, ArgGroundTerm, !GroundTermMap),
    ArgGroundTerm = ml_ground_term(ArgRval0, _ArgType, MLDS_ArgType),
    (
        ConsArgWidth = double_word,
        DoubleWidth = yes
    ;
        ( ConsArgWidth = full_word
        ; ConsArgWidth = partial_word_first(_)
        ; ConsArgWidth = partial_word_shifted(_, _)
        ),
        DoubleWidth = no
    ),
    ml_gen_box_const_rval(ModuleInfo, Context, MLDS_ArgType, DoubleWidth,
        ArgRval0, ArgRval, !GlobalData).

%-----------------------------------------------------------------------------%

ml_gen_const_structs(ModuleInfo, ConstStructMap, !GlobalData) :-
    module_info_get_globals(ModuleInfo, Globals),
    globals.get_target(Globals, Target),
    globals.lookup_bool_option(Globals, highlevel_data, HighLevelData),
    Info = ml_const_struct_info(ModuleInfo, Target, HighLevelData),

    module_info_get_const_struct_db(ModuleInfo, ConstStructDb),
    const_struct_db_get_structs(ConstStructDb, ConstStructs),
    list.foldl2(ml_gen_const_struct(Info), ConstStructs,
        map.init, ConstStructMap, !GlobalData).

:- type ml_const_struct_info
    --->    ml_const_struct_info(
                mcsi_module_info            :: module_info,
                mcsi_target                 :: compilation_target,
                mcsi_high_level_data        :: bool
            ).

:- pred ml_gen_const_struct(ml_const_struct_info::in,
    pair(int, const_struct)::in,
    ml_const_struct_map::in, ml_const_struct_map::out,
    ml_global_data::in, ml_global_data::out) is det.

ml_gen_const_struct(Info, ConstNum - ConstStruct, !ConstStructMap,
        !GlobalData) :-
    ConstStruct = const_struct(ConsId, Args, Type, _Inst),
    ModuleInfo = Info ^ mcsi_module_info,
    MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, Type),
    ConsTag = cons_id_to_tag(ModuleInfo, ConsId),
    ml_gen_const_struct_tag(Info, ConstNum, Type, MLDS_Type, ConsId, ConsTag,
        Args, !ConstStructMap, !GlobalData).

:- pred ml_gen_const_struct_tag(ml_const_struct_info::in, int::in,
    mer_type::in, mlds_type::in, cons_id::in, cons_tag::in,
    list(const_struct_arg)::in,
    ml_const_struct_map::in, ml_const_struct_map::out,
    ml_global_data::in, ml_global_data::out) is det.

ml_gen_const_struct_tag(Info, ConstNum, Type, MLDS_Type, ConsId, ConsTag,
        Args, !ConstStructMap, !GlobalData) :-
    (
        ConsTag = shared_with_reserved_addresses_tag(_, ThisTag),
        % Whether or not some other constructors in the type are represented
        % by reserved addresses makes a difference only when deconstructing
        % the term, not when constructing it.
        ml_gen_const_struct_tag(Info, ConstNum, Type, MLDS_Type, ConsId,
            ThisTag, Args, !ConstStructMap, !GlobalData)
    ;
        ( ConsTag = no_tag
        ; ConsTag = direct_arg_tag(_)
        ),
        (
            Args = [Arg],
            DoubleWidth = no,
            ml_gen_const_struct_arg(Info, !.ConstStructMap,
                Arg, DoubleWidth, ArgRval, !GlobalData),
            Rval = ml_cast_cons_tag(MLDS_Type, ConsTag, ArgRval),
            GroundTerm = ml_ground_term(Rval, Type, MLDS_Type),
            map.det_insert(ConstNum, GroundTerm, !ConstStructMap)
        ;
            ( Args = []
            ; Args = [_, _ | _]
            ),
            unexpected($module, $pred, "no_tag arity != 1")
        )
    ;
        % Ordinary compound terms.
        % This code (loosely) follows the code of ml_gen_compound.
        (
            ConsTag = single_functor_tag,
            Ptag = 0,
            ExtraInitializers = []
        ;
            ConsTag = unshared_tag(Ptag),
            ExtraInitializers = []
        ;
            ConsTag = shared_remote_tag(Ptag, Stag),
            Target = Info ^ mcsi_target,
            UsesConstructors = ml_target_uses_constructors(Target),
            (
                UsesConstructors = no,
                StagRval0 = ml_const(mlconst_int(Stag)),
                HighLevelData = Info ^ mcsi_high_level_data,
                (
                    HighLevelData = no,
                    % XXX why is this cast here?
                    StagRval = ml_unop(box(mlds_native_char_type), StagRval0)
                ;
                    HighLevelData = yes,
                    StagRval = StagRval0
                ),
                ExtraInitializers = [init_obj(StagRval)]
            ;
                UsesConstructors = yes,
                ExtraInitializers = []
            )
        ),
        ml_gen_const_static_compound(Info, ConstNum, Type, MLDS_Type,
            ConsId, ConsTag, Ptag, ExtraInitializers, Args,
            !ConstStructMap, !GlobalData)
    ;
        % These tags don't build heap cells.
        ( ConsTag = int_tag(_)
        ; ConsTag = float_tag(_)
        ; ConsTag = string_tag(_)
        ; ConsTag = reserved_address_tag(_)
        ; ConsTag = shared_local_tag(_, _)
        ; ConsTag = foreign_tag(_, _)
        ; ConsTag = type_ctor_info_tag(_, _, _)
        ; ConsTag = base_typeclass_info_tag(_, _, _)
        % These tags should never occur in constant data.
        ; ConsTag = closure_tag(_, _, _)
        ; ConsTag = tabling_info_tag(_, _)
        % These tags should never occur in constant data in this position.
        ; ConsTag = type_info_const_tag(_)
        ; ConsTag = typeclass_info_const_tag(_)
        ; ConsTag = ground_term_const_tag(_, _)
        % These tags should never occur in MLDS grades.
        ; ConsTag = deep_profiling_proc_layout_tag(_, _)
        ; ConsTag = table_io_entry_tag(_, _)
        ),
        unexpected($module, $pred, "unexpected tag")
    ).

:- pred ml_gen_const_static_compound(ml_const_struct_info::in,
    int::in, mer_type::in, mlds_type::in, cons_id::in, cons_tag::in,
    int::in, list(mlds_initializer)::in, list(const_struct_arg)::in,
    ml_const_struct_map::in, ml_const_struct_map::out,
    ml_global_data::in, ml_global_data::out) is det.

ml_gen_const_static_compound(Info, ConstNum, Type, MLDS_Type, ConsId, ConsTag,
        Ptag, ExtraInitializers, Args, !ConstStructMap, !GlobalData) :-
    % This code (loosely) follows the code of
    % ml_gen_ground_term_conjunct_compound.

    Target = Info ^ mcsi_target,
    ModuleInfo = Info ^ mcsi_module_info,
    (
        ConsId = cons(_, _, _),
        \+ is_introduced_type_info_type(Type)
    ->
        % Determine the type_ctor, and then look up the data constructor.
        type_to_ctor_det(Type, TypeCtor),
        (
            type_util.get_cons_defn(ModuleInfo, TypeCtor, ConsId, ConsDefn)
        ->
            ConsArgDefns = ConsDefn ^ cons_args,
            % XXX the compiler crashes if you try to write this with list.map2
            % ConsArgTypes = list.map(func(C) = C ^ arg_type, ConsArgDefns),
            ConsArgWidths = list.map(func(C) = C ^ arg_width, ConsArgDefns),
            NumExtraArgs = list.length(Args) - list.length(ConsArgDefns),
            % If the scope contains existentially typed constructions,
            % then polymorphism should have changed its scope_reason
            % away from from_ground_term_construct.
            expect(unify(NumExtraArgs, 0), $module, $pred,
                "extra args in static const struct")
        ;
            % If we didn't find a constructor definition, maybe that is because
            % this type was a built-in tuple type.
            type_is_tuple(Type, _)
        ->
            % In this case, the argument types are all fresh variables.
            % Note that we do not need to worry about using the right varset
            % here, since all we really care about at this point is whether
            % something is a type variable or not, not which type variable
            % it is.
            Length = list.length(Args),
            % ConsArgTypes = ml_make_boxed_types(Length),
            ConsArgWidths = list.duplicate(Length, full_word)
        ;
            % Type_util.get_cons_defn shouldn't have failed.
            unexpected($module, $pred, "get_cons_defn failed")
        )
    ;
        Length = list.length(Args),
        % ConsArgTypes = ArgTypes,
        ConsArgWidths = list.duplicate(Length, full_word)
    ),
    HighLevelData = Info ^ mcsi_high_level_data,
    (
        (
            HighLevelData = no
        ;
            HighLevelData = yes,
            Target = target_java
        )
    ->
        assoc_list.from_corresponding_lists(Args, ConsArgWidths,
            ArgConsArgWidths),
        ml_gen_const_struct_args(Info, !.ConstStructMap,
            ArgConsArgWidths, ArgRvals1, !GlobalData)
    ;
        unexpected($file, $pred,
            "Constant structures are not supported for this grade")
    ),
    pack_args(ml_shift_combine_rval, ConsArgWidths, ArgRvals1, ArgRvals,
        unit, _, unit, _),
    ArgInitializers = list.map(func(Init) = init_obj(Init), ArgRvals),

    % By construction, boxing the rvals in ExtraInitializers would be a no-op.
    SubInitializers = ExtraInitializers ++ ArgInitializers,

    % Generate a local static constant for this term.
    ConstType = get_const_type_for_cons_id(Target, HighLevelData, MLDS_Type,
        ml_tag_uses_base_class(ConsTag), yes(ConsId)),
    % XXX If the secondary tag is in a base class, then ideally its
    % initializer should be wrapped in `init_struct([init_obj(X)])'
    % rather than just `init_obj(X)' -- the fact that we don't leads to
    % some warnings from GNU C about missing braces in initializers.
    ( ConstType = mlds_array_type(_) ->
        Initializer = init_array(SubInitializers)
    ;
        Initializer = init_struct(ConstType, SubInitializers)
    ),
    module_info_get_name(ModuleInfo, ModuleName),
    MLDS_ModuleName = mercury_module_name_to_mlds(ModuleName),
    ml_gen_static_scalar_const_addr(MLDS_ModuleName, "const_var", ConstType,
        Initializer, term.context_init, ConstDataAddrRval, !GlobalData),

    % Assign the (possibly tagged) address of the local static constant
    % to the variable.
    ( Ptag = 0 ->
        TaggedRval = ConstDataAddrRval
    ;
        TaggedRval = ml_mkword(Ptag, ConstDataAddrRval)
    ),
    Rval = ml_unop(cast(MLDS_Type), TaggedRval),
    GroundTerm = ml_ground_term(Rval, Type, MLDS_Type),
    map.det_insert(ConstNum, GroundTerm, !ConstStructMap).

:- pred ml_gen_const_struct_args(ml_const_struct_info::in,
    ml_const_struct_map::in, assoc_list(const_struct_arg, arg_width)::in,
    list(mlds_rval)::out, ml_global_data::in, ml_global_data::out) is det.

ml_gen_const_struct_args(_, _, [], [], !GlobalData).
ml_gen_const_struct_args(Info, ConstStructMap,
        [Arg - ConsArgWidth | ArgConsArgWidths], [ArgRval | ArgRvals],
        !GlobalData) :-
    arg_width_is_double(ConsArgWidth, DoubleWidth),
    ml_gen_const_struct_arg(Info, ConstStructMap,
        Arg, DoubleWidth, ArgRval, !GlobalData),
    ml_gen_const_struct_args(Info, ConstStructMap,
        ArgConsArgWidths, ArgRvals, !GlobalData).

:- pred ml_gen_const_struct_arg(ml_const_struct_info::in,
    ml_const_struct_map::in, const_struct_arg::in, bool::in,
    mlds_rval::out, ml_global_data::in, ml_global_data::out) is det.

ml_gen_const_struct_arg(Info, ConstStructMap, ConstArg, DoubleWidth,
        Rval, !GlobalData) :-
    ModuleInfo = Info ^ mcsi_module_info,
    (
        ConstArg = csa_const_struct(StructNum),
        map.lookup(ConstStructMap, StructNum, GroundTerm),
        GroundTerm = ml_ground_term(Rval0, _Type, MLDS_Type)
    ;
        ConstArg = csa_constant(ConsId, Type),
        ConsTag = cons_id_to_tag(ModuleInfo, ConsId),
        MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, Type),
        ml_gen_const_struct_arg_tag(ModuleInfo, ConsId, ConsTag,
            Type, MLDS_Type, Rval0)
    ),
    ml_gen_box_const_rval(ModuleInfo, term.context_init, MLDS_Type,
        DoubleWidth, Rval0, Rval, !GlobalData).

:- pred ml_gen_const_struct_arg_tag(module_info::in, cons_id::in, cons_tag::in,
    mer_type::in, mlds_type::in, mlds_rval::out) is det.

ml_gen_const_struct_arg_tag(ModuleInfo, ConsId, ConsTag, Type, MLDS_Type,
        Rval) :-
    (
        ConsTag = int_tag(Int),
        ( Type = int_type ->
            Rval = ml_const(mlconst_int(Int))
        ; Type = char_type ->
            Rval = ml_const(mlconst_char(Int))
        ;
            Rval = ml_const(mlconst_enum(Int, MLDS_Type))
        )
    ;
        ConsTag = float_tag(Float),
        Rval = ml_const(mlconst_float(Float))
    ;
        ConsTag = string_tag(String),
        Rval = ml_const(mlconst_string(String))
    ;
        ConsTag = reserved_address_tag(ResAddr),
        Rval = ml_gen_reserved_address(ModuleInfo, ResAddr, MLDS_Type)
    ;
        ConsTag = shared_local_tag(Ptag, Stag),
        Rval = ml_unop(cast(MLDS_Type), ml_mkword(Ptag,
            ml_unop(std_unop(mkbody), ml_const(mlconst_int(Stag)))))
    ;
        ConsTag = foreign_tag(ForeignLang, ForeignTag),
        Rval = ml_const(mlconst_foreign(ForeignLang, ForeignTag, MLDS_Type))
    ;
        ConsTag = type_ctor_info_tag(ModuleName0, TypeName, TypeArity),
        ModuleName = fixup_builtin_module(ModuleName0),
        MLDS_Module = mercury_module_name_to_mlds(ModuleName),
        RttiTypeCtor = rtti_type_ctor(ModuleName, TypeName, TypeArity),
        DataAddr = data_addr(MLDS_Module,
            mlds_rtti(ctor_rtti_id(RttiTypeCtor, type_ctor_type_ctor_info))),
        Rval = ml_unop(cast(MLDS_Type), ml_const(mlconst_data_addr(DataAddr)))
    ;
        ConsTag = base_typeclass_info_tag(ModuleName, ClassId, Instance),
        MLDS_Module = mercury_module_name_to_mlds(ModuleName),
        TCName = generate_class_name(ClassId),
        DataAddr = data_addr(MLDS_Module, mlds_rtti(tc_rtti_id(TCName,
            type_class_base_typeclass_info(ModuleName, Instance)))),
        Rval = ml_unop(cast(MLDS_Type), ml_const(mlconst_data_addr(DataAddr)))
    ;
        ConsTag = shared_with_reserved_addresses_tag(_, ThisTag),
        % Whether or not some other constructors in the type are represented
        % by reserved addresses makes a difference only when deconstructing
        % the term, not when constructing it.
        ml_gen_const_struct_arg_tag(ModuleInfo, ConsId, ThisTag,
            Type, MLDS_Type, Rval)
    ;
        % Instead of these tags in csa_constants, polymorphism.m builds
        % csa_const_structs.
        ( ConsTag = type_info_const_tag(_)
        ; ConsTag = typeclass_info_const_tag(_)
        ; ConsTag = ground_term_const_tag(_, _)
        % These tags build heap cells, not constants.
        ; ConsTag = no_tag
        ; ConsTag = direct_arg_tag(_)
        ; ConsTag = single_functor_tag
        ; ConsTag = unshared_tag(_)
        ; ConsTag = shared_remote_tag(_, _)
        % These tag should never occur in constant data.
        ; ConsTag = closure_tag(_, _, _)
        ; ConsTag = tabling_info_tag(_, _)
        % These tags should never occur in MLDS grades.
        ; ConsTag = deep_profiling_proc_layout_tag(_, _)
        ; ConsTag = table_io_entry_tag(_, _)
        ),
        unexpected($module, $pred, "unexpected tag")
    ).

%-----------------------------------------------------------------------------%

:- pred arg_width_is_double(arg_width::in, bool::out) is det.

arg_width_is_double(ArgWidth, DoubleWidth) :-
    (
        ArgWidth = double_word,
        DoubleWidth = yes
    ;
        ( ArgWidth = full_word
        ; ArgWidth = partial_word_first(_)
        ; ArgWidth = partial_word_shifted(_, _)
        ),
        DoubleWidth = no
    ).

:- pred ml_expand_double_word_rvals(list(arg_width)::in, list(arg_width)::out,
    assoc_list(mlds_rval, mlds_type)::in,
    assoc_list(mlds_rval, mlds_type)::out) is det.

ml_expand_double_word_rvals([], [], [], []).
ml_expand_double_word_rvals([Width0 | Widths0], Widths,
        [Rval0 - Type0 | RvalsTypes0], RvalsTypes) :-
    ml_expand_double_word_rvals(Widths0, Widths1, RvalsTypes0, RvalsTypes1),
    (
        ( Width0 = full_word
        ; Width0 = partial_word_first(_)
        ; Width0 = partial_word_shifted(_, _)
        ),
        Widths = [Width0 | Widths1],
        RvalsTypes = [Rval0 - Type0 | RvalsTypes1]
    ;
        Width0 = double_word,
        ( Rval0 = ml_const(mlconst_null(_)) ->
            SubstType = mlds_generic_type,
            RvalA = ml_const(mlconst_null(SubstType)),
            RvalB = ml_const(mlconst_null(SubstType))
        ;
            SubstType = mlds_native_int_type,
            RvalA = ml_binop(float_word_bits, Rval0, ml_const(mlconst_int(0))),
            RvalB = ml_binop(float_word_bits, Rval0, ml_const(mlconst_int(1)))
        ),
        Widths = [full_word, full_word | Widths1],
        RvalsTypes = [RvalA - SubstType, RvalB - SubstType | RvalsTypes1]
    ).
ml_expand_double_word_rvals([], _, [_ | _], _) :-
    unexpected($module, $pred, "list length mismatch").
ml_expand_double_word_rvals([_ | _], _, [], _) :-
    unexpected($module, $pred, "list length mismatch").

:- pred ml_shift_combine_rval(mlds_rval::in, int::in, maybe(mlds_rval)::in,
    mlds_rval::out, unit::in, unit::out, unit::in, unit::out) is det.

ml_shift_combine_rval(RvalA, Shift, MaybeRvalB, RvalC, !Acc1, !Acc2) :-
    ShiftRvalA = ml_lshift(RvalA, Shift),
    (
        MaybeRvalB = yes(RvalB),
        RvalC = ml_bitwise_or(ShiftRvalA, RvalB)
    ;
        MaybeRvalB = no,
        RvalC = ShiftRvalA
    ).

:- pred ml_shift_combine_rval_type(pair(mlds_rval, mlds_type)::in, int::in,
    maybe(pair(mlds_rval, mlds_type))::in, pair(mlds_rval, mlds_type)::out,
    unit::in, unit::out, unit::in, unit::out) is det.

ml_shift_combine_rval_type(ArgA, Shift, MaybeArgB, ArgC, !Acc1, !Acc2) :-
    ArgA = RvalA - TypeA,
    ShiftRvalA = ml_lshift(RvalA, Shift),
    (
        MaybeArgB = yes(RvalB - _TypeB),
        RvalC = ml_bitwise_or(ShiftRvalA, RvalB)
    ;
        MaybeArgB = no,
        RvalC = ShiftRvalA
    ),
    % This type better be acceptable.
    ArgC = RvalC - TypeA.

:- func ml_lshift(mlds_rval, int) = mlds_rval.

ml_lshift(Rval0, Shift) = Rval :-
    % We may get nulls from unfilled fields. Replace them with zeroes
    % so we don't get type errors from the C compiler.
    ( Rval0 = ml_const(mlconst_null(_)) ->
        Rval = ml_const(mlconst_int(0))
    ; Shift = 0 ->
        Rval = Rval0
    ; Rval0 = ml_unop(box(Type), Rval1) ->
        Rval2 = ml_binop(unchecked_left_shift, Rval1,
            ml_const(mlconst_int(Shift))),
        Rval = ml_unop(box(Type), Rval2)
    ;
        Rval = ml_binop(unchecked_left_shift, Rval0,
            ml_const(mlconst_int(Shift)))
    ).

:- func ml_rshift(mlds_rval, int) = mlds_rval.

ml_rshift(Rval, Shift) =
    ( Shift = 0 ->
        Rval
    ;
        ml_binop(unchecked_right_shift, Rval, ml_const(mlconst_int(Shift)))
    ).

:- func ml_bitwise_or(mlds_rval, mlds_rval) = mlds_rval.

ml_bitwise_or(RvalA, RvalB) = Rval :-
    some [!MaybeType] (
        !:MaybeType = no,
        ( RvalA = ml_unop(box(TypeA), UnboxRvalA0) ->
            UnboxRvalA = UnboxRvalA0,
            !:MaybeType = yes(TypeA)
        ;
            UnboxRvalA = RvalA
        ),
        ( RvalB = ml_unop(box(TypeB), UnboxRvalB0) ->
            UnboxRvalB = UnboxRvalB0,
            !:MaybeType = yes(TypeB)
        ;
            UnboxRvalB = RvalB
        ),
        UnboxRval = ml_binop(bitwise_or, UnboxRvalA, UnboxRvalB),
        (
            !.MaybeType = yes(BoxType),
            Rval = ml_unop(box(BoxType), UnboxRval)
        ;
            !.MaybeType = no,
            Rval = UnboxRval
        )
    ).

:- func ml_bitwise_and(mlds_rval, int) = mlds_rval.

ml_bitwise_and(Rval, Mask) =
    ml_binop(bitwise_and, Rval, ml_const(mlconst_int(Mask))).

%-----------------------------------------------------------------------------%
:- end_module ml_backend.ml_unify_gen.
%-----------------------------------------------------------------------------%
