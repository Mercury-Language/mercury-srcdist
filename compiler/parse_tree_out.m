%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 2015-2021 The Mercury team.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% This module converts the top levels of the parse tree structure
% back into Mercury source text.
%
%---------------------------------------------------------------------------%

:- module parse_tree.parse_tree_out.
:- interface.

:- import_module libs.
:- import_module libs.globals.
:- import_module parse_tree.parse_tree_out_info.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_data_foreign.
:- import_module parse_tree.prog_item.

:- import_module io.
:- import_module list.
:- import_module maybe.

%---------------------------------------------------------------------------%

    % output_parse_tree_*(Globals, OutputFileName, ParseTree, !IO).
    %
:- pred output_parse_tree_src(globals::in, string::in, parse_tree_src::in,
    io::di, io::uo) is det.

:- pred output_parse_tree_int0(globals::in, string::in,
    parse_tree_int0::in, io::di, io::uo) is det.
:- pred output_parse_tree_int1(globals::in, string::in,
    parse_tree_int1::in, io::di, io::uo) is det.
:- pred output_parse_tree_int2(globals::in, string::in,
    parse_tree_int2::in, io::di, io::uo) is det.
:- pred output_parse_tree_int3(globals::in, string::in,
    parse_tree_int3::in, io::di, io::uo) is det.

:- pred output_parse_tree_plain_opt(globals::in, string::in,
    parse_tree_plain_opt::in, io::di, io::uo) is det.
:- pred output_parse_tree_trans_opt(globals::in, string::in,
    parse_tree_trans_opt::in, io::di, io::uo) is det.

%---------------------------------------------------------------------------%

:- pred mercury_output_parse_tree_src(merc_out_info::in,
    io.text_output_stream::in, parse_tree_src::in, io::di, io::uo) is det.

:- pred mercury_output_parse_tree_module_src(merc_out_info::in,
    io.text_output_stream::in, parse_tree_module_src::in,
    io::di, io::uo) is det.

:- pred mercury_output_ancestor_int_spec(merc_out_info::in,
    io.text_output_stream::in, ancestor_int_spec::in, io::di, io::uo) is det.
:- pred mercury_output_direct_int_spec(merc_out_info::in,
    io.text_output_stream::in, direct_int_spec::in, io::di, io::uo) is det.
:- pred mercury_output_indirect_int_spec(merc_out_info::in,
    io.text_output_stream::in, indirect_int_spec::in, io::di, io::uo) is det.
:- pred mercury_output_int_for_opt_spec(merc_out_info::in,
    io.text_output_stream::in, int_for_opt_spec::in, io::di, io::uo) is det.

:- pred mercury_output_parse_tree_int0(merc_out_info::in,
    io.text_output_stream::in, parse_tree_int0::in, io::di, io::uo) is det.
:- pred mercury_output_parse_tree_int1(merc_out_info::in,
    io.text_output_stream::in, parse_tree_int1::in, io::di, io::uo) is det.
:- pred mercury_output_parse_tree_int2(merc_out_info::in,
    io.text_output_stream::in, parse_tree_int2::in, io::di, io::uo) is det.
:- pred mercury_output_parse_tree_int3(merc_out_info::in,
    io.text_output_stream::in, parse_tree_int3::in, io::di, io::uo) is det.

:- pred mercury_output_parse_tree_plain_opt(merc_out_info::in,
    io.text_output_stream::in, parse_tree_plain_opt::in,
    io::di, io::uo) is det.
:- pred mercury_output_parse_tree_trans_opt(merc_out_info::in,
    io.text_output_stream::in, parse_tree_trans_opt::in,
    io::di, io::uo) is det.

%---------------------------------------------------------------------------%

:- pred mercury_output_raw_compilation_unit(merc_out_info::in,
    io.text_output_stream::in, raw_compilation_unit::in,
    io::di, io::uo) is det.

:- pred mercury_output_aug_compilation_unit(merc_out_info::in,
    io.text_output_stream::in, aug_compilation_unit::in,
    io::di, io::uo) is det.

%---------------------------------------------------------------------------%

:- pred mercury_output_raw_item_blocks(merc_out_info::in,
    io.text_output_stream::in, list(raw_item_block)::in,
    io::di, io::uo) is det.
:- pred mercury_output_raw_item_block(merc_out_info::in,
    io.text_output_stream::in, raw_item_block::in,
    io::di, io::uo) is det.

:- pred mercury_output_src_item_blocks(merc_out_info::in,
    io.text_output_stream::in, list(src_item_block)::in,
    io::di, io::uo) is det.
:- pred mercury_output_src_item_block(merc_out_info::in,
    io.text_output_stream::in,
    src_item_block::in, io::di, io::uo) is det.
:- pred mercury_output_int_item_blocks(merc_out_info::in,
    io.text_output_stream::in, list(int_item_block)::in,
    io::di, io::uo) is det.
:- pred mercury_output_int_item_block(merc_out_info::in,
    io.text_output_stream::in, int_item_block::in,
    io::di, io::uo) is det.
:- pred mercury_output_opt_item_blocks(merc_out_info::in,
    io.text_output_stream::in, list(opt_item_block)::in,
    io::di, io::uo) is det.
:- pred mercury_output_opt_item_block(merc_out_info::in,
    io.text_output_stream::in, opt_item_block::in,
    io::di, io::uo) is det.
:- pred mercury_output_int_for_opt_item_blocks(merc_out_info::in,
    io.text_output_stream::in, list(int_for_opt_item_block)::in,
    io::di, io::uo) is det.
:- pred mercury_output_int_for_opt_item_block(merc_out_info::in,
    io.text_output_stream::in, int_for_opt_item_block::in,
    io::di, io::uo) is det.

%---------------------------------------------------------------------------%

:- pred mercury_output_item(merc_out_info::in, io.text_output_stream::in,
    item::in, io::di, io::uo) is det.

%---------------------------------------------------------------------------%
%
% Output some components of type definitions.
%

:- pred mercury_output_where_attributes(merc_out_info::in, tvarset::in,
    maybe(solver_type_details)::in, maybe_canonical::in,
    maybe(list(sym_name_arity))::in, io.text_output_stream::in,
    io::di, io::uo) is det.

:- pred mercury_output_ctor(tvarset::in, constructor::in,
    io.text_output_stream::in, io::di, io::uo) is det.

:- pred maybe_cons_exist_constraints_to_prefix_suffix(tvarset::in,
    string::in, string::in, maybe_cons_exist_constraints::in,
    string::out, string::out) is det.

:- pred maybe_brace_for_name_prefix_suffix(arity::in, string::in,
    string::out, string::out) is det.

%---------------------------------------------------------------------------%
%
% Output some components of an instance definition.
%

:- pred mercury_output_instance_method(instance_method::in,
    io.text_output_stream::in, io::di, io::uo) is det.

%---------------------------------------------------------------------------%
%
% Output a foreign_import_module pragma.
%

:- pred mercury_output_fim_spec(io.text_output_stream::in, fim_spec::in,
    io::di, io::uo) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module libs.options.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.canonicalize_interface.
:- import_module parse_tree.file_kind.
:- import_module parse_tree.item_util.
:- import_module parse_tree.maybe_error.
:- import_module parse_tree.mercury_to_mercury.
:- import_module parse_tree.parse_inst_mode_name.
:- import_module parse_tree.parse_tree_out_clause.
:- import_module parse_tree.parse_tree_out_inst.
:- import_module parse_tree.parse_tree_out_pragma.
:- import_module parse_tree.parse_tree_out_pred_decl.
:- import_module parse_tree.parse_tree_out_term.
:- import_module parse_tree.parse_tree_out_type_repn.
:- import_module parse_tree.prog_out.
:- import_module parse_tree.prog_util.
:- import_module recompilation.
:- import_module recompilation.version.

:- import_module assoc_list.
:- import_module bool.
:- import_module cord.
:- import_module map.
:- import_module one_or_more.
:- import_module pair.
:- import_module require.
:- import_module set.
:- import_module string.
:- import_module term.
:- import_module varset.

%---------------------------------------------------------------------------%

output_parse_tree_src(Globals, OutputFileName, ParseTreeSrc, !IO) :-
    output_some_parse_tree(Globals, OutputFileName,
        mercury_output_parse_tree_src, ParseTreeSrc, !IO).

%---------------------%

output_parse_tree_int0(Globals, OutputFileName, ParseTreeInt0, !IO) :-
    output_some_parse_tree(Globals, OutputFileName,
        mercury_output_parse_tree_int0, ParseTreeInt0, !IO).

output_parse_tree_int1(Globals, OutputFileName, ParseTreeInt1, !IO) :-
    output_some_parse_tree(Globals, OutputFileName,
        mercury_output_parse_tree_int1, ParseTreeInt1, !IO).

output_parse_tree_int2(Globals, OutputFileName, ParseTreeInt2, !IO) :-
    output_some_parse_tree(Globals, OutputFileName,
        mercury_output_parse_tree_int2, ParseTreeInt2, !IO).

output_parse_tree_int3(Globals, OutputFileName, ParseTreeInt3, !IO) :-
    output_some_parse_tree(Globals, OutputFileName,
        mercury_output_parse_tree_int3, ParseTreeInt3, !IO).

%---------------------%

output_parse_tree_plain_opt(Globals, OutputFileName, ParseTreePlainOpt, !IO) :-
    output_some_parse_tree(Globals, OutputFileName,
        mercury_output_parse_tree_plain_opt, ParseTreePlainOpt, !IO).

output_parse_tree_trans_opt(Globals, OutputFileName, ParseTreeTransOpt, !IO) :-
    output_some_parse_tree(Globals, OutputFileName,
        mercury_output_parse_tree_trans_opt, ParseTreeTransOpt, !IO).

%---------------------------------------------------------------------------%

:- type output_parse_tree(PT) ==
    pred(merc_out_info, io.text_output_stream, PT, io, io).
:- inst output_parse_tree == (pred(in, in, in, di, uo) is det).

:- pred output_some_parse_tree(globals::in, string::in,
    output_parse_tree(PT)::in(output_parse_tree),
    PT::in, io::di, io::uo) is det.

output_some_parse_tree(Globals, OutputFileName, OutputParseTree,
        ParseTree, !IO) :-
    io.output_stream(CurOutputStream, !IO),
    io.open_output(OutputFileName, Res, !IO),
    (
        Res = ok(FileStream),
        globals.lookup_bool_option(Globals, verbose, Verbose),
        (
            Verbose = yes,
            io.format(CurOutputStream, "%% Writing output to %s...",
                [s(OutputFileName)], !IO),
            io.flush_output(CurOutputStream, !IO)
        ;
            Verbose = no
        ),

        % Module qualifiers on items are redundant after the
        % declaration above.
        % XXX What declaration?
        Info = init_merc_out_info(Globals, unqualified_item_names,
            output_mercury),
        OutputParseTree(Info, FileStream, ParseTree, !IO),
        io.close_output(FileStream, !IO),
        (
            Verbose = yes,
            io.write_string(CurOutputStream, " done\n", !IO)
        ;
            Verbose = no
        )
    ;
        Res = error(_),
        io.format(CurOutputStream,
            "Error: couldn't open file `%s' for output.\n",
            [s(OutputFileName)], !IO)
    ).

%---------------------------------------------------------------------------%

mercury_output_parse_tree_src(Info, Stream, ParseTree, !IO) :-
    ParseTree = parse_tree_src(ModuleName, _Context, ModuleComponentsCord),
    mercury_output_module_decl(Stream, "module", ModuleName, !IO),
    ModuleComponents = cord.list(ModuleComponentsCord),
    mercury_output_module_components(Info, Stream, no, ModuleComponents, !IO),
    mercury_output_module_decl(Stream, "end_module", ModuleName, !IO).

