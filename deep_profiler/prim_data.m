% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2005-2009 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: prim_data.m.
% Main authors: fjh, zs.
%
% This module contains some types and predicates that are, or are planned to
% be, shared between the compiler and the debugger.
%
%-----------------------------------------------------------------------------%

:- module mdbcomp.prim_data.
:- interface.

:- import_module list.

    % This enumeration must be EXACTLY the same as the MR_PredFunc enum
    % in runtime/mercury_stack_layout.h, and in the same order, since the
    % code (in browser) assumes the representation is the same.
    %
:- type pred_or_func
    --->    pf_predicate
    ;       pf_function.

    % The kinds of events with which MR_trace may be called, either
    % by compiler-generated code, or by code in the standard library
    % referring to compiler-generated data structures.
    %
    % This enumeration must be EXACTLY the same as the MR_trace_port enum
    % in runtime/mercury_trace_base.h, and in the same order, since the
    % code (in browser) assumes the representation is the same.
    %
:- type trace_port
    --->    port_call
    ;       port_exit
    ;       port_redo
    ;       port_fail
    ;       port_tailrec_call
    ;       port_exception
    ;       port_ite_cond
    ;       port_ite_then
    ;       port_ite_else
    ;       port_neg_enter
    ;       port_neg_success
    ;       port_neg_failure
    ;       port_disj_first
    ;       port_disj_later
    ;       port_switch
    ;       port_nondet_foreign_proc_first
    ;       port_nondet_foreign_proc_later
    ;       port_user.

    % The order that the sym_name function symbols appear in can be significant
    % for module dependency ordering.
    %
:- type sym_name
    --->    unqualified(string)
    ;       qualified(sym_name, string).

:- type module_name == sym_name.

    % get_ancestors(ModuleName) = ParentDeps:
    %
    % ParentDeps is the list of ancestor modules for this module, oldest first;
    % e.g. if the ModuleName is `foo.bar.baz', then ParentDeps would be
    % [`foo', `foo.bar'].
    %
:- func get_ancestors(module_name) = list(module_name).

    % A proc_label is a data structure a backend can use to as the basis
    % of the label used as the entry point of a procedure.
    %
    % The defining module is the module that provides the code for the
    % predicate, the declaring module contains the `:- pred' declaration.
    % When these are different, as for specialised versions of predicates
    % from `.opt' files, the defining module's name may need to be added
    % as a qualifier to the label.
    %
    % The type string_proc_label in program_representation.m parallels this
    % type, but differs from it in being used not inside the compiler but
    % outside, which means it needs to use different types for many fields.
    %
:- type proc_label
    --->    ordinary_proc_label(
                ord_defining_module     :: module_name,
                ord_p_or_f              :: pred_or_func,
                ord_declaring_module    :: module_name,
                ord_pred_name           :: string,
                ord_arity               :: int,
                ord_mode_number         :: int
            )
    ;       special_proc_label(
                spec_defining_module    :: module_name,
                spec_spec_id            :: special_pred_id,
                                        % The special_pred_id indirectly
                                        % defines the predicate name.
                spec_type_module        :: module_name,
                spec_type_name          :: string,
                spec_type_arity         :: int,
                spec_mode_number        :: int
            ).

:- type special_pred_id
    --->    spec_pred_unify
    ;       spec_pred_index
    ;       spec_pred_compare
    ;       spec_pred_init.

    % special_pred_name_arity(SpecialPredId, GenericPredName, TargetName,
    %   Arity):
    %
    % True iff there is a special predicate of category SpecialPredId,
    % called builtin.GenericPredName/Arity, and for which the name of the
    % predicate in the target language is TargetName.
    %
:- pred special_pred_name_arity(special_pred_id, string, string, int).
:- mode special_pred_name_arity(in, out, out, out) is det.
:- mode special_pred_name_arity(out, in, out, out) is semidet.
:- mode special_pred_name_arity(out, out, in, out) is semidet.

    % get_special_pred_id_generic_name(SpecialPredId) = GenericPredName:
    %
    % The name of the generic predicate for SpecialPredId is
    % builtin.GenericPredName.
    %
:- func get_special_pred_id_generic_name(special_pred_id) = string.

    % get_special_pred_id_target_name(SpecialPredId) = TargetName:
    %
    % The name of the predicate in the target language for SpecialPredId is
    % TargetName.
    %
