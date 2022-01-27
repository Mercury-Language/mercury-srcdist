%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1999-2012 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: ml_type_gen.m
% Main author: fjh
%
% MLDS type generation -- convert HLDS types to MLDS.
%
% For enumerations, we use a Java-style emulation: we convert them
% to classes with a single int member, plus a bunch of static (one_copy)
% const members for the different enumerations consts.
%
% For discriminated unions, we create an MLDS base class type corresponding
% to the HLDS type, and we also create MLDS derived class types corresponding
% to each of the constructors which are defined from the base class type.
% For constructors which are represented as the addresses of specially reserved
% objects, we generate the static (one_copy) members for those objects.
%
%-----------------------------------------------------------------------------%

:- module ml_backend.ml_type_gen.
:- interface.

:- import_module hlds.hlds_data.
:- import_module hlds.hlds_module.
:- import_module libs.globals.
:- import_module mdbcomp.sym_name.
:- import_module ml_backend.mlds.
:- import_module parse_tree.prog_data.

:- import_module bool.
:- import_module list.
:- import_module maybe.

%-----------------------------------------------------------------------------%

    % Generate MLDS definitions for all the types in the HLDS.
    %
:- pred ml_gen_types(module_info::in, list(mlds_defn)::out) is det.

    % Given an HLDS type_ctor, generate the MLDS class name and arity
    % for the corresponding MLDS type.
    %
:- pred ml_gen_type_name(type_ctor::in, mlds_class::out, arity::out) is det.

    % Generate a data constructor name given the type constructor.
    %
:- func ml_gen_du_ctor_name(compilation_target, type_ctor, sym_name, int)
    = string.

    % As above but pass the unqualified type name directly.
    %
:- func ml_gen_du_ctor_name_unqual_type(compilation_target, string, int,
    sym_name, int) = string.

    % Return the declaration flags appropriate for a type.
    %
:- func ml_gen_type_decl_flags = mlds_decl_flags.

    % Return the declaration flags appropriate for an enumeration constant.
    %
:- func ml_gen_enum_constant_decl_flags = mlds_decl_flags.

    % Return the declaration flags appropriate for a member variable.
    %
:- func ml_gen_member_decl_flags = mlds_decl_flags.

    % Return the declaration flags appropriate for a member variable
    % which is read-only after initialisation.
    %
:- func ml_gen_const_member_decl_flags = mlds_decl_flags.

    % ml_uses_secondary_tag(TypeCtor, ConsTagValues, Ctor, SecondaryTag):
    % Check if this constructor uses a secondary tag,
    % and if so, return the secondary tag value.
    %
:- pred ml_uses_secondary_tag(type_ctor::in, cons_tag_values::in,
    constructor::in, int::out) is semidet.

:- type tag_uses_base_class
    --->    tag_does_not_use_base_class
    ;       tag_uses_base_class.

    % A constructor is represented using the base class rather than a derived
    % class if there is only a single functor, or if there is a single
    % functor and some constants represented using reserved addresses.
    %
:- func ml_tag_uses_base_class(cons_tag) = tag_uses_base_class.

    % Return whether this compilation target uses object constructors.
    %
:- func ml_target_uses_constructors(compilation_target) = bool.

    % Generate a constructor function to initialise the given fields in a
    % class.
    %
:- func ml_gen_constructor_function(compilation_target, mlds_class_id,
    mlds_type, mlds_module_name, mlds_class_id, maybe(int), list(mlds_defn),
    mlds_context) = mlds_defn.

    % Exported enumeration info in the HLDS is converted into an MLDS
    % specific representation.  The target specific code generators may
    % further transform it.
    %
:- pred ml_gen_exported_enums(module_info::in, mlds_exported_enums::out)
    is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.polymorphism.
:- import_module hlds.hlds_pred.
:- import_module libs.options.
:- import_module mdbcomp.builtin_modules.
:- import_module ml_backend.ml_code_util.
:- import_module ml_backend.ml_util.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_type.

:- import_module int.
:- import_module list.
:- import_module map.
:- import_module pair.
:- import_module require.
:- import_module set.
:- import_module string.
:- import_module term.

%-----------------------------------------------------------------------------%

ml_gen_types(ModuleInfo, Defns) :-
    module_info_get_globals(ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, highlevel_data, HighLevelData),
    globals.get_target(Globals, Target),
    (
        HighLevelData = yes,
        module_info_get_type_table(ModuleInfo, TypeTable),
        get_all_type_ctor_defns(TypeTable, TypeCtorsDefns0),
        list.filter(
            (pred(TypeCtorDefn::in) is semidet :-
                TypeCtorDefn = TypeCtor - _TypeDefn,
                \+ type_ctor_needs_lowlevel_rep(Target, TypeCtor)
            ), TypeCtorsDefns0, TypeCtorDefns),
        list.foldl(ml_gen_type_defn(ModuleInfo), TypeCtorDefns, [], Defns)
    ;
        HighLevelData = no,
        Defns = []
    ).

:- pred ml_gen_type_defn(module_info::in, pair(type_ctor, hlds_type_defn)::in,
    list(mlds_defn)::in, list(mlds_defn)::out) is det.

ml_gen_type_defn(ModuleInfo, TypeCtor - TypeDefn, !Defns) :-
    hlds_data.get_type_defn_status(TypeDefn, Status),
    DefinedThisModule = status_defined_in_this_module(Status),
    (
        DefinedThisModule = yes,
        ml_gen_type_defn_2(ModuleInfo, TypeCtor, TypeDefn, !Defns)
    ;
        DefinedThisModule = no
    ).

:- pred ml_gen_type_defn_2(module_info::in, type_ctor::in, hlds_type_defn::in,
    list(mlds_defn)::in, list(mlds_defn)::out) is det.