mercury_output_parse_tree_module_src(Info, Stream, ParseTreeModuleSrc, !IO) :-
    ParseTreeModuleSrc = parse_tree_module_src(ModuleName, _ModuleContext,
        IntIncludeMap, ImpIncludeMap, InclMap,
        IntImportMap, IntUseMap, ImpImportMap, ImpUseMap, ImportUseMap,
        IntFIMSpecMap, ImpFIMSpecMap, MaybeImplicitFIMLangs,

        IntTypeDefnsAbs, IntTypeDefnsMer, IntTypeDefnsForeign,
        IntInstDefns, IntModeDefns, IntTypeClasses, IntInstances,
        IntPredDecls, IntModeDecls,
        IntForeignExportEnums, IntDeclPragmas, IntPromises, _IntBadPreds,

        ImpTypeDefnsAbs, ImpTypeDefnsMer, ImpTypeDefnsForeign,
        ImpInstDefns, ImpModeDefns, ImpTypeClasses, ImpInstances,
        ImpPredDecls, ImpModeDecls, ImpClauses,
        ImpForeignEnums, ImpForeignExportEnums,
        ImpDeclPragmas, ImpImplPragmas, ImpPromises,
        ImpInitialises, ImpFinalises, ImpMutables),

    io.write_string(Stream, "% module src\n", !IO),
    mercury_output_module_decl(Stream, "module", ModuleName, !IO),

    io.write_string(Stream, "% include_module_map\n", !IO),
    map.foldl(write_include_module_map_entry(Stream), InclMap, !IO),
    io.write_string(Stream, "% section_import_and_or_use_map\n", !IO),
    map.foldl(write_import_use_map_entry(Stream), ImportUseMap, !IO),

    mercury_output_section_marker(Stream, ms_interface, !IO),
    list.foldl(mercury_output_module_decl(Stream, "include_module"),
        map.keys(IntIncludeMap), !IO),
    list.foldl(mercury_output_module_decl(Stream, "import_module"),
        map.keys(IntImportMap), !IO),
    list.foldl(mercury_output_module_decl(Stream, "use_module"),
        map.keys(IntUseMap), !IO),
    list.foldl(mercury_output_fim_spec(Stream), map.keys(IntFIMSpecMap), !IO),
    (
        MaybeImplicitFIMLangs = no,
        io.write_string(Stream,
            "% implicit FIM self-import languages not set\n", !IO)
    ;
        MaybeImplicitFIMLangs = yes(ImplicitFIMLangs),
        ImplicitFIMLangStrs = list.map(mercury_foreign_language_to_string,
            set.to_sorted_list(ImplicitFIMLangs)),
        io.format(Stream,
            "%% implicit FIM self-import languages: %s\n",
           [s(join_list(", ", ImplicitFIMLangStrs))], !IO)
    ),
    list.foldl(mercury_output_item_type_defn(Info, Stream),
        IntTypeDefnsAbs, !IO),
    list.foldl(mercury_output_item_type_defn(Info, Stream),
        IntTypeDefnsMer, !IO),
    list.foldl(mercury_output_item_type_defn(Info, Stream),
        IntTypeDefnsForeign, !IO),
    list.foldl(mercury_output_item_inst_defn(Info, Stream),
        IntInstDefns, !IO),
    list.foldl(mercury_output_item_mode_defn(Info, Stream),
        IntModeDefns, !IO),
    list.foldl(mercury_output_item_typeclass(Info, Stream),
        IntTypeClasses, !IO),
    list.foldl(mercury_output_item_instance(Info, Stream),
        IntInstances, !IO),
    list.foldl(mercury_output_item_pred_decl(Info, Stream),
        IntPredDecls, !IO),
    list.foldl(mercury_output_item_mode_decl(Info, Stream),
        IntModeDecls, !IO),
    add_list(mercury_format_item_foreign_export_enum(Info),
        "", IntForeignExportEnums, Stream, !IO),
    list.foldl(mercury_output_item_decl_pragma(Info, Stream),
        IntDeclPragmas, !IO),
    list.foldl(mercury_output_item_promise(Info, Stream),
        IntPromises, !IO),

    mercury_output_section_marker(Stream, ms_implementation, !IO),
    list.foldl(mercury_output_module_decl(Stream, "include_module"),
        map.keys(ImpIncludeMap), !IO),
    list.foldl(mercury_output_module_decl(Stream, "import_module"),
        map.keys(ImpImportMap), !IO),
    list.foldl(mercury_output_module_decl(Stream, "use_module"),
        map.keys(ImpUseMap), !IO),
    list.foldl(mercury_output_fim_spec(Stream), map.keys(ImpFIMSpecMap), !IO),
    list.foldl(mercury_output_item_type_defn(Info, Stream),
        ImpTypeDefnsAbs, !IO),
    list.foldl(mercury_output_item_type_defn(Info, Stream),
        ImpTypeDefnsMer, !IO),
    list.foldl(mercury_output_item_type_defn(Info, Stream),
        ImpTypeDefnsForeign, !IO),
    list.foldl(mercury_output_item_inst_defn(Info, Stream),
        ImpInstDefns, !IO),
    list.foldl(mercury_output_item_mode_defn(Info, Stream),
        ImpModeDefns, !IO),
    list.foldl(mercury_output_item_typeclass(Info, Stream),
        ImpTypeClasses, !IO),
    list.foldl(mercury_output_item_instance(Info, Stream),
        ImpInstances, !IO),
    list.foldl(mercury_output_item_pred_decl(Info, Stream),
        ImpPredDecls, !IO),
    list.foldl(mercury_output_item_mode_decl(Info, Stream),
        ImpModeDecls, !IO),
    list.foldl(mercury_output_item_clause(Info, Stream),
        ImpClauses, !IO),
    list.foldl(mercury_format_item_foreign_enum(Info, Stream),
        ImpForeignEnums, !IO),
    add_list(mercury_format_item_foreign_export_enum(Info),
        "", ImpForeignExportEnums, Stream, !IO),
    list.foldl(mercury_output_item_decl_pragma(Info, Stream),
        ImpDeclPragmas, !IO),
    list.foldl(mercury_output_item_impl_pragma(Info, Stream),
        ImpImplPragmas, !IO),
    list.foldl(mercury_output_item_promise(Info, Stream),
        ImpPromises, !IO),
    list.foldl(mercury_output_item_initialise(Info, Stream),
        ImpInitialises, !IO),
    list.foldl(mercury_output_item_finalise(Info, Stream),
        ImpFinalises, !IO),
    list.foldl(mercury_output_item_mutable(Info, Stream),
        ImpMutables, !IO),
    mercury_output_module_decl(Stream, "end_module", ModuleName, !IO),
    io.nl(Stream, !IO).

:- pred write_include_module_map_entry(io.text_output_stream::in,
    module_name::in, include_module_info::in, io::di, io::uo) is det.

write_include_module_map_entry(Stream, ModuleName, InclInfo, !IO) :-
    InclInfo = include_module_info(Section, _Context),
    io.write_string(Stream, "% ", !IO),
    mercury_output_bracketed_sym_name(ModuleName, Stream, !IO),
    io.write_string(Stream, " -> ", !IO),
    (
        Section = ms_interface,
        io.write_string(Stream, "interface", !IO)
    ;
        Section = ms_implementation,
        io.write_string(Stream, "implementation", !IO)
    ),
    io.nl(Stream, !IO).

:- pred write_import_use_map_entry(io.text_output_stream::in, module_name::in,
    maybe_implicit_import_and_or_use::in, io::di, io::uo) is det.

write_import_use_map_entry(Stream, ModuleName, ImportAndOrUse, !IO) :-
    io.write_string(Stream, "% ", !IO),
    mercury_output_bracketed_sym_name(ModuleName, Stream, !IO),
    io.write_string(Stream, " -> ", !IO),
    (
        ImportAndOrUse = explicit_avail(SectionImportAndOrUse),
        (
            SectionImportAndOrUse = int_import(_),
            io.write_string(Stream, "int_import", !IO)
        ;
            SectionImportAndOrUse = int_use(_),
            io.write_string(Stream, "int_use", !IO)
        ;
            SectionImportAndOrUse = imp_import(_),
            io.write_string(Stream, "imp_import", !IO)
        ;
            SectionImportAndOrUse = imp_use(_),
            io.write_string(Stream, "imp_use", !IO)
        ;
            SectionImportAndOrUse = int_use_imp_import(_, _),
            io.write_string(Stream, "int_use_imp_import", !IO)
        )
    ;
        ImportAndOrUse = implicit_avail(ImplicitImportAndOrUse, _),
        (
            ImplicitImportAndOrUse = implicit_int_import,
            io.write_string(Stream, "implicit_int_import", !IO)
        ;
            ImplicitImportAndOrUse = implicit_int_use,
            io.write_string(Stream, "implicit_int_use", !IO)
        ;
            ImplicitImportAndOrUse = implicit_imp_use,
            io.write_string(Stream, "implicit_imp_use", !IO)
        )
    ),
    io.nl(Stream, !IO).

%---------------------------------------------------------------------------%

mercury_output_ancestor_int_spec(Info, Stream, AncestorIntSpec, !IO) :-
    AncestorIntSpec = ancestor_int0(ParseTreeInt0, _),
    mercury_output_parse_tree_int0(Info, Stream, ParseTreeInt0, !IO).

mercury_output_direct_int_spec(Info, Stream, DirectIntSpec, !IO) :-
    (
        DirectIntSpec = direct_int1(ParseTreeInt1, _),
        mercury_output_parse_tree_int1(Info, Stream, ParseTreeInt1, !IO)
    ;
        DirectIntSpec = direct_int3(ParseTreeInt3, _),
        mercury_output_parse_tree_int3(Info, Stream, ParseTreeInt3, !IO)
    ).

mercury_output_indirect_int_spec(Info, Stream, IndirectIntSpec, !IO) :-
    (
        IndirectIntSpec = indirect_int2(ParseTreeInt2, _),
        mercury_output_parse_tree_int2(Info, Stream, ParseTreeInt2, !IO)
    ;
        IndirectIntSpec = indirect_int3(ParseTreeInt3, _),
        mercury_output_parse_tree_int3(Info, Stream, ParseTreeInt3, !IO)
    ).

mercury_output_int_for_opt_spec(Info, Stream, ForOptIntSpec, !IO) :-
    (
        ForOptIntSpec = for_opt_int0(ParseTreeInt0, _),
        mercury_output_parse_tree_int0(Info, Stream, ParseTreeInt0, !IO)
    ;
        ForOptIntSpec = for_opt_int1(ParseTreeInt1, _),
        mercury_output_parse_tree_int1(Info, Stream, ParseTreeInt1, !IO)
    ;
        ForOptIntSpec = for_opt_int2(ParseTreeInt2, _),
        mercury_output_parse_tree_int2(Info, Stream, ParseTreeInt2, !IO)
    ).

%---------------------------------------------------------------------------%

mercury_output_parse_tree_int0(Info, Stream, ParseTreeInt0, !IO) :-
    ParseTreeInt0 = parse_tree_int0(ModuleName, _ModuleContext,
        MaybeVersionNumbers, IntInclMap, ImpInclMap, _InclMap,
        IntImportMap, IntUseMap, ImpImportMap, ImpUseMap, _ImportUseMap,
        IntFIMSpecs, ImpFIMSpecs,
        IntTypeDefnMap, IntInstDefnMap, IntModeDefnMap,
        IntTypeClasses, IntInstances, IntPredDecls, IntModeDecls,
        IntForeignEnumMap, IntDeclPragmas, IntPromises,
        ImpTypeDefnMap, ImpInstDefnMap, ImpModeDefnMap,
        ImpTypeClasses, ImpInstances, ImpPredDecls, ImpModeDecls,
        ImpForeignEnumMap, ImpDeclPragmas, ImpPromises),
    mercury_output_module_decl(Stream, "module", ModuleName, !IO),
    mercury_output_maybe_module_version_numbers(Stream, ModuleName,
        MaybeVersionNumbers, !IO),

    mercury_output_section_marker(Stream, ms_interface, !IO),
    list.foldl(mercury_output_module_decl(Stream, "include_module"),
        map.sorted_keys(IntInclMap), !IO),
    list.foldl(mercury_output_module_decl(Stream, "import_module"),
        map.sorted_keys(IntImportMap), !IO),
    list.foldl(mercury_output_module_decl(Stream, "use_module"),
        map.sorted_keys(IntUseMap), !IO),
    set.foldl(mercury_output_fim_spec(Stream), IntFIMSpecs, !IO),
    map.foldl_values(mercury_output_type_ctor_all_defns(Info, Stream),
        IntTypeDefnMap, !IO),
    map.foldl_values(mercury_output_inst_ctor_all_defns(Info, Stream),
        IntInstDefnMap, !IO),
    map.foldl_values(mercury_output_mode_ctor_all_defns(Info, Stream),
        IntModeDefnMap, !IO),
    list.foldl(mercury_output_item_typeclass(Info, Stream),
        list.sort(IntTypeClasses), !IO),
    list.foldl(mercury_output_item_instance(Info, Stream),
        list.sort(IntInstances), !IO),
    order_pred_and_mode_decls(IntPredDecls, IntModeDecls, IntPredOrModeDecls),
    mercury_output_pred_or_mode_decls(Info, Stream, IntPredOrModeDecls, !IO),
    map.foldl_values(mercury_format_foreign_enums(Info, Stream),
        IntForeignEnumMap, !IO),
    list.foldl(mercury_output_item_decl_pragma(Info, Stream),
        list.sort(IntDeclPragmas), !IO),
    list.foldl(mercury_output_item_promise(Info, Stream),
        list.sort(IntPromises), !IO),

    ( if
        map.is_empty(ImpInclMap),
        map.is_empty(ImpImportMap),
        map.is_empty(ImpUseMap),
        set.is_empty(ImpFIMSpecs),
        map.is_empty(ImpTypeDefnMap),
        map.is_empty(ImpInstDefnMap),
        map.is_empty(ImpModeDefnMap),
        ImpTypeClasses = [],
        ImpInstances = [],
        ImpPredDecls = [],
        ImpModeDecls = [],
        map.is_empty(ImpForeignEnumMap),
        ImpDeclPragmas = [],
        ImpPromises = []
    then
        true
    else
        mercury_output_section_marker(Stream, ms_implementation, !IO),
        list.foldl(mercury_output_module_decl(Stream, "include_module"),
            map.sorted_keys(ImpInclMap), !IO),
        list.foldl(mercury_output_module_decl(Stream, "import_module"),
            map.sorted_keys(ImpImportMap), !IO),
        list.foldl(mercury_output_module_decl(Stream, "use_module"),
            map.sorted_keys(ImpUseMap), !IO),
        set.foldl(mercury_output_fim_spec(Stream), ImpFIMSpecs, !IO),
        map.foldl_values(mercury_output_type_ctor_all_defns(Info, Stream),
            ImpTypeDefnMap, !IO),
        map.foldl_values(mercury_output_inst_ctor_all_defns(Info, Stream),
            ImpInstDefnMap, !IO),
        map.foldl_values(mercury_output_mode_ctor_all_defns(Info, Stream),
            ImpModeDefnMap, !IO),
        list.foldl(mercury_output_item_typeclass(Info, Stream),
            list.sort(ImpTypeClasses), !IO),
        list.foldl(mercury_output_item_instance(Info, Stream),
            list.sort(ImpInstances), !IO),
        order_pred_and_mode_decls(ImpPredDecls, ImpModeDecls,
            ImpPredOrModeDecls),
        mercury_output_pred_or_mode_decls(Info, Stream,
            ImpPredOrModeDecls, !IO),
        map.foldl_values(mercury_format_foreign_enums(Info, Stream),
            ImpForeignEnumMap, !IO),
        list.foldl(mercury_output_item_decl_pragma(Info, Stream),
            list.sort(ImpDeclPragmas), !IO),
        list.foldl(mercury_output_item_promise(Info, Stream),
            list.sort(ImpPromises), !IO)
    ).

