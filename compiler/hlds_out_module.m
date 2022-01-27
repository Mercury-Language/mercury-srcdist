%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2009-2012 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: hlds_out_module.m.
% Main authors: conway, fjh.
%
%-----------------------------------------------------------------------------%

:- module hlds.hlds_out.hlds_out_module.
:- interface.

:- import_module hlds.hlds_clauses.
:- import_module hlds.hlds_module.
:- import_module hlds.hlds_out.hlds_out_util.
:- import_module hlds.hlds_pred.
:- import_module hlds.vartypes.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.
:- import_module parse_tree.prog_data.

:- import_module io.
:- import_module list.

%-----------------------------------------------------------------------------%

    % Print out an entire HLDS structure.
    %
:- pred write_hlds(int::in, module_info::in, io::di, io::uo) is det.

:- pred write_promise(hlds_out_info::in, module_info::in,
    prog_varset::in, maybe_vartypes::in, var_name_print::in, int::in,
    promise_type::in, pred_id::in, pred_or_func::in, list(prog_var)::in,
    clause::in, io::di, io::uo) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module hlds.const_struct.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_out.hlds_out_goal.
:- import_module hlds.hlds_out.hlds_out_mode.
:- import_module hlds.hlds_out.hlds_out_pred.
:- import_module hlds.pred_table.
:- import_module libs.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.mercury_to_mercury.
:- import_module parse_tree.parse_tree_out.
:- import_module parse_tree.parse_tree_out_info.
:- import_module parse_tree.parse_tree_out_inst.
:- import_module parse_tree.parse_tree_out_term.
:- import_module parse_tree.parse_tree_to_term.
:- import_module parse_tree.prog_data_pragma.
:- import_module parse_tree.prog_item.
:- import_module parse_tree.prog_out.

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
:- import_module term_io.
:- import_module varset.

%-----------------------------------------------------------------------------%
%
% Write out (selected parts of) the entire HLDS.
%

write_hlds(Indent, ModuleInfo, !IO) :-
    module_info_get_globals(ModuleInfo, Globals),
    globals.lookup_accumulating_option(Globals, dump_hlds_pred_id,
        DumpPredIdStrs),
    globals.lookup_accumulating_option(Globals, dump_hlds_pred_name,
        DumpPredNames),
    write_header(Indent, ModuleInfo, !IO),
    Info = init_hlds_out_info(Globals, output_debug),
    Lang = output_debug,
    DumpOptions = Info ^ hoi_dump_hlds_options,
    ( if
        % If the user specifically requested one or more predicates and/or
        % functions to be dumped, they won't be interested in the types,
        % insts etc.
        ( DumpPredIdStrs = [_ | _]
        ; DumpPredNames = [_ | _]
        )
    then
        true
    else
        ( if string.contains_char(DumpOptions, 'I') then
            module_info_get_avail_module_map(ModuleInfo, AvailModuleMap),
            map.foldl(write_avail_entry(Indent), AvailModuleMap, !IO)
        else
            true
        ),
        ( if string.contains_char(DumpOptions, 'T') then
            module_info_get_type_table(ModuleInfo, TypeTable),
            module_info_get_instance_table(ModuleInfo, InstanceTable),
            module_info_get_class_table(ModuleInfo, ClassTable),
            write_types(Info, Indent, TypeTable, !IO),
            write_classes(Info, Indent, ClassTable, !IO),
            write_instances(Info, Indent, InstanceTable, !IO)
        else
            true
        ),
        ( if string.contains_char(DumpOptions, 'M') then
            module_info_get_inst_table(ModuleInfo, InstTable),
            module_info_get_mode_table(ModuleInfo, ModeTable),
            globals.lookup_int_option(Globals, dump_hlds_inst_limit,
                InstLimit),
            write_inst_table(Lang, Indent, InstLimit, InstTable, !IO),
            write_mode_table(Indent, ModeTable, !IO)
        else
            true
        ),
        ( if string.contains_char(DumpOptions, 'Z') then
            module_info_get_table_struct_map(ModuleInfo, TableStructMap),
            write_table_structs(ModuleInfo, TableStructMap, !IO)
        else
            true
        )
    ),
    ( if string.contains_char(DumpOptions, 'X') then
        module_info_get_const_struct_db(ModuleInfo, ConstStructDb),
        write_const_struct_db(ConstStructDb, !IO)
    else
        true
    ),
    ( if string.contains_char(DumpOptions, 'x') then
        module_info_get_preds(ModuleInfo, PredTable),
        write_preds(Info, Lang, Indent, ModuleInfo, PredTable, !IO)
    else
        true
    ),
    write_footer(Indent, ModuleInfo, !IO).

%-----------------------------------------------------------------------------%

:- pred write_header(int::in, module_info::in, io::di, io::uo) is det.

write_header(Indent, Module, !IO) :-
    write_indent(Indent, !IO),
    io.write_string("% vim: ts=2 sw=2\n\n", !IO),
    module_info_get_name(Module, Name),
    write_indent(Indent, !IO),
    io.write_string(":- module ", !IO),
    prog_out.write_sym_name(Name, !IO),
    io.write_string(".\n\n", !IO).

:- pred write_footer(int::in, module_info::in, io::di, io::uo) is det.

write_footer(Indent, Module, !IO) :-
    module_info_get_name(Module, Name),
    write_indent(Indent, !IO),
    io.write_string(":- end_module ", !IO),
    prog_out.write_sym_name(Name, !IO),
    io.write_string(".\n", !IO).

%-----------------------------------------------------------------------------%
%
% Write out the imports and uses.
%

:- pred write_avail_entry(int::in, module_name::in, avail_module_entry::in,
    io::di, io::uo) is det.

write_avail_entry(Indent, ModuleName, Entry, !IO) :-
    Entry = avail_module_entry(Section, ImportOrUse, Avails),
    (
        ImportOrUse = import_decl,
        ImportOrUseDecl = ":- import_module "
    ;
        ImportOrUse = use_decl,
        ImportOrUseDecl = ":- use_module "
    ),
    write_indent(Indent, !IO),
    io.write_string(ImportOrUseDecl, !IO),
    write_module_name(ModuleName, !IO),
    io.write_string(".\n", !IO),

    write_indent(Indent, !IO),
    io.write_string("% ", !IO),
    io.write(Section, !IO),
    io.write_string(", ", !IO),
    io.write(Avails, !IO),
    io.write_string("\n", !IO).