ml_gen_type_defn_2(ModuleInfo, TypeCtor, TypeDefn, !Defns) :-
    hlds_data.get_type_defn_body(TypeDefn, TypeBody),
    (
        TypeBody = hlds_abstract_type(_)
    ;
        TypeBody = hlds_eqv_type(_EqvType)
        % XXX Fixme!
        % For a description of the problems with equivalence types,
        % see our BABEL'01 paper "Compiling Mercury to the .NET CLR".
        % The same issue arises for some of the cases below.
    ;
        TypeBody = hlds_du_type(Ctors, TagValues, _CheaperTagTest, DuTypeKind,
            MaybeUserEqComp, _MaybeDirectArgCtors, _ReservedTag, _, _),
        % XXX We probably shouldn't ignore _ReservedTag.
        ml_gen_equality_members(MaybeUserEqComp, MaybeEqualityMembers),
        (
            ( DuTypeKind = du_type_kind_mercury_enum
            ; DuTypeKind = du_type_kind_foreign_enum(_)
            ),
            module_info_get_globals(ModuleInfo, Globals),
            globals.get_target(Globals, Target),
            ml_gen_enum_type(Target, TypeCtor, TypeDefn, Ctors, TagValues,
                MaybeEqualityMembers, !Defns)
        ;
            DuTypeKind = du_type_kind_direct_dummy,
            % XXX We shouldn't have to generate an MLDS type for these types,
            % but it is not easy to ensure that we never refer to that type.
            module_info_get_globals(ModuleInfo, Globals),
            globals.get_target(Globals, Target),
            ml_gen_enum_type(Target, TypeCtor, TypeDefn, Ctors, TagValues,
                MaybeEqualityMembers, !Defns)
        ;
            ( DuTypeKind = du_type_kind_notag(_, _, _)
            ; DuTypeKind = du_type_kind_general
            ),
            ml_gen_du_parent_type(ModuleInfo, TypeCtor, TypeDefn,
                Ctors, TagValues, MaybeEqualityMembers, !Defns)
        )
    ;
        TypeBody = hlds_foreign_type(_)
    ;
        TypeBody = hlds_solver_type(_, _)
    ).

%-----------------------------------------------------------------------------%
%
% Enumeration types.
%

    % For each enumeration, we generate an MLDS type of the following form:
    %
    %   struct <ClassName> {
    %       static final const int <ctor1> = 0;
    %       static final const int <ctor2> = 1;
    %       ...
    %       int MR_value;
    %   };
    %
    % It is marked as an mlds_enum so that the MLDS -> target code
    % generator can treat it specially if need be (e.g. generating
    % a C enum rather than a class).
    %
    % Note that for Java the MR_value field is inherited from the
    % MercuryEnum class.
    %
:- pred ml_gen_enum_type(compilation_target::in, type_ctor::in,
    hlds_type_defn::in, list(constructor)::in, cons_tag_values::in,
    list(mlds_defn)::in, list(mlds_defn)::in, list(mlds_defn)::out) is det.

ml_gen_enum_type(Target, TypeCtor, TypeDefn, Ctors, TagValues,
        MaybeEqualityMembers, !Defns) :-
    hlds_data.get_type_defn_context(TypeDefn, Context),
    MLDS_Context = mlds_make_context(Context),

    % Generate the class name.
    ml_gen_type_name(TypeCtor, QualifiedClassName, MLDS_ClassArity),
    QualifiedClassName = qual(_, _, MLDS_ClassName),

    % Generate the class members.
    ValueMember = ml_gen_enum_value_member(Context),
    MLDS_Type = mlds_class_type(QualifiedClassName, MLDS_ClassArity,
        mlds_enum),
    EnumConstMembers = list.map(
        ml_gen_enum_constant(Context, TypeCtor, TagValues, MLDS_Type),
        Ctors),
    Members = MaybeEqualityMembers ++
        [ValueMember | EnumConstMembers],

    % Enums don't import anything.
    Imports = [],

    % Make all Java classes corresponding to types implement the MercuryType
    % interface and extend the MercuryEnum class.
    (
        Target = target_java,
        Implements = [ml_java_mercury_type_interface],
        Inherits = [ml_java_mercury_enum_class]
    ;
        ( Target = target_c
        ; Target = target_il
        ; Target = target_csharp
        ; Target = target_erlang
        ),
        Implements = [],
        Inherits = []
    ),

    get_type_defn_tparams(TypeDefn, TypeVars),

    % Put it all together.
    MLDS_TypeName = entity_type(MLDS_ClassName, MLDS_ClassArity),
    MLDS_TypeFlags = ml_gen_type_decl_flags,
    MLDS_TypeDefnBody = mlds_class(mlds_class_defn(mlds_enum,
        Imports, Inherits, Implements, TypeVars, [], Members)),
    Defn = mlds_defn(MLDS_TypeName, MLDS_Context, MLDS_TypeFlags,
        MLDS_TypeDefnBody),

    !:Defns = [Defn | !.Defns].

:- func ml_gen_enum_value_member(prog_context) = mlds_defn.

ml_gen_enum_value_member(Context) =
    mlds_defn(entity_data(mlds_data_var(mlds_var_name("MR_value", no))),
        mlds_make_context(Context),
        ml_gen_member_decl_flags,
        mlds_data(mlds_native_int_type, no_initializer, gc_no_stmt)).

:- func ml_gen_enum_constant(prog_context, type_ctor, cons_tag_values,
    mlds_type, constructor) = mlds_defn.

ml_gen_enum_constant(Context, TypeCtor, ConsTagValues, MLDS_Type, Ctor)
        = Defn :-
    % Figure out the value of this enumeration constant.
    Ctor = ctor(_ExistQTVars, _Constraints, Name, Args, _Ctxt),
    list.length(Args, Arity),
    map.lookup(ConsTagValues, cons(Name, Arity, TypeCtor), TagVal),
    (
        TagVal = int_tag(Int),
        ConstValue = ml_const(mlconst_enum(Int, MLDS_Type))
    ;
        TagVal = foreign_tag(ForeignLang, ForeignTagValue),
        ConstValue = ml_const(mlconst_foreign(ForeignLang, ForeignTagValue,
            MLDS_Type))
    ;
        ( TagVal = string_tag(_)
        ; TagVal = float_tag(_)
        ; TagVal = closure_tag(_, _, _)
        ; TagVal = type_ctor_info_tag(_, _, _)
        ; TagVal = base_typeclass_info_tag(_, _, _)
        ; TagVal = type_info_const_tag(_)
        ; TagVal = typeclass_info_const_tag(_)
        ; TagVal = ground_term_const_tag(_, _)
        ; TagVal = tabling_info_tag(_, _)
        ; TagVal = deep_profiling_proc_layout_tag(_, _)
        ; TagVal = table_io_entry_tag(_, _)
        ; TagVal = single_functor_tag
        ; TagVal = unshared_tag(_)
        ; TagVal = direct_arg_tag(_)
        ; TagVal = shared_remote_tag(_, _)
        ; TagVal = shared_local_tag(_, _)
        ; TagVal = no_tag
        ; TagVal = reserved_address_tag(_)
        ; TagVal = shared_with_reserved_addresses_tag(_, _)
        ),
        unexpected($module, $pred, "enum constant needs int or foreign tag")
    ),
    % Sanity check.
    expect(unify(Arity, 0), $module, $pred, "arity != []"),

    % Generate an MLDS definition for this enumeration constant.
    UnqualifiedName = unqualify_name(Name),
    Defn = mlds_defn(
        entity_data(mlds_data_var(mlds_var_name(UnqualifiedName, no))),
        mlds_make_context(Context),
        ml_gen_enum_constant_decl_flags,
        mlds_data(mlds_native_int_type, init_obj(ConstValue), gc_no_stmt)).