mercury_output_parse_tree_int1(Info, Stream, ParseTreeInt1, !IO) :-
    ParseTreeInt1 = parse_tree_int1(ModuleName, _ModuleContext,
        MaybeVersionNumbers, IntInclMap, ImpInclMap, _InclMap,
        IntUseMap, ImpUseMap, _ImportUseMap, IntFIMSpecs, ImpFIMSpecs,
        IntTypeDefnMap, IntInstDefnMap, IntModeDefnMap,
        IntTypeClasses, IntInstances, IntPredDecls, IntModeDecls,
        IntForeignEnumMap, IntDeclPragmas, IntPromises, IntTypeRepnMap,
        ImpTypeDefnMap, ImpForeignEnumMap, ImpTypeClasses),
    mercury_output_module_decl(Stream, "module", ModuleName, !IO),
    mercury_output_maybe_module_version_numbers(Stream, ModuleName,
        MaybeVersionNumbers, !IO),

    mercury_output_section_marker(Stream, ms_interface, !IO),
    list.foldl(mercury_output_module_decl(Stream, "include_module"),
        map.sorted_keys(IntInclMap), !IO),
    list.foldl(mercury_output_module_decl(Stream, "use_module"),
        map.sorted_keys(IntUseMap), !IO),
    set.foldl(mercury_output_fim_spec(Stream), IntFIMSpecs, !IO),
    map.foldl_values(mercury_output_type_ctor_all_defns(Info, Stream),
        IntTypeDefnMap, !IO),
    map.foldl_values(mercury_output_inst_ctor_all_defns(Info, Stream),
        IntInstDefnMap, !IO),
    map.foldl_values(mercury_output_mode_ctor_all_defns(Info, Stream),
        IntModeDefnMap, !IO),
    list.foldl(mercury_output_item_typeclass(Info, Stream),
        list.sort(IntTypeClasses), !IO),
    list.foldl(mercury_output_item_instance(Info, Stream),
        list.sort(IntInstances), !IO),
    order_pred_and_mode_decls(IntPredDecls, IntModeDecls, IntPredOrModeDecls),
    mercury_output_pred_or_mode_decls(Info, Stream, IntPredOrModeDecls, !IO),
    map.foldl_values(mercury_format_foreign_enums(Info, Stream),
        IntForeignEnumMap, !IO),
    list.foldl(mercury_output_item_decl_pragma(Info, Stream),
        list.sort(IntDeclPragmas), !IO),
    list.foldl(mercury_output_item_promise(Info, Stream),
        list.sort(IntPromises), !IO),
    map.foldl_values(mercury_output_item_type_repn(Info, Stream),
        IntTypeRepnMap, !IO),

    ( if
        map.is_empty(ImpInclMap),
        map.is_empty(ImpUseMap),
        set.is_empty(ImpFIMSpecs),
        map.is_empty(ImpTypeDefnMap),
        map.is_empty(ImpForeignEnumMap),
        ImpTypeClasses = []
    then
        true
    else
        mercury_output_section_marker(Stream, ms_implementation, !IO),
        list.foldl(mercury_output_module_decl(Stream, "include_module"),
            map.sorted_keys(ImpInclMap), !IO),
        list.foldl(mercury_output_module_decl(Stream, "use_module"),
            map.sorted_keys(ImpUseMap), !IO),
        set.foldl(mercury_output_fim_spec(Stream), ImpFIMSpecs, !IO),
        map.foldl_values(mercury_output_type_ctor_all_defns(Info, Stream),
            ImpTypeDefnMap, !IO),
        map.foldl_values(mercury_format_foreign_enums(Info, Stream),
            ImpForeignEnumMap, !IO),
        list.foldl(mercury_output_item_typeclass(Info, Stream),
            list.sort(ImpTypeClasses), !IO)
    ).

mercury_output_parse_tree_int2(Info, Stream, ParseTreeInt2, !IO) :-
    ParseTreeInt2 = parse_tree_int2(ModuleName, _ModuleContext,
        MaybeVersionNumbers, IntInclMap, _InclMap, IntUseMap, _ImportUseMap,
        IntFIMSpecs, ImpFIMSpecs,
        IntTypeDefnMap, IntInstDefnMap, IntModeDefnMap,
        IntTypeClasses, IntInstances, IntTypeRepnMap,
        ImpTypeDefnMap),
    mercury_output_module_decl(Stream, "module", ModuleName, !IO),
    mercury_output_maybe_module_version_numbers(Stream, ModuleName,
        MaybeVersionNumbers, !IO),

    mercury_output_section_marker(Stream, ms_interface, !IO),
    list.foldl(mercury_output_module_decl(Stream, "include_module"),
        map.sorted_keys(IntInclMap), !IO),
    list.foldl(mercury_output_module_decl(Stream, "use_module"),
        map.sorted_keys(IntUseMap), !IO),
    set.foldl(mercury_output_fim_spec(Stream), IntFIMSpecs, !IO),
    map.foldl_values(mercury_output_type_ctor_all_defns(Info, Stream),
        IntTypeDefnMap, !IO),
    map.foldl_values(mercury_output_inst_ctor_all_defns(Info, Stream),
        IntInstDefnMap, !IO),
    map.foldl_values(mercury_output_mode_ctor_all_defns(Info, Stream),
        IntModeDefnMap, !IO),
    list.foldl(mercury_output_item_typeclass(Info, Stream),
        list.sort(IntTypeClasses), !IO),
    list.foldl(mercury_output_item_instance(Info, Stream),
        list.sort(IntInstances), !IO),
    map.foldl_values(mercury_output_item_type_repn(Info, Stream),
        IntTypeRepnMap, !IO),

    ( if
        set.is_empty(ImpFIMSpecs),
        map.is_empty(ImpTypeDefnMap)
    then
        true
    else
        mercury_output_section_marker(Stream, ms_implementation, !IO),
        set.foldl(mercury_output_fim_spec(Stream), ImpFIMSpecs, !IO),
        map.foldl_values(mercury_output_type_ctor_all_defns(Info, Stream),
            ImpTypeDefnMap, !IO)
    ).

mercury_output_parse_tree_int3(Info, Stream, ParseTreeInt3, !IO) :-
    ParseTreeInt3 = parse_tree_int3(ModuleName, _ModuleContext,
        IntInclMap, _InclMap, IntImportMap, _ImportUseMap,
        IntTypeDefnMap, IntInstDefnMap, IntModeDefnMap,
        IntTypeClasses, IntInstances, IntTypeRepnMap),
    mercury_output_module_decl(Stream, "module", ModuleName, !IO),
    mercury_output_section_marker(Stream, ms_interface, !IO),
    list.foldl(mercury_output_module_decl(Stream, "include_module"),
        map.sorted_keys(IntInclMap), !IO),
    list.foldl(mercury_output_module_decl(Stream, "import_module"),
        map.sorted_keys(IntImportMap), !IO),
    map.foldl_values(mercury_output_type_ctor_all_defns(Info, Stream),
        IntTypeDefnMap, !IO),
    map.foldl_values(mercury_output_inst_ctor_all_defns(Info, Stream),
        IntInstDefnMap, !IO),
    map.foldl_values(mercury_output_mode_ctor_all_defns(Info, Stream),
        IntModeDefnMap, !IO),
    list.foldl(mercury_output_item_typeclass(Info, Stream),
        list.sort(IntTypeClasses), !IO),
    list.foldl(mercury_output_item_instance(Info, Stream),
        list.sort(IntInstances), !IO),
    map.foldl_values(mercury_output_item_type_repn(Info, Stream),
        IntTypeRepnMap, !IO).

%---------------------------------------------------------------------------%

mercury_output_parse_tree_plain_opt(Info, Stream, ParseTree, !IO) :-
    ParseTree = parse_tree_plain_opt(ModuleName, _Context,
        UseMap, FIMSpecs, TypeDefns, ForeignEnums,
        InstDefns, ModeDefns, TypeClasses, Instances,
        PredDecls, ModeDecls, Clauses, ForeignProcs, Promises,
        PredMarkers, TypeSpecs, UnusedArgs, Terms, Term2s,
        Exceptions, Trailings, MMTablings, Sharings, Reuses),
    Lang = get_output_lang(Info),
    io.write_string(Stream, "% .opt file\n", !IO),
    mercury_output_module_decl(Stream, "module", ModuleName, !IO),
    list.foldl(mercury_output_module_decl(Stream, "use_module"),
        map.keys(UseMap), !IO),
    list.foldl(mercury_output_item_type_defn(Info, Stream), TypeDefns, !IO),
    list.foldl(mercury_format_item_foreign_enum(Info, Stream),
        ForeignEnums, !IO),
    list.foldl(mercury_output_item_inst_defn(Info, Stream), InstDefns, !IO),
    list.foldl(mercury_output_item_mode_defn(Info, Stream), ModeDefns, !IO),
    list.foldl(mercury_output_item_typeclass(Info, Stream), TypeClasses, !IO),
    list.foldl(mercury_output_item_instance(Info, Stream), Instances, !IO),
    % XXX FIMSpecs should be output just after UsedModuleNames, but
    % the existing code whose output we want to compare the output
    % of this code to prints them in this position.
    set.foldl(mercury_output_fim_spec(Stream), FIMSpecs, !IO),
    list.foldl(mercury_output_item_pred_decl(Info, Stream), PredDecls, !IO),
    list.foldl(mercury_output_item_mode_decl(Info, Stream), ModeDecls, !IO),
    list.foldl(mercury_output_item_pred_marker(Stream),
        list.map(project_pragma_type, PredMarkers), !IO),
    list.foldl(mercury_output_pragma_type_spec(Stream, print_name_only, Lang),
        list.map(project_pragma_type, TypeSpecs), !IO),
    list.foldl(mercury_output_item_clause(Info, Stream), Clauses, !IO),
    list.foldl(mercury_output_pragma_foreign_proc(Stream, Lang),
        list.map(project_pragma_type, ForeignProcs), !IO),
    list.foldl(mercury_output_item_promise(Info, Stream), Promises, !IO),

    list.foldl(mercury_output_pragma_unused_args(Stream),
        list.map(project_pragma_type, UnusedArgs), !IO),
    list.foldl(write_pragma_termination_info(Stream, Lang),
        list.map(project_pragma_type, Terms), !IO),
    list.foldl(write_pragma_termination2_info(Stream, Lang),
        list.map(project_pragma_type, Term2s), !IO),
    list.foldl(mercury_output_pragma_exceptions(Stream),
        list.map(project_pragma_type, Exceptions), !IO),
    list.foldl(mercury_output_pragma_trailing_info(Stream),
        list.map(project_pragma_type, Trailings), !IO),
    list.foldl(mercury_output_pragma_mm_tabling_info(Stream),
        list.map(project_pragma_type, MMTablings), !IO),
    list.foldl(mercury_output_pragma_mm_tabling_info(Stream),
        list.map(project_pragma_type, MMTablings), !IO),
    list.foldl(write_pragma_structure_sharing_info(Stream, Lang),
        list.map(project_pragma_type, Sharings), !IO),
    list.foldl(write_pragma_structure_reuse_info(Stream, Lang),
        list.map(project_pragma_type, Reuses), !IO),
    io.nl(Stream, !IO).

mercury_output_parse_tree_trans_opt(Info, Stream, ParseTree, !IO) :-
    ParseTree = parse_tree_trans_opt(ModuleName, _Context,
        Terms, Term2s, Exceptions, Trailings, MMTablings, Sharings, Reuses),
    Lang = get_output_lang(Info),
    io.write_string(Stream, "% .trans_opt file\n", !IO),
    mercury_output_module_decl(Stream, "module", ModuleName, !IO),
    list.foldl(write_pragma_termination_info(Stream, Lang),
        list.map(project_pragma_type, Terms), !IO),
    list.foldl(write_pragma_termination2_info(Stream, Lang),
        list.map(project_pragma_type, Term2s), !IO),
    list.foldl(mercury_output_pragma_exceptions(Stream),
        list.map(project_pragma_type, Exceptions), !IO),
    list.foldl(mercury_output_pragma_trailing_info(Stream),
        list.map(project_pragma_type, Trailings), !IO),
    list.foldl(mercury_output_pragma_mm_tabling_info(Stream),
        list.map(project_pragma_type, MMTablings), !IO),
    list.foldl(mercury_output_pragma_mm_tabling_info(Stream),
        list.map(project_pragma_type, MMTablings), !IO),
    list.foldl(write_pragma_structure_sharing_info(Stream, Lang),
        list.map(project_pragma_type, Sharings), !IO),
    list.foldl(write_pragma_structure_reuse_info(Stream, Lang),
        list.map(project_pragma_type, Reuses), !IO),
    io.nl(Stream, !IO).

%---------------------------------------------------------------------------%

mercury_output_raw_compilation_unit(Info, Stream, CompUnit, !IO) :-
    CompUnit = raw_compilation_unit(ModuleName, _Context, ItemBlocks),
    io.write_string(Stream, "% raw compilation unit\n", !IO),
    mercury_output_module_decl(Stream, "module", ModuleName, !IO),
    mercury_output_raw_item_blocks(Info, Stream, ItemBlocks, !IO).

