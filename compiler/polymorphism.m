%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1995-2008 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: polymorphism.m.
% Main author: fjh.
%
% This module is a pass over the HLDS.
% It does a syntactic transformation to implement polymorphism, including
% typeclasses, by passing extra `type_info' and `typeclass_info' arguments.
% These arguments are structures that contain, amongst other things,
% higher order predicate terms for the polymorphic procedures or methods.
%
% See notes/type_class_transformation.html for a description of the
% transformation and data structures used to implement type classes.
%
% XXX The way the code in this module handles existential type classes
% and type class constraints is a bit ad hoc, in general; there are
% definitely parts of this code (marked with XXXs below) that could
% do with a rewrite to make it more consistent and hence more maintainable.
%
%-----------------------------------------------------------------------------%
%
% Transformation of polymorphic code:
%
% Every polymorphic predicate is transformed so that it takes one additional
% argument for every type variable in the predicate's type declaration.
% The argument gives information about the type, including higher order
% predicate variables for each of the builtin polymorphic operations
% (currently unify/2, compare/3).
%
%-----------------------------------------------------------------------------%
%
% Representation of type information:
%
% IMPORTANT: ANY CHANGES TO THE DOCUMENTATION HERE MUST BE REFLECTED BY
% SIMILAR CHANGES TO THE #defines IN "runtime/mercury_type_info.h" AND
% TO THE TYPE SPECIALIZATION CODE IN "compiler/higher_order.m".
%
% Type information is represented using one or two cells. The cell which
% is always present is the type_ctor_info structure, whose structure is
% defined in runtime/mercury_type_info.h. The other cell is the type_info
% structure, laid out like this:
%
%   word 0      <pointer to the type_ctor_info structure>
%   word 1+     <the type_infos for the type params, at least one>
%
%   (but see note below for how variable arity types differ)
%
%-----------------------------------------------------------------------------%
%
% Optimization of common case (zero arity types):
%
% The type_info structure itself is redundant if the type has no type
% parameters (i.e. its arity is zero). Therefore if the arity is zero,
% we pass the address of the type_ctor_info structure directly, instead of
% wrapping it up in another cell. The runtime system will look at the first
% field of the cell it is passed. If this field is zero, the cell is a
% type_ctor_info structure for an arity zero type. If this field is not zero,
% the cell is a new type_info structure, with the first field being the
% pointer to the type_ctor_info structure.
%
%-----------------------------------------------------------------------------%
%
% Variable arity types:
%
% There is a slight variation on this for variable-arity type constructors, of
% there are exactly three: pred, func and tuple. Typeinfos of these types
% always have a pointer to the pred/0, func/0 or tuple/0 type_ctor_info,
% regardless of their true arity, so we store the real arity in the type_info
% as well.
%
%   word 0      <pointer to the arity 0 type_ctor_info structure>
%   word 1      <arity of predicate>
%   word 2+     <the type_infos for the type params, if any>
%
%-----------------------------------------------------------------------------%
%
% Sharing type_ctor_info structures:
%
% For compilation models that can put code addresses in static ground terms,
% we can arrange to create one copy of the type_ctor_info structure statically,
% avoiding the need to create other copies at runtime. For compilation models
% that cannot put code addresses in static ground terms, there are a couple
% of things we could do:
%
%   1. allocate all cells at runtime.
%   2. use a shared static type_ctor_info, but initialize its code
%      addresses during startup (that is, during the module
%      initialization code).
%
% We use option 2.
%
%-----------------------------------------------------------------------------%
%
% Example of transformation:
%
% Take the following code as an example, ignoring the requirement for
% superhomogeneous form for clarity:
%
%   :- pred p(T1).
%   :- pred q(T2).
%   :- pred r(T3).
%
%   p(X) :- q([X]), r(0).
%
% We add an extra argument for each type variable:
%
%   :- pred p(type_info(T1), T1).
%   :- pred q(type_info(T2), T2).
%   :- pred r(type_info(T3), T3).
%
% We transform the body of p to this:
%
%   p(TypeInfoT1, X) :-
%       TypeCtorInfoT2 = type_ctor_info(list/1),
%       TypeInfoT2 = type_info(TypeCtorInfoT2, TypeInfoT1),
%       q(TypeInfoT2, [X]),
%       TypeInfoT3 = type_ctor_info(int/0),
%       r(TypeInfoT3, 0).
%
% Note that type_ctor_infos are actually generated as references to a
% single shared type_ctor_info.
%
%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%
%
% Transformation of code using existentially quantified types:
%
% The transformation for existential types is similar to the transformation
% for universally quantified types, except that the type_infos and
% type_class_infos have mode `out' rather than mode `in'.
%
% The argument passing convention is that the new parameters
% introduced by this pass are placed in the following order:
%
%   First the type_infos for unconstrained universally quantified type
%   variables, in the order that the type variables first appear in the
%   argument types;
%
%   then the type_infos for unconstrained existentially quantified type
%   variables, in the order that the type variables first appear in the
%   argument types;
%
%   then the typeclass_infos for universally quantified constraints,
%   in the order that the constraints appear in the class context;
%
%   then the typeclass_infos for existentially quantified constraints,
%   in the order that the constraints appear in the class context;
%
%   and finally the original arguments of the predicate.
%
% Bear in mind that for the purposes of this (and most other) calculations,
% the return parameter of a function counts as the _last_ argument.
%
% The convention for class method implementations is slightly different
% to match the order that the type_infos and typeclass_infos are passed
% in by do_call_class_method (in runtime/mercury_ho_call.c):
%
%   First the type_infos for the unconstrained type variables in the
%   instance declaration, in the order that the type variables first appear
%   in the instance arguments;
%
%   then the typeclass_infos for the class constraints on the instance
%   declaration, in the order that the constraints appear in the declaration;
%
%   then the remainder of the arguments as above.
%
%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- module check_hlds.polymorphism.
:- interface.

:- import_module hlds.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.
:- import_module hlds.hlds_rtti.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.
:- import_module parse_tree.prog_data.

:- import_module io.
:- import_module list.
:- import_module maybe.
:- import_module term.

%-----------------------------------------------------------------------------%

    % Run the polymorphism pass over the whole HLDS.
    %
:- pred polymorphism_process_module(module_info::in, module_info::out,
    io::di, io::uo) is det.

    % Run the polymorphism pass over a single pred. This is used to transform
    % clauses introduced by unify_proc.m for complicated unification predicates
    % for types for which unification predicates are generated lazily.
    %
    % This predicate should be used with caution. polymorphism.m expects that
    % the argument types of called predicates have not been transformed yet.
    % This predicate will not work correctly after the original pass of
    % polymorphism has been run if the predicate to be processed calls
    % any polymorphic predicates which require type_infos or typeclass_infos
    % to be added to the argument list.
    %
:- pred polymorphism_process_generated_pred(pred_id::in,
    module_info::in, module_info::out) is det.

    % Add the type_info variables for a complicated unification to
    % the appropriate fields in the unification and the goal_info.
    %
:- pred unification_typeinfos_rtti_varmaps(mer_type::in, rtti_varmaps::in,
    unification::in, unification::out, hlds_goal_info::in, hlds_goal_info::out)
    is det.

    % Add the type_info variables for a new call goal.  This predicate assumes
    % that process_module has already been run so the called pred
    % has already been processed.
    %
    % XXX This predicate does not yet handle calls whose arguments include
    % existentially quantified types or type class constraints.
    %
:- pred polymorphism_process_new_call(pred_info::in, proc_info::in,
    pred_id::in, proc_id::in, list(prog_var)::in, builtin_state::in,
    maybe(call_unify_context)::in, sym_name::in, hlds_goal_info::in,
    hlds_goal::out, poly_info::in, poly_info::out) is det.

    % Given a list of types, create a list of variables to hold the type_info
    % for those types, and create a list of goals to initialize those type_info
    % variables to the appropriate type_info structures for the types.
    % Update the varset and vartypes accordingly.
    %
:- pred polymorphism_make_type_info_vars(list(mer_type)::in, term.context::in,
    list(prog_var)::out, list(hlds_goal)::out, poly_info::in, poly_info::out)
    is det.

    % Likewise, but for a single type.
    %
:- pred polymorphism_make_type_info_var(mer_type::in, term.context::in,
    prog_var::out, list(hlds_goal)::out, poly_info::in, poly_info::out) is det.

    % gen_extract_type_info(TypeVar, Kind, TypeClassInfoVar,
    %   Index, ModuleInfo, Goals, TypeInfoVar, ...):
    %
    % Generate code to extract a type_info variable from a given slot of a
    % typeclass_info variable, by calling type_info_from_typeclass_info from
    % private_builtin. TypeVar is the type variable to which this type_info
    % variable corresponds. Kind is the kind of the type variable.
    % TypeClassInfoVar is the variable holding the type_class_info.
    % Index specifies which slot it is. The procedure returns TypeInfoVar,
    % which is a fresh variable holding the type_info, and Goals, which is
    % the code generated to initialize TypeInfoVar.
    %
:- pred gen_extract_type_info(tvar::in, kind::in, prog_var::in,
    int::in, module_info::in, list(hlds_goal)::out, prog_var::out,
    prog_varset::in, prog_varset::out, vartypes::in, vartypes::out,
    rtti_varmaps::in, rtti_varmaps::out) is det.

:- type poly_info.

    % Extract some fields from a pred_info and proc_info and use them to
    % create a poly_info, for use by the polymorphism transformation.
    %
:- pred create_poly_info(module_info::in, pred_info::in,
    proc_info::in, poly_info::out) is det.

    % Update the fields in a pred_info and proc_info with
    % the values in a poly_info.
    %
:- pred poly_info_extract(poly_info::in, pred_info::in, pred_info::out,
    proc_info::in, proc_info::out, module_info::out) is det.

    % Build the type describing the typeclass_info for the
    % given prog_constraint.
    %
:- pred build_typeclass_info_type(prog_constraint::in, mer_type::out) is det.

    % Check if a type is the `typeclass_info' type introduced by this pass.
    %
:- pred type_is_typeclass_info(mer_type::in) is semidet.

    % Check if a type is either the `type_info' type or the
    % `type_ctor_info' type introduced by this pass.
    %
:- pred type_is_type_info_or_ctor_type(mer_type::in) is semidet.

    % Construct the type of the type_info for the given type.
    %
:- pred build_type_info_type(mer_type::in, mer_type::out) is det.

    % Succeed if the predicate is one of the predicates defined in
    % library/private_builtin.m to extract type_infos or typeclass_infos
    % from typeclass_infos.
    %
:- pred is_typeclass_info_manipulator(module_info::in, pred_id::in,
    typeclass_info_manipulator::out) is semidet.

:- type typeclass_info_manipulator
    --->    type_info_from_typeclass_info
    ;       superclass_from_typeclass_info
    ;       instance_constraint_from_typeclass_info.

    % Look up the pred_id and proc_id for a type specific
    % unification/comparison/index/initialise predicate.
    %
:- pred get_special_proc(mer_type::in, special_pred_id::in,
    module_info::in, sym_name::out, pred_id::out, proc_id::out) is semidet.
:- pred get_special_proc_det(mer_type::in, special_pred_id::in,
    module_info::in, sym_name::out, pred_id::out, proc_id::out) is det.

    % Convert a higher order pred term to a lambda goal.
    %
:- pred convert_pred_to_lambda_goal(purity::in, lambda_eval_method::in,
    prog_var::in, pred_id::in, proc_id::in, list(prog_var)::in,
    list(mer_type)::in, unify_context::in, hlds_goal_info::in, context::in,
    module_info::in, unify_rhs::out, prog_varset::in, prog_varset::out,
    vartypes::in, vartypes::out) is det.

    % fix_undetermined_mode_lambda_goal(ProcId, Functor0, Functor, ModuleInfo)
    %
    % This is called by mode checking when it figures out which mode that a
    % lambda goal converted from a higher order pred term should call.
    % Functor0 must have been produced by `convert_pred_to_lambda_goal'.
    %
:- pred fix_undetermined_mode_lambda_goal(proc_id::in,
    unify_rhs::in(rhs_lambda_goal), unify_rhs::out(rhs_lambda_goal),
    module_info::in) is det.

    % init_type_info_var(Type, ArgVars, TypeInfoVar, TypeInfoGoal,
    %   !VarSet, !VarTypes) :-
    %
    % Create the unification the constructs the second cell of a type_info
    % for Type. ArgVars should contain the arguments of this unification.
    %
    % This unification WILL lead to the creation of cells on the heap
    % at runtime.
    %
    % The first variable in ArgVars should be bound to the type_ctor_info
    % for Type's principal type constructor. If that type constructor is
    % variable arity, the next variable in ArgVars should be bound to an
    % integer giving Type's actual arity. The remaining variables in
    % ArgVars should be bound to the type_infos or type_ctor_infos giving
    % Type's argument types.
    %
:- pred init_type_info_var(mer_type::in, list(prog_var)::in,
    maybe(prog_var)::in, prog_var::out, hlds_goal::out,
    prog_varset::in, prog_varset::out, vartypes::in, vartypes::out,
    rtti_varmaps::in, rtti_varmaps::out) is det.

    % init_const_type_ctor_info_var(Type, TypeCtor,
    %   TypeCtorInfoVar, TypeCtorInfoGoal, ModuleInfo, !VarSet, !VarTypes):
    %
    % Create the unification (returned as TypeCtorInfoGoal) that binds a
    % new variable (returned as TypeCtorInfoVar) to the type_ctor_info
    % representing TypeCtor.
    %
    % This unification WILL NOT lead to the creation of a cell on the
    % heap at runtime; it will cause TypeCtorInfoVar to refer to the
    % statically allocated type_ctor_info cell for the type, allocated
    % in the module that defines the type.
    %
    % We take Type as input for historical reasons: we record Type as
    % the type whose type constructor TypeCtor is, in the type of
    % TypeCtorInfoVar.
    %
:- pred init_const_type_ctor_info_var(mer_type::in, type_ctor::in,
    prog_var::out, hlds_goal::out, module_info::in,
    prog_varset::in, prog_varset::out, vartypes::in, vartypes::out,
    rtti_varmaps::in, rtti_varmaps::out) is det.

:- type type_info_kind
    --->    type_info
    ;       type_ctor_info.