%-----------------------------------------------------------------------------%
%
% Discriminated union types.
%

    % For each discriminated union type, we generate an MLDS type of the
    % following form:
    %
    %   static class <ClassName> {
    %   public:
    % #if some_but_not_all_ctors_use_secondary_tag
    %       /* A nested derived class for the secondary tag */
    %       static class tag_type : public <ClassName> {
    %       public:
    % #endif
    % #if some_ctors_use_secondary_tag
    %           int data_tag;
    %   #if 0
    %   /*
    %   ** XXX we don't yet bother with these;
    %   ** mlds_to_c.m doesn't support static members.
    %   */
    %           /* constants used for data_tag */
    %           static const int <ctor1> = 0;
    %           static const int <ctor2> = 1;
    %   #endif
    % #endif
    % #if some_but_not_all_ctors_use_secondary_tag
    %       };
    % #endif
    %       ...
    %
    %       /*
    %       ** Reserved objects and/or derived classes,
    %       ** one for each constructor.
    %       **
    %       ** Reserved objects are generated for any constructors
    %       ** that use a `reserved_address(reserved_object(...))'
    %       ** representation.
    %       **
    %       ** Derived classes are generated for any other
    %       ** constructors; these are generated as nested classes
    %       ** avoid name clashes.
    %       ** These will derive either directly from
    %       ** <ClassName> or from <ClassName>::tag_type
    %       ** (which in turn derives from <ClassName>),
    %       ** depending on whether they need a secondary
    %       ** tag.  If all the ctors for a type need a
    %       ** secondary tag, we put the secondary tag members
    %       ** directly in the base class.
    %       */
    %       */
    % #if ctor1_uses_reserved_object
    %       static <ClassName> obj_<ctor1>;
    % #else
    %       static class <ctor1> : public <ClassName> {
    %       public:
    %           /*
    %           ** fields, one for each argument of this
    %           ** constructor
    %           */
    %           MR_Word F1;
    %           MR_Word F2;
    %           ...
    %           /*
    %           ** A constructor to initialize the fields
    %           */
    %           <ctor1>(MR_Word F1, MR_Word F2, ...) {
    %               this->F1 = F1;
    %               this->F2 = F2;
    %               ...
    %           }
    %       };
    % #endif
    %       static class <ctor2> : public <ClassName>::tag_type {
    %       public:
    %           ...
    %       };
    %       ...
    %
    %   };
    %
    %
    % If there is only one constructor which is not represented
    % as a reserved_object, then we don't generate a nested derived
    % class for that constructor, instead we just allocate the fields
    % in the base class.
    %
:- pred ml_gen_du_parent_type(module_info::in, type_ctor::in,
    hlds_type_defn::in, list(constructor)::in, cons_tag_values::in,
    list(mlds_defn)::in, list(mlds_defn)::in, list(mlds_defn)::out) is det.

ml_gen_du_parent_type(ModuleInfo, TypeCtor, TypeDefn, Ctors, TagValues,
        MaybeEqualityMembers, !Defns) :-
    hlds_data.get_type_defn_context(TypeDefn, Context),
    MLDS_Context = mlds_make_context(Context),

    % generate the class name
    ml_gen_type_name(TypeCtor, QualBaseClassName, BaseClassArity),
    BaseClassId = mlds_class_type(QualBaseClassName, BaseClassArity,
        mlds_class),
    QualBaseClassName = qual(BaseClassModuleName, QualKind, BaseClassName),
    module_info_get_globals(ModuleInfo, Globals),
    globals.get_target(Globals, Target),
    BaseClassQualifier = mlds_append_class_qualifier(Target,
        BaseClassModuleName, QualKind, BaseClassName, BaseClassArity),

    (
        % If none of the constructors for this type need a secondary tag,
        % then we don't need the members for the secondary tag.

        \+ (some [Ctor] (
            list.member(Ctor, Ctors),
            ml_needs_secondary_tag(TypeCtor, TagValues, Ctor)
        ))
    ->
        TagMembers = [],
        TagClassId = BaseClassId
    ;
        % Generate the members for the secondary tag.
        TagDataMember = ml_gen_tag_member("data_tag", Context),
        TagConstMembers = [],
        % XXX we don't yet bother with these;
        % mlds_to_c.m doesn't support static (one_copy) members.
        %   TagConstMembers = list.condense(list.map(
        %       ml_gen_tag_constant(Context, TypeCtor, TagValues), Ctors)),
        TagMembers0 = [TagDataMember | TagConstMembers],

        % If all the constructors for this type need a secondary tag, then
        % we put the secondary tag members directly in the base class,
        % otherwise we put it in a separate nested derived class.

        (
            all [Ctor] (
                list.member(Ctor, Ctors)
            =>
                ml_needs_secondary_tag(TypeCtor, TagValues, Ctor)
            )
        ->
            TagMembers = TagMembers0,
            TagClassId = BaseClassId
        ;
            ml_gen_secondary_tag_class(MLDS_Context, BaseClassQualifier,
                BaseClassId, TagMembers0, Target, TagTypeDefn, TagClassId),
            TagMembers = [TagTypeDefn]
        )
    ),

    % Generate the nested derived classes for the constructors,
    % or static (one_copy) member objects for constructors with
    % reserved_object representations, or fields and a constructor method
    % for the single_functor case.
    list.foldl2(ml_gen_du_ctor_member(ModuleInfo, BaseClassId,
        BaseClassQualifier, TagClassId, TypeCtor, TypeDefn, TagValues),
        Ctors, [], CtorMembers, [], BaseClassCtorMethods),

    % The base class doesn't import or inherit anything.
    Imports = [],
    Inherits = [],

    % Make all Java classes corresponding to types implement the MercuryType
    % interface.
    (
        Target = target_java,
        Implements = [ml_java_mercury_type_interface]
    ;
        ( Target = target_c
        ; Target = target_il
        ; Target = target_csharp
        ; Target = target_erlang
        ),
        Implements = []
    ),

    get_type_defn_tparams(TypeDefn, TypeParams),

    % Put it all together.
    Members = MaybeEqualityMembers ++ TagMembers ++ CtorMembers,
    MLDS_TypeName = entity_type(BaseClassName, BaseClassArity),
    MLDS_TypeFlags = ml_gen_type_decl_flags,
    MLDS_TypeDefnBody = mlds_class(mlds_class_defn(mlds_class, Imports,
        Inherits, Implements, TypeParams, BaseClassCtorMethods, Members)),
    Defn = mlds_defn(MLDS_TypeName, MLDS_Context, MLDS_TypeFlags,
        MLDS_TypeDefnBody),

    !:Defns = [Defn | !.Defns].

    % Generate the declaration for the field that holds the secondary tag.
    %
