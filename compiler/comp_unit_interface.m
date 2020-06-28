%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 2015 The Mercury team.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: comp_unit_interface.m.
% Authors: fjh (original version), zs (current version).
%
% Given the raw compilation unit of a module, extract the part of that module
% that will go into the .int file of the module.
%
%---------------------------------------------------------------------------%

:- module parse_tree.comp_unit_interface.
:- interface.

:- import_module libs.
:- import_module libs.globals.
:- import_module mdbcomp.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.error_util.
:- import_module parse_tree.prog_item.

:- import_module list.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

    % This qualifies everything as much as it can given the information
    % in the current module and writes out the .int3 file.
    % XXX document me better
    %
:- pred generate_short_interface_int3(globals::in, raw_compilation_unit::in,
    parse_tree_int3::out, list(error_spec)::in, list(error_spec)::out) is det.

%---------------------------------------------------------------------------%

    % generate_private_interface_int0(AugCompUnit, ParseTreeInt0):
    %
    % Generate the private interface of a module (its .int0 file), which
    % makes available some not-generally-available items to the other modules
    % nested inside it.
    %
:- pred generate_private_interface_int0(aug_compilation_unit::in,
    parse_tree_int0::out, list(error_spec)::in, list(error_spec)::out) is det.

%---------------------------------------------------------------------------%

    % generate_pre_grab_pre_qual_interface_for_int1_int2(RawCompUnit,
    %   InterfaceRawCompUnit):
    %
    % Prepare for the generation of .int and .int2 files by generating
    % the part of the raw compilation unit that needs to be module qualified
    % before the invocation of generate_interfaces_int1_int2.
    %
    % We return interface sections almost intact, changing them only by
    % making instance declarations abstract. We delete most kinds of items
    % from implementation sections, keeping only
    %
    % - Module includes.
    %
    % - Module imports and uses.
    %
    % - Type definitions, in a possibly changed form. Specifically,
    %   we replace the definitions (a) solver types and (b) noncanonical
    %   du and foreign types with their abstract forms. We leave the
    %   definitions of all other types (canonical du and foreign types,
    %   equivalence types, and already abtract types) unchanged.
    %
    % - Typeclass declarations in their abstract from.
    %
    % - Foreign_enum pragmas.
    %
    % - Foreign_import_module declarations.
    %
    % XXX ITEM_LIST Document why we do all this *before* module qualification.
    %
    % XXX ITEM_LIST The original comment on this predicate,
    % when it was conjoined with the code of get_interface above, was:
    % "Given the raw compilation unit of a module, extract and return
    % the part of that module that will go into the .int file of the module.
    % This will typically mostly be the interface section of the module,
    % but it may also contain parts of the implementation section as well.
    % Both parts may be somewhat modified; for example, we may remove
    % the bodies of instance definitions in an interface section,
    % but put the original, non-abstract instance definition in the
    % implementation section."
    %
:- pred generate_pre_grab_pre_qual_interface_for_int1_int2(
    raw_compilation_unit::in, raw_compilation_unit::out) is det.

    % Generate the contents for the .int and .int2 files.
    %
:- pred generate_interfaces_int1_int2(globals::in, aug_compilation_unit::in,
    parse_tree_int1::out, parse_tree_int2::out,
    list(error_spec)::in, list(error_spec)::out) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%
%
% XXX ITEM_LIST
% The predicates in rest of the interface should not be needed at all.
%

    % This predicate is exported for use by modules.m.
    %
    % XXX ITEM_LIST When the predicate above is deleted, this function
    % should not be needed in this module anymore either, and so it should be
    % moved elsewhere.
    %
:- func make_foreign_import(module_name, foreign_language) = item_fim.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module libs.options.
:- import_module parse_tree.check_parse_tree_type_defns.
:- import_module parse_tree.convert_parse_tree.
:- import_module parse_tree.decide_type_repn.
:- import_module parse_tree.item_util.
:- import_module parse_tree.module_qual.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_data_foreign.
:- import_module parse_tree.prog_foreign.
:- import_module parse_tree.prog_mutable.
:- import_module parse_tree.prog_type.

:- import_module bool.
:- import_module cord.
:- import_module map.
:- import_module maybe.
:- import_module one_or_more.
:- import_module one_or_more_map.
:- import_module pair.
:- import_module require.
:- import_module set.
:- import_module term.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

generate_short_interface_int3(Globals, RawCompUnit, ParseTreeInt3, !Specs) :-
    RawCompUnit =
        raw_compilation_unit(ModuleName, ModuleNameContext, RawItemBlocks),
    get_short_interface_int3_from_item_blocks(RawItemBlocks,
        [], IntIncls, [], IntImportAvails0,
        cord.init, OrigIntTypeDefnsCord, cord.init, IntTypeDefnsCord,
        cord.init, IntInstDefnsCord, cord.init, IntModeDefnsCord,
        cord.init, IntTypeClassesCord, cord.init, IntInstancesCord,
        cord.init, OrigIntForeignEnumsCord,
        cord.init, OrigImpTypeDefnsCord, cord.init, OrigImpForeignEnumsCord,
        do_not_need_imports, NeedImports, !Specs),
    ImpIncls = [],
    classify_include_modules(IntIncls, ImpIncls, IntInclMap, _ImpInclMap,
        InclMap, !Specs), 
    (
        NeedImports = do_not_need_imports,
        IntImportAvails = []
    ;
        NeedImports = do_need_imports,
        IntImportAvails = IntImportAvails0
    ),
    accumulate_imports_uses_maps(IntImportAvails,
        map.init, IntImportMap, map.init, _IntUseMap),
    map.init(IntUseMap),
    map.init(ImpImportMap),
    map.init(ImpUseMap),
    classify_int_imp_import_use_modules(ModuleName,
        IntImportMap, IntUseMap, ImpImportMap, ImpUseMap,
        SectionImportUseMap, !Specs),
    import_and_or_use_map_section_to_maybe_implicit(SectionImportUseMap,
        ImportUseMap),

    OrigIntTypeDefns = cord.list(OrigIntTypeDefnsCord),
    IntTypeDefns = cord.list(IntTypeDefnsCord),
    IntInstDefns = cord.list(IntInstDefnsCord),
    IntModeDefns = cord.list(IntModeDefnsCord),
    IntTypeClasses = cord.list(IntTypeClassesCord),
    IntInstances = cord.list(IntInstancesCord),
    OrigIntForeignEnums = cord.list(OrigIntForeignEnumsCord),
    OrigImpTypeDefns = cord.list(OrigImpTypeDefnsCord),
    OrigImpForeignEnums = cord.list(OrigImpForeignEnumsCord),

    IntTypeDefnMap0 = type_ctor_defn_items_to_map(IntTypeDefns),
    IntInstDefnMap = inst_ctor_defn_items_to_map(IntInstDefns),
    IntModeDefnMap = mode_ctor_defn_items_to_map(IntModeDefns),
    % get_short_interface_int3_from_item_blocks above will turn
    % non-abstract type definitions into their abstract forms.
    % If the type constructor involved already had an abstract definition,
    % this will add a second one. To avoid writing out more than one
    % abstract definition to the .int3 file, whose readers would complain
    % about that, do not keep any duplicate abstract type definitions.
    map.map_values_only(keep_only_one_abstract_type_defn,
        IntTypeDefnMap0, IntTypeDefnMap),

    OrigIntTypeDefnMap = type_ctor_defn_items_to_map(OrigIntTypeDefns),
    OrigIntForeignEnumMap =
        type_ctor_foreign_enum_items_to_map(OrigIntForeignEnums),
    OrigImpTypeDefnMap = type_ctor_defn_items_to_map(OrigImpTypeDefns),
    OrigImpForeignEnumMap =
        type_ctor_foreign_enum_items_to_map(OrigImpForeignEnums),
    % For now, we want only the error messages.
    create_type_ctor_checked_map(do_not_insist_on_defn, ModuleName,
        OrigIntTypeDefnMap, OrigImpTypeDefnMap,
        OrigIntForeignEnumMap, OrigImpForeignEnumMap,
        TypeCtorCheckedMap, !Specs),
    decide_repns_for_simple_types_for_int3(ModuleName, TypeCtorCheckedMap,
        IntTypeRepnMap),
    OrigParseTreeInt3 = parse_tree_int3(ModuleName, ModuleNameContext,
        IntInclMap, InclMap, IntImportMap, ImportUseMap,
        IntTypeDefnMap, IntInstDefnMap, IntModeDefnMap,
        IntTypeClasses, IntInstances, IntTypeRepnMap),
    % Any Specs this can generate would be better reported
    % when the module is being compiled to target language code.
    module_qualify_parse_tree_int3(Globals, OrigParseTreeInt3, ParseTreeInt3,
        [], _Specs).

:- pred keep_only_one_abstract_type_defn(type_ctor_all_defns::in,
    type_ctor_all_defns::out) is det.

keep_only_one_abstract_type_defn(AllDefns0, AllDefns) :-
    AllDefns0 = type_ctor_all_defns(SolverAbs0, SolverNonAbs,
        StdAbs0, StdEqv, StdDu, StdForeign),
    (
        SolverAbs0 = [HeadSolverAbs | _],
        SolverAbs = [HeadSolverAbs]
    ;
        SolverAbs0 = [],
        SolverAbs = []
    ),
    (
        StdAbs0 = [HeadStdAbs | _],
        StdAbs = [HeadStdAbs]
    ;
        StdAbs0 = [],
        StdAbs = []
    ),
    AllDefns = type_ctor_all_defns(SolverAbs, SolverNonAbs,
        StdAbs, StdEqv, StdDu, StdForeign).

:- type need_imports
    --->    do_not_need_imports
    ;       do_need_imports.

:- pred get_short_interface_int3_from_item_blocks(list(raw_item_block)::in,
    list(item_include)::in, list(item_include)::out,
    list(item_avail)::in, list(item_avail)::out,
    cord(item_type_defn_info)::in, cord(item_type_defn_info)::out,
    cord(item_type_defn_info)::in, cord(item_type_defn_info)::out,
    cord(item_inst_defn_info)::in, cord(item_inst_defn_info)::out,
    cord(item_mode_defn_info)::in, cord(item_mode_defn_info)::out,
    cord(item_typeclass_info)::in, cord(item_typeclass_info)::out,
    cord(item_instance_info)::in, cord(item_instance_info)::out,
    cord(item_foreign_enum_info)::in, cord(item_foreign_enum_info)::out,
    cord(item_type_defn_info)::in, cord(item_type_defn_info)::out,
    cord(item_foreign_enum_info)::in, cord(item_foreign_enum_info)::out,
    need_imports::in, need_imports::out,
    list(error_spec)::in, list(error_spec)::out) is det.

get_short_interface_int3_from_item_blocks([],
        !IntIncls, !IntImportAvails,
        !OrigIntTypeDefns, !IntTypeDefns, !IntInstDefns, !IntModeDefns,
        !IntTypeClasses, !IntInstances, !OrigIntForeignEnums,
        !OrigImpTypeDefns, !OrigImpForeignEnums, !NeedImports, !Specs).
get_short_interface_int3_from_item_blocks([RawItemBlock | RawItemBlocks],
        !IntIncls, !IntImportAvails,
        !OrigIntTypeDefns, !IntTypeDefns, !IntInstDefns, !IntModeDefns,
        !IntTypeClasses, !IntInstances, !OrigIntForeignEnums,
        !OrigImpTypeDefns, !OrigImpForeignEnums, !NeedImports, !Specs) :-
    RawItemBlock = item_block(_, Section, Incls, Avails, _FIMs, Items),
    (
        Section = ms_interface,
        !:IntIncls = !.IntIncls ++ Incls,
        % We ignore use_module declarations.
        list.filter(avail_is_import, Avails, ImportAvails),
        !:IntImportAvails = !.IntImportAvails ++ ImportAvails,
        get_short_interface_int3_from_items_int(Items,
            !OrigIntTypeDefns, !IntTypeDefns, !IntInstDefns, !IntModeDefns,
            !IntTypeClasses, !IntInstances, !OrigIntForeignEnums, !NeedImports)
    ;
        Section = ms_implementation,
        get_short_interface_int3_from_items_imp(Items,
            !OrigImpTypeDefns, !OrigImpForeignEnums)
    ),
    get_short_interface_int3_from_item_blocks(RawItemBlocks,
        !IntIncls, !IntImportAvails,
        !OrigIntTypeDefns, !IntTypeDefns, !IntInstDefns, !IntModeDefns,
        !IntTypeClasses, !IntInstances, !OrigIntForeignEnums,
        !OrigImpTypeDefns, !OrigImpForeignEnums, !NeedImports, !Specs).

:- pred avail_is_import(item_avail::in) is semidet.

avail_is_import(avail_import(_)).

:- pred get_short_interface_int3_from_items_int(list(item)::in,
    cord(item_type_defn_info)::in, cord(item_type_defn_info)::out,
    cord(item_type_defn_info)::in, cord(item_type_defn_info)::out,
    cord(item_inst_defn_info)::in, cord(item_inst_defn_info)::out,
    cord(item_mode_defn_info)::in, cord(item_mode_defn_info)::out,
    cord(item_typeclass_info)::in, cord(item_typeclass_info)::out,
    cord(item_instance_info)::in, cord(item_instance_info)::out,
    cord(item_foreign_enum_info)::in, cord(item_foreign_enum_info)::out,
    need_imports::in, need_imports::out) is det.

get_short_interface_int3_from_items_int([],
        !OrigIntTypeDefns, !IntTypeDefns, !IntInstDefns, !IntModeDefns,
        !IntTypeClasses, !IntInstances, !OrigIntForeignEnums, !NeedImports).
