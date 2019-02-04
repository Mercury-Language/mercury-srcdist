%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2000-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
% 
% File: foreign.m.
% Main authors: trd, dgj.
% 
% This module defines predicates for interfacing with foreign languages.  In
% particular, this module supports interfacing with languages other than the
% target of compilation.
% 
% Parts of this code were originally written by dgj, and have since been moved
% here.
% 
%-----------------------------------------------------------------------------%

:- module backend_libs.foreign.
:- interface.

:- import_module hlds.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.
:- import_module libs.globals.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.
:- import_module parse_tree.error_util.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_foreign.

:- import_module bool.
:- import_module list.
:- import_module maybe.

%-----------------------------------------------------------------------------%

    % A type which is used to determine the string representation of a
    % mercury type for various foreign languages.
    %
:- type exported_type.

    % Given a type which is not defined as a foreign type, get the
    % exported_type representation of that type.
    %
:- func non_foreign_type(mer_type) = exported_type.

    % Does the foreign_type_body contain a definition usable
    % when compiling to the given target.
    %
:- pred have_foreign_type_for_backend(compilation_target::in,
    foreign_type_body::in, bool::out) is det.

    % Given an arbitary mercury type, get the exported_type representation
    % of that type on the current backend.
    %
:- func to_exported_type(module_info, mer_type) = exported_type.

    % Does the implementation of the given foreign type body on
    % the current backend use a user-defined comparison predicate.
    %
:- pred foreign_type_body_has_user_defined_eq_comp_pred(module_info::in,
    foreign_type_body::in, unify_compare::out) is semidet.

    % Find the current target backend from the module_info, and given
    % a foreign_type_body, return the name of the foreign language type
    % the identity of any user-defined unify/compare predicates, and the
    % assertions applicable to that backend.
    %
:- pred foreign_type_body_to_exported_type(module_info::in,
    foreign_type_body::in, sym_name::out, maybe(unify_compare)::out,
    list(foreign_type_assertion)::out) is det.

    % Given the exported_type representation for a type, determine
    % whether or not it is a foreign type, and if yes, return the foreign
    % type's assertions.
    %