%-----------------------------------------------------------------------------%
%
% Write out the type table.
%

:- pred write_types(hlds_out_info::in, int::in, type_table::in,
    io::di, io::uo) is det.

write_types(Info, Indent, TypeTable, !IO) :-
    write_indent(Indent, !IO),
    io.write_string("%-------- Types --------\n", !IO),
    get_all_type_ctor_defns(TypeTable, TypeAssocList),
    write_type_table_entries(Info, Indent, TypeAssocList, !IO),
    io.nl(!IO).

:- pred write_type_table_entries(hlds_out_info::in, int::in,
    assoc_list(type_ctor, hlds_type_defn)::in, io::di, io::uo) is det.

write_type_table_entries(_, _, [], !IO).
write_type_table_entries(Info, Indent, [TypeCtor - TypeDefn | Types], !IO) :-
    hlds_data.get_type_defn_tvarset(TypeDefn, TVarSet),
    hlds_data.get_type_defn_tparams(TypeDefn, TypeParams),
    hlds_data.get_type_defn_body(TypeDefn, TypeBody),
    hlds_data.get_type_defn_status(TypeDefn, TypeStatus),
    hlds_data.get_type_defn_context(TypeDefn, Context),

    % Write the context.
    io.write_char('\n', !IO),
    DumpOptions = Info ^ hoi_dump_hlds_options,
    ( if string.contains_char(DumpOptions, 'c') then
        term.context_file(Context, FileName),
        term.context_line(Context, LineNumber),
        ( if FileName = "" then
            true
        else
            write_indent(Indent, !IO),
            io.write_string("% context: file `", !IO),
            io.write_string(FileName, !IO),
            io.write_string("', line ", !IO),
            io.write_int(LineNumber, !IO),
            io.write_string(", status ", !IO),
            io.write_string(type_import_status_to_string(TypeStatus), !IO),
            io.write_char('\n', !IO)
        )
    else
        true
    ),

    write_indent(Indent, !IO),
    ( if
        ( TypeBody = hlds_solver_type(_, _)
        ; TypeBody = hlds_abstract_type(abstract_solver_type)
        )
    then
        io.write_string(":- solver type ", !IO)
    else
        io.write_string(":- type ", !IO)
    ),
    write_type_name(TypeCtor, !IO),
    write_type_params(TVarSet, TypeParams, !IO),
    write_type_body(Info, TypeCtor, TypeBody, Indent + 1, TVarSet, !IO),

    write_type_table_entries(Info, Indent, Types, !IO).

:- pred write_type_params(tvarset::in, list(type_param)::in,
    io::di, io::uo) is det.

write_type_params(_TVarSet, [], !IO).
write_type_params(TVarSet, [P], !IO) :-
    io.write_string("(", !IO),
    mercury_output_var(TVarSet, print_name_only, P, !IO),
    io.write_string(")", !IO).
write_type_params(TVarSet, [P | Ps], !IO) :-
    Ps = [_ | _],
    io.write_string("(", !IO),
    mercury_output_var(TVarSet, print_name_only, P, !IO),
    write_type_params_loop(TVarSet, Ps, !IO),
    io.write_string(")", !IO).

:- pred write_type_params_loop(tvarset::in, list(type_param)::in,
    io::di, io::uo) is det.

write_type_params_loop(_TVarSet, [], !IO).
write_type_params_loop(TVarSet, [P | Ps], !IO) :-
    io.write_string(", ", !IO),
    mercury_output_var(TVarSet, print_name_only, P, !IO),
    write_type_params_loop(TVarSet, Ps, !IO).

:- pred write_type_body(hlds_out_info::in, type_ctor::in, hlds_type_body::in,
    int::in, tvarset::in, io::di, io::uo) is det.

write_type_body(Info, TypeCtor, TypeBody, Indent, TVarSet, !IO) :-
    (
        TypeBody = hlds_du_type(Ctors, ConsTagMap, CheaperTagTest, DuTypeKind,
            MaybeUserEqComp, MaybeDirectArgCtors, ReservedTag, ReservedAddr,
            Foreign),
        (
            CheaperTagTest = no_cheaper_tag_test
        ;
            CheaperTagTest = cheaper_tag_test(ExpConsId, ExpConsTag,
                CheapConsId, CheapConsTag),
            write_indent(Indent, !IO),
            io.write_string("/* cheaper tag test: ", !IO),
            io.write_string(cons_id_and_arity_to_string(ExpConsId), !IO),
            io.write_string(" tag ", !IO),
            io.print(ExpConsTag, !IO),
            io.write_string(" -> ", !IO),
            io.write_string(cons_id_and_arity_to_string(CheapConsId), !IO),
            io.write_string(" tag ", !IO),
            io.print(CheapConsTag, !IO),
            io.write_string(" */\n", !IO)
        ),
        (
            DuTypeKind = du_type_kind_mercury_enum,
            write_indent(Indent, !IO),
            io.write_string("/* KIND enumeration */\n", !IO)
        ;
            DuTypeKind = du_type_kind_foreign_enum(Lang),
            write_indent(Indent, !IO),
            io.write_string("/* KIND foreign enumeration for ", !IO),
            io.write_string(foreign_language_string(Lang), !IO),
            io.write_string(" */\n", !IO)
        ;
            DuTypeKind = du_type_kind_direct_dummy,
            write_indent(Indent, !IO),
            io.write_string("/* KIND dummy */\n", !IO)
        ;
            DuTypeKind = du_type_kind_notag(FunctorName, ArgType,
                MaybeArgName),
            write_indent(Indent, !IO),
            io.write_string("/* KIND notag: ", !IO),
            write_sym_name(FunctorName, !IO),
            io.write_string(", ", !IO),
            mercury_output_type(TVarSet, print_name_only, ArgType, !IO),
            io.write_string(", ", !IO),
            (
                MaybeArgName = yes(ArgName),
                io.write_string(ArgName, !IO)
            ;
                MaybeArgName = no,
                io.write_string("no arg name", !IO)
            ),
            io.write_string(" */\n", !IO)
        ;
            DuTypeKind = du_type_kind_general,
            write_indent(Indent, !IO),
            io.write_string("/* KIND general */\n", !IO)
        ),
        (
            ReservedTag = uses_reserved_tag,
            write_indent(Indent, !IO),
            io.write_string("/* reserved_tag */\n", !IO)
        ;
            ReservedTag = does_not_use_reserved_tag
        ),
        (
            ReservedAddr = uses_reserved_address,
            write_indent(Indent, !IO),
            io.write_string("/* reserved_address */\n", !IO)
        ;
            ReservedAddr = does_not_use_reserved_address
        ),
        write_constructors(TVarSet, TypeCtor, ConsTagMap, Indent, Ctors, !IO),
        MercInfo = Info ^ hoi_mercury_to_mercury,
        mercury_output_where_attributes(MercInfo, TVarSet, no, MaybeUserEqComp,
            MaybeDirectArgCtors, !IO),
        (
            Foreign = yes(_),
            write_indent(Indent, !IO),
            io.write_string("/* has foreign_type */\n", !IO)
        ;
            Foreign = no
        ),
        io.write_string(".\n", !IO)
    ;
        TypeBody = hlds_eqv_type(Type),
        io.write_string(" == ", !IO),
        mercury_output_type(TVarSet, print_name_only, Type, !IO),
        io.write_string(".\n", !IO)
    ;
        TypeBody = hlds_abstract_type(_IsSolverType),
        io.write_string(".\n", !IO)
    ;
        TypeBody = hlds_foreign_type(_),
        % XXX
        io.write_string(" == $foreign_type.\n", !IO)
    ;
        TypeBody = hlds_solver_type(SolverTypeDetails, MaybeUserEqComp),
        MercInfo = Info ^ hoi_mercury_to_mercury,
        mercury_output_where_attributes(MercInfo, TVarSet,
            yes(SolverTypeDetails), MaybeUserEqComp, no, !IO),
        io.write_string(".\n", !IO)
    ).