:- pred new_type_info_var_raw(mer_type::in, type_info_kind::in,
    prog_var::out, prog_varset::in, prog_varset::out,
    vartypes::in, vartypes::out, rtti_varmaps::in, rtti_varmaps::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.clause_to_proc.
:- import_module check_hlds.mode_util.
:- import_module check_hlds.type_util.
:- import_module hlds.goal_util.
:- import_module hlds.hlds_args.
:- import_module hlds.hlds_clauses.
:- import_module hlds.hlds_code_util.
:- import_module hlds.hlds_data.
:- import_module hlds.instmap.
:- import_module hlds.passes_aux.
:- import_module hlds.pred_table.
:- import_module hlds.quantification.
:- import_module hlds.special_pred.
:- import_module libs.
:- import_module libs.compiler_util.
:- import_module libs.compiler_util.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.program_representation.
:- import_module parse_tree.prog_mode.
:- import_module parse_tree.prog_type.
:- import_module parse_tree.prog_type_subst.
:- import_module parse_tree.prog_util.

:- import_module assoc_list.
:- import_module bool.
:- import_module cord.
:- import_module int.
:- import_module map.
:- import_module pair.
:- import_module set.
:- import_module solutions.
:- import_module string.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%
%
% This whole section just traverses the module structure.
% We do two passes, the first to fix up the clauses_info and proc_infos
% (and in fact everything except the pred_info argtypes), the second to fix up
% the pred_info argtypes. The reason we need two passes is that the first pass
% looks at the argtypes of the called predicates, and so we need to make
% sure we don't muck them up before we've finished the first pass.

polymorphism_process_module(!ModuleInfo, !IO) :-
    module_info_preds(!.ModuleInfo, Preds0),
    map.keys(Preds0, PredIds0),
    list.foldl2(maybe_polymorphism_process_pred, PredIds0, !ModuleInfo, !IO),
    module_info_preds(!.ModuleInfo, Preds1),
    map.keys(Preds1, PredIds1),
    list.foldl(fixup_pred_polymorphism, PredIds1, !ModuleInfo),
    expand_class_method_bodies(!ModuleInfo).

:- pred maybe_polymorphism_process_pred(pred_id::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

maybe_polymorphism_process_pred(PredId, !ModuleInfo, !IO) :-
    module_info_pred_info(!.ModuleInfo, PredId, PredInfo),
    (
        PredModule = pred_info_module(PredInfo),
        PredName = pred_info_name(PredInfo),
        PredArity = pred_info_orig_arity(PredInfo),
        no_type_info_builtin(PredModule, PredName, PredArity)
    ->
        % Just copy the clauses to the proc_infos.
        copy_module_clauses_to_procs([PredId], !ModuleInfo)
    ;
        polymorphism_process_pred_msg(PredId, !ModuleInfo, !IO)
    ).

%---------------------------------------------------------------------------%

:- pred fixup_pred_polymorphism(pred_id::in,
    module_info::in, module_info::out) is det.

fixup_pred_polymorphism(PredId, !ModuleInfo) :-
    % Recompute the arg types by finding the headvars and the var->type mapping
    % (from the clauses_info) and applying the type mapping to the extra
    % headvars to get the new arg types. Note that we are careful to only apply
    % the mapping to the extra head vars, not to the originals, because
    % otherwise we would stuff up the arg types for unification predicates for
    % equivalence types.

    module_info_preds(!.ModuleInfo, PredTable0),
    map.lookup(PredTable0, PredId, PredInfo0),
    pred_info_get_clauses_info(PredInfo0, ClausesInfo0),
    clauses_info_get_vartypes(ClausesInfo0, VarTypes0),
    clauses_info_get_headvars(ClausesInfo0, HeadVars),

    pred_info_get_arg_types(PredInfo0, TypeVarSet, ExistQVars, ArgTypes0),
    proc_arg_vector_partition_poly_args(HeadVars, ExtraHeadVarList,
        OldHeadVarList),

    map.apply_to_list(ExtraHeadVarList, VarTypes0, ExtraArgTypes),
    list.append(ExtraArgTypes, ArgTypes0, ArgTypes),
    pred_info_set_arg_types(TypeVarSet, ExistQVars, ArgTypes,
        PredInfo0, PredInfo1),

    % If the clauses bind some existentially quantified type variables,
    % introduce exists_casts goals for affected head variables, including
    % the new type_info and typeclass_info arguments. Make sure the types
    % of the internal versions of type_infos for those type variables in the
    % variable types map are as specific as possible.

    (
        ExistQVars = [_ | _],
        % This can fail for unification procedures of equivalence types.
        map.apply_to_list(OldHeadVarList, VarTypes0, OldHeadVarTypes),
        type_list_subsumes(ArgTypes0, OldHeadVarTypes, Subn),
        \+ map.is_empty(Subn)
    ->
        pred_info_set_existq_tvar_binding(Subn, PredInfo1, PredInfo2),
        polymorphism_introduce_exists_casts_pred(!.ModuleInfo, PredInfo2,
            PredInfo)
    ;
        PredInfo = PredInfo1
    ),

    map.det_update(PredTable0, PredId, PredInfo, PredTable),
    module_info_set_preds(PredTable, !ModuleInfo).

:- pred polymorphism_introduce_exists_casts_pred(module_info::in,
    pred_info::in, pred_info::out) is det.

polymorphism_introduce_exists_casts_pred(ModuleInfo, !PredInfo) :-
    pred_info_get_procedures(!.PredInfo, Procs0),
    map.map_values(
        (pred(_::in, !.ProcInfo::in, !:ProcInfo::out) is det :-
            % Add the extra goals to each procedure.
            introduce_exists_casts_proc(ModuleInfo, !.PredInfo, !ProcInfo)
        ), Procs0, Procs),
    pred_info_set_procedures(Procs, !PredInfo).

%---------------------------------------------------------------------------%

:- pred polymorphism_process_pred_msg(pred_id::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

polymorphism_process_pred_msg(PredId, !ModuleInfo, !IO) :-
    write_pred_progress_message("% Transforming polymorphism for ",
        PredId, !.ModuleInfo, !IO),
    polymorphism_process_pred(PredId, !ModuleInfo).

polymorphism_process_generated_pred(PredId, !ModuleInfo) :-
    polymorphism_process_pred(PredId, !ModuleInfo),
    fixup_pred_polymorphism(PredId, !ModuleInfo).

:- pred polymorphism_process_pred(pred_id::in,
    module_info::in, module_info::out) is det.

polymorphism_process_pred(PredId, !ModuleInfo) :-
    module_info_pred_info(!.ModuleInfo, PredId, PredInfo0),

    % Run the polymorphism pass over the clauses_info, updating the headvars,
    % goals, varsets, types, etc., and computing some information in the
    % poly_info.

    pred_info_get_clauses_info(PredInfo0, ClausesInfo0),
    polymorphism_process_clause_info(PredInfo0, !.ModuleInfo,
        ClausesInfo0, ClausesInfo, Info, ExtraArgModes),
    poly_info_get_module_info(Info, !:ModuleInfo),
    poly_info_get_typevarset(Info, TypeVarSet),
    pred_info_set_typevarset(TypeVarSet, PredInfo0, PredInfo1),
    pred_info_set_clauses_info(ClausesInfo, PredInfo1, PredInfo2),

    % Do a pass over the proc_infos, copying the relevant information
    % from the clauses_info and the poly_info, and updating all the argmodes
    % with modes for the extra arguments.

    ProcIds = pred_info_procids(PredInfo2),
    pred_info_get_procedures(PredInfo2, Procs0),
    list.foldl(polymorphism_process_proc_in_table(PredInfo2, ClausesInfo,
        ExtraArgModes), ProcIds, Procs0, Procs),
    pred_info_set_procedures(Procs, PredInfo2, PredInfo),

    module_info_set_pred_info(PredId, PredInfo, !ModuleInfo).

:- pred polymorphism_process_clause_info(pred_info::in, module_info::in,
    clauses_info::in, clauses_info::out, poly_info::out,
    poly_arg_vector(mer_mode)::out) is det.

polymorphism_process_clause_info(PredInfo0, ModuleInfo0, !ClausesInfo, !:Info,
        ExtraArgModes) :-
    init_poly_info(ModuleInfo0, PredInfo0, !.ClausesInfo, !:Info),
    clauses_info_get_headvars(!.ClausesInfo, HeadVars0),

    setup_headvars(PredInfo0, HeadVars0, HeadVars,
        ExtraArgModes, UnconstrainedTVars,
        ExtraTypeInfoHeadVars, ExistTypeClassInfoHeadVars, !Info),

    clauses_info_clauses_only(!.ClausesInfo, Clauses0),
    list.map_foldl(
        polymorphism_process_clause(PredInfo0, HeadVars0, HeadVars,
            UnconstrainedTVars, ExtraTypeInfoHeadVars,
            ExistTypeClassInfoHeadVars),
        Clauses0, Clauses, !Info),

    % Set the new values of the fields in clauses_info.
    poly_info_get_varset(!.Info, VarSet),
    poly_info_get_var_types(!.Info, VarTypes),
    poly_info_get_rtti_varmaps(!.Info, RttiVarMaps),
    clauses_info_get_explicit_vartypes(!.ClausesInfo, ExplicitVarTypes),
    set_clause_list(Clauses, ClausesRep),
    map.init(TVarNameMap), % This is only used while adding the clauses.
    !:ClausesInfo = clauses_info(VarSet, ExplicitVarTypes, TVarNameMap,
        VarTypes, HeadVars, ClausesRep, RttiVarMaps,
        !.ClausesInfo ^ have_foreign_clauses).

:- pred polymorphism_process_clause(pred_info::in,
    proc_arg_vector(prog_var)::in, proc_arg_vector(prog_var)::in,
    list(tvar)::in, list(prog_var)::in, list(prog_var)::in,
    clause::in, clause::out, poly_info::in, poly_info::out) is det.

polymorphism_process_clause(PredInfo0, OldHeadVars, NewHeadVars,
        UnconstrainedTVars, ExtraTypeInfoHeadVars,
        ExistTypeClassInfoHeadVars, !Clause, !Info) :-
    ( pred_info_is_imported(PredInfo0) ->
        true
    ;
        Goal0 = !.Clause ^ clause_body,
        % Process any polymorphic calls inside the goal.
        polymorphism_process_goal(Goal0, Goal1, !Info),

        % Generate code to construct the typeclass_infos and type_infos
        % for existentially quantified type vars.
        produce_existq_tvars(PredInfo0, OldHeadVars,
            UnconstrainedTVars, ExtraTypeInfoHeadVars,
            ExistTypeClassInfoHeadVars, Goal1, Goal2, !Info),

        pred_info_get_exist_quant_tvars(PredInfo0, ExistQVars),
        fixup_quantification(NewHeadVars, ExistQVars, Goal2, Goal, !Info),
        !:Clause = !.Clause ^ clause_body := Goal
    ).

:- pred polymorphism_process_proc_in_table(pred_info::in, clauses_info::in,
    poly_arg_vector(mer_mode)::in, proc_id::in,
    proc_table::in, proc_table::out) is det.

polymorphism_process_proc_in_table(PredInfo, ClausesInfo, ExtraArgModes,
        ProcId, !ProcTable) :-
    map.lookup(!.ProcTable, ProcId, ProcInfo0),
    polymorphism_process_proc(PredInfo, ClausesInfo, ExtraArgModes, ProcId,
        ProcInfo0, ProcInfo),
    map.det_update(!.ProcTable, ProcId, ProcInfo, !:ProcTable).

:- pred polymorphism_process_proc(pred_info::in, clauses_info::in,
    poly_arg_vector(mer_mode)::in, proc_id::in, proc_info::in, proc_info::out)
    is det.

polymorphism_process_proc(PredInfo, ClausesInfo, ExtraArgModes, ProcId,
        !ProcInfo) :-
    % Copy all the information from the clauses_info into the proc_info.
    (
        (
            pred_info_is_imported(PredInfo)
        ;
            pred_info_is_pseudo_imported(PredInfo),
            hlds_pred.in_in_unification_proc_id(ProcId)
        )
    ->
        % We need to set these fields in the proc_info here, because some parts
        % of the compiler (e.g. unused_args.m) depend on these fields being
        % valid even for imported procedures.

        % XXX ARGVEC - when the proc_info uses the proc_arg_vector just
        %     pass the headvar vector directly to the proc_info.
        clauses_info_get_headvars(ClausesInfo, HeadVars),
        HeadVarList = proc_arg_vector_to_list(HeadVars),
        clauses_info_get_rtti_varmaps(ClausesInfo, RttiVarMaps),
        clauses_info_get_varset(ClausesInfo, VarSet),
        clauses_info_get_vartypes(ClausesInfo, VarTypes),
        proc_info_set_headvars(HeadVarList, !ProcInfo),
        proc_info_set_rtti_varmaps(RttiVarMaps, !ProcInfo),
        proc_info_set_varset(VarSet, !ProcInfo),
        proc_info_set_vartypes(VarTypes, !ProcInfo)
    ;
        copy_clauses_to_proc(ProcId, ClausesInfo, !ProcInfo)
    ),

    % Add the ExtraArgModes to the proc_info argmodes.
    % XXX ARGVEC - revisit this when the proc_info uses proc_arg_vectors.
    proc_info_get_argmodes(!.ProcInfo, ArgModes1),
    ExtraArgModesList = poly_arg_vector_to_list(ExtraArgModes),
    list.append(ExtraArgModesList, ArgModes1, ArgModes),
    proc_info_set_argmodes(ArgModes, !ProcInfo).

    % XXX document me
    %
    % XXX the following code ought to be rewritten to handle
    % existential/universal type_infos and type_class_infos
    % in a more consistent manner.
    %
:- pred setup_headvars(pred_info::in, proc_arg_vector(prog_var)::in,
    proc_arg_vector(prog_var)::out, poly_arg_vector(mer_mode)::out,
    list(tvar)::out, list(prog_var)::out, list(prog_var)::out,
    poly_info::in, poly_info::out) is det.

setup_headvars(PredInfo, !HeadVars, ExtraArgModes,
        UnconstrainedTVars, ExtraHeadTypeInfoVars,
        ExistHeadTypeClassInfoVars, !Info) :-
    pred_info_get_origin(PredInfo, Origin),
    ExtraArgModes0 = poly_arg_vector_init : poly_arg_vector(mer_mode),
    (
        Origin = origin_instance_method(_, InstanceMethodConstraints),
        setup_headvars_instance_method(PredInfo,
            InstanceMethodConstraints, !HeadVars,
            UnconstrainedTVars, ExtraHeadTypeInfoVars,
            ExistHeadTypeClassInfoVars,
            ExtraArgModes0, ExtraArgModes, !Info)
    ;
        ( Origin = origin_special_pred(_)
        ; Origin = origin_transformed(_, _, _)
        ; Origin = origin_created(_)
        ; Origin = origin_assertion(_, _)
        ; Origin = origin_lambda(_, _, _)
        ; Origin = origin_user(_)
        ),
        pred_info_get_class_context(PredInfo, ClassContext),
        InstanceTVars = [],
        InstanceUnconstrainedTVars = [],
        InstanceUnconstrainedTypeInfoVars = [],
        setup_headvars_2(PredInfo, ClassContext, InstanceTVars,
            InstanceUnconstrainedTVars, InstanceUnconstrainedTypeInfoVars,
            !HeadVars, UnconstrainedTVars,
            ExtraHeadTypeInfoVars, ExistHeadTypeClassInfoVars,
            ExtraArgModes0, ExtraArgModes, !Info)
    ).

    % For class method implementations, do_call_class_method takes the
    % type_infos and typeclass_infos from the typeclass_info and pastes them
    % onto the front of the argument list. We need to match that order here.
    %
:- pred setup_headvars_instance_method(pred_info::in,
    instance_method_constraints::in,
    proc_arg_vector(prog_var)::in, proc_arg_vector(prog_var)::out,
    list(tvar)::out, list(prog_var)::out, list(prog_var)::out,
    poly_arg_vector(mer_mode)::in, poly_arg_vector(mer_mode)::out,
    poly_info::in, poly_info::out) is det.

setup_headvars_instance_method(PredInfo,
        InstanceMethodConstraints, !HeadVars,
        UnconstrainedTVars, ExtraHeadTypeInfoVars,
        ExistHeadTypeClassInfoVars, !ExtraArgModes, !Info) :-

    InstanceMethodConstraints = instance_method_constraints(_,
        InstanceTypes, InstanceConstraints, ClassContext),

    type_vars_list(InstanceTypes, InstanceTVars),
    get_unconstrained_tvars(InstanceTVars, InstanceConstraints,
        UnconstrainedInstanceTVars),
    pred_info_get_arg_types(PredInfo, ArgTypeVarSet, _, _),
    make_head_vars(UnconstrainedInstanceTVars,
        ArgTypeVarSet, UnconstrainedInstanceTypeInfoVars, !Info),
    make_typeclass_info_head_vars(do_record_type_info_locns,
        InstanceConstraints, InstanceHeadTypeClassInfoVars, !Info),

    proc_arg_vector_set_instance_type_infos(UnconstrainedInstanceTypeInfoVars,
        !HeadVars),
    proc_arg_vector_set_instance_typeclass_infos(InstanceHeadTypeClassInfoVars,
         !HeadVars),

    poly_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
    list.foldl(rtti_reuse_typeclass_info_var,
        InstanceHeadTypeClassInfoVars, RttiVarMaps0, RttiVarMaps),
    poly_info_set_rtti_varmaps(RttiVarMaps, !Info),

    in_mode(InMode),
    list.duplicate(list.length(UnconstrainedInstanceTypeInfoVars),
        InMode, UnconstrainedInstanceTypeInfoModes),
    list.duplicate(list.length(InstanceHeadTypeClassInfoVars),
        InMode, InstanceHeadTypeClassInfoModes),
    poly_arg_vector_set_instance_type_infos(
        UnconstrainedInstanceTypeInfoModes, !ExtraArgModes),
    poly_arg_vector_set_instance_typeclass_infos(
        InstanceHeadTypeClassInfoModes, !ExtraArgModes),

    setup_headvars_2(PredInfo, ClassContext,
        InstanceTVars,
        UnconstrainedInstanceTVars, UnconstrainedInstanceTypeInfoVars,
        !HeadVars,
        UnconstrainedTVars, ExtraHeadTypeInfoVars,
        ExistHeadTypeClassInfoVars, !ExtraArgModes, !Info).

:- pred setup_headvars_2(pred_info::in, prog_constraints::in,
    list(tvar)::in, list(tvar)::in, list(prog_var)::in,
    proc_arg_vector(prog_var)::in, proc_arg_vector(prog_var)::out,
    list(tvar)::out, list(prog_var)::out, list(prog_var)::out,
    poly_arg_vector(mer_mode)::in, poly_arg_vector(mer_mode)::out,
    poly_info::in, poly_info::out) is det.

setup_headvars_2(PredInfo, ClassContext,
        InstanceTVars, UnconstrainedInstanceTVars,
        UnconstrainedInstanceTypeInfoVars, HeadVars0,
        HeadVars, AllUnconstrainedTVars,
        AllExtraHeadTypeInfoVars, ExistHeadTypeClassInfoVars,
        !ExtraArgModes, !Info) :-

    % Grab the appropriate fields from the pred_info.
    pred_info_get_arg_types(PredInfo, ArgTypeVarSet, ExistQVars, ArgTypes),

    % Insert extra head variables to hold the address of the type_infos
    % and typeclass_infos.  We insert one variable for each unconstrained
    % type variable (for the type_info) and one variable for each
    % constraint (for the typeclass_info).
    %
    % The order of these variables is important, and must match the order
    % specified at the top of this file.

    % Make a fresh variable for each class constraint, returning a list of
    % variables that appear in the constraints, along with the location of
    % the type infos for them.  For the existential constraints, we want
    % the rtti_varmaps to contain the internal view of the types (that is,
    % with type variables bound) so we may need to look up the actual
    % constraints in the constraint map.  For the universal constraints there
    % is no distinction between the internal views and the external view, so
    % we just use the constraints from the class context.
    ClassContext = constraints(UnivConstraints, ExistConstraints),
    prog_type.constraint_list_get_tvars(UnivConstraints,
        UnivConstrainedTVars),
    prog_type.constraint_list_get_tvars(ExistConstraints,
        ExistConstrainedTVars),
    poly_info_get_constraint_map(!.Info, ConstraintMap),
    get_improved_exists_head_constraints(ConstraintMap, ExistConstraints,
        ActualExistConstraints),
    (
        pred_info_get_markers(PredInfo, PredMarkers),
        check_marker(PredMarkers, marker_class_method)
    ->
        % For class methods we record the type_info_locns even for the
        % existential constraints.  It's easier to do it here than when we
        % are expanding class method bodies, and we know there won't be any
        % references to the type_info after the instance method call so
        % recording them now won't be a problem.
        RecordExistQLocns = do_record_type_info_locns
    ;
        RecordExistQLocns = do_not_record_type_info_locns
    ),
    make_typeclass_info_head_vars(RecordExistQLocns, ActualExistConstraints,
        ExistHeadTypeClassInfoVars, !Info),
    make_typeclass_info_head_vars(do_record_type_info_locns, UnivConstraints,
        UnivHeadTypeClassInfoVars, !Info),

    type_vars_list(ArgTypes, HeadTypeVars),
    list.delete_elems(HeadTypeVars, UnivConstrainedTVars,
        UnconstrainedTVars0),
    list.delete_elems(UnconstrainedTVars0, ExistConstrainedTVars,
        UnconstrainedTVars1),

    % Typeinfos for the instance tvars have already been introduced by
    % setup_headvars_instance_method.
    list.delete_elems(UnconstrainedTVars1, InstanceTVars,
        UnconstrainedTVars2),
    list.remove_dups(UnconstrainedTVars2, UnconstrainedTVars),

    (
        ExistQVars = [],
        % Optimize common case.
        UnconstrainedUnivTVars = UnconstrainedTVars,
        UnconstrainedExistTVars = [],
        ExistHeadTypeInfoVars = []
    ;
        ExistQVars = [_ | _],
        list.delete_elems(UnconstrainedTVars, ExistQVars,
            UnconstrainedUnivTVars),
        list.delete_elems(UnconstrainedTVars, UnconstrainedUnivTVars,
            UnconstrainedExistTVars),
        make_head_vars(UnconstrainedExistTVars, ArgTypeVarSet,
            ExistHeadTypeInfoVars, !Info)
    ),

    make_head_vars(UnconstrainedUnivTVars, ArgTypeVarSet,
        UnivHeadTypeInfoVars, !Info),
    ExtraHeadTypeInfoVars = UnivHeadTypeInfoVars ++ ExistHeadTypeInfoVars,

    AllExtraHeadTypeInfoVars = UnconstrainedInstanceTypeInfoVars
        ++ ExtraHeadTypeInfoVars,
    list.condense([UnconstrainedInstanceTVars, UnconstrainedUnivTVars,
        UnconstrainedExistTVars], AllUnconstrainedTVars),

    proc_arg_vector_set_univ_type_infos(UnivHeadTypeInfoVars,
        HeadVars0, HeadVars1),
    proc_arg_vector_set_exist_type_infos(ExistHeadTypeInfoVars,
        HeadVars1, HeadVars2),
    proc_arg_vector_set_univ_typeclass_infos(UnivHeadTypeClassInfoVars,
        HeadVars2, HeadVars3),
    proc_arg_vector_set_exist_typeclass_infos(ExistHeadTypeClassInfoVars,
        HeadVars3, HeadVars),

    % Figure out the modes of the introduced type_info and typeclass_info
    % arguments.

    in_mode(In),
    out_mode(Out),
    list.length(UnconstrainedUnivTVars, NumUnconstrainedUnivTVars),
    list.length(UnconstrainedExistTVars, NumUnconstrainedExistTVars),
    list.length(UnivHeadTypeClassInfoVars, NumUnivClassInfoVars),
    list.length(ExistHeadTypeClassInfoVars, NumExistClassInfoVars),
    list.duplicate(NumUnconstrainedUnivTVars, In, UnivTypeInfoModes),
    list.duplicate(NumUnconstrainedExistTVars, Out, ExistTypeInfoModes),
    list.duplicate(NumUnivClassInfoVars, In, UnivTypeClassInfoModes),
    list.duplicate(NumExistClassInfoVars, Out, ExistTypeClassInfoModes),
    poly_arg_vector_set_univ_type_infos(UnivTypeInfoModes, !ExtraArgModes),
    poly_arg_vector_set_exist_type_infos(ExistTypeInfoModes, !ExtraArgModes),
    poly_arg_vector_set_univ_typeclass_infos(UnivTypeClassInfoModes,
        !ExtraArgModes),
    poly_arg_vector_set_exist_typeclass_infos(ExistTypeClassInfoModes,
        !ExtraArgModes),

    % Add the locations of the typeinfos for unconstrained, universally
    % quantified type variables to the initial rtti_varmaps. Also add the
    % locations of typeclass_infos.
    %
    some [!RttiVarMaps] (
        poly_info_get_rtti_varmaps(!.Info, !:RttiVarMaps),

        ToLocn = (pred(TheVar::in, TheLocn::out) is det :-
            TheLocn = type_info(TheVar)),

        list.map(ToLocn, UnivHeadTypeInfoVars, UnivTypeLocns),
        list.foldl_corresponding(rtti_det_insert_type_info_locn,
            UnconstrainedUnivTVars, UnivTypeLocns, !RttiVarMaps),

        list.map(ToLocn, ExistHeadTypeInfoVars, ExistTypeLocns),
        list.foldl_corresponding(rtti_det_insert_type_info_locn,
            UnconstrainedExistTVars, ExistTypeLocns, !RttiVarMaps),

        list.map(ToLocn, UnconstrainedInstanceTypeInfoVars,
            UnconstrainedInstanceTypeLocns),
        list.foldl_corresponding(rtti_det_insert_type_info_locn,
            UnconstrainedInstanceTVars,
            UnconstrainedInstanceTypeLocns, !RttiVarMaps),

        list.foldl(rtti_reuse_typeclass_info_var,
            UnivHeadTypeClassInfoVars, !RttiVarMaps),

        poly_info_set_rtti_varmaps(!.RttiVarMaps, !Info)
    ).

    % Generate code to produce the values of type_infos and typeclass_infos
    % for existentially quantified type variables in the head.
    %
    % XXX The following code ought to be rewritten to handle
    % existential/universal type_infos and type_class_infos
    % in a more consistent manner.
    %
:- pred produce_existq_tvars(pred_info::in, proc_arg_vector(prog_var)::in,
    list(tvar)::in, list(prog_var)::in, list(prog_var)::in,
    hlds_goal::in, hlds_goal::out, poly_info::in, poly_info::out) is det.

produce_existq_tvars(PredInfo, HeadVars, UnconstrainedTVars,
        TypeInfoHeadVars, ExistTypeClassInfoHeadVars, Goal0, Goal, !Info) :-
    poly_info_get_var_types(!.Info, VarTypes0),
    poly_info_get_constraint_map(!.Info, ConstraintMap),
    pred_info_get_arg_types(PredInfo, ArgTypes),
    pred_info_get_tvar_kinds(PredInfo, KindMap),
    pred_info_get_class_context(PredInfo, PredClassContext),

    % Generate code to produce values for any existentially quantified
    % typeclass_info variables in the head.

    PredExistConstraints = PredClassContext ^ exist_constraints,
    get_improved_exists_head_constraints(ConstraintMap, PredExistConstraints,
        ActualExistConstraints),
    ExistQVarsForCall = [],
    Goal0 = hlds_goal(_, GoalInfo),
    Context = goal_info_get_context(GoalInfo),
    make_typeclass_info_vars(ActualExistConstraints,
        ExistQVarsForCall, Context, ExistTypeClassVars,
        ExtraTypeClassGoals, !Info),
    poly_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
    list.foldl(rtti_reuse_typeclass_info_var, ExistTypeClassVars,
        RttiVarMaps0, RttiVarMaps),
    poly_info_set_rtti_varmaps(RttiVarMaps, !Info),
    assign_var_list(ExistTypeClassInfoHeadVars,
        ExistTypeClassVars, ExtraTypeClassUnifyGoals),

    % Figure out the bindings for any unconstrained existentially quantified
    % type variables in the head.

    ( map.is_empty(VarTypes0) ->
        % This can happen for compiler generated procedures.
        map.init(PredToActualTypeSubst)
    ;
        HeadVarList = proc_arg_vector_to_list(HeadVars),
        map.apply_to_list(HeadVarList, VarTypes0, ActualArgTypes),
        type_list_subsumes(ArgTypes, ActualArgTypes, ArgTypeSubst)
    ->
        PredToActualTypeSubst = ArgTypeSubst
    ;
        % This can happen for unification procedures of equivalence types
        % error("polymorphism.m: type_list_subsumes failed")
        map.init(PredToActualTypeSubst)
    ),

    % Apply the type bindings to the unconstrained type variables to give
    % the actual types, and then generate code to initialize the type_infos
    % for those types.

    apply_subst_to_tvar_list(KindMap, PredToActualTypeSubst,
        UnconstrainedTVars, ActualTypes),
    polymorphism_make_type_info_vars(ActualTypes, Context,
        TypeInfoVars, ExtraTypeInfoGoals, !Info),
    assign_var_list(TypeInfoHeadVars, TypeInfoVars,
        ExtraTypeInfoUnifyGoals),
    list.condense([[Goal0], ExtraTypeClassGoals, ExtraTypeClassUnifyGoals,
        ExtraTypeInfoGoals, ExtraTypeInfoUnifyGoals], GoalList),
    conj_list_to_goal(GoalList, GoalInfo, Goal).

:- pred assign_var_list(list(prog_var)::in, list(prog_var)::in,
    list(hlds_goal)::out) is det.

assign_var_list([], [_ | _], _) :-
    unexpected(this_file, "assign_var_list: length mismatch").
assign_var_list([_ | _], [], _) :-
    unexpected(this_file, "assign_var_list: length mismatch").
assign_var_list([], [], []).
assign_var_list([Var1 | Vars1], [Var2 | Vars2], [Goal | Goals]) :-
    assign_var(Var1, Var2, Goal),
    assign_var_list(Vars1, Vars2, Goals).

:- pred assign_var(prog_var::in, prog_var::in, hlds_goal::out) is det.

assign_var(Var1, Var2, Goal) :-
    ( Var1 = Var2 ->
        Goal = true_goal
    ;
        term.context_init(Context),
        create_pure_atomic_complicated_unification(Var1, rhs_var(Var2),
            Context, umc_explicit, [], Goal)
    ).

:- pred get_improved_exists_head_constraints(constraint_map::in,
    list(prog_constraint)::in, list(prog_constraint)::out) is det.

get_improved_exists_head_constraints(ConstraintMap,  ExistConstraints,
        ActualExistConstraints) :-
    list.length(ExistConstraints, NumExistConstraints),
    (
        search_hlds_constraint_list(ConstraintMap, unproven, empty,
            NumExistConstraints, ActualExistConstraints0)
    ->
        ActualExistConstraints = ActualExistConstraints0
    ;
        % Some predicates, for example typeclass methods and predicates for
        % which we inferred the type, don't have constraint map entries for
        % the head constraints.  In these cases we can just use the external
        % constraints, since there can't be any difference between them and
        % the internal ones.
        ActualExistConstraints = ExistConstraints
    ).

%-----------------------------------------------------------------------------%

:- pred polymorphism_process_goal(hlds_goal::in, hlds_goal::out,
    poly_info::in, poly_info::out) is det.

polymorphism_process_goal(Goal0, Goal, !Info) :-
    Goal0 = hlds_goal(GoalExpr0, GoalInfo0),
    polymorphism_process_goal_expr(GoalExpr0, GoalInfo0, Goal, !Info).

:- pred polymorphism_process_goal_expr(hlds_goal_expr::in, hlds_goal_info::in,
    hlds_goal::out, poly_info::in, poly_info::out) is det.

polymorphism_process_goal_expr(GoalExpr0, GoalInfo0, Goal, !Info) :-
    (
        % We don't need to add type_infos for higher order calls, since the
        % type_infos are added when the closures are constructed, not when
        % they are called.
        GoalExpr0 = generic_call(_, _, _, _),
        Goal = hlds_goal(GoalExpr0, GoalInfo0)
    ;
        GoalExpr0 = plain_call(PredId, _, ArgVars0, _, _, _),
        polymorphism_process_call(PredId, ArgVars0, GoalInfo0, GoalInfo,
            ExtraVars, ExtraGoals, !Info),
        ArgVars = ExtraVars ++ ArgVars0,
        CallExpr = GoalExpr0 ^ call_args := ArgVars,
        Call = hlds_goal(CallExpr, GoalInfo),
        list.append(ExtraGoals, [Call], GoalList),
        conj_list_to_goal(GoalList, GoalInfo0, Goal)
    ;
        GoalExpr0 = call_foreign_proc(_, PredId, _, _, _, _, _),
        poly_info_get_module_info(!.Info, ModuleInfo),
        module_info_pred_info(ModuleInfo, PredId, PredInfo),
        PredModule = pred_info_module(PredInfo),
        PredName = pred_info_name(PredInfo),
        PredArity = pred_info_orig_arity(PredInfo),

        ( no_type_info_builtin(PredModule, PredName, PredArity) ->
            Goal = hlds_goal(GoalExpr0, GoalInfo0)
        ;
            polymorphism_process_foreign_proc(ModuleInfo, PredInfo, GoalExpr0,
                GoalInfo0, Goal, !Info)
        )
    ;
        GoalExpr0 = unify(XVar, Y, Mode, Unification, UnifyContext),
        polymorphism_process_unify(XVar, Y, Mode, Unification, UnifyContext,
            GoalInfo0, Goal, !Info)
    ;
        % The rest of the cases just process goals recursively.
        (
            GoalExpr0 = conj(ConjType, Goals0),
            polymorphism_process_goal_list(Goals0, Goals, !Info),
            GoalExpr = conj(ConjType, Goals)
        ;
            GoalExpr0 = disj(Goals0),
            polymorphism_process_goal_list(Goals0, Goals, !Info),
            GoalExpr = disj(Goals)
        ;
            GoalExpr0 = negation(SubGoal0),
            polymorphism_process_goal(SubGoal0, SubGoal, !Info),
            GoalExpr = negation(SubGoal)
        ;
            GoalExpr0 = switch(Var, CanFail, Cases0),
            polymorphism_process_case_list(Cases0, Cases, !Info),
            GoalExpr = switch(Var, CanFail, Cases)
        ;
            GoalExpr0 = scope(Reason, SubGoal0),
            polymorphism_process_goal(SubGoal0, SubGoal, !Info),
            GoalExpr = scope(Reason, SubGoal)
        ;
            GoalExpr0 = if_then_else(Vars, Cond0, Then0, Else0),
            polymorphism_process_goal(Cond0, Cond, !Info),
            polymorphism_process_goal(Then0, Then, !Info),
            polymorphism_process_goal(Else0, Else, !Info),
            GoalExpr = if_then_else(Vars, Cond, Then, Else)
        ),
        Goal = hlds_goal(GoalExpr, GoalInfo0)
    ;
        GoalExpr0 = shorthand(ShortHand0),
        (
            ShortHand0 = atomic_goal(GoalType, Outer, Inner, Vars, 
                MainGoal0, OrElseGoals0),
            polymorphism_process_goal(MainGoal0, MainGoal, !Info),
            polymorphism_process_goal_list(OrElseGoals0, OrElseGoals, !Info),
            ShortHand = atomic_goal(GoalType, Outer, Inner, Vars, 
                MainGoal, OrElseGoals),
            GoalExpr = shorthand(ShortHand),
            Goal = hlds_goal(GoalExpr, GoalInfo0)
        ;
            ShortHand0 = bi_implication(_, _),
            unexpected(this_file, "process_goal_expr: bi_implication")
        )
    ).

    % type_info_vars prepends a comma separated list of variables
    % onto a string of variables.
    % It places an & at the start of the variable name if the variable
    % is an output variable.
    %
:- func type_info_vars(module_info, list(foreign_arg), string) = string.

type_info_vars(_ModuleInfo, [], InitString) = InitString.
type_info_vars(ModuleInfo, [Arg | Args], InitString) = String :-
    String0 = type_info_vars(ModuleInfo, Args, InitString),
    MaybeNameMode = foreign_arg_maybe_name_mode(Arg),
    (
        MaybeNameMode = yes(ArgName0 - Mode),
        ( mode_is_output(ModuleInfo, Mode) ->
            string.append("&", ArgName0, ArgName)
        ;
            ArgName = ArgName0
        ),
        ( String0 = "" ->
            String = ArgName
        ;
            String = string.append_list([ArgName, ", ", String0])
        )
    ;
        MaybeNameMode = no,
        String = String0
    ).

:- pred polymorphism_process_unify(prog_var::in, unify_rhs::in,
    unify_mode::in, unification::in, unify_context::in, hlds_goal_info::in,
    hlds_goal::out, poly_info::in, poly_info::out) is det.

polymorphism_process_unify(XVar, Y, Mode, Unification0, UnifyContext,
        GoalInfo0, Goal, !Info) :-
    (
        Y = rhs_var(_YVar),

        % Var-var unifications (simple_test, assign, or complicated_unify)
        % are basically left unchanged. Complicated unifications will
        % eventually get converted into calls, but that is done later on,
        % by simplify.m, not now. At this point we just need to figure out
        % which type_info/typeclass_info variables the unification might need,
        % and insert them in the nonlocals. We have to do that for all var-var
        % unifications, because at this point we haven't done mode analysis so
        % we don't know which ones will become complicated_unifies.
        % Note that we also store the type_info/typeclass_info variables
        % in a field in the unification, which quantification.m uses when
        % requantifying things.

        poly_info_get_var_types(!.Info, VarTypes),
        map.lookup(VarTypes, XVar, Type),
        unification_typeinfos(Type, Unification0, Unification,
            GoalInfo0, GoalInfo, !Info),
        Goal = hlds_goal(unify(XVar, Y, Mode, Unification, UnifyContext),
            GoalInfo)
    ;
        Y = rhs_functor(ConsId, _, Args),
        polymorphism_process_unify_functor(XVar, ConsId, Args, Mode,
            Unification0, UnifyContext, GoalInfo0, Goal, !Info)
    ;
        Y = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
            ArgVars0, LambdaVars, Modes, Det, LambdaGoal0),

        % For lambda expressions, we must recursively traverse the lambda goal.
        polymorphism_process_goal(LambdaGoal0, LambdaGoal1, !Info),
        % Currently we don't allow lambda goals to be
        % existentially typed
        ExistQVars = [],
        fixup_lambda_quantification(ArgVars0, LambdaVars, ExistQVars,
            LambdaGoal1, LambdaGoal, NonLocalTypeInfos, !Info),
        set.to_sorted_list(NonLocalTypeInfos, NonLocalTypeInfosList),
        list.append(NonLocalTypeInfosList, ArgVars0, ArgVars),
        Y1 = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
            ArgVars, LambdaVars, Modes, Det, LambdaGoal),
        NonLocals0 = goal_info_get_nonlocals(GoalInfo0),
        set.union(NonLocals0, NonLocalTypeInfos, NonLocals),
        goal_info_set_nonlocals(NonLocals, GoalInfo0, GoalInfo),

        % Complicated (in-in) argument unifications are impossible for lambda
        % expressions, so we don't need to worry about adding the type_infos
        % that would be required for such unifications.
        Goal = hlds_goal(unify(XVar, Y1, Mode, Unification0, UnifyContext),
            GoalInfo)
    ).

:- pred unification_typeinfos(mer_type::in,
    unification::in, unification::out, hlds_goal_info::in, hlds_goal_info::out,
    poly_info::in, poly_info::out) is det.

unification_typeinfos(Type, !Unification, !GoalInfo, !Info) :-
    % Compute the type_info/type_class_info variables that would be used
    % if this unification ends up being a complicated_unify.
    type_vars(Type, TypeVars),
    list.map_foldl(get_type_info_locn, TypeVars, TypeInfoLocns, !Info),
    add_unification_typeinfos(TypeInfoLocns, !Unification, !GoalInfo).

unification_typeinfos_rtti_varmaps(Type, RttiVarMaps, !Unification,
        !GoalInfo) :-
    % This variant is for use by modecheck_unify.m. During mode checking,
    % all the type_infos should appear in the type_info_varmap.

    % Compute the type_info/type_class_info variables that would be used
    % if this unification ends up being a complicated_unify.
    type_vars(Type, TypeVars),
    list.map(rtti_lookup_type_info_locn(RttiVarMaps), TypeVars,
        TypeInfoLocns),
    add_unification_typeinfos(TypeInfoLocns, !Unification, !GoalInfo).

:- pred add_unification_typeinfos(list(type_info_locn)::in,
    unification::in, unification::out,
    hlds_goal_info::in, hlds_goal_info::out) is det.

add_unification_typeinfos(TypeInfoLocns, !Unification, !GoalInfo) :-
    list.map(type_info_locn_var, TypeInfoLocns, TypeInfoVars0),
    list.remove_dups(TypeInfoVars0, TypeInfoVars),

    % Insert the TypeInfoVars into the nonlocals field of the goal_info
    % for the unification goal.
    NonLocals0 = goal_info_get_nonlocals(!.GoalInfo),
    set.insert_list(NonLocals0, TypeInfoVars, NonLocals),
    goal_info_set_nonlocals(NonLocals, !GoalInfo),

    % Also save those type_info vars into a field in the complicated_unify,
    % so that quantification.m can recompute variable scopes properly.
    % This field is also used by modecheck_unify.m -- for complicated
    % unifications, it checks that all these variables are ground.
    (
        !.Unification = complicated_unify(Modes, CanFail, _),
        !:Unification = complicated_unify(Modes, CanFail, TypeInfoVars)
    ;
        % This can happen if an earlier stage of compilation has already
        % determined that this unification is particular kind of unification.
        % In that case, the type_info vars won't be needed.
        ( !.Unification = construct(_, _, _, _, _, _, _)
        ; !.Unification = deconstruct(_, _, _, _, _, _)
        ; !.Unification = assign(_, _)
        ; !.Unification = simple_test(_, _)
        )
    ).

:- pred polymorphism_process_unify_functor(prog_var::in, cons_id::in,
    list(prog_var)::in, unify_mode::in, unification::in, unify_context::in,
    hlds_goal_info::in, hlds_goal::out, poly_info::in, poly_info::out) is det.

polymorphism_process_unify_functor(X0, ConsId0, ArgVars0, Mode0, Unification0,
        UnifyContext, GoalInfo0, Goal, !Info) :-
    poly_info_get_module_info(!.Info, ModuleInfo0),
    poly_info_get_var_types(!.Info, VarTypes0),
    map.lookup(VarTypes0, X0, TypeOfX),
    list.length(ArgVars0, Arity),
    (
    %
    % We replace any unifications with higher order pred constants
    % by lambda expressions. For example, we replace
    %
    %   X = list.append(Y)     % Y::in, X::out
    %
    % with
    %
    %   X = (pred(A1::in, A2::out) is ... :- list.append(Y, A1, A2))
    %
    % We do this because it makes two things easier. First, mode analysis
    % needs to check that the lambda goal doesn't bind any nonlocal variables
    % (e.g. `Y' in above example). This would require a bit of moderately
    % tricky special case code if we didn't expand them here. Second, this pass
    % (polymorphism.m) is a lot easier if we don't have to handle higher order
    % pred consts. If it turns out that the predicate was nonpolymorphic,
    % lambda.m will turn the lambda expression back into a higher order pred
    % constant again.
    %
    % Note that this transformation is also done by modecheck_unify.m, in case
    % we are rerunning mode analysis after lambda.m has already been run;
    % any changes to the code here will also need to be duplicated there.
    %

        % Check if variable has a higher order type.
        type_is_higher_order_details(TypeOfX, Purity, _PredOrFunc, EvalMethod,
            CalleeArgTypes),
        ConsId0 = pred_const(ShroudedPredProcId, _),
        proc(PredId, ProcId0) = unshroud_pred_proc_id(ShroudedPredProcId)
    ->
        % An `invalid_proc_id' means the predicate is multi-moded. We can't
        % pick the right mode yet. Perform the rest of the transformation with
        % any mode (the first) but mark the goal with a feature so that mode
        % checking knows to fix it up later.
        ( ProcId0 = invalid_proc_id ->
            module_info_pred_info(ModuleInfo0, PredId, PredInfo),
            ProcIds = pred_info_procids(PredInfo),
            (
                ProcIds = [ProcId | _],
                goal_info_add_feature(feature_lambda_undetermined_mode,
                    GoalInfo0, GoalInfo1)
            ;
                ProcIds = [],
                unexpected(this_file,
                    "polymorphism_process_unify_functor: no modes")
            )
        ;
            ProcId = ProcId0,
            GoalInfo1 = GoalInfo0
        ),
        % Convert the higher order pred term to a lambda goal.
        poly_info_get_varset(!.Info, VarSet0),
        Context = goal_info_get_context(GoalInfo0),
        convert_pred_to_lambda_goal(Purity, EvalMethod, X0, PredId, ProcId,
            ArgVars0, CalleeArgTypes, UnifyContext, GoalInfo1, Context,
            ModuleInfo0, Functor0, VarSet0, VarSet, VarTypes0, VarTypes),
        poly_info_set_varset_and_types(VarSet, VarTypes, !Info),
        % Process the unification in its new form.
        polymorphism_process_unify(X0, Functor0, Mode0, Unification0,
            UnifyContext, GoalInfo1, Goal, !Info)
    ;
        % Is this a construction or deconstruction of an existentially
        % typed data type?

        % Check whether the functor had a "new " prefix.
        % If so, assume it is a construction, and strip off the prefix.
        % Otherwise, assume it is a deconstruction.

        ConsId0 = cons(Functor0, Arity),
        ( remove_new_prefix(Functor0, OrigFunctor) ->
            ConsId = cons(OrigFunctor, Arity),
            IsConstruction = yes
        ;
            ConsId = ConsId0,
            IsConstruction = no
        ),

        % Check whether the functor (with the "new " prefix removed)
        % is an existentially typed functor.
        type_util.get_existq_cons_defn(ModuleInfo0, TypeOfX, ConsId, ConsDefn)
    ->
        % Add extra arguments to the unification for the
        % type_info and/or type_class_info variables.

        map.apply_to_list(ArgVars0, VarTypes0, ActualArgTypes),
        polymorphism_process_existq_unify_functor(ConsDefn,
            IsConstruction, ActualArgTypes, TypeOfX, GoalInfo0,
            ExtraVars, ExtraGoals, !Info),
        list.append(ExtraVars, ArgVars0, ArgVars),
        NonLocals0 = goal_info_get_nonlocals(GoalInfo0),
        set.insert_list(NonLocals0, ExtraVars, NonLocals),
        goal_info_set_nonlocals(NonLocals, GoalInfo0, GoalInfo1),

        % Some of the argument unifications may be complicated unifications,
        % which may need type_infos.
        unification_typeinfos(TypeOfX,
            Unification0, Unification, GoalInfo1, GoalInfo, !Info),

        UnifyExpr = unify(X0, rhs_functor(ConsId, IsConstruction, ArgVars),
            Mode0, Unification, UnifyContext),
        Unify = hlds_goal(UnifyExpr, GoalInfo),
        list.append(ExtraGoals, [Unify], GoalList),
        conj_list_to_goal(GoalList, GoalInfo0, Goal)
    ;
        % We leave construction/deconstruction unifications alone.
        % Some of the argument unifications may be complicated unifications,
        % which may need type_infos.

        unification_typeinfos(TypeOfX,
            Unification0, Unification, GoalInfo0, GoalInfo, !Info),
        GoalExpr = unify(X0, rhs_functor(ConsId0, no, ArgVars0), Mode0,
            Unification, UnifyContext),
        Goal = hlds_goal(GoalExpr, GoalInfo)
    ).

convert_pred_to_lambda_goal(Purity, EvalMethod, X0, PredId, ProcId,
        ArgVars0, PredArgTypes, UnifyContext, GoalInfo0, Context,
        ModuleInfo0, Functor, !VarSet, !VarTypes) :-

    % Create the new lambda-quantified variables.
    create_fresh_vars(PredArgTypes, LambdaVars, !VarSet, !VarTypes),
    list.append(ArgVars0, LambdaVars, Args),

    % Build up the hlds_goal_expr for the call that will form the lambda goal.
    module_info_pred_proc_info(ModuleInfo0, PredId, ProcId,
        PredInfo, ProcInfo),

    PredModule = pred_info_module(PredInfo),
    PredName = pred_info_name(PredInfo),
    QualifiedPName = qualified(PredModule, PredName),

    CallUnifyContext = call_unify_context(X0,
        rhs_functor(cons(QualifiedPName, list.length(ArgVars0)), no, ArgVars0),
        UnifyContext),
    LambdaGoalExpr = plain_call(PredId, ProcId, Args, not_builtin,
        yes(CallUnifyContext), QualifiedPName),

    % Construct a goal_info for the lambda goal, making sure to set up
    % the nonlocals field in the goal_info correctly. The goal_path is needed
    % to compute constraint_ids correctly.
    %
    NonLocals = goal_info_get_nonlocals(GoalInfo0),
    set.insert_list(NonLocals, LambdaVars, OutsideVars),
    set.list_to_set(Args, InsideVars),
    set.intersect(OutsideVars, InsideVars, LambdaNonLocals),
    GoalPath = goal_info_get_goal_path(GoalInfo0),
    goal_info_init(LambdaGoalInfo0),
    goal_info_set_context(Context, LambdaGoalInfo0, LambdaGoalInfo1),
    goal_info_set_nonlocals(LambdaNonLocals, LambdaGoalInfo1, LambdaGoalInfo2),
    goal_info_set_purity(Purity, LambdaGoalInfo2, LambdaGoalInfo3),
    goal_info_set_goal_path(GoalPath, LambdaGoalInfo3, LambdaGoalInfo),
    LambdaGoal = hlds_goal(LambdaGoalExpr, LambdaGoalInfo),

    % Work out the modes of the introduced lambda variables and the determinism
    % of the lambda goal.
    lambda_modes_and_det(ProcInfo, LambdaVars, LambdaModes, LambdaDet),

    % Construct the lambda expression.

    PredOrFunc = pred_info_is_pred_or_func(PredInfo),
    % Higher-order values created in this fashion are always ground.
    Groundness = ho_ground,
    Functor = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
        ArgVars0, LambdaVars, LambdaModes, LambdaDet, LambdaGoal).

fix_undetermined_mode_lambda_goal(ProcId, Functor0, Functor, ModuleInfo) :-
    Functor0 = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
        ArgVars0, LambdaVars, _LambdaModes0, _LambdaDet0, LambdaGoal0),
    LambdaGoal0 = hlds_goal(_, LambdaGoalInfo),
    goal_to_conj_list(LambdaGoal0, LambdaGoalList0),
    (
        list.split_last(LambdaGoalList0, LambdaGoalButLast0, LastGoal0),
        LastGoal0 = hlds_goal(LastGoalExpr0, LastGoalInfo0),
        LastGoalExpr0 = plain_call(PredId0, _DummyProcId, Args0, not_builtin,
            MaybeCallUnifyContext0, QualifiedPName0)
    ->
        LambdaGoalButLast = LambdaGoalButLast0,
        LastGoalInfo = LastGoalInfo0,
        PredId = PredId0,
        Args = Args0,
        MaybeCallUnifyContext = MaybeCallUnifyContext0,
        QualifiedPName = QualifiedPName0
    ;
        unexpected(this_file,
            "fix_undetermined_mode_lambda_goal: unmatched lambda goal")
    ),

    module_info_pred_proc_info(ModuleInfo, PredId, ProcId, _, ProcInfo),

    % Build up the lambda goal.
    LastGoalExpr = plain_call(PredId, ProcId, Args, not_builtin,
        MaybeCallUnifyContext, QualifiedPName),
    LastGoal = hlds_goal(LastGoalExpr, LastGoalInfo),
    conj_list_to_goal(LambdaGoalButLast ++ [LastGoal], LambdaGoalInfo,
        LambdaGoal),

    % Work out the modes of the introduced lambda variables and the determinism
    % of the lambda goal.
    lambda_modes_and_det(ProcInfo, LambdaVars, LambdaModes, LambdaDet),

    % Construct the lambda expression.
    Functor = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
        ArgVars0, LambdaVars, LambdaModes, LambdaDet, LambdaGoal).