:- func is_foreign_type(exported_type) = maybe(list(foreign_type_assertion)).

    % Given a representation of a type, determine the string which
    % corresponds to that type in the specified foreign language,
    % for use with foreign language interfacing (`pragma export' or
    % `pragma foreign_proc').
    %
:- func exported_type_to_string(foreign_language, exported_type) = string.
:- func mercury_exported_type_to_string(module_info, foreign_language,
    mer_type) = string.

    % Filter the decls for the given foreign language.
    % The first return value is the list of matches, the second is
    % the list of mis-matches.
    %
:- pred filter_decls(foreign_language::in, foreign_decl_info::in,
    foreign_decl_info::out, foreign_decl_info::out) is det.

    % Filter the module imports for the given foreign language.
    % The first return value is the list of matches, the second is
    % the list of mis-matches.
    %
:- pred filter_imports(foreign_language::in,
    foreign_import_module_info_list::in,
    foreign_import_module_info_list::out, foreign_import_module_info_list::out)
    is det.

    % Filter the bodys for the given foreign language.
    % The first return value is the list of matches, the second is
    % the list of mis-matches.
    %
:- pred filter_bodys(foreign_language::in, foreign_body_info::in,
    foreign_body_info::out, foreign_body_info::out) is det.

    % Filter the foreign exports for the given foreign language.
    % The first return value is the list of matches, the second is
    % the list of mis-matches.
    %
:- pred filter_exports(foreign_language::in,
    list(pragma_exported_proc)::in,
    list(pragma_exported_proc)::out, list(pragma_exported_proc)::out)
    is det.

    % Given some foreign code, generate some suitable proxy code for
    % calling the code via one of the given languages.
    % This might mean, for example, generating a call to a
    % forwarding function in C.
    % The foreign language argument specifies which language is the
    % target language, the other inputs are the name, types, input
    % variables and so on for a piece of pragma foreign code.
    % The outputs are the new attributes and implementation for this
    % code.
    % XXX This implementation is currently incomplete, so in future
    % this interface may change.
    %
:- pred extrude_pragma_implementation(list(foreign_language)::in,
    list(pragma_var)::in, sym_name::in, pred_or_func::in, prog_context::in,
    module_info::in, module_info::out,
    pragma_foreign_proc_attributes::in, pragma_foreign_proc_attributes::out,
    pragma_foreign_code_impl::in, pragma_foreign_code_impl::out) is det.

    % make_pragma_import turns pragma imports into pragma foreign_code.
    % Given the pred and proc info for this predicate, the name
    % of the function to import, the context of the import pragma
    % and the module_info, create a pragma_foreign_code_impl
    % which imports the foreign function, and return the varset,
    % pragma_vars, argument types and other information about the
    % generated predicate body.
    %
:- pred make_pragma_import(pred_info::in, proc_info::in, string::in,
    prog_context::in, pragma_foreign_code_impl::out,
    prog_varset::out, list(pragma_var)::out, list(mer_type)::out, arity::out,
    pred_or_func::out, module_info::in, module_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

    % The name of the #define which can be used to guard declarations with
    % to prevent entities being declared twice.
    %
:- func decl_guard(sym_name) = string.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.        % needed for type_util, mode_util
:- import_module check_hlds.mode_util.
:- import_module check_hlds.type_util.
:- import_module hlds.code_model.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_module.
:- import_module hlds.hlds_out.
:- import_module hlds.hlds_pred.
:- import_module libs.
:- import_module libs.compiler_util.
:- import_module libs.globals.
:- import_module parse_tree.prog_type.
:- import_module parse_tree.prog_util.

:- import_module assoc_list.
:- import_module int.
:- import_module list.
:- import_module map.
:- import_module pair.
:- import_module string.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%

filter_decls(WantedLang, Decls0, LangDecls, NotLangDecls) :-
    IsWanted = (pred(foreign_decl_code(Lang, _, _, _)::in) is semidet :-
        WantedLang = Lang),
    list.filter(IsWanted, Decls0, LangDecls, NotLangDecls).

filter_imports(WantedLang, Imports0, LangImports, NotLangImports) :-
    IsWanted = (pred(foreign_import_module_info(Lang, _, _)::in) is semidet :-
        WantedLang = Lang),
    list.filter(IsWanted, Imports0, LangImports, NotLangImports).

filter_bodys(WantedLang, Bodys0, LangBodys, NotLangBodys) :-
    IsWanted = (pred(foreign_body_code(Lang, _, _)::in) is semidet :-
        WantedLang = Lang),
    list.filter(IsWanted, Bodys0, LangBodys, NotLangBodys).

filter_exports(WantedLang, Exports0, LangExports, NotLangExports) :-
    IsWanted = (pred(pragma_exported_proc(Lang, _, _, _, _)::in) is semidet :-
        WantedLang = Lang),
    list.filter(IsWanted, Exports0, LangExports, NotLangExports).

extrude_pragma_implementation([], _PragmaVars, _PredName, _PredOrFunc,
        _Context, !ModuleInfo, !NewAttributes, !Impl) :-
    unexpected(this_file, "no suitable target languages available").

extrude_pragma_implementation([TargetLang | TargetLangs], _PragmaVars,
        _PredName, _PredOrFunc, _Context, !ModuleInfo, !Attributes, !Impl) :-
    % We just use the first target language for now, it might be nice
    % to try a few others if the backend supports multiple ones.
    ForeignLanguage = get_foreign_language(!.Attributes),

    % If the foreign language is available as a target language,
    % we don't need to do anything.
    ( list.member(ForeignLanguage, [TargetLang | TargetLangs]) ->
        true
    ;
        set_foreign_language(TargetLang, !Attributes),
        extrude_pragma_implementation_2(TargetLang, ForeignLanguage,
            !ModuleInfo, !Impl)
    ).

:- pred extrude_pragma_implementation_2(
    foreign_language::in, foreign_language::in,
    module_info::in, module_info::out,
    pragma_foreign_code_impl::in, pragma_foreign_code_impl::out) is det.

    % This isn't finished yet, and we probably won't implement it for C
    % calling MC++.  For C calling normal C++ we would generate a proxy
    % function in C++ (implemented in a piece of C++ body code) with C
    % linkage, and import that function.  The backend would spit the C++
    % body code into a separate file.
    % The code would look a little like this:

%   NewName = make_pred_name(ForeignLanguage, PredName),
%   ( PredOrFunc = predicate ->
%       ReturnCode = ""
%   ;
%       ReturnCode = "ReturnVal = "
%   ),
%   C_ExtraCode = "Some Extra Code To Run",
%   create_pragma_import_c_code(PragmaVars, ModuleInfo0, "", VarString),
%   module_add_foreign_body_code(cplusplus,
%       C_ExtraCode, Context, ModuleInfo0, ModuleInfo),
%   Impl = import(NewName, ReturnCode, VarString, no)

extrude_pragma_implementation_2(TargetLanguage, ForeignLanguage,
        !ModuleInfo, !Impl) :-
    (
        TargetLanguage = lang_c,
        (
            ForeignLanguage = lang_c
        ;
            ( ForeignLanguage = lang_csharp
            ; ForeignLanguage = lang_il
            ; ForeignLanguage = lang_java
            ; ForeignLanguage = lang_erlang
            ),
            unimplemented_combination(TargetLanguage, ForeignLanguage)
        )
    ;
        TargetLanguage = lang_csharp,
        (
            ForeignLanguage = lang_csharp
        ;
            ( ForeignLanguage = lang_c
            ; ForeignLanguage = lang_il
            ; ForeignLanguage = lang_java
            ; ForeignLanguage = lang_erlang
            ),
            unimplemented_combination(TargetLanguage, ForeignLanguage)
        )
    ;
        TargetLanguage = lang_il,
        (
            ForeignLanguage = lang_il
        ;
            ( ForeignLanguage = lang_c
            ; ForeignLanguage = lang_csharp
            ; ForeignLanguage = lang_java
            ; ForeignLanguage = lang_erlang
            ),
            unimplemented_combination(TargetLanguage, ForeignLanguage)
        )
    ;
        TargetLanguage = lang_java,
        (
            ForeignLanguage = lang_java
        ;
            ( ForeignLanguage = lang_c
            ; ForeignLanguage = lang_csharp
            ; ForeignLanguage = lang_il
            ; ForeignLanguage = lang_erlang
            ),
            unimplemented_combination(TargetLanguage, ForeignLanguage)
        )
    ;
        TargetLanguage = lang_erlang,
        (
            ForeignLanguage = lang_erlang
        ;
            ( ForeignLanguage = lang_c
            ; ForeignLanguage = lang_csharp
            ; ForeignLanguage = lang_il
            ; ForeignLanguage = lang_java
            ),
            unimplemented_combination(TargetLanguage, ForeignLanguage)
        )
    ).

:- pred unimplemented_combination(foreign_language::in, foreign_language::in)
    is erroneous.

unimplemented_combination(Lang1, Lang2) :-
    sorry(this_file, "unimplemented: calling "
        ++ foreign_language_string(Lang2) ++ " foreign code from "
        ++ foreign_language_string(Lang1)).

    % XXX We haven't implemented these functions yet.
    % What is here is only a guide.
    %
:- func make_pred_name(foreign_language, sym_name) = string.

make_pred_name(Lang, SymName) =
    "mercury_" ++ simple_foreign_language_string(Lang) ++ "__" ++
        make_pred_name_rest(Lang, SymName).

:- func make_pred_name_rest(foreign_language, sym_name) = string.

make_pred_name_rest(lang_c, _SymName) = "some_c_name".
make_pred_name_rest(lang_csharp, _SymName) = "some_csharp_name".
make_pred_name_rest(lang_il, _SymName) = "some_il_name".
make_pred_name_rest(lang_java, _SymName) = "some_java_name".
make_pred_name_rest(lang_erlang, _SymName) = "some_erlang_name".

make_pragma_import(PredInfo, ProcInfo, C_Function, Context, PragmaImpl, VarSet,
        PragmaVars, ArgTypes, Arity, PredOrFunc, !ModuleInfo, !Specs) :-

    % Lookup some information we need from the pred_info and proc_info.
    PredOrFunc = pred_info_is_pred_or_func(PredInfo),
    pred_info_get_arg_types(PredInfo, ArgTypes),
    proc_info_get_argmodes(ProcInfo, Modes),
    CodeModel = proc_info_interface_code_model(ProcInfo),

    % Build a list of argument variables, together with their names, modes,
    % and types.
    varset.init(VarSet0),
    list.length(Modes, Arity),
    varset.new_vars(VarSet0, Arity, Vars, VarSet),
    create_pragma_vars(Vars, Modes, 0, PragmaVars),
    assoc_list.from_corresponding_lists(PragmaVars, ArgTypes,
        PragmaVarsAndTypes),

    % Construct parts of the C_code string for calling a C_function.  This C
    % code fragment invokes the specified C function with the appropriate
    % arguments from the list constructed above, passed in the appropriate
    % manner (by value, or by passing the address to simulate
    % pass-by-reference), and assigns the return value (if any) to the
    % appropriate place.  As this phase occurs before polymorphism, we don't
    % know about the type-infos yet.  polymorphism.m is responsible for adding
    % the type-info arguments to the list of variables.

    proc_info_get_declared_determinism(ProcInfo, MaybeDeclaredDetism),
    handle_return_value(Context, MaybeDeclaredDetism, CodeModel, PredOrFunc,
        PragmaVarsAndTypes, ArgPragmaVarsAndTypes, Return, !ModuleInfo,
        !Specs),
    assoc_list.keys(ArgPragmaVarsAndTypes, ArgPragmaVars),
    create_pragma_import_c_code(ArgPragmaVars, !.ModuleInfo, "", Variables),

    % Make an import implementation.
    PragmaImpl = fc_impl_import(C_Function, Return, Variables, yes(Context)).

    % handle_return_value(Contxt, DeclaredDetism, CodeModel, PredOrFunc, Args0,
    %   M, Args, C_Code0):
    %
    % Figures out what to do with the C function's return value, based on
    % Mercury procedure's code model, whether it is a predicate or a function,
    % and (if it is a function) the type and mode of the function result.
    % Constructs a C code fragment `C_Code0' which is a string of the form
    % "<Something> =" that assigns the return value to the appropriate place,
    % if there is a return value, or is an empty string, if there is no return
    % value. Returns in Args all of Args0 that must be passed as arguments
    % (i.e. all of them, or all of them except the return value).
    %
    % Causes an error message to be emitted if the code_model is not compatible
    % with the use of pragma import (ie. it is model_non).
    %
:- pred handle_return_value(prog_context::in, maybe(determinism)::in,
    code_model::in, pred_or_func::in,
    assoc_list(pragma_var, mer_type)::in,
    assoc_list(pragma_var, mer_type)::out,
    string::out, module_info::in, module_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

handle_return_value(Context, MaybeDeclaredDetism, CodeModel, PredOrFunc,
        !Args, C_Code0, !ModuleInfo, !Specs) :-
    (
        CodeModel = model_det,
        (
            PredOrFunc = pf_function,
            pred_args_to_func_args(!Args, RetArg),
            RetArg = pragma_var(_, RetArgName, RetMode, _) - RetType,
            mode_to_arg_mode(!.ModuleInfo, RetMode, RetType, RetArgMode),
            RetArgMode = top_out,
            \+ type_util.is_dummy_argument_type(!.ModuleInfo, RetType)
        ->
            C_Code0 = RetArgName ++ " = "
        ;
            C_Code0 = ""
        )
    ;
        CodeModel = model_semi,
        % We treat semidet functions the same as semidet predicates, which
        % means that for Mercury functions the Mercury return value becomes
        % the last argument, and the C return value is a bool that is used to
        % indicate success or failure.
        C_Code0 = "SUCCESS_INDICATOR = "
    ;
        CodeModel = model_non,
        (
            MaybeDeclaredDetism = yes(DeclaredDetism),
            DetismStr = determinism_to_string(DeclaredDetism)
        ;
            MaybeDeclaredDetism = no,
            DetismStr = "multi or nondet"
        ),
        Pieces = [words("Error: `pragma_import' declaration for"),
            words("a procedure that has a determinism of"),
            fixed(DetismStr), suffix("."), nl],
        Msg = simple_msg(Context, [always(Pieces)]),
        Spec = error_spec(severity_error, phase_parse_tree_to_hlds, [Msg]),
        !:Specs = [Spec | !.Specs],

        % This is just a dummy - it will never actually be used.
        C_Code0 = "\n#error ""cannot import nondet procedure""\n"
    ),
    list.filter(include_import_arg(!.ModuleInfo), !Args).

    % include_import_arg(M, Arg):
    %
    % Succeeds iff Arg should be included in the arguments of the C function.
    % Fails if `Arg' has a type such as `io.state' that is just a dummy
    % argument that should not be passed to C.
    %