:- func ml_gen_tag_member(string, prog_context) = mlds_defn.

ml_gen_tag_member(Name, Context) =
    mlds_defn(entity_data(mlds_data_var(mlds_var_name(Name, no))),
        mlds_make_context(Context),
        ml_gen_member_decl_flags,
        mlds_data(mlds_native_int_type, no_initializer, gc_no_stmt)).

:- func ml_gen_tag_constant(prog_context, type_ctor, cons_tag_values,
    constructor) = list(mlds_defn).

ml_gen_tag_constant(Context, TypeCtor, ConsTagValues, Ctor) = Defns :-
    % Check if this constructor uses a secondary tag.
    ( ml_uses_secondary_tag(TypeCtor, ConsTagValues, Ctor, SecondaryTag) ->
        % Generate an MLDS definition for this secondary tag constant.
        % We do this mainly for readability and interoperability. Note that
        % we don't do the same thing for primary tags, so this is most useful
        % in the `--tags none' case, where there will be no primary tags.

        Ctor = ctor(_ExistQTVars, _Constraints, Name, _Args, _Ctxt),
        UnqualifiedName = unqualify_name(Name),
        ConstValue = ml_const(mlconst_int(SecondaryTag)),
        Defn = mlds_defn(
            entity_data(mlds_data_var(mlds_var_name(UnqualifiedName, no))),
            mlds_make_context(Context),
            ml_gen_enum_constant_decl_flags,
            mlds_data(mlds_native_int_type, init_obj(ConstValue), gc_no_stmt)),
        Defns = [Defn]
    ;
        Defns = []
    ).

    % Check if this constructor's representation uses a secondary tag,
    % and if so, return the secondary tag value.
    % BEWARE that this is not the same as ml_needs_secondary_tag, below.
    %
ml_uses_secondary_tag(TypeCtor, ConsTagValues, Ctor, SecondaryTag) :-
    TagVal = get_tagval(TypeCtor, ConsTagValues, Ctor),
    get_secondary_tag(TagVal) = yes(SecondaryTag).

    % Check if this constructor needs a secondary tag. This is true if its
    % representation uses a secondary tag, obviously. But it is also true
    % if its representation is the address of a reserved object; in that case,
    % for some back-ends (e.g. C) we need a field of some kind to ensure
    % that the reserved object had non-zero size, which in turn is needed
    % to ensure that its address is distinct from any other reserved objects
    % for the same type.
    %
:- pred ml_needs_secondary_tag(type_ctor::in, cons_tag_values::in,
    constructor::in) is semidet.

ml_needs_secondary_tag(TypeCtor, TagValues, Ctor) :-
    TagVal = get_tagval(TypeCtor, TagValues, Ctor),
    ( get_secondary_tag(TagVal) = yes(_)
    ; tagval_is_reserved_addr(TagVal, reserved_object(_, _, _))
    ).

:- pred tagval_is_reserved_addr(cons_tag::in, reserved_address::out)
    is semidet.

tagval_is_reserved_addr(reserved_address_tag(RA), RA).
tagval_is_reserved_addr(shared_with_reserved_addresses_tag(_, TagVal), RA) :-
    tagval_is_reserved_addr(TagVal, RA).

:- func get_tagval(type_ctor, cons_tag_values, constructor) = cons_tag.

get_tagval(TypeCtor, ConsTagValues, Ctor) = TagVal :-
    Ctor = ctor(_ExistQTVars, _Constraints, Name, Args, _Ctxt),
    list.length(Args, Arity),
    map.lookup(ConsTagValues, cons(Name, Arity, TypeCtor), TagVal).

    % Generate a definition for the class used for the secondary tag type.
    % This is needed for discriminated unions for which some but not all
    % constructors use secondary tags.
    %
:- pred ml_gen_secondary_tag_class(mlds_context::in, mlds_module_name::in,
    mlds_class_id::in, list(mlds_defn)::in, compilation_target::in,
    mlds_defn::out, mlds_class_id::out) is det.

ml_gen_secondary_tag_class(MLDS_Context, BaseClassQualifier, BaseClassId,
        Members, Target, MLDS_TypeDefn, SecondaryTagClassId) :-
    % Generate the class name for the secondary tag class.
    % Note: the secondary tag class is nested inside the
    % base class for this type.
    UnqualClassName = "tag_type",
    ClassName = qual(BaseClassQualifier, type_qual, UnqualClassName),
    ClassArity = 0,
    SecondaryTagClassId = mlds_class_type(ClassName, ClassArity, mlds_class),

    % The secondary tag class inherits the base class for this type,
    % unless we're compiling to C -- in that case, we omit it,
    % since it is empty, and we don't want to include empty base
    % classes when compiling to C.
    Imports = [],
    ( target_uses_empty_base_classes(Target) = yes ->
        Inherits = [BaseClassId]
    ;
        Inherits = []
    ),
    Implements = [],
    Ctors = [],

    % Type parameters are only used by the Java backend, which doesn't use
    % secondary tag classes.
    TypeParams = [],

    % Put it all together.
    MLDS_TypeName = entity_type(UnqualClassName, ClassArity),
    MLDS_TypeFlags = ml_gen_type_decl_flags,
    MLDS_TypeDefnBody = mlds_class(mlds_class_defn(mlds_class, Imports,
        Inherits, Implements, TypeParams, Ctors, Members)),
    MLDS_TypeDefn = mlds_defn(MLDS_TypeName, MLDS_Context,
        MLDS_TypeFlags, MLDS_TypeDefnBody).

    % Generate definitions corresponding to a constructor of a discriminated
    % union type. This will be one of the following:
    %
    % - (in the usual case) a nested derived class definition
    % - (for reserved_object) a one_copy (static) member object
    % - (for the single_functor case) a bunch of fields and
    %   a constructor method.
    %
:- pred ml_gen_du_ctor_member(module_info::in, mlds_class_id::in,
    mlds_module_name::in, mlds_class_id::in, type_ctor::in, hlds_type_defn::in,
    cons_tag_values::in, constructor::in,
    list(mlds_defn)::in, list(mlds_defn)::out,
    list(mlds_defn)::in, list(mlds_defn)::out) is det.

ml_gen_du_ctor_member(ModuleInfo, BaseClassId, BaseClassQualifier,
        SecondaryTagClassId, TypeCtor, TypeDefn, ConsTagValues, Ctor,
        MLDS_Members0, MLDS_Members, MLDS_CtorMethods0, MLDS_CtorMethods) :-
    Ctor = ctor(ExistQTVars, Constraints, CtorName, Args, _Ctxt),

    % XXX We should keep a context for the constructor,
    % but we don't, so we just use the context from the type.
    hlds_data.get_type_defn_context(TypeDefn, Context),
    MLDS_Context = mlds_make_context(Context),

    % Generate the class name for this constructor.
    list.length(Args, CtorArity),
    module_info_get_globals(ModuleInfo, Globals),
    globals.get_target(Globals, Target),
    UnqualCtorName = ml_gen_du_ctor_name(Target, TypeCtor,
        CtorName, CtorArity),

    TagVal = get_tagval(TypeCtor, ConsTagValues, Ctor),
    ( tagval_is_reserved_addr(TagVal, ReservedAddr) ->
        ( ReservedAddr = reserved_object(_, _, _) ->
            % Generate a reserved object for this constructor.
            % Note that we use the SecondaryTagClassId for the type of this
            % reserved object; we can't use the BaseClassId because for some
            % back-ends, we need to ensure that the type used for the reserved
            % object has at least one data member, to make sure that each
            % reserved object gets a distinct address.

            MLDS_ReservedObjName = ml_format_reserved_object_name(
                UnqualCtorName, CtorArity),
            MLDS_ReservedObjEntityName =
                entity_data(mlds_data_var(MLDS_ReservedObjName)),
            % The GC never needs to trace static constants, because they can
            % never point into the heap; they can point only to other static
            % constants.
            GCStatement = gc_no_stmt,
            EntityDefn = mlds_data(SecondaryTagClassId, no_initializer,
                GCStatement),
            DeclFlags = mlds.set_access(ml_static_const_decl_flags,
                acc_public),
            MLDS_ReservedObjDefn = mlds_defn(MLDS_ReservedObjEntityName,
                MLDS_Context, DeclFlags, EntityDefn),
            MLDS_Members = [MLDS_ReservedObjDefn | MLDS_Members0]
        ;
            % For reserved numeric addresses, we don't need to generate
            % any objects or types.
            MLDS_Members = MLDS_Members0
        ),
        MLDS_CtorMethods = MLDS_CtorMethods0
    ;
        % Generate the members for this constructor.

        % Number any unnamed fields starting from 1.
        ArgNum0 = 1,

        % Generate class members for the type_infos and typeclass_infos
        % that hold information about existentially quantified
        % type variables and type class constraints.
        % Note that the order of fields is as follows:
        %   - first typeinfos (for unconstrained type variables)
        %   - then typeclassinfos (for class constraints)
        %   - finally the ordinary members
        (
            ExistQTVars = [],
            % optimize common case
            ExtraMembers = [],
            ArgNum2 = ArgNum0
        ;
            ExistQTVars = [_ | _],
            constraint_list_get_tvars(Constraints, ConstrainedTVars),
            list.delete_elems(ExistQTVars, ConstrainedTVars,
                UnconstrainedTVars),
            list.map_foldl(ml_gen_type_info_member(ModuleInfo, Context),
                UnconstrainedTVars, TypeInfoMembers, ArgNum0, ArgNum1),
            list.map_foldl(ml_gen_typeclass_info_member(ModuleInfo, Context),
                Constraints, TypeClassInfoMembers, ArgNum1, ArgNum2),
            ExtraMembers = TypeInfoMembers ++ TypeClassInfoMembers
        ),

        % Generate the class members for the ordinary fields
        % of this constructor.
        list.map_foldl(ml_gen_du_ctor_field(ModuleInfo, Context),
            Args, OrdinaryMembers, ArgNum2, _ArgNum3),

        Members = ExtraMembers ++ OrdinaryMembers,

        % Generate a constructor function to initialize the fields, if needed
        % (not all back-ends use constructor functions).
        MaybeSecTagVal = get_secondary_tag(TagVal),
        UsesConstructors = ml_target_uses_constructors(Target),
        UsesBaseClass = ml_tag_uses_base_class(TagVal),
        (
            UsesConstructors = yes,
            (
                UsesBaseClass = tag_uses_base_class,
                CtorClassType = BaseClassId,
                CtorClassQualifier = BaseClassQualifier
            ;
                UsesBaseClass = tag_does_not_use_base_class,
                CtorClassType = mlds_class_type(
                    qual(BaseClassQualifier, type_qual, UnqualCtorName),
                    CtorArity, mlds_class),
                CtorClassQualifier = mlds_append_class_qualifier(Target,
                    BaseClassQualifier, type_qual, UnqualCtorName, CtorArity)
            ),
            CtorFunction = ml_gen_constructor_function(Target,
                BaseClassId, CtorClassType, CtorClassQualifier,
                SecondaryTagClassId, MaybeSecTagVal, Members, MLDS_Context),
            % If this constructor is going to go in the base class, then we may
            % also need to generate an additional zero-argument constructor,
            % which is used to construct the class that is used for
            % reserved_objects.
            %
            % The implementation of deep copy in Java grades also depends on
            % zero-argument constructors.
            (
                (
                    Target = target_java
                ;
                    TagVal = shared_with_reserved_addresses_tag(RAs,
                        single_functor_tag),
                    some [RA] (
                        list.member(RA, RAs),
                        RA = reserved_object(_, _, _)
                    )
                ),
                Members = [_ | _]
            ->
                ZeroArgCtor = ml_gen_constructor_function(Target, BaseClassId,
                    CtorClassType, CtorClassQualifier, SecondaryTagClassId,
                    no, [], MLDS_Context),
                Ctors = [ZeroArgCtor, CtorFunction]
            ;
                Ctors = [CtorFunction]
            )
        ;
            UsesConstructors = no,
            Ctors = []
        ),

        (
            UsesBaseClass = tag_uses_base_class,
            % Put the members for this constructor directly in the base class.
            MLDS_Members = Members ++ MLDS_Members0,
            MLDS_CtorMethods = Ctors ++ MLDS_CtorMethods0
        ;
            UsesBaseClass = tag_does_not_use_base_class,
            % Generate a nested derived class for this constructor,
            % and put the members for this constructor in that class.

            % We inherit either the base class for this type, or the secondary
            % tag class, depending on whether we need a secondary tag.
            % But when targetting C, we want to omit empty base classes.
            % So if targetting C, don't include any base class if there is
            % no secondary tag.
            (
                MaybeSecTagVal = yes(_),
                Inherits = [SecondaryTagClassId]
            ;
                MaybeSecTagVal = no,
                UsesEmptyBaseClasses = target_uses_empty_base_classes(Target),
                (
                    UsesEmptyBaseClasses = yes,
                    Inherits = [BaseClassId]
                ;
                    UsesEmptyBaseClasses = no,
                    Inherits = []
                )
            ),
            Imports = [],
            Implements = [],
            get_type_defn_tparams(TypeDefn, TypeParams),

            % Put it all together.
            MLDS_TypeName = entity_type(UnqualCtorName, CtorArity),
            MLDS_TypeFlags = ml_gen_type_decl_flags,
            MLDS_TypeDefnBody = mlds_class(mlds_class_defn(mlds_class,
                Imports, Inherits, Implements, TypeParams, Ctors, Members)),
            MLDS_TypeDefn = mlds_defn(MLDS_TypeName, MLDS_Context,
                MLDS_TypeFlags, MLDS_TypeDefnBody),
            MLDS_Members = [MLDS_TypeDefn | MLDS_Members0],
            MLDS_CtorMethods = MLDS_CtorMethods0
        )
    ).

% A constructor is represented using the base class rather than a derived
% class if there is only a single functor, or if there is a single
% functor and some constants represented using reserved addresses.
ml_tag_uses_base_class(Tag) = UsesBaseClass :-
    (
        Tag = single_functor_tag,
        UsesBaseClass = tag_uses_base_class
    ;
        Tag = shared_with_reserved_addresses_tag(_RAs, SubTag),
        UsesBaseClass = ml_tag_uses_base_class(SubTag)
    ;
        Tag = ground_term_const_tag(_ConstNum, SubTag),
        UsesBaseClass = ml_tag_uses_base_class(SubTag)
    ;
        ( Tag = string_tag(_)
        ; Tag = float_tag(_)
        ; Tag = int_tag(_)
        ; Tag = foreign_tag(_, _)
        ; Tag = closure_tag(_, _, _)
        ; Tag = type_ctor_info_tag(_, _, _)
        ; Tag = base_typeclass_info_tag(_, _, _)
        ; Tag = type_info_const_tag(_)
        ; Tag = typeclass_info_const_tag(_)
        ; Tag = tabling_info_tag(_, _)
        ; Tag = deep_profiling_proc_layout_tag(_, _)
        ; Tag = table_io_entry_tag(_, _)
        ; Tag = unshared_tag(_)
        ; Tag = direct_arg_tag(_)
        ; Tag = shared_remote_tag(_, _)
        ; Tag = shared_local_tag(_, _)
        ; Tag = no_tag
        ; Tag = reserved_address_tag(_)
        ),
        UsesBaseClass = tag_does_not_use_base_class
    ).

ml_target_uses_constructors(target_c) = no.
ml_target_uses_constructors(target_il) = yes.
ml_target_uses_constructors(target_csharp) = yes.
ml_target_uses_constructors(target_java) = yes.
ml_target_uses_constructors(target_erlang) =
    unexpected($module, $pred, "target erlang").

:- func target_uses_empty_base_classes(compilation_target) = bool.

target_uses_empty_base_classes(target_c) = no.
target_uses_empty_base_classes(target_il) = yes.
target_uses_empty_base_classes(target_csharp) = no.
target_uses_empty_base_classes(target_java) = yes.
target_uses_empty_base_classes(target_erlang) =
    unexpected($module, $pred, "target erlang").

    % This should return yes if references to function parameters in
    % constructor functions must be qualified with the module name,
    % not the class name.
    % We need to do this for the Java back-end, since MLDS names which
    % are qualified with the module name get unqualified when output
    % as Java, and parameter names must all be unqualified.
    % XXX perhaps we should do the same for all back-ends?
    %
:- func target_requires_module_qualified_params(compilation_target) = bool.

target_requires_module_qualified_params(target_c) = no.
target_requires_module_qualified_params(target_il) = no.
target_requires_module_qualified_params(target_csharp) = yes.
target_requires_module_qualified_params(target_java) = yes.
target_requires_module_qualified_params(target_erlang) =
    unexpected($module, $pred, "target erlang").

ml_gen_constructor_function(Target, BaseClassId, ClassType, ClassQualifier,
        SecondaryTagClassId, MaybeTag, Members, Context) = CtorDefn :-
    Args = list.map(make_arg, Members),
    ReturnValues = [],

    InitMembers0 = list.map(gen_init_field(Target, BaseClassId,
        ClassType, ClassQualifier), Members),
    (
        MaybeTag = yes(TagVal),
        InitTag = gen_init_tag(Target, ClassType, SecondaryTagClassId, TagVal,
            Context),
        InitMembers = [InitTag | InitMembers0]
    ;
        MaybeTag = no,
        InitMembers = InitMembers0
    ),

    Stmt = statement(ml_stmt_block([], InitMembers), Context),
    Attributes = [],
    EnvVarNames = set.init,
    Ctor = mlds_function(no, mlds_func_params(Args, ReturnValues),
        body_defined_here(Stmt), Attributes, EnvVarNames),
    CtorFlags = init_decl_flags(acc_public, per_instance, non_virtual,
        overridable, modifiable, concrete),

    % Note that the name of constructor is determined by the backend
    % convention.
    CtorDefn = mlds_defn(entity_export("<constructor>"), Context, CtorFlags,
        Ctor).

    % Get the name and type from the field definition, for use as a
    % constructor argument name and type.
    %
:- func make_arg(mlds_defn) = mlds_argument is det.

make_arg(mlds_defn(Name, _Context, _Flags, Defn)) = Arg :-
    ( Defn = mlds_data(Type, _Init, GCStatement) ->
        Arg = mlds_argument(Name, Type, GCStatement)
    ;
        unexpected($module, $pred, "non-data member")
    ).

    % Generate "this-><fieldname> = <fieldname>;".
    %
:- func gen_init_field(compilation_target, mlds_class_id, mlds_type,
    mlds_module_name, mlds_defn) = statement is det.

gen_init_field(Target, BaseClassId, ClassType, ClassQualifier, Member) =
        Statement :-
    Member = mlds_defn(EntityName, Context, _Flags, Defn),
    (
        Defn = mlds_data(Type0, _Init, _GCStatement),
        Type = Type0
    ;
        ( Defn = mlds_function(_, _, _, _, _)
        ; Defn = mlds_class(_)
        ),
        unexpected($module, $pred, "non-data member")
    ),
    (
        EntityName = entity_data(mlds_data_var(VarName0)),
        VarName0 = mlds_var_name(Name0, no)
    ->
        Name = Name0,
        VarName = VarName0
    ;
        unexpected($module, $pred, "non-var member")
    ),
    RequiresQualifiedParams = target_requires_module_qualified_params(Target),
    (
        RequiresQualifiedParams = yes,
        ( BaseClassId = mlds_class_type(qual(ModuleName, _, _), _, _) ->
            QualVarName = qual(ModuleName, module_qual, VarName)
        ;
            unexpected($module, $pred, "invalid BaseClassId")
        )
    ;
        RequiresQualifiedParams = no,
        QualVarName = qual(ClassQualifier, type_qual, VarName)
    ),
    Param = ml_lval(ml_var(QualVarName, Type)),
    Field = ml_field(yes(0), ml_self(ClassType),
        ml_field_named(qual(ClassQualifier, type_qual, Name),
            mlds_ptr_type(ClassType)),
            % XXX we should use ClassType rather than BaseClassId here.
            % But doing so breaks the IL back-end, because then the hack in
            % fixup_class_qualifiers doesn't work.
        Type, BaseClassId),
    Statement = statement(ml_stmt_atomic(assign(Field, Param)), Context).

    % Generate "this->data_tag = <TagVal>;".
    %
:- func gen_init_tag(compilation_target, mlds_type, mlds_class_id, int,
    mlds_context) = statement.

gen_init_tag(Target, ClassType, SecondaryTagClassId, TagVal, Context)
        = Statement :-
    ( SecondaryTagClassId = mlds_class_type(TagClass, TagArity, _) ->
        TagClass = qual(BaseClassQualifier, QualKind, TagClassName),
        TagClassQualifier = mlds_append_class_qualifier(Target,
            BaseClassQualifier, QualKind, TagClassName, TagArity)
    ;
        unexpected($module, $pred, "class_id should be a class")
    ),
    Name = "data_tag",
    Type = mlds_native_int_type,
    Val = ml_const(mlconst_int(TagVal)),
    Field = ml_field(yes(0), ml_self(ClassType),
        ml_field_named(qual(TagClassQualifier, type_qual, Name),
            mlds_ptr_type(SecondaryTagClassId)),
        Type, ClassType),
    Statement = statement(ml_stmt_atomic(assign(Field, Val)), Context).

:- pred ml_gen_typeclass_info_member(module_info::in, prog_context::in,
    prog_constraint::in, mlds_defn::out, int::in, int::out) is det.

ml_gen_typeclass_info_member(ModuleInfo, Context, Constraint, Defn, !ArgNum) :-
    polymorphism.build_typeclass_info_type(Constraint, Type),
    ml_gen_field(ModuleInfo, Context, no, Type, full_word, Defn, !ArgNum).

:- pred ml_gen_type_info_member(module_info::in, prog_context::in, tvar::in,
    mlds_defn::out, int::in, int::out) is det.

ml_gen_type_info_member(ModuleInfo, Context, TypeVar, Defn, !ArgNum) :-
    % We don't have access to the correct kind here. This won't matter though,
    % since the type will only be checked to see that it is a variable,
    % and won't be used in any other way.
    Kind = kind_star,
    polymorphism.build_type_info_type(type_variable(TypeVar, Kind), Type),
    ml_gen_field(ModuleInfo, Context, no, Type, full_word, Defn, !ArgNum).

:- pred ml_gen_du_ctor_field(module_info::in, prog_context::in,
    constructor_arg::in, mlds_defn::out, int::in, int::out) is det.

ml_gen_du_ctor_field(ModuleInfo, Context, Arg, Defn, !ArgNum) :-
    Arg = ctor_arg(MaybeFieldName, Type, Width, _Context),
    ml_gen_field(ModuleInfo, Context, MaybeFieldName, Type, Width, Defn,
        !ArgNum).

:- pred ml_gen_field(module_info::in, prog_context::in,
    maybe(ctor_field_name)::in, mer_type::in, arg_width::in, mlds_defn::out,
    int::in, int::out) is det.

ml_gen_field(ModuleInfo, Context, MaybeFieldName, Type, Width, Defn,
        !ArgNum) :-
    ( ml_must_box_field_type(ModuleInfo, Type, Width) ->
        MLDS_Type = mlds_generic_type
    ;
        MLDS_Type = mercury_type_to_mlds_type(ModuleInfo, Type)
    ),
    FieldName = ml_gen_field_name(MaybeFieldName, !.ArgNum),
    Defn = ml_gen_mlds_field_decl(
        mlds_data_var(mlds_var_name(FieldName, no)),
            MLDS_Type, mlds_make_context(Context)),
    !:ArgNum = !.ArgNum + 1.

:- func ml_gen_mlds_field_decl(mlds_data_name, mlds_type, mlds_context)
    = mlds_defn.

ml_gen_mlds_field_decl(DataName, MLDS_Type, Context) = Defn :-
    Name = entity_data(DataName),
    % We only need GC tracing code for top-level variables, not for fields
    GCStatement = gc_no_stmt,
    EntityDefn = mlds_data(MLDS_Type, no_initializer, GCStatement),
    DeclFlags = ml_gen_public_field_decl_flags,
    Defn = mlds_defn(Name, Context, DeclFlags, EntityDefn).

%-----------------------------------------------------------------------------%
%
% Miscellaneous helper routines.
%

ml_gen_type_name(type_ctor(Name, Arity), QualifiedTypeName, Arity) :-
    (
        Name = qualified(ModuleName, TypeName)
    ;
        % Builtin types like `int' may be still unqualified at this point.
        Name = unqualified(TypeName),
        ModuleName = mercury_public_builtin_module
    ),
    MLDS_Module = mercury_module_name_to_mlds(ModuleName),
    QualifiedTypeName = qual(MLDS_Module, module_qual, TypeName).

