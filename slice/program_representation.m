%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2001-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU Library General
% Public License - see the file COPYING.LIB in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: program_representation.m
% Authors: zs, dougl
%
% This module defines the representation of procedure bodies
% used by the declarative debugger.
%
% One of the things we want the declarative debugger to be able to do
% is to let the user specify which part of which output argument of an
% incorrect or inadmissible atom is suspicious, and then find out where
% that particular subterm came from, i.e. where it was bound. Doing this
% requires knowing what the bodies of that procedure and its descendants are.
%
% If the Mercury compiler is invoked with options requesting declarative
% debugging, it will include in each procedure layout a pointer to a simplified
% representation of the goal that is the body of the corresponding procedure.
% We use a simplified representation partly because we want to insulate the
% code of the declarative debugger from irrelevant changes in HLDS types,
% and partly because we want to minimize the space taken in up in executables
% by these representations.
%
% The current representation is intended to contain all the information
% we are pretty sure can be usefully exploited by the declarative debugger.

%-----------------------------------------------------------------------------%

:- module mdbcomp.program_representation.
:- interface.

:- import_module mdbcomp.prim_data.

:- import_module bool.
:- import_module char.
:- import_module list.
:- import_module maybe.
:- import_module type_desc.

    % A representation of the goal we execute. These need to be generated
    % statically and stored inside the executable.
    %
    % Each element of this structure will correspond one-to-one
    % to the original stage 90 HLDS.

:- type proc_rep
    --->    proc_rep(
                list(var_rep),      % The head variables, in order,
                                    % including the ones introduced
                                    % by the compiler.
                goal_rep            % The procedure body.
            ).

:- type goal_rep
    --->    conj_rep(
                list(goal_rep)      % The conjuncts in the original order.
            )
    ;       disj_rep(
                list(goal_rep)      % The disjuncts in the original order.
            )
    ;       switch_rep(
                list(goal_rep)      % The switch arms in the original order.
            )
    ;       ite_rep(
                goal_rep,           % Condition.
                goal_rep,           % Then branch.
                goal_rep            % Else branch.
            )
    ;       negation_rep(
                goal_rep            % The negated goal.
            )
    ;       scope_rep(
                goal_rep,           % The quantified goal.
                maybe_cut
            )
    ;       atomic_goal_rep(
                detism_rep,
                string,             % Filename of context.
                int,                % Line number of context.
                list(var_rep),      % The sorted list of the variables
                                    % bound by the atomic goal.
                atomic_goal_rep
            ).

:- type atomic_goal_rep
    --->    unify_construct_rep(
                var_rep,
                cons_id_rep,
                list(var_rep)
            )
    ;       unify_deconstruct_rep(
                var_rep,
                cons_id_rep,
                list(var_rep)
            )
        ;   partial_deconstruct_rep(
                % A partial deconstruction of the form
                % X = f(Y_1, Y_2, ..., Y_n)
                % where X is more instanciated after the unification
                % than before.
                var_rep,            % X
                cons_id_rep,        % f
                list(maybe(var_rep))
                                    % The list of Y_i's. Y_i's which are input
                                    % are wrapped in `yes', while the other
                                    % Y_i positions are `no'.
            )
        ;   partial_construct_rep(
                % A partial construction of the form
                % X = f(Y_1, Y_2, ..., Y_n)
                % where X is free before the unification and bound,
                % but not ground, after the unification.
                var_rep,            % X
                cons_id_rep,        % f
                list(maybe(var_rep))
                                    % The list of Y_i's.  Y_i's which are input
                                    % are wrapped in `yes', while the other
                                    % Y_i positions are `no'.
            )
    ;       unify_assign_rep(
                var_rep,            % target
                var_rep             % source
            )
    ;       cast_rep(
                var_rep,            % target
                var_rep             % source
            )
    ;       unify_simple_test_rep(
                var_rep,
                var_rep
            )
    ;       pragma_foreign_code_rep(
                list(var_rep)       % arguments
            )
    ;       higher_order_call_rep(
                var_rep,            % the closure to call
                list(var_rep)       % the call's plain arguments
            )
    ;       method_call_rep(
                var_rep,            % typeclass info var
                int,                % method number
                list(var_rep)       % the call's plain arguments
            )
    ;       plain_call_rep(
                string,             % name of called pred's module
                string,             % name of the called pred
                list(var_rep)       % the call's arguments
            )
    ;       builtin_call_rep(
                string,             % name of called pred's module
                string,             % name of the called pred
                list(var_rep)       % the call's arguments
            )
    ;       event_call_rep(
                string,             % name of the event
                list(var_rep)       % the call's arguments
            ).