:- pred include_import_arg(module_info::in, pair(pragma_var, mer_type)::in)
    is semidet.

include_import_arg(ModuleInfo, pragma_var(_Var, _Name, Mode, _Box) - Type) :-
    mode_to_arg_mode(ModuleInfo, Mode, Type, ArgMode),
    ArgMode \= top_unused,
    \+ type_util.is_dummy_argument_type(ModuleInfo, Type).

    % create_pragma_vars(Vars, Modes, ArgNum0, PragmaVars):
    %
    % Given list of vars and modes, and an initial argument number, allocate
    % names to all the variables, and construct a single list containing the
    % variables, names, and modes.
    %
:- pred create_pragma_vars(list(prog_var)::in, list(mer_mode)::in, int::in,
    list(pragma_var)::out) is det.

create_pragma_vars([], [], _Num, []).
create_pragma_vars([Var | Vars], [Mode | Modes], ArgNum0,
        [PragmaVar | PragmaVars]) :-
    % Figure out a name for the C variable which will hold this argument.
    ArgNum = ArgNum0 + 1,
    string.int_to_string(ArgNum, ArgNumString),
    string.append("Arg", ArgNumString, ArgName),
    PragmaVar = pragma_var(Var, ArgName, Mode, native_if_possible),
    create_pragma_vars(Vars, Modes, ArgNum, PragmaVars).