ml_gen_du_ctor_name(CompilationTarget, TypeCtor, Name, Arity) = CtorName :-
    TypeCtor = type_ctor(TypeName, TypeArity),
    UnqualTypeName = unqualify_name(TypeName),
    CtorName = ml_gen_du_ctor_name_unqual_type(CompilationTarget,
        UnqualTypeName, TypeArity, Name, Arity).

ml_gen_du_ctor_name_unqual_type(CompilationTarget, UnqualTypeName, TypeArity,
        Name, Arity) = CtorName :-
    UnqualName = unqualify_name(Name),
    (
        ( CompilationTarget = target_java
        ; CompilationTarget = target_csharp
        ),
        UnqualName = UnqualTypeName,
        Arity = TypeArity
    ->
        % In Java and C# we must not generate a class with the same name as its
        % enclosing class.  We add the prefix to avoid that situation arising.
        % (A user may name another functor of the same type with "mr_" to
        % trigger the problem.)
        CtorName = "mr_" ++ UnqualName
    ;
        CtorName = UnqualName
    ).

    % For interoperability, we ought to generate an `==' member for types
    % which have a user-defined equality, if the target language supports it
    % (as do e.g. C++, Java).
    %
:- pred ml_gen_equality_members(maybe(unify_compare)::in,
    list(mlds_defn)::out) is det.

% XXX generation of `==' members is not yet implemented.
ml_gen_equality_members(_, []).