mercury_output_aug_compilation_unit(Info, Stream, AugCompUnit, !IO) :-
    AugCompUnit = aug_compilation_unit(ModuleName, _Context,
        ModuleVersionNumbers, ParseTreeModuleSrc,
        AncestorIntSpecs, DirectIntSpecs, IndirectIntSpecs,
        PlainOptSpecs, TransOptSpecs, IntForOptSpecs),
    io.write_string(Stream, "% augmented compilation unit\n", !IO),
    mercury_output_module_decl(Stream, "module", ModuleName, !IO),
    io.write_string(Stream, "% The module version numbers.\n", !IO),
    map.foldl(mercury_output_module_version_numbers(Stream),
        ModuleVersionNumbers, !IO),
    io.write_string(Stream, "% The main module.\n", !IO),
    mercury_output_parse_tree_module_src(Info, Stream,
        ParseTreeModuleSrc, !IO),
    io.write_string(Stream, "% The ancestor interfaces.\n", !IO),
    map.foldl_values(mercury_output_ancestor_int_spec(Info, Stream),
        AncestorIntSpecs, !IO),
    io.write_string(Stream, "% The directly imported interfaces.\n", !IO),
    map.foldl_values(mercury_output_direct_int_spec(Info, Stream),
        DirectIntSpecs, !IO),
    io.write_string(Stream, "% The indirectly imported interfaces.\n", !IO),
    map.foldl_values(mercury_output_indirect_int_spec(Info, Stream),
        IndirectIntSpecs, !IO),
    io.write_string(Stream, "% The plain optimization files.\n", !IO),
    map.foldl_values(mercury_output_parse_tree_plain_opt(Info, Stream),
        PlainOptSpecs, !IO),
    io.write_string(Stream, "% The transitive optimization files.\n", !IO),
    map.foldl_values(mercury_output_parse_tree_trans_opt(Info, Stream),
        TransOptSpecs, !IO),
    io.write_string(Stream, "% The interface item blocks for optimization.\n",
        !IO),
    map.foldl_values(mercury_output_int_for_opt_spec(Info, Stream),
        IntForOptSpecs, !IO).

%---------------------------------------------------------------------------%

:- pred mercury_output_maybe_module_version_numbers(io.text_output_stream::in,
    module_name::in, maybe_version_numbers::in, io::di, io::uo) is det.

mercury_output_maybe_module_version_numbers(Stream, ModuleName,
        MaybeVersionNumbers, !IO) :-
    (
        MaybeVersionNumbers = no_version_numbers
    ;
        MaybeVersionNumbers = version_numbers(VersionNumbers),
        mercury_output_module_version_numbers(Stream, ModuleName,
            VersionNumbers, !IO)
    ).

:- pred mercury_output_module_version_numbers(io.text_output_stream::in,
    module_name::in, version_numbers::in, io::di, io::uo) is det.

mercury_output_module_version_numbers(Stream, ModuleName, VersionNumbers,
        !IO) :-
    io.write_string(Stream, ":- version_numbers(", !IO),
    io.write_int(Stream, version_numbers_version_number, !IO),
    io.write_string(Stream, ", ", !IO),
    mercury_output_bracketed_sym_name(ModuleName, Stream, !IO),
    io.write_string(Stream, ",\n", !IO),
    recompilation.version.write_version_numbers(Stream, VersionNumbers, !IO),
    io.write_string(Stream, ").\n", !IO).

%---------------------------------------------------------------------------%

:- pred mercury_output_module_components(merc_out_info::in,
    io.text_output_stream::in, maybe(module_section)::in,
    list(module_component)::in, io::di, io::uo) is det.

mercury_output_module_components(_, _, _, [], !IO).
mercury_output_module_components(Info, Stream, MaybePrevSectionKind,
        [Component | Components], !IO) :-
    (
        Component = mc_section(_, SectionKind, _SectionContext,
            InclsCord, AvailsCord, FIMsCord, ItemsCord),
        mercury_output_section_marker(Stream, SectionKind, !IO),
        list.foldl(mercury_output_item_include(Info, Stream),
            cord.list(InclsCord), !IO),
        list.foldl(mercury_output_item_avail(Info, Stream),
            cord.list(AvailsCord), !IO),
        list.foldl(mercury_output_item_foreign_import_module(Stream),
            cord.list(FIMsCord), !IO),
        mercury_output_items(Info, Stream, cord.list(ItemsCord), !IO),
        MaybeCurSectionKind = yes(SectionKind)
    ;
        Component = mc_nested_submodule(_, SectionKind, _, SubParseTree),
        Lang = get_output_lang(Info),
        (
            Lang = output_mercury,
            ( if
                MaybePrevSectionKind = yes(PrevSectionKind),
                PrevSectionKind = SectionKind
            then
                true
            else
                mercury_output_section_marker(Stream, SectionKind, !IO)
            )
        ;
            Lang = output_debug,
            mercury_output_section_marker(Stream, SectionKind, !IO),
            (
                SectionKind = ms_interface,
                io.write_string(Stream,
                    "% nested submodule in interface\n", !IO)
            ;
                SectionKind = ms_implementation,
                io.write_string(Stream,
                    "% nested submodule in implementation\n", !IO)
            )
        ),
        mercury_output_parse_tree_src(Info, Stream, SubParseTree, !IO),
        MaybeCurSectionKind = MaybePrevSectionKind
    ),
    mercury_output_module_components(Info, Stream, MaybeCurSectionKind,
        Components, !IO).

%---------------------------------------------------------------------------%

mercury_output_raw_item_blocks(_, _, [], !IO).
mercury_output_raw_item_blocks(Info, Stream,
        [RawItemBlock | RawItemBlocks], !IO) :-
    mercury_output_raw_item_block(Info, Stream, RawItemBlock, !IO),
    mercury_output_raw_item_blocks(Info, Stream, RawItemBlocks, !IO).

mercury_output_raw_item_block(Info, Stream, RawItemBlock, !IO) :-
    RawItemBlock = item_block(_, SectionKind, Incls, Avails, FIMs, Items),
    mercury_output_section_marker(Stream, SectionKind, !IO),
    list.foldl(mercury_output_item_include(Info, Stream), Incls, !IO),
    list.foldl(mercury_output_item_avail(Info, Stream), Avails, !IO),
    list.foldl(mercury_output_item_foreign_import_module(Stream), FIMs, !IO),
    mercury_output_items(Info, Stream, Items, !IO).

%---------------------------------------------------------------------------%

mercury_output_src_item_blocks(_, _, [], !IO).
mercury_output_src_item_blocks(Info, Stream,
        [SrcItemBlock | SrcItemBlocks], !IO) :-
    mercury_output_src_item_block(Info, Stream, SrcItemBlock, !IO),
    mercury_output_src_item_blocks(Info, Stream, SrcItemBlocks, !IO).

mercury_output_src_item_block(Info, Stream, SrcItemBlock, !IO) :-
    SrcItemBlock = item_block(_, SrcSectionKind, Incls, Avails, FIMs, Items),
    mercury_output_src_section_marker(Stream, SrcSectionKind, !IO),
    list.foldl(mercury_output_item_include(Info, Stream), Incls, !IO),
    list.foldl(mercury_output_item_avail(Info, Stream), Avails, !IO),
    list.foldl(mercury_output_item_foreign_import_module(Stream), FIMs, !IO),
    mercury_output_items(Info, Stream, Items, !IO).

mercury_output_int_item_blocks(_, _, [], !IO).
mercury_output_int_item_blocks(Info, Stream,
        [IntItemBlock | IntItemBlocks], !IO) :-
    mercury_output_int_item_block(Info, Stream, IntItemBlock, !IO),
    mercury_output_int_item_blocks(Info, Stream, IntItemBlocks, !IO).

mercury_output_int_item_block(Info, Stream, IntItemBlock, !IO) :-
    IntItemBlock = item_block(_, IntSectionKind, Incls, Avails, FIMs, Items),
    mercury_output_int_section_marker(Stream, IntSectionKind, !IO),
    list.foldl(mercury_output_item_include(Info, Stream), Incls, !IO),
    list.foldl(mercury_output_item_avail(Info, Stream), Avails, !IO),
    list.foldl(mercury_output_item_foreign_import_module(Stream), FIMs, !IO),
    mercury_output_items(Info, Stream, Items, !IO).

mercury_output_opt_item_blocks(_, _, [], !IO).
mercury_output_opt_item_blocks(Info, Stream,
        [OptItemBlock | OptItemBlocks], !IO) :-
    mercury_output_opt_item_block(Info, Stream, OptItemBlock, !IO),
    mercury_output_opt_item_blocks(Info, Stream, OptItemBlocks, !IO).

mercury_output_opt_item_block(Info, Stream, OptItemBlock, !IO) :-
    OptItemBlock = item_block(_, OptSectionKind, Incls, Avails, FIMs, Items),
    mercury_output_opt_section_marker(Stream, OptSectionKind, !IO),
    expect(unify(Incls, []), $pred, "Incls != []"),
    list.foldl(mercury_output_item_avail(Info, Stream), Avails, !IO),
    list.foldl(mercury_output_item_foreign_import_module(Stream), FIMs, !IO),
    mercury_output_items(Info, Stream, Items, !IO).

mercury_output_int_for_opt_item_blocks(_, _, [], !IO).
mercury_output_int_for_opt_item_blocks(Info, Stream,
        [IntForOptItemBlock | IntForOptItemBlocks], !IO) :-
    mercury_output_int_for_opt_item_block(Info, Stream,
        IntForOptItemBlock, !IO),
    mercury_output_int_for_opt_item_blocks(Info, Stream,
        IntForOptItemBlocks, !IO).

mercury_output_int_for_opt_item_block(Info, Stream, IntForOptItemBlock, !IO) :-
    IntForOptItemBlock = item_block(_, IntForOptSectionKind,
        Incls, Avails, FIMs, Items),
    mercury_output_int_for_opt_section_marker(Stream,
        IntForOptSectionKind, !IO),
    list.foldl(mercury_output_item_include(Info, Stream), Incls, !IO),
    list.foldl(mercury_output_item_avail(Info, Stream), Avails, !IO),
    list.foldl(mercury_output_item_foreign_import_module(Stream), FIMs, !IO),
    mercury_output_items(Info, Stream, Items, !IO).

%---------------------------------------------------------------------------%

:- pred mercury_output_section_marker(io.text_output_stream::in,
    module_section::in, io::di, io::uo) is det.

mercury_output_section_marker(Stream, Section, !IO) :-
    (
        Section = ms_interface,
        io.write_string(Stream, ":- interface.\n", !IO)
    ;
        Section = ms_implementation,
        io.write_string(Stream, ":- implementation.\n", !IO)
    ).

%---------------------------------------------------------------------------%

:- pred mercury_output_src_section_marker(io.text_output_stream::in,
    src_module_section::in, io::di, io::uo) is det.

mercury_output_src_section_marker(Stream, SrcSection, !IO) :-
    (
        SrcSection = sms_interface,
        io.write_string(Stream, ":- interface.\n", !IO)
    ;
        SrcSection = sms_implementation,
        io.write_string(Stream, ":- implementation.\n", !IO)
    ;
        SrcSection = sms_impl_but_exported_to_submodules,
        io.write_string(Stream,
            ":- ams_impl_but_exported_to_submodules.\n", !IO)
    ).

:- pred mercury_output_int_section_marker(io.text_output_stream::in,
    int_module_section::in, io::di, io::uo) is det.

mercury_output_int_section_marker(Stream, IntSection, !IO) :-
    (
        IntSection = ims_imported_or_used(ModuleName, IntFileKind,
            ImportLocn, ImportedOrUsed),
        int_file_kind_to_extension(IntFileKind, ExtStr, _Ext),
        (
            ImportedOrUsed = iou_imported,
            io.write_string(Stream, ":- ims_imported", !IO)
        ;
            ImportedOrUsed = iou_used,
            io.write_string(Stream, ":- ims_used", !IO)
        ;
            ImportedOrUsed = iou_used_and_imported,
            io.write_string(Stream, ":- ims_used_and_imported", !IO)
        ),
        io.write_string(Stream, "(", !IO),
        io.write_string(Stream, sym_name_to_string(ModuleName), !IO),
        io.write_string(Stream, ExtStr, !IO),
        io.write_string(Stream, ", ", !IO),
        io.write(Stream, ImportLocn, !IO),
        io.write_string(Stream, ").\n", !IO)
    ;
        IntSection = ims_abstract_imported(ModuleName, IntFileKind),
        int_file_kind_to_extension(IntFileKind, ExtStr, _Ext),
        io.write_string(Stream, ":- ims_abstract_imported(", !IO),
        io.write_string(Stream, sym_name_to_string(ModuleName), !IO),
        io.write_string(Stream, ExtStr, !IO),
        io.write_string(Stream, ").\n", !IO)
    ).

:- pred mercury_output_opt_section_marker(io.text_output_stream::in,
    opt_module_section::in, io::di, io::uo) is det.

mercury_output_opt_section_marker(Stream, OptSection, !IO) :-
    (
        OptSection = oms_opt_imported(ModuleName, OptFileKind),
        opt_file_kind_to_extension(OptFileKind, ExtStr, _Ext),
        io.write_string(Stream, ":- oms_opt_imported(", !IO),
        io.write_string(Stream, sym_name_to_string(ModuleName), !IO),
        io.write_string(Stream, ExtStr, !IO),
        io.write_string(Stream, ").\n", !IO)
    ).

:- pred mercury_output_int_for_opt_section_marker(
    io.text_output_stream::in, int_for_opt_module_section::in,
    io::di, io::uo) is det.

mercury_output_int_for_opt_section_marker(Stream, IntForOptSection, !IO) :-
    (
        IntForOptSection = ioms_opt_imported(ModuleName, IntFileKind),
        int_file_kind_to_extension(IntFileKind, ExtStr, _Ext),
        io.write_string(Stream, ":- ioms_opt_imported(", !IO),
        io.write_string(Stream, sym_name_to_string(ModuleName), !IO),
        io.write_string(Stream, ExtStr, !IO),
        io.write_string(Stream, ").\n", !IO)
    ).

%---------------------------------------------------------------------------%

:- pred mercury_output_item_include(merc_out_info::in,
    io.text_output_stream::in, item_include::in, io::di, io::uo) is det.

mercury_output_item_include(Info, Stream, ItemInclude, !IO) :-
    ItemInclude = item_include(ModuleName, Context, _SeqNum),
    Decl = "include_module",
    maybe_output_line_number(Info, Context, Stream, !IO),
    mercury_output_module_decl(Stream, Decl, ModuleName, !IO).

:- pred mercury_output_item_avail(merc_out_info::in,
    io.text_output_stream::in, item_avail::in, io::di, io::uo) is det.