:- func get_special_pred_id_target_name(special_pred_id) = string.

    % get_special_pred_id_name(SpecialPredId) = Arity:
    %
    % The arity of the SpecialPredId predicate is Arity.
    %
:- func get_special_pred_id_arity(special_pred_id) = int.

%-----------------------------------------------------------------------------%

    % string_to_sym_name_sep(String, Separator) = SymName:
    %
    % Convert a string, possibly prefixed with module qualifiers (separated
    % by Separator), into a symbol name.
    %
:- func string_to_sym_name_sep(string, string) = sym_name.

    % string_to_sym_name(String) = SymName:
    %
    % Convert a string, possibly prefixed with module qualifiers (separated
    % by the standard Mercury module qualifier separator), into a symbol name.
    %
:- func string_to_sym_name(string) = sym_name.

    % sym_name_to_string_sep(SymName, Separator) = String:
    %
    % Convert a symbol name to a string, with module qualifiers separated
    % by Separator.
    %
:- func sym_name_to_string_sep(sym_name, string) = string.

    % sym_name_to_string(SymName) = String:
    %
    % Convert a symbol name to a string, with module qualifiers separated by
    % the standard Mercury module qualifier operator.
    %
:- func sym_name_to_string(sym_name) = string.

    % sym_name_to_list(SymName) = List:
    %
    % Convert a symbol name to a list of strings,
    %
:- func sym_name_to_list(sym_name) = list(string).

    % is_submodule(SymName1, SymName2):
    %
    % True iff SymName1 is a submodule of SymName2.
    % For example mod1.mod2.mod3 is a submodule of mod1.mod2.
    %
:- pred is_submodule(module_name::in, module_name::in) is semidet.

    % Given a symbol name, return its unqualified name.
    %
:- func unqualify_name(sym_name) = string.

    % sym_name_get_module_name(SymName) = ModName:
    %
    % Given a symbol name, return the module qualifiers(s).
    % Fails if the symbol is unqualified.
    %
:- pred sym_name_get_module_name(sym_name::in, module_name::out) is semidet.

    % sym_name_get_module_name_default(SymName, DefaultModName, ModName):
    %
    % Given a symbol name, return the module qualifier(s).
    % If the symbol is unqualified, then return the specified default
    % module name.
    %
:- pred sym_name_get_module_name_default(sym_name::in, module_name::in,
    module_name::out) is det.

    % match_sym_name(PartialSymName, CompleteSymName):
    %
    % Succeeds iff there is some sequence of module qualifiers
    % which when prefixed to PartialSymName gives CompleteSymName.
    %
:- pred match_sym_name(sym_name::in, sym_name::in) is semidet.

    % remove_sym_name_prefix(SymName0, Prefix, SymName)
    % succeeds iff
    %   SymName and SymName0 have the same module qualifier
    %   and the unqualified part of SymName0 has the given prefix
    %   and the unqualified part of SymName is the unqualified
    %       part of SymName0 with the prefix removed.
    %
:- pred remove_sym_name_prefix(sym_name, string, sym_name).
:- mode remove_sym_name_prefix(in, in, out) is semidet.
:- mode remove_sym_name_prefix(out, in, in) is det.

    % remove_sym_name_suffix(SymName0, Suffix, SymName)
    % succeeds iff
    %   SymName and SymName0 have the same module qualifier
    %   and the unqualified part of SymName0 has the given suffix
    %   and the unqualified part of SymName is the unqualified
    %       part of SymName0 with the suffix removed.
    %
:- pred remove_sym_name_suffix(sym_name::in, string::in, sym_name::out)
    is semidet.

    % add_sym_name_suffix(SymName0, Suffix, SymName)
    % succeeds iff
    %   SymName and SymName0 have the same module qualifier
    %   and the unqualified part of SymName is the unqualified
    %       part of SymName0 with the suffix added.
    %
:- pred add_sym_name_suffix(sym_name::in, string::in, sym_name::out) is det.

    % transform_sym_base_name(TransformFunc, SymName0) = SymName
    % succeeds iff
    %   SymName and SymName0 have the same module qualifier
    %   and the unqualified part of SymName is the result of applying
    %   TransformFunc to the unqualified part of SymName0.
    %
:- func transform_sym_base_name(func(string) = string, sym_name) = sym_name.

    % Given a sym_name return the top level qualifier of that name.
    %
