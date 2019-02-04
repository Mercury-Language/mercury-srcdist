%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2002-2006 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
% 
% File: hlds_code_util.m.
% 
% Various utilities routines for use during HLDS generation.
% 
%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- module hlds.hlds_code_util.
:- interface.

:- import_module hlds.hlds_data.
:- import_module hlds.hlds_module.
:- import_module parse_tree.prog_data.

:- import_module list.

%-----------------------------------------------------------------------------%

    % Are equivalence types fully expanded on this backend?
    %
:- pred are_equivalence_types_expanded(module_info::in) is semidet.

    % Find out how a function symbol (constructor) is represented
    % in the given type.
    %
:- func cons_id_to_tag(cons_id, mer_type, module_info) = cons_tag.

    % Given a list of types, mangle the names so into a string which
    % identifies them. The types must all have their top level functor
    % bound, with any arguments free variables.
    %
:- pred make_instance_string(list(mer_type)::in, string::out) is det.

    % Succeeds iff this inst is one that can be used in a valid
    % mutable declaration.
    %
:- pred is_valid_mutable_inst(module_info::in, mer_inst::in) is semidet.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.mode_util.
:- import_module hlds.hlds_pred.
:- import_module libs.compiler_util.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.prog_type.

:- import_module bool.
:- import_module char.
:- import_module map.
:- import_module set.
:- import_module string.

%-----------------------------------------------------------------------------%

are_equivalence_types_expanded(ModuleInfo) :-
    module_info_get_globals(ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, highlevel_data, HighLevelData),
    HighLevelData = yes,
    globals.get_target(Globals, Target),
    ( Target = target_il
    ; Target = target_java
    ).

%-----------------------------------------------------------------------------%

cons_id_to_tag(int_const(I), _, _) = int_tag(I).
cons_id_to_tag(float_const(F), _, _) = float_tag(F).
cons_id_to_tag(string_const(S), _, _) = string_tag(S).
cons_id_to_tag(pred_const(ShroudedPredProcId, EvalMethod), _, _) =
        pred_closure_tag(PredId, ProcId, EvalMethod) :-
    proc(PredId, ProcId) = unshroud_pred_proc_id(ShroudedPredProcId).
cons_id_to_tag(type_ctor_info_const(M,T,A), _, _) =
        type_ctor_info_tag(M,T,A).
cons_id_to_tag(base_typeclass_info_const(M,C,_,N), _, _) =
        base_typeclass_info_tag(M,C,N).
cons_id_to_tag(type_info_cell_constructor(_), _, _) = unshared_tag(0).
cons_id_to_tag(typeclass_info_cell_constructor, _, _) = unshared_tag(0).
cons_id_to_tag(tabling_info_const(ShroudedPredProcId), _, _) =
        tabling_info_tag(PredId, ProcId) :-
    proc(PredId, ProcId) = unshroud_pred_proc_id(ShroudedPredProcId).
cons_id_to_tag(deep_profiling_proc_layout(ShroudedPredProcId), _, _) =
        deep_profiling_proc_layout_tag(PredId, ProcId) :-
    proc(PredId, ProcId) = unshroud_pred_proc_id(ShroudedPredProcId).
cons_id_to_tag(table_io_decl(ShroudedPredProcId), _, _) =
        table_io_decl_tag(PredId, ProcId) :-
    proc(PredId, ProcId) = unshroud_pred_proc_id(ShroudedPredProcId).
cons_id_to_tag(cons(Name, Arity), Type, ModuleInfo) = Tag :-
    (
        % Handle the `character' type specially.
        Type = builtin_type(builtin_type_character),
        Name = unqualified(ConsName),
        string.char_to_string(Char, ConsName)
    ->
        char.to_int(Char, CharCode),
        Tag = int_tag(CharCode)
    ;
        % Tuples do not need a tag. Note that unary tuples are not treated
        % as no_tag types. There's no reason why they couldn't be, it's just
        % not worth the effort.
        type_is_tuple(Type, _)
    ->
        Tag = single_functor_tag
    ;
        % Use the type to determine the type_ctor.
        ( type_to_ctor_and_args(Type, TypeCtor0, _) ->
            TypeCtor = TypeCtor0
        ;
            % The type-checker should ensure that this never happens.
            unexpected(this_file, "cons_id_to_tag: invalid type")
        ),

        % Given the type_ctor, lookup up the constructor tag table
        % for that type.
        module_info_get_type_table(ModuleInfo, TypeTable),
        map.lookup(TypeTable, TypeCtor, TypeDefn),
        hlds_data.get_type_defn_body(TypeDefn, TypeBody),
        ( ConsTable0 = TypeBody ^ du_type_cons_tag_values ->
            ConsTable = ConsTable0
        ;
            unexpected(this_file, "cons_id_to_tag: type is not d.u. type?")
        ),

        % Finally look up the cons_id in the table.
        map.lookup(ConsTable, cons(Name, Arity), Tag)
    ).

%-----------------------------------------------------------------------------%

make_instance_string(InstanceTypes, InstanceString) :-
    % Note that for historical reasons, builtin types are treated as being
    % unqualified (`int') rather than being qualified (`builtin.int')
    % at this point.
    list.map(type_to_string, InstanceTypes, InstanceStrings),
    string.append_list(InstanceStrings, InstanceString).

:- pred type_to_string(mer_type::in, string::out) is det.

type_to_string(Type, String) :-
    ( type_to_ctor_and_args(Type, TypeCtor, _) ->
        TypeCtor = type_ctor(TypeName, TypeArity),
        TypeNameString = sym_name_to_string_sep(TypeName, "__"),
        string.int_to_string(TypeArity, TypeArityString),
        String = TypeNameString ++ "__arity" ++ TypeArityString ++ "__"
    ;
        unexpected(this_file, "type_to_string: invalid type")
    ).

%----------------------------------------------------------------------------%

is_valid_mutable_inst(ModuleInfo, Inst) :-
    set.init(Expansions),
    is_valid_mutable_inst_2(ModuleInfo, Inst, Expansions).

:- pred is_valid_mutable_inst_2(module_info::in, mer_inst::in,
    set(inst_name)::in) is semidet.

is_valid_mutable_inst_2(_, any(shared), _).
is_valid_mutable_inst_2(ModuleInfo, bound(shared, BoundInsts), Expansions) :-
    list.member(bound_functor(_, Insts), BoundInsts),
    list.member(Inst, Insts),
    is_valid_mutable_inst_2(ModuleInfo, Inst, Expansions).
is_valid_mutable_inst_2(_, ground(shared, _), _).
is_valid_mutable_inst_2(ModuleInfo, defined_inst(InstName), Expansions0) :-
    not set.member(InstName, Expansions0),
    Expansions = set.insert(Expansions0, InstName),
    inst_lookup(ModuleInfo, InstName, Inst),
    is_valid_mutable_inst_2(ModuleInfo, Inst, Expansions).

%----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "hlds_code_util.m".

%----------------------------------------------------------------------------%
:- end_module hlds_code_util.
%----------------------------------------------------------------------------%