:- pred lambda_modes_and_det(proc_info::in, prog_vars::in, list(mer_mode)::out,
    determinism::out) is det.

lambda_modes_and_det(ProcInfo, LambdaVars, LambdaModes, LambdaDet) :-
    proc_info_get_argmodes(ProcInfo, ArgModes),
    list.length(ArgModes, NumArgModes),
    list.length(LambdaVars, NumLambdaVars),
    ( list.drop(NumArgModes - NumLambdaVars, ArgModes, LambdaModesPrime) ->
        LambdaModes = LambdaModesPrime
    ;
        unexpected(this_file, "lambda_modes_and_det: list.drop failed")
    ),
    proc_info_get_declared_determinism(ProcInfo, MaybeDet),
    (
        MaybeDet = yes(Det),
        LambdaDet = Det
    ;
        MaybeDet = no,
        sorry(this_file,
            "lambda_modes_and_det: determinism inference for " ++
            "higher order predicate terms.")
    ).

:- pred create_fresh_vars(list(mer_type)::in, list(prog_var)::out,
    prog_varset::in, prog_varset::out, vartypes::in, vartypes::out) is det.

create_fresh_vars([], [], !VarSet, !VarTypes).
create_fresh_vars([Type | Types], [Var | Vars], !VarSet, !VarTypes) :-
    varset.new_var(!.VarSet, Var, !:VarSet),
    map.det_insert(!.VarTypes, Var, Type, !:VarTypes),
    create_fresh_vars(Types, Vars, !VarSet, !VarTypes).