mercury_output_item_avail(Info, Stream, Avail, !IO) :-
    (
        Avail = avail_import(avail_import_info(ModuleName, Context, _SeqNum)),
        Decl = "import_module"
    ;
        Avail = avail_use(avail_use_info(ModuleName, Context, _SeqNum)),
        Decl = "use_module"
    ),
    maybe_output_line_number(Info, Context, Stream, !IO),
    mercury_output_module_decl(Stream, Decl, ModuleName, !IO).

:- pred mercury_output_module_decl(io.text_output_stream::in,
    string::in, module_name::in, io::di, io::uo) is det.

mercury_output_module_decl(Stream, Decl, ModuleName, !IO) :-
    io.write_string(Stream, ":- ", !IO),
    io.write_string(Stream, Decl, !IO),
    io.write_string(Stream, " ", !IO),
    mercury_output_bracketed_sym_name(ModuleName, Stream, !IO),
    io.write_string(Stream, ".\n", !IO).

%---------------------------------------------------------------------------%

:- pred mercury_output_items(merc_out_info::in, io.text_output_stream::in,
    list(item)::in, io::di, io::uo) is det.

mercury_output_items(_, _, [], !IO).
mercury_output_items(Info, Stream, [Item | Items], !IO) :-
    mercury_output_item(Info, Stream, Item, !IO),
    mercury_output_items(Info, Stream, Items, !IO).

mercury_output_item(Info, Stream, Item, !IO) :-
    (
        Item = item_clause(ItemClause),
        mercury_output_item_clause(Info, Stream, ItemClause, !IO)
    ;
        Item = item_type_defn(ItemTypeDefn),
        mercury_output_item_type_defn(Info, Stream, ItemTypeDefn, !IO)
    ;
        Item = item_inst_defn(ItemInstDefn),
        mercury_output_item_inst_defn(Info, Stream, ItemInstDefn, !IO)
    ;
        Item = item_mode_defn(ItemModeDefn),
        mercury_output_item_mode_defn(Info, Stream, ItemModeDefn, !IO)
    ;
        Item = item_pred_decl(ItemPredDecl),
        mercury_output_item_pred_decl(Info, Stream, ItemPredDecl, !IO)
    ;
        Item = item_mode_decl(ItemModeDecl),
        mercury_output_item_mode_decl(Info, Stream, ItemModeDecl, !IO)
    ;
        Item = item_foreign_enum(ItemForeignEnum),
        mercury_format_item_foreign_enum(Info, Stream, ItemForeignEnum, !IO)
    ;
        Item = item_foreign_export_enum(ItemForeignExportEnum),
        mercury_format_item_foreign_export_enum(Info, ItemForeignExportEnum,
            Stream, !IO)
    ;
        Item = item_decl_pragma(ItemDeclPragma),
        mercury_output_item_decl_pragma(Info, Stream, ItemDeclPragma, !IO)
    ;
        Item = item_impl_pragma(ItemImplPragma),
        mercury_output_item_impl_pragma(Info, Stream, ItemImplPragma, !IO)
    ;
        Item = item_generated_pragma(ItemGenPragma),
        mercury_output_item_generated_pragma(Info, Stream, ItemGenPragma, !IO)
    ;
        Item = item_promise(ItemPromise),
        mercury_output_item_promise(Info, Stream, ItemPromise, !IO)
    ;
        Item = item_typeclass(ItemTypeClass),
        mercury_output_item_typeclass(Info, Stream, ItemTypeClass, !IO)
    ;
        Item = item_instance(ItemInstance),
        mercury_output_item_instance(Info, Stream, ItemInstance, !IO)
    ;
        Item = item_initialise(ItemInitialise),
        mercury_output_item_initialise(Info, Stream, ItemInitialise, !IO)
    ;
        Item = item_finalise(ItemFinalise),
        mercury_output_item_finalise(Info, Stream, ItemFinalise, !IO)
    ;
        Item = item_mutable(ItemMutable),
        mercury_output_item_mutable(Info, Stream, ItemMutable, !IO)
    ;
        Item = item_type_repn(ItemTypeRepn),
        mercury_output_item_type_repn(Info, Stream, ItemTypeRepn, !IO)
    ).

%---------------------------------------------------------------------------%

:- pred mercury_output_pred_or_mode_decls(merc_out_info::in,
    io.text_output_stream::in, list(pred_or_mode_decl_item)::in,
    io::di, io::uo) is det.

mercury_output_pred_or_mode_decls(_, _, [], !IO).
mercury_output_pred_or_mode_decls(Info, Stream, [Item | Items], !IO) :-
    mercury_output_pred_or_mode_decl(Info, Stream, Item, !IO),
    mercury_output_pred_or_mode_decls(Info, Stream, Items, !IO).

:- pred mercury_output_pred_or_mode_decl(merc_out_info::in,
    io.text_output_stream::in, pred_or_mode_decl_item::in,
    io::di, io::uo) is det.

mercury_output_pred_or_mode_decl(Info, Stream, Item, !IO) :-
    (
        Item = pomd_pred(ItemPredDecl),
        mercury_output_item_pred_decl(Info, Stream, ItemPredDecl, !IO)
    ;
        Item = pomd_mode(ItemModeDecl),
        mercury_output_item_mode_decl(Info, Stream, ItemModeDecl, !IO)
    ).

%---------------------------------------------------------------------------%

:- pred mercury_output_type_ctor_all_defns(merc_out_info::in,
    io.text_output_stream::in, type_ctor_all_defns::in, io::di, io::uo) is det.

mercury_output_type_ctor_all_defns(Info, Stream, TypeCtorAllDefns, !IO) :-
    TypeCtorAllDefns = type_ctor_all_defns(SolverAbs, SolverNonAbs,
        StdAbs, StdEqv, StdDu, CJCs),
    CJCs = c_java_csharp(ForeignC, ForeignJava, ForeignCsharp),
    AbsToGen =
        ( func(Item) = Item ^ td_ctor_defn :=
            parse_tree_abstract_type(Item ^ td_ctor_defn)
        ),
    SolverToGen =
        ( func(Item) = Item ^ td_ctor_defn :=
            parse_tree_solver_type(Item ^ td_ctor_defn)
        ),
    EqvToGen =
        ( func(Item) = Item ^ td_ctor_defn :=
            parse_tree_eqv_type(Item ^ td_ctor_defn)
        ),
    DuToGen =
        ( func(Item) = Item ^ td_ctor_defn :=
            parse_tree_du_type(Item ^ td_ctor_defn)
        ),
    ForeignToGen =
        ( func(Item) = Item ^ td_ctor_defn :=
            parse_tree_foreign_type(Item ^ td_ctor_defn)
        ),
    list.foldl(mercury_output_item_type_defn(Info, Stream),
        list.map(AbsToGen, SolverAbs), !IO),
    list.foldl(mercury_output_item_type_defn(Info, Stream),
        list.map(SolverToGen, SolverNonAbs), !IO),
    list.foldl(mercury_output_item_type_defn(Info, Stream),
        list.map(AbsToGen, StdAbs), !IO),
    list.foldl(mercury_output_item_type_defn(Info, Stream),
        list.map(EqvToGen, StdEqv), !IO),
    list.foldl(mercury_output_item_type_defn(Info, Stream),
        list.map(DuToGen, StdDu), !IO),
    list.foldl(mercury_output_item_type_defn(Info, Stream),
        list.map(ForeignToGen, ForeignC), !IO),
    list.foldl(mercury_output_item_type_defn(Info, Stream),
        list.map(ForeignToGen, ForeignJava), !IO),
    list.foldl(mercury_output_item_type_defn(Info, Stream),
        list.map(ForeignToGen, ForeignCsharp), !IO).

:- pred mercury_output_item_type_defn(merc_out_info::in,
    io.text_output_stream::in, item_type_defn_info::in, io::di, io::uo) is det.

mercury_output_item_type_defn(Info, Stream, ItemTypeDefn, !IO) :-
    % XXX We should not use the tvar names in TypeVarSet; we should be
    % using standard tvar names such as TV1, TV2 etc. This should allow
    % any automatically generated interface files to remain unchanged
    % when the names of the type variables change in the source code,
    % thus avoiding the cascade of module recompilations that would
    % otherwise result.
    ItemTypeDefn = item_type_defn_info(SymName0, TypeParams, TypeDefn,
        TypeVarSet, Context, _SeqNum),
    maybe_unqualify_sym_name(Info, SymName0, SymName),
    maybe_output_line_number(Info, Context, Stream, !IO),
    Args = list.map((func(V) = term.variable(V, Context)), TypeParams),
    construct_qualified_term_with_context(SymName, Args, Context, TypeTerm),
    (
        TypeDefn = parse_tree_abstract_type(DetailsAbstract),
        (
            ( DetailsAbstract = abstract_type_general
            ; DetailsAbstract = abstract_dummy_type
            ; DetailsAbstract = abstract_notag_type
            ; DetailsAbstract = abstract_type_fits_in_n_bits(_)
            ; DetailsAbstract = abstract_subtype(_)
            ),
            IsSolverType = non_solver_type
        ;
            DetailsAbstract = abstract_solver_type,
            IsSolverType = solver_type
        ),
        mercury_output_begin_type_decl(Stream, IsSolverType, !IO),
        mercury_output_term_nq(TypeVarSet, print_name_only,
            next_to_graphic_token, TypeTerm, Stream, !IO),
        (
            DetailsAbstract = abstract_type_fits_in_n_bits(NumBits),
            % XXX TYPE_REPN Instead of adding this information to the
            % generated type definition, generate and write out
            % a separate type_repn item instead.
            mercury_output_where_abstract_enum_type(Stream, NumBits, !IO)
        ;
            ( DetailsAbstract = abstract_dummy_type
            ; DetailsAbstract = abstract_notag_type
            )
            % XXX TYPE_REPN The same concern applies here, but these
            % kinds of abstract types are not yet generated anywhere,
            % so we don't have anything to do for them.
        ;
            DetailsAbstract = abstract_subtype(SuperTypeCtor),
            mercury_output_where_abstract_subtype(Stream, SuperTypeCtor, !IO)
        ;
            ( DetailsAbstract = abstract_type_general
            ; DetailsAbstract = abstract_solver_type
            )
        ),
        io.write_string(Stream, ".\n", !IO)
    ;
        TypeDefn = parse_tree_eqv_type(DetailsEqv),
        DetailsEqv = type_details_eqv(EqvType),
        mercury_output_begin_type_decl(Stream, non_solver_type, !IO),
        mercury_output_term(TypeVarSet, print_name_only, TypeTerm,
            Stream, !IO),
        io.write_string(Stream, " == ", !IO),
        mercury_output_type(TypeVarSet, print_name_only, EqvType, Stream, !IO),
        io.write_string(Stream, ".\n", !IO)
    ;
        TypeDefn = parse_tree_du_type(DetailsDu),
        DetailsDu = type_details_du(MaybeSuperType, OoMCtors, MaybeCanonical,
            MaybeDirectArgs),
        mercury_output_begin_type_decl(Stream, non_solver_type, !IO),
        mercury_output_term(TypeVarSet, print_name_only, TypeTerm,
            Stream, !IO),
        (
            MaybeSuperType = no
        ;
            MaybeSuperType = yes(SuperType),
            io.write_string(Stream, " =< ", !IO),
            mercury_output_type(TypeVarSet, print_name_only, SuperType,
                Stream, !IO)
        ),
        OoMCtors = one_or_more(HeadCtor, TailCtors),
        mercury_output_ctors(TypeVarSet, yes, HeadCtor, TailCtors,
            Stream, !IO),
        mercury_output_where_attributes(Info, TypeVarSet, no,
            MaybeCanonical, MaybeDirectArgs, Stream, !IO),
        io.write_string(Stream, ".\n", !IO)
    ;
        TypeDefn = parse_tree_solver_type(DetailsSolver),
        DetailsSolver =
            type_details_solver(SolverTypeDetails, MaybeCanonical),
        mercury_output_begin_type_decl(Stream, solver_type, !IO),
        mercury_output_term(TypeVarSet, print_name_only, TypeTerm,
            Stream, !IO),
        mercury_output_where_attributes(Info, TypeVarSet,
            yes(SolverTypeDetails), MaybeCanonical, no, Stream, !IO),
        io.write_string(Stream, ".\n", !IO)
    ;
        TypeDefn = parse_tree_foreign_type(DetailsForeign),
        DetailsForeign = type_details_foreign(ForeignType, MaybeCanonical,
            foreign_type_assertions(Assertions)),
        io.write_string(Stream, ":- pragma foreign_type(", !IO),
        (
            ForeignType = c(_),
            io.write_string(Stream, "c, ", !IO)
        ;
            ForeignType = java(_),
            io.write_string(Stream, "java, ", !IO)
        ;
            ForeignType = csharp(_),
            io.write_string(Stream, "csharp, ", !IO)
        ),
        mercury_output_term(TypeVarSet, print_name_only, TypeTerm,
            Stream, !IO),
        io.write_string(Stream, ", \"", !IO),
        (
            ForeignType = c(c_type(ForeignTypeStr))
        ;
            ForeignType = java(java_type(ForeignTypeStr))
        ;
            ForeignType = csharp(csharp_type(ForeignTypeStr))
        ),
        io.write_string(Stream, ForeignTypeStr, !IO),
        io.write_string(Stream, "\"", !IO),
        set.to_sorted_list(Assertions, AssertionsList),
        (
            AssertionsList = []
        ;
            AssertionsList = [_ | _],
            AssertionStrs =
                list.map(foreign_type_assertion_to_string, AssertionsList),
            AssertionsStr = string.join_list(", ", AssertionStrs),
            io.write_string(Stream, ", [", !IO),
            io.write_string(Stream, AssertionsStr, !IO),
            io.write_string(Stream, "]", !IO)
        ),
        io.write_string(Stream, ")", !IO),
        mercury_output_where_attributes(Info, TypeVarSet, no,
            MaybeCanonical, no, Stream, !IO),
        io.write_string(Stream, ".\n", !IO)
    ).

%---------------------%
%
% Predicates needed to output more than one kind of type.
%