%-----------------------------------------------------------------------------%
%
% Routines for generating declaration flags.
%

ml_gen_type_decl_flags = MLDS_DeclFlags :-
    % XXX are these right?
    Access = acc_public,
    PerInstance = one_copy,
    Virtuality = non_virtual,
    Overridability = overridable,
    Constness = modifiable,
    Abstractness = concrete,
    MLDS_DeclFlags = init_decl_flags(Access, PerInstance,
        Virtuality, Overridability, Constness, Abstractness).

ml_gen_member_decl_flags = MLDS_DeclFlags :-
    Access = acc_public,
    PerInstance = per_instance,
    Virtuality = non_virtual,
    Overridability = overridable,
    Constness = modifiable,
    Abstractness = concrete,
    MLDS_DeclFlags = init_decl_flags(Access, PerInstance,
        Virtuality, Overridability, Constness, Abstractness).

ml_gen_const_member_decl_flags = MLDS_DeclFlags :-
    Access = acc_public,
    PerInstance = per_instance,
    Virtuality = non_virtual,
    Overridability = overridable,
    Constness = const,
    Abstractness = concrete,
    MLDS_DeclFlags = init_decl_flags(Access, PerInstance,
        Virtuality, Overridability, Constness, Abstractness).

ml_gen_enum_constant_decl_flags = MLDS_DeclFlags :-
    Access = acc_public,
    PerInstance = one_copy,
    Virtuality = non_virtual,
    Overridability = overridable,
    Constness = const,
    Abstractness = concrete,
    MLDS_DeclFlags = init_decl_flags(Access, PerInstance,
        Virtuality, Overridability, Constness, Abstractness).