%-----------------------------------------------------------------------------%

    % Compute the extra arguments that we need to add to a unification with
    % an existentially quantified data constructor.
    %
:- pred polymorphism_process_existq_unify_functor(ctor_defn::in, bool::in,
    list(mer_type)::in, mer_type::in, hlds_goal_info::in, list(prog_var)::out,
    list(hlds_goal)::out, poly_info::in, poly_info::out) is det.

polymorphism_process_existq_unify_functor(CtorDefn, IsConstruction,
        ActualArgTypes, ActualRetType, GoalInfo,
        ExtraVars, ExtraGoals, !Info) :-
    CtorDefn = ctor_defn(CtorTypeVarSet, CtorExistQVars, CtorKindMap,
        CtorExistentialConstraints, CtorArgTypes, CtorRetType),

    % Rename apart the type variables in the constructor definition.
    poly_info_get_typevarset(!.Info, TypeVarSet0),
    tvarset_merge_renaming(TypeVarSet0, CtorTypeVarSet, TypeVarSet,
        CtorToParentRenaming),
    apply_variable_renaming_to_tvar_list(CtorToParentRenaming,
        CtorExistQVars, ParentExistQVars),
    apply_variable_renaming_to_tvar_kind_map(CtorToParentRenaming,
        CtorKindMap, ParentKindMap),
    apply_variable_renaming_to_prog_constraint_list(CtorToParentRenaming,
        CtorExistentialConstraints, ParentExistentialConstraints),
    apply_variable_renaming_to_type_list(CtorToParentRenaming,
        CtorArgTypes, ParentArgTypes),
    apply_variable_renaming_to_type(CtorToParentRenaming, CtorRetType,
        ParentRetType),
    poly_info_set_typevarset(TypeVarSet, !Info),

    % Compute the type bindings resulting from the functor's actual argument
    % and return types. These are the ones that might bind the ExistQVars.
    type_list_subsumes_det([ParentRetType | ParentArgTypes],
        [ActualRetType | ActualArgTypes], ParentToActualTypeSubst),

    % Create type_class_info variables for the type class constraints.
    poly_info_get_constraint_map(!.Info, ConstraintMap),
    GoalPath = goal_info_get_goal_path(GoalInfo),
    list.length(ParentExistentialConstraints, NumExistentialConstraints),
    Context = goal_info_get_context(GoalInfo),
    (
        IsConstruction = yes,
        % Assume it's a construction.
        lookup_hlds_constraint_list(ConstraintMap, unproven, GoalPath,
            NumExistentialConstraints, ActualExistentialConstraints),
        make_typeclass_info_vars(ActualExistentialConstraints, [], Context,
            ExtraTypeClassVars, ExtraTypeClassGoals, !Info)
    ;
        IsConstruction = no,
        % Assume it's a deconstruction.
        lookup_hlds_constraint_list(ConstraintMap, assumed, GoalPath,
            NumExistentialConstraints, ActualExistentialConstraints),
        make_existq_typeclass_info_vars(ActualExistentialConstraints,
            ExtraTypeClassVars, ExtraTypeClassGoals, !Info)
    ),

    % Compute the set of _unconstrained_ existentially quantified type
    % variables, and then apply the type bindings to those type variables
    % to figure out what types they are bound to.
    constraint_list_get_tvars(ParentExistentialConstraints,
        ParentExistConstrainedTVars),
    list.delete_elems(ParentExistQVars, ParentExistConstrainedTVars,
        ParentUnconstrainedExistQVars),
    apply_rec_subst_to_tvar_list(ParentKindMap, ParentToActualTypeSubst,
        ParentUnconstrainedExistQVars, ActualExistentialTypes),

    % Create type_info variables for the _unconstrained_ existentially
    % quantified type variables.
    polymorphism_make_type_info_vars(ActualExistentialTypes, Context,
        ExtraTypeInfoVars, ExtraTypeInfoGoals, !Info),

    % The type_class_info variables go AFTER the type_info variables
    % (for consistency with the order for argument passing,
    % and because the RTTI support in the runtime system relies on it)

    ExtraGoals = ExtraTypeInfoGoals ++ ExtraTypeClassGoals,
    ExtraVars = ExtraTypeInfoVars ++ ExtraTypeClassVars.

%-----------------------------------------------------------------------------%

:- pred polymorphism_process_foreign_proc(module_info::in, pred_info::in,
    hlds_goal_expr::in(bound(call_foreign_proc(ground,ground,ground,ground,
    ground,ground,ground))), hlds_goal_info::in, hlds_goal::out,
    poly_info::in, poly_info::out) is det.