create_pragma_vars([_ | _], [], _, _) :-
    unexpected(this_file, "create_pragma_vars: length mis-match").
create_pragma_vars([], [_ | _], _, _) :-
    unexpected(this_file, "create_pragma_vars: length mis-match").

    % create_pragma_import_c_code(PragmaVars, M, !C_Code):
    %
    % This predicate creates the C code fragments for each argument in
    % PragmaVars, and appends them to C_Code0, returning C_Code.
    %
:- pred create_pragma_import_c_code(list(pragma_var)::in, module_info::in,
    string::in, string::out) is det.

create_pragma_import_c_code([], _ModuleInfo, !C_Code).
create_pragma_import_c_code([PragmaVar | PragmaVars], ModuleInfo, !C_Code) :-
    PragmaVar = pragma_var(_Var, ArgName, Mode, _BoxPolicy),

    % Construct the C code fragment for passing this argument, and append it
    % to !.C_Code. Note that C handles output arguments by passing the
    % variable's address, so if the mode is output, we need to put an `&'
    % before the variable name.

    ( mode_is_output(ModuleInfo, Mode) ->
        !:C_Code = !.C_Code ++ "&"
    ;
        true
    ),
    !:C_Code = !.C_Code ++ ArgName,
    (
        PragmaVars = [_ | _],
        !:C_Code = !.C_Code ++ ", "
    ;
        PragmaVars = []
    ),
    create_pragma_import_c_code(PragmaVars, ModuleInfo, !C_Code).