:- func outermost_qualifier(sym_name) = string.

    % add_outermost_qualifier(ModuleName, SymName0) = SymName:
    %
    % Prepend the specified ModuleName onto the module qualifiers in SymName0,
    % giving SymName.
    %
:- func add_outermost_qualifier(string, sym_name) = sym_name.

    % Remove and return the top level qualifier of a sym_name.
    %
:- pred strip_outermost_qualifier(sym_name::in,
    string::out, sym_name::out) is semidet.

%-----------------------------------------------------------------------------%

    % Returns all the modules which are automatically imported.
    %
:- func all_builtin_modules = list(sym_name).

    % Returns the name of the module containing public builtins;
    % originally this was "mercury_builtin", but it later became
    % just "builtin", and it may eventually be renamed "std.builtin".
    % This module is automatically imported, as if via `import_module'.
    %
:- func mercury_public_builtin_module = sym_name.

    % Returns the name of the module containing private builtins;
    % traditionally this was "mercury_builtin", but it later became
    % "private_builtin", and it may eventually be renamed
    % "std.private_builtin". This module is automatically imported,
    % as if via `use_module'.
    %
:- func mercury_private_builtin_module = sym_name.

    % Returns the name of the module containing builtins for region-based
    % memory management.  This module is automatically imported iff
    % RBMM is enabled.
    %
:- func mercury_region_builtin_module = sym_name.

    % Returns the name of the module containing builtins for software
    % transactional memory.
    % This module is automatically imported iff STM is used in a module.
    %
:- func mercury_stm_builtin_module = sym_name.

    % Returns the name of the module implementing exceptions.
    % This module is automatically imported iff STM is used in a module.
    %
:- func mercury_exception_module = sym_name.

    % Returns the name of the module implementing univs.
    % This module is automatically imported iff STM is used in a module.
    %
:- func mercury_univ_module = sym_name.

    % Returns the name of the module containing builtins for tabling;
    % originally these were in "private_builtin", but were then moved into
    % a separate module. This module is automatically imported iff any
    % predicate is tabled.
    %
:- func mercury_table_builtin_module = sym_name.

    % Returns the name of the module that handles tabling statistics.
    % This is separate from table_builtin, since its contents need to be
    % visible to users, while the contents of table_builtin are private.
    % This module is automatically imported iff any tabled predicate
    % gather statistics.
    %
:- func mercury_table_statistics_module = sym_name.

    % Returns the name of the module containing the builtins for deep
    % profiling. This module is automatically imported iff deep profiling
    % is enabled.
    %
:- func mercury_profiling_builtin_module = sym_name.

    % Returns the name of the module containing the builtins for term size
    % profiling. This module is automatically imported iff term size profiling
    % is enabled.
    %
:- func mercury_term_size_prof_builtin_module = sym_name.

    % Returns the name of the module containing the builtins for parallelism.
    % This module is automatically imported iff building in a .par grade.
    %
:- func mercury_par_builtin_module = sym_name.

    % Returns the name of the module containing the RTTI implementation for
    % certain backends.
    %
:- func mercury_rtti_implementation_builtin_module = sym_name.

    % Returns the name of the module containing the builtins for the
    % source-to-source debugger.
    %
:- func mercury_ssdb_builtin_module = sym_name.

    % Returns the name of the list module.
    %
:- func mercury_list_module = sym_name.

    % Returns the name of the string module.
    %
:- func mercury_string_module = sym_name.

    % Returns the name of the I/O module.
    %
:- func mercury_io_module = sym_name.

    % Returns the sym_name of the module with the given name in the
    % Mercury standard library.
    %
:- func mercury_std_lib_module_name(sym_name) = sym_name.

:- pred is_std_lib_module_name(sym_name::in, string::out) is semidet.

    % Succeeds iff the specified module is one of the builtin modules listed
    % above which may be automatically imported.
    %
:- pred any_mercury_builtin_module(sym_name::in) is semidet.

    % Succeeds iff the specified module will never be traced.
    %
:- pred non_traced_mercury_builtin_module(sym_name::in) is semidet.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module int.
:- import_module library.
:- import_module list.
:- import_module string.

%-----------------------------------------------------------------------------%

get_ancestors(ModuleName) = get_ancestors_2(ModuleName, []).

:- func get_ancestors_2(module_name, list(module_name)) = list(module_name).

get_ancestors_2(unqualified(_), Ancestors) = Ancestors.
get_ancestors_2(qualified(Parent, _), Ancestors0) =
    get_ancestors_2(Parent, [Parent | Ancestors0]).