polymorphism_process_foreign_proc(ModuleInfo, PredInfo, Goal0, GoalInfo0, Goal,
        !Info) :-
    % Insert the type_info vars into the argname map, so that the foreign_proc
    % can refer to the type_info variable for type T as `TypeInfo_for_T'.
    Goal0 = call_foreign_proc(Attributes, PredId, ProcId, Args0, ProcExtraArgs,
        MaybeTraceRuntimeCond, Impl0),
    ArgVars0 = list.map(foreign_arg_var, Args0),
    polymorphism_process_call(PredId, ArgVars0, GoalInfo0, GoalInfo,
        ExtraVars, ExtraGoals, !Info),
    (
        Impl0 = fc_impl_import(_, _, _, _),
        % The reference manual guarantees a one-to-one correspondence between
        % the arguments of the predicate (as augmented by with type_info and/or
        % typeclass_info arguments by polymorphism.m) and the arguments of the
        % imported function.
        CanOptAwayUnnamed = no
    ;
        ( Impl0 = fc_impl_ordinary(_, _)
        ; Impl0 = fc_impl_model_non(_, _, _, _, _, _, _, _, _)
        ),
        CanOptAwayUnnamed = yes
    ),
    polymorphism_process_foreign_proc_args(PredInfo, CanOptAwayUnnamed, Impl0,
        ExtraVars, ExtraArgs),
    Args = ExtraArgs ++ Args0,

    % Add the type info arguments to the list of variables
    % to call for a pragma import.
    (
        Impl0 = fc_impl_import(Name, HandleReturn, Variables0, MaybeContext),
        Variables = type_info_vars(ModuleInfo, ExtraArgs, Variables0),
        Impl = fc_impl_import(Name, HandleReturn, Variables, MaybeContext)
    ;
        ( Impl0 = fc_impl_ordinary(_, _)
        ; Impl0 = fc_impl_model_non(_, _, _, _, _, _, _, _, _)
        ),
        Impl = Impl0
    ),

    % Plug it all back together.
    CallExpr = call_foreign_proc(Attributes, PredId, ProcId,
        Args, ProcExtraArgs, MaybeTraceRuntimeCond, Impl),
    Call = hlds_goal(CallExpr, GoalInfo),
    list.append(ExtraGoals, [Call], GoalList),
    conj_list_to_goal(GoalList, GoalInfo0, Goal).

:- pred polymorphism_process_foreign_proc_args(pred_info::in, bool::in,
    pragma_foreign_code_impl::in, list(prog_var)::in, list(foreign_arg)::out)
    is det.

polymorphism_process_foreign_proc_args(PredInfo, CanOptAwayUnnamed, Impl, Vars,
        Args) :-
    pred_info_get_arg_types(PredInfo, PredTypeVarSet, ExistQVars,
        PredArgTypes),

    % Find out which variables are constrained (so that we don't add
    % type_infos for them.
    pred_info_get_class_context(PredInfo, constraints(UnivCs, ExistCs)),
    UnivVars0 = list.map(get_constrained_vars, UnivCs),
    list.condense(UnivVars0, UnivConstrainedVars),
    ExistVars0 = list.map(get_constrained_vars, ExistCs),
    list.condense(ExistVars0, ExistConstrainedVars),

    type_vars_list(PredArgTypes, PredTypeVars0),
    list.remove_dups(PredTypeVars0, PredTypeVars1),
    list.delete_elems(PredTypeVars1, UnivConstrainedVars, PredTypeVars2),
    list.delete_elems(PredTypeVars2, ExistConstrainedVars, PredTypeVars),

    % The argument order is described at the top of this file.

    in_mode(In),
    out_mode(Out),

    list.map(foreign_proc_add_typeclass_info(CanOptAwayUnnamed, Out, Impl,
        PredTypeVarSet), ExistCs, ExistTypeClassArgInfos),
    list.map(foreign_proc_add_typeclass_info(CanOptAwayUnnamed, In, Impl,
        PredTypeVarSet), UnivCs, UnivTypeClassArgInfos),
    TypeClassArgInfos = UnivTypeClassArgInfos ++ ExistTypeClassArgInfos,

    list.filter((pred(X::in) is semidet :- list.member(X, ExistQVars)),
        PredTypeVars, ExistUnconstrainedVars, UnivUnconstrainedVars),

    list.map(foreign_proc_add_typeinfo(CanOptAwayUnnamed, Out, Impl,
        PredTypeVarSet), ExistUnconstrainedVars, ExistTypeArgInfos),
    list.map(foreign_proc_add_typeinfo(CanOptAwayUnnamed, In, Impl,
        PredTypeVarSet), UnivUnconstrainedVars, UnivTypeArgInfos),
    TypeInfoArgInfos = UnivTypeArgInfos ++ ExistTypeArgInfos,

    ArgInfos = TypeInfoArgInfos ++ TypeClassArgInfos,

    % Insert type_info/typeclass_info types for all the inserted
    % type_info/typeclass_info vars into the argument type list.

    TypeInfoTypes = list.map((func(_) = type_info_type), PredTypeVars),
    list.map(build_typeclass_info_type, UnivCs, UnivTypes),
    list.map(build_typeclass_info_type, ExistCs, ExistTypes),
    OrigArgTypes = TypeInfoTypes ++ UnivTypes ++ ExistTypes,

    make_foreign_args(Vars, ArgInfos, OrigArgTypes, Args).

:- pred foreign_proc_add_typeclass_info(bool::in, mer_mode::in,
    pragma_foreign_code_impl::in, tvarset::in, prog_constraint::in,
    pair(maybe(pair(string, mer_mode)), box_policy)::out) is det.

foreign_proc_add_typeclass_info(CanOptAwayUnnamed, Mode, Impl, TypeVarSet,
        Constraint, MaybeArgName - native_if_possible) :-
    Constraint = constraint(SymName, Types),
    Name = sym_name_to_string_sep(SymName, "__"),
    type_vars_list(Types, TypeVars),
    TypeVarNames = list.map(underscore_and_tvar_name(TypeVarSet), TypeVars),
    string.append_list(["TypeClassInfo_for_", Name | TypeVarNames],
        ConstraintVarName),
    % If the variable name corresponding to the typeclass_info isn't mentioned
    % in the C code fragment, don't pass the variable to the C code at all.
    (
        CanOptAwayUnnamed = yes,
        foreign_code_does_not_use_variable(Impl, ConstraintVarName)
    ->
        MaybeArgName = no
    ;
        MaybeArgName = yes(ConstraintVarName - Mode)
    ).

:- pred foreign_proc_add_typeinfo(bool::in, mer_mode::in,
    pragma_foreign_code_impl::in, tvarset::in, tvar::in,
    pair(maybe(pair(string, mer_mode)), box_policy)::out) is det.

foreign_proc_add_typeinfo(CanOptAwayUnnamed, Mode, Impl, TypeVarSet, TVar,
        MaybeArgName - native_if_possible) :-
    ( varset.search_name(TypeVarSet, TVar, TypeVarName) ->
        string.append("TypeInfo_for_", TypeVarName, C_VarName),
        % If the variable name corresponding to the type_info isn't mentioned
        % in the C code fragment, don't pass the variable to the C code at all.
        (
            CanOptAwayUnnamed = yes,
            foreign_code_does_not_use_variable(Impl, C_VarName)
        ->
            MaybeArgName = no
        ;
            MaybeArgName = yes(C_VarName - Mode)
        )
    ;
        MaybeArgName = no
    ).

:- pred foreign_code_does_not_use_variable(pragma_foreign_code_impl::in,
    string::in) is semidet.

foreign_code_does_not_use_variable(Impl, VarName) :-
    % XXX This test used to be turned off with the semidet_fail, as it caused
    % the compiler to abort when compiling declarative_execution.m in stage2,
    % but this is no longer the case.
    % semidet_fail,
    \+ foreign_code_uses_variable(Impl, VarName).

:- func underscore_and_tvar_name(tvarset, tvar) = string.

underscore_and_tvar_name(TypeVarSet, TVar) = TVarName :-
    varset.lookup_name(TypeVarSet, TVar, TVarName0),
    string.append("_", TVarName0, TVarName).

:- pred polymorphism_process_goal_list(list(hlds_goal)::in,
    list(hlds_goal)::out, poly_info::in, poly_info::out) is det.

polymorphism_process_goal_list([], [], !Info).
polymorphism_process_goal_list([Goal0 | Goals0], [Goal | Goals], !Info) :-
    polymorphism_process_goal(Goal0, Goal, !Info),
    polymorphism_process_goal_list(Goals0, Goals, !Info).

:- pred polymorphism_process_case_list(list(case)::in, list(case)::out,
    poly_info::in, poly_info::out) is det.

polymorphism_process_case_list([], [], !Info).
polymorphism_process_case_list([Case0 | Cases0], [Case | Cases], !Info) :-
    Case0 = case(MainConsId, OtherConsIds, Goal0),
    polymorphism_process_goal(Goal0, Goal, !Info),
    Case = case(MainConsId, OtherConsIds, Goal),
    polymorphism_process_case_list(Cases0, Cases, !Info).

%-----------------------------------------------------------------------------%

    % XXX document me
    %
    % XXX the following code ought to be rewritten to handle
    % existential/universal type_infos and type_class_infos
    % in a more consistent manner.
    %
:- pred polymorphism_process_call(pred_id::in, list(prog_var)::in,
    hlds_goal_info::in, hlds_goal_info::out,
    list(prog_var)::out, list(hlds_goal)::out,
    poly_info::in, poly_info::out) is det.

polymorphism_process_call(PredId, ArgVars0, GoalInfo0, GoalInfo,
        ExtraVars, ExtraGoals, !Info) :-
    poly_info_get_var_types(!.Info, VarTypes),
    poly_info_get_typevarset(!.Info, TypeVarSet0),
    poly_info_get_module_info(!.Info, ModuleInfo),

    % The order of the added variables is important, and must match the
    % order specified at the top of this file.

    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    pred_info_get_arg_types(PredInfo, PredTypeVarSet, PredExistQVars,
        PredArgTypes),
    pred_info_get_tvar_kinds(PredInfo, PredKindMap),
    pred_info_get_class_context(PredInfo, PredClassContext),

    % VarTypes, TypeVarSet* etc come from the caller.
    % PredTypeVarSet, PredArgTypes, PredExistQVars, etc come
    % directly from the callee.
    % ParentArgTypes, ParentExistQVars etc come from a version
    % of the callee that has been renamed apart from the caller.
    %
    % The difference between e.g. PredArgTypes and ParentArgTypes is the
    % application of PredToParentTypeRenaming, which maps the type variables
    % in the callee to new type variables in the caller. Adding the new type
    % variables to TypeVarSet0 yields TypeVarSet.

    ( varset.is_empty(PredTypeVarSet) ->
        % optimize a common case
        map.init(PredToParentTypeRenaming),
        TypeVarSet = TypeVarSet0,
        ParentArgTypes = PredArgTypes,
        ParentKindMap = PredKindMap,
        ParentTVars = [],
        ParentExistQVars = []
    ;
        % This merge might be a performance bottleneck?
        tvarset_merge_renaming(TypeVarSet0, PredTypeVarSet, TypeVarSet,
            PredToParentTypeRenaming),
        apply_variable_renaming_to_type_list(PredToParentTypeRenaming,
            PredArgTypes, ParentArgTypes),
        type_vars_list(ParentArgTypes, ParentTVars),
        apply_variable_renaming_to_tvar_kind_map(PredToParentTypeRenaming,
            PredKindMap, ParentKindMap),
        apply_variable_renaming_to_tvar_list(PredToParentTypeRenaming,
            PredExistQVars, ParentExistQVars)
    ),

    PredModule = pred_info_module(PredInfo),
    PredName = pred_info_name(PredInfo),
    PredArity = pred_info_orig_arity(PredInfo),
    (
        (
            % Optimize for the common case of nonpolymorphic call
            % with no constraints.
            ParentTVars = [],
            PredClassContext = constraints([], [])
        ;
            % Some builtins don't need or want the type_info.
            no_type_info_builtin(PredModule, PredName, PredArity)
        )
    ->
        GoalInfo = GoalInfo0,
        ExtraGoals = [],
        ExtraVars = []
    ;
        poly_info_set_typevarset(TypeVarSet, !Info),

        % Compute which "parent" type variables are constrained
        % by the type class constraints.
        apply_variable_renaming_to_prog_constraints(PredToParentTypeRenaming,
            PredClassContext, ParentClassContext),
        ParentClassContext = constraints(ParentUnivConstraints,
            ParentExistConstraints),
        constraint_list_get_tvars(ParentUnivConstraints,
            ParentUnivConstrainedTVars),
        constraint_list_get_tvars(ParentExistConstraints,
            ParentExistConstrainedTVars),

        % Calculate the set of unconstrained type vars. Split these into
        % existential and universal type vars.
        list.remove_dups(ParentTVars, ParentUnconstrainedTVars0),
        list.delete_elems(ParentUnconstrainedTVars0,
            ParentUnivConstrainedTVars, ParentUnconstrainedTVars1),
        list.delete_elems(ParentUnconstrainedTVars1,
            ParentExistConstrainedTVars, ParentUnconstrainedTVars),
        list.delete_elems(ParentUnconstrainedTVars, ParentExistQVars,
            ParentUnconstrainedUnivTVars),
        list.delete_elems(ParentUnconstrainedTVars,
            ParentUnconstrainedUnivTVars, ParentUnconstrainedExistTVars),

        % Calculate the "parent to actual" binding.
        map.apply_to_list(ArgVars0, VarTypes, ActualArgTypes),
        type_list_subsumes_det(ParentArgTypes, ActualArgTypes,
            ParentToActualTypeSubst),

        % Make the universally quantified typeclass_infos for the call.
        poly_info_get_constraint_map(!.Info, ConstraintMap),
        GoalPath = goal_info_get_goal_path(GoalInfo0),
        list.length(ParentUnivConstraints, NumUnivConstraints),
        lookup_hlds_constraint_list(ConstraintMap, unproven, GoalPath,
            NumUnivConstraints, ActualUnivConstraints),
        apply_rec_subst_to_tvar_list(ParentKindMap, ParentToActualTypeSubst,
            ParentExistQVars, ActualExistQVarTypes),
        (
            prog_type.type_list_to_var_list(ActualExistQVarTypes,
                ActualExistQVars0)
        ->
            ActualExistQVars = ActualExistQVars0
        ;
            unexpected(this_file, "existq_tvar bound")
        ),
        Context = goal_info_get_context(GoalInfo0),
        make_typeclass_info_vars(ActualUnivConstraints, ActualExistQVars,
            Context, ExtraUnivClassVars, ExtraUnivClassGoals, !Info),

        % Make variables to hold any existentially quantified typeclass_infos
        % in the call, insert them into the typeclass_info map.
        list.length(ParentExistConstraints, NumExistConstraints),
        lookup_hlds_constraint_list(ConstraintMap, assumed, GoalPath,
            NumExistConstraints, ActualExistConstraints),
        make_existq_typeclass_info_vars(
            ActualExistConstraints, ExtraExistClassVars,
            ExtraExistClassGoals, !Info),

        % Make variables to hold typeinfos for unconstrained universal type
        % vars.
        apply_rec_subst_to_tvar_list(ParentKindMap, ParentToActualTypeSubst,
            ParentUnconstrainedUnivTVars, ActualUnconstrainedUnivTypes),
        polymorphism_make_type_info_vars(ActualUnconstrainedUnivTypes,
            Context, ExtraUnivTypeInfoVars, ExtraUnivTypeInfoGoals, !Info),

        % Make variables to hold typeinfos for unconstrained existential type
        % vars.
        apply_rec_subst_to_tvar_list(ParentKindMap, ParentToActualTypeSubst,
            ParentUnconstrainedExistTVars, ActualUnconstrainedExistTypes),
        polymorphism_make_type_info_vars(ActualUnconstrainedExistTypes,
            Context, ExtraExistTypeInfoVars, ExtraExistTypeInfoGoals, !Info),

        % Add up the extra vars and goals.
        ExtraGoals = ExtraUnivClassGoals ++ ExtraExistClassGoals
            ++ ExtraUnivTypeInfoGoals ++ ExtraExistTypeInfoGoals,
        ExtraVars = ExtraUnivTypeInfoVars ++ ExtraExistTypeInfoVars
            ++ ExtraUnivClassVars ++ ExtraExistClassVars,

        % Update the nonlocals.
        NonLocals0 = goal_info_get_nonlocals(GoalInfo0),
        set.insert_list(NonLocals0, ExtraVars, NonLocals),
        goal_info_set_nonlocals(NonLocals, GoalInfo0, GoalInfo)
    ).

%-----------------------------------------------------------------------------%

    % document me
    %
    % XXX This predicate does not yet handle calls whose arguments include
    % existentially quantified types or type class constraints.
    %
polymorphism_process_new_call(CalleePredInfo, CalleeProcInfo, PredId, ProcId,
        CallArgs0, BuiltinState, MaybeCallUnifyContext, SymName,
        GoalInfo0, Goal, !Info) :-
    poly_info_get_typevarset(!.Info, TVarSet0),
    poly_info_get_var_types(!.Info, VarTypes0),
    ActualArgTypes0 = map.apply_to_list(CallArgs0, VarTypes0),
    pred_info_get_arg_types(CalleePredInfo, PredTVarSet, _PredExistQVars,
        PredArgTypes),
    proc_info_get_headvars(CalleeProcInfo, CalleeHeadVars),
    proc_info_get_rtti_varmaps(CalleeProcInfo, CalleeRttiVarMaps),

    % Work out how many type_info args we need to prepend.
    NCallArgs0 = list.length(ActualArgTypes0),
    NPredArgs  = list.length(PredArgTypes),
    NExtraArgs = NPredArgs - NCallArgs0,
    (
        list.drop(NExtraArgs, PredArgTypes, OrigPredArgTypes0),
        list.take(NExtraArgs, CalleeHeadVars, CalleeExtraHeadVars0)
    ->
        OrigPredArgTypes = OrigPredArgTypes0,
        CalleeExtraHeadVars = CalleeExtraHeadVars0
    ;
        unexpected(this_file,
            "polymorphism_process_new_call: extra args not found")
    ),

    % Work out the bindings of type variables in the call.
    tvarset_merge_renaming(TVarSet0, PredTVarSet, TVarSet,
        PredToParentRenaming),
    apply_variable_renaming_to_type_list(PredToParentRenaming,
        OrigPredArgTypes, OrigParentArgTypes),
    type_list_subsumes_det(OrigParentArgTypes, ActualArgTypes0,
        ParentToActualTSubst),
    poly_info_set_typevarset(TVarSet, !Info),

    % Look up the type variables that the type_infos in the caller are for,
    % and apply the type bindings to calculate the types that the caller
    % should pass type_infos for.
    GetTypeInfoTypes = (pred(ProgVar::in, TypeInfoType::out) is det :-
        rtti_varmaps_var_info(CalleeRttiVarMaps, ProgVar, VarInfo),
        (
            VarInfo = type_info_var(TypeInfoType)
        ;
            VarInfo = typeclass_info_var(_),
            unexpected(this_file,
                "unsupported: constraints on initialisation preds")
        ;
            VarInfo = non_rtti_var,
            unexpected(this_file,
                "missing rtti_var_info for initialisation pred")
        )
    ),
    list.map(GetTypeInfoTypes, CalleeExtraHeadVars, PredTypeInfoTypes),
    apply_variable_renaming_to_type_list(PredToParentRenaming,
        PredTypeInfoTypes, ParentTypeInfoTypes),
    apply_rec_subst_to_type_list(ParentToActualTSubst, ParentTypeInfoTypes,
        ActualTypeInfoTypes),

    % Construct goals to make the required type_infos.
    Ctxt = term.context_init,
    polymorphism_make_type_info_vars(ActualTypeInfoTypes, Ctxt,
        ExtraArgs, ExtraGoals, !Info),
    CallArgs = ExtraArgs ++ CallArgs0,
    NonLocals0 = goal_info_get_nonlocals(GoalInfo0),
    NonLocals1 = set.list_to_set(ExtraArgs),
    NonLocals = set.union(NonLocals0, NonLocals1),
    goal_info_set_nonlocals(NonLocals, GoalInfo0, GoalInfo),
    CallGoalExpr = plain_call(PredId, ProcId, CallArgs, BuiltinState,
        MaybeCallUnifyContext, SymName),
    CallGoal = hlds_goal(CallGoalExpr, GoalInfo),
    conj_list_to_goal(ExtraGoals ++ [CallGoal], GoalInfo, Goal).

%-----------------------------------------------------------------------------%

    % If the pred we are processing is a polymorphic predicate, or contains
    % polymorphically-typed goals, we may need to fix up the quantification
    % (nonlocal variables) of the goal so that it includes the extra type_info
    % variables and typeclass_info variables that we added to the headvars
    % or the arguments of existentially typed predicate calls, function calls
    % and deconstruction unifications.
    %
    % Type(class)-infos for ground types added to predicate calls, function
    % calls and existentially typed construction unifications do not require
    % requantification because they are local to the conjunction containing
    % the type(class)-info construction and the goal which uses the
    % type(class)-info. The nonlocals for those goals are adjusted by
    % the code which creates/alters them.
    %
:- pred fixup_quantification(proc_arg_vector(prog_var)::in,
    existq_tvars::in, hlds_goal::in, hlds_goal::out,
    poly_info::in, poly_info::out) is det.

fixup_quantification(HeadVars, ExistQVars, Goal0, Goal, !Info) :-
    (
        % Optimize common case.
        ExistQVars = [],
        rtti_varmaps_no_tvars(!.Info ^ poly_rtti_varmaps)
    ->
        Goal = Goal0
    ;
        poly_info_get_varset(!.Info, VarSet0),
        poly_info_get_var_types(!.Info, VarTypes0),
        poly_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
        OutsideVars = proc_arg_vector_to_set(HeadVars),
        implicitly_quantify_goal(OutsideVars, _Warnings, Goal0, Goal,
            VarSet0, VarSet, VarTypes0, VarTypes, RttiVarMaps0, RttiVarMaps),
        poly_info_set_varset_and_types(VarSet, VarTypes, !Info),
        poly_info_set_rtti_varmaps(RttiVarMaps, !Info)
    ).

    % If the lambda goal we are processing is polymorphically typed, we may
    % need to fix up the quantification (nonlocal variables) so that it
    % includes the type_info variables and typeclass_info variables for
    % any polymorphically typed variables in the nonlocals set or in the
    % arguments (either the lambda vars or the implicit curried argument
    % variables). Including typeinfos for arguments which are not in the
    % nonlocals set of the goal, i.e. unused arguments, is necessary only
    % if typeinfo_liveness is set, but we do it always, since we don't have
    % the options available here, and the since cost is pretty minimal.
    %
:- pred fixup_lambda_quantification(list(prog_var)::in,
    list(prog_var)::in, existq_tvars::in, hlds_goal::in, hlds_goal::out,
    set(prog_var)::out, poly_info::in, poly_info::out) is det.

fixup_lambda_quantification(ArgVars, LambdaVars, ExistQVars, !Goal,
        NewOutsideVars, !Info) :-
    poly_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
    ( rtti_varmaps_no_tvars(RttiVarMaps0) ->
        set.init(NewOutsideVars)
    ;
        poly_info_get_varset(!.Info, VarSet0),
        poly_info_get_var_types(!.Info, VarTypes0),
        !.Goal = hlds_goal(_, GoalInfo0),
        NonLocals = goal_info_get_nonlocals(GoalInfo0),
        set.insert_list(NonLocals, ArgVars, NonLocalsPlusArgs0),
        set.insert_list(NonLocalsPlusArgs0, LambdaVars, NonLocalsPlusArgs),
        goal_util.extra_nonlocal_typeinfos(RttiVarMaps0, VarTypes0,
            ExistQVars, NonLocalsPlusArgs, NewOutsideVars),
        set.union(NonLocals, NewOutsideVars, OutsideVars),
        implicitly_quantify_goal(OutsideVars, _Warnings, !Goal,
            VarSet0, VarSet, VarTypes0, VarTypes, RttiVarMaps0, RttiVarMaps),
        poly_info_set_varset_and_types(VarSet, VarTypes, !Info),
        poly_info_set_rtti_varmaps(RttiVarMaps, !Info)
    ).

%-----------------------------------------------------------------------------%

    % Given the list of constraints for a called predicate, create a list of
    % variables to hold the typeclass_info for those constraints, and create
    % a list of goals to initialize those typeclass_info variables to the
    % appropriate typeclass_info structures for the constraints.
    %
    % Constraints should be renamed-apart and actual-to-formal substituted
    % constraints. Constraints which are already in the rtti_varmaps are
    % assumed to have already had their typeclass_infos initialized; for them,
    % we just return the variable in the rtti_varmaps.
    %
:- pred make_typeclass_info_vars(list(prog_constraint)::in,
    existq_tvars::in, prog_context::in,
    list(prog_var)::out, list(hlds_goal)::out,
    poly_info::in, poly_info::out) is det.

make_typeclass_info_vars(Constraints, ExistQVars, Context,
        ExtraVars, ExtraGoals, !Info) :-
    % Initialise the accumulators
    RevExtraVars0 = [],
    RevExtraGoals0 = [],
    SeenInstances = [],
    % Do the work.
    make_typeclass_info_vars_2(Constraints, SeenInstances,
        ExistQVars, Context, RevExtraVars0, RevExtraVars,
        RevExtraGoals0, RevExtraGoals, !Info),
    % We build up the vars and goals in reverse order.
    list.reverse(RevExtraVars, ExtraVars),
    list.reverse(RevExtraGoals, ExtraGoals).

    % Accumulator version of the above.
    %
:- pred make_typeclass_info_vars_2(list(prog_constraint)::in,
    list(prog_constraint)::in, existq_tvars::in, prog_context::in,
    list(prog_var)::in, list(prog_var)::out,
    list(hlds_goal)::in, list(hlds_goal)::out,
    poly_info::in, poly_info::out) is det.

make_typeclass_info_vars_2([], _Seen, _ExistQVars,
        _Context, !ExtraVars, !ExtraGoals, !Info).
make_typeclass_info_vars_2([Constraint | Constraints],
        Seen, ExistQVars, Context, !ExtraVars, !ExtraGoals, !Info) :-
    make_typeclass_info_var(Constraint, [Constraint | Seen],
        ExistQVars, Context, !ExtraGoals, !Info, MaybeExtraVar),
    maybe_insert_var(MaybeExtraVar, !ExtraVars),
    make_typeclass_info_vars_2(Constraints, Seen, ExistQVars,
        Context, !ExtraVars, !ExtraGoals, !Info).

:- pred make_typeclass_info_var(prog_constraint::in,
    list(prog_constraint)::in, existq_tvars::in, prog_context::in,
    list(hlds_goal)::in, list(hlds_goal)::out,
    poly_info::in, poly_info::out, maybe(prog_var)::out) is det.

make_typeclass_info_var(Constraint, Seen, ExistQVars,
        Context, !ExtraGoals, !Info, MaybeVar) :-
    (
        rtti_search_typeclass_info_var(!.Info ^ poly_rtti_varmaps, Constraint,
            Var)
    ->
        % We already have a typeclass_info for this constraint, either from
        % a parameter to the pred or from an existentially quantified goal
        % that we have already processed.
        MaybeVar = yes(Var)
    ;
        % We don't have the typeclass_info, we must either have a proof that
        % tells us how to make it, or it will be produced by an existentially
        % typed goal that we will process later on.
        map.search(!.Info ^ poly_proof_map, Constraint, Proof)
    ->
        make_typeclass_info_from_proof(Constraint, Seen, Proof, ExistQVars,
            Context, MaybeVar, !ExtraGoals, !Info)
    ;
        make_typeclass_info_head_var(do_record_type_info_locns, Constraint,
            NewVar, !Info),
        poly_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
        rtti_reuse_typeclass_info_var(NewVar, RttiVarMaps0, RttiVarMaps),
        poly_info_set_rtti_varmaps(RttiVarMaps, !Info),
        MaybeVar = yes(NewVar)
    ).

:- pred make_typeclass_info_from_proof(prog_constraint::in,
    list(prog_constraint)::in, constraint_proof::in, existq_tvars::in,
    prog_context::in, maybe(prog_var)::out,
    list(hlds_goal)::in, list(hlds_goal)::out,
    poly_info::in, poly_info::out) is det.

make_typeclass_info_from_proof(Constraint, Seen, Proof,
        ExistQVars, Context, MaybeVar, !ExtraGoals, !Info) :-
    Constraint = constraint(ClassName, ConstrainedTypes),
    list.length(ConstrainedTypes, ClassArity),
    ClassId = class_id(ClassName, ClassArity),
    (
        % We have to construct the typeclass_info using an instance
        % declaration.
        Proof = apply_instance(InstanceNum),
        make_typeclass_info_from_instance(Constraint, Seen, ClassId,
            InstanceNum, ExistQVars, Context, MaybeVar, !ExtraGoals, !Info)
    ;
        % XXX MR_Dictionary should have MR_Dictionaries for superclass
        % We have to extract the typeclass_info from another one.
        Proof = superclass(SubClassConstraint),
        make_typeclass_info_from_subclass(Constraint, Seen, ClassId,
            SubClassConstraint, ExistQVars, Context, MaybeVar,
            !ExtraGoals, !Info)
    ).

:- pred make_typeclass_info_from_instance(prog_constraint::in,
    list(prog_constraint)::in, class_id::in, int::in, existq_tvars::in,
    prog_context::in, maybe(prog_var)::out,
    list(hlds_goal)::in, list(hlds_goal)::out,
    poly_info::in, poly_info::out) is det.

make_typeclass_info_from_instance(Constraint, Seen, ClassId, InstanceNum,
        ExistQVars, Context, MaybeVar, !ExtraGoals, !Info) :-
    Constraint = constraint(_ClassName, ConstrainedTypes),
    TypeVarSet = !.Info ^ poly_typevarset,
    Proofs0 = !.Info ^ poly_proof_map,
    ModuleInfo = !.Info ^ poly_module_info,

    module_info_get_instance_table(ModuleInfo, InstanceTable),
    map.lookup(InstanceTable, ClassId, InstanceList),
    list.index1_det(InstanceList, InstanceNum, ProofInstanceDefn),

    ProofInstanceDefn = hlds_instance_defn(_, _, _, InstanceConstraints,
        InstanceTypes, _, _, InstanceTVarset, InstanceProofs),

    % XXX kind inference:
    % we assume all tvars have kind `star'.
    map.init(KindMap),

    type_vars_list(InstanceTypes, InstanceTvars),
    get_unconstrained_tvars(InstanceTvars, InstanceConstraints,
        UnconstrainedTvars),

    % We can ignore the new typevarset because all the type variables in the
    % instance constraints and superclass proofs must appear in the arguments
    % of the instance, and all such variables are bound when we call
    % type_list_subsumes then apply the resulting bindings.
    tvarset_merge_renaming(TypeVarSet, InstanceTVarset, _NewTVarset, Renaming),
    apply_variable_renaming_to_type_list(Renaming, InstanceTypes,
        RenamedInstanceTypes),
    type_list_subsumes_det(RenamedInstanceTypes, ConstrainedTypes,
        InstanceSubst),
    apply_variable_renaming_to_prog_constraint_list(Renaming,
        InstanceConstraints, RenamedInstanceConstraints),
    apply_rec_subst_to_prog_constraint_list(InstanceSubst,
        RenamedInstanceConstraints, ActualInstanceConstraints0),
    % XXX document diamond as guess
    % XXX does anyone know what the preceding line means?
    ActualInstanceConstraints =
        ActualInstanceConstraints0 `list.delete_elems` Seen,
    apply_variable_renaming_to_constraint_proofs(Renaming,
        InstanceProofs, RenamedInstanceProofs),
    apply_rec_subst_to_constraint_proofs(InstanceSubst,
        RenamedInstanceProofs, ActualInstanceProofs),

    apply_variable_renaming_to_tvar_list(Renaming, UnconstrainedTvars,
        RenamedUnconstrainedTvars),
    apply_variable_renaming_to_tvar_kind_map(Renaming, KindMap,
        RenamedKindMap),
    apply_rec_subst_to_tvar_list(RenamedKindMap, InstanceSubst,
        RenamedUnconstrainedTvars, ActualUnconstrainedTypes),

    map.overlay(Proofs0, ActualInstanceProofs, Proofs),

    % Make the type_infos for the types that are constrained by this.
    % These are packaged in the typeclass_info.
    polymorphism_make_type_info_vars(ConstrainedTypes, Context,
        InstanceExtraTypeInfoVars, TypeInfoGoals, !Info),

    % Make the typeclass_infos for the constraints from the context of the
    % instance decl.
    make_typeclass_info_vars_2(ActualInstanceConstraints, Seen, ExistQVars,
        Context, [], InstanceExtraTypeClassInfoVars0, !ExtraGoals, !Info),

    % Make the type_infos for the unconstrained type variables from the head
    % of the instance declaration.
    polymorphism_make_type_info_vars(ActualUnconstrainedTypes, Context,
        InstanceExtraTypeInfoUnconstrainedVars, UnconstrainedTypeInfoGoals,
        !Info),

    % The variables are built up in reverse order.
    list.reverse(InstanceExtraTypeClassInfoVars0,
        InstanceExtraTypeClassInfoVars),

    construct_typeclass_info(InstanceExtraTypeInfoUnconstrainedVars,
        InstanceExtraTypeInfoVars, InstanceExtraTypeClassInfoVars,
        ClassId, Constraint, InstanceNum, ConstrainedTypes,
        Proofs, ExistQVars, Var, NewGoals, !Info),

    MaybeVar = yes(Var),

    % Oh, yuck. The type_info goals have already been reversed, so lets
    % reverse them back.
    list.reverse(TypeInfoGoals, RevTypeInfoGoals),
    list.reverse(UnconstrainedTypeInfoGoals,
        RevUnconstrainedTypeInfoGoals),

    list.condense([RevUnconstrainedTypeInfoGoals, NewGoals,
        !.ExtraGoals, RevTypeInfoGoals], !:ExtraGoals).