:- pred write_constructors(tvarset::in, type_ctor::in, cons_tag_values::in,
    int::in, list(constructor)::in, io::di, io::uo) is det.

write_constructors(TVarSet, TagValues, TypeCtor, Indent, Ctors, !IO) :-
    (
        Ctors = [],
        unexpected($module, $pred, "empty constructor list")
    ;
        Ctors = [HeadCtor | TailCtors],
        write_indent(Indent, !IO),
        io.write_string("--->    ", !IO),
        write_ctor(TVarSet, TagValues, TypeCtor, HeadCtor, !IO),
        (
            TailCtors = []
        ;
            TailCtors = [_ | _],
            io.write_string("\n", !IO),
            write_constructors_loop(TVarSet, TagValues, TypeCtor, Indent,
                TailCtors, !IO)
        )
    ).

:- pred write_constructors_loop(tvarset::in, type_ctor::in,
    cons_tag_values::in, int::in, list(constructor)::in,
    io::di, io::uo) is det.

write_constructors_loop(_TVarSet, _TypeCtor, _TagValues, _Indent, [], !IO).
write_constructors_loop(TVarSet, TypeCtor, TagValues, Indent, [Ctor | Ctors],
        !IO) :-
    write_indent(Indent, !IO),
    io.write_string(";       ", !IO),
    write_ctor(TVarSet, TypeCtor, TagValues, Ctor, !IO),
    (
        Ctors = []
    ;
        Ctors = [_ | _],
        io.write_string("\n", !IO),
        write_constructors_loop(TVarSet, TypeCtor, TagValues, Indent, Ctors,
            !IO)
    ).

:- pred write_ctor(tvarset::in, type_ctor::in, cons_tag_values::in,
    constructor::in, io::di, io::uo) is det.

write_ctor(TVarSet, TypeCtor, TagValues, Ctor, !IO) :-
    mercury_output_ctor(TVarSet, Ctor, !IO),
    Ctor = ctor(_, _, Name, _Args, Arity, _),
    ConsId = cons(Name, Arity, TypeCtor),
    ( if map.search(TagValues, ConsId, TagValue) then
        io.write_string("\t% tag: ", !IO),
        io.print(TagValue, !IO)
    else
        true
    ).

%-----------------------------------------------------------------------------%
%
% Write out the typeclass table.
%

:- pred write_classes(hlds_out_info::in, int::in, class_table::in,
    io::di, io::uo) is det.

write_classes(Info, Indent, ClassTable, !IO) :-
    write_indent(Indent, !IO),
    io.write_string("%-------- Classes --------\n", !IO),
    map.to_assoc_list(ClassTable, ClassTableList),
    io.write_list(ClassTableList, "\n", write_class_defn(Info, Indent), !IO),
    io.nl(!IO).

:- pred write_class_defn(hlds_out_info::in, int::in,
    pair(class_id, hlds_class_defn)::in, io::di, io::uo) is det.

write_class_defn(Info, Indent, ClassId - ClassDefn, !IO) :-
    write_indent(Indent, !IO),
    io.write_string("% ", !IO),

    write_class_id(ClassId, !IO),
    io.write_string(":\n", !IO),

    ClassDefn = hlds_class_defn(_, Constraints, FunDeps, _, Vars, _, _,
        Interface, VarSet, Context),

    term.context_file(Context, FileName),
    term.context_line(Context, LineNumber),
    ( if FileName = "" then
        true
    else
        write_indent(Indent, !IO),
        io.write_string("% context: file `", !IO),
        io.write_string(FileName, !IO),
        io.write_string("', line ", !IO),
        io.write_int(LineNumber, !IO),
        io.write_string("\n", !IO)
    ),

    DumpOptions = Info ^ hoi_dump_hlds_options,
    ( if string.contains_char(DumpOptions, 'v') then
        VarNamePrint = print_name_and_num
    else
        VarNamePrint = print_name_only
    ),

    write_indent(Indent, !IO),
    io.write_string("% Vars: ", !IO),
    mercury_output_vars(VarSet, VarNamePrint, Vars, !IO),
    io.nl(!IO),

    write_indent(Indent, !IO),
    io.write_string("% Functional dependencies: ", !IO),
    io.write_list(FunDeps, ", ", hlds_output_fundep, !IO),
    io.nl(!IO),

    write_indent(Indent, !IO),
    io.write_string("% Constraints: ", !IO),
    io.write_list(Constraints, ", ",
        mercury_output_constraint(VarSet, VarNamePrint), !IO),
    io.nl(!IO),

    write_indent(Indent, !IO),
    io.write_string("% Class Methods: ", !IO),
    io.write_list(Interface, ", ", write_class_proc, !IO),
    io.nl(!IO).