%----------------------------------------------------------------------------%

ml_gen_exported_enums(ModuleInfo, MLDS_ExportedEnums) :-
     module_info_get_exported_enums(ModuleInfo, ExportedEnumInfo),
     module_info_get_type_table(ModuleInfo, TypeTable),
     list.map(ml_gen_exported_enum(ModuleInfo, TypeTable),
        ExportedEnumInfo, MLDS_ExportedEnums).

:- pred ml_gen_exported_enum(module_info::in, type_table::in,
    exported_enum_info::in, mlds_exported_enum::out) is det.

ml_gen_exported_enum(_ModuleInfo, TypeTable, ExportedEnumInfo,
        MLDS_ExportedEnum) :-
    ExportedEnumInfo = exported_enum_info(Lang, Context, TypeCtor, Mapping),
    lookup_type_ctor_defn(TypeTable, TypeCtor, TypeDefn),
    get_type_defn_body(TypeDefn, TypeBody),
    (
        ( TypeBody = hlds_eqv_type(_)
        ; TypeBody = hlds_foreign_type(_)
        ; TypeBody = hlds_solver_type(_, _)
        ; TypeBody = hlds_abstract_type(_)
        ),
        unexpected($module, $pred, "invalid type")
    ;
        TypeBody = hlds_du_type(Ctors, TagValues, _CheaperTagTest,
            _IsEnumOrDummy, _MaybeUserEq, _MaybeDirectArgCtors,
            _ReservedTag, _ReservedAddr, _IsForeignType),
        ml_gen_type_name(TypeCtor, QualifiedClassName, MLDS_ClassArity),
        MLDS_Type = mlds_class_type(QualifiedClassName, MLDS_ClassArity,
            mlds_enum),
        list.foldl(
            generate_foreign_enum_constant(TypeCtor, Mapping, TagValues,
                MLDS_Type),
            Ctors, [], ExportConstants),
        MLDS_ExportedEnum = mlds_exported_enum(Lang, Context, TypeCtor,
            ExportConstants)
    ).