get_short_interface_int3_from_items_int([Item | Items],
        !OrigIntTypeDefns, !IntTypeDefns, !IntInstDefns, !IntModeDefns,
        !IntTypeClasses, !IntInstances, !OrigIntForeignEnums, !NeedImports) :-
    (
        Item = item_type_defn(ItemTypeDefnInfo),
        cord.snoc(ItemTypeDefnInfo, !OrigIntTypeDefns),
        % XXX TYPE_REPN do this in decide_type_repn.m?
        make_type_defn_abstract_type_for_int3(ItemTypeDefnInfo,
            AbstractOrForeignItemTypeDefnInfo),
        cord.snoc(AbstractOrForeignItemTypeDefnInfo, !IntTypeDefns)
    ;
        Item = item_inst_defn(ItemInstInfo),
        AbstractItemInstInfo =
            ItemInstInfo ^ id_inst_defn := abstract_inst_defn,
        cord.snoc(AbstractItemInstInfo, !IntInstDefns)
    ;
        Item = item_mode_defn(ItemModeInfo),
        AbstractItemModeInfo =
            ItemModeInfo ^ md_mode_defn := abstract_mode_defn,
        cord.snoc(AbstractItemModeInfo, !IntModeDefns)
    ;
        Item = item_typeclass(ItemTypeClassInfo),
        ItemTypeClassInfo = item_typeclass_info(ClassName, ParamsTVars,
            _Constraints, _FunDeps, _Methods, TVarSet, Context, SeqNum),
        AbstractItemTypeClassInfo = item_typeclass_info(ClassName, ParamsTVars,
            [], [], class_interface_abstract, TVarSet, Context, SeqNum),
        cord.snoc(AbstractItemTypeClassInfo, !IntTypeClasses)
    ;
        Item = item_instance(ItemInstanceInfo),
        AbstractItemInstanceInfo = ItemInstanceInfo ^ ci_method_instances
            := instance_body_abstract,
        cord.snoc(AbstractItemInstanceInfo, !IntInstances),
        % We may need the imported modules to module qualify the names
        % of the type constructors in the instance's member types.
        !:NeedImports = do_need_imports
    ;
        Item = item_foreign_enum(ItemForeignEnumInfo),
        cord.snoc(ItemForeignEnumInfo, !OrigIntForeignEnums)
    ;
        ( Item = item_clause(_)
        ; Item = item_mutable(_)
        ; Item = item_pred_decl(_)
        ; Item = item_mode_decl(_)
        ; Item = item_foreign_export_enum(_)
        ; Item = item_decl_pragma(_)
        ; Item = item_impl_pragma(_)
        ; Item = item_generated_pragma(_)
        ; Item = item_promise(_)
        ; Item = item_initialise(_)
        ; Item = item_finalise(_)
        ; Item = item_type_repn(_)
        )
    ),
    get_short_interface_int3_from_items_int(Items,
        !OrigIntTypeDefns, !IntTypeDefns, !IntInstDefns, !IntModeDefns,
        !IntTypeClasses, !IntInstances, !OrigIntForeignEnums, !NeedImports).

:- pred make_type_defn_abstract_type_for_int3(item_type_defn_info::in,
    item_type_defn_info::out) is det.

make_type_defn_abstract_type_for_int3(ItemTypeDefn0, ItemTypeDefn) :-
    TypeDefn0 = ItemTypeDefn0 ^ td_ctor_defn,
    (
        TypeDefn0 = parse_tree_du_type(DetailsDu),
        make_du_type_abstract(DetailsDu, DetailsAbstract),
        ItemTypeDefn = ItemTypeDefn0 ^ td_ctor_defn
            := parse_tree_abstract_type(DetailsAbstract)
    ;
        TypeDefn0 = parse_tree_abstract_type(_),
        ItemTypeDefn = ItemTypeDefn0
    ;
        TypeDefn0 = parse_tree_solver_type(_),
        % rafe: XXX we need to also export the details of the forwarding type
        % for the representation and the forwarding pred for initialization.
        DetailsAbstract = abstract_solver_type,
        ItemTypeDefn = ItemTypeDefn0 ^ td_ctor_defn
            := parse_tree_abstract_type(DetailsAbstract)
    ;
        TypeDefn0 = parse_tree_eqv_type(_),
        % XXX Is this right for solver types?
        % XXX TYPE_REPN Is this right for types that are eqv to enums,
        % or to known size ints/uints?
        DetailsAbstract = abstract_type_general,
        ItemTypeDefn = ItemTypeDefn0 ^ td_ctor_defn
            := parse_tree_abstract_type(DetailsAbstract)
    ;
        TypeDefn0 = parse_tree_foreign_type(DetailsForeign0),
        % We always need the definitions of foreign types
        % to handle inter-language interfacing correctly.
        % XXX Even in .int3 files?
        % However, we want to abstract away any unify and compare predicates.
        delete_uc_preds_from_foreign_type(DetailsForeign0, DetailsForeign),
        TypeDefn = parse_tree_foreign_type(DetailsForeign),
        ItemTypeDefn = ItemTypeDefn0 ^ td_ctor_defn := TypeDefn
    ).

:- pred get_short_interface_int3_from_items_imp(list(item)::in,
    cord(item_type_defn_info)::in, cord(item_type_defn_info)::out,
    cord(item_foreign_enum_info)::in, cord(item_foreign_enum_info)::out)
    is det.

get_short_interface_int3_from_items_imp([],
        !ImpTypeDefns, !ImpForeignEnums).
get_short_interface_int3_from_items_imp([Item | Items],
        !ImpTypeDefns, !ImpForeignEnums) :-
    (
        Item = item_type_defn(ItemTypeDefnInfo),
        cord.snoc(ItemTypeDefnInfo, !ImpTypeDefns)
    ;
        Item = item_foreign_enum(ItemForeignEnumInfo),
        cord.snoc(ItemForeignEnumInfo, !ImpForeignEnums)
    ;
        ( Item = item_typeclass(_)
        ; Item = item_instance(_)
        ; Item = item_inst_defn(_)
        ; Item = item_mode_defn(_)
        ; Item = item_clause(_)
        ; Item = item_mutable(_)
        ; Item = item_pred_decl(_)
        ; Item = item_mode_decl(_)
        ; Item = item_foreign_export_enum(_)
        ; Item = item_decl_pragma(_)
        ; Item = item_impl_pragma(_)
        ; Item = item_generated_pragma(_)
        ; Item = item_promise(_)
        ; Item = item_initialise(_)
        ; Item = item_finalise(_)
        ; Item = item_type_repn(_)
        )
    ),
    get_short_interface_int3_from_items_imp(Items,
        !ImpTypeDefns, !ImpForeignEnums).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

generate_private_interface_int0(AugCompUnit, ParseTreeInt0, !Specs) :-
    AugCompUnit = aug_compilation_unit(_, _, ModuleVersionNumbers,
        ParseTreeModuleSrc, _, _, _, _, _, _),

    ( if map.search(ModuleVersionNumbers, ModuleName, VersionNumbers) then
        MaybeVersionNumbers = version_numbers(VersionNumbers)
    else
        MaybeVersionNumbers = no_version_numbers
    ),

    ParseTreeModuleSrc = parse_tree_module_src(ModuleName, ModuleNameContext,
        IntInclMap, ImpInclMap, InclMap,
        IntImportMap, IntUseMap, ImpImportMap, ImpUseMap, ImportUseMap,
        IntFIMSpecMap, ImpFIMSpecMap, MaybeImplicitFIMLangs,

        IntTypeDefnsAbs, IntTypeDefnsMer, IntTypeDefnsForeign,
        IntInstDefns, IntModeDefns, IntTypeClasses, IntInstances0,
        IntPredDecls, IntModeDecls,
        _IntForeignExportEnums, IntDeclPragmas, IntPromises,
        _IntBadClausePreds,

        ImpTypeDefnsAbs, ImpTypeDefnsMer, ImpTypeDefnsForeign,
        ImpInstDefns, ImpModeDefns, ImpTypeClasses, ImpInstances0,
        ImpPredDecls0, ImpModeDecls, _ImpClauses,
        ImpForeignEnums, _ImpForeignExportEnums,
        ImpDeclPragmas, _ImpImplPragmas, ImpPromises,
        _ImpInitialises, _ImpFinalises, ImpMutables),

    map.keys_as_set(IntFIMSpecMap, IntFIMSpecs0),
    map.keys_as_set(ImpFIMSpecMap, ImpFIMSpecs0),
    % Add the implicit FIMs, if any, to the interface.
    (
        MaybeImplicitFIMLangs = yes(ImplicitFIMLangs),
        set.union(
            set.map(fim_module_lang_to_spec(ModuleName), ImplicitFIMLangs),
            IntFIMSpecs0, IntFIMSpecs)
    ;
        MaybeImplicitFIMLangs = no,
        IntFIMSpecs = IntFIMSpecs0
    ),
    % Make the implementation FIMs disjoint from the interface FIMs.
    set.difference(ImpFIMSpecs0, IntFIMSpecs, ImpFIMSpecs),

    IntInstances = list.map(make_instance_abstract, IntInstances0),
    ImpInstances = list.map(make_instance_abstract, ImpInstances0),

    ImpPredDecls = ImpPredDecls0 ++ list.condense(
        list.map(mutable_public_aux_pred_decls(ModuleName), ImpMutables)),

    IntTypeDefns = IntTypeDefnsAbs ++ IntTypeDefnsMer ++ IntTypeDefnsForeign,
    ImpTypeDefns = ImpTypeDefnsAbs ++ ImpTypeDefnsMer ++ ImpTypeDefnsForeign,
    IntTypeDefnMap = type_ctor_defn_items_to_map(IntTypeDefns),
    IntInstDefnMap = inst_ctor_defn_items_to_map(IntInstDefns),
    IntModeDefnMap = mode_ctor_defn_items_to_map(IntModeDefns),
    ImpTypeDefnMap = type_ctor_defn_items_to_map(ImpTypeDefns),
    ImpInstDefnMap = inst_ctor_defn_items_to_map(ImpInstDefns),
    ImpModeDefnMap = mode_ctor_defn_items_to_map(ImpModeDefns),
    % XXX CLEANUP Foreign_enums are not allowed in the interface section,
    % so create_type_ctor_checked_map should not take them as an input.
    map.init(IntForeignEnumMap),
    ImpForeignEnumMap = type_ctor_foreign_enum_items_to_map(ImpForeignEnums),
    % For now, we want only the error messages.
    create_type_ctor_checked_map(do_insist_on_defn, ModuleName,
        IntTypeDefnMap, ImpTypeDefnMap, IntForeignEnumMap, ImpForeignEnumMap,
        _TypeCtorCheckedMap, !Specs),
    ParseTreeInt0 = parse_tree_int0(ModuleName, ModuleNameContext,
        MaybeVersionNumbers, IntInclMap, ImpInclMap, InclMap,
        IntImportMap, IntUseMap, ImpImportMap, ImpUseMap, ImportUseMap,
        IntFIMSpecs, ImpFIMSpecs,
        IntTypeDefnMap, IntInstDefnMap, IntModeDefnMap,
        IntTypeClasses, IntInstances, IntPredDecls, IntModeDecls,
        IntForeignEnumMap, IntDeclPragmas, IntPromises,
        ImpTypeDefnMap, ImpInstDefnMap, ImpModeDefnMap,
        ImpTypeClasses, ImpInstances, ImpPredDecls, ImpModeDecls,
        ImpForeignEnumMap, ImpDeclPragmas, ImpPromises).

:- func make_instance_abstract(item_instance_info) = item_instance_info.

make_instance_abstract(Instance) =
    Instance ^ ci_method_instances := instance_body_abstract.

:- func mutable_public_aux_pred_decls(module_name, item_mutable_info)
    = list(item_pred_decl_info).

mutable_public_aux_pred_decls(ModuleName, ItemMutable) = PublicAuxPredDecls :-
    ItemMutable = item_mutable_info(MutableName,
        _OrigType, Type, _OrigInst, Inst, _Value, _Varset, MutAttrs,
        Context, _SeqNum),
    compute_needed_public_mutable_aux_preds(MutAttrs, PublicAuxPreds),
    list.map(
        make_mutable_aux_pred_decl(ModuleName, MutableName, Type, Inst,
            Context),
        PublicAuxPreds, PublicAuxPredDecls).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

generate_pre_grab_pre_qual_interface_for_int1_int2(RawCompUnit,
        InterfaceRawCompUnit) :-
    RawCompUnit = raw_compilation_unit(ModuleName, ModuleNameContext,
        RawItemBlocks),
    generate_pre_grab_pre_qual_item_blocks(RawItemBlocks,
        cord.init, IntInclsCord, cord.init, ImpInclsCord,
        cord.init, IntAvailsCord, cord.init, ImpAvailsCord,
        cord.init, IntFIMsCord, cord.init, ImpFIMsCord,
        cord.init, IntItemsCord, cord.init, ImpItemsCord),
    IntIncls = cord.list(IntInclsCord),
    ImpIncls = cord.list(ImpInclsCord),
    IntAvails = cord.list(IntAvailsCord),
    ImpAvails = cord.list(ImpAvailsCord),
    IntFIMs = cord.list(IntFIMsCord),
    ImpFIMs = cord.list(ImpFIMsCord),
    IntItems = cord.list(IntItemsCord),
    ImpItems = cord.list(ImpItemsCord),
    int_imp_items_to_item_blocks(ModuleName, ms_interface, ms_implementation,
        IntIncls, ImpIncls, IntAvails, ImpAvails,
        IntFIMs, ImpFIMs, IntItems, ImpItems, InterfaceItemBlocks),
    InterfaceRawCompUnit = raw_compilation_unit(ModuleName, ModuleNameContext,
        InterfaceItemBlocks).

%---------------------------------------------------------------------------%

:- pred generate_pre_grab_pre_qual_item_blocks(list(raw_item_block)::in,
    cord(item_include)::in, cord(item_include)::out,
    cord(item_include)::in, cord(item_include)::out,
    cord(item_avail)::in, cord(item_avail)::out,
    cord(item_avail)::in, cord(item_avail)::out,
    cord(item_fim)::in, cord(item_fim)::out,
    cord(item_fim)::in, cord(item_fim)::out,
    cord(item)::in, cord(item)::out, cord(item)::in, cord(item)::out) is det.

generate_pre_grab_pre_qual_item_blocks([],
        !IntInclsCord, !ImpInclsCord, !IntAvailsCord, !ImpAvailsCord,
        !IntFIMsCord, !ImpFIMsCord, !IntItemsCord, !ImpItemsCord).
generate_pre_grab_pre_qual_item_blocks([RawItemBlock | RawItemBlocks],
        !IntInclsCord, !ImpInclsCord, !IntAvailsCord, !ImpAvailsCord,
        !IntFIMsCord, !ImpFIMsCord, !IntItemsCord, !ImpItemsCord) :-
    RawItemBlock = item_block(_, Section, Incls, Avails, FIMs, Items),
    (
        Section = ms_interface,
        !:IntInclsCord = !.IntInclsCord ++ cord.from_list(Incls),
        !:IntAvailsCord = !.IntAvailsCord ++ cord.from_list(Avails),
        !:IntFIMsCord = !.IntFIMsCord ++ cord.from_list(FIMs),
        generate_pre_grab_pre_qual_items_int(Items, !IntItemsCord)
    ;
        Section = ms_implementation,
        !:ImpInclsCord = !.ImpInclsCord ++ cord.from_list(Incls),
        !:ImpAvailsCord = !.ImpAvailsCord ++ cord.from_list(Avails),
        !:ImpFIMsCord = !.ImpFIMsCord ++ cord.from_list(FIMs),
        generate_pre_grab_pre_qual_items_imp(Items, !ImpItemsCord)
    ),
    generate_pre_grab_pre_qual_item_blocks(RawItemBlocks,
        !IntInclsCord, !ImpInclsCord, !IntAvailsCord, !ImpAvailsCord,
        !IntFIMsCord, !ImpFIMsCord, !IntItemsCord, !ImpItemsCord).