:- pred hlds_output_fundep(hlds_class_fundep::in, io::di, io::uo) is det.

hlds_output_fundep(fundep(Domain, Range), !IO) :-
    io.write_char('(', !IO),
    DomainList = set.to_sorted_list(Domain),
    io.write_list(DomainList, ", ", io.write_int, !IO),
    io.write_string(" -> ", !IO),
    RangeList = set.to_sorted_list(Range),
    io.write_list(RangeList, ", ", io.write_int, !IO),
    io.write_char(')', !IO).

    % Just output the class methods as pred_ids and proc_ids because it is
    % probably not that useful to have the names. If that information is
    % needed, it shouldn't be a very difficult fix.
    %
:- pred write_class_proc(hlds_class_proc::in, io::di, io::uo) is det.

write_class_proc(hlds_class_proc(PredId, ProcId), !IO) :-
    io.write_string("hlds_class_proc(pred_id:", !IO),
    pred_id_to_int(PredId, PredInt),
    io.write_int(PredInt, !IO),
    io.write_string(", proc_id:", !IO),
    proc_id_to_int(ProcId, ProcInt),
    io.write_int(ProcInt, !IO),
    io.write_char(')', !IO).

%-----------------------------------------------------------------------------%
%
% Write out the instance table.
%

:- pred write_instances(hlds_out_info::in, int::in, instance_table::in,
    io::di, io::uo) is det.

write_instances(Info, Indent, InstanceTable, !IO) :-
    write_indent(Indent, !IO),
    io.write_string("%-------- Instances --------\n", !IO),
    map.to_assoc_list(InstanceTable, InstanceTableList),
    io.write_list(InstanceTableList, "\n\n",
        write_instance_defns(Info, Indent), !IO),
    io.nl(!IO).

:- pred write_instance_defns(hlds_out_info::in, int::in,
    pair(class_id, list(hlds_instance_defn))::in, io::di, io::uo) is det.

write_instance_defns(Info, Indent, ClassId - InstanceDefns, !IO) :-
    io.nl(!IO),
    write_indent(Indent, !IO),
    io.write_string("% Instances for class ", !IO),
    write_class_id(ClassId, !IO),
    io.write_string(":\n", !IO),
    io.write_list(InstanceDefns, "\n",
        write_instance_defn(Info, Indent + 1), !IO).

:- pred write_instance_defn(hlds_out_info::in, int::in, hlds_instance_defn::in,
    io::di, io::uo) is det.

write_instance_defn(Info, Indent, InstanceDefn, !IO) :-
    InstanceDefn = hlds_instance_defn(_InstanceModule, Types, OriginalTypes,
        InstanceStatus, Context, Constraints, Body, MaybePredProcIds,
        VarSet, ProofMap),

    % Separate this instance from any previous ones, or the class id.
    io.nl(!IO),

    term.context_file(Context, FileName),
    term.context_line(Context, LineNumber),
    ( if FileName = "" then
        true
    else
        write_indent(Indent, !IO),
        io.write_string("% context: file `", !IO),
        io.write_string(FileName, !IO),
        io.write_string("', line ", !IO),
        io.write_int(LineNumber, !IO),
        io.write_string("\n", !IO)
    ),

    DumpOptions = Info ^ hoi_dump_hlds_options,
    ( if string.contains_char(DumpOptions, 'v') then
        VarNamePrint = print_name_and_num
    else
        VarNamePrint = print_name_only
    ),

    % Curry the varset for term_io.write_variable/4.
    PrintTerm = mercury_output_type(VarSet, VarNamePrint),
    write_indent(Indent, !IO),
    io.write_string("% Types: ", !IO),
    io.write_list(Types, ", ", mercury_output_type(VarSet, VarNamePrint), !IO),
    io.nl(!IO),
    write_indent(Indent, !IO),
    io.write_string("% Original types: ", !IO),
    io.write_list(OriginalTypes, ", ", PrintTerm, !IO),
    io.nl(!IO),

    write_indent(Indent, !IO),
    io.write_string("% Status: ", !IO),
    io.write_string(instance_import_status_to_string(InstanceStatus), !IO),
    io.nl(!IO),

    write_indent(Indent, !IO),
    io.write_string("% Constraints: ", !IO),
    io.write_list(Constraints, ", ",
        mercury_output_constraint(VarSet, VarNamePrint), !IO),
    io.nl(!IO),

    write_indent(Indent, !IO),
    (
        Body = instance_body_abstract,
        io.write_string("% abstract", !IO)
    ;
        Body = instance_body_concrete(Methods),
        io.write_string("% Instance methods:\n", !IO),
        write_instance_methods(Methods, Indent, 1, !IO)
    ),
    io.nl(!IO),

    (
        MaybePredProcIds = yes(PredProcIds),
        write_indent(Indent, !IO),
        io.write_string("% Procedures: ", !IO),
        io.write(PredProcIds, !IO),
        io.nl(!IO)
    ;
        MaybePredProcIds = no
    ),
    write_constraint_proof_map(VarSet, VarNamePrint, Indent, ProofMap, !IO).

:- pred write_instance_methods(list(instance_method)::in, int::in, int::in,
    io::di, io::uo) is det.

write_instance_methods([], _, _, !IO).
write_instance_methods([Method | Methods], Indent, !.CurMethodNum, !IO) :-
    Method = instance_method(PredOrFunc, MethodName, _Defn, Arity, _Context),
    write_indent(Indent, !IO),
    io.format("%% method %d, %s %s/%d\n",
        [i(!.CurMethodNum), s(pred_or_func_to_str(PredOrFunc)),
        s(sym_name_to_string(MethodName)), i(Arity)], !IO),
    mercury_output_instance_method(Method, !IO),
    (
        Methods = [_ | _],
        io.write_string(",\n", !IO),
        !:CurMethodNum = !.CurMethodNum + 1,
        write_instance_methods(Methods, Indent, !.CurMethodNum, !IO)
    ;
        Methods = []
    ).

%-----------------------------------------------------------------------------%
%
% Write out the inst table.
%

