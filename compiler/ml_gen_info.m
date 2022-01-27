%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2009, 2011-2012 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: ml_code_util.m.
% Main author: fjh.
%
% This module is part of the MLDS code generator.
% It defines the ml_gen_info type and its access routines.
%
%-----------------------------------------------------------------------------%

:- module ml_backend.ml_gen_info.
:- interface.

:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.
:- import_module libs.globals.
:- import_module ml_backend.mlds.
:- import_module ml_backend.ml_global_data.
:- import_module parse_tree.prog_data.

:- import_module bool.
:- import_module list.
:- import_module map.
:- import_module set.

%-----------------------------------------------------------------------------%
%
% The `ml_gen_info' ADT.
%

    % The `ml_gen_info' type holds information used during
    % MLDS code generation for a given procedure.
    %
:- type ml_gen_info.

    % Initialize the ml_gen_info, so that it is ready for generating code
    % for the given procedure. The last argument records the persistent
    % information accumulated by the code generator so far during the
    % processing of previous procedures.
    %
:- func ml_gen_info_init(module_info, ml_const_struct_map, pred_id, proc_id,
    proc_info, ml_global_data) = ml_gen_info.

:- pred ml_gen_info_get_module_info(ml_gen_info::in, module_info::out) is det.
:- pred ml_gen_info_get_high_level_data(ml_gen_info::in, bool::out) is det.
:- pred ml_gen_info_get_target(ml_gen_info::in, compilation_target::out)
    is det.
:- pred ml_gen_info_get_gc(ml_gen_info::in, gc_method::out) is det.
:- pred ml_gen_info_get_pred_id(ml_gen_info::in, pred_id::out) is det.
:- pred ml_gen_info_get_proc_id(ml_gen_info::in, proc_id::out) is det.
:- pred ml_gen_info_get_varset(ml_gen_info::in, prog_varset::out) is det.
:- pred ml_gen_info_get_var_types(ml_gen_info::in, vartypes::out) is det.
:- pred ml_gen_info_get_byref_output_vars(ml_gen_info::in, list(prog_var)::out)
    is det.
:- pred ml_gen_info_get_value_output_vars(ml_gen_info::in, list(prog_var)::out)
    is det.
:- pred ml_gen_info_get_global_data(ml_gen_info::in, ml_global_data::out)
    is det.

:- pred ml_gen_info_set_module_info(module_info::in,
    ml_gen_info::in, ml_gen_info::out) is det.
:- pred ml_gen_info_set_varset(prog_varset::in,
    ml_gen_info::in, ml_gen_info::out) is det.
:- pred ml_gen_info_set_var_types(vartypes::in,
    ml_gen_info::in, ml_gen_info::out) is det.
:- pred ml_gen_info_set_byref_output_vars(list(prog_var)::in,
    ml_gen_info::in, ml_gen_info::out) is det.
:- pred ml_gen_info_set_value_output_vars(list(prog_var)::in,
    ml_gen_info::in, ml_gen_info::out) is det.
:- pred ml_gen_info_set_global_data(ml_global_data::in,
    ml_gen_info::in, ml_gen_info::out) is det.

:- pred ml_gen_info_get_globals(ml_gen_info::in, globals::out) is det.
:- pred ml_gen_info_get_module_name(ml_gen_info::in, mercury_module_name::out)
    is det.

    % Lookup the --gcc-nested-functions option.
    %
:- pred ml_gen_info_use_gcc_nested_functions(ml_gen_info::in, bool::out)
    is det.

    % Lookup the --put-commit-in-nested-func option.
    %
:- pred ml_gen_info_put_commit_in_own_func(ml_gen_info::in, bool::out) is det.

    % Generate a new label number for use in label statements.
    % This is used to give unique names to the case labels generated
    % for dense switch statements.
    %
:- type label_num == int.
:- pred ml_gen_info_new_label(label_num::out,
    ml_gen_info::in, ml_gen_info::out) is det.

    % A number corresponding to an MLDS nested function which serves as a
    % label (i.e. a continuation function).
    %
:- type ml_label_func == mlds_func_sequence_num.

    % Generate a new function label number. This is used to give unique names
    % to the nested functions used when generating code for nondet procedures.
    %