:- pred make_typeclass_info_from_subclass(prog_constraint::in,
    list(prog_constraint)::in, class_id::in, prog_constraint::in,
    existq_tvars::in, prog_context::in, maybe(prog_var)::out,
    list(hlds_goal)::in, list(hlds_goal)::out,
    poly_info::in, poly_info::out) is det.

make_typeclass_info_from_subclass(Constraint, Seen, ClassId,
        SubClassConstraint, ExistQVars, Context, MaybeVar,
        !ExtraGoals, !Info) :-
    ClassId = class_id(ClassName, _ClassArity),
    % First create a variable to hold the new typeclass_info.
    ClassNameString = unqualify_name(ClassName),
    new_typeclass_info_var(Constraint, ClassNameString, Var, !Info),
    MaybeVar = yes(Var),
    % Then work out where to extract it from.
    SubClassConstraint = constraint(SubClassName, SubClassTypes),
    list.length(SubClassTypes, SubClassArity),
    SubClassId = class_id(SubClassName, SubClassArity),

    % Make the typeclass_info for the subclass.
    make_typeclass_info_var(SubClassConstraint, Seen, ExistQVars, Context,
        !ExtraGoals, !Info, MaybeSubClassVar),
    (
        MaybeSubClassVar = yes(SubClassVar0),
        SubClassVar = SubClassVar0
    ;
        MaybeSubClassVar = no,
        unexpected(this_file, "MaybeSubClassVar = no")
    ),

    % Look up the definition of the subclass.
    poly_info_get_module_info(!.Info, ModuleInfo),
    module_info_get_class_table(ModuleInfo, ClassTable),
    map.lookup(ClassTable, SubClassId, SubClassDefn),

    % Work out which superclass typeclass_info to take.
    map.from_corresponding_lists(SubClassDefn ^ class_vars, SubClassTypes,
        SubTypeSubst),
    apply_subst_to_prog_constraint_list(SubTypeSubst,
        SubClassDefn ^ class_supers, SuperClasses),
    ( list.nth_member_search(SuperClasses, Constraint, SuperClassIndex0) ->
        SuperClassIndex0 = SuperClassIndex
    ;
        % We shouldn't have got this far if the constraints were not satisfied.
        unexpected(this_file, "constraint not in constraint list")
    ),

    poly_info_get_varset(!.Info, VarSet0),
    poly_info_get_var_types(!.Info, VarTypes0),
    make_int_const_construction_alloc(SuperClassIndex, yes("SuperClassIndex"),
        IndexGoal, IndexVar, VarSet0, VarSet, VarTypes0, VarTypes),
    poly_info_set_varset_and_types(VarSet, VarTypes, !Info),

    % We extract the superclass typeclass_info by inserting a call
    % to superclass_from_typeclass_info in private_builtin.
    goal_util.generate_simple_call(mercury_private_builtin_module,
        "superclass_from_typeclass_info", pf_predicate, only_mode,
        detism_det, purity_pure, [SubClassVar, IndexVar, Var], [], [],
        ModuleInfo, term.context_init, SuperClassGoal),
    !:ExtraGoals = [SuperClassGoal, IndexGoal | !.ExtraGoals].

:- pred construct_typeclass_info(list(prog_var)::in, list(prog_var)::in,
    list(prog_var)::in, class_id::in, prog_constraint::in, int::in,
    list(mer_type)::in, constraint_proof_map::in, existq_tvars::in,
    prog_var::out, list(hlds_goal)::out, poly_info::in, poly_info::out) is det.

construct_typeclass_info(ArgUnconstrainedTypeInfoVars, ArgTypeInfoVars,
        ArgTypeClassInfoVars, ClassId, Constraint, InstanceNum, InstanceTypes,
        SuperClassProofs, ExistQVars, NewVar, NewGoals, !Info) :-

    poly_info_get_module_info(!.Info, ModuleInfo),

    module_info_get_class_table(ModuleInfo, ClassTable),
    map.lookup(ClassTable, ClassId, ClassDefn),

    get_arg_superclass_vars(ClassDefn, InstanceTypes, SuperClassProofs,
        ExistQVars, ArgSuperClassVars, SuperClassGoals, !Info),

    % Lay out the argument variables as expected in the typeclass_info.
    list.append(ArgTypeClassInfoVars, ArgSuperClassVars, ArgVars0),
    list.append(ArgVars0, ArgTypeInfoVars, ArgVars1),
    list.append(ArgUnconstrainedTypeInfoVars, ArgVars1, ArgVars),

    ClassId = class_id(ClassName, _Arity),

    ClassNameString = unqualify_name(ClassName),
    new_typeclass_info_var(Constraint, ClassNameString, BaseVar, !Info),

    module_info_get_instance_table(ModuleInfo, InstanceTable),
    map.lookup(InstanceTable, ClassId, InstanceList),
    list.index1_det(InstanceList, InstanceNum, InstanceDefn),
    InstanceModuleName = InstanceDefn ^ instance_module,
    make_instance_string(InstanceTypes, InstanceString),
    ConsId = base_typeclass_info_const(InstanceModuleName, ClassId,
        InstanceNum, InstanceString),
    BaseTypeClassInfoTerm = rhs_functor(ConsId, no, []),

    % Create the construction unification to initialize the variable.
    BaseUnification = construct(BaseVar, ConsId, [], [],
        construct_dynamically, cell_is_shared, no_construct_sub_info),
    BaseUnifyMode = (free -> ground(shared, none)) -
        (ground(shared, none) -> ground(shared, none)),
    BaseUnifyContext = unify_context(umc_explicit, []),
    % XXX The UnifyContext is wrong.
    BaseUnify = unify(BaseVar, BaseTypeClassInfoTerm, BaseUnifyMode,
        BaseUnification, BaseUnifyContext),

    % Create a goal_info for the unification.
    set.list_to_set([BaseVar], NonLocals),
    instmap_delta_from_assoc_list([BaseVar - ground(shared, none)],
        InstmapDelta),
    goal_info_init(NonLocals, InstmapDelta, detism_det, purity_pure,
        BaseGoalInfo),

    BaseGoal = hlds_goal(BaseUnify, BaseGoalInfo),

    % Build a unification to add the argvars to the base_typeclass_info.
    NewConsId = typeclass_info_cell_constructor,
    NewArgVars = [BaseVar | ArgVars],
    TypeClassInfoTerm = rhs_functor(NewConsId, no, NewArgVars),

    new_typeclass_info_var(Constraint, ClassNameString, NewVar, !Info),

    % Create the construction unification to initialize the variable.
    UniMode = (free - ground(shared, none) ->
        ground(shared, none) - ground(shared, none)),
    list.length(NewArgVars, NumArgVars),
    list.duplicate(NumArgVars, UniMode, UniModes),
    Unification = construct(NewVar, NewConsId, NewArgVars, UniModes,
        construct_dynamically, cell_is_unique, no_construct_sub_info),
    UnifyMode = (free -> ground(shared, none)) -
        (ground(shared, none) -> ground(shared, none)),
    UnifyContext = unify_context(umc_explicit, []),
    % XXX The UnifyContext is wrong.
    Unify = unify(NewVar, TypeClassInfoTerm, UnifyMode, Unification,
        UnifyContext),

    % Create a goal_info for the unification.
    goal_info_init(GoalInfo0),
    set.list_to_set([NewVar | NewArgVars], TheNonLocals),
    goal_info_set_nonlocals(TheNonLocals, GoalInfo0, GoalInfo1),
    list.duplicate(NumArgVars, ground(shared, none), ArgInsts),
    % Note that we could perhaps be more accurate than `ground(shared)',
    % but it shouldn't make any difference.
    InstConsId = cell_inst_cons_id(typeclass_info_cell, NumArgVars),
    instmap_delta_from_assoc_list(
        [NewVar - bound(unique, [bound_functor(InstConsId, ArgInsts)])],
        InstMapDelta),
    goal_info_set_instmap_delta(InstMapDelta, GoalInfo1, GoalInfo2),
    goal_info_set_determinism(detism_det, GoalInfo2, GoalInfo),

    TypeClassInfoGoal = hlds_goal(Unify, GoalInfo),
    NewGoals0 = [TypeClassInfoGoal, BaseGoal],
    list.append(NewGoals0, SuperClassGoals, NewGoals).

%---------------------------------------------------------------------------%

:- pred get_arg_superclass_vars(hlds_class_defn::in, list(mer_type)::in,
    constraint_proof_map::in, existq_tvars::in, list(prog_var)::out,
    list(hlds_goal)::out, poly_info::in, poly_info::out) is det.

get_arg_superclass_vars(ClassDefn, InstanceTypes, SuperClassProofs, ExistQVars,
        NewVars, NewGoals, !Info) :-
    poly_info_get_proofs(!.Info, Proofs),

    poly_info_get_typevarset(!.Info, TVarSet0),
    SuperClasses0 = ClassDefn ^ class_supers,
    ClassVars0 = ClassDefn ^ class_vars,
    ClassTVarSet = ClassDefn ^ class_tvarset,
    tvarset_merge_renaming(TVarSet0, ClassTVarSet, TVarSet1, Renaming),
    poly_info_set_typevarset(TVarSet1, !Info),

    apply_variable_renaming_to_tvar_list(Renaming, ClassVars0, ClassVars),
    map.from_corresponding_lists(ClassVars, InstanceTypes, TypeSubst),

    apply_variable_renaming_to_prog_constraint_list(Renaming,
        SuperClasses0, SuperClasses1),
    apply_rec_subst_to_prog_constraint_list(TypeSubst, SuperClasses1,
        SuperClasses),

    poly_info_set_proofs(SuperClassProofs, !Info),
    make_superclasses_from_proofs(SuperClasses, ExistQVars, [], NewGoals,
        !Info, [], NewVars),

    poly_info_set_proofs(Proofs, !Info).

:- pred make_superclasses_from_proofs(list(prog_constraint)::in,
    existq_tvars::in, list(hlds_goal)::in, list(hlds_goal)::out,
    poly_info::in, poly_info::out, list(prog_var)::in, list(prog_var)::out)
    is det.

make_superclasses_from_proofs([], _, !Goals, !Info, !Vars).
make_superclasses_from_proofs([Constraint | Constraints], ExistQVars,
        !Goals, !Info, !Vars) :-
    make_superclasses_from_proofs(Constraints, ExistQVars,
        !Goals, !Info, !Vars),
    term.context_init(Context),
    make_typeclass_info_var(Constraint, [], ExistQVars, Context,
        !Goals, !Info, MaybeVar),
    maybe_insert_var(MaybeVar, !Vars).

:- pred maybe_insert_var(maybe(prog_var)::in, list(prog_var)::in,
    list(prog_var)::out) is det.

maybe_insert_var(no, Vars, Vars).
maybe_insert_var(yes(Var), Vars, [Var | Vars]).

%-----------------------------------------------------------------------------%

    % Produce the typeclass_infos for the existential class constraints
    % for a call or deconstruction unification.
    %
:- pred make_existq_typeclass_info_vars(
    list(prog_constraint)::in, list(prog_var)::out, list(hlds_goal)::out,
    poly_info::in, poly_info::out) is det.

make_existq_typeclass_info_vars(ExistentialConstraints, ExtraTypeClassVars,
        ExtraGoals, !Info) :-
    poly_info_get_rtti_varmaps(!.Info, OldRttiVarMaps),
    make_typeclass_info_head_vars(do_record_type_info_locns,
        ExistentialConstraints, ExtraTypeClassVars, !Info),
    poly_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
    list.foldl(rtti_reuse_typeclass_info_var, ExtraTypeClassVars,
        RttiVarMaps0, RttiVarMaps),
    poly_info_set_rtti_varmaps(RttiVarMaps, !Info),

    constraint_list_get_tvars(ExistentialConstraints, TVars0),
    list.sort_and_remove_dups(TVars0, TVars),
    list.foldl2(polymorphism_maybe_extract_type_info(OldRttiVarMaps), TVars,
        [], ExtraGoals, !Info).

    % For code which requires mode reordering, we may have already seen uses
    % of some of the type variables produced by this call. At the point of the
    % use of a type variable that we haven't seen before, we assume that it is
    % unconstrained. If it turns out that the type variable is constrained,
    % and the type_info is contained in a typeclass_info, we need to generate
    % code to extract it here.
    %
:- pred polymorphism_maybe_extract_type_info(rtti_varmaps::in, tvar::in,
    list(hlds_goal)::in, list(hlds_goal)::out, poly_info::in, poly_info::out)
    is det.

polymorphism_maybe_extract_type_info(OldRttiVarMaps, TVar, !ExtraGoals,
        !Info) :-
    poly_info_get_rtti_varmaps(!.Info, RttiVarMaps),
    (
        rtti_search_type_info_locn(OldRttiVarMaps, TVar,
            type_info(TypeInfoVar0)),
        rtti_search_type_info_locn(RttiVarMaps, TVar,
            typeclass_info(TypeClassInfoVar, Index))
    ->
        polymorphism_extract_type_info(TVar, TypeClassInfoVar, Index, NewGoals,
            TypeInfoVar1, !Info),
        assign_var(TypeInfoVar0, TypeInfoVar1, AssignGoal),
        !:ExtraGoals = NewGoals ++ [AssignGoal | !.ExtraGoals]
    ;
        true
    ).

%---------------------------------------------------------------------------%

polymorphism_make_type_info_vars([], _, [], [], !Info).
polymorphism_make_type_info_vars([Type | Types], Context,
        ExtraVars, ExtraGoals, !Info) :-
    polymorphism_make_type_info_var(Type, Context, Var, ExtraGoals1, !Info),
    polymorphism_make_type_info_vars(Types, Context, ExtraVars2, ExtraGoals2,
        !Info),
    ExtraVars = [Var | ExtraVars2],
    ExtraGoals = ExtraGoals1 ++ ExtraGoals2.

polymorphism_make_type_info_var(Type, Context, Var, ExtraGoals, !Info) :-
    % First handle statically known types (i.e. types which are not
    % type variables).
    ( type_has_variable_arity_ctor(Type, TypeCtor, TypeArgs) ->
        % This occurs for code where a predicate calls a polymorphic predicate
        % with a type whose type constructor is of variable arity. The
        % transformation we perform is basically the same as in the usual case
        % below, except that we map pred types to pred/0, func types to func/0
        % and tuple types to tuple/0 for the purposes of creating type_infos.
        % To allow univ_to_type to check the type_infos correctly, the actual
        % arity is added to the type_info we create.
        %
        % XXX FIXME (RTTI for higher order impure code)
        % we should not ignore the purity of higher order procs;
        % it should get included in the RTTI.
        polymorphism_construct_type_info(Type, TypeCtor, TypeArgs, yes,
            Context, Var, ExtraGoals, !Info)
    ;
        (
            ( Type = defined_type(_, _, _)
            ; Type = builtin_type(_)
            ; Type = tuple_type(_, _)
            ; Type = higher_order_type(_,_, _, _)
            ; Type = apply_n_type(_, _, _)
            ; Type = kinded_type(_, _)
            ),
            type_to_ctor_and_args_det(Type, TypeCtor, TypeArgs),
            % This occurs for code where a predicate calls a polymorphic
            % predicate with a known value of the type variable. The
            % transformation we perform is shown in the comment at the top
            % of the module.
            polymorphism_construct_type_info(Type, TypeCtor, TypeArgs, no,
                Context, Var, ExtraGoals, !Info)
        ;
            % Now handle the cases of types which are not known statically
            % (i.e. type variables)
            Type = type_variable(TypeVar, _),
            get_type_info_locn(TypeVar, TypeInfoLocn, !Info),
            get_type_info(TypeInfoLocn, TypeVar, ExtraGoals, Var, !Info)
        )
    ).

:- pred get_type_info_locn(tvar::in, type_info_locn::out, poly_info::in,
    poly_info::out) is det.

get_type_info_locn(TypeVar, TypeInfoLocn, !Info) :-
    % If we have already allocated a location for this type_info, then all
    % we need to do is to extract the type_info variable from its location.
    (
        rtti_search_type_info_locn(!.Info ^ poly_rtti_varmaps, TypeVar,
            TypeInfoLocnPrime)
    ->
        TypeInfoLocn = TypeInfoLocnPrime
    ;
        % Otherwise, we need to create a new type_info variable, and set the
        % location for this type variable to be that type_info variable.
        %
        % This is wrong if the type variable is one of the existentially
        % quantified variables of a called predicate and the variable occurs
        % in an existential typeclass constraint. In that case the type_info
        % will be stored in the typeclass_info variable produced by the
        % predicate, not in a type_info variable. maybe_extract_type_info
        % will fix this up when the typeclass_info is created.

        get_tvar_kind(!.Info ^ poly_tvar_kinds, TypeVar, Kind),
        Type = type_variable(TypeVar, Kind),
        new_type_info_var(Type, type_info, Var, !Info),
        TypeInfoLocn = type_info(Var),
        poly_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
        rtti_det_insert_type_info_locn(TypeVar, TypeInfoLocn,
            RttiVarMaps0, RttiVarMaps),
        poly_info_set_rtti_varmaps(RttiVarMaps, !Info)
    ).

:- pred polymorphism_construct_type_info(mer_type::in, type_ctor::in,
    list(mer_type)::in, bool::in, prog_context::in, prog_var::out,
    list(hlds_goal)::out, poly_info::in, poly_info::out) is det.

polymorphism_construct_type_info(Type, TypeCtor, TypeArgs, TypeCtorIsVarArity,
        Context, Var, ExtraGoals, !Info) :-
    % Create the typeinfo vars for the arguments.
    polymorphism_make_type_info_vars(TypeArgs, Context,
        ArgTypeInfoVars, ArgTypeInfoGoals, !Info),

    poly_info_get_varset(!.Info, VarSet0),
    poly_info_get_var_types(!.Info, VarTypes0),
    poly_info_get_module_info(!.Info, ModuleInfo),
    poly_info_get_rtti_varmaps(!.Info, RttiVarMaps0),

    init_const_type_ctor_info_var(Type, TypeCtor, TypeCtorVar, TypeCtorGoal,
        ModuleInfo, VarSet0, VarSet1, VarTypes0, VarTypes1,
        RttiVarMaps0, RttiVarMaps1),
    maybe_init_second_cell(Type, TypeCtorVar, TypeCtorIsVarArity,
        ArgTypeInfoVars, Context, Var, VarSet1, VarSet, VarTypes1, VarTypes,
        RttiVarMaps1, RttiVarMaps, ArgTypeInfoGoals, [TypeCtorGoal],
        ExtraGoals),

    poly_info_set_varset_and_types(VarSet, VarTypes, !Info),
    poly_info_set_rtti_varmaps(RttiVarMaps, !Info).

    % maybe_init_second_cell(Type, TypeCtorVar, TypeCtorIsVarArity,
    %   ArgTypeInfoVars, Context, Var, VarSet0, VarSet,
    %   VarTypes0, VarTypes, ArgTypeInfoGoals, ExtraGoals0, ExtraGoals):
    %
    % Create a unification the constructs the second cell of a type_info
    % for Type if necessary. This cell will usually be of the form:
    %
    %   TypeInfoVar = type_info(TypeCtorVar, ArgTypeInfoVars...)
    %
    % However, if TypeCtorIsVarArity is true, then it will be of the form
    %
    %   TypeInfoVar = type_info(TypeCtorVar, Arity, ArgTypeInfoVars...)
    %
    % TypeCtorVar should be the variable holding the type_ctor_info for the
    % principal type constructor of Type, and TypeCtorIsVarArity should be
    % true iff the type constructor it represents has a variable arity.
    %
    % ArgTypeInfoVars should be variables holding the type_infos (or
    % type_ctor_infos for zero-arity types) of the argument types of Type.
    %
    % The returned Var will be bound to the type_info cell of Type if such
    % a cell had to be allocated, and to the type_ctor_info of Type's only
    % type constructor if it didn't. The returned ExtraGoals is a
    % concatenation of ArgTypeInfoGoals, ExtraGoals0, and any goals needed
    % to construct Var.
    %
:- pred maybe_init_second_cell(mer_type::in, prog_var::in,
    bool::in, list(prog_var)::in, prog_context::in, prog_var::out,
    prog_varset::in, prog_varset::out,
    vartypes::in, vartypes::out,
    rtti_varmaps::in, rtti_varmaps::out,
    list(hlds_goal)::in, list(hlds_goal)::in, list(hlds_goal)::out) is det.

maybe_init_second_cell(Type, TypeCtorVar, TypeCtorIsVarArity, ArgTypeInfoVars,
        _Context, Var, !VarSet, !VarTypes, !RttiVarMaps, ArgTypeInfoGoals,
        ExtraGoals0, ExtraGoals) :-
    (
        TypeCtorIsVarArity = yes,
        % Unfortunately, if the type's type constructor has variable arity,
        % we cannot use a one-cell representation for that type.
        list.length(ArgTypeInfoVars, ActualArity),
        make_int_const_construction_alloc(ActualArity, yes("ActualArity"),
            ArityGoal, ArityVar, !VarSet, !VarTypes),
        init_type_info_var(Type, [TypeCtorVar, ArityVar | ArgTypeInfoVars],
            no, Var, TypeInfoGoal, !VarSet, !VarTypes, !RttiVarMaps),
        ExtraGoals = ExtraGoals0 ++ [ArityGoal |  ArgTypeInfoGoals]
            ++ [TypeInfoGoal]
    ;
        TypeCtorIsVarArity = no,
        (
            ArgTypeInfoVars = [_ | _],
            init_type_info_var(Type, [TypeCtorVar | ArgTypeInfoVars], no, Var,
                TypeInfoGoal, !VarSet, !VarTypes, !RttiVarMaps),
            ExtraGoals = ExtraGoals0 ++ ArgTypeInfoGoals ++ [TypeInfoGoal]
        ;
            ArgTypeInfoVars = [],
            % Since this type_ctor_info is pretending to be a type_info,
            % we need to adjust its type. Since type_ctor_info_const cons_ids
            % are handled specially, this should not cause problems.
            TypeInfoType = type_info_type,
            map.det_update(!.VarTypes, TypeCtorVar, TypeInfoType, !:VarTypes),
            Var = TypeCtorVar,
            list.append(ArgTypeInfoGoals, ExtraGoals0, ExtraGoals)

            % The type_info to represent Type is just a type_ctor_info. We used
            % to simply change the type of TypeCtorVar from type_ctor_info to
            % type_info, but that would confuse size_prof.m. We cannot leave
            % its type as it is without extending type_util.type_unify to
            % consider type_ctor_info and type_info interchangeable.
            % We therefore create a new variable of type type_info,
            % and cast TypeCtorVar to it.
            %
            % new_type_info_var_raw(Type, type_info, Var, !VarSet, !VarTypes),
            % generate_unsafe_cast(TypeCtorVar, Var, Context, CastGoal),
            % list.append(ArgTypeInfoGoals, [CastGoal], ExtraGoals1),
            % list.append(ExtraGoals0, ExtraGoals1, ExtraGoals)
        )
    ).

get_special_proc(Type, SpecialPredId, ModuleInfo, PredName, PredId, ProcId) :-
    TypeCategory = classify_type(ModuleInfo, Type),
    get_category_name(TypeCategory) = MaybeCategoryName,
    (
        MaybeCategoryName = no,
        module_info_get_special_pred_map(ModuleInfo, SpecialPredMap),
        ( type_to_ctor_and_args(Type, TypeCtor, _TypeArgs) ->
            map.search(SpecialPredMap, SpecialPredId - TypeCtor, PredId)
        ;
            unexpected(this_file,
                "get_special_proc: type_to_ctor_and_args failed")
        ),
        module_info_pred_info(ModuleInfo, PredId, PredInfo),
        Module = pred_info_module(PredInfo),
        Name = pred_info_name(PredInfo),
        PredName = qualified(Module, Name),
        special_pred_mode_num(SpecialPredId, ProcInt),
        proc_id_to_int(ProcId, ProcInt)
    ;
        MaybeCategoryName = yes(CategoryName),
        special_pred_name_arity(SpecialPredId, SpecialName, _, Arity),
        Name = "builtin_" ++ SpecialName ++ "_" ++ CategoryName,
        lookup_builtin_pred_proc_id(ModuleInfo, mercury_private_builtin_module,
            Name, pf_predicate, Arity, only_mode, PredId, ProcId),
        PredName = qualified(mercury_private_builtin_module, Name)
    ).

get_special_proc_det(Type, SpecialPredId, ModuleInfo, PredName,
        PredId, ProcId) :-
    (
        get_special_proc(Type, SpecialPredId, ModuleInfo,
            PredNamePrime, PredIdPrime, ProcIdPrime)
    ->
        PredName = PredNamePrime,
        PredId = PredIdPrime,
        ProcId = ProcIdPrime
    ;
        unexpected(this_file, "get_special_proc_det: get_special_proc failed")
    ).

:- func get_category_name(type_ctor_category) = maybe(string).

get_category_name(CtorCat) = MaybeName :-
    (
        ( CtorCat = ctor_cat_builtin(cat_builtin_int)
        ; CtorCat = ctor_cat_builtin(cat_builtin_char)
        ),
        MaybeName = yes("int")
    ;
        CtorCat = ctor_cat_builtin(cat_builtin_float),
        MaybeName = yes("float")
    ;
        CtorCat = ctor_cat_builtin(cat_builtin_string),
        MaybeName = yes("string")
    ;
        CtorCat = ctor_cat_higher_order,
        MaybeName = yes("pred")
    ;
        CtorCat = ctor_cat_tuple,
        MaybeName = yes("tuple")
    ;
        ( CtorCat = ctor_cat_enum(_)
        ; CtorCat = ctor_cat_builtin_dummy
        ; CtorCat = ctor_cat_user(_)
        ; CtorCat = ctor_cat_system(_)
        ),
        MaybeName = no
    ;
        CtorCat = ctor_cat_variable,
        unexpected(this_file, "get_category_name: variable type")
    ;
        CtorCat = ctor_cat_void,
        unexpected(this_file, "get_category_name: void_type")
    ).

init_type_info_var(Type, ArgVars, MaybePreferredVar, TypeInfoVar, TypeInfoGoal,
        !VarSet, !VarTypes, !RttiVarMaps) :-
    ( type_to_ctor_and_args(Type, Ctor, _) ->
        Cell = type_info_cell(Ctor)
    ;
        unexpected(this_file,
            "init_type_info_var: type_to_ctor_and_args failed")
    ),
    ConsId = cell_cons_id(Cell),
    TypeInfoTerm = rhs_functor(ConsId, no, ArgVars),
    % Introduce a new variable.
    (
        MaybePreferredVar = yes(TypeInfoVar)
    ;
        MaybePreferredVar = no,
        new_type_info_var_raw(Type, type_info,
            TypeInfoVar, !VarSet, !VarTypes, !RttiVarMaps)
    ),

    % Create the construction unification to initialize the variable.
    UniMode = (free - ground(shared, none) ->
        ground(shared, none) - ground(shared, none)),
    list.length(ArgVars, NumArgVars),
    list.duplicate(NumArgVars, UniMode, UniModes),
    Unification = construct(TypeInfoVar, ConsId, ArgVars, UniModes,
        construct_dynamically, cell_is_unique, no_construct_sub_info),
    UnifyMode = (free -> ground(shared, none)) -
        (ground(shared, none) -> ground(shared, none)),
    UnifyContext = unify_context(umc_explicit, []),
    % XXX The UnifyContext is wrong.
    Unify = unify(TypeInfoVar, TypeInfoTerm, UnifyMode, Unification,
        UnifyContext),

    % Create a goal_info for the unification.
    set.list_to_set([TypeInfoVar | ArgVars], NonLocals),
    list.duplicate(NumArgVars, ground(shared, none), ArgInsts),
    % note that we could perhaps be more accurate than `ground(shared)',
    % but it shouldn't make any difference.
    InstConsId = cell_inst_cons_id(Cell, NumArgVars),
    instmap_delta_from_assoc_list(
        [TypeInfoVar - bound(unique, [bound_functor(InstConsId, ArgInsts)])],
        InstMapDelta),
    goal_info_init(NonLocals, InstMapDelta, detism_det, purity_pure, GoalInfo),
    TypeInfoGoal = hlds_goal(Unify, GoalInfo).