%-----------------------------------------------------------------------------%

have_foreign_type_for_backend(target_c, ForeignTypeBody,
        ( ForeignTypeBody ^ c = yes(_) -> yes ; no )).
have_foreign_type_for_backend(target_il, ForeignTypeBody,
        ( ForeignTypeBody ^ il = yes(_) -> yes ; no )).
have_foreign_type_for_backend(target_java, ForeignTypeBody,
        ( ForeignTypeBody ^ java = yes(_) -> yes ; no )).
have_foreign_type_for_backend(target_erlang, ForeignTypeBody,
        ( ForeignTypeBody ^ erlang = yes(_) -> yes ; no )).
have_foreign_type_for_backend(target_asm, ForeignTypeBody, Result) :-
    have_foreign_type_for_backend(target_c, ForeignTypeBody, Result).
have_foreign_type_for_backend(target_x86_64, ForeignTypeBody, Result) :-
    have_foreign_type_for_backend(target_c, ForeignTypeBody, Result).

:- type exported_type
    --->    exported_type_foreign(sym_name, list(foreign_type_assertion))
            % A type defined by a pragma foreign_type, and the assertions
            % on that foreign_type.

    ;       exported_type_mercury(mer_type).
            % Any other mercury type.

non_foreign_type(Type) = exported_type_mercury(Type).