:- pred write_inst_table(output_lang::in, int::in, int::in, inst_table::in,
    io::di, io::uo) is det.

write_inst_table(Lang, Indent, Limit, InstTable, !IO) :-
    write_indent(Indent, !IO),
    io.write_string("%-------- Insts --------\n", !IO),

    inst_table_get_user_insts(InstTable, UserInstTable),
    inst_table_get_unify_insts(InstTable, UnifyInstTable),
    inst_table_get_merge_insts(InstTable, MergeInstTable),
    inst_table_get_ground_insts(InstTable, GroundInstTable),
    inst_table_get_any_insts(InstTable, AnyInstTable),
    inst_table_get_shared_insts(InstTable, SharedInstTable),
    inst_table_get_mostly_uniq_insts(InstTable, MostlyUniqInstTable),

    map.to_sorted_assoc_list(UserInstTable, UserInstPairs),
    unify_insts_to_sorted_pairs(UnifyInstTable, UnifyInstPairs),
    merge_insts_to_sorted_pairs(MergeInstTable, MergeInstPairs),
    ground_insts_to_sorted_pairs(GroundInstTable, GroundInstPairs),
    any_insts_to_sorted_pairs(AnyInstTable, AnyInstPairs),
    shared_insts_to_sorted_pairs(SharedInstTable, SharedInstPairs),
    mostly_uniq_insts_to_sorted_pairs(MostlyUniqInstTable,
        MostlyUniqInstPairs),

    write_indent(Indent, !IO),
    io.write_string("%-------- User defined insts --------\n", !IO),
    list.foldl(write_user_inst(Indent), UserInstPairs, !IO),

    io.write_string("%-------- Unify insts --------\n", !IO),
    list.foldl2(write_key_maybe_inst_det(Lang, Limit, write_key_unify_inst),
        UnifyInstPairs, 0, NumUnifyInsts, !IO),
    io.format("\nTotal number of unify insts: %d\n", [i(NumUnifyInsts)], !IO),

    io.write_string("%-------- Merge insts --------\n", !IO),
    list.foldl2(write_key_maybe_inst(Lang, Limit, write_key_merge_inst),
        MergeInstPairs, 0, NumMergeInsts, !IO),
    io.format("\nTotal number of merge insts: %d\n", [i(NumMergeInsts)], !IO),

    io.write_string("%-------- Ground insts --------\n", !IO),
    list.foldl2(write_key_maybe_inst_det(Lang, Limit, write_key_ground_inst),
        GroundInstPairs, 0, NumGroundInsts, !IO),
    io.format("\nTotal number of ground insts: %d\n",
        [i(NumGroundInsts)], !IO),

    io.write_string("%-------- Any insts --------\n", !IO),
    list.foldl2(write_key_maybe_inst_det(Lang, Limit, write_key_any_inst),
        AnyInstPairs, 0, NumAnyInsts, !IO),
    io.format("\nTotal number of any insts: %d\n", [i(NumAnyInsts)], !IO),

    io.write_string("%-------- Shared insts --------\n", !IO),
    list.foldl2(write_key_maybe_inst(Lang, Limit, write_inst_name_nl),
        SharedInstPairs, 0, NumSharedInsts, !IO),
    io.format("\nTotal number of shared insts: %d\n",
        [i(NumSharedInsts)], !IO),

    io.write_string("%-------- MostlyUniq insts --------\n", !IO),
    list.foldl2(write_key_maybe_inst(Lang, Limit, write_inst_name_nl),
        MostlyUniqInstPairs, 0, NumMostlyUniqInsts, !IO),
    io.format("\nTotal number of mostly uniq insts: %d\n",
        [i(NumMostlyUniqInsts)], !IO),

    io.nl(!IO).

:- pred write_user_inst(int::in, pair(inst_id, hlds_inst_defn)::in,
    io::di, io::uo) is det.

write_user_inst(Indent, InstId - InstDefn, !IO) :-
    InstId = inst_id(InstName, _InstArity),
    write_indent(Indent, !IO),
    io.format("\n:- inst %s", [s(sym_name_to_string(InstName))], !IO),
    InstDefn = hlds_inst_defn(InstVarSet, InstParams, InstBody,
        _MaybeMatchingTypeCtors, _Context, Status),
    (
        InstParams = []
    ;
        InstParams = [HeadInstParam | TailInstParams],
        io.write_string("(", !IO),
        write_inst_params(HeadInstParam, TailInstParams, InstVarSet, !IO),
        io.write_string(")", !IO)
    ),
    (
        InstBody = abstract_inst,
        io.write_string(": is abstract\n", !IO)
    ;
        InstBody = eqv_inst(EqvInst),
        io.write_string(":\n", !IO),
        write_indent(Indent, !IO),
        mercury_output_inst(output_debug, InstVarSet, EqvInst, !IO),
        io.write_string("\n", !IO)
    ),
    write_indent(Indent, !IO),
    StatusStr = inst_import_status_to_string(Status),
    io.format("%% status %s\n", [s(StatusStr)], !IO).

:- pred write_inst_params(inst_var::in, list(inst_var)::in, inst_varset::in,
    io::di, io::uo) is det.

write_inst_params(InstVar, InstVars, InstVarSet, !IO) :-
    varset.lookup_name(InstVarSet, InstVar, InstVarName),
    io.write_string(InstVarName, !IO),
    (
        InstVars = []
    ;
        InstVars = [HeadInstVar | TailInstVars],
        io.write_string(", ", !IO),
        write_inst_params(HeadInstVar, TailInstVars, InstVarSet, !IO)
    ).

:- pred write_key_maybe_inst(output_lang::in, int::in,
    pred(output_lang, Key, io, io)::in(pred(in, in, di, uo) is det),
    pair(Key, maybe_inst)::in, int::in, int::out, io::di, io::uo) is det.

write_key_maybe_inst(Lang, Limit, WriteKey, Key - MaybeInst, !N, !IO) :-
    !:N = !.N + 1,
    ( if !.N =< Limit then
        io.nl(!IO),
        io.format("Entry %d key\n", [i(!.N)], !IO),
        WriteKey(Lang, Key, !IO),
        (
            MaybeInst = inst_unknown,
            io.format("Entry %d value UNKNOWN\n", [i(!.N)], !IO)
        ;
            MaybeInst = inst_known(Inst),
            io.format("Entry %d value:\n", [i(!.N)], !IO),
            write_inst(Lang, Inst, !IO),
            io.nl(!IO)
        )
    else
        true
    ).