:- type var_rep ==  int.

:- type cons_id_rep ==  string.

:- type detism_rep
    --->    det_rep
    ;       semidet_rep
    ;       nondet_rep
    ;       multidet_rep
    ;       cc_nondet_rep
    ;       cc_multidet_rep
    ;       erroneous_rep
    ;       failure_rep.

    % If the given atomic goal behaves like a call in the sense that it
    % generates events as ordinary calls do, then return the list of variables
    % that are passed as arguments.
    %
:- func atomic_goal_generates_event_like_call(atomic_goal_rep) = maybe(list(var_rep)).

    % If the given goal generates internal events directly then this
    % function will return yes and no otherwise.
    %
:- func goal_generates_internal_event(goal_rep) = bool.

    % call_does_not_generate_events(ModuleName, PredName, Arity): succeeds iff
    % a call to the named predicate will not generate events in a debugging
    % grade.
    %
:- pred call_does_not_generate_events(string::in, string::in, int::in)
    is semidet.

    % The atomic goal's module, name and arity.
:- type atomic_goal_id
    ---> atomic_goal_id(string, string, int).

    % Can we find out the atomic goal's name, module and arity from
    % its atomic_goal_rep? If so return them, otherwise return no.
    %
:- func atomic_goal_identifiable(atomic_goal_rep) =
    maybe(atomic_goal_id).

%-----------------------------------------------------------------------------%