:- pred ml_gen_info_new_func_label(ml_label_func::out,
    ml_gen_info::in, ml_gen_info::out) is det.

    % Increase the function label and const sequence number counters by some
    % amount which is presumed to be sufficient to ensure that if we start
    % again with a fresh ml_gen_info and then call this function, we won't
    % encounter any already-used function labels or constants. (This is used
    % when generating wrapper functions for type class methods.)
    %
:- pred ml_gen_info_bump_counters(ml_gen_info::in, ml_gen_info::out) is det.

    % Generate a new auxiliary variable name. The name of the variable
    % will start with the given prefix and end with a sequence number
    % that differentiates this aux var from all others.
    %
    % Auxiliary variables are used for purposes such as commit label numbers
    % and holding table indexes in switches.
    %
:- pred ml_gen_info_new_aux_var_name(string::in, mlds_var_name::out,
    ml_gen_info::in, ml_gen_info::out) is det.

    % Generate a new `cond' variable number.
    %
:- type cond_seq ---> cond_seq(int).
:- pred ml_gen_info_new_cond_var(cond_seq::out,
    ml_gen_info::in, ml_gen_info::out) is det.

    % Generate a new `conv' variable number. This is used to give unique names
    % to the local variables generated by ml_gen_box_or_unbox_lval, which are
    % used to handle boxing/unboxing argument conversions.
    %
:- type conv_seq ---> conv_seq(int).
:- pred ml_gen_info_new_conv_var(conv_seq::out,
    ml_gen_info::in, ml_gen_info::out) is det.

:- type ml_ground_term
    --->    ml_ground_term(
                % The value of the ground term.
                mlds_rval,

                % The type of the ground term (actually, the type of the
                % variable the ground term was constructed for).
                mer_type,

                % The corresponding MLDS type. It could be computed from the
                % Mercury type, but there is no point in doing so when using
                % the ground term as well when constructing it.
                mlds_type
            ).

:- type ml_ground_term_map == map(prog_var, ml_ground_term).

:- type ml_const_struct_map == map(int, ml_ground_term).

    % Set the `const' variable name corresponding to the given HLDS variable.
    %
:- pred ml_gen_info_set_const_var(prog_var::in, ml_ground_term::in,
    ml_gen_info::in, ml_gen_info::out) is det.

    % Lookup the `const' sequence number corresponding to a given HLDS
    % variable.
    %
:- pred ml_gen_info_lookup_const_var(ml_gen_info::in, prog_var::in,
    ml_ground_term::out) is det.
:- pred ml_gen_info_search_const_var(ml_gen_info::in, prog_var::in,
    ml_ground_term::out) is semidet.

    % A success continuation specifies the (rval for the variable holding
    % the address of the) function that a nondet procedure should call
    % if it succeeds, and possibly also the (rval for the variable holding)
    % the environment pointer for that function, and possibly also the
    % (list of rvals for the) arguments to the continuation.

:- type success_cont
    --->    success_cont(
                mlds_rval,          % function pointer
                mlds_rval,          % environment pointer
                                    % note that if we're using nested
                                    % functions then the environment
                                    % pointer will not be used
                list(mlds_type),    % argument types, if any
                list(mlds_lval)     % arguments, if any
                                    % The arguments will only be non-empty
                                    % if the --nondet-copy-out option is
                                    % enabled. They do not include the
                                    % environment pointer.
            ).

    % The ml_gen_info contains a stack of success continuations.
    % The following routines provide access to that stack.

:- pred ml_gen_info_push_success_cont(success_cont::in,
    ml_gen_info::in, ml_gen_info::out) is det.

:- pred ml_gen_info_pop_success_cont(ml_gen_info::in, ml_gen_info::out) is det.

:- pred ml_gen_info_current_success_cont(ml_gen_info::in, success_cont::out)
    is det.

    % We keep a partial mapping from vars to lvals. This is used in special
    % cases to override the normal lval for a variable. ml_gen_var will check
    % this map first, and if the variable is not in this map, then it will go
    % ahead and generate an lval for it as usual.

    % Set the lval for a variable.
    %