init_const_type_ctor_info_var(Type, TypeCtor, TypeCtorInfoVar,
        TypeCtorInfoGoal, ModuleInfo, !VarSet, !VarTypes, !RttiVarMaps) :-
    ModuleName = type_util.type_ctor_module(ModuleInfo, TypeCtor),
    TypeName = type_util.type_ctor_name(ModuleInfo, TypeCtor),
    TypeCtor = type_ctor(_, Arity),
    ConsId = type_ctor_info_const(ModuleName, TypeName, Arity),
    TypeInfoTerm = rhs_functor(ConsId, no, []),

    % Introduce a new variable.
    new_type_info_var_raw(Type, type_ctor_info, TypeCtorInfoVar,
        !VarSet, !VarTypes, !RttiVarMaps),

    % Create the construction unification to initialize the variable.
    Unification = construct(TypeCtorInfoVar, ConsId, [], [],
        construct_dynamically, cell_is_shared, no_construct_sub_info),
    UnifyMode = (free -> ground(shared, none)) -
        (ground(shared, none) -> ground(shared, none)),
    UnifyContext = unify_context(umc_explicit, []),
    % XXX The UnifyContext is wrong.
    Unify = unify(TypeCtorInfoVar, TypeInfoTerm, UnifyMode,
        Unification, UnifyContext),

    % Create a goal_info for the unification.
    set.list_to_set([TypeCtorInfoVar], NonLocals),
    instmap_delta_from_assoc_list([TypeCtorInfoVar - ground(shared, none)],
        InstmapDelta),
    goal_info_init(NonLocals, InstmapDelta, detism_det, purity_pure, GoalInfo),
    TypeCtorInfoGoal = hlds_goal(Unify, GoalInfo).

%---------------------------------------------------------------------------%

:- pred make_head_vars(list(tvar)::in, tvarset::in,
    list(prog_var)::out, poly_info::in, poly_info::out) is det.

make_head_vars([], _, [], !Info).
make_head_vars([TypeVar | TypeVars], TypeVarSet, TypeInfoVars, !Info) :-
    get_tvar_kind(!.Info ^ poly_tvar_kinds, TypeVar, Kind),
    Type = type_variable(TypeVar, Kind),
    new_type_info_var(Type, type_info, Var, !Info),
    ( varset.search_name(TypeVarSet, TypeVar, TypeVarName) ->
        poly_info_get_varset(!.Info, VarSet0),
        string.append("TypeInfo_for_", TypeVarName, VarName),
        varset.name_var(VarSet0, Var, VarName, VarSet),
        poly_info_set_varset(VarSet, !Info)
    ;
        true
    ),
    make_head_vars(TypeVars, TypeVarSet, TypeInfoVars1, !Info),
    TypeInfoVars = [Var | TypeInfoVars1].

:- pred new_type_info_var(mer_type::in, type_info_kind::in,
    prog_var::out, poly_info::in, poly_info::out) is det.

new_type_info_var(Type, Kind, Var, !Info) :-
    poly_info_get_varset(!.Info, VarSet0),
    poly_info_get_var_types(!.Info, VarTypes0),
    poly_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
    new_type_info_var_raw(Type, Kind, Var, VarSet0, VarSet,
        VarTypes0, VarTypes, RttiVarMaps0, RttiVarMaps),
    poly_info_set_varset_and_types(VarSet, VarTypes, !Info),
    poly_info_set_rtti_varmaps(RttiVarMaps, !Info).

new_type_info_var_raw(Type, Kind, Var, !VarSet, !VarTypes, !RttiVarMaps) :-
    % Introduce new variable.
    varset.new_var(!.VarSet, Var, !:VarSet),
    term.var_to_int(Var, VarNum),
    string.int_to_string(VarNum, VarNumStr),
    (
        Kind = type_info,
        Prefix = typeinfo_prefix,
        rtti_det_insert_type_info_type(Var, Type, !RttiVarMaps)
    ;
        Kind = type_ctor_info,
        Prefix = typectorinfo_prefix

        % XXX Perhaps we should record the variables holding
        % type_ctor_infos in the rtti_varmaps somewhere.
    ),
    string.append(Prefix, VarNumStr, Name),
    varset.name_var(!.VarSet, Var, Name, !:VarSet),
    map.set(!.VarTypes, Var, type_info_type, !:VarTypes).

:- func typeinfo_prefix = string.

typeinfo_prefix = "TypeInfo_".

:- func typectorinfo_prefix = string.

typectorinfo_prefix = "TypeCtorInfo_".

%---------------------------------------------------------------------------%

    % Generate code to get the value of a type variable.
    %
:- pred get_type_info(type_info_locn::in, tvar::in, list(hlds_goal)::out,
    prog_var::out, poly_info::in, poly_info::out) is det.

get_type_info(TypeInfoLocn, TypeVar, ExtraGoals, Var, !Info) :-
    (
        % If the typeinfo is available in a variable, just use it
        TypeInfoLocn = type_info(TypeInfoVar),
        Var = TypeInfoVar,
        ExtraGoals = []
    ;
        % If the typeinfo is in a typeclass_info, then we need to extract it
        % before using it
        TypeInfoLocn = typeclass_info(TypeClassInfoVar, Index),
        polymorphism_extract_type_info(TypeVar, TypeClassInfoVar, Index,
            ExtraGoals, Var, !Info)
    ).

:- pred polymorphism_extract_type_info(tvar::in, prog_var::in, int::in,
    list(hlds_goal)::out, prog_var::out, poly_info::in, poly_info::out) is det.

polymorphism_extract_type_info(TypeVar, TypeClassInfoVar, Index, Goals,
        TypeInfoVar, !Info) :-
    poly_info_get_varset(!.Info, VarSet0),
    poly_info_get_var_types(!.Info, VarTypes0),
    poly_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
    poly_info_get_module_info(!.Info, ModuleInfo),
    poly_info_get_tvar_kinds(!.Info, TVarKinds),
    get_tvar_kind(TVarKinds, TypeVar, Kind),
    gen_extract_type_info(TypeVar, Kind, TypeClassInfoVar, Index, ModuleInfo,
        Goals, TypeInfoVar, VarSet0, VarSet, VarTypes0, VarTypes,
        RttiVarMaps0, RttiVarMaps),
    poly_info_set_varset_and_types(VarSet, VarTypes, !Info),
    poly_info_set_rtti_varmaps(RttiVarMaps, !Info).

gen_extract_type_info(TypeVar, Kind, TypeClassInfoVar, Index, ModuleInfo,
        Goals, TypeInfoVar, !VarSet, !VarTypes, !RttiVarMaps) :-
    make_int_const_construction_alloc(Index, yes("TypeInfoIndex"),
        IndexGoal, IndexVar, !VarSet, !VarTypes),
    Type = type_variable(TypeVar, Kind),
    new_type_info_var_raw(Type, type_info, TypeInfoVar,
        !VarSet, !VarTypes, !RttiVarMaps),
    goal_util.generate_simple_call(mercury_private_builtin_module,
        "type_info_from_typeclass_info", pf_predicate, only_mode,
        detism_det, purity_pure, [TypeClassInfoVar, IndexVar, TypeInfoVar], [],
        [TypeInfoVar - ground(shared, none)], ModuleInfo,
        term.context_init, CallGoal),
    Goals = [IndexGoal, CallGoal].

%-----------------------------------------------------------------------------%

    % Usually when we call make_typeclass_info_head_var, we want to record
    % the type_info_locn for each constrained type var so that later goals
    % will know where to get the type_info from.  However, when setting up
    % head vars for existential constraints on the predicate/function we
    % are processing, we assume that the type_infos will be produced
    % somewhere else in the goal.  In this case, we don't want to record
    % the type_info_locns (if we did, then the code to actually produce the
    % type_info will just try to get it from here, which would be a mode
    % error).
    %
:- type record_type_info_locns
    --->    do_record_type_info_locns
    ;       do_not_record_type_info_locns.

    % Create a head var for each class constraint.
    %
:- pred make_typeclass_info_head_vars(record_type_info_locns::in,
    list(prog_constraint)::in, list(prog_var)::out,
    poly_info::in, poly_info::out) is det.

make_typeclass_info_head_vars(RecordLocns, Constraints, ExtraHeadVars,
        !Info) :-
    list.map_foldl(make_typeclass_info_head_var(RecordLocns), Constraints,
        ExtraHeadVars, !Info).