:- pred mercury_output_begin_type_decl(io.text_output_stream::in,
    is_solver_type::in, io::di, io::uo) is det.

mercury_output_begin_type_decl(Stream, IsSolverType, !IO) :-
    (
        IsSolverType = solver_type,
        io.write_string(Stream, ":- solver type ", !IO)
    ;
        IsSolverType = non_solver_type,
        io.write_string(Stream, ":- type ", !IO)
    ).

mercury_output_where_attributes(Info, TypeVarSet, MaybeSolverTypeDetails,
        MaybeCanonical, MaybeDirectArgs, Stream, !IO) :-
    ( if
        MaybeSolverTypeDetails = no,
        ( MaybeCanonical = canon
        ; MaybeCanonical = noncanon(noncanon_subtype)
        ),
        MaybeDirectArgs = no
    then
        true
    else
        io.write_string(Stream, "\n    where   ", !IO),
        (
            MaybeCanonical = noncanon(noncanon_abstract(_)),
            MaybeUniPred = no,
            MaybeCmpPred = no,
            io.write_string(Stream, "type_is_abstract_noncanonical", !IO)
        ;
            MaybeCanonical = noncanon(noncanon_subtype),
            MaybeUniPred = no,
            MaybeCmpPred = no
        ;
            (
                MaybeCanonical = canon,
                MaybeUniPred = no,
                MaybeCmpPred = no
            ;
                MaybeCanonical = noncanon(noncanon_uni_cmp(UniPred, CmpPred)),
                MaybeUniPred = yes(UniPred),
                MaybeCmpPred = yes(CmpPred)
            ;
                MaybeCanonical = noncanon(noncanon_uni_only(UniPred)),
                MaybeUniPred = yes(UniPred),
                MaybeCmpPred = no
            ;
                MaybeCanonical = noncanon(noncanon_cmp_only(CmpPred)),
                MaybeUniPred = no,
                MaybeCmpPred = yes(CmpPred)
            ),
            (
                MaybeSolverTypeDetails = yes(SolverTypeDetails),
                mercury_output_solver_type_details(Info, Stream, TypeVarSet,
                    SolverTypeDetails, !IO),
                ( if
                    MaybeUniPred = no,
                    MaybeCmpPred = no,
                    MaybeDirectArgs = no
                then
                    true
                else
                    io.write_string(Stream, ",\n\t\t", !IO)
                )
            ;
                MaybeSolverTypeDetails = no
            )
        ),
        (
            MaybeUniPred = yes(UniPredName),
            io.write_string(Stream, "equality is ", !IO),
            mercury_output_bracketed_sym_name(UniPredName, Stream, !IO),
            ( if
                MaybeCmpPred = no,
                MaybeDirectArgs = no
            then
                true
            else
                io.write_string(Stream, ",\n\t\t", !IO)
            )
        ;
            MaybeUniPred = no
        ),
        (
            MaybeCmpPred = yes(CmpPredName),
            io.write_string(Stream, "comparison is ", !IO),
            mercury_output_bracketed_sym_name(CmpPredName, Stream, !IO),
            (
                MaybeDirectArgs = no
            ;
                MaybeDirectArgs = yes(_),
                io.write_string(Stream, ",\n\t\t", !IO)
            )
        ;
            MaybeCmpPred = no
        ),
        (
            MaybeDirectArgs = yes(DirectArgFunctors),
            io.write_string(Stream, "direct_arg is [", !IO),
            mercury_output_direct_arg_functors(Stream, DirectArgFunctors, !IO),
            io.write_string(Stream, "]", !IO)
        ;
            MaybeDirectArgs = no
        )
        % If you add code to print any more atttributes here, you must change
        % the conditions above for printing the commas before them.
    ).

:- pred mercury_output_direct_arg_functors(io.text_output_stream::in,
    list(sym_name_arity)::in, io::di, io::uo) is det.

mercury_output_direct_arg_functors(Stream, Ctors, !IO) :-
    add_list(mercury_format_sym_name_arity, ", ", Ctors, Stream, !IO).

:- pred mercury_output_solver_type_details(merc_out_info::in,
    io.text_output_stream::in, tvarset::in, solver_type_details::in,
    io::di, io::uo) is det.

mercury_output_solver_type_details(Info, Stream, TypeVarSet, Details, !IO) :-
    Details = solver_type_details(RepresentationType, GroundInst,
        AnyInst, MutableInfos),
    io.write_string(Stream, "representation is ", !IO),
    mercury_output_type(TypeVarSet, print_name_only, RepresentationType,
        Stream, !IO),
    Lang = get_output_lang(Info),
    varset.init(EmptyInstVarSet),
    io.write_string(Stream, ",\n\t\tground is ", !IO),
    mercury_output_inst(Stream, Lang, EmptyInstVarSet, GroundInst, !IO),
    io.write_string(Stream, ",\n\t\tany is ", !IO),
    mercury_output_inst(Stream, Lang, EmptyInstVarSet, AnyInst, !IO),
    (
        MutableInfos = []
    ;
        MutableInfos = [_ | _],
        io.write_string(Stream, ",\n\t\tconstraint_store is [\n\t\t\t", !IO),
        write_out_list(mercury_output_item_mutable_2(Info), ",\n\t\t\t",
            MutableInfos, Stream, !IO),
        io.write_string(Stream, "\n\t\t]", !IO)
    ).

%---------------------%
%
% Predicates needed to output abstract types.
%

:- pred mercury_output_where_abstract_enum_type(io.text_output_stream::in,
    int::in, io::di, io::uo) is det.

mercury_output_where_abstract_enum_type(Stream, NumBits, !IO) :-
    io.write_string(Stream, "\n\twhere\t", !IO),
    io.write_string(Stream, "type_is_abstract_enum(", !IO),
    % XXX TYPE_REPN
    % io.write_string(Stream, "type_is_representable_in_n_bits(", !IO),
    io.write_int(Stream, NumBits, !IO),
    io.write_string(Stream, ")", !IO).

:- pred mercury_output_where_abstract_subtype(io.text_output_stream::in,
    type_ctor::in, io::di, io::uo) is det.

mercury_output_where_abstract_subtype(Stream, TypeCtor, !IO) :-
    io.write_string(Stream, "\n\twhere\t", !IO),
    io.write_string(Stream, "type_is_abstract_subtype(", !IO),
    TypeCtor = type_ctor(SymName, Arity),
    mercury_output_sym_name(SymName, Stream, !IO),
    io.write_string(Stream, "/", !IO),
    io.write_int(Stream, Arity, !IO),
    io.write_string(Stream, ")", !IO).

%---------------------%
%
% Predicates needed to output discriminated union types.
%

:- pred mercury_output_ctors(tvarset::in, bool::in,
    constructor::in, list(constructor)::in, io.text_output_stream::in,
    io::di, io::uo) is det.

mercury_output_ctors(VarSet, First, HeadCtor, TailCtors, Stream, !IO) :-
    (
        First = yes,
        io.write_string(Stream, "\n    --->    ", !IO)
    ;
        First = no,
        io.write_string(Stream, "\n    ;       ", !IO)
    ),
    mercury_output_ctor(VarSet, HeadCtor, Stream, !IO),
    (
        TailCtors = []
    ;
        TailCtors = [HeadTailCtor | TailTailCtors],
        mercury_output_ctors(VarSet, no, HeadTailCtor, TailTailCtors,
            Stream, !IO)
    ).

mercury_output_ctor(TVarSet, Ctor, Stream, !IO) :-
    % NOTE The code of this predicate is almost identical to the
    % code of write_ctor and write_ctor_repn in hlds_out_module.m.
    % Any changes made here will probably need to be made there as well.
    Ctor = ctor(_Ordinal, MaybeExistConstraints, SymName, Args, Arity, _Ctxt),

    % The module name in SymName must be the same as the module qualifier
    % of the type_ctor, so there is no point in printing it.
    Name = unqualify_name(SymName),
    maybe_cons_exist_constraints_to_prefix_suffix(TVarSet, "", "",
        MaybeExistConstraints, ExistConstraintsPrefix, ExistConstraintsSuffix),
    maybe_brace_for_name_prefix_suffix(Arity, Name, BracePrefix, BraceSuffix),
    io.write_string(Stream, ExistConstraintsPrefix, !IO),
    io.write_string(Stream, BracePrefix, !IO),
    (
        Args = [],
        mercury_output_bracketed_sym_name(unqualified(Name), Stream, !IO),
        % This space prevents a terminating full stop from being confused
        % as part of the sym_name if the sym_name contains graphical
        % characters.
        io.write_string(Stream, " ", !IO)
    ;
        Args = [HeadArg | TailArgs],
        mercury_output_sym_name(unqualified(Name), Stream, !IO),
        io.write_string(Stream, "(", !IO),
        mercury_output_ctor_args(Stream, TVarSet, HeadArg, TailArgs, !IO),
        io.write_string(Stream, ")", !IO)
    ),
    io.write_string(Stream, BraceSuffix, !IO),
    io.write_string(Stream, ExistConstraintsSuffix, !IO).

maybe_cons_exist_constraints_to_prefix_suffix(TVarSet, SuffixStart, SuffixEnd,
        MaybeExistConstraints, Prefix, Suffix) :-
    (
        MaybeExistConstraints = no_exist_constraints,
        Prefix = "",
        Suffix = ""
    ;
        MaybeExistConstraints = exist_constraints(ExistConstraints),
        ExistConstraints = cons_exist_constraints(ExistQVars, Constraints,
            _UnconstrainedQVars, _ConstrainedQVars),
        ExistQVarsStr = mercury_quantifier_to_string(TVarSet,
            print_name_only, ExistQVars),
        ConstraintsStr = mercury_prog_constraint_list_to_string(TVarSet,
            print_name_only, "=>", Constraints),
        Prefix = ExistQVarsStr ++ "(",
        Suffix = SuffixStart ++ ConstraintsStr ++ ")" ++ SuffixEnd
    ).

maybe_brace_for_name_prefix_suffix(Arity, Name, Prefix, Suffix) :-
    % We need to quote ';'/2, '{}'/2, '=>'/2, and 'some'/2.
    % XXX I (zs) think that we should not allow these as constructor names.
    ( if
        Arity = 2,
        ( Name = ";"
        ; Name = "{}"
        ; Name = "some"
        ; Name = "=>"
        )
    then
        Prefix = "{ ",
        Suffix = " }"
    else
        Prefix = "",
        Suffix = ""
    ).

:- pred mercury_output_ctor_args(io.text_output_stream::in, tvarset::in,
    constructor_arg::in, list(constructor_arg)::in, io::di, io::uo) is det.

mercury_output_ctor_args(Stream, TVarSet, HeadArg, TailArgs, !IO) :-
    mercury_output_ctor_arg(Stream, TVarSet, HeadArg, !IO),
    (
        TailArgs = []
    ;
        TailArgs = [HeadTailArg | TailTailArgs],
        io.write_string(Stream, ", ", !IO),
        mercury_output_ctor_args(Stream, TVarSet,
            HeadTailArg, TailTailArgs, !IO)
    ).

:- pred mercury_output_ctor_arg(io.text_output_stream::in, tvarset::in,
    constructor_arg::in, io::di, io::uo) is det.

mercury_output_ctor_arg(Stream, TVarSet, Arg, !IO) :-
    Arg = ctor_arg(Name, Type, _Context),
    mercury_output_ctor_arg_name_prefix(Stream, Name, !IO),
    mercury_output_type(TVarSet, print_name_only, Type, Stream, !IO).

:- pred mercury_output_ctor_arg_name_prefix(io.text_output_stream::in,
    maybe(ctor_field_name)::in, io::di, io::uo) is det.

mercury_output_ctor_arg_name_prefix(_Stream, no, !IO).
mercury_output_ctor_arg_name_prefix(Stream, yes(FieldName), !IO) :-
    FieldName = ctor_field_name(Name, _Ctxt),
    mercury_output_bracketed_sym_name(Name, Stream, !IO),
    io.write_string(Stream, " :: ", !IO).

%---------------------------------------------------------------------------%

:- pred mercury_output_inst_ctor_all_defns(merc_out_info::in,
    io.text_output_stream::in, inst_ctor_all_defns::in, io::di, io::uo) is det.

mercury_output_inst_ctor_all_defns(Info, Stream, InstCtorAllDefns, !IO) :-
    InstCtorAllDefns = inst_ctor_all_defns(Abs, Eqv),
    list.foldl(mercury_output_item_inst_defn(Info, Stream), Abs, !IO),
    list.foldl(mercury_output_item_inst_defn(Info, Stream), Eqv, !IO).

:- pred mercury_output_item_inst_defn(merc_out_info::in,
    io.text_output_stream::in, item_inst_defn_info::in, io::di, io::uo) is det.