to_exported_type(ModuleInfo, Type) = ExportType :-
    module_info_get_type_table(ModuleInfo, Types),
    (
        type_to_ctor_and_args(Type, TypeCtor, _),
        map.search(Types, TypeCtor, TypeDefn)
    ->
        hlds_data.get_type_defn_body(TypeDefn, Body),
        (
            Body = hlds_foreign_type(ForeignTypeBody),
            foreign_type_body_to_exported_type(ModuleInfo, ForeignTypeBody,
                ForeignTypeName, _, Assertions),
            ExportType = exported_type_foreign(ForeignTypeName, Assertions)
        ;
            ( Body = hlds_du_type(_, _, _, _, _, _, _)
            ; Body = hlds_eqv_type(_)
            ; Body = hlds_solver_type(_, _)
            ; Body = hlds_abstract_type(_)
            ),
            ExportType = exported_type_mercury(Type)
        )
    ;
        ExportType = exported_type_mercury(Type)
    ).

foreign_type_body_has_user_defined_eq_comp_pred(ModuleInfo, Body,
        UserEqComp) :-
    foreign_type_body_to_exported_type(ModuleInfo, Body, _,
        MaybeUserEqComp, _),
    MaybeUserEqComp = yes(UserEqComp).

foreign_type_body_to_exported_type(ModuleInfo, ForeignTypeBody, Name,
        MaybeUserEqComp, Assertions) :-
    ForeignTypeBody = foreign_type_body(MaybeIL, MaybeC, MaybeJava,
        MaybeErlang),
    module_info_get_globals(ModuleInfo, Globals),
    globals.get_target(Globals, Target),
    (
        Target = target_c,
        (
            MaybeC = yes(Data),
            Data = foreign_type_lang_data(c_type(NameStr), MaybeUserEqComp,
                Assertions),
            Name = unqualified(NameStr)
        ;
            MaybeC = no,
            unexpected(this_file, "to_exported_type: no C type")
        )
    ;
        Target = target_il,
        (
            MaybeIL = yes(Data),
            Data = foreign_type_lang_data(il_type(_, _, Name), MaybeUserEqComp,
                Assertions)
        ;
            MaybeIL = no,
            unexpected(this_file, "to_exported_type: no IL type")
        )
    ;
        Target = target_java,
        (
            MaybeJava = yes(Data),
            Data = foreign_type_lang_data(java_type(NameStr), MaybeUserEqComp,
                Assertions),
            Name = unqualified(NameStr)
        ;
            MaybeJava = no,
            unexpected(this_file, "to_exported_type: no Java type")
        )
    ;
        Target = target_erlang,
        (
            MaybeErlang = yes(Data),
            Data = foreign_type_lang_data(erlang_type, MaybeUserEqComp,
                Assertions),
            Name = unqualified("")
        ;
            MaybeErlang = no,
            unexpected(this_file, "to_exported_type: no Erlang type")
        )
    ;
        Target = target_asm,
        (
            MaybeC = yes(Data),
            Data = foreign_type_lang_data(c_type(NameStr), MaybeUserEqComp,
                Assertions),
            Name = unqualified(NameStr)
        ;
            MaybeC = no,
            unexpected(this_file, "to_exported_type: no C type")
        )
    ;
        Target = target_x86_64,
        (
            MaybeC = yes(Data),
            Data = foreign_type_lang_data(c_type(NameStr), MaybeUserEqComp,
                Assertions),
            Name = unqualified(NameStr)
        ;
            MaybeC = no,
            unexpected(this_file, "to_exported_type: no C type")
        )
    ).