:- pred write_key_maybe_inst_det(output_lang::in, int::in,
    pred(output_lang, Key, io, io)::in(pred(in, in, di, uo) is det),
    pair(Key, maybe_inst_det)::in, int::in, int::out,
    io::di, io::uo) is det.

write_key_maybe_inst_det(Lang, Limit, WriteKey, Key - MaybeInstDet, !N, !IO) :-
    !:N = !.N + 1,
    ( if !.N =< Limit then
        io.nl(!IO),
        io.format("Entry %d key\n", [i(!.N)], !IO),
        WriteKey(Lang, Key, !IO),
        (
            MaybeInstDet = inst_det_unknown,
            io.format("Entry %d value UNKNOWN\n", [i(!.N)], !IO)
        ;
            MaybeInstDet = inst_det_known(Inst, Detism),
            DetismStr = determinism_to_string(Detism),
            io.format("Entry %d value (%s):\n", [i(!.N), s(DetismStr)], !IO),
            write_inst(Lang, Inst, !IO),
            io.nl(!IO)
        )
    else
        true
    ).

:- pred write_key_unify_inst(output_lang::in, unify_inst_info::in,
    io::di, io::uo) is det.

write_key_unify_inst(Lang, UnifyInstInfo, !IO) :-
    UnifyInstInfo = unify_inst_info(Live, Real, InstA, InstB),
    (
        Live = is_live,
        io.write_string("live ", !IO)
    ;
        Live = is_dead,
        io.write_string("dead ", !IO)
    ),
    (
        Real = real_unify,
        io.write_string("real unify\n", !IO)
    ;
        Real = fake_unify,
        io.write_string("fake unify\n", !IO)
    ),
    io.write_string("InstA: ", !IO),
    write_inst(Lang, InstA, !IO),
    io.nl(!IO),
    io.write_string("InstB: ", !IO),
    write_inst(Lang, InstB, !IO),
    io.nl(!IO).

:- pred write_key_merge_inst(output_lang::in, merge_inst_info::in,
    io::di, io::uo) is det.

write_key_merge_inst(Lang, MergeInstInfo, !IO) :-
    MergeInstInfo = merge_inst_info(InstA, InstB),
    io.write_string("InstA: ", !IO),
    write_inst(Lang, InstA, !IO),
    io.nl(!IO),
    io.write_string("InstB: ", !IO),
    write_inst(Lang, InstB, !IO),
    io.nl(!IO).

:- pred write_key_ground_inst(output_lang::in, ground_inst_info::in,
    io::di, io::uo) is det.

write_key_ground_inst(Lang, GroundInstInfo, !IO) :-
    GroundInstInfo = ground_inst_info(InstName, Uniq, Live, Real),
    write_uniq_live_real(Uniq, Live, Real, !IO),
    write_inst_name_nl(Lang, InstName, !IO).

:- pred write_key_any_inst(output_lang::in, any_inst_info::in,
    io::di, io::uo) is det.

write_key_any_inst(Lang, AnyInstInfo, !IO) :-
    AnyInstInfo = any_inst_info(InstName, Uniq, Live, Real),
    write_uniq_live_real(Uniq, Live, Real, !IO),
    write_inst_name_nl(Lang, InstName, !IO).

:- pred write_uniq_live_real(uniqueness::in, is_live::in, unify_is_real::in,
    io::di, io::uo) is det.

write_uniq_live_real(Uniq, Live, Real, !IO) :-
    (
        Uniq = shared,
        io.write_string("shared ", !IO)
    ;
        Uniq = unique,
        io.write_string("unique ", !IO)
    ;
        Uniq = mostly_unique,
        io.write_string("mostly_unique ", !IO)
    ;
        Uniq = clobbered,
        io.write_string("clobbered", !IO)
    ;
        Uniq = mostly_clobbered,
        io.write_string("mostly_clobbered", !IO)
    ),
    (
        Live = is_live,
        io.write_string("live ", !IO)
    ;
        Live = is_dead,
        io.write_string("dead ", !IO)
    ),
    (
        Real = real_unify,
        io.write_string("real unify\n", !IO)
    ;
        Real = fake_unify,
        io.write_string("fake unify\n", !IO)
    ).

:- pred write_inst_name_nl(output_lang::in, inst_name::in, io::di, io::uo)
    is det.

write_inst_name_nl(Lang, InstName, !IO) :-
    InstNameTerm = inst_name_to_term(Lang, InstName),
    varset.init(VarSet),
    mercury_output_term(VarSet, print_name_only, InstNameTerm, !IO),
    io.nl(!IO).

:- pred write_inst(output_lang::in, mer_inst::in, io::di, io::uo) is det.

write_inst(Lang, Inst, !IO) :-
    InstTerm = inst_to_term(Lang, Inst),
    varset.init(VarSet),
    mercury_output_term(VarSet, print_name_only, InstTerm, !IO).

%-----------------------------------------------------------------------------%
%
% Write out the mode table.
%

:- pred write_mode_table(int::in, mode_table::in, io::di, io::uo) is det.

write_mode_table(Indent, ModeTable, !IO) :-
    mode_table_get_mode_defns(ModeTable, ModeDefns),
    write_indent(Indent, !IO),
    io.write_string("%-------- Modes --------\n", !IO),
    write_indent(Indent, !IO),
    map.foldl(write_mode_table_entry(Indent), ModeDefns, !IO),
    io.nl(!IO).

:- pred write_mode_table_entry(int::in, mode_id::in, hlds_mode_defn::in,
    io::di, io::uo) is det.

write_mode_table_entry(Indent, ModeId, ModeDefn, !IO) :-
    ModeId = mode_id(ModeName, _ModeArity),
    write_indent(Indent, !IO),
    io.format("\n:- mode %s", [s(sym_name_to_string(ModeName))], !IO),
    ModeDefn = hlds_mode_defn(InstVarSet, InstParams, ModeBody, _Context,
        Status),
    (
        InstParams = []
    ;
        InstParams = [HeadInstParam | TailInstParams],
        io.write_string("(", !IO),
        write_inst_params(HeadInstParam, TailInstParams, InstVarSet, !IO),
        io.write_string(")", !IO)
    ),
    ModeBody = eqv_mode(EqvMode),
    io.write_string(":\n", !IO),
    write_indent(Indent, !IO),
    mercury_output_mode(output_debug, InstVarSet, EqvMode, !IO),
    io.write_string("\n", !IO),
    write_indent(Indent, !IO),
    StatusStr = mode_import_status_to_string(Status),
    io.format("%% status %s\n", [s(StatusStr)], !IO).