mercury_output_item_inst_defn(Info, Stream, ItemInstDefn, !IO) :-
    ItemInstDefn = item_inst_defn_info(SymName0, InstParams, MaybeForTypeCtor,
        MaybeAbstractInstDefn, InstVarSet, Context, _SeqNum),
    % If the unqualified name is a builtin inst, then output the qualified
    % name. This prevents the compiler giving an error about redefining
    % builtin insts when an interface file is read back in.
    maybe_unqualify_sym_name(Info, SymName0, UnQualSymName),
    ( if is_builtin_inst_name(InstVarSet, UnQualSymName, InstParams) then
        SymName = SymName0
    else
        SymName = UnQualSymName
    ),
    maybe_output_line_number(Info, Context, Stream, !IO),
    Lang = get_output_lang(Info),
    ArgTerms = list.map(func(V) = variable(V, Context), InstParams),
    construct_qualified_term_with_context(SymName, ArgTerms, Context,
        InstTerm),
    (
        MaybeAbstractInstDefn = abstract_inst_defn,
        io.write_string(Stream, ":- abstract_inst((", !IO),
        mercury_output_term(InstVarSet, print_name_only, InstTerm,
            Stream, !IO),
        io.write_string(Stream, ")).\n", !IO)
    ;
        MaybeAbstractInstDefn = nonabstract_inst_defn(eqv_inst(Inst)),
        % XXX The parentheses around the inst name and its arguments
        % is redundant *most* of the time, in which case it is only clutter.
        % It would be nice to eliminate this clutter.
        io.write_string(Stream, ":- inst (", !IO),
        mercury_output_term(InstVarSet, print_name_only, InstTerm,
            Stream, !IO),
        io.write_string(Stream, ") ", !IO),
        (
            MaybeForTypeCtor = no
        ;
            MaybeForTypeCtor = yes(ForTypeCtor),
            ForTypeCtor = type_ctor(ForTypeCtorSymName, ForTypeCtorArity),
            io.write_string(Stream, "for ", !IO),
            mercury_output_sym_name(ForTypeCtorSymName, Stream, !IO),
            io.write_string(Stream, "/", !IO),
            io.write_int(Stream, ForTypeCtorArity, !IO),
            io.write_string(Stream, " ", !IO)
        ),
        % XXX If Inst is bound(...), it would be nice to print the inst
        % definition using the easier-to-read
        %
        %   :- inst i
        %       --->    f1(...)
        %       ;       f2(...).
        %
        % syntax.
        io.write_string(Stream, "== ", !IO),
        mercury_output_inst(Stream, Lang, InstVarSet, Inst, !IO),
        io.write_string(Stream, ".\n", !IO)
    ).

    % Succeed if the sym_name describes a builtin inst.
    %
:- pred is_builtin_inst_name(inst_varset::in, sym_name::in, list(inst_var)::in)
    is semidet.

is_builtin_inst_name(InstVarSet, unqualified(Name), Args0) :-
    Args1 = list.map(func(V) = variable(coerce_var(V), context_init), Args0),
    Term = term.functor(term.atom(Name), Args1, term.context_init),
    varset.coerce(InstVarSet, VarSet),
    ContextPieces = cord.init,  % Dummy; not used.
    parse_inst(no_allow_constrained_inst_var(wnciv_inst_defn_lhs), VarSet,
        ContextPieces, Term, MaybeInst),
    MaybeInst = ok1(Inst),
    Inst \= defined_inst(user_inst(_, _)).

%---------------------------------------------------------------------------%

:- pred mercury_output_mode_ctor_all_defns(merc_out_info::in,
    io.text_output_stream::in, mode_ctor_all_defns::in, io::di, io::uo) is det.

mercury_output_mode_ctor_all_defns(Info, Stream, ModeCtorAllDefns, !IO) :-
    ModeCtorAllDefns = mode_ctor_all_defns(Abs, Eqv),
    list.foldl(mercury_output_item_mode_defn(Info, Stream), Abs, !IO),
    list.foldl(mercury_output_item_mode_defn(Info, Stream), Eqv, !IO).

:- pred mercury_output_item_mode_defn(merc_out_info::in,
    io.text_output_stream::in, item_mode_defn_info::in, io::di, io::uo) is det.

mercury_output_item_mode_defn(Info, Stream, ItemModeDefn, !IO) :-
    ItemModeDefn = item_mode_defn_info(SymName, InstParams,
        MaybeAbstractModeDefn, VarSet, Context, _SeqNum),
    maybe_unqualify_sym_name(Info, SymName, UnQualSymName),
    maybe_output_line_number(Info, Context, Stream, !IO),
    Lang = get_output_lang(Info),
    mercury_format_mode_defn(Lang, VarSet, Context, UnQualSymName, InstParams,
        MaybeAbstractModeDefn, Stream, !IO).

    % This is defined to work on !U instead of !IO so that we can call
    % mercury_format_mode with simple_inst_info.
    %
:- pred mercury_format_mode_defn(output_lang::in, inst_varset::in,
    prog_context::in, sym_name::in, list(inst_var)::in,
    maybe_abstract_mode_defn::in, S::in, U::di, U::uo) is det <= output(S, U).

mercury_format_mode_defn(Lang, InstVarSet, Context, Name, Args,
        MaybeAbstractModeDefn, S, !U) :-
    (
        MaybeAbstractModeDefn = abstract_mode_defn,
        add_string(":- abstract_mode((", S, !U),
        mercury_format_mode_defn_head(InstVarSet, Context, Name, Args, S, !U),
        add_string(")).\n", S, !U)
    ;
        MaybeAbstractModeDefn = nonabstract_mode_defn(eqv_mode(Mode)),
        add_string(":- mode (", S, !U),
        mercury_format_mode_defn_head(InstVarSet, Context, Name, Args, S, !U),
        add_string(") == ", S, !U),
        mercury_format_mode(Lang, InstVarSet, Mode, S, !U),
        add_string(".\n", S, !U)
    ).

:- pred mercury_format_mode_defn_head(inst_varset::in, prog_context::in,
    sym_name::in, list(inst_var)::in, S::in,
    U::di, U::uo) is det <= output(S, U).

mercury_format_mode_defn_head(InstVarSet, Context, Name, Args, S, !U) :-
    ArgTerms = list.map(func(V) = variable(V, Context), Args),
    construct_qualified_term_with_context(Name, ArgTerms, Context, ModeTerm),
    mercury_format_term(InstVarSet, print_name_only, ModeTerm, S, !U).

%---------------------------------------------------------------------------%

:- pred mercury_output_item_pred_decl(merc_out_info::in,
    io.text_output_stream::in, item_pred_decl_info::in, io::di, io::uo) is det.

mercury_output_item_pred_decl(Info, Stream, ItemPredDecl, !IO) :-
    % Most of the code that outputs pred declarations is in
    % parse_tree_out_pred_decl.m.
    ItemPredDecl = item_pred_decl_info(PredName0, PredOrFunc, TypesAndModes,
        WithType, WithInst, MaybeDetism, _Origin, TypeVarSet, InstVarSet,
        ExistQVars, Purity, Constraints, Context, _SeqNum),
    maybe_unqualify_sym_name(Info, PredName0, PredName),
    maybe_output_line_number(Info, Context, Stream, !IO),
    Lang = get_output_lang(Info),
    ( if
        % Function declarations using `with_type` have the same format
        % as predicate declarations, but with `func' instead of `pred'.
        PredOrFunc = pf_function,
        WithType = no
    then
        pred_args_to_func_args(TypesAndModes, FuncTypesAndModes,
            RetTypeAndMode),
        mercury_format_func_decl(Lang, TypeVarSet, InstVarSet,
            ExistQVars, PredName, FuncTypesAndModes, RetTypeAndMode,
            MaybeDetism, Purity, Constraints,
            ":- ", ".\n", ".\n", Stream, !IO)
    else
        mercury_format_pred_or_func_decl(Lang, TypeVarSet, InstVarSet,
            PredOrFunc, ExistQVars, PredName, TypesAndModes,
            WithType, WithInst, MaybeDetism, Purity, Constraints,
            ":- ", ".\n", ".\n", Stream, !IO)
    ).

%---------------------------------------------------------------------------%

:- pred mercury_output_item_mode_decl(merc_out_info::in,
    io.text_output_stream::in, item_mode_decl_info::in, io::di, io::uo) is det.

mercury_output_item_mode_decl(Info, Stream, ItemModeDecl, !IO) :-
    % Most of the code that outputs mode declarations is in
    % parse_tree_out_pred_decl.m.
    ItemModeDecl = item_mode_decl_info(PredName0, PredOrFunc, Modes,
        WithInst, MaybeDet, VarSet, Context, _SeqNum),
    maybe_unqualify_sym_name(Info, PredName0, PredName),
    maybe_output_line_number(Info, Context, Stream, !IO),
    Lang = get_output_lang(Info),
    ( if
        % Function mode declarations using `with_type` have the same format
        % as predicate mode declarations.
        PredOrFunc = yes(pf_function),
        WithInst = no
    then
        pred_args_to_func_args(Modes, FuncModes, RetMode),
        mercury_output_func_mode_decl(Stream, Lang, VarSet, PredName,
            FuncModes, RetMode, MaybeDet, !IO)
    else
        mercury_output_pred_mode_decl(Stream, Lang, VarSet, PredName,
            Modes, WithInst, MaybeDet, !IO)
    ).

%---------------------------------------------------------------------------%

:- pred mercury_format_foreign_enums(merc_out_info::in,
    S::in, c_j_cs_enums::in, U::di, U::uo) is det <= output(S, U).

mercury_format_foreign_enums(Info, S, CJCsnums, !U) :-
    CJCsnums = c_java_csharp(CEnums, JavaEnums, CsharpEnums),
    list.foldl(mercury_format_item_foreign_enum(Info, S), CEnums, !U),
    list.foldl(mercury_format_item_foreign_enum(Info, S), JavaEnums, !U),
    list.foldl(mercury_format_item_foreign_enum(Info, S), CsharpEnums, !U).

:- pred mercury_format_item_foreign_enum(merc_out_info::in, S::in,
    item_foreign_enum_info::in, U::di, U::uo) is det <= output(S, U).

mercury_format_item_foreign_enum(_Info, S, ItemForeignEnum, !U) :-
    ItemForeignEnum = item_foreign_enum_info(Lang, TypeCtor, OoMValues,
        _Context, _SeqNum),
    add_string(":- pragma foreign_enum(", S, !U),
    mercury_format_foreign_language_string(Lang, S, !U),
    add_string(", ", S, !U),
    TypeCtor = type_ctor(TypeName, TypeArity),
    mercury_format_bracketed_sym_name_ngt(next_to_graphic_token, TypeName,
        S, !U),
    add_string("/", S, !U),
    add_int(TypeArity, S, !U),
    add_string(", ", S, !U),
    Values = one_or_more_to_list(OoMValues),
    mercury_format_unqual_sym_name_string_assoc_list(Values, S, !U),
    add_string(").\n", S, !U).

    % Output an association list of to-be-unqualified sym_names and strings.
    % The strings will be quoted in the output.
    %
:- pred mercury_format_unqual_sym_name_string_assoc_list(
    assoc_list(sym_name, string)::in, S::in,
    U::di, U::uo) is det <= output(S, U).

mercury_format_unqual_sym_name_string_assoc_list(AssocList, S, !U) :-
    add_char('[', S, !U),
    add_list(mercury_format_unqual_sym_name_string_pair, ", ",
        AssocList, S, !U),
    add_char(']', S, !U).

:- pred mercury_format_unqual_sym_name_string_pair(
    pair(sym_name, string)::in, S::in, U::di, U::uo) is det <= output(S, U).

mercury_format_unqual_sym_name_string_pair(SymName0 - String, S, !U) :-
    Name = unqualify_name(SymName0),
    SymName = unqualified(Name),
    mercury_format_bracketed_sym_name_ngt(next_to_graphic_token, SymName,
        S, !U),
    add_string(" - ", S, !U),
    add_quoted_string(String, S, !U).

%---------------------------------------------------------------------------%

:- pred mercury_format_item_foreign_export_enum(merc_out_info::in,
    item_foreign_export_enum_info::in, S::in,
    U::di, U::uo) is det <= output(S, U).

mercury_format_item_foreign_export_enum(_Info, ItemForeignExportEnum, S, !U) :-
    ItemForeignExportEnum = item_foreign_export_enum_info(Lang, TypeCtor,
        Attributes, Overrides, _Context, _SeqNum),
    add_string(":- pragma foreign_export_enum(", S, !U),
    mercury_format_foreign_language_string(Lang, S, !U),
    add_string(", ", S, !U),
    TypeCtor = type_ctor(TypeName, TypeArity),
    mercury_format_bracketed_sym_name_ngt(next_to_graphic_token, TypeName,
        S, !U),
    add_string("/", S, !U),
    add_int(TypeArity, S, !U),
    add_string(", ", S, !U),
    mercury_format_foreign_export_enum_attributes(Attributes, S, !U),
    add_string(", ", S, !U),
    mercury_format_sym_name_string_assoc_list(Overrides, S, !U),
    add_string(").\n", S, !U).

:- pred mercury_format_foreign_export_enum_attributes(
    export_enum_attributes::in, S::in, U::di, U::uo) is det <= output(S, U).

mercury_format_foreign_export_enum_attributes(Attributes, S, !U) :-
    MaybePrefix = Attributes ^ ee_attr_prefix,
    add_string("[", S, !U),
    (
        MaybePrefix = no
    ;
        MaybePrefix = yes(Prefix),
        add_string("prefix(", S, !U),
        add_quoted_string(Prefix, S, !U),
        add_char(')', S, !U)
    ),
    add_string("]", S, !U).

    % Output an association list of sym_names and strings.
    % The strings will be quoted in the output.
    %
:- pred mercury_format_sym_name_string_assoc_list(
    assoc_list(sym_name, string)::in, S::in,
    U::di, U::uo) is det <= output(S, U).

mercury_format_sym_name_string_assoc_list(AssocList, S, !U) :-
    add_char('[', S, !U),
    add_list(mercury_format_sym_name_string_pair, ", ", AssocList, S, !U),
    add_char(']', S, !U).

:- pred mercury_format_sym_name_string_pair(
    pair(sym_name, string)::in, S::in, U::di, U::uo) is det <= output(S, U).

mercury_format_sym_name_string_pair(SymName - String, S, !U) :-
    mercury_format_bracketed_sym_name_ngt(next_to_graphic_token, SymName,
        S, !U),
    add_string(" - ", S, !U),
    add_quoted_string(String, S, !U).

%---------------------------------------------------------------------------%

:- pred mercury_output_item_promise(merc_out_info::in,
    io.text_output_stream::in, item_promise_info::in, io::di, io::uo) is det.