:- pred make_typeclass_info_head_var(record_type_info_locns::in,
    prog_constraint::in, prog_var::out, poly_info::in, poly_info::out) is det.

make_typeclass_info_head_var(RecordLocns, Constraint, ExtraHeadVar, !Info) :-
    (
        poly_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
        rtti_search_typeclass_info_var(RttiVarMaps0, Constraint, ExistingVar)
    ->
        ExtraHeadVar = ExistingVar
    ;
        % Make a new variable to contain the dictionary for this typeclass
        % constraint.
        Constraint = constraint(ClassSymName, _ClassTypes),
        ClassName = unqualify_name(ClassSymName),
        new_typeclass_info_var(Constraint, ClassName, ExtraHeadVar, !Info),
        (
            RecordLocns = do_record_type_info_locns,
            record_constraint_type_info_locns(Constraint, ExtraHeadVar, !Info)
        ;
            RecordLocns = do_not_record_type_info_locns
        )
    ).

:- pred record_constraint_type_info_locns(prog_constraint::in, prog_var::in,
    poly_info::in, poly_info::out) is det.

record_constraint_type_info_locns(Constraint, ExtraHeadVar, !Info) :-
    poly_info_get_module_info(!.Info, ModuleInfo),

    % Work out how many superclasses the class has.
    Constraint = constraint(ClassName, ClassTypes),
    list.length(ClassTypes, ClassArity),
    ClassId = class_id(ClassName, ClassArity),
    module_info_get_class_table(ModuleInfo, ClassTable),
    map.lookup(ClassTable, ClassId, ClassDefn),
    SuperClasses = ClassDefn ^ class_supers,
    list.length(SuperClasses, NumSuperClasses),

    % Find all the type variables in the constraint, and remember what
    % index they appear in in the typeclass info.

    % The first type_info will be just after the superclass infos.
    First = NumSuperClasses + 1,
    Last = NumSuperClasses + ClassArity,
    assoc_list.from_corresponding_lists(ClassTypes, First `..` Last,
        IndexedClassTypes),

    % Work out which type variables we haven't seen before, or which we
    % assumed earlier would be produced in a type_info (this can happen for
    % code which needs mode reordering and which calls existentially
    % quantified predicates or deconstructs existentially quantified
    % terms).
    poly_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
    NewTVarAndIndex = (pred(TVarAndIndex::out) is nondet :-
        list.member(Type - Index, IndexedClassTypes),
        type_vars(Type, TypeVars),
        list.member(TypeVar, TypeVars),
        ( rtti_search_type_info_locn(RttiVarMaps0, TypeVar, TypeInfoLocn) ->
            TypeInfoLocn = type_info(_)
        ;
            true
        ),
        TVarAndIndex = TypeVar - Index
    ),
    solutions(NewTVarAndIndex, NewClassTypeVars),

    % Make an entry in the TypeInfo locations map for each new type
    % variable. The type variable can be found at the previously calculated
    % offset with the new typeclass_info.
    MakeEntry =
        (pred(IndexedTypeVar::in, R0::in, R::out) is det :-
            IndexedTypeVar = TheTypeVar - Index,
            Location = typeclass_info(ExtraHeadVar, Index),
            rtti_set_type_info_locn(TheTypeVar, Location, R0, R)
        ),
    list.foldl(MakeEntry, NewClassTypeVars, RttiVarMaps0, RttiVarMaps),
    poly_info_set_rtti_varmaps(RttiVarMaps, !Info).

:- pred new_typeclass_info_var(prog_constraint::in, string::in,
    prog_var::out, poly_info::in, poly_info::out) is det.

new_typeclass_info_var(Constraint, ClassString, Var, !Info) :-
    poly_info_get_varset(!.Info, VarSet0),
    poly_info_get_var_types(!.Info, VarTypes0),
    poly_info_get_rtti_varmaps(!.Info, RttiVarMaps0),

    % Introduce new variable.
    varset.new_var(VarSet0, Var, VarSet1),
    string.append("TypeClassInfo_for_", ClassString, Name),
    varset.name_var(VarSet1, Var, Name, VarSet),
    build_typeclass_info_type(Constraint, DictionaryType),
    map.set(VarTypes0, Var, DictionaryType, VarTypes),
    rtti_det_insert_typeclass_info_var(Constraint, Var,
        RttiVarMaps0, RttiVarMaps),

    poly_info_set_varset_and_types(VarSet, VarTypes, !Info),
    poly_info_set_rtti_varmaps(RttiVarMaps, !Info).

build_typeclass_info_type(_Constraint, DictionaryType) :-
    PrivateBuiltin = mercury_private_builtin_module,
    TypeclassInfoTypeName = qualified(PrivateBuiltin, "typeclass_info"),
    DictionaryType = defined_type(TypeclassInfoTypeName, [], kind_star).

%---------------------------------------------------------------------------%

type_is_typeclass_info(TypeClassInfoType) :-
    type_to_ctor_and_args(TypeClassInfoType, TypeCtor, [_ConstraintTerm]),
    TypeCtor = type_ctor(qualified(ModuleName, "typeclass_info"), 0),
    ModuleName = mercury_private_builtin_module.

type_is_type_info_or_ctor_type(TypeInfoType) :-
    type_to_ctor_and_args(TypeInfoType, TypeCtor, []),
    TypeCtor = type_ctor(qualified(ModuleName, TypeName), 0),
    ModuleName = mercury_private_builtin_module,
    ( TypeName = "type_info"
    ; TypeName = "type_ctor_info"
    ).

build_type_info_type(Type, TypeInfoType) :-
    % XXX TypeInfoType = type_ctor_info_type.
    ( type_has_variable_arity_ctor(Type, _, _) ->
        % We cannot use a plain type_ctor_info because we need to
        % record the arity.
        Kind = type_info
    ; type_to_ctor_and_args(Type, _Ctor, Args) ->
        (
            Args = [],
            Kind = type_ctor_info
        ;
            Args = [_ | _],
            Kind = type_info
        )
    ;
        % The type is variable, which means we have a type_info for it.
        % That type_info may actually be a type_ctor_info, but the code
        % of the current predicate won't treat it as such.
        Kind = type_info
    ),
    build_type_info_type_2(Kind, TypeInfoType).

:- pred build_type_info_type_2(type_info_kind::in, mer_type::out) is det.

build_type_info_type_2(Kind, TypeInfoType) :-
    (
        Kind = type_info,
        TypeInfoType = type_info_type
    ;
        Kind = type_ctor_info,
        TypeInfoType = type_ctor_info_type
    ).

%---------------------------------------------------------------------------%

is_typeclass_info_manipulator(ModuleInfo, PredId, TypeClassManipulator) :-
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    mercury_private_builtin_module = pred_info_module(PredInfo),
    PredName = pred_info_name(PredInfo),
    (
        PredName = "type_info_from_typeclass_info",
        TypeClassManipulator = type_info_from_typeclass_info
    ;
        PredName = "superclass_from_typeclass_info",
        TypeClassManipulator = superclass_from_typeclass_info
    ;
        PredName = "instance_constraint_from_typeclass_info",
        TypeClassManipulator = instance_constraint_from_typeclass_info
    ).

%---------------------------------------------------------------------------%

    % Expand the bodies of all class methods. Class methods for imported
    % classes are only expanded if we are performing type specialization,
    % so that method lookups for imported classes can be optimized.
    %
    % The expansion involves inserting a class_method_call with the appropriate
    % arguments, which is responsible for extracting the appropriate part
    % of the dictionary.
    %
:- pred expand_class_method_bodies(module_info::in, module_info::out) is det.

expand_class_method_bodies(!ModuleInfo) :-
    module_info_get_class_table(!.ModuleInfo, Classes),
    module_info_get_name(!.ModuleInfo, ModuleName),
    map.keys(Classes, ClassIds0),

    module_info_get_globals(!.ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, user_guided_type_specialization,
        TypeSpec),
    (
        TypeSpec = no,
        % Don't expand classes from other modules.
        list.filter(class_id_is_from_given_module(ModuleName),
            ClassIds0, ClassIds)
    ;
        TypeSpec = yes,
        ClassIds = ClassIds0
    ),
    map.apply_to_list(ClassIds, Classes, ClassDefns),
    list.foldl(expand_class_method_bodies_2, ClassDefns, !ModuleInfo).

:- pred class_id_is_from_given_module(module_name::in, class_id::in)
    is semidet.

class_id_is_from_given_module(ModuleName, ClassId) :-
    ClassId = class_id(qualified(ModuleName, _), _).

:- pred expand_class_method_bodies_2(hlds_class_defn::in,
    module_info::in, module_info::out) is det.

expand_class_method_bodies_2(ClassDefn, !ModuleInfo) :-
    Interface = ClassDefn ^ class_hlds_interface,
    list.foldl2(expand_class_method_body, Interface, 1, _, !ModuleInfo).

:- pred expand_class_method_body(hlds_class_proc::in, int::in, int::out,
    module_info::in, module_info::out) is det.

expand_class_method_body(hlds_class_proc(PredId, ProcId), !ProcNum,
        !ModuleInfo) :-
    module_info_preds(!.ModuleInfo, PredTable0),
    map.lookup(PredTable0, PredId, PredInfo0),
    pred_info_get_procedures(PredInfo0, ProcTable0),
    map.lookup(ProcTable0, ProcId, ProcInfo0),

    % Find which of the constraints on the pred is the one introduced
    % because it is a class method.
    pred_info_get_class_context(PredInfo0, ClassContext),
    ( ClassContext = constraints([Head | _], _) ->
        InstanceConstraint = Head
    ;
        unexpected(this_file,
            "expand_one_body: class method is not constrained")
    ),

    proc_info_get_rtti_varmaps(ProcInfo0, RttiVarMaps),
    rtti_lookup_typeclass_info_var(RttiVarMaps, InstanceConstraint,
        TypeClassInfoVar),

    proc_info_get_headvars(ProcInfo0, HeadVars0),
    proc_info_get_argmodes(ProcInfo0, Modes0),
    proc_info_get_declared_determinism(ProcInfo0, MaybeDetism0),
    (
        MaybeDetism0 = yes(Detism)
    ;
        MaybeDetism0 = no,
        % Omitting the determinism for a method is not allowed. But make_hlds
        % will have already detected and reported the error. So here we can
        % just pick some value at random; hopefully something that won't cause
        % flow-on errors. We also mark the predicate as invalid, also to avoid
        % flow-on errors.
        Detism = detism_non,
        module_info_remove_predid(PredId, !ModuleInfo)
    ),

    % Work out which argument corresponds to the constraint which is introduced
    % because this is a class method, then delete it from the list of args to
    % the class_method_call. That variable becomes the "dictionary" variable
    % for the class_method_call. (cf. the closure for a higher order call).
    (
        list.nth_member_search(HeadVars0, TypeClassInfoVar, N),
        delete_nth(HeadVars0, N, HeadVarsPrime),
        delete_nth(Modes0, N, ModesPrime)
    ->
        HeadVars = HeadVarsPrime,
        Modes = ModesPrime
    ;
        unexpected(this_file, "expand_class_method_body: " ++
            "typeclass_info var not found")
    ),

    InstanceConstraint = constraint(ClassName, InstanceArgs),
    list.length(InstanceArgs, InstanceArity),
    pred_info_get_call_id(PredInfo0, CallId),
    BodyGoalExpr = generic_call(
        class_method(TypeClassInfoVar, !.ProcNum,
            class_id(ClassName, InstanceArity), CallId),
        HeadVars, Modes, Detism),

    % Make the goal info for the call.
    set.list_to_set(HeadVars0, NonLocals),
    instmap_delta_from_mode_list(HeadVars0, Modes0, !.ModuleInfo,
        InstmapDelta),
    pred_info_get_purity(PredInfo0, Purity),
    goal_info_init(NonLocals, InstmapDelta, Detism, Purity, GoalInfo),
    BodyGoal = hlds_goal(BodyGoalExpr, GoalInfo),

    proc_info_set_goal(BodyGoal, ProcInfo0, ProcInfo),
    map.det_update(ProcTable0, ProcId, ProcInfo, ProcTable),
    pred_info_set_procedures(ProcTable, PredInfo0, PredInfo1),
    ( pred_info_is_imported(PredInfo1) ->
        pred_info_set_import_status(status_opt_imported, PredInfo1, PredInfo)
    ;
        PredInfo = PredInfo1
    ),

    map.det_update(PredTable0, PredId, PredInfo, PredTable),
    module_info_set_preds(PredTable, !ModuleInfo),

    !:ProcNum = !.ProcNum + 1.

:- pred delete_nth(list(T)::in, int::in, list(T)::out) is semidet.

delete_nth([X | Xs], N0, Result) :-
    ( N0 > 1 ->
        N = N0 - 1,
        delete_nth(Xs, N, TheRest),
        Result = [X | TheRest]
    ;
        Result = Xs
    ).

%---------------------------------------------------------------------------%

:- func get_constrained_vars(prog_constraint) = list(tvar).

get_constrained_vars(Constraint) = CVars :-
    Constraint = constraint(_, CTypes),
    type_vars_list(CTypes, CVars).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- type poly_info
    --->    poly_info(
                % The first two fields are from the proc_info.
                poly_varset             :: prog_varset,
                poly_vartypes           :: vartypes,

                % The next two fields from the pred_info.
                poly_typevarset         :: tvarset,
                poly_tvar_kinds         :: tvar_kind_map,

                % Gives information about the locations of type_infos
                % and typeclass_infos.
                poly_rtti_varmaps       :: rtti_varmaps,

                % Specifies why each constraint that was eliminated from the
                % pred was able to be eliminated (this allows us to efficiently
                % construct the dictionary).
                % Note that the rtti_varmaps is separate from the
                % constraint_proof_map, since the second is the information
                % calculated by typecheck.m, while the first is the information
                % calculated here in polymorphism.m.
                poly_proof_map          :: constraint_proof_map,

                % Specifies the constraints at each location in the goal.
                poly_constraint_map     :: constraint_map,

                poly_pred_info          :: pred_info,
                poly_module_info        :: module_info
            ).

%---------------------------------------------------------------------------%

    % Init_poly_info initializes a poly_info from a pred_info and clauses_info.
    % (See also create_poly_info.)
    %
:- pred init_poly_info(module_info::in, pred_info::in, clauses_info::in,
    poly_info::out) is det.

init_poly_info(ModuleInfo, PredInfo, ClausesInfo, PolyInfo) :-
    clauses_info_get_varset(ClausesInfo, VarSet),
    clauses_info_get_vartypes(ClausesInfo, VarTypes),
    pred_info_get_typevarset(PredInfo, TypeVarSet),
    pred_info_get_tvar_kinds(PredInfo, TypeVarKinds),
    pred_info_get_constraint_proofs(PredInfo, Proofs),
    pred_info_get_constraint_map(PredInfo, ConstraintMap),
    rtti_varmaps_init(RttiVarMaps),
    PolyInfo = poly_info(VarSet, VarTypes, TypeVarSet, TypeVarKinds,
        RttiVarMaps, Proofs, ConstraintMap, PredInfo, ModuleInfo).

    % Create_poly_info creates a poly_info for an existing procedure.
    % (See also init_poly_info.)
    %
create_poly_info(ModuleInfo, PredInfo, ProcInfo, PolyInfo) :-
    pred_info_get_typevarset(PredInfo, TypeVarSet),
    pred_info_get_tvar_kinds(PredInfo, TypeVarKinds),
    pred_info_get_constraint_proofs(PredInfo, Proofs),
    pred_info_get_constraint_map(PredInfo, ConstraintMap),
    proc_info_get_varset(ProcInfo, VarSet),
    proc_info_get_vartypes(ProcInfo, VarTypes),
    proc_info_get_rtti_varmaps(ProcInfo, RttiVarMaps),
    PolyInfo = poly_info(VarSet, VarTypes, TypeVarSet, TypeVarKinds,
        RttiVarMaps, Proofs, ConstraintMap, PredInfo, ModuleInfo).

poly_info_extract(Info, !PredInfo, !ProcInfo, ModuleInfo) :-
    Info = poly_info(VarSet, VarTypes, TypeVarSet, TypeVarKinds,
        RttiVarMaps, _Proofs, _ConstraintMap, _OldPredInfo, ModuleInfo),

    % Set the new values of the fields in proc_info and pred_info.
    proc_info_set_varset(VarSet, !ProcInfo),
    proc_info_set_vartypes(VarTypes, !ProcInfo),
    proc_info_set_rtti_varmaps(RttiVarMaps, !ProcInfo),
    pred_info_set_typevarset(TypeVarSet, !PredInfo),
    pred_info_set_tvar_kinds(TypeVarKinds, !PredInfo).

%---------------------------------------------------------------------------%

:- pred poly_info_get_varset(poly_info::in, prog_varset::out) is det.
:- pred poly_info_get_var_types(poly_info::in, vartypes::out) is det.
:- pred poly_info_get_typevarset(poly_info::in, tvarset::out) is det.
:- pred poly_info_get_tvar_kinds(poly_info::in, tvar_kind_map::out) is det.
:- pred poly_info_get_rtti_varmaps(poly_info::in, rtti_varmaps::out) is det.
:- pred poly_info_get_proofs(poly_info::in, constraint_proof_map::out) is det.
:- pred poly_info_get_constraint_map(poly_info::in, constraint_map::out)
    is det.
:- pred poly_info_get_pred_info(poly_info::in, pred_info::out) is det.
:- pred poly_info_get_module_info(poly_info::in, module_info::out) is det.

poly_info_get_varset(PolyInfo, PolyInfo ^ poly_varset).
poly_info_get_var_types(PolyInfo, PolyInfo ^ poly_vartypes).
poly_info_get_typevarset(PolyInfo, PolyInfo ^ poly_typevarset).
poly_info_get_tvar_kinds(PolyInfo, PolyInfo ^ poly_tvar_kinds).
poly_info_get_rtti_varmaps(PolyInfo, PolyInfo ^ poly_rtti_varmaps).
poly_info_get_proofs(PolyInfo, PolyInfo ^ poly_proof_map).
poly_info_get_constraint_map(PolyInfo, PolyInfo ^ poly_constraint_map).
poly_info_get_pred_info(PolyInfo, PolyInfo ^ poly_pred_info).
poly_info_get_module_info(PolyInfo, PolyInfo ^ poly_module_info).

:- pred poly_info_set_varset(prog_varset::in,
    poly_info::in, poly_info::out) is det.
:- pred poly_info_set_varset_and_types(prog_varset::in, vartypes::in,
    poly_info::in, poly_info::out) is det.
:- pred poly_info_set_typevarset(tvarset::in,
    poly_info::in, poly_info::out) is det.
:- pred poly_info_set_tvar_kinds(tvar_kind_map::in,
    poly_info::in, poly_info::out) is det.
:- pred poly_info_set_rtti_varmaps(rtti_varmaps::in,
    poly_info::in, poly_info::out) is det.
:- pred poly_info_set_proofs(constraint_proof_map::in,
    poly_info::in, poly_info::out) is det.
:- pred poly_info_set_constraint_map(constraint_map::in,
    poly_info::in, poly_info::out) is det.
:- pred poly_info_set_module_info(module_info::in,
    poly_info::in, poly_info::out) is det.

poly_info_set_varset(VarSet, !PI) :-
    !PI ^ poly_varset := VarSet.
poly_info_set_varset_and_types(VarSet, VarTypes, !PI) :-
    !PI ^ poly_varset := VarSet,
    !PI ^ poly_vartypes := VarTypes.
poly_info_set_typevarset(TVarSet, !PI) :-
    !PI ^ poly_typevarset := TVarSet.
poly_info_set_tvar_kinds(TVarKinds, !PI) :-
    !PI ^ poly_tvar_kinds := TVarKinds.
poly_info_set_rtti_varmaps(RttiVarMaps, !PI) :-
    !PI ^ poly_rtti_varmaps := RttiVarMaps.
poly_info_set_proofs(Proofs, !PI) :-
    !PI ^ poly_proof_map := Proofs.
poly_info_set_constraint_map(ConstraintMap, !PI) :-
    !PI ^ poly_constraint_map := ConstraintMap.
poly_info_set_module_info(ModuleInfo, !PI) :-
    !PI ^ poly_module_info := ModuleInfo.

%---------------------------------------------------------------------------%

:- func this_file = string.

this_file = "polymorphism.m".

%---------------------------------------------------------------------------%
:- end_module check_hlds.polymorphism.
%---------------------------------------------------------------------------%