%-----------------------------------------------------------------------------%

string_to_sym_name_sep(String, ModuleSeparator) = Result :-
    % This would be simpler if we had a string.rev_sub_string_search/3 pred.
    % With that, we could search for underscores right-to-left, and construct
    % the resulting symbol directly. Instead, we search for them left-to-right,
    % and then call add_outermost_qualifier to fix things up.
    (
        string.sub_string_search(String, ModuleSeparator, LeftLength),
        LeftLength > 0
    ->
        string.left(String, LeftLength, ModuleName),
        string.length(String, StringLength),
        string.length(ModuleSeparator, SeparatorLength),
        RightLength = StringLength - LeftLength - SeparatorLength,
        string.right(String, RightLength, Name),
        NameSym = string_to_sym_name_sep(Name, ModuleSeparator),
        Result = add_outermost_qualifier(ModuleName, NameSym)
    ;
        Result = unqualified(String)
    ).

string_to_sym_name(String) = string_to_sym_name_sep(String, ".").

sym_name_to_string_sep(unqualified(Name), _Separator) = Name.
sym_name_to_string_sep(qualified(ModuleSym, Name), Separator) = QualName :-
    ModuleName = sym_name_to_string_sep(ModuleSym, Separator),
    string.append_list([ModuleName, Separator, Name], QualName).

sym_name_to_string(SymName) = sym_name_to_string_sep(SymName, ".").

sym_name_to_list(unqualified(Name)) = [Name].
sym_name_to_list(qualified(Module, Name))
    = sym_name_to_list(Module) ++ [Name].

unqualify_name(unqualified(Name)) = Name.
unqualify_name(qualified(_ModuleName, Name)) = Name.

sym_name_get_module_name(unqualified(_), _) :- fail.
sym_name_get_module_name(qualified(ModuleName, _), ModuleName).

sym_name_get_module_name_default(SymName, DefaultModuleName, ModuleName) :-
    (
        SymName = unqualified(_),
        ModuleName = DefaultModuleName
    ;
        SymName = qualified(ModuleName, _)
    ).

    % match_sym_name(PartialSymName, CompleteSymName):
    %
    % Succeeds iff there is some sequence of module qualifiers
    % which when prefixed to PartialSymName gives CompleteSymName.
    %
match_sym_name(qualified(Module1, Name), qualified(Module2, Name)) :-
    match_sym_name(Module1, Module2).
match_sym_name(unqualified(Name), unqualified(Name)).
match_sym_name(unqualified(Name), qualified(_, Name)).

remove_sym_name_prefix(SymName0, Prefix, SymName) :-
    (
        SymName0 = unqualified(Name0),
        string.append(Prefix, Name, Name0),
        SymName = unqualified(Name)
    ;
        SymName0 = qualified(Module, Name0),
        string.append(Prefix, Name, Name0),
        SymName = qualified(Module, Name)
    ).

remove_sym_name_suffix(SymName0, Suffix, SymName) :-
    (
        SymName0 = unqualified(Name0),
        string.remove_suffix(Name0, Suffix, Name),
        SymName = unqualified(Name)
    ;
        SymName0 = qualified(Module, Name0),
        string.remove_suffix(Name0, Suffix, Name),
        SymName = qualified(Module, Name)
    ).

add_sym_name_suffix(SymName0, Suffix, SymName) :-
    (
        SymName0 = unqualified(Name0),
        string.append(Name0, Suffix, Name),
        SymName = unqualified(Name)
    ;
        SymName0 = qualified(Module, Name0),
        string.append(Name0, Suffix, Name),
        SymName = qualified(Module, Name)
    ).

transform_sym_base_name(TransformFunc, SymName0) = SymName :-
    (
        SymName0 = unqualified(Name0),
        SymName = unqualified(TransformFunc(Name0))
    ;
        SymName0 = qualified(Module, Name0),
        SymName = qualified(Module, TransformFunc(Name0))
    ).

outermost_qualifier(SymName) = Name :-
    (
        SymName = unqualified(Name)
    ;
        SymName = qualified(ModuleSymName, _),
        Name = outermost_qualifier(ModuleSymName)
    ).

add_outermost_qualifier(ModuleName, SymName0) = SymName :-
    (
        SymName0 = unqualified(Name),
        SymName = qualified(unqualified(ModuleName), Name)
    ;
        SymName0 = qualified(ModuleSymName0, Name),
        ModuleSymName = add_outermost_qualifier(ModuleName, ModuleSymName0),
        SymName = qualified(ModuleSymName, Name)
    ).