%-----------------------------------------------------------------------------%
%
% Write out constant structs defined in the module.
%

:- pred write_const_struct_db(const_struct_db::in, io::di, io::uo) is det.

write_const_struct_db(ConstStructDb, !IO) :-
    const_struct_db_get_structs(ConstStructDb, ConstStructs),
    io.write_string("%-------- Const structs --------\n\n", !IO),
    list.foldl(write_const_struct, ConstStructs, !IO),
    io.nl(!IO).

:- pred write_const_struct(pair(int, const_struct)::in, io::di, io::uo) is det.

write_const_struct(N - ConstStruct, !IO) :-
    io.format("\nconst_struct %d:\n", [i(N)], !IO),
    ConstStruct = const_struct(ConsId, ConstArgs, Type, Inst),
    mercury_output_cons_id(does_not_need_brackets, ConsId, !IO),
    (
        ConstArgs = [],
        io.nl(!IO)
    ;
        ConstArgs = [HeadConstArg | TailConstArgs],
        io.write_string("(\n", !IO),
        write_const_struct_args(HeadConstArg, TailConstArgs, !IO),
        io.write_string(")\n", !IO)
    ),
    io.write_string("type: ", !IO),
    mercury_output_type(varset.init, print_name_only, Type, !IO),
    io.nl(!IO),
    io.write_string("inst: ", !IO),
    mercury_output_structured_inst(Inst, 0, output_debug, do_not_incl_addr,
        varset.init, !IO).

:- pred write_const_struct_args(const_struct_arg::in,
    list(const_struct_arg)::in, io::di, io::uo) is det.

write_const_struct_args(HeadConstArg, TailConstArgs, !IO) :-
    io.write_string("    ", !IO),
    (
        HeadConstArg = csa_const_struct(N),
        io.format("cs(%d)", [i(N)], !IO)
    ;
        HeadConstArg = csa_constant(ConsId, Type),
        mercury_output_cons_id(does_not_need_brackets, ConsId, !IO),
        io.write_string("\n        with type ", !IO),
        mercury_output_type(varset.init, print_name_only, Type, !IO)
    ),
    (
        TailConstArgs = [],
        io.write_string("\n", !IO)
    ;
        TailConstArgs = [HeadTailConstArg | TailTailConstArgs],
        io.write_string(",\n", !IO),
        write_const_struct_args(HeadTailConstArg, TailTailConstArgs, !IO)
    ).

%-----------------------------------------------------------------------------%
%
% Write out tabling structs defined in the module.
%

:- pred write_table_structs(module_info::in, table_struct_map::in,
    io::di, io::uo) is det.

write_table_structs(ModuleInfo, TableStructMap, !IO) :-
    map.to_assoc_list(TableStructMap, TableStructs),
    io.write_string("%-------- Table structs --------\n", !IO),
    list.foldl(write_table_struct_info(ModuleInfo), TableStructs, !IO),
    io.nl(!IO).

:- pred write_table_struct_info(module_info::in,
    pair(pred_proc_id, table_struct_info)::in, io::di, io::uo) is det.

write_table_struct_info(ModuleInfo, PredProcId - TableStructInfo, !IO) :-
    io.nl(!IO),
    io.write_string("% table struct info for ", !IO),
    write_pred_proc_id(ModuleInfo, PredProcId, !IO),
    io.nl(!IO),
    TableStructInfo = table_struct_info(ProcTableStructInfo, Attributes),
    ProcTableStructInfo = proc_table_struct_info(_ProcLabel, TVarSet, _Context,
        NumInputs, NumOutputs, InputSteps, MaybeOutputSteps, ArgInfos,
        _EvalMethod),
    io.format("%% #inputs: %d, #outputs: %d\n", [i(NumInputs), i(NumOutputs)],
        !IO),
    io.write_string("% input steps:", !IO),
    list.foldl(write_space_and_table_trie_step(TVarSet), InputSteps, !IO),
    io.nl(!IO),
    (
        MaybeOutputSteps = yes(OutputSteps),
        io.write_string("% output steps:", !IO),
        list.foldl(write_space_and_table_trie_step(TVarSet), OutputSteps, !IO),
        io.nl(!IO)
    ;
        MaybeOutputSteps = no,
        io.write_string("% no output steps", !IO)
    ),
    write_table_arg_infos(TVarSet, ArgInfos, !IO),

    Attributes = table_attributes(Strictness, SizeLimit, Stats, AllowReset),
    (
        Strictness = cts_all_strict,
        io.write_string("% all strict\n", !IO)
    ;
        Strictness = cts_all_fast_loose,
        io.write_string("% all fast_loose\n", !IO)
    ;
        Strictness = cts_specified(ArgMethods, HiddenArgMethod),
        io.write_string("% specified [", !IO),
        write_arg_tabling_methods("", ArgMethods, !IO),
        io.write_string("]", !IO),
        (
            HiddenArgMethod = table_hidden_arg_value,
            io.write_string(", hidden args by value\n", !IO)
        ;
            HiddenArgMethod = table_hidden_arg_addr,
            io.write_string(", hidden args by addr\n", !IO)
        )
    ),
    (
        SizeLimit = no,
        io.write_string("% no size limit\n", !IO)
    ;
        SizeLimit = yes(Limit),
        io.format("%% size limit %d\n", [i(Limit)], !IO)
    ),
    (
        Stats = table_gather_statistics,
        io.write_string("% gather statistics\n", !IO)
    ;
        Stats = table_dont_gather_statistics,
        io.write_string("% do not gather statistics\n", !IO)
    ),
    (
        AllowReset = table_allow_reset,
        io.write_string("% allow reset\n", !IO)
    ;
        AllowReset = table_dont_allow_reset,
        io.write_string("% do not allow reset\n", !IO)
    ).