:- pred ml_gen_info_set_var_lval(prog_var::in, mlds_lval::in,
    ml_gen_info::in, ml_gen_info::out) is det.

    % Get the partial mapping from variables to lvals.
    %
:- pred ml_gen_info_get_var_lvals(ml_gen_info::in,
    map(prog_var, mlds_lval)::out) is det.

    % Set the partial mapping from variables to lvals.
    %
:- pred ml_gen_info_set_var_lvals(map(prog_var, mlds_lval)::in,
    ml_gen_info::in, ml_gen_info::out) is det.

    % A variable can be bound to a constant in one branch of a control
    % structure and to a non-constant term in another branch. We remember
    % information about variables bound to constants in the map these two
    % predicates are the getter and setter of. Branched control structures
    % should reset the map to its original value at the start of every branch
    % after the first (to prevent a later branch from using information that is
    % applicable only in a previous branch), and at the end of the branched
    % control structure (to prevent the code after it using information whose
    % correctness depends on the exact route execution took to there).
    %
:- pred ml_gen_info_get_const_var_map(ml_gen_info::in,
    map(prog_var, ml_ground_term)::out) is det.
:- pred ml_gen_info_set_const_var_map(map(prog_var, ml_ground_term)::in,
    ml_gen_info::in, ml_gen_info::out) is det.

    % Get the map of the constant ground structures generated by ml_code_gen
    % before we start generating code for procedures.
    %
:- pred ml_gen_info_get_const_struct_map(ml_gen_info::in,
    map(int, ml_ground_term)::out) is det.

    % The ml_gen_info contains a list of extra definitions of functions or
    % global constants which should be inserted before the definition of the
    % function for the current procedure. This is used for the definitions
    % of the wrapper functions needed for closures. When generating code
    % for a procedure that creates a closure, we insert the definition of
    % the wrapper function used for that closure into this list.

    % Insert an extra definition at the start of the list of extra
    % definitions.
    %
:- pred ml_gen_info_add_closure_wrapper_defn(mlds_defn::in,
    ml_gen_info::in, ml_gen_info::out) is det.

    % Get the list of extra definitions.
    %
:- pred ml_gen_info_get_closure_wrapper_defns(ml_gen_info::in,
    list(mlds_defn)::out) is det.

    % Add the given string as the name of an environment variable used by
    % the function being generated.
    %
:- pred ml_gen_info_add_env_var_name(string::in,
    ml_gen_info::in, ml_gen_info::out) is det.

    % Get the names of the used environment variables.
    %
:- pred ml_gen_info_get_env_var_names(ml_gen_info::in, set(string)::out)
    is det.

:- implementation.

:- import_module check_hlds.mode_util.
:- import_module libs.options.

:- import_module counter.
:- import_module int.
:- import_module maybe.
:- import_module stack.
:- import_module string.