:- pred generate_foreign_enum_constant(type_ctor::in,
    map(sym_name, string)::in, cons_tag_values::in, mlds_type::in,
    constructor::in,
    list(mlds_exported_enum_constant)::in,
    list(mlds_exported_enum_constant)::out) is det.

generate_foreign_enum_constant(TypeCtor, Mapping, TagValues, MLDS_Type, Ctor,
        !ExportConstants) :-
    Ctor = ctor(_, _, QualName, Args, _),
    list.length(Args, Arity),
    map.lookup(TagValues, cons(QualName, Arity, TypeCtor), TagVal),
    (
        TagVal = int_tag(Int),
        ConstValue = ml_const(mlconst_enum(Int, MLDS_Type))
    ;
        TagVal = foreign_tag(Lang, String),
        ConstValue = ml_const(mlconst_foreign(Lang, String, MLDS_Type))
    ;
        ( TagVal = string_tag(_)
        ; TagVal = float_tag(_)
        ; TagVal = closure_tag(_, _, _)
        ; TagVal = type_ctor_info_tag(_, _, _)
        ; TagVal = base_typeclass_info_tag(_, _, _)
        ; TagVal = type_info_const_tag(_)
        ; TagVal = typeclass_info_const_tag(_)
        ; TagVal = ground_term_const_tag(_, _)
        ; TagVal = tabling_info_tag(_, _)
        ; TagVal = deep_profiling_proc_layout_tag(_, _)
        ; TagVal = table_io_entry_tag(_, _)
        ; TagVal = single_functor_tag
        ; TagVal = unshared_tag(_)
        ; TagVal = direct_arg_tag(_)
        ; TagVal = shared_remote_tag(_, _)
        ; TagVal = shared_local_tag(_, _)
        ; TagVal = no_tag
        ; TagVal = reserved_address_tag(_)
        ; TagVal = shared_with_reserved_addresses_tag(_, _)
        ),
        unexpected($module, $pred,
            "enum constant requires an int or foreign tag")
    ),
    % Sanity check.
    expect(unify(Arity, 0), $module, $pred, "enum constant arity != 0"),
    UnqualName = unqualify_name(QualName),
    UnqualSymName = unqualified(UnqualName),
    map.lookup(Mapping, UnqualSymName, ForeignName),
    ExportConstant = mlds_exported_enum_constant(ForeignName,
        init_obj(ConstValue)),
    !:ExportConstants = [ExportConstant | !.ExportConstants].

%-----------------------------------------------------------------------------%
:- end_module ml_backend.ml_type_gen.
%-----------------------------------------------------------------------------%