:- pred write_arg_tabling_methods(string::in,
    list(maybe(arg_tabling_method))::in, io::di, io::uo) is det.

write_arg_tabling_methods(_Prefix, [], !IO).
write_arg_tabling_methods(Prefix, [MaybeMethod | MaybeMethods], !IO) :-
    io.write_string(Prefix, !IO),
    (
        MaybeMethod = no,
        io.write_string("output", !IO)
    ;
        MaybeMethod = yes(arg_value),
        io.write_string("value", !IO)
    ;
        MaybeMethod = yes(arg_addr),
        io.write_string("addr", !IO)
    ;
        MaybeMethod = yes(arg_promise_implied),
        io.write_string("promise_implied", !IO)
    ),
    write_arg_tabling_methods(", ", MaybeMethods, !IO).

%-----------------------------------------------------------------------------%
%
% Write out the predicate table.
%

:- pred write_preds(hlds_out_info::in, output_lang::in, int::in,
    module_info::in, pred_table::in, io::di, io::uo) is det.

write_preds(Info, Lang, Indent, ModuleInfo, PredTable, !IO) :-
    io.write_string("%-------- Predicates --------\n\n", !IO),
    write_indent(Indent, !IO),
    map.to_assoc_list(PredTable, PredIdsInfos),
    module_info_get_globals(ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, dump_hlds_pred_name_order,
        NameOrder),
    (
        NameOrder = no,
        PrintPredIdsInfos = PredIdsInfos
    ;
        NameOrder = yes,
        list.sort(compare_in_name_order, PredIdsInfos, PrintPredIdsInfos)
    ),
    list.foldl(maybe_write_pred(Info, Lang, Indent, ModuleInfo),
        PrintPredIdsInfos, !IO).

:- pred compare_in_name_order(
    pair(pred_id, pred_info)::in,
    pair(pred_id, pred_info)::in,
    comparison_result::out) is det.

compare_in_name_order(PredIdA - PredInfoA, PredIdB - PredInfoB, Result) :-
    pred_info_get_name(PredInfoA, PredNameA),
    pred_info_get_name(PredInfoB, PredNameB),
    compare(NameResult, PredNameA, PredNameB),
    (
        ( NameResult = (<)
        ; NameResult = (>)
        ),
        Result = NameResult
    ;
        NameResult = (=),
        compare(Result, PredIdA, PredIdB)
    ).

:- pred maybe_write_pred(hlds_out_info::in, output_lang::in, int::in,
    module_info::in, pair(pred_id, pred_info)::in, io::di, io::uo) is det.

maybe_write_pred(Info, Lang, Indent, ModuleInfo, PredId - PredInfo, !IO) :-
    DumpOptions = Info ^ hoi_dump_hlds_options,
    DumpPredIdStrs = Info ^ hoi_dump_hlds_pred_ids,
    DumpPredNames = Info ^ hoi_dump_hlds_pred_names,
    pred_id_to_int(PredId, PredIdInt),
    ( if
        % If the user requested one or more predicates/functions to be dumped,
        % we dump them even if the condition of the nested if-then-else below
        % would say they shouldn't be dumped, and we don't dump anything else.
        ( DumpPredIdStrs = [_ | _]
        ; DumpPredNames = [_ | _]
        )
    then
        ( if
            (
                some [DumpPredIdStr, DumpPredId] (
                    list.member(DumpPredIdStr, DumpPredIdStrs),
                    string.to_int(DumpPredIdStr, DumpPredId),
                    PredIdInt = DumpPredId
                )
            ;
                PredName = pred_info_name(PredInfo),
                list.member(PredName, DumpPredNames)
            )
        then
            write_pred(Info, Lang, ModuleInfo, Indent, PredId, PredInfo, !IO)
        else
            true
        )
    else
        ( if
            (
                not string.contains_char(DumpOptions, 'I'),
                pred_info_is_imported(PredInfo)
            ;
                % For pseudo-imported predicates (i.e. unification preds),
                % only print them if we are using a local mode for them.
                not string.contains_char(DumpOptions, 'I'),
                pred_info_is_pseudo_imported(PredInfo),
                ProcIds = pred_info_procids(PredInfo),
                hlds_pred.in_in_unification_proc_id(ProcId),
                ProcIds = [ProcId]
            ;
                % We dump unification and other compiler-generated special
                % predicates if suboption 'U' is on. We don't need that
                % information to understand how the program has been
                % transformed.
                not string.contains_char(DumpOptions, 'U'),
                is_unify_or_compare_pred(PredInfo)
            )
        then
            true
        else
            write_pred(Info, Lang, ModuleInfo, Indent, PredId, PredInfo, !IO)
        )
    ).

%-----------------------------------------------------------------------------%
%
% Write out a promise.
%

write_promise(Info, ModuleInfo, VarSet, TypeQual, VarNamePrint, Indent,
        PromiseType, _PredId, _PredOrFunc, HeadVars, Clause, !IO) :-
    % Curry the varset for term_io.write_variable/4.
    PrintVar = (pred(VarName::in, IOState0::di, IOState::uo) is det :-
        term_io.write_variable(VarName, VarSet, IOState0, IOState)
    ),

    write_indent(Indent, !IO),

    % Print initial formatting differently for assertions.
    (
        PromiseType = promise_type_true,
        io.write_string(":- promise all [", !IO),
        io.write_list(HeadVars, ", ", PrintVar, !IO),
        io.write_string("] (\n", !IO)
    ;
        ( PromiseType = promise_type_exclusive
        ; PromiseType = promise_type_exhaustive
        ; PromiseType = promise_type_exclusive_exhaustive
        ),
        io.write_string(":- all [", !IO),
        io.write_list(HeadVars, ", ", PrintVar, !IO),
        io.write_string("]", !IO),
        mercury_output_newline(Indent, !IO),
        prog_out.write_promise_type(PromiseType, !IO),
        mercury_output_newline(Indent, !IO),
        io.write_string("(\n", !IO)
    ),

    Goal = Clause ^ clause_body,
    do_write_goal(Info, ModuleInfo, VarSet, TypeQual, VarNamePrint,
        Indent+1, ").\n", Goal, !IO).

%-----------------------------------------------------------------------------%
:- end_module hlds.hlds_out.hlds_out_module.
%-----------------------------------------------------------------------------%