%-----------------------------------------------------------------------------%
%
% The definition of the `ml_gen_info' ADT.
%

:- type ml_gen_info
    --->    ml_gen_info(
/*  1 */        mgi_module_info         :: module_info,

                % These fields remain constant for each procedure unless
                % accurate GC is enabled, in which case they may get updated
                % if we create fresh variables for the type_info variables
                % needed for calls to private_builtin.gc_trace.
/*  2 */        mgi_varset              :: prog_varset,
/*  3 */        mgi_var_types           :: vartypes,

                % Output arguments that are passed by reference.
/*  4 */        mgi_byref_output_vars   :: list(prog_var),

                % Output arguments that are returned as values.
/*  5 */        mgi_value_output_vars   :: list(prog_var),

                % Definitions of functions or global constants which should be
                % inserted before the definition of the function for the
                % current procedure.
/*  6 */        mgi_var_lvals           :: map(prog_var, mlds_lval),

/*  7 */        mgi_global_data         :: ml_global_data,

                % All of the other pieces of information that are not among
                % the most frequently read and/or written fields. Limiting
                % ml_gen_info to eight fields make updating the structure
                % quicker and less wasteful of memory.
/*  8 */        mgi_sub_info            :: ml_gen_sub_info
            ).

:- type ml_gen_sub_info
    --->    ml_gen_sub_info(
                % Quick-access read-only copies of parts of the globals
                % structure taken from the module_info.
/*  1 */        mgsi_high_level_data    :: bool,
/*  2 */        mgsi_target             :: compilation_target,
/*  3 */        mgsi_gc                 :: gc_method,

                % The identity of the procedure we are generating code for.
/*  4 */        mgsi_pred_id            :: pred_id,
/*  5 */        mgsi_proc_id            :: proc_id,

/*  6 */        mgsi_func_counter       :: counter,
/*  7 */        mgsi_label_counter      :: counter,
/*  8 */        mgsi_aux_var_counter    :: counter,
/*  9 */        mgsi_cond_var_counter   :: counter,
/* 10 */        mgsi_conv_var_counter   :: counter,

/* 11 */        mgsi_const_var_map      :: map(prog_var, ml_ground_term),
/* 12 */        mgsi_const_struct_map   :: map(int, ml_ground_term),

/* 13 */        mgsi_closure_wrapper_defns :: list(mlds_defn),

                % A partial mapping from vars to lvals, used to override
                % the normal lval that we use for a variable.
/* 14 */        mgsi_success_cont_stack :: stack(success_cont),

/* 15 */        mgsi_env_var_names      :: set(string)
            ).

ml_gen_info_init(ModuleInfo, ConstStructMap, PredId, ProcId, ProcInfo,
        GlobalData) = Info :-
    module_info_get_globals(ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, highlevel_data, HighLevelData),
    globals.get_target(Globals, CompilationTarget),
    globals.get_gc_method(Globals, GC),

    proc_info_get_headvars(ProcInfo, HeadVars),
    proc_info_get_varset(ProcInfo, VarSet),
    proc_info_get_vartypes(ProcInfo, VarTypes),
    proc_info_get_argmodes(ProcInfo, HeadModes),
    ByRefOutputVars = select_output_vars(ModuleInfo, HeadVars, HeadModes,
        VarTypes),
    ValueOutputVars = [],

    % XXX This needs to start at 1 rather than 0 otherwise the transformation
    % for adding the shadow stack for accurate garbage collection does not work
    % properly and we will end up generating two C functions with the same
    % name (see ml_elim_nested.gen_gc_trace_func/8 for details).
    %
    counter.init(1, FuncLabelCounter),
    counter.init(0, LabelCounter),
    counter.init(0, AuxVarCounter),
    counter.init(0, CondVarCounter),
    counter.init(0, ConvVarCounter),
    map.init(ConstVarMap),
    stack.init(SuccContStack),
    map.init(VarLvals),
    ClosureWrapperDefns = [],
    EnvVarNames = set.init,

    SubInfo = ml_gen_sub_info(
        HighLevelData,
        CompilationTarget,
        GC,
        PredId,
        ProcId,
        FuncLabelCounter,
        LabelCounter,
        AuxVarCounter,
        CondVarCounter,
        ConvVarCounter,
        ConstVarMap,
        ConstStructMap,
        ClosureWrapperDefns,
        SuccContStack,
        EnvVarNames
    ),
    Info = ml_gen_info(
        ModuleInfo,
        VarSet,
        VarTypes,
        ByRefOutputVars,
        ValueOutputVars,
        VarLvals,
        GlobalData,
        SubInfo
    ).

:- pred ml_gen_info_get_func_counter(ml_gen_info::in, counter::out) is det.
:- pred ml_gen_info_get_label_counter(ml_gen_info::in, counter::out) is det.
:- pred ml_gen_info_get_aux_var_counter(ml_gen_info::in, counter::out) is det.
:- pred ml_gen_info_get_cond_var_counter(ml_gen_info::in, counter::out) is det.
:- pred ml_gen_info_get_conv_var_counter(ml_gen_info::in, counter::out) is det.
:- pred ml_gen_info_get_success_cont_stack(ml_gen_info::in,
    stack(success_cont)::out) is det.

ml_gen_info_get_module_info(Info, Info ^ mgi_module_info).
ml_gen_info_get_high_level_data(Info,
    Info ^ mgi_sub_info ^ mgsi_high_level_data).
ml_gen_info_get_target(Info, Info ^ mgi_sub_info ^ mgsi_target).
ml_gen_info_get_gc(Info, Info ^ mgi_sub_info ^ mgsi_gc).
ml_gen_info_get_pred_id(Info, Info ^ mgi_sub_info ^ mgsi_pred_id).
ml_gen_info_get_proc_id(Info, Info ^ mgi_sub_info ^ mgsi_proc_id).
ml_gen_info_get_varset(Info, Info ^ mgi_varset).
ml_gen_info_get_var_types(Info, Info ^ mgi_var_types).
ml_gen_info_get_byref_output_vars(Info, Info ^ mgi_byref_output_vars).
ml_gen_info_get_value_output_vars(Info, Info ^ mgi_value_output_vars).
ml_gen_info_get_var_lvals(Info, Info ^ mgi_var_lvals).
ml_gen_info_get_global_data(Info, Info ^ mgi_global_data).

ml_gen_info_get_func_counter(Info, Info ^ mgi_sub_info ^ mgsi_func_counter).
ml_gen_info_get_label_counter(Info, Info ^ mgi_sub_info ^ mgsi_label_counter).
ml_gen_info_get_aux_var_counter(Info,
    Info ^ mgi_sub_info ^ mgsi_aux_var_counter).
ml_gen_info_get_cond_var_counter(Info,
    Info ^ mgi_sub_info ^ mgsi_cond_var_counter).
ml_gen_info_get_conv_var_counter(Info,
    Info ^ mgi_sub_info ^ mgsi_conv_var_counter).
ml_gen_info_get_const_var_map(Info,
    Info ^ mgi_sub_info ^ mgsi_const_var_map).
ml_gen_info_get_const_struct_map(Info,
    Info ^ mgi_sub_info ^ mgsi_const_struct_map).
ml_gen_info_get_success_cont_stack(Info,
    Info ^ mgi_sub_info ^ mgsi_success_cont_stack).
ml_gen_info_get_closure_wrapper_defns(Info,
    Info ^ mgi_sub_info ^ mgsi_closure_wrapper_defns).
ml_gen_info_get_env_var_names(Info, Info ^ mgi_sub_info ^ mgsi_env_var_names).

:- pred ml_gen_info_set_func_counter(counter::in,
    ml_gen_info::in, ml_gen_info::out) is det.
:- pred ml_gen_info_set_label_counter(counter::in,
    ml_gen_info::in, ml_gen_info::out) is det.
:- pred ml_gen_info_set_aux_var_counter(counter::in,
    ml_gen_info::in, ml_gen_info::out) is det.
:- pred ml_gen_info_set_cond_var_counter(counter::in,
    ml_gen_info::in, ml_gen_info::out) is det.
:- pred ml_gen_info_set_conv_var_counter(counter::in,
    ml_gen_info::in, ml_gen_info::out) is det.
:- pred ml_gen_info_set_success_cont_stack(stack(success_cont)::in,
    ml_gen_info::in, ml_gen_info::out) is det.
:- pred ml_gen_info_set_closure_wrapper_defns(list(mlds_defn)::in,
    ml_gen_info::in, ml_gen_info::out) is det.
:- pred ml_gen_info_set_env_var_names(set(string)::in,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_info_set_module_info(ModuleInfo, !Info) :-
    !Info ^ mgi_module_info := ModuleInfo.
ml_gen_info_set_varset(VarSet, !Info) :-
    !Info ^ mgi_varset := VarSet.
ml_gen_info_set_var_types(VarTypes, !Info) :-
    !Info ^ mgi_var_types := VarTypes.
ml_gen_info_set_byref_output_vars(OutputVars, !Info) :-
    !Info ^ mgi_byref_output_vars := OutputVars.
ml_gen_info_set_value_output_vars(OutputVars, !Info) :-
    !Info ^ mgi_value_output_vars := OutputVars.
ml_gen_info_set_var_lvals(VarLvals, !Info) :-
    !Info ^ mgi_var_lvals := VarLvals.
ml_gen_info_set_global_data(GlobalData, !Info) :-
    !Info ^ mgi_global_data := GlobalData.

ml_gen_info_set_func_counter(FuncCounter, !Info) :-
    SubInfo0 = !.Info ^ mgi_sub_info,
    SubInfo = SubInfo0 ^ mgsi_func_counter := FuncCounter,
    !Info ^ mgi_sub_info := SubInfo.
ml_gen_info_set_label_counter(LabelCounter, !Info) :-
    SubInfo0 = !.Info ^ mgi_sub_info,
    SubInfo = SubInfo0 ^ mgsi_label_counter := LabelCounter,
    !Info ^ mgi_sub_info := SubInfo.
ml_gen_info_set_aux_var_counter(AuxVarCounter, !Info) :-
    SubInfo0 = !.Info ^ mgi_sub_info,
    SubInfo = SubInfo0 ^ mgsi_aux_var_counter := AuxVarCounter,
    !Info ^ mgi_sub_info := SubInfo.
ml_gen_info_set_cond_var_counter(CondVarCounter, !Info) :-
    SubInfo0 = !.Info ^ mgi_sub_info,
    SubInfo = SubInfo0 ^ mgsi_cond_var_counter := CondVarCounter,
    !Info ^ mgi_sub_info := SubInfo.
ml_gen_info_set_conv_var_counter(ConvVarCounter, !Info) :-
    SubInfo0 = !.Info ^ mgi_sub_info,
    SubInfo = SubInfo0 ^ mgsi_conv_var_counter := ConvVarCounter,
    !Info ^ mgi_sub_info := SubInfo.
ml_gen_info_set_const_var_map(ConstVarMap, !Info) :-
    SubInfo0 = !.Info ^ mgi_sub_info,
    SubInfo = SubInfo0 ^ mgsi_const_var_map := ConstVarMap,
    !Info ^ mgi_sub_info := SubInfo.
ml_gen_info_set_success_cont_stack(SuccessContStack, !Info) :-
    SubInfo0 = !.Info ^ mgi_sub_info,
    SubInfo = SubInfo0 ^ mgsi_success_cont_stack := SuccessContStack,
    !Info ^ mgi_sub_info := SubInfo.
ml_gen_info_set_closure_wrapper_defns(ClosureWrapperDefns, !Info) :-
    SubInfo0 = !.Info ^ mgi_sub_info,
    SubInfo = SubInfo0 ^ mgsi_closure_wrapper_defns := ClosureWrapperDefns,
    !Info ^ mgi_sub_info := SubInfo.
ml_gen_info_set_env_var_names(EnvVarNames, !Info) :-
    SubInfo0 = !.Info ^ mgi_sub_info,
    SubInfo = SubInfo0 ^ mgsi_env_var_names := EnvVarNames,
    !Info ^ mgi_sub_info := SubInfo.

ml_gen_info_get_module_name(Info, ModuleName) :-
    ml_gen_info_get_module_info(Info, ModuleInfo),
    module_info_get_name(ModuleInfo, ModuleName).

ml_gen_info_use_gcc_nested_functions(Info, UseNestedFuncs) :-
    ml_gen_info_get_globals(Info, Globals),
    globals.lookup_bool_option(Globals, gcc_nested_functions,
        UseNestedFuncs).

ml_gen_info_put_commit_in_own_func(Info, PutCommitInNestedFunc) :-
    ml_gen_info_get_globals(Info, Globals),
    globals.lookup_bool_option(Globals, put_commit_in_own_func,
        PutCommitInNestedFunc).

ml_gen_info_get_globals(Info, Globals) :-
    ml_gen_info_get_module_info(Info, ModuleInfo),
    module_info_get_globals(ModuleInfo, Globals).

ml_gen_info_new_func_label(Label, !Info) :-
    ml_gen_info_get_func_counter(!.Info, Counter0),
    counter.allocate(Label, Counter0, Counter),
    ml_gen_info_set_func_counter(Counter, !Info).

ml_gen_info_new_label(Label, !Info) :-
    ml_gen_info_get_label_counter(!.Info, Counter0),
    counter.allocate(Label, Counter0, Counter),
    ml_gen_info_set_label_counter(Counter, !Info).

ml_gen_info_bump_counters(!Info) :-
    ml_gen_info_get_func_counter(!.Info, FuncLabelCounter0),
    counter.allocate(FuncLabel, FuncLabelCounter0, _),
    FuncLabelCounter = counter.init(FuncLabel + 10000),
    ml_gen_info_set_func_counter(FuncLabelCounter, !Info).

ml_gen_info_new_aux_var_name(Prefix, VarName, !Info) :-
    ml_gen_info_get_aux_var_counter(!.Info, AuxVarCounter0),
    counter.allocate(AuxVarNum, AuxVarCounter0, AuxVarCounter),
    ml_gen_info_set_aux_var_counter(AuxVarCounter, !Info),

    Name = Prefix ++ "_" ++ string.int_to_string(AuxVarNum),
    VarName = mlds_var_name(Name, no).

ml_gen_info_new_cond_var(cond_seq(CondNum), !Info) :-
    ml_gen_info_get_cond_var_counter(!.Info, CondCounter0),
    counter.allocate(CondNum, CondCounter0, CondCounter),
    ml_gen_info_set_cond_var_counter(CondCounter, !Info).

ml_gen_info_new_conv_var(conv_seq(ConvNum), !Info) :-
    ml_gen_info_get_conv_var_counter(!.Info, ConvCounter0),
    counter.allocate(ConvNum, ConvCounter0, ConvCounter),
    ml_gen_info_set_conv_var_counter(ConvCounter, !Info).

ml_gen_info_set_const_var(Var, GroundTerm, !Info) :-
    ml_gen_info_get_const_var_map(!.Info, ConstVarMap0),
    % We cannot call map.det_insert, because we do not (yet) clean up the
    % const_var_map at the start of later branches of a branched goal,
    % and thus when generating code for a later branch, we may come across
    % an entry left by an earlier branch. Using map.set instead throws away
    % such obsolete entries.
    map.set(Var, GroundTerm, ConstVarMap0, ConstVarMap),
    ml_gen_info_set_const_var_map(ConstVarMap, !Info).

ml_gen_info_lookup_const_var(Info, Var, GroundTerm) :-
    ml_gen_info_get_const_var_map(Info, ConstVarMap),
    map.lookup(ConstVarMap, Var, GroundTerm).

ml_gen_info_search_const_var(Info, Var, GroundTerm) :-
    ml_gen_info_get_const_var_map(Info, ConstVarMap),
    map.search(ConstVarMap, Var, GroundTerm).

ml_gen_info_push_success_cont(SuccCont, !Info) :-
    ml_gen_info_get_success_cont_stack(!.Info, Stack0),
    stack.push(SuccCont, Stack0, Stack),
    ml_gen_info_set_success_cont_stack(Stack, !Info).

ml_gen_info_pop_success_cont(!Info) :-
    ml_gen_info_get_success_cont_stack(!.Info, Stack0),
    stack.det_pop(_SuccCont, Stack0, Stack),
    ml_gen_info_set_success_cont_stack(Stack, !Info).

ml_gen_info_current_success_cont(Info, SuccCont) :-
    ml_gen_info_get_success_cont_stack(Info, Stack),
    stack.det_top(Stack, SuccCont).

ml_gen_info_set_var_lval(Var, Lval, !Info) :-
    ml_gen_info_get_var_lvals(!.Info, VarLvals0),
    map.set(Var, Lval, VarLvals0, VarLvals),
    ml_gen_info_set_var_lvals(VarLvals, !Info).

ml_gen_info_add_closure_wrapper_defn(ClosureWrapperDefn, !Info) :-
    ml_gen_info_get_closure_wrapper_defns(!.Info, ClosureWrapperDefns0),
    ClosureWrapperDefns = [ClosureWrapperDefn | ClosureWrapperDefns0],
    ml_gen_info_set_closure_wrapper_defns(ClosureWrapperDefns, !Info).

ml_gen_info_add_env_var_name(Name, !Info) :-
    ml_gen_info_get_env_var_names(!.Info, EnvVarNames0),
    set.insert(Name, EnvVarNames0, EnvVarNames),
    ml_gen_info_set_env_var_names(EnvVarNames, !Info).

%-----------------------------------------------------------------------------%
:- end_module ml_backend.ml_gen_info.
%-----------------------------------------------------------------------------%