is_foreign_type(exported_type_foreign(_, Assertions)) = yes(Assertions).
is_foreign_type(exported_type_mercury(_)) = no.

mercury_exported_type_to_string(ModuleInfo, Lang, Type) =
    exported_type_to_string(Lang, to_exported_type(ModuleInfo, Type)).

exported_type_to_string(Lang, ExportedType) = Result :-
    (
        ExportedType = exported_type_foreign(ForeignType, _),
        (
            Lang = lang_c,
            (
                ForeignType = unqualified(Result0),
                Result = Result0
            ;
                ForeignType = qualified(_, _),
                unexpected(this_file,
                    "exported_type_to_string: qualified C type")
            )
        ;
            ( Lang = lang_csharp
            ; Lang = lang_il
            ; Lang = lang_java
            ; Lang = lang_erlang
            ),
            Result = sym_name_to_string(ForeignType)
        )
    ;
        ExportedType = exported_type_mercury(Type),
        (
            Lang = lang_c,
            % With --high-level-code, the value we return here should agree
            % with what happens is generated (indirectly) through
            % mercury_type_to_mlds_type.
            %
            % XXX I don't think this is yet true in all cases. -zs
            %
            % It is possible that in some cases, the right type name may depend
            % on whether --high-level-code is set.
            (
                Type = builtin_type(BuiltinType),
                (
                    BuiltinType = builtin_type_int,
                    Result = "MR_Integer"
                ;
                    BuiltinType = builtin_type_float,
                    Result = "MR_Float"
                ;
                    BuiltinType = builtin_type_string,
                    Result = "MR_String"
                ;
                    BuiltinType = builtin_type_character,
                    Result = "MR_Char"
                )
            ;
                Type = tuple_type(_, _),
                Result = "MR_Tuple"
            ;
                % XXX Is MR_Word the right thing for any of these kinds of
                % types for high level code, with or without high level data?
                ( Type = defined_type(_, _, _)
                ; Type = higher_order_type(_, _, _, _)
                ; Type = apply_n_type(_, _, _)
                ),
                Result = "MR_Word"
            ;
                Type = type_variable(_, _),
                Result = "MR_Word"
            ;
                Type = kinded_type(_, _),
                unexpected(this_file,
                    "exported_type_to_string: kinded type")
            )
        ;
            Lang = lang_csharp,
            sorry(this_file, "exported_type_to_string for csharp")
        ;
            Lang = lang_il,
            sorry(this_file, "exported_type_to_string for il")
        ;
            Lang = lang_java,
            (
                Type = builtin_type(BuiltinType),
                (
                    BuiltinType = builtin_type_int,
                    Result = "int"
                ;
                    BuiltinType = builtin_type_float,
                    Result = "double"
                ;
                    BuiltinType = builtin_type_string,
                    Result = "java.lang.String"
                ;
                    BuiltinType = builtin_type_character,
                    Result = "char"
                )
            ;
                ( Type = tuple_type(_, _)
                ; Type = defined_type(_, _, _)
                ; Type = higher_order_type(_, _, _, _)
                ; Type = apply_n_type(_, _, _)
                ; Type = type_variable(_, _)
                ; Type = kinded_type(_, _)
                ),
                Result = "java.lang.Object"
            )
        ;
            Lang = lang_erlang,
            sorry(this_file, "exported_type_to_string for erlang")
        )
    ).

%-----------------------------------------------------------------------------%

decl_guard(ModuleName) = UppercaseModuleName ++ "_DECL_GUARD" :-
    MangledModuleName = sym_name_mangle(ModuleName),
    string.to_upper(MangledModuleName, UppercaseModuleName).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "foreign.m".

%-----------------------------------------------------------------------------%
:- end_module foreign.
%-----------------------------------------------------------------------------%