strip_outermost_qualifier(SymName0, OuterModuleName, SymName) :-
    SymName0 = qualified(ModuleSymName0, Name),
    (
        ModuleSymName0 = unqualified(OuterModuleName),
        SymName = unqualified(Name)
    ;
        ModuleSymName0 = qualified(_, _),
        strip_outermost_qualifier(ModuleSymName0, OuterModuleName,
            ModuleSymName),
        SymName = qualified(ModuleSymName, Name)
    ).

%-----------------------------------------------------------------------------%

is_submodule(SymName, SymName).
is_submodule(qualified(SymNameA, _), SymNameB) :-
    is_submodule(SymNameA, SymNameB).

special_pred_name_arity(spec_pred_unify, "unify", "__Unify__", 2).
special_pred_name_arity(spec_pred_index, "index", "__Index__", 2).
special_pred_name_arity(spec_pred_compare, "compare", "__Compare__", 3).
special_pred_name_arity(spec_pred_init, "initialise", "__Initialise__", 1).

get_special_pred_id_generic_name(Id) = Name :-
    special_pred_name_arity(Id, Name, _, _).

get_special_pred_id_target_name(Id) = Name :-
    special_pred_name_arity(Id, _, Name, _).

get_special_pred_id_arity(Id) = Arity :-
    special_pred_name_arity(Id, _, _, Arity).

all_builtin_modules = [
    mercury_public_builtin_module,
    mercury_private_builtin_module,
    mercury_region_builtin_module,
    mercury_stm_builtin_module,
    mercury_table_builtin_module,
    mercury_table_statistics_module,
    mercury_profiling_builtin_module,
    mercury_term_size_prof_builtin_module,
    mercury_par_builtin_module,
    mercury_rtti_implementation_builtin_module,
    mercury_ssdb_builtin_module
].

% We may eventually want to put the standard library into a package "std":
% mercury_public_builtin_module = qualified(unqualified("std"), "builtin").
% mercury_private_builtin_module(M) =
%       qualified(unqualified("std"), "private_builtin"))).
mercury_public_builtin_module = unqualified("builtin").
mercury_private_builtin_module = unqualified("private_builtin").
mercury_region_builtin_module = unqualified("region_builtin").
mercury_stm_builtin_module = unqualified("stm_builtin").
% Exception is a non-builtin module needed by the STM system.
mercury_exception_module = unqualified("exception").
% Univ is a non-builtin module needed by the STM system.
mercury_univ_module = unqualified("univ").
mercury_table_builtin_module = unqualified("table_builtin").
mercury_table_statistics_module = unqualified("table_statistics").
mercury_profiling_builtin_module = unqualified("profiling_builtin").
mercury_term_size_prof_builtin_module = unqualified("term_size_prof_builtin").
mercury_par_builtin_module = unqualified("par_builtin").
mercury_rtti_implementation_builtin_module = unqualified("rtti_implementation").
mercury_ssdb_builtin_module = unqualified("ssdb").
mercury_list_module = unqualified("list").
mercury_string_module = unqualified("string").
mercury_io_module = unqualified("io").

is_std_lib_module_name(ModuleName, Name) :-
    % -- not yet:
    % ModuleName = qualified(unqualified("std"), UnqualifiedModuleName),
    Name = sym_name_to_string(ModuleName),
    mercury_std_library_module(Name).

mercury_std_lib_module_name(ModuleName) = ModuleName.
    % -- not yet:
    % QualfiedModuleName = qualified(unqualified("std"), ModuleName),

any_mercury_builtin_module(Module) :-
    ( Module = mercury_public_builtin_module
    ; Module = mercury_private_builtin_module
    ; Module = mercury_region_builtin_module
    ; Module = mercury_table_builtin_module
    ; Module = mercury_profiling_builtin_module
    ; Module = mercury_term_size_prof_builtin_module
    ; Module = mercury_par_builtin_module
    ; Module = mercury_ssdb_builtin_module
    ).

non_traced_mercury_builtin_module(Module) :-
    ( Module = mercury_table_builtin_module
    ; Module = mercury_profiling_builtin_module
    ; Module = mercury_term_size_prof_builtin_module
    ; Module = mercury_par_builtin_module
    ; Module = mercury_ssdb_builtin_module
    ).