mercury_output_item_promise(_, Stream, ItemPromise, !IO) :-
    % Any changes here may require similar changes in the write_promise
    % predicate in hlds_out_module.m.

    ItemPromise = item_promise_info(PromiseType, Goal0, VarSet, UnivVars,
        _Context, _SeqNum),
    Indent = 1,
    (
        PromiseType = promise_type_true,
        % For an assertion, we put back any universally quantified variables
        % that were stripped off during parsing so that the clause will
        % output correctly.
        io.write_string(Stream, ":- promise ", !IO),
        (
            UnivVars = [_ | _],
            Goal = quant_expr(quant_all, quant_ordinary_vars,
                get_goal_context(Goal0), UnivVars, Goal0)
        ;
            UnivVars = [],
            Goal = Goal0
        )
    ;
        ( PromiseType = promise_type_exclusive
        ; PromiseType = promise_type_exhaustive
        ; PromiseType = promise_type_exclusive_exhaustive
        ),
        % A promise ex declaration has a slightly different standard formatting
        % from an assertion; the universal quantification comes before the rest
        % of the declaration.
        io.write_string(Stream, ":- all [", !IO),
        VarNamePrint = print_name_only,
        mercury_output_vars(VarSet, VarNamePrint, UnivVars, Stream, !IO),
        io.write_string(Stream, "]", !IO),
        mercury_output_newline(Indent, Stream, !IO),
        io.write_string(Stream, promise_to_string(PromiseType), !IO),
        Goal0 = Goal
    ),
    mercury_output_newline(Indent, Stream, !IO),
    mercury_output_goal(Stream, VarSet, Indent, Goal, !IO),
    io.write_string(Stream, ".\n", !IO).

%---------------------------------------------------------------------------%

:- pred mercury_output_item_typeclass(merc_out_info::in,
    io.text_output_stream::in, item_typeclass_info::in, io::di, io::uo) is det.

mercury_output_item_typeclass(Info, Stream, ItemTypeClass, !IO) :-
    ItemTypeClass = item_typeclass_info(ClassName0, Vars, Constraints, FunDeps,
        Interface, VarSet, _Context, _SeqNum),
    maybe_unqualify_sym_name(Info, ClassName0, ClassName),
    io.write_string(Stream, ":- typeclass ", !IO),

    % We put an extra set of brackets around the class name in
    % case the name is an operator.
    mercury_output_sym_name(ClassName, Stream, !IO),
    io.write_char(Stream, '(', !IO),
    write_out_list(
        ( pred(V::in, S::in, IO0::di, IO::uo) is det :-
            varset.lookup_name(VarSet, V, VarName),
            io.write_string(S, VarName, IO0, IO)
        ), ", ", Vars, Stream, !IO),
    io.write_char(Stream, ')', !IO),
    mercury_format_fundeps_and_prog_constraint_list(VarSet, print_name_only,
        FunDeps, Constraints, Stream, !IO),
    (
        Interface = class_interface_abstract,
        io.write_string(Stream, ".\n", !IO)
    ;
        Interface = class_interface_concrete(ClassDecls),
        io.write_string(Stream, " where [\n", !IO),
        Lang = get_output_lang(Info),
        output_class_decls(Stream, Lang, ClassDecls, !IO),
        io.write_string(Stream, "\n].\n", !IO)
    ).

:- pred mercury_format_fundeps_and_prog_constraint_list(tvarset::in,
    var_name_print::in, list(prog_fundep)::in, list(prog_constraint)::in,
    S::in, U::di, U::uo) is det <= output(S, U).

mercury_format_fundeps_and_prog_constraint_list(VarSet, VarNamePrint,
        FunDeps, Constraints, S, !U) :-
    ( if
        FunDeps = [],
        Constraints = []
    then
        true
    else
        add_string(" <= (", S, !U),
        add_list(mercury_format_fundep(VarSet, VarNamePrint), ", ", FunDeps,
            S, !U),
        (
            Constraints = []
        ;
            Constraints = [_ | _],
            (
                FunDeps = []
            ;
                FunDeps = [_ | _],
                add_string(", ", S, !U)
            ),
            add_list(mercury_format_constraint(VarSet, VarNamePrint),
                ", ", Constraints, S, !U)
        ),
        add_string(")", S, !U)
    ).

:- pred mercury_format_fundep(tvarset::in, var_name_print::in, prog_fundep::in,
    S::in, U::di, U::uo) is det <= output(S, U).

mercury_format_fundep(TypeVarSet, VarNamePrint, fundep(Domain, Range),
        S, !U) :-
    add_string("(", S, !U),
    add_list(mercury_format_var(TypeVarSet, VarNamePrint), ", ", Domain,
        S, !U),
    add_string(" -> ", S, !U),
    add_list(mercury_format_var(TypeVarSet, VarNamePrint), ", ", Range,
        S, !U),
    add_string(")", S, !U).

:- pred output_class_decls(io.text_output_stream::in,
    output_lang::in, list(class_decl)::in, io::di, io::uo) is det.

output_class_decls(Stream, Lang, ClassDecls, !IO) :-
    write_out_list(output_class_decl(Lang), ",\n", ClassDecls, Stream, !IO).

:- pred output_class_decl(output_lang::in, class_decl::in,
    io.text_output_stream::in, io::di, io::uo) is det.

output_class_decl(Lang, Decl, Stream, !IO) :-
    io.write_string(Stream, "\t", !IO),
    (
        Decl = class_decl_pred_or_func(PredOrFuncInfo),
        PredOrFuncInfo = class_pred_or_func_info(SymName, PredOrFunc,
            TypesAndModes, WithType, WithInst, MaybeDetism,
            TypeVarSet, InstVarSet, ExistQVars, Purity,
            Constraints, _Context),

        % The module name is implied by the qualifier of the
        % `:- typeclass declaration'.
        Name = unqualify_name(SymName),
        ( if
            % Function declarations using `with_type` have the same format
            % as predicate declarations, but with `func' instead of `pred'.
            PredOrFunc = pf_function,
            WithType = no
        then
            pred_args_to_func_args(TypesAndModes,
                FuncTypesAndModes, RetTypeAndMode),
            mercury_format_func_decl(Lang, TypeVarSet, InstVarSet, ExistQVars,
                unqualified(Name), FuncTypesAndModes, RetTypeAndMode,
                MaybeDetism, Purity, Constraints, "", ",\n\t", "", Stream, !IO)
        else
            mercury_format_pred_or_func_decl(Lang, TypeVarSet, InstVarSet,
                PredOrFunc, ExistQVars, unqualified(Name), TypesAndModes,
                WithType, WithInst, MaybeDetism, Purity,
                Constraints, "", ",\n\t", "", Stream, !IO)
        )
    ;
        Decl = class_decl_mode(ModeInfo),
        ModeInfo = class_mode_info(SymName, PredOrFunc, Modes,
            WithInst, MaybeDetism, InstVarSet, _Context),

        % The module name is implied by the qualifier of the
        % `:- typeclass declaration'.
        Name = unqualify_name(SymName),
        ( if
            % Function mode declarations using `with_type` have the same format
            % as predicate mode declarations.
            PredOrFunc = yes(pf_function),
            WithInst = no
        then
            pred_args_to_func_args(Modes, FuncModes, RetMode),
            mercury_format_func_mode_decl(Lang, InstVarSet,
                unqualified(Name), FuncModes, RetMode, MaybeDetism,
                "", "", Stream, !IO)
        else
            mercury_format_pred_or_func_mode_decl(Lang, InstVarSet,
                unqualified(Name), Modes, WithInst, MaybeDetism,
                "", "", Stream, !IO)
        )
    ).

%---------------------------------------------------------------------------%

:- pred mercury_output_item_instance(merc_out_info::in,
    io.text_output_stream::in, item_instance_info::in, io::di, io::uo) is det.

mercury_output_item_instance(_, Stream, ItemInstance, !IO) :-
    % XXX When prettyprinting a Mercury module, we want to print the original
    % types. When generating interface types, we want to print the
    % equiv-type-expanded types. We do the latter.
    ItemInstance = item_instance_info(ClassName,Types, _OriginalTypes,
        Constraints, Body, VarSet, _InstanceModuleName, _Context, _SeqNum),
    io.write_string(Stream, ":- instance ", !IO),
    % We put an extra set of brackets around the class name in case
    % the name is an operator.
    io.write_char(Stream, '(', !IO),
    mercury_output_sym_name(ClassName, Stream, !IO),
    io.write_char(Stream, '(', !IO),
    write_out_list(mercury_output_type(VarSet, print_name_only),
        ", ", Types, Stream, !IO),
    io.write_char(Stream, ')', !IO),
    io.write_char(Stream, ')', !IO),
    mercury_format_prog_constraint_list(VarSet, print_name_only, "<=",
        Constraints, Stream, !IO),
    (
        Body = instance_body_abstract
    ;
        Body = instance_body_concrete(Methods),
        io.write_string(Stream, " where [\n", !IO),
        mercury_output_instance_methods(Stream, Methods, !IO),
        io.write_string(Stream, "\n]", !IO)
    ),
    io.write_string(Stream, ".\n", !IO).

:- pred mercury_output_instance_methods(io.text_output_stream::in,
    list(instance_method)::in, io::di, io::uo) is det.

mercury_output_instance_methods(Stream, Methods, !IO) :-
    write_out_list(mercury_output_instance_method,
        ",\n", Methods, Stream, !IO).

mercury_output_instance_method(Method, Stream, !IO) :-
    Method = instance_method(PredOrFunc, MethodName, Defn, Arity, _Context),
    (
        Defn = instance_proc_def_name(PredName),
        io.write_char(Stream, '\t', !IO),
        (
            PredOrFunc = pf_function,
            io.write_string(Stream, "func(", !IO)
        ;
            PredOrFunc = pf_predicate,
            io.write_string(Stream, "pred(", !IO)
        ),
        mercury_output_bracketed_sym_name_ngt(next_to_graphic_token,
            MethodName, Stream, !IO),
        io.write_string(Stream, "/", !IO),
        io.write_int(Stream, Arity, !IO),
        io.write_string(Stream, ") is ", !IO),
        mercury_output_bracketed_sym_name(PredName, Stream, !IO)
    ;
        Defn = instance_proc_def_clauses(Items),
        % XXX should we output the term contexts?
        io.write_string(Stream, "\t(", !IO),
        write_out_list(output_instance_method_clause(MethodName),
            "),\n\t(", Items, Stream, !IO),
        io.write_string(Stream, ")", !IO)
    ).

%---------------------------------------------------------------------------%

:- pred mercury_output_item_initialise(merc_out_info::in,
    io.text_output_stream::in, item_initialise_info::in,
    io::di, io::uo) is det.

mercury_output_item_initialise(_, Stream, ItemInitialise, !IO) :-
    ItemInitialise = item_initialise_info(PredSymName, Arity, _, _Context,
        _SeqNum),
    io.write_string(Stream, ":- initialise ", !IO),
    mercury_output_sym_name(PredSymName, Stream, !IO),
    io.write_string(Stream, "/", !IO),
    io.write_int(Stream, Arity, !IO),
    io.write_string(Stream, ".\n", !IO).

%---------------------------------------------------------------------------%

:- pred mercury_output_item_finalise(merc_out_info::in,
    io.text_output_stream::in, item_finalise_info::in, io::di, io::uo) is det.

mercury_output_item_finalise(_, Stream, ItemFinalise, !IO) :-
    ItemFinalise = item_finalise_info(PredSymName, Arity, _, _Context,
        _SeqNum),
    io.write_string(Stream, ":- finalise ", !IO),
    mercury_output_sym_name(PredSymName, Stream, !IO),
    io.write_string(Stream, "/", !IO),
    io.write_int(Stream, Arity, !IO),
    io.write_string(Stream, ".\n", !IO).

%---------------------------------------------------------------------------%

:- pred mercury_output_item_mutable(merc_out_info::in,
    io.text_output_stream::in, item_mutable_info::in, io::di, io::uo) is det.

mercury_output_item_mutable(Info, Stream, ItemMutable, !IO) :-
    ItemMutable = item_mutable_info(Name, _OrigType, Type, _OrigInst, Inst,
        InitTerm, MutVarSet, Attrs, _Context, _SeqNum),
    io.write_string(Stream, ":- mutable(", !IO),
    io.write_string(Stream, Name, !IO),
    io.write_string(Stream, ", ", !IO),
    mercury_output_type(varset.init, print_name_only, Type, Stream, !IO),
    io.write_string(Stream, ", ", !IO),

    % See the comments for read_mutable_decl for the reason we _must_ use
    % MutVarSet here.
    mercury_output_term(MutVarSet, print_name_only, InitTerm, Stream, !IO),
    io.write_string(Stream, ", ", !IO),
    Lang = get_output_lang(Info),
    mercury_output_inst(Stream, Lang, varset.init, Inst, !IO),
    io.write_string(Stream, ", ", !IO),
    io.print(Stream, Attrs, !IO),
    io.write_string(Stream, ").\n", !IO).

:- pred mercury_output_item_mutable_2(merc_out_info::in, item_mutable_info::in,
    io.text_output_stream::in, io::di, io::uo) is det.

mercury_output_item_mutable_2(Info, ItemMutable, Stream, !IO) :-
    mercury_output_item_mutable(Info, Stream, ItemMutable, !IO).

%---------------------------------------------------------------------------%

:- pred mercury_output_item_foreign_import_module(io.text_output_stream::in,
    item_fim::in, io::di, io::uo) is det.

mercury_output_item_foreign_import_module(Stream, ItemFIM, !IO) :-
    ItemFIM = item_fim(Lang, ModuleName, _Context, _SeqNum),
    FIMSpec = fim_spec(Lang, ModuleName),
    mercury_output_fim_spec(Stream, FIMSpec, !IO).

mercury_output_fim_spec(Stream, FIMSpec, !IO) :-
    FIMSpec = fim_spec(Lang, ModuleName),
    io.write_string(Stream, ":- pragma foreign_import_module(", !IO),
    mercury_format_foreign_language_string(Lang, Stream, !IO),
    io.write_string(Stream, ", ", !IO),
    mercury_output_bracketed_sym_name_ngt(not_next_to_graphic_token,
        ModuleName, Stream, !IO),
    io.write_string(Stream, ").\n", !IO).

%---------------------------------------------------------------------------%
:- end_module parse_tree.parse_tree_out.
%---------------------------------------------------------------------------%