% We can think of the goal that defines a procedure to be a tree, whose leaves
% are primitive goals and whose interior nodes are compound goals. These two
% types describe the position of a goal in this tree. A goal_path_step type
% says which branch to take at an interior node; the integer counts start
% at one. (For switches, the second int, if present, gives the total number
% of function symbols in the type of the switched-on var; for builtin types
% such as integer and string, for which this number is effectively infinite,
% the second number won't be present.)
%
% The goal_path type gives the sequence of steps from the root to the given
% goal *in reverse order*, so that the step closest to the root is last.
% (Keeping the list in reverse order makes the common operations constant-time
% instead of linear in the length of the list.)

:- type goal_path == list(goal_path_step).

:- type goal_path_string == string.

:- type goal_path_step 
    --->    step_conj(int)
    ;       step_disj(int)
    ;       step_switch(int, maybe(int))
    ;       step_ite_cond
    ;       step_ite_then
    ;       step_ite_else
    ;       step_neg
    ;       step_scope(maybe_cut)
    ;       step_first
    ;       step_later.

    % Does the scope goal have a different determinism inside than outside?
:- type maybe_cut
    --->    scope_is_cut
    ;       scope_is_no_cut.

:- pred path_from_string_det(string::in, goal_path::out) is det.

    % This leaves the reverses the steps before converting them to a string.
    %
:- func goal_path_to_string(goal_path) = string.

    % This leaves the steps in the order in which they appear in goal_path;
    % if the steps are reversed in the goal_path (as usual), the end result
    % will be reversed too.
    %
:- func string_from_path(goal_path) = string.

:- pred path_from_string(string::in, goal_path::out) is semidet.

:- pred path_step_from_string(string::in, goal_path_step::out) is semidet.

:- pred is_path_separator(char::in) is semidet.

    % User-visible head variables are represented by a number from 1..N,
    % where N is the user-visible arity.
    %
    % Both user-visible and compiler-generated head variables can be
    % referred to via their position in the full list of head variables;
    % the first head variable is at position 1.

:- type arg_pos
    --->    user_head_var(int)  % Nth in the list of arguments after
                                % filtering out non-user-visible vars.
    ;       any_head_var(int)   % Nth in the list of all arguments.

    ;       any_head_var_from_back(int).
                                % (M-N+1)th argument in the list of all
                                % arguments, where N is the value of the int
                                % in the constructor and M is the total number
                                % of arguments.

    % A particular subterm within a term is represented by a term_path.
    % This is the list of argument positions that need to be followed
    % in order to travel from the root to the subterm. In contrast to
    % goal_paths, this list is in top-down order.
:- type term_path ==    list(int).

    % Returns type_of(_ `with_type` proc_rep), for use in C code.
    %
:- func proc_rep_type = type_desc.

    % Returns type_of(_ `with_type` goal_rep), for use in C code.
    %
:- func goal_rep_type = type_desc.

    % Construct a representation of the interface determinism of a
    % procedure. The code we have chosen is not sequential; instead
    % it encodes the various properties of each determinism.
    % This must match the encoding of MR_Determinism in
    % mercury_stack_layout.h.
    %
    % The 8 bit is set iff the context is first_solution.
    % The 4 bit is set iff the min number of solutions is more than zero.
    % The 2 bit is set iff the max number of solutions is more than zero.
    % The 1 bit is set iff the max number of solutions is more than one.
    %
:- func detism_rep(detism_rep) = int.

:- pred determinism_representation(detism_rep, int).
:- mode determinism_representation(in, out) is det.
:- mode determinism_representation(out, in) is semidet.

:- type bytecode_goal_type
    --->    goal_conj
    ;       goal_disj
    ;       goal_switch
    ;       goal_ite
    ;       goal_neg
    ;       goal_scope
    ;       goal_construct
    ;       goal_deconstruct
    ;       goal_partial_construct
    ;       goal_partial_deconstruct
    ;       goal_assign
    ;       goal_cast
    ;       goal_simple_test
    ;       goal_foreign
    ;       goal_ho_call
    ;       goal_method_call
    ;       goal_plain_call
    ;       goal_builtin_call
    ;       goal_event_call.

:- func goal_type_to_byte(bytecode_goal_type) = int.

:- func byte_to_goal_type(int) = bytecode_goal_type is semidet.

    % A variable number is represented in a byte if there are no more than
    % 255 variables in the procedure.  Otherwise a short is used.
    %
:- type var_num_rep
    --->    byte
    ;       short.

:- pred var_num_rep_byte(var_num_rep, int).
:- mode var_num_rep_byte(in, out) is det.
:- mode var_num_rep_byte(out, in) is semidet.

    % Some predicates that operate on polymorphic values do not need
    % the type_infos describing the types bound to the variables.
    % It is of course faster not to pass type_infos to such predicates
    % (especially since we may also be able to avoid constructing those
    % type_infos), and it can also be easier for a compiler module
    % (e.g. common.m, size_prof.m) that generates calls to such predicates
    % not to have to create those type_infos.
    %
    % All the predicates for whose names no_type_info_builtin succeeds
    % are defined by compiler implementors. They are all predicates
    % implemented by foreign language code in the standard library.
    % For some, but not all, the compiler generates code inline.
    %
    % If you are adding a predicate to no_type_info_builtin, remember that
    % this will only affect code built by a compiler linked with the new
    % mdbcomp library.  e.g. if you add a predicate P to no_type_info_builtin,
    % the compiler building the stage 1 library won't yet know about P.
    % The stage 1 compiler _will_ know about P, so stage 2 is when P will
    % be compiled differently.
    %
:- pred no_type_info_builtin(module_name::in, string::in, int::in) is semidet.

%-----------------------------------------------------------------------------%

:- implementation.

:- import_module char.
:- import_module require.
:- import_module string.

atomic_goal_generates_event_like_call(unify_construct_rep(_, _, _)) = no.
atomic_goal_generates_event_like_call(unify_deconstruct_rep(_, _, _)) = no.
atomic_goal_generates_event_like_call(partial_construct_rep(_, _, _)) = no.
atomic_goal_generates_event_like_call(partial_deconstruct_rep(_, _, _)) = no.
atomic_goal_generates_event_like_call(unify_assign_rep(_, _)) = no.
atomic_goal_generates_event_like_call(unify_simple_test_rep(_, _)) = no.
atomic_goal_generates_event_like_call(cast_rep(_, _)) = no.
atomic_goal_generates_event_like_call(pragma_foreign_code_rep(_)) = no.
atomic_goal_generates_event_like_call(higher_order_call_rep(_, Args)) =
        yes(Args).
atomic_goal_generates_event_like_call(method_call_rep(_, _, Args)) = yes(Args).
atomic_goal_generates_event_like_call(builtin_call_rep(_, _, _)) = no.
atomic_goal_generates_event_like_call(plain_call_rep(ModuleName, PredName,
        Args)) =
    ( call_does_not_generate_events(ModuleName, PredName, list.length(Args)) ->
        no
    ;
        yes(Args)
    ).
atomic_goal_generates_event_like_call(event_call_rep(_, _)) = no.

call_does_not_generate_events(ModuleName, PredName, Arity) :-
    (
        SymModuleName = string_to_sym_name(ModuleName),
        non_traced_mercury_builtin_module(SymModuleName)
    ;
        % The debugger cannot handle calls to polymorphic builtins that 
        % do not take a type_info argument, so such calls are not traced.
        SymModuleName = string_to_sym_name(ModuleName),
        no_type_info_builtin(SymModuleName, PredName, Arity)
    ;
        pred_is_external(ModuleName, PredName, Arity)
    ;
        % Events from compiler generated predicates are not included in the
        % annotated trace at the moment.
        (
            PredName = "__Unify__"
        ;
            PredName = "__Index__"
        ;
            PredName = "__Compare__"
        )
    ).

goal_generates_internal_event(conj_rep(_)) = no.
goal_generates_internal_event(disj_rep(_)) = yes.
goal_generates_internal_event(switch_rep(_)) = yes.
goal_generates_internal_event(ite_rep(_, _, _)) = yes.
goal_generates_internal_event(negation_rep(_)) = yes.
goal_generates_internal_event(scope_rep(_, _)) = no.
% Atomic goals may generate interface events, not internal events.
goal_generates_internal_event(atomic_goal_rep(_, _, _, _, _)) = no.

atomic_goal_identifiable(unify_construct_rep(_, _, _)) = no.
atomic_goal_identifiable(unify_deconstruct_rep(_, _, _)) = no.
atomic_goal_identifiable(partial_construct_rep(_, _, _)) = no.
atomic_goal_identifiable(partial_deconstruct_rep(_, _, _)) = no.
atomic_goal_identifiable(unify_assign_rep(_, _)) = no.
atomic_goal_identifiable(unify_simple_test_rep(_, _)) = no.
atomic_goal_identifiable(cast_rep(_, _)) = no.
atomic_goal_identifiable(pragma_foreign_code_rep(_)) = no.
atomic_goal_identifiable(higher_order_call_rep(_, _)) = no.
atomic_goal_identifiable(method_call_rep(_, _, _)) = no.
atomic_goal_identifiable(builtin_call_rep(Module, Name, Args)) =
    yes(atomic_goal_id(Module, Name, length(Args))).
atomic_goal_identifiable(plain_call_rep(Module, Name, Args)) =
    yes(atomic_goal_id(Module, Name, length(Args))).
atomic_goal_identifiable(event_call_rep(_, _)) = no.

:- pragma export(proc_rep_type = out, "ML_proc_rep_type").

proc_rep_type = type_of(_ `with_type` proc_rep).

:- pragma export(goal_rep_type = out, "ML_goal_rep_type").

goal_rep_type = type_of(_ `with_type` goal_rep).

%-----------------------------------------------------------------------------%

path_from_string_det(GoalPathStr, GoalPath) :-
    ( path_from_string(GoalPathStr, GoalPathPrime) ->
        GoalPath = GoalPathPrime
    ;
        error("path_from_string_det: path_from_string failed")
    ).

path_from_string(GoalPathStr, GoalPath) :-
    StepStrs = string.words_separator(is_path_separator, GoalPathStr),
    list.map(path_step_from_string, StepStrs, GoalPath).

path_step_from_string(String, Step) :-
    string.first_char(String, First, Rest),
    path_step_from_string_2(First, Rest, Step).

:- pred path_step_from_string_2(char::in, string::in, goal_path_step::out)
    is semidet.

path_step_from_string_2('c', NStr, step_conj(N)) :-
    string.to_int(NStr, N).
path_step_from_string_2('d', NStr, step_disj(N)) :-
    string.to_int(NStr, N).
path_step_from_string_2('s', Str, step_switch(N, MaybeM)) :-
    string.words_separator(unify('-'), Str) = [NStr, MStr],
    string.to_int(NStr, N),
    % short for "not applicable"
    ( MStr = "na" ->
        MaybeM = no
    ;
        string.to_int(MStr, M),
        MaybeM = yes(M)
    ).
path_step_from_string_2('?', "", step_ite_cond).
path_step_from_string_2('t', "", step_ite_then).
path_step_from_string_2('e', "", step_ite_else).
path_step_from_string_2('~', "", step_neg).
path_step_from_string_2('q', "!", step_scope(scope_is_cut)).
path_step_from_string_2('q', "", step_scope(scope_is_no_cut)).
path_step_from_string_2('f', "", step_first).
path_step_from_string_2('l', "", step_later).

is_path_separator(';').

goal_path_to_string(GoalPath) =
    string.append_list(list.map(goal_path_step_to_string,
        list.reverse(GoalPath))).

string_from_path(GoalPath) =
    string.append_list(list.map(goal_path_step_to_string, GoalPath)).

:- func goal_path_step_to_string(goal_path_step) = string.

goal_path_step_to_string(step_conj(N)) = "c" ++ int_to_string(N) ++ ";".
goal_path_step_to_string(step_disj(N)) = "d" ++ int_to_string(N) ++ ";".
goal_path_step_to_string(step_switch(N, yes(M))) = "s" ++ int_to_string(N)
    ++ "-" ++ int_to_string(M) ++ ";".
goal_path_step_to_string(step_switch(N, no)) = "s" ++ int_to_string(N)
    ++ "-na;".      % short for "not applicable"
goal_path_step_to_string(step_ite_cond) = "?;".
goal_path_step_to_string(step_ite_then) = "t;".
goal_path_step_to_string(step_ite_else) = "e;".
goal_path_step_to_string(step_neg) = "~;".
goal_path_step_to_string(step_scope(scope_is_cut)) = "q!;".
goal_path_step_to_string(step_scope(scope_is_no_cut)) = "q;".
goal_path_step_to_string(step_first) = "f;".
goal_path_step_to_string(step_later) = "l;".

%-----------------------------------------------------------------------------%

detism_rep(Detism) = Rep :-
    determinism_representation(Detism, Rep).

% This encoding must match the encoding of MR_Determinism in
% runtime/mercury_stack_layout.h. The rationale for this encoding
% is documented there.

determinism_representation(det_rep, 6).
determinism_representation(semidet_rep, 2).
determinism_representation(nondet_rep, 3).
determinism_representation(multidet_rep, 7).
determinism_representation(erroneous_rep, 4).
determinism_representation(failure_rep, 0).
determinism_representation(cc_nondet_rep, 10).
determinism_representation(cc_multidet_rep, 14).

%-----------------------------------------------------------------------------%

goal_type_to_byte(Type) = TypeInt :-
    goal_type_byte(TypeInt, Type).

byte_to_goal_type(TypeInt) = Type :-
    goal_type_byte(TypeInt, Type).

:- pred goal_type_byte(int, bytecode_goal_type).
:- mode goal_type_byte(in, out) is semidet.
:- mode goal_type_byte(out, in) is det.

goal_type_byte(1, goal_conj).
goal_type_byte(2, goal_disj).
goal_type_byte(3, goal_switch).
goal_type_byte(4, goal_ite).
goal_type_byte(5, goal_neg).
goal_type_byte(6, goal_scope).
goal_type_byte(7, goal_construct).
goal_type_byte(8, goal_deconstruct).
goal_type_byte(9, goal_partial_construct).
goal_type_byte(10, goal_partial_deconstruct).
goal_type_byte(11, goal_assign).
goal_type_byte(12, goal_cast).
goal_type_byte(13, goal_simple_test).
goal_type_byte(14, goal_foreign).
goal_type_byte(15, goal_ho_call).
goal_type_byte(16, goal_method_call).
goal_type_byte(17, goal_plain_call).
goal_type_byte(18, goal_builtin_call).
goal_type_byte(19, goal_event_call).

%-----------------------------------------------------------------------------%

var_num_rep_byte(byte, 0).
var_num_rep_byte(short, 1).

%-----------------------------------------------------------------------------%

no_type_info_builtin(ModuleName, PredName, Arity) :-
    no_type_info_builtin_2(ModuleNameType, PredName, Arity),
    (
        ModuleNameType = builtin,
        ModuleName = mercury_public_builtin_module
    ;
        ModuleNameType = private_builtin,
        ModuleName = mercury_private_builtin_module
    ;
        ModuleNameType = table_builtin,
        ModuleName = mercury_table_builtin_module
    ;
        ModuleNameType = term_size_prof_builtin,
        ModuleName = mercury_term_size_prof_builtin_module
    ;
        ModuleNameType = par_builtin,
        ModuleName = mercury_par_builtin_module
    ).

:- type builtin_mod
    --->    builtin
    ;       private_builtin
    ;       table_builtin
    ;       term_size_prof_builtin
    ;       par_builtin.

:- pred no_type_info_builtin_2(builtin_mod::out, string::in, int::in)
    is semidet.

no_type_info_builtin_2(private_builtin, "store_at_ref", 2).
no_type_info_builtin_2(private_builtin, "unsafe_type_cast", 2).
no_type_info_builtin_2(builtin, "unsafe_promise_unique", 2).
no_type_info_builtin_2(private_builtin,
    "superclass_from_typeclass_info", 3).
no_type_info_builtin_2(private_builtin,
    "instance_constraint_from_typeclass_info", 3).
no_type_info_builtin_2(private_builtin,
    "type_info_from_typeclass_info", 3).
no_type_info_builtin_2(private_builtin,
    "unconstrained_type_info_from_typeclass_info", 3).
no_type_info_builtin_2(private_builtin, "builtin_compound_eq", 2).
no_type_info_builtin_2(private_builtin, "builtin_compound_lt", 2).
no_type_info_builtin_2(table_builtin, "table_restore_any_answer", 3).
no_type_info_builtin_2(table_builtin, "table_lookup_insert_enum", 4).
no_type_info_builtin_2(table_builtin, "table_lookup_insert_typeinfo", 3).
no_type_info_builtin_2(table_builtin, "table_lookup_insert_typeclassinfo", 3).
no_type_info_builtin_2(term_size_prof_builtin, "increment_size", 2).
no_type_info_builtin_2(par_builtin, "new_future", 1).
no_type_info_builtin_2(par_builtin, "wait", 2).
no_type_info_builtin_2(par_builtin, "get", 2).
no_type_info_builtin_2(par_builtin, "signal", 2).

    % True iff the given predicate is defined with an :- external
    % declaration.  Note that the arity includes the hidden type info
    % arguments for polymorphic predicates.
    %
:- pred pred_is_external(string::in, string::in, int::in) is semidet.

pred_is_external("exception", "builtin_catch", 4).
pred_is_external("exception", "builtin_throw", 1).
pred_is_external("builtin", "unify", 3).
pred_is_external("builtin", "compare", 4).
pred_is_external("builtin", "compare_representation", 4).

%-----------------------------------------------------------------------------%