:- pred generate_pre_grab_pre_qual_items_int(list(item)::in,
    cord(item)::in, cord(item)::out) is det.

generate_pre_grab_pre_qual_items_int([], !IntItemsCord).
generate_pre_grab_pre_qual_items_int([Item | Items], !IntItemsCord) :-
    ( if Item = item_instance(ItemInstance) then
        AbstractItemInstance = ItemInstance ^ ci_method_instances
            := instance_body_abstract,
        AbstractItem = item_instance(AbstractItemInstance),
        cord.snoc(AbstractItem, !IntItemsCord)
    else
        cord.snoc(Item, !IntItemsCord)
    ),
    generate_pre_grab_pre_qual_items_int(Items, !IntItemsCord).

:- pred generate_pre_grab_pre_qual_items_imp(list(item)::in,
    cord(item)::in, cord(item)::out) is det.

generate_pre_grab_pre_qual_items_imp([], !ImpItemsCord).
generate_pre_grab_pre_qual_items_imp([Item | Items], !ImpItemsCord) :-
    (
        Item = item_type_defn(TypeDefnInfo),
        delete_uc_preds_make_solver_type_dummy(TypeDefnInfo, TypeDefnInfo1),
        Item1 = item_type_defn(TypeDefnInfo1),
        cord.snoc(Item1, !ImpItemsCord)
    ;
        Item = item_typeclass(ItemTypeClassInfo),
        % `:- typeclass' declarations may be referred to by the constructors
        % in type declarations. Since these constructors are abstractly
        % exported, we won't need the local instance declarations.
        % XXX I (zs) guess that should actually be "we won't need the
        % *method* declarations".
        AbstractItemTypeClassInfo = ItemTypeClassInfo ^ tc_class_methods
            := class_interface_abstract,
        AbstractItem = item_typeclass(AbstractItemTypeClassInfo),
        cord.snoc(AbstractItem, !ImpItemsCord)
    ;
        Item = item_foreign_enum(_),
        cord.snoc(Item, !ImpItemsCord)
    ;
        ( Item = item_clause(_)
        ; Item = item_inst_defn(_)
        ; Item = item_mode_defn(_)
        ; Item = item_pred_decl(_)
        ; Item = item_mode_decl(_)
        ; Item = item_foreign_export_enum(_)
        ; Item = item_decl_pragma(_)
        ; Item = item_impl_pragma(_)
        ; Item = item_generated_pragma(_)
        ; Item = item_promise(_)
        ; Item = item_instance(_)
        ; Item = item_initialise(_)
        ; Item = item_finalise(_)
        ; Item = item_mutable(_)
        )
    ;
        Item = item_type_repn(_),
        % XXX TYPE_REPN Implement this.
        unexpected($pred, "item_type_repn")
    ),
    generate_pre_grab_pre_qual_items_imp(Items, !ImpItemsCord).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

generate_interfaces_int1_int2(Globals, AugCompUnit,
        ParseTreeInt1, ParseTreeInt2, !Specs) :-
    generate_interface_int1(Globals, AugCompUnit, IntImportUseMap,
        IntExplicitFIMSpecs, ImpExplicitFIMSpecs,
        IntTypeDefns, IntInstDefns, IntModeDefns, IntTypeClasses, IntInstances,
        ImpTypeDefns, TypeCtorCheckedMap, ParseTreeInt1, !Specs),
    generate_interface_int2(AugCompUnit, IntImportUseMap,
        IntExplicitFIMSpecs, ImpExplicitFIMSpecs,
        IntTypeDefns, IntInstDefns, IntModeDefns, IntTypeClasses, IntInstances,
        ImpTypeDefns, TypeCtorCheckedMap, ParseTreeInt2).

:- pred generate_interface_int1(globals::in, aug_compilation_unit::in,
    module_names_contexts::out, set(fim_spec)::out, set(fim_spec)::out,
    list(item_type_defn_info)::out,
    list(item_inst_defn_info)::out, list(item_mode_defn_info)::out,
    list(item_typeclass_info)::out, list(item_instance_info)::out,
    list(item_type_defn_info)::out,
    type_ctor_checked_map::out, parse_tree_int1::out,
    list(error_spec)::in, list(error_spec)::out) is det.

generate_interface_int1(Globals, AugCompUnit, IntImportUseMap,
        IntExplicitFIMSpecs, ImpExplicitFIMSpecs,
        IntTypeDefns, IntInstDefns, IntModeDefns, IntTypeClasses, IntInstances,
        ImpTypeDefns, TypeCtorCheckedMap, ParseTreeInt1, !Specs) :-
    % We return some of our intermediate results to our caller, for use
    % in constructing the .int2 file.
    AugCompUnit = aug_compilation_unit(_, _, _, ParseTreeModuleSrc,
        _, DirectIntSpecs, IndirectIntSpecs, _, _, _),

    ParseTreeModuleSrc = parse_tree_module_src(ModuleName, ModuleNameContext,
        IntInclMap, ImpInclMap, InclMap,
        IntImportMap, IntUseMap, ImpImportMap, ImpUseMap, ImportUseMap0,
        IntFIMSpecMap, ImpFIMSpecMap, MaybeImplicitFIMLangs,

        IntTypeDefnsAbs, IntTypeDefnsMer, IntTypeDefnsForeign,
        IntInstDefns, IntModeDefns, IntTypeClasses, IntInstances,
        IntPredDecls, IntModeDecls,
        _IntForeignExportEnums, IntDeclPragmas, IntPromises0,
        _IntBadClausePreds,

        ImpTypeDefnsAbs, ImpTypeDefnsMer, ImpTypeDefnsForeign,
        _ImpInstDefns, _ImpModeDefns, ImpTypeClasses, _ImpInstances,
        _ImpPredDecls, _ImpModeDecls, _ImpClauses,
        ImpForeignEnums0, _ImpForeignExportEnums,
        _ImpDeclPragmas, _ImpImplPragmas, _ImpPromises,
        _ImpInitialises, _ImpFinalises, _ImpMutables),

    % Separate out the contents of the interface section(s) from the
    % contents of the implementation section(s). Separate out the
    % foreign enum pragmas and foreign_import_module items in the
    % implementation section, for possible selective reinclusion later.
    % Likewise, remove type definitions from the implementation section
    % after recording them in ImpTypesMap. Record the type definitions
    % in the interface section as well, in IntTypesMap. Record the set of
    % modules that we need access to due to references in typeclass
    % definition items.

    map.keys_as_set(IntFIMSpecMap, IntExplicitFIMSpecs),
    map.keys_as_set(ImpFIMSpecMap, ImpExplicitFIMSpecs),

    % XXX CLEANUP This code does many unneeded tests.
    IntTypeDefns =
        IntTypeDefnsAbs ++ IntTypeDefnsMer ++ IntTypeDefnsForeign,
    OrigImpTypeDefns =
        ImpTypeDefnsAbs ++ ImpTypeDefnsMer ++ ImpTypeDefnsForeign,
    list.foldl2(record_type_defn_int, IntTypeDefns,
        set.init, IntImplicitFIMLangs,
        one_or_more_map.init, IntTypesMap),
    list.foldl(record_type_defn_imp, OrigImpTypeDefns,
        one_or_more_map.init, ImpTypesMap),

    list.filter(keep_promise_item_int, IntPromises0, IntPromises),

    list.foldl(record_modules_needed_by_typeclass_imp, ImpTypeClasses,
        set.init, ImpModulesNeededByTypeClassDefns),
    list.foldl(record_implicit_fim_lang_for_foreign_enum_imp, ImpForeignEnums0,
        set.init, ImpImplicitFIMLangs1),

    BothTypesMap = one_or_more_map.merge(IntTypesMap, ImpTypesMap),
    % Compute the set of type_ctors whose definitions in the implementation
    % section we need to preserve, possibly in abstract form (that is
    % figured out below).
    %
    % Also, work out which modules we will need access to due to the
    % definitions of equivalence types, foreign types, dummy, enum and other
    % du types types whose definitions we are keeping in the implementation
    % section.
    get_requirements_of_imp_exported_types(IntTypesMap, ImpTypesMap,
        BothTypesMap, NeededImpTypeCtors, ImpModulesNeededByTypeDefns),
    set.union(ImpModulesNeededByTypeClassDefns, ImpModulesNeededByTypeDefns,
        ImpNeededModules),

    % XXX ITEM_LIST We should put a use_module decl into the interface
    % of the .int file ONLY IF the module is actually used in the interface.
    %
    % We already *do* generate warnings for any modules we import or use
    % in the interface that are not required in the interface, and programmers
    % do tend to delete such unnecessary imports from the interface,
    % so fixing this overestimation is not all that urgent.
    %
    % Since everything we put into a .int file should be fully module
    % qualified, we convert all import_modules into use_modules.
    one_or_more_map.merge(IntImportMap, IntUseMap, IntImportUseMap),
    one_or_more_map.merge(ImpImportMap, ImpUseMap, ImpImportUseMap1),
    map.filter_map_values(
        make_imports_into_uses_maybe_implicit(ImpNeededModules),
        ImportUseMap0, ImportUseMap),
    ( if set.is_empty(ImpNeededModules) then
        % This gets the same result as the else case, only more quickly.
        map.init(ImpImportUseMap)
    else
        one_or_more_map.select(ImpImportUseMap1, ImpNeededModules,
            ImpImportUseMap),
        map.keys_as_set(IntImportUseMap, IntImportUseModuleNameSet),
        map.keys_as_set(ImpImportUseMap, ImpImportUseModuleNameSet),
        set.intersect(IntImportUseModuleNameSet, ImpImportUseModuleNameSet,
            IntImpImportUseModuleNameSet),
        expect(set.is_empty(IntImpImportUseModuleNameSet), $pred,
            "Int and Imp ImportUseModuleNames intersect")
    ),

    % Compute the list of type definitions we deleted from ImpItems0
    % that we want to add back to the implementation section,
    % possibly in their abstract form.
    map.foldl2(
        maybe_add_maybe_abstract_type_defns(BothTypesMap, IntTypesMap,
            NeededImpTypeCtors),
        ImpTypesMap, [], ImpTypeDefns,
        ImpImplicitFIMLangs1, ImpImplicitFIMLangs2),

    % Figure out which of the foreign enum items we deleted from ImpItems0
    % we want to add back to the implementation section.
    % Record the needs of these foreign enum items for
    % foreign_import_module items.
    list.foldl2(add_foreign_enum_item_if_needed(IntTypesMap),
        ImpForeignEnums0, [], ImpForeignEnums,
        ImpImplicitFIMLangs2, ImpImplicitFIMLangs),

    % MaybeImplicitFIMLangs should have been filled in by
    % grab_unqual_imported_modules.
    % XXX Find out and document the relationship between that value
    % and the value of IntImplicitFIMLangs computed just above.
    % I (zs) strongly suspect that one of these is a subset of the other,
    % and therefore redundant.
    (
        MaybeImplicitFIMLangs = no,
        unexpected($pred, "MaybeImplicitFIMLangs = no")
    ;
        MaybeImplicitFIMLangs = yes(ImplicitFIMLangs)
    ),
    set.foldl(add_self_fim(ModuleName),
        set.union(IntImplicitFIMLangs, ImplicitFIMLangs),
        IntExplicitFIMSpecs, IntFIMSpecs),
    set.foldl(add_self_fim(ModuleName), ImpImplicitFIMLangs,
        ImpExplicitFIMSpecs, ImpFIMSpecs0),
    set.difference(ImpFIMSpecs0, IntFIMSpecs, ImpFIMSpecs),

    IntTypeDefnMap = type_ctor_defn_items_to_map(IntTypeDefns),
    IntInstDefnMap = inst_ctor_defn_items_to_map(IntInstDefns),
    IntModeDefnMap = mode_ctor_defn_items_to_map(IntModeDefns),
    % XXX CLEANUP Foreign enums are not allowed in the interface section,
    % so create_type_ctor_checked_map should not take them as an input.
    map.init(IntForeignEnumMap),
    OrigImpTypeDefnMap = type_ctor_defn_items_to_map(OrigImpTypeDefns),
    ImpTypeDefnMap = type_ctor_defn_items_to_map(ImpTypeDefns),
    ImpForeignEnumMap = type_ctor_foreign_enum_items_to_map(ImpForeignEnums),
    % For now, we want only the error messages.
    create_type_ctor_checked_map(do_insist_on_defn, ModuleName,
        IntTypeDefnMap, OrigImpTypeDefnMap,
        IntForeignEnumMap, ImpForeignEnumMap, TypeCtorCheckedMap, !Specs),

    globals.lookup_bool_option(Globals, experiment1, Experiment1),
    (
        Experiment1 = no,
        map.init(IntTypeRepnMap)
    ;
        Experiment1 = yes,
        decide_repns_for_all_types_for_int1(Globals, ModuleName,
            TypeCtorCheckedMap, DirectIntSpecs, IndirectIntSpecs,
            IntTypeRepnMap, RepnSpecs),
        !:Specs = !.Specs ++ RepnSpecs
    ),

    DummyMaybeVersionNumbers = no_version_numbers,
    % XXX TODO
    ParseTreeInt1 = parse_tree_int1(ModuleName, ModuleNameContext,
        DummyMaybeVersionNumbers, IntInclMap, ImpInclMap, InclMap,
        IntImportUseMap, ImpImportUseMap, ImportUseMap,
        IntFIMSpecs, ImpFIMSpecs,
        IntTypeDefnMap, IntInstDefnMap, IntModeDefnMap,
        IntTypeClasses, IntInstances,
        IntPredDecls, IntModeDecls,
        IntForeignEnumMap, IntDeclPragmas, IntPromises,
        IntTypeRepnMap,
        ImpTypeDefnMap, ImpForeignEnumMap, ImpTypeClasses).

%---------------------%

:- pred add_self_fim(module_name::in, foreign_language::in,
    set(fim_spec)::in, set(fim_spec)::out) is det.

add_self_fim(ModuleName, Lang, !FIMSpecs) :-
    FIMSpec = fim_spec(Lang, ModuleName),
    set.insert(FIMSpec, !FIMSpecs).

:- pred make_imports_into_uses_maybe_implicit(set(module_name)::in,
    module_name::in, maybe_implicit_import_and_or_use::in,
    maybe_implicit_import_and_or_use::out) is semidet.

make_imports_into_uses_maybe_implicit(ImpNeededModules, ModuleName,
        ImportUse0, ImportUse) :-
    (
        ImportUse0 = explicit_avail(Explicit0),
        make_imports_into_uses(ImpNeededModules, ModuleName,
            Explicit0, Explicit),
        ImportUse = explicit_avail(Explicit)
    ;
        ImportUse0 = implicit_avail(Implicit0, MaybeExplicit0),
        (
            ( Implicit0 = implicit_int_import
            ; Implicit0 = implicit_int_use
            ),
            Implicit = implicit_int_use
        ;
            Implicit0 = implicit_imp_use,
            Implicit = implicit_imp_use
        ),
        (
            MaybeExplicit0 = no,
            MaybeExplicit = no
        ;
            MaybeExplicit0 = yes(Explicit0),
            make_imports_into_uses(ImpNeededModules, ModuleName,
                Explicit0, Explicit),
            MaybeExplicit = yes(Explicit)
        ),
        ImportUse = implicit_avail(Implicit, MaybeExplicit)
    ).

:- pred make_imports_into_uses(set(module_name)::in, module_name::in,
    section_import_and_or_use::in, section_import_and_or_use::out) is semidet.

make_imports_into_uses(ImpNeededModules, ModuleName, Explicit0, Explicit) :-
    (
        ( Explicit0 = int_import(IntContext)
        ; Explicit0 = int_use(IntContext)
        ; Explicit0 = int_use_imp_import(IntContext, _ImpContext)
        ),
        Explicit = int_use(IntContext)
    ;
        ( Explicit0 = imp_import(ImpContext)
        ; Explicit0 = imp_use(ImpContext)
        ),
        ( if set.contains(ImpNeededModules, ModuleName) then
            Explicit = imp_use(ImpContext)
        else
            fail
        )
    ).

%---------------------%

:- type type_defn_map == one_or_more_map(type_ctor, item_type_defn_info).
:- type type_defn_pair == pair(type_ctor, item_type_defn_info).

:- pred record_type_defn_int(item_type_defn_info::in,
    set(foreign_language)::in, set(foreign_language)::out,
    type_defn_map::in, type_defn_map::out) is det.

record_type_defn_int(ItemTypeDefn, !IntImplicitFIMLangs, !IntTypesMap) :-
    ItemTypeDefn = item_type_defn_info(Name, TypeParams, TypeDefn, _, _, _),
    TypeCtor = type_ctor(Name, list.length(TypeParams)),
    (
        TypeDefn = parse_tree_foreign_type(DetailsForeign),
        DetailsForeign = type_details_foreign(ForeignType, _, _),
        Lang = foreign_type_language(ForeignType),
        set.insert(Lang, !IntImplicitFIMLangs)
    ;
        ( TypeDefn = parse_tree_abstract_type(_)
        ; TypeDefn = parse_tree_du_type(_)
        ; TypeDefn = parse_tree_eqv_type(_)
        ; TypeDefn = parse_tree_solver_type(_)
        )
    ),
    one_or_more_map.add(TypeCtor, ItemTypeDefn, !IntTypesMap).

:- pred record_type_defn_imp(item_type_defn_info::in,
    type_defn_map::in, type_defn_map::out) is det.

record_type_defn_imp(ItemTypeDefn, !ImpTypesMap) :-
    % We don't add this to the final item cord we intend to put
    % into the interface file yet -- we may be removing it.
    % If we *do* want the items for a given type_ctor, we will create
    % new copies of the items from the type_ctor's entry in ImpTypesMap.
    % We do however gather it for use in checking the type definitions
    % in the module.
    ItemTypeDefn = item_type_defn_info(Name, TypeParams, TypeDefn, _, _, _),
    TypeCtor = type_ctor(Name, list.length(TypeParams)),
    (
        TypeDefn = parse_tree_solver_type(_),
        % generate_pre_grab_pre_qual_items_imp has replace solver
        % type definitions with a dummy definition, and we want
        % to put that dummy definition into !OrigImpTypeDefnsCord
        % so that we don't generate inappropriate error messages
        % about the solver type being declared but not defined.
        % On the other hand, we want to put just a declaration,
        % not a definition, of the solver type into .int and .int2 files.
        TypeDefn1 = parse_tree_abstract_type(abstract_solver_type),
        ItemTypeDefn1 = ItemTypeDefn ^ td_ctor_defn := TypeDefn1
    ;
        ( TypeDefn = parse_tree_abstract_type(_)
        ; TypeDefn = parse_tree_du_type(_)
        ; TypeDefn = parse_tree_eqv_type(_)
        ; TypeDefn = parse_tree_foreign_type(_)
        ),
        ItemTypeDefn1 = ItemTypeDefn
    ),
    one_or_more_map.add(TypeCtor, ItemTypeDefn1, !ImpTypesMap).

:- pred record_modules_needed_by_typeclass_imp(item_typeclass_info::in,
    set(module_name)::in, set(module_name)::out) is det.

record_modules_needed_by_typeclass_imp(ItemTypeClass,
        !ImpModulesNeededByTypeClassDefns) :-
    % The superclass constraints on the typeclass being declared
    % may refer to typeclasses that this module has imported.
    Constraints = ItemTypeClass ^ tc_superclasses,
    list.foldl(accumulate_modules_from_constraint, Constraints,
        !ImpModulesNeededByTypeClassDefns).

:- pred record_implicit_fim_lang_for_foreign_enum_imp(
    item_foreign_enum_info::in,
    set(foreign_language)::in, set(foreign_language)::out) is det.

record_implicit_fim_lang_for_foreign_enum_imp(ItemForeignEnum,
        !ImpImplicitFIMLangs) :-
    ItemForeignEnum = item_foreign_enum_info(Lang, _, _, _, _),
    set.insert(Lang, !ImpImplicitFIMLangs).

:- pred keep_promise_item_int(item_promise_info::in) is semidet.

keep_promise_item_int(ItemPromise) :-
    PromiseType = ItemPromise ^ prom_type,
    require_complete_switch [PromiseType]
    (
        PromiseType = promise_type_true,
        fail
    ;
        ( PromiseType = promise_type_exclusive
        ; PromiseType = promise_type_exhaustive
        ; PromiseType = promise_type_exclusive_exhaustive
        )
    ).

%---------------------------------------------------------------------------%

:- pred accumulate_modules_from_constraint(prog_constraint::in,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_modules_from_constraint(Constraint, !Modules) :-
    Constraint = constraint(ClassName, ArgTypes),
    (
        ClassName = qualified(ModuleName, _),
        set.insert(ModuleName, !Modules)
    ;
        ClassName = unqualified(_),
        unexpected($pred, "unknown typeclass in constraint")
    ),
    accumulate_modules_from_types(ArgTypes, !Modules).

:- pred accumulate_modules_from_types(list(mer_type)::in,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_modules_from_types([], !Modules).
accumulate_modules_from_types([Type | Types], !Modules) :-
    accumulate_modules_from_type(Type, !Modules),
    accumulate_modules_from_types(Types, !Modules).

:- pred accumulate_modules_from_type(mer_type::in,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_modules_from_type(Type, !Modules) :-
    (
        % Do nothing for these types - they cannot affect the set of
        % implementation imports in an interface file.
        ( Type = type_variable(_, _)
        ; Type = builtin_type(_)
        )
    ;
        Type = defined_type(TypeName, ArgTypes, _),
        det_sym_name_get_module_name(TypeName, ModuleName),
        set.insert(ModuleName, !Modules),
        accumulate_modules_from_types(ArgTypes, !Modules)
    ;
        Type = kinded_type(KindedType, _),
        accumulate_modules_from_type(KindedType, !Modules)
    ;
        ( Type = tuple_type(ArgTypes, _)
        ; Type = apply_n_type(_, ArgTypes, _)
        ; Type = higher_order_type(_, ArgTypes, _HOInstInfo, _, _)
        ),
        % XXX ITEM_LIST accumulate modules from _HOInstInfo
        accumulate_modules_from_types(ArgTypes, !Modules)
    ).

%---------------------------------------------------------------------------%

    % get_requirements_of_imp_exported_types(IntTypesMap, ImpTypesMap,
    %   BothTypesMap, NeededTypeCtors, ModulesNeededByTypeDefns):
    %
    % Compute NeededTypeCtors, the set of type constructors whose definitions
    % we need to keep in the implementation section of the .int file
    % (in their original or abstract form), and ModulesNeededByTypeDefns,
    % the set of modules whose :- import_module and :- use_module declarations
    % we need to keep because they define type_ctors used in these kept
    % type definitions.
    %
    % We do this using two passes.
    %
    % In the first pass, we process every type with a definition in the
    % implementation.
    %
    % - If that definition is equivalence type definition, and there is
    %   any definition of that same type_ctor in the interface (presumably
    %   but necessarily as an abstract type), then include the type_ctor
    %   in AbsExpEqvLhsTypeCtors. We include these type_ctors in
    %   NeededImpTypeCtors because on 32-bit platforms, if type t1 is
    %   defined to be equivalent to a 64 bit float, then we need to take
    %   this into account when deciding the representation of types
    %   with t1 fields even if type t1 is abstract exported.
    %   XXX TYPE_REPN We should convey this info in type_repn items,
    %   not type_defn items, since the latter can be used for purposes
    %   other than type representation.
    %
    % - We handle foreign type definitions the same way as equivalence type
    %   definitions, just in case the foreign type is also bigger than a word.
    %   XXX TYPE_REPN Again, this info should be in a type_repn item.
    %   XXX TYPE_REPN Shouldn't boxing make the size of the foreign type
    %   immaterial?
    %
    % - If the definition defines an enum type, and there is a definition
    %   of the same type_ctor in the interface, we include the type_ctor in
    %   AbsExpEnumTypeCtors. This is so that when we abstract export
    %   the type_ctor, we can record that its size is less than one word.
    %   XXX TYPE_REPN Again, this info should be in a type_repn item.
    %
    % - If the definition defines a dummy type, we include the type_ctor in
    %   DirectDummyTypeCtors. XXX ITEM_LIST Presumably (by me -zs) this is
    %   so that when we abstract export them, we can record that it needs
    %   no storage. XXX However, we currently include dummy types in the
    %   implementation section of the .int file unchanged, and we do so
    %   even if the type is not mentioned in the interface section at all.
    %   XXX TYPE_REPN Again, this info should be in a type_repn item.
    %
    % The first pass ignores all other type definitions.
    %
    % The second pass processes the type_ctors in AbsExpEqvLhsTypeCtors,
    % i.e. the abstract exported type_ctors which have an equivalence type
    % or foreign type definition in the implementation section. Its job
    % is to compute three sets.
    %
    % - The first set is AbsExpEqvRhsTypeCtors, the set of type_ctors
    %   that occur in any (partial or full) expansion of an equivalence type
    %   in AbsExpEqvLhsTypeCtors. This means that if e.g. type t2 is abstract
    %   exported and its definition in the implementation section is
    %
    %       :- type t2 == t3(t4, t5).
    %       :- type t3(A, B) ---> ... a discriminated union definition ...
    %       :- type t4 --->       ... a discriminated union definition ...
    %       :- type t5 == t6.
    %       :- type t6 --->       ... a discriminated union definition ...
    %
    %   then we return {t2, t3, t4, t5, t6} as AbsExpEqvRhsTypeCtors.
    %
    % - The second set is DuArgTypeCtors, the set of type_ctors that occur
    %   on the right hand side (i.e. among the field argument types) of
    %   a discriminated union definition of a type_ctor that is in
    %   AbsExpEqvLhsTypeCtors, which should happen only that type_ctor
    %   also has foreign language definitions (since we put a type_ctor
    %   into AbsExpEqvLhsTypeCtors only if it has either an equivalence
    %   or a foreign language definition). If these type_ctors are not
    %   otherwise included in the .int file, this will cause our caller
    %   to include an abstract declaration of these type_ctors in the
    %   .int file, to disambiguate the references to these types
    %   in the full (in the sense of non-abstractified) du Mercury definitions
    %   we include in the .int file next to the foreign language definitions.
    %
    % - The third set we return is ModulesNeededByTypeDefns, which consists
    %   of the names of the modules that define the type_ctors in the first
    %   two sets.
    %
    % XXX ITEM_LIST The comment lines starting with a double percent
    % are the comment on the original version of this predicate.
    %
    %% Figure out the set of abstract equivalence type constructors (i.e.
    %% the types that are exported as abstract types and which are defined
    %% in the implementation section as equivalence types or as foreign types).
    %% Return in NeededTypeCtors the smallest set containing those
    %% constructors, and the set of private type constructors referred to
    %% by the right hand side of any type in NeededTypeCtors.
    %%
    %% XXX Return in DirectDummyTypeCtors the set of dummy type constructors.
    %%
    %% Given a du type definition in the implementation section, we should
    %% include it in AbsImpExpLhsTypeCtors if the type constructor is abstract
    %% exported and the implementation section also contains a foreign_type
    %% definition of the type constructor.
    %%
    %% Given a enumeration type definition in the implementation section, we
    %% should include it in AbsImpExpEnumTypeCtors if the type constructor is
    %% abstract exported.
    %%
    %% Return in NeededModules the set of modules that define the type
    %% constructors in NeededTypeCtors.
    %
:- pred get_requirements_of_imp_exported_types(type_defn_map::in,
    type_defn_map::in, type_defn_map::in,
    set(type_ctor)::out, set(module_name)::out) is det.

get_requirements_of_imp_exported_types(IntTypesMap, ImpTypesMap,
        BothTypesMap, NeededImpTypeCtors, ModulesNeededByTypeDefns) :-
    map.foldl3(
        accumulate_abs_imp_exported_type_lhs(IntTypesMap, BothTypesMap),
        ImpTypesMap, set.init, AbsExpEqvLhsTypeCtors,
        set.init, AbsExpEnumTypeCtors, set.init, DirectDummyTypeCtors),
    set.fold3(accumulate_abs_imp_exported_type_rhs(ImpTypesMap),
        AbsExpEqvLhsTypeCtors,
        set.init, AbsExpEqvRhsTypeCtors, set.init, DuArgTypeCtors,
        set.init, ModulesNeededByTypeDefns),
    NeededImpTypeCtors = set.union_list([AbsExpEqvLhsTypeCtors,
        AbsExpEqvRhsTypeCtors, AbsExpEnumTypeCtors, DirectDummyTypeCtors,
        DuArgTypeCtors]).

:- pred accumulate_abs_imp_exported_type_lhs(type_defn_map::in,
    type_defn_map::in, type_ctor::in, one_or_more(item_type_defn_info)::in,
    set(type_ctor)::in, set(type_ctor)::out,
    set(type_ctor)::in, set(type_ctor)::out,
    set(type_ctor)::in, set(type_ctor)::out) is det.

accumulate_abs_imp_exported_type_lhs(IntTypesMap, BothTypesMap,
        TypeCtor, ImpItemTypeDefnInfos, !AbsExpEqvLhsTypeCtors,
        !AbsExpEnumTypeCtors, !DirectDummyTypeCtors) :-
    ImpItemTypeDefnInfos =
        one_or_more(HeadImpItemTypeDefnInfo, TailImpItemTypeDefnInfos),
    (
        TailImpItemTypeDefnInfos = [],
        % Don't construct a closure when a type_ctor has only one definition
        % in the implementation section, since this the common case.
        accumulate_abs_imp_exported_type_lhs_in_defn(IntTypesMap, BothTypesMap,
            TypeCtor, HeadImpItemTypeDefnInfo,
            !AbsExpEqvLhsTypeCtors, !AbsExpEnumTypeCtors,
            !DirectDummyTypeCtors)
    ;
        TailImpItemTypeDefnInfos = [_ | _],
        % A type may have multiple definitions in the implementation section
        % because it may be defined both in Mercury and in a foreign language.
        % A type with multiple definitions doesn't typically include
        % an equivalence type among those definitions, but we have to be
        % prepared for such an eventuality anyway.
        one_or_more.foldl3(
            accumulate_abs_imp_exported_type_lhs_in_defn(IntTypesMap,
                BothTypesMap, TypeCtor),
            ImpItemTypeDefnInfos,
            !AbsExpEqvLhsTypeCtors, !AbsExpEnumTypeCtors,
            !DirectDummyTypeCtors)
    ).

:- pred accumulate_abs_imp_exported_type_lhs_in_defn(type_defn_map::in,
    type_defn_map::in, type_ctor::in, item_type_defn_info::in,
    set(type_ctor)::in, set(type_ctor)::out,
    set(type_ctor)::in, set(type_ctor)::out,
    set(type_ctor)::in, set(type_ctor)::out) is det.

accumulate_abs_imp_exported_type_lhs_in_defn(IntTypesMap, BothTypesMap,
        TypeCtor, ImpItemTypeDefnInfo, !AbsExpEqvLhsTypeCtors,
        !AbsExpEnumTypeCtors, !DirectDummyTypeCtors) :-
    ImpItemTypeDefnInfo = item_type_defn_info(_, _, ImpTypeDefn, _, _, _),
    (
        ImpTypeDefn = parse_tree_eqv_type(_),
        ( if map.search(IntTypesMap, TypeCtor, _) then
            set.insert(TypeCtor, !AbsExpEqvLhsTypeCtors)
        else
            true
        )
    ;
        ImpTypeDefn = parse_tree_foreign_type(_),
        ( if map.search(IntTypesMap, TypeCtor, _) then
            % XXX ITEM_LIST This looks like a lost opportunity to me (zs),
            % because the only foreign types that *need* the same treatment
            % as equivalence types are foreign types that are bigger than
            % one word in size. The ones that have can_pass_as_mercury_type
            % as an attribute are supposed to fit into one word (though
            % that assertion may be valid for some platforms only) and thus
            % *could* be left out of !AbsExpEqvLhsTypeCtors.
            %
            % However, before making such a change, consider everything
            % in the discussion on this topic on m-rev on 2019 feb 18-19.
            set.insert(TypeCtor, !AbsExpEqvLhsTypeCtors)
        else
            true
        )
    ;
        ImpTypeDefn = parse_tree_du_type(DetailsDu),
        DetailsDu = type_details_du(OoMCtors, MaybeEqCmp, MaybeDirectArgCtors),
        ( if
            map.search(IntTypesMap, TypeCtor, _),
            du_type_is_enum(DetailsDu, _NumFunctors)
        then
            set.insert(TypeCtor, !AbsExpEnumTypeCtors)
        else if
            % XXX ITEM_LIST Why don't we insist that TypeCtor occurs
            % in IntTypesMap?
            % XXX ITEM_LIST If a type has one function symbol with arity one
            % and the argument type is equivalent to a dummy type that is
            % defined in another module, we will NOT include TypeCtor in
            % !DirectDummyTypeCtors, since we won't know enough about
            % the contents of the other module.
            constructor_list_represents_dummy_type(BothTypesMap, OoMCtors,
                MaybeEqCmp, MaybeDirectArgCtors)
        then
            set.insert(TypeCtor, !DirectDummyTypeCtors)
        else
            true
        )
    ;
        ( ImpTypeDefn = parse_tree_abstract_type(_)
        ; ImpTypeDefn = parse_tree_solver_type(_)
        )
    ).

:- pred accumulate_abs_imp_exported_type_rhs(type_defn_map::in, type_ctor::in,
    set(type_ctor)::in, set(type_ctor)::out,
    set(type_ctor)::in, set(type_ctor)::out,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_abs_imp_exported_type_rhs(ImpTypesMap, TypeCtor,
        !AbsExpEqvRhsTypeCtors, !DuArgTypeCtors, !ModulesNeededByTypeDefns) :-
    ( if map.search(ImpTypesMap, TypeCtor, ImpTypeDefns) then
        one_or_more.foldl3(
            accumulate_abs_eqv_type_rhs_in_defn(ImpTypesMap),
            ImpTypeDefns,
            !AbsExpEqvRhsTypeCtors, !DuArgTypeCtors, !ModulesNeededByTypeDefns)
    else
        % TypeCtor is not defined in the implementation section
        % of this module.
        true
    ).

:- pred accumulate_abs_eqv_type_rhs_in_defn(type_defn_map::in,
    item_type_defn_info::in,
    set(type_ctor)::in, set(type_ctor)::out,
    set(type_ctor)::in, set(type_ctor)::out,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_abs_eqv_type_rhs_in_defn(ImpTypesMap, ImpItemTypeDefnInfo,
        !AbsExpEqvRhsTypeCtors, !DuArgTypeCtors, !ModulesNeededByTypeDefns) :-
    ImpItemTypeDefnInfo = item_type_defn_info(_, _, ImpTypeDefn, _, _, _),
    (
        ImpTypeDefn = parse_tree_eqv_type(DetailsEqv),
        DetailsEqv = type_details_eqv(RhsType),
        type_to_user_type_ctor_set(RhsType, set.init, RhsTypeCtors),

        % Logically, we want to invoke the call to set.union and the
        % calls to set.foldl/foldl3 below on all RhsTypeCtors. However, for
        % any type_ctor in RhsTypeCtors that is in !.AbsExpEqvRhsTypeCtors,
        % we have alteady done so, and since all three operations are
        % idempotent, there is no point in invoking them again.
        set.difference(RhsTypeCtors, !.AbsExpEqvRhsTypeCtors, NewRhsTypeCtors),
        set.union(NewRhsTypeCtors, !AbsExpEqvRhsTypeCtors),
        set.fold(accumulate_modules_used_by_type_ctor, NewRhsTypeCtors,
            !ModulesNeededByTypeDefns),
        % XXX ITEM_LIST I (zs) *think* that the reason why we ignore the
        % result of the second accumulator (!DuArgTypeCtors) in this call
        % is because the appearance of a type_ctor in RhsTypeCtors
        % on the right hand side of an equivalence type definition
        % will (by itself) only generate an abstract definition for that
        % type_ctor in the .int file, so other modules need not know about
        % any type_ctors just because they appear on the right hand side
        % of *its* definition. However, I am far from sure.
        set.fold3(accumulate_abs_imp_exported_type_rhs(ImpTypesMap),
            NewRhsTypeCtors,
            !AbsExpEqvRhsTypeCtors, set.init, _, !ModulesNeededByTypeDefns)
    ;
        ImpTypeDefn = parse_tree_du_type(DetailsDu),
        DetailsDu = type_details_du(OoMCtors, _, _),
        % There must exist a foreign type alternative to this type.
        % XXX ITEM_LIST I (zs) would like to see a proof argument for that,
        % since I don't think it is true. Unfortunately, we cannot check it
        % locally.

        % As the du type will be exported, we require all the type_ctors
        % inside all the argument types of all the data constructors, and the
        % modules that define them.
        ctors_to_user_type_ctor_set(one_or_more_to_list(OoMCtors),
            set.init, RhsTypeCtors),
        set.union(RhsTypeCtors, !DuArgTypeCtors),
        set.fold(accumulate_modules_used_by_type_ctor, RhsTypeCtors,
            !ModulesNeededByTypeDefns)
    ;
        ( ImpTypeDefn = parse_tree_abstract_type(_)
        ; ImpTypeDefn = parse_tree_solver_type(_)
        ; ImpTypeDefn = parse_tree_foreign_type(_)
        )
    ).

%---------------------%

:- pred accumulate_modules_used_by_type_ctor(type_ctor::in,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_modules_used_by_type_ctor(TypeCtor, !Modules) :-
    TypeCtor = type_ctor(SymName, _Arity),
    (
        SymName = qualified(ModuleName, _),
        set.insert(ModuleName, !Modules)
    ;
        SymName = unqualified(_)
        % Our ancestor generate_interfaces_int1_int2 should be invoked
        % only *after* the module qualification of the augmented compilation
        % unit whose contents we are now processing, and the module
        % qualification pass would have generated an error message
        % for this cannot-be-uniquely-qualified name. However, if the option
        % print_errors_warnings_when_generating_interface is off, as it is
        % by default, then the compiler ignores that error, and proceeds
        % to call generate_interfaces_int1_int2 above, which calls us
        % indirectly.
    ).

%---------------------%

    % Given a type, return the set of user-defined type constructors
    % occurring in it. We do not gather the type constructors of
    % builtin types, higher-order types and typle types, because
    % are always available without any module needing to be imported,
    % which is what our caller uses our results for.
    %
:- pred type_to_user_type_ctor_set(mer_type::in,
    set(type_ctor)::in, set(type_ctor)::out) is det.

type_to_user_type_ctor_set(Type, !TypeCtors) :-
    ( if type_to_ctor_and_args(Type, TypeCtor, ArgTypes) then
        TypeCtor = type_ctor(SymName, _Arity),
        ( if
            ( is_builtin_type_sym_name(SymName)
            ; type_ctor_is_higher_order(TypeCtor, _, _, _)
            ; type_ctor_is_tuple(TypeCtor)
            )
        then
            true
        else
            set.insert(TypeCtor, !TypeCtors)
        ),
        list.foldl(type_to_user_type_ctor_set, ArgTypes, !TypeCtors)
    else
        true
    ).

:- pred ctors_to_user_type_ctor_set(list(constructor)::in,
    set(type_ctor)::in, set(type_ctor)::out) is det.

ctors_to_user_type_ctor_set([], !TypeCtors).
ctors_to_user_type_ctor_set([Ctor | Ctors], !TypeCtors) :-
    Ctor = ctor(_, _, _, CtorArgs, _, _),
    ctor_args_to_user_type_ctor_set(CtorArgs, !TypeCtors),
    ctors_to_user_type_ctor_set(Ctors, !TypeCtors).

:- pred ctor_args_to_user_type_ctor_set(list(constructor_arg)::in,
    set(type_ctor)::in, set(type_ctor)::out) is det.

ctor_args_to_user_type_ctor_set([], !TypeCtors).
ctor_args_to_user_type_ctor_set([Arg | Args], !TypeCtors) :-
    Arg = ctor_arg(_, Type, _),
    type_to_user_type_ctor_set(Type, !TypeCtors),
    ctor_args_to_user_type_ctor_set(Args, !TypeCtors).

%---------------------%

    % Certain types, e.g. io.state and store.store(S), are just dummy types
    % used to ensure logical semantics; there is no need to actually pass them,
    % and so when importing or exporting procedures to/from C, we don't include
    % arguments with these types.
    %
    % See the documentation for `type_util.check_dummy_type' for the definition
    % of a dummy type.
    %
    % NOTE: changes here may require changes to `type_util.check_dummy_type'.
    %
:- pred constructor_list_represents_dummy_type(type_defn_map::in,
    one_or_more(constructor)::in, maybe_canonical::in,
    maybe(list(sym_name_arity))::in) is semidet.

constructor_list_represents_dummy_type(TypeDefnMap,
        OoMCtors, MaybeCanonical, MaybeDirectArgCtors) :-
    constructor_list_represents_dummy_type_2(TypeDefnMap,
        OoMCtors, MaybeCanonical, MaybeDirectArgCtors, []).

:- pred constructor_list_represents_dummy_type_2(type_defn_map::in,
    one_or_more(constructor)::in, maybe_canonical::in,
    maybe(list(sym_name_arity))::in, list(mer_type)::in) is semidet.

constructor_list_represents_dummy_type_2(TypeDefnMap, OoMCtors,
        canon, no, CoveredTypes) :-
    OoMCtors = one_or_more(Ctor, []),
    Ctor = ctor(_Ordinal, MaybeExistConstraints, _Name, CtorArgs, _Arity,
        _Context),
    MaybeExistConstraints = no_exist_constraints,
    (
        % A single zero-arity constructor.
        CtorArgs = []
    ;
        % A constructor with a single dummy argument.
        CtorArgs = [ctor_arg(_, ArgType, _)],
        ctor_arg_is_dummy_type(TypeDefnMap, ArgType, CoveredTypes) = yes
    ).

:- func ctor_arg_is_dummy_type(type_defn_map, mer_type, list(mer_type)) = bool.

ctor_arg_is_dummy_type(TypeDefnMap, Type, CoveredTypes0) = IsDummyType :-
    (
        Type = defined_type(SymName, TypeArgs, _Kind),
        ( if list.member(Type, CoveredTypes0) then
            % The type is circular.
            IsDummyType = no
        else
            Arity = list.length(TypeArgs),
            TypeCtor = type_ctor(SymName, Arity),
            ( if
                (
                    is_type_ctor_a_builtin_dummy(TypeCtor)
                        = is_builtin_dummy_type_ctor
                ;
                    % Can we find a definition of the type that tells us
                    % it is a dummy type?
                    one_or_more_map.search(TypeDefnMap, TypeCtor,
                        ItemTypeDefnInfos),
                    one_or_more.member(ItemTypeDefnInfo, ItemTypeDefnInfos),
                    TypeDefn = ItemTypeDefnInfo ^ td_ctor_defn,
                    TypeDefn = parse_tree_du_type(DetailsDu),
                    DetailsDu = type_details_du(OoMCtors, MaybeEqCmp,
                        MaybeDirectArgCtors),
                    constructor_list_represents_dummy_type_2(TypeDefnMap,
                        OoMCtors, MaybeEqCmp, MaybeDirectArgCtors,
                        [Type | CoveredTypes0])
                )
            then
                IsDummyType = yes
            else
                IsDummyType = no
            )
        )
    ;
        ( Type = type_variable(_, _)
        ; Type = builtin_type(_)
        ; Type = tuple_type(_, _)
        ; Type = higher_order_type(_, _, _, _, _)
        ; Type = apply_n_type(_, _, _)
        ),
        IsDummyType = no
    ;
        Type = kinded_type(_, _),
        unexpected($pred, "kinded_type")
    ).

%---------------------%

    % Given a type constructor's type definitions from the implementation
    % section, as recorded in ImpTypesMap, include their abstract versions
    % in !ImpTypeDefnItems, the list of type definition items scheduled to be
    % added back to the implementation section, *provided* that
    %
    % - the type constructor is in NeededTypeCtors, and
    %
    % - *either* the type has no declaration or definition in the interface,
    %   *or* at least one of the type definitions in the implementation section
    %   contains more information than a pure abstract type declaration
    %   (such as may be found in the interface section) would.
    %
    % By "pure abstract" type declarations, we mean abstract type
    % declarations that give no further implementation. This means that
    % `type_is_abstract_enum' declarations are not *pure* abstract.
    % XXX ITEM_LIST I (zs) believe that the intention behind this proviso
    % was to allow items representing the following scenario to be left
    % alone:
    %
    % :- interface.
    % :- type t1.
    % ...
    % :- implementation.
    % :- type t1 where type_is_abstract_enum(...).
    %
    % XXX ITEM_LIST Just because *one* definition in the implementation has
    % more info than a pure abstract type declaration *should not* result in
    % us adding back to the implementation section any other type definitions
    % that *do* represent nothing more than a pure abstract type declaration.
    % Note that this distinction should matter only for types whose set of
    % definitions are erroneous, such a type that is defined both as
    % an equivalence type and as a du type.
    %
:- pred maybe_add_maybe_abstract_type_defns(
    type_defn_map::in, type_defn_map::in, set(type_ctor)::in,
    type_ctor::in, one_or_more(item_type_defn_info)::in,
    list(item_type_defn_info)::in, list(item_type_defn_info)::out,
    set(foreign_language)::in, set(foreign_language)::out) is det.

maybe_add_maybe_abstract_type_defns(BothTypesMap, IntTypesMap, NeededTypeCtors,
        TypeCtor, ImpItemTypeDefnInfos, !ImpTypeDefns, !ImpImplicitFIMLangs) :-
    ( if
        set.member(TypeCtor, NeededTypeCtors),
        make_imp_types_abstract(BothTypesMap,
            ImpItemTypeDefnInfos, AbstractImpItemTypeDefnInfos),
        % This negated piece of code succeeds iff
        % EITHER the type is private,
        % OR it is abstract exported, and
        %   EITHER it has two or more definitions in the implementation
        %   OR it has at least one definition that is not general du.
        not (
            one_or_more_map.contains(IntTypesMap, TypeCtor),
            one_or_more.all_true(is_pure_abstract_type_defn,
                AbstractImpItemTypeDefnInfos)
        )
    then
        add_type_defn_items(one_or_more_to_list(AbstractImpItemTypeDefnInfos),
            !ImpTypeDefns, !ImpImplicitFIMLangs)
    else
        true
    ).

:- pred is_pure_abstract_type_defn(item_type_defn_info::in) is semidet.

is_pure_abstract_type_defn(ImpItemTypeDefnInfo) :-
    ImpItemTypeDefnInfo ^ td_ctor_defn = parse_tree_abstract_type(Details),
    % XXX ITEM_LIST This test may do the wrong thing for
    % abstract_{dummy,notag,solver}_types, once we start generating them.
    Details \= abstract_type_fits_in_n_bits(_).

:- pred make_imp_types_abstract(type_defn_map::in,
    one_or_more(item_type_defn_info)::in,
    one_or_more(item_type_defn_info)::out) is det.

make_imp_types_abstract(BothTypesMap, !ImpItemTypeDefnInfos) :-
    !.ImpItemTypeDefnInfos =
        one_or_more(HeadImpItemTypeDefnInfo0, TailImpItemTypeDefnInfos0),
    (
        TailImpItemTypeDefnInfos0 = [],
        make_imp_type_abstract(BothTypesMap,
            HeadImpItemTypeDefnInfo0, HeadImpItemTypeDefnInfo),
        !:ImpItemTypeDefnInfos = one_or_more(HeadImpItemTypeDefnInfo, [])
    ;
        TailImpItemTypeDefnInfos0 = [_ | _]
        % This type constructor has two or more definitions, which is
        % an error, but it should be reported somewhere else.
        % XXX This is not true. It is perfectly ok for a type constructor
        % to have one Mercury definition as a du type and several foreign
        % language definitions. For these, we probably *should* process
        % the du definition as above.
        % XXX TYPE_REPN In such cases, we should consider replacing
        % the foreign definitions with a new kind of internal-use-only item
        % that records the presence of foreign type definitions for the type,
        % and lists, for each foreign language with a definition, the
        % assertions from that definition, but no more.
    ).

:- pred make_imp_type_abstract(type_defn_map::in,
    item_type_defn_info::in, item_type_defn_info::out) is det.

make_imp_type_abstract(BothTypesMap, !ImpItemTypeDefnInfo) :-
    % XXX TYPE_REPN We should record the aspects of the type definition
    % that are relevant to type representation (such as "is dummy",
    % "fits in n bits", "is equivalent to ...") in a type_repn item,
    % and then make the type definition abstract.
    !.ImpItemTypeDefnInfo = item_type_defn_info(_, _, TypeDefn0, _, _, _),
    (
        TypeDefn0 = parse_tree_du_type(DetailsDu0),
        DetailsDu0 = type_details_du(OoMCtors, MaybeEqCmp,
            MaybeDirectArgCtors),
        ( if
            constructor_list_represents_dummy_type(BothTypesMap,
                OoMCtors, MaybeEqCmp, MaybeDirectArgCtors)
        then
            % Leave dummy types alone.
            true
        else
            ( if du_type_is_enum(DetailsDu0, NumFunctors) then
                num_bits_needed_for_n_values(NumFunctors, NumBits),
                DetailsAbs = abstract_type_fits_in_n_bits(NumBits)
            else
                DetailsAbs = abstract_type_general
            ),
            TypeDefn = parse_tree_abstract_type(DetailsAbs),
            !ImpItemTypeDefnInfo ^ td_ctor_defn := TypeDefn
        )
    ;
        TypeDefn0 = parse_tree_eqv_type(_)
        % XXX TYPE_REPN We currently leave the type definition alone.
        % However, in the future we should test whether the type
        % equivalence is to a type that requires special treatment,
        % either with respect to type representation (because it is smaller
        % than a word, because it is bigger than a word, or because it is
        % guaranteed to be an aligned pointer) or because it needs to be
        % passed in an FP register.
        %
        % If the type does require special treatment, we should generate
        % an item that specifies that treatment, and no more.
        % If the type does not require special treatment, we should
        % generate an item that specifies the absence of a need for
        % special treatment: a simple abstract type definition
        % should suffice.
    ;
        TypeDefn0 = parse_tree_foreign_type(_)
    ;
        TypeDefn0 = parse_tree_abstract_type(_)
        % This type is already abstract.
    ;
        TypeDefn0 = parse_tree_solver_type(_),
        % generate_pre_grab_pre_qual_items_imp should have already made
        % this type abstract.
        unexpected($pred, "solver type should have been made abstract")
    ).

:- pred add_type_defn_items(list(item_type_defn_info)::in,
    list(item_type_defn_info)::in, list(item_type_defn_info)::out,
    set(foreign_language)::in, set(foreign_language)::out) is det.

add_type_defn_items([], !RevImpTypeDefns, !ImpImplicitFIMLangs).
add_type_defn_items([ImpTypeDefn | ImpTypeDefns],
        !RevImpTypeDefns, !ImpImplicitFIMLangs) :-
    !:RevImpTypeDefns = [ImpTypeDefn | !.RevImpTypeDefns],
    ImpTypeDefn = item_type_defn_info(_, _, TypeDefn, _, _, _),
    ( if
        TypeDefn = parse_tree_foreign_type(DetailsForeign),
        DetailsForeign = type_details_foreign(ForeignType, _, _)
    then
        set.insert(foreign_type_language(ForeignType), !ImpImplicitFIMLangs)
    else
        true
    ),
    add_type_defn_items(ImpTypeDefns, !RevImpTypeDefns, !ImpImplicitFIMLangs).

%---------------------%

:- pred add_foreign_enum_item_if_needed(type_defn_map::in,
    item_foreign_enum_info::in,
    list(item_foreign_enum_info)::in, list(item_foreign_enum_info)::out,
    set(foreign_language)::in, set(foreign_language)::out) is det.

add_foreign_enum_item_if_needed(IntTypesMap, ForeignEnumItem,
        !ImpForeignEnumItems, !ImpImplicitFIMLangs) :-
    ForeignEnumItem = item_foreign_enum_info(Lang, TypeCtor, _, _, _),
    ( if
        map.search(IntTypesMap, TypeCtor, Defns),
        some_type_defn_is_non_abstract(one_or_more_to_list(Defns))
    then
        !:ImpForeignEnumItems = [ForeignEnumItem | !.ImpForeignEnumItems],
        set.insert(Lang, !ImpImplicitFIMLangs)
    else
        true
    ).

:- pred some_type_defn_is_non_abstract(list(item_type_defn_info)::in)
    is semidet.

some_type_defn_is_non_abstract([Defn | Defns]) :-
    Defn = item_type_defn_info(_, _, Body, _, _, _),
    ( if Body = parse_tree_abstract_type(_) then
        some_type_defn_is_non_abstract(Defns)
    else
        true
    ).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

    % generate_interface_int2(Globals, AugCompUnit,
    %   IntIncludeMap, IntImportUseMap,
    %   IntExplicitFIMSpecs, ImpExplicitFIMSpecs,
    %   IntTypeDefnItems, IntInstDefns, IntModeDefns,
    %   IntTypeClasses, IntInstances, ImpTypeDefnItems, TypeCtorCheckedMap,
    %   ParseTreeInt2):
    %
    % The input arguments should be the relevant parts of the .int1 file
    % computed by our parent.
    %
:- pred generate_interface_int2(aug_compilation_unit::in,
    module_names_contexts::in, set(fim_spec)::in, set(fim_spec)::in,
    list(item_type_defn_info)::in,
    list(item_inst_defn_info)::in, list(item_mode_defn_info)::in,
    list(item_typeclass_info)::in, list(item_instance_info)::in,
    list(item_type_defn_info)::in,
    type_ctor_checked_map::in, parse_tree_int2::out) is det.

generate_interface_int2(AugCompUnit, IntImportUseMap,
        IntExplicitFIMSpecs, ImpExplicitFIMSpecs,
        IntTypeDefns, IntInstDefns, IntModeDefns, IntTypeClasses, IntInstances,
        ImpTypeDefns, TypeCtorCheckedMap, ParseTreeInt2) :-
    AugCompUnit = aug_compilation_unit(ModuleName, ModuleNameContext, _,
        ParseTreeModuleSrc, _, _, _, _, _, _),

    IntInclMap = ParseTreeModuleSrc ^ ptms_int_includes,
    InclMap = ParseTreeModuleSrc ^ ptms_include_map,
    map.foldl(add_only_int_include, InclMap, map.init, ShortInclMap),

    % XXX CLEANUP start from ParseTreeModuleSrc, not from
    % ParseTreeInt1's components, where these are the same.
    some [!UnqualSymNames, !UsedModuleNames] (
        !:UnqualSymNames = no_unqual_symnames,
        set.init(!:UsedModuleNames),

        get_int2_items_from_int1_int_type_defn(IntTypeDefns,
            !UnqualSymNames, !UsedModuleNames,
            cord.init, ShortIntTypeDefnsCord,
            set.init, ShortIntImplicitFIMLangs),
        get_int2_items_from_int1_int_inst_defn(IntInstDefns,
            !UnqualSymNames, !UsedModuleNames),
        get_int2_items_from_int1_int_mode_defn(IntModeDefns,
            !UnqualSymNames, !UsedModuleNames),
        get_int2_items_from_int1_int_typeclass(IntTypeClasses,
            !UnqualSymNames, !UsedModuleNames,
            cord.init, ShortIntTypeClassesCord),
        get_int2_items_from_int1_int_instance(IntInstances,
            !UnqualSymNames, !UsedModuleNames,
            cord.init, ShortIntInstancesCord),

        ShortIntTypeDefns = cord.list(ShortIntTypeDefnsCord),
        ShortIntInstDefns = IntInstDefns,
        ShortIntModeDefns = IntModeDefns,
        ShortIntTypeClasses = cord.list(ShortIntTypeClassesCord),
        ShortIntInstances = cord.list(ShortIntInstancesCord),

        UnqualSymNames = !.UnqualSymNames,
        UsedModuleNames = !.UsedModuleNames
    ),

    get_int2_items_from_int1_imp_types(ImpTypeDefns,
        set.init, ShortImpImplicitFIMLangs),

    % XXX We should pass to decide_repns_for_simple_types not just
    % the type definitions in this module, but also all the type_REPNs
    % we have read in from the .int3 files of the imported modules.
    % That would allow decide_repns_for_simple_types to take into
    % account that an imported type (such as bool) is subword sized,
    % and that therefore some types that have fields of that type
    % may themselves be subword sized, if all their arguments are subword
    % sized and there are few enough of them. (Note that will in general
    % require fully expanding the relevant type equivalence chains.)
    decide_repns_for_simple_types_for_int3(ModuleName, TypeCtorCheckedMap,
        ShortIntTypeRepnMap),

    % We compute ShortIntUseMap from IntImportUseMap. IntImportUseMap
    % is the set of modules imported *or used* in the interface section
    % of the .int file. In the .int2 file, we replace all import_module
    % declarations with use_module declarations, which is why the Import part
    % of the name goes away. (The Short part of the new variable name refers
    % to the destination being the .int2 file.)
    (
        UnqualSymNames = no_unqual_symnames,
        % UsedModuleNames may contain references to implicitly imported
        % builtin modules, which we do not want to *explicitly* import.
        % Intersecting it with IntImportUseMap deletes these.
        one_or_more_map.select(IntImportUseMap, UsedModuleNames,
            ShortIntUseMap)
    ;
        UnqualSymNames = some_unqual_symnames,
        % Since some item did not get fully qualified, the module has an error.
        % If we deleted any element of IntImportUseMap, a compiler invocation
        % that read the .int2 file we are generating could print
        % an error message that points the blame at that modification,
        % rather than at the contents of the .m file we were given.
        ShortIntUseMap = IntImportUseMap
    ),
    ImportUseMap = ParseTreeModuleSrc ^ ptms_import_use_map,
    map.foldl(
        make_imports_into_uses_int_only_maybe_implicit(UnqualSymNames,
            UsedModuleNames),
        ImportUseMap, map.init, ShortImportUseMap),

    % If there is nothing involving a foreign language in the interface,
    % then we do not need either explicit or implicit FIMs for that
    % language in the interface.
    set.filter(fim_spec_is_for_needed_language(ShortIntImplicitFIMLangs),
        IntExplicitFIMSpecs, ShortIntExplicitFIMSpecs),
    set.foldl(add_self_fim(ModuleName), ShortIntImplicitFIMLangs,
        ShortIntExplicitFIMSpecs, ShortIntFIMSpecs),

    % The same is true for the implementation section, with two
    % differences. One is that the implementation section may need
    % a language that the interface does not, and there is an
    % explicit FIM for this language that we did not include
    % in the interface, we must include it in the implementation.
    % Second, we don't want to include a FIM in *both* the interface
    % and the implementation.
    set.union(IntExplicitFIMSpecs, ImpExplicitFIMSpecs, ExplicitFIMSpecs),
    set.filter(fim_spec_is_for_needed_language(ShortImpImplicitFIMLangs),
        ExplicitFIMSpecs, ShortImpExplicitFIMSpecs),
    set.foldl(add_self_fim(ModuleName), ShortImpImplicitFIMLangs,
        ShortImpExplicitFIMSpecs, ShortImpFIMSpecs0),
    set.difference(ShortImpFIMSpecs0, ShortIntFIMSpecs, ShortImpFIMSpecs),

    DummyMaybeVersionNumbers = no_version_numbers,

    % For now, we need the implementation sections of .int2 files to contain
    % all the information that other modules reading that .int file will need
    % to correctly decide the representation of the types exported by this
    % module.
    %
    % The computation we use to decide which types' type_defn items
    % need to stay in the implementation section of the .int file,
    % and in what form, computes exactly this information. Therefore
    % we need only the copy the type_defn items that this previous
    % computation has given us.
    %
    % XXX TYPE_REPN In the future, these type_defn items (which include
    % some for types that *shouldn't* be exported from the module)
    % should be replaced by type_repn items (for only the types which
    % *are* exported from the module).
    %
    % The implementation section of .int2 files needs no other items,
    % and when we switch to using type_repn items to decide type
    % representations, the implementation sections of .int2 files
    % should be empty (as are the implementation sections of .int3 files).
    %
    ShortImpTypeDefns = ImpTypeDefns,

    ShortIntTypeDefnMap = type_ctor_defn_items_to_map(ShortIntTypeDefns),
    ShortIntInstDefnMap = inst_ctor_defn_items_to_map(ShortIntInstDefns),
    ShortIntModeDefnMap = mode_ctor_defn_items_to_map(ShortIntModeDefns),
    ShortImpTypeDefnMap = type_ctor_defn_items_to_map(ShortImpTypeDefns),

    ParseTreeInt2 = parse_tree_int2(ModuleName, ModuleNameContext,
        DummyMaybeVersionNumbers,
        IntInclMap, ShortInclMap, ShortIntUseMap, ShortImportUseMap,
        ShortIntFIMSpecs, ShortImpFIMSpecs,
        ShortIntTypeDefnMap, ShortIntInstDefnMap, ShortIntModeDefnMap,
        ShortIntTypeClasses, ShortIntInstances, ShortIntTypeRepnMap,
        ShortImpTypeDefnMap).

%---------------------%

:- pred fim_spec_is_for_needed_language(set(foreign_language)::in,
    fim_spec::in) is semidet.

fim_spec_is_for_needed_language(NeededLangs, FIMSpec) :-
    FIMSpec = fim_spec(Lang, _ModuleName),
    set.contains(NeededLangs, Lang).

:- pred add_only_int_include(module_name::in, include_module_info::in,
    include_module_map::in, include_module_map::out) is det.

add_only_int_include(ModuleName, InclInfo, !IntInclMap) :-
    InclInfo = include_module_info(Section, _Context),
    (
        Section = ms_interface,
        map.det_insert(ModuleName, InclInfo, !IntInclMap)
    ;
        Section = ms_implementation
    ).

:- pred make_imports_into_uses_int_only_maybe_implicit(
    maybe_unqual_symnames::in, set(module_name)::in,
    module_name::in, maybe_implicit_import_and_or_use::in,
    import_and_or_use_map::in, import_and_or_use_map::out) is det.

make_imports_into_uses_int_only_maybe_implicit(UnqualSymNames, UsedModuleNames,
        ModuleName, ImportUse0, !ShortImportUseMap) :-
    ( if
        UnqualSymNames = no_unqual_symnames,
        not set.contains(UsedModuleNames, ModuleName)
    then
        % If every sym_name in the .int2 file is fully module qualified,
        % then we keep every use_module declarations only for the modules
        % that they name.
        % This requires UsedModuleNames to cover even implicitly used
        % module names.
        true
    else
        (
            ImportUse0 = explicit_avail(Explicit0),
            ( if make_imports_into_uses_int_only(Explicit0, Explicit) then
                ImportUse = explicit_avail(Explicit),
                map.det_insert(ModuleName, ImportUse, !ShortImportUseMap)
            else
                true
            )
        ;
            ImportUse0 = implicit_avail(Implicit0, MaybeExplicit0),
            ( if
                MaybeExplicit0 = yes(Explicit0),
                make_imports_into_uses_int_only(Explicit0, Explicit1)
            then
                MaybeExplicit = yes(Explicit1)
            else
                MaybeExplicit = no
            ),
            (
                ( Implicit0 = implicit_int_import
                ; Implicit0 = implicit_int_use
                ),
                Implicit = implicit_int_use,
                ImportUse = implicit_avail(Implicit, MaybeExplicit),
                map.det_insert(ModuleName, ImportUse, !ShortImportUseMap)
            ;
                Implicit0 = implicit_imp_use,
                (
                    MaybeExplicit = yes(Explicit),
                    ImportUse = explicit_avail(Explicit),
                    map.det_insert(ModuleName, ImportUse, !ShortImportUseMap)
                ;
                    MaybeExplicit = no
                )
            )
        )
    ).

:- pred make_imports_into_uses_int_only(section_import_and_or_use::in,
    section_import_and_or_use::out) is semidet.

make_imports_into_uses_int_only(Explicit0, Explicit) :-
    require_complete_switch [Explicit0]
    (
        ( Explicit0 = int_import(IntContext)
        ; Explicit0 = int_use(IntContext)
        ; Explicit0 = int_use_imp_import(IntContext, _ImpContext)
        ),
        Explicit = int_use(IntContext)
    ;
        ( Explicit0 = imp_import(_ImpContext)
        ; Explicit0 = imp_use(_ImpContext)
        ),
        fail
    ).

%---------------------%

:- pred get_int2_items_from_int1_int_type_defn(list(item_type_defn_info)::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out,
    cord(item_type_defn_info)::in, cord(item_type_defn_info)::out,
    set(foreign_language)::in, set(foreign_language)::out) is det.

get_int2_items_from_int1_int_type_defn([],
        !MaybeUnqual, !ModuleNames, !IntTypeDefnsCord, !IntImplicitFIMLangs).
get_int2_items_from_int1_int_type_defn([TypeDefnInfo0 | TypeDefnInfos0],
        !MaybeUnqual, !ModuleNames, !IntTypeDefnsCord, !IntImplicitFIMLangs) :-
    % generate_pre_grab_pre_qual_interface_for_int1_int2 had invoked
    % delete_uc_preds_make_solver_type_dummy on type_defn items
    % in the implementation section of the module. We now do the same job
    % on type_defn items in the interface section, but we also make any
    % solver types abstract.
    TypeDefn0 = TypeDefnInfo0 ^ td_ctor_defn,
    (
        TypeDefn0 = parse_tree_du_type(DetailsDu0),
        delete_uc_preds_from_du_type(DetailsDu0, DetailsDu),
        TypeDefn = parse_tree_du_type(DetailsDu),
        TypeDefnInfo = TypeDefnInfo0 ^ td_ctor_defn := TypeDefn,
        % XXX DetailsDu cannot refer to other modules in its MaybeCanon
        % field, but it *can* refer to other modules in the argument types
        % of its constructors.
        % zs: This *should* be ok, in that the code consuming the .int2 file
        % should not need to do anything with the types of those arguments,
        % but I would like to see a correctness argument for that.
        cord.snoc(TypeDefnInfo, !IntTypeDefnsCord)
    ;
        TypeDefn0 = parse_tree_solver_type(_),
        % TypeDefnInfo cannot refer to other modules.
        TypeDefn = parse_tree_abstract_type(abstract_solver_type),
        TypeDefnInfo = TypeDefnInfo0 ^ td_ctor_defn := TypeDefn,
        cord.snoc(TypeDefnInfo, !IntTypeDefnsCord)
    ;
        TypeDefn0 = parse_tree_abstract_type(_),
        % TypeDefnInfo0 cannot refer to other modules.
        cord.snoc(TypeDefnInfo0, !IntTypeDefnsCord)
    ;
        TypeDefn0 = parse_tree_foreign_type(DetailsForeign0),
        delete_uc_preds_from_foreign_type(DetailsForeign0, DetailsForeign),
        TypeDefn = parse_tree_foreign_type(DetailsForeign),
        TypeDefnInfo = TypeDefnInfo0 ^ td_ctor_defn := TypeDefn,
        cord.snoc(TypeDefnInfo, !IntTypeDefnsCord),
        % Foreign types can never refer to Mercury code in other modules,
        % but they can refer to *target language* code in other modules.
        DetailsForeign = type_details_foreign(ForeignType, _, _),
        Lang = foreign_type_language(ForeignType),
        set.insert(Lang, !IntImplicitFIMLangs)
    ;
        TypeDefn0 = parse_tree_eqv_type(DetailsEqv0),
        cord.snoc(TypeDefnInfo0, !IntTypeDefnsCord),
        DetailsEqv0 = type_details_eqv(EqvType0),
        accumulate_modules_in_type(EqvType0, !MaybeUnqual, !ModuleNames)
    ),
    get_int2_items_from_int1_int_type_defn(TypeDefnInfos0,
        !MaybeUnqual, !ModuleNames, !IntTypeDefnsCord, !IntImplicitFIMLangs).

:- pred get_int2_items_from_int1_int_inst_defn(list(item_inst_defn_info)::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out) is det.

get_int2_items_from_int1_int_inst_defn([],
        !MaybeUnqual, !ModuleNames).
get_int2_items_from_int1_int_inst_defn([InstDefnInfo | InstDefnInfos],
        !MaybeUnqual, !ModuleNames) :-
    InstDefnInfo = item_inst_defn_info(_SymName, _InstArgVars,
        MaybeForTypeCtor, MaybeAbstractInstDefn, _InstVarSet,
        _Context, _SeqNum),
    (
        MaybeForTypeCtor = no
    ;
        MaybeForTypeCtor = yes(TypeCtor),
        TypeCtor = type_ctor(TypeCtorSymName, _TypectorArity),
        accumulate_module(TypeCtorSymName, !MaybeUnqual, !ModuleNames)
    ),
    (
        MaybeAbstractInstDefn = abstract_inst_defn
    ;
        MaybeAbstractInstDefn = nonabstract_inst_defn(InstDefn),
        InstDefn = eqv_inst(Inst),
        accumulate_modules_in_inst(Inst, !MaybeUnqual, !ModuleNames)
    ),
    get_int2_items_from_int1_int_inst_defn(InstDefnInfos,
        !MaybeUnqual, !ModuleNames).

:- pred get_int2_items_from_int1_int_mode_defn(list(item_mode_defn_info)::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out) is det.

get_int2_items_from_int1_int_mode_defn([],
        !MaybeUnqual, !ModuleNames).
get_int2_items_from_int1_int_mode_defn([ModeDefnInfo | ModeDefnInfos],
        !MaybeUnqual, !ModuleNames) :-
    ModeDefnInfo = item_mode_defn_info(_SymName, _InstArgVars,
        MaybeAbstractModeDefn, _InstVarSet, _Context, _SeqNum),
    (
        MaybeAbstractModeDefn = abstract_mode_defn
    ;
        MaybeAbstractModeDefn = nonabstract_mode_defn(ModeDefn),
        ModeDefn = eqv_mode(Mode),
        accumulate_modules_in_mode(Mode, !MaybeUnqual, !ModuleNames)
    ),
    get_int2_items_from_int1_int_mode_defn(ModeDefnInfos,
        !MaybeUnqual, !ModuleNames).

:- pred get_int2_items_from_int1_int_typeclass(list(item_typeclass_info)::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out,
    cord(item_typeclass_info)::in, cord(item_typeclass_info)::out) is det.

get_int2_items_from_int1_int_typeclass([],
        !MaybeUnqual, !ModuleNames, !IntTypeClassesCord).
get_int2_items_from_int1_int_typeclass([TypeClassInfo | TypeClassInfos],
        !MaybeUnqual, !ModuleNames, !IntTypeClassesCord) :-
    TypeClassInfo = item_typeclass_info(ClassSymName, TypeParams,
        SuperclassConstraints, FunDeps, _Methods0, TVarSet, Context, SeqNum),
    accumulate_modules_in_constraints(SuperclassConstraints,
        !MaybeUnqual, !ModuleNames),
    Methods = class_interface_abstract,
    AbstractTypeClassInfo = item_typeclass_info(ClassSymName, TypeParams,
        SuperclassConstraints, FunDeps, Methods, TVarSet, Context, SeqNum),
    cord.snoc(AbstractTypeClassInfo, !IntTypeClassesCord),
    get_int2_items_from_int1_int_typeclass(TypeClassInfos,
        !MaybeUnqual, !ModuleNames, !IntTypeClassesCord).

:- pred get_int2_items_from_int1_int_instance(list(item_instance_info)::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out,
    cord(item_instance_info)::in, cord(item_instance_info)::out) is det.

get_int2_items_from_int1_int_instance([],
        !MaybeUnqual, !ModuleNames, !IntInstancesCord).
get_int2_items_from_int1_int_instance([InstanceInfo | InstanceInfos],
        !MaybeUnqual, !ModuleNames, !IntInstancesCord) :-
    InstanceInfo = item_instance_info(ClassSymName,
        ArgTypes, OrigArgTypes, ClassConstraints, _InstanceBody0,
        TVarSet, ContainingModuleName, Context, SeqNum),
    accumulate_module(ClassSymName, !MaybeUnqual, !ModuleNames),
    accumulate_modules_in_types(ArgTypes, !MaybeUnqual, !ModuleNames),
    accumulate_modules_in_types(OrigArgTypes, !MaybeUnqual, !ModuleNames),
    accumulate_modules_in_constraints(ClassConstraints,
        !MaybeUnqual, !ModuleNames),
    InstanceBody = instance_body_abstract,
    AbstractInstanceInfo = item_instance_info(ClassSymName,
        ArgTypes, OrigArgTypes, ClassConstraints, InstanceBody,
        TVarSet, ContainingModuleName, Context, SeqNum),
    cord.snoc(AbstractInstanceInfo, !IntInstancesCord),
    get_int2_items_from_int1_int_instance(InstanceInfos,
        !MaybeUnqual, !ModuleNames, !IntInstancesCord).

%---------------------%

:- pred get_int2_items_from_int1_imp_types(list(item_type_defn_info)::in,
    set(foreign_language)::in, set(foreign_language)::out) is det.

get_int2_items_from_int1_imp_types([], !ImpImplicitFIMLangs).
get_int2_items_from_int1_imp_types([ImpTypeDefn | ImpTypeDefns],
        !ImpImplicitFIMLangs) :-
    TypeDefn = ImpTypeDefn ^ td_ctor_defn,
    ( if TypeDefn = parse_tree_foreign_type(DetailsForeign) then
        DetailsForeign = type_details_foreign(ForeignType, _, _),
        Lang = foreign_type_language(ForeignType),
        set.insert(Lang, !ImpImplicitFIMLangs)
    else
        true
    ),
    get_int2_items_from_int1_imp_types(ImpTypeDefns, !ImpImplicitFIMLangs).

%---------------------------------------------------------------------------%

    % XXX TYPE_REPN Consider the relationship between this predicate and
    % make_impl_type_abstract in write_module_interface_files.m. Unlike this
    % predicate, that one has access to the definitions of the types
    % in this module, so it knows whether e.g. an equivalence type definition
    % makes the defined type equivalent to a type that needs special treatment
    % by the algorithm that decides data representations.
    %
:- pred delete_uc_preds_make_solver_type_dummy(
    item_type_defn_info::in, item_type_defn_info::out) is det.

delete_uc_preds_make_solver_type_dummy(ItemTypeDefn0, ItemTypeDefn) :-
    TypeDefn0 = ItemTypeDefn0 ^ td_ctor_defn,
    (
        TypeDefn0 = parse_tree_du_type(DetailsDu0),
        % For the `.int2' files, we need the full definitions of
        % discriminated union types. Even if the functors for a type
        % are not used within a module, we may need to know them for
        % comparing insts, e.g. for comparing `ground' and `bound(...)'.
        % XXX ITEM_LIST: zs: That may be so, but writing out the type
        % definition unchanged, without something on it that says
        % "use these functors *only* for these purposes",
        % is a bug in my opinion.
        % XXX ITEM_LIST: And most types do NOT have any insts defined for them.
        % We could collect (a) the set of type constructors mentioned
        % explicitly in insts as being for that type, and (b) the set of
        % function symbol/arity pairs that occur in bound insts, and then
        % make the type definition totally abstract unless the type constructor
        % either is in set (a) or a member of Ctors is in set (b).
        delete_uc_preds_from_du_type(DetailsDu0, DetailsDu),
        TypeDefn = parse_tree_du_type(DetailsDu),
        ItemTypeDefn = ItemTypeDefn0 ^ td_ctor_defn := TypeDefn
    ;
        TypeDefn0 = parse_tree_abstract_type(_AbstractDetails),
        ItemTypeDefn = ItemTypeDefn0
    ;
        TypeDefn0 = parse_tree_solver_type(_),
        % rafe: XXX we need to also export the details of the
        % forwarding type for the representation and the forwarding
        % pred for initialization.
        ItemTypeDefn = ItemTypeDefn0 ^ td_ctor_defn :=
            parse_tree_solver_type(dummy_solver_type)
    ;
        TypeDefn0 = parse_tree_eqv_type(_),
        % For the `.int2' files, we need the full definitions of
        % equivalence types. They are needed to ensure that
        % non-abstract equivalence types always get fully expanded
        % before code generation, even in modules that only indirectly
        % import the definition of the equivalence type.
        % XXX TYPE_REPN: *After* we have generated a type_repn item
        % including this information, we should be able to make
        % MaybeAbstractItemTypeDefn actually abstract.
        ItemTypeDefn = ItemTypeDefn0
    ;
        TypeDefn0 = parse_tree_foreign_type(DetailsForeign0),
        % We always need the definitions of foreign types
        % to handle inter-language interfacing correctly.
        % However, we want to abstract away any unify and compare predicates.
        delete_uc_preds_from_foreign_type(DetailsForeign0, DetailsForeign),
        TypeDefn = parse_tree_foreign_type(DetailsForeign),
        ItemTypeDefn = ItemTypeDefn0 ^ td_ctor_defn := TypeDefn
    ).

    % Return a dummy solver type definition, one that does not refer
    % to any other modules. We use this to replace actual solver type
    % definitions that will be made abstract later (so we do not lose
    % information we do not intend to lose), but for which we do want
    % to remember the fact that they *do* have a definition, to avoid
    % generating misleading error messages about missing definitions.
    %
:- func dummy_solver_type = type_details_solver.

dummy_solver_type = DetailsSolver :-
    RepnType = tuple_type([], kind_star),
    GroundInst = not_reached,
    AnyInst = not_reached,
    MutableItems = [],
    SolverDetails = solver_type_details(RepnType, GroundInst, AnyInst,
        MutableItems),
    MaybeCanon = canon,
    DetailsSolver = type_details_solver(SolverDetails, MaybeCanon).

:- pred make_du_type_abstract(type_details_du::in, type_details_abstract::out)
    is det.

make_du_type_abstract(DetailsDu, DetailsAbstract) :-
    DetailsDu = type_details_du(Ctors, MaybeCanonical, _MaybeDirectArgCtors),
    ( if du_type_is_enum(DetailsDu, NumFunctors) then
        num_bits_needed_for_n_values(NumFunctors, NumBits),
        DetailsAbstract = abstract_type_fits_in_n_bits(NumBits)
    else if du_type_is_notag(Ctors, MaybeCanonical) then
        DetailsAbstract = abstract_notag_type
    else if du_type_is_dummy(DetailsDu) then
        DetailsAbstract = abstract_dummy_type
    else
        DetailsAbstract = abstract_type_general
    ).

:- pred delete_uc_preds_from_du_type(type_details_du::in,
    type_details_du::out) is det.

delete_uc_preds_from_du_type(DetailsDu0, DetailsDu) :-
    MaybeCanonical = DetailsDu0 ^ du_canonical,
    (
        MaybeCanonical = canon,
        DetailsDu = DetailsDu0
    ;
        MaybeCanonical = noncanon(_NonCanonical),
        DetailsDu = DetailsDu0 ^ du_canonical
            := noncanon(noncanon_abstract(non_solver_type))
    ).

:- pred delete_uc_preds_from_foreign_type(type_details_foreign(T)::in,
    type_details_foreign(T)::out) is det.

delete_uc_preds_from_foreign_type(DetailsForeign0, DetailsForeign) :-
    MaybeCanonical0 = DetailsForeign0 ^ foreign_canonical,
    (
        MaybeCanonical0 = canon,
        DetailsForeign = DetailsForeign0
    ;
        MaybeCanonical0 = noncanon(_NonCanonical),
        DetailsForeign = DetailsForeign0 ^ foreign_canonical
            := noncanon(noncanon_abstract(non_solver_type))
    ).

%---------------------------------------------------------------------------%

:- type maybe_unqual_symnames
    --->    no_unqual_symnames
    ;       some_unqual_symnames.

:- pred accumulate_module(sym_name::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_module(SymName, !MaybeUnqual, !ModuleNames) :-
    (
        SymName = unqualified(_),
        !:MaybeUnqual = some_unqual_symnames
    ;
        SymName = qualified(ModuleName, _),
        set.insert(ModuleName, !ModuleNames)
    ).

%---------------------%

:- pred accumulate_modules_in_constraint(prog_constraint::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_modules_in_constraint(Constraint, !MaybeUnqual, !ModuleNames) :-
    Constraint = constraint(ClassSymName, ArgTypes),
    accumulate_module(ClassSymName, !MaybeUnqual, !ModuleNames),
    accumulate_modules_in_types(ArgTypes, !MaybeUnqual, !ModuleNames).

%---------------------%

:- pred accumulate_modules_in_type(mer_type::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_modules_in_type(Type, !MaybeUnqual, !ModuleNames) :-
    (
        ( Type = type_variable(_, _)
        ; Type = builtin_type(_)
        )
    ;
        Type = defined_type(SymName, ArgTypes, _Kind),
        accumulate_module(SymName, !MaybeUnqual, !ModuleNames),
        accumulate_modules_in_types(ArgTypes, !MaybeUnqual, !ModuleNames)
    ;
        ( Type = tuple_type(ArgTypes, _Kind)
        ; Type = apply_n_type(_TVar, ArgTypes, _Kind)
        ; Type = higher_order_type(_PredOrFunc, ArgTypes,
            _HOInstInfo, _Purity, _EvalMethod)
        ),
        accumulate_modules_in_types(ArgTypes, !MaybeUnqual, !ModuleNames)
    ;
        Type = kinded_type(ArgType, _Kind),
        accumulate_modules_in_type(ArgType, !MaybeUnqual, !ModuleNames)
    ).

%---------------------%

:- pred accumulate_modules_in_inst(mer_inst::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_modules_in_inst(Inst, !MaybeUnqual, !ModuleNames) :-
    (
        ( Inst = free
        ; Inst = not_reached
        ; Inst = ground(_Uniq, _HOInstInfo)
        ; Inst = inst_var(_InstVar)
        ; Inst = any(_Uniq, _HOInstInfo)
        )
    ;
        Inst = free(Type),
        accumulate_modules_in_type(Type, !MaybeUnqual, !ModuleNames)
    ;
        Inst = bound(_Uniq, _InstTestsResults, BoundInsts),
        accumulate_modules_in_bound_insts(BoundInsts,
            !MaybeUnqual, !ModuleNames)
    ;
        Inst = constrained_inst_vars(_InstVars, ArgInst),
        accumulate_modules_in_inst(ArgInst, !MaybeUnqual, !ModuleNames)
    ;
        Inst = defined_inst(InstName),
        accumulate_modules_in_inst_name(InstName, !MaybeUnqual, !ModuleNames)
    ;
        Inst = abstract_inst(SymName, ArgInsts),
        accumulate_module(SymName, !MaybeUnqual, !ModuleNames),
        accumulate_modules_in_insts(ArgInsts, !MaybeUnqual, !ModuleNames)
    ).

:- pred accumulate_modules_in_inst_name(inst_name::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_modules_in_inst_name(InstName, !MaybeUnqual, !ModuleNames) :-
    (
        InstName = user_inst(SymName, ArgInsts),
        accumulate_module(SymName, !MaybeUnqual, !ModuleNames),
        accumulate_modules_in_insts(ArgInsts, !MaybeUnqual, !ModuleNames)
    ;
        ( InstName = unify_inst(_IsLive, _IsReal, ArgInstA, ArgInstB)
        ; InstName = merge_inst(ArgInstA, ArgInstB)
        ),
        accumulate_modules_in_insts([ArgInstA, ArgInstB],
            !MaybeUnqual, !ModuleNames)
    ;
        ( InstName = ground_inst(ArgInstName, _Uniq, _IsLive, _IsReal)
        ; InstName = any_inst(ArgInstName, _Uniq, _IsLive, _IsReal)
        ; InstName = shared_inst(ArgInstName)
        ; InstName = mostly_uniq_inst(ArgInstName)
        ),
        accumulate_modules_in_inst_name(ArgInstName,
            !MaybeUnqual, !ModuleNames)
    ;
        InstName = typed_ground(_Uniq, Type),
        accumulate_modules_in_type(Type, !MaybeUnqual, !ModuleNames)
    ;
        InstName = typed_inst(Type, ArgInstName),
        accumulate_modules_in_type(Type, !MaybeUnqual, !ModuleNames),
        accumulate_modules_in_inst_name(ArgInstName,
            !MaybeUnqual, !ModuleNames)
    ).

:- pred accumulate_modules_in_bound_inst(bound_inst::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_modules_in_bound_inst(BoundInst, !MaybeUnqual, !ModuleNames) :-
    BoundInst = bound_functor(ConsId, ArgInsts),
    ( if ConsId = cons(SymName, _ConsArity, TypeCtor) then
        accumulate_module(SymName, !MaybeUnqual, !ModuleNames),
        TypeCtor = type_ctor(TypeCtorSymName, _Arity),
        accumulate_module(TypeCtorSymName, !MaybeUnqual, !ModuleNames)
    else
        true
    ),
    accumulate_modules_in_insts(ArgInsts, !MaybeUnqual, !ModuleNames).

%---------------------%

:- pred accumulate_modules_in_mode(mer_mode::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_modules_in_mode(Mode, !MaybeUnqual, !ModuleNames) :-
    (
        Mode = from_to_mode(InstA, InstB),
        accumulate_modules_in_inst(InstA, !MaybeUnqual, !ModuleNames),
        accumulate_modules_in_inst(InstB, !MaybeUnqual, !ModuleNames)
    ;
        Mode = user_defined_mode(SymName, ArgInsts),
        accumulate_module(SymName, !MaybeUnqual, !ModuleNames),
        accumulate_modules_in_insts(ArgInsts, !MaybeUnqual, !ModuleNames)
    ).

%---------------------%

:- pred accumulate_modules_in_constraints(list(prog_constraint)::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_modules_in_constraints([], !MaybeUnqual, !ModuleNames).
accumulate_modules_in_constraints([Constraint | Constraints],
        !MaybeUnqual, !ModuleNames) :-
    accumulate_modules_in_constraint(Constraint, !MaybeUnqual, !ModuleNames),
    accumulate_modules_in_constraints(Constraints, !MaybeUnqual, !ModuleNames).

:- pred accumulate_modules_in_types(list(mer_type)::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_modules_in_types([], !MaybeUnqual, !ModuleNames).
accumulate_modules_in_types([Type | Types], !MaybeUnqual, !ModuleNames) :-
    accumulate_modules_in_type(Type, !MaybeUnqual, !ModuleNames),
    accumulate_modules_in_types(Types, !MaybeUnqual, !ModuleNames).

:- pred accumulate_modules_in_bound_insts(list(bound_inst)::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_modules_in_bound_insts([], !MaybeUnqual, !ModuleNames).
accumulate_modules_in_bound_insts([BoundInst | BoundInsts],
        !MaybeUnqual, !ModuleNames) :-
    accumulate_modules_in_bound_inst(BoundInst, !MaybeUnqual, !ModuleNames),
    accumulate_modules_in_bound_insts(BoundInsts, !MaybeUnqual, !ModuleNames).

:- pred accumulate_modules_in_insts(list(mer_inst)::in,
    maybe_unqual_symnames::in, maybe_unqual_symnames::out,
    set(module_name)::in, set(module_name)::out) is det.

accumulate_modules_in_insts([], !MaybeUnqual, !ModuleNames).
accumulate_modules_in_insts([Inst | Insts], !MaybeUnqual, !ModuleNames) :-
    accumulate_modules_in_inst(Inst, !MaybeUnqual, !ModuleNames),
    accumulate_modules_in_insts(Insts, !MaybeUnqual, !ModuleNames).

%---------------------------------------------------------------------------%
% The rest of this module should not be needed.
%---------------------------------------------------------------------------%

make_foreign_import(ModuleName, Lang) = FIM :-
    FIM = item_fim(Lang, ModuleName, term.context_init, -1).

%---------------------------------------------------------------------------%
:- end_module parse_tree.comp_unit_interface.
%---------------------------------------------------------------------------%
