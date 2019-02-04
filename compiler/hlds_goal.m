%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1996-2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: hlds_goal.m.
% Main authors: fjh, conway.
%
% The module defines the part of the HLDS that deals with goals.
%
%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- module hlds.hlds_goal.
:- interface.

:- import_module hlds.hlds_data.
:- import_module hlds.hlds_llds.
:- import_module hlds.hlds_pred.
:- import_module hlds.instmap.
:- import_module mdbcomp.
:- import_module mdbcomp.goal_path.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.prog_data.

:- import_module assoc_list.
:- import_module bool.
:- import_module char.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module set.
:- import_module term.

%-----------------------------------------------------------------------------%
%
% Goal representation.
%

:- type hlds_goals  == list(hlds_goal).

:- type hlds_goal
    --->    hlds_goal(
                hlds_goal_expr      :: hlds_goal_expr,
                hlds_goal_info      :: hlds_goal_info
            ).

:- func get_hlds_goal_expr(hlds_goal) = hlds_goal_expr.
:- func get_hlds_goal_info(hlds_goal) = hlds_goal_info.

:- type hlds_goal_expr

    --->    unify(
                % A unification. Initially only the terms and the context
                % are known. Mode analysis fills in the missing information.

                unify_lhs           :: prog_var,
                                    % The variable on the left hand side
                                    % of the unification.  NOTE: for
                                    % convenience this field is duplicated
                                    % in the unification structure below.

                unify_rhs           :: unify_rhs,
                                    % Whatever is on the right hand side
                                    % of the unification.

                unify_mode          :: unify_mode,
                                    % the mode of the unification.

                unify_kind          :: unification,
                                    % This field says what category of
                                    % unification it is, and contains
                                    % information specific to each category.

                unify_context       :: unify_context
                                    % The location of the unification
                                    % in the original source code
                                    % (for use in error messages).
            )

    ;       plain_call(
                % A predicate call. Initially only the sym_name, arguments,
                % and context are filled in. Type analysis fills in the
                % pred_id. Mode analysis fills in the proc_id and
                % builtin_state fields.

                call_pred_id        :: pred_id,
                                    % Which predicate are we calling?

                call_proc_id        :: proc_id,
                                    % Which mode of the predicate?

                call_args           :: list(prog_var),
                                    % The list of argument variables.

                call_builtin        :: builtin_state,
                                    % Is the predicate builtin, and if yes,
                                    % do we generate inline code for it?

                call_unify_context  :: maybe(call_unify_context),
                                    % Was this predicate call originally
                                    % a unification? If so, we store the
                                    % context of the unification.

                call_sym_name       :: sym_name
                                    % The name of the predicate.
            )

    ;       generic_call(
                % A generic call implements operations which are too
                % polymorphic to be written as ordinary predicates in Mercury
                % and require special casing, either because their arity is
                % variable, or they take higher-order arguments of variable
                % arity. This currently includes higher-order calls and
                % class-method calls.
                %
                gcall_details       :: generic_call,

                gcall_args          :: list(prog_var),
                                    % The list of argument variables.

                gcall_modes         :: list(mer_mode),
                                    % The modes of the argument variables.
                                    % For higher_order calls, this field
                                    % is junk until after mode analysis.

                gcall_detism        :: determinism
                                    % The determinism of the call.
            )

    ;       call_foreign_proc(
                % Foreign code from a pragma foreign_proc(...) decl.

                foreign_attr        :: pragma_foreign_proc_attributes,

                foreign_pred_id     :: pred_id,
                                    % The called predicate.

                foreign_proc_id     :: proc_id,
                                    % The mode of the predicate.

                foreign_args        :: list(foreign_arg),
                foreign_extra_args  :: list(foreign_arg),
                                    % Extra arguments added when compiler
                                    % passes such as tabling stuff more
                                    % code into a foreign proc than the
                                    % declared interface of the called
                                    % Mercury procedure would allow.

                foreign_trace_cond  :: maybe(trace_expr(trace_runtime)),
                                    % If set to yes(Cond), then this goal
                                    % represents the evaluation of the runtime
                                    % condition of a trace goal. In that case,
                                    % the goal must be semidet, and the
                                    % argument lists empty; the actual code
                                    % in pragma_foreign_code_impl is ignored
                                    % and replaced by the evaluation of Cond.

                foreign_impl        :: pragma_foreign_code_impl
                                    % Extra information for model_non
                                    % pragma_foreign_codes; none for others.
            )

    ;       conj(conj_type, list(hlds_goal))
            % A conjunction. NOTE: plain conjunctions must be fully flattened
            % before mode analysis. As a general rule, it is a good idea to
            % keep them flattened.

    ;       disj(list(hlds_goal))
            % A disjunction.
            % NOTE: disjunctions should be fully flattened.

    ;       switch(
                % Deterministic disjunctions are converted into switches
                % by the switch detection pass.

                switch_var          :: prog_var,
                                    % The variable we are switching on.

                switch_canfail      :: can_fail,
                                    % Whether or not the switch test itself
                                    % can fail (i.e. whether or not it
                                    % covers all the possible cases).

                switch_cases        :: list(case)
            )

    ;       negation(hlds_goal)
            % A negation.

    ;       scope(
                % A scope which may be the scope of a quantification,
                % or may be introduced by a compiler transformation.
                % See the documentation of scope_reason for what the
                % compiler may do with the scope.

                scope_reason        :: scope_reason,
                scope_goal          :: hlds_goal
            )

    ;       if_then_else(
                % An if-then-else,
                % `if some <Vars> <Condition> then <Then> else <Else>'.
                % The scope of the locally existentially quantified variables
                % <Vars> is over the <Condition> and the <Then> part,
                % but not the <Else> part.

                ite_exist_vars      :: list(prog_var),
                                    % The locally existentially quantified
                                    % variables <Vars>.

                ite_cond            :: hlds_goal,   % The <Condition>
                ite_then            :: hlds_goal,   % The <Then> part
                ite_else            :: hlds_goal    % The <Else> part
            )

    ;       shorthand(shorthand_goal_expr).
            % Goals that stand for some other, usually bigger goal.
            % All shorthand goals are eliminated during or shortly after
            % the construction of the HLDS, so most passes of the compiler
            % will just call error/1 if they occur.

:- inst goal_expr_unify
    --->    unify(ground, ground, ground, ground, ground).
:- inst goal_expr_plain_call
    --->    plain_call(ground, ground, ground, ground, ground, ground).
:- inst goal_expr_generic_call
    --->    generic_call(ground, ground, ground, ground).
:- inst goal_expr_foreign_proc
    --->    call_foreign_proc(ground, ground, ground, ground, ground,
                ground, ground).
:- inst goal_expr_conj
    --->    conj(ground, ground).
:- inst goal_expr_plain_conj
    --->    conj(bound(plain_conj), ground).
:- inst goal_expr_parallel_conj
    --->    conj(bound(parallel_conj), ground).
:- inst goal_expr_disj
    --->    disj(ground).
:- inst goal_expr_switch
    --->    switch(ground, ground, ground).
:- inst goal_expr_ite
    --->    if_then_else(ground, ground, ground, ground).
:- inst goal_expr_neg
    --->    negation(ground).
:- inst goal_expr_scope
    --->    scope(ground, ground).
:- inst goal_expr_shorthand
    --->    shorthand(ground).

:- inst plain_call_expr
    --->    plain_call(ground, ground, ground, ground, ground, ground).
:- inst plain_call
    --->    hlds_goal(plain_call_expr, ground).

:- type conj_type
    --->    plain_conj
    ;       parallel_conj.

    % These `shorthand' goals are implemented by HLDS --> HLDS transformations
    % that replaces them with equivalent non-shorthand goals.
    %
:- type shorthand_goal_expr
    --->    bi_implication(
                % bi-implication (A <=> B)
                %
                % Note that ordinary implications (A => B) and reverse
                % implications (A <= B) are expanded out before we construct
                % the HLDS.  We cannot do that for bi-implications, because
                % if expansion of bi-implications is done before implicit
                % quantification, then the quantification would be wrong.
                %
                % bi_implications are expanded out by quantification.m.

                hlds_goal,
                hlds_goal
            )

    ;       atomic_goal(
                % An atomic goal that will be executed atomically against
                % all running threads using the stm system.

                % The type of atomic goal. Either a top level atomic goal,
                % or a nested atomic goal. This isn't known until after
                % typechecking.
                atomic_goal_type    :: atomic_goal_type,

                % The variables representing the initial and final versions
                % of the outer state. For top level atomic goals, of type
                % io.state; for nested atomic goals, of type stm_builtin.stm.
                atomic_outer        :: atomic_interface_vars,

                % The variables representing the initial and final versions
                % of the inner state (always of type stm_builtin.stm).
                atomic_inner        :: atomic_interface_vars,

                % List of output variables specified with `var(...)`.
                % These variables should be free when the atomic goal
                % is started and ground when the atomic goal is complete.
                atomic_output_vars  :: maybe(list(prog_var)),

                % The main atomic transaction goal. If any or_else goals
                % also exist, this goal is the first or_else alternative.
                atomic_main_goal    :: hlds_goal,

                % Any later or_else alternative goals.
                orelse_alternatives :: list(hlds_goal),

                % The same as atomic_inner, but for each corresponding goal
                % in orelse_alternatives. Begins as an empty list, but is
                % filled in when quantification renames the inner stm state
                % variables apart in each of the or_else alternatives.
                orelse_inners       :: list(atomic_interface_vars)
            )

    ;       try_goal(
                % A try goal.

                % The variables holding the initial and final I/O states for
                % the goal to be executed in the `try' proper, i.e. not
                % inclusive of the I/O states that may be in the arms following
                % the try.  Will be `no' if no `io(_)' component was specified.
                try_maybe_io        :: maybe(try_io_state_vars),

                % The variable that will hold the result of the `try' or
                % `try_io' call.
                try_result_var      :: prog_var,

                % A "pre-transformed" version of the entire try goal.
                % See try_expand.m for details.
                try_goal            :: hlds_goal
            ).

:- type atomic_interface_vars
    --->    atomic_interface_vars(
                atomic_initial  :: prog_var,
                atomic_final    :: prog_var
            ).

:- type try_io_state_vars
    --->    try_io_state_vars(
                try_io_initial  :: prog_var,
                try_io_final    :: prog_var
            ).

    % If an atomic goal has type unknown_atomic_goal_type, then the conversion
    % predicates to and from the inner variables have not been added yet to the
    % main and orelse goals. If the type is top_level_atomic_goal or
    % nested_atomic_goal, then the conversion predicates *have* been added.
:- type atomic_goal_type
    --->    unknown_atomic_goal_type
    ;       top_level_atomic_goal
    ;       nested_atomic_goal.

:- type catch_part
    --->    catch_part(
                catch_expr  :: hlds_goal_expr,
                catch_goal  :: hlds_goal
            ).

    % Each scope that is created from the expansion of a ground term above
    % a certain size is classified into one of these three categories.
    % The categories are for scopes that (a) construct a ground term, (b)
    % take an existing ground term and test whether it has a given shape, and
    % (c) everything else (perhaps some parts of the term are matched and some
    % parts are bound, or some invariant listed below is not guaranteed).
    %
    % Many parts of the compiler have special code for handling
    % from_ground_term_construct scopes, code that avoids scanning the code
    % inside the scope. This can be a very big win, since that code can be
    % huge. To make this special casing possible, from_ground_term_construct
    % scopes promise the following invariants.
    %
    % 1. The only nonlocal variable of the scope is the one listed in the
    %    scope_reason.
    % 2. The shape of the code inside the scope is a plain conjunction of
    %    unifications.
    % 3. These unifications are construct unifications whose construct_how
    %    field says construct_statically, and in which the nonlocals,
    %    instmap_delta and determinism fields of the goal_info are
    %    correctly filled in. The nonlocals will be all the variables in the
    %    unification, the instmap delta will say that the value being
    %    constructed is ground (not unique, because it is static), and the
    %    determinism says that the goal is det. The goal_info of the
    %    conjunction will be filled in similarly.
    % 4. None of the these unifications constructs a higher order value.
    %
    % Invariants 3 and 4 are established during mode checking, so code executed
    % before then cannot rely on them.
    %
    % If any compiler pass modifies a from_ground_term_construct scope in a way
    % that invalidates these invariants, it must set the kind field of the
    % scope to from_ground_term_other (or from_ground_term_deconstruct).
    % If the original scope had the from_head feature, the code that does this
    % must also attach that feature to all the subgoals of the modified scope,
    % unless we can  be sure that it is executed *after* switch detection,
    % which is the only pass that looks for from_head features, and which looks
    % in all scopes *except* from_ground_term_construct scopes.
    %
    % For now, we don't optimize from_ground_term_deconstruct and
    % from_ground_term_other scopes, so there are no invariants required
    % of them.
    %
    % There are several possible alternative designs that could allow the
    % special-casing of from_ground_term_construct scopes. Here are two
    % of them.
    %
    % One alternative is to have fourth kind, from_ground_term_initial,
    % which would promise only the first two invariants, so compiler writers
    % wouldn't have to worry about when a piece of code is executed if they
    % need to depend on invariants 3 and/or 4. This works, but it leads to
    % a slight slowdown normal code (code without big ground terms).
    %
    % A second alternative is to have the mode checker turn any scope
    % that it currently keeps as from_ground_term_construct into a new kind
    % of generic call, one which basically says "this goal binds this variable
    % to this ground term", with the ground term represented as a ground term,
    % not as a bunch of construction unifications. The advantage of this
    % approach would be that we could delete the local variables of these
    % scopes (of which there can be hundreds of thousands) from the maps stored
    % in the fields of the pred_info and proc_info (such as the varset and the
    % var_types), making lookups and other operations on those maps
    % significantly faster. The drawback would be the need for totally new code
    % in most parts of the compiler to handle this new kind of goal.
    % Using from_ground_term_construct, on the other hand, allows us to keep
    % using the existing code for scopes in e.g. the type checker and the code
    % generator.
    %
:- type from_ground_term_kind
    --->    from_ground_term_construct
    ;       from_ground_term_deconstruct
    ;       from_ground_term_other.

:- type scope_reason
    --->    exist_quant(list(prog_var))
            % The goal inside the scope construct has the listed variables
            % existentially quantified. The compiler may do whatever
            % preserves this fact.

    ;       promise_solutions(list(prog_var), promise_solutions_kind)
            % Even though the code inside the scope may have multiple
            % solutions, the creator of the scope (which may be the user
            % or a compiler pass) promises that all these solutions are
            % equivalent relative to the relevant equality theory.
            % (This need not be an equality theory known to the compiler.)
            % The scope goal will therefore act as a single solution
            % context, and the determinism of the scope() goal itself
            % will indicate that it cannot succeed more than once.
            %
            % This acts like the builtin.promise_only_solution predicate,
            % but without requiring the construction of a closure, a
            % higher order call, and the squeezing of all outputs into
            % a single variable.
            %
            % The promise is valid only if the list of outputs of the goal
            % inside the scope is a subset of the variables listed here.
            % If it is not valid, the compiler must emit an error message.

    ;       promise_purity(purity)
            % The goal inside the scope implements an interface of the
            % specified purity, even if its implementation uses less pure
            % components.
            %
            % Works the same way as a promise_pure or promise_semipure
            % pragma, except that it applies to arbitrary goals and not
            % just whole procedure bodies.

    ;       require_detism(determinism)
            % Require the wrapped subgoal to have the specified determinism.
            % If it does not, report an error.
            % This scope reason should not exist after the first invocation
            % of simplification.

    ;       require_complete_switch(prog_var)
            % If the wrapped subgoal is a switch on the given variable,
            % require it have arms for every function symbol in the type
            % of that variable. If it does not, report an error.
            % This scope reason should not exist after the first invocation
            % of simplification.

    ;       commit(force_pruning)
            % This scope exists to delimit a piece of code
            % with at_most_many components but with no outputs,
            % whose overall determinism is thus at_most_one,
            % or a piece of code that cannot succeed but some of whose
            % components are at_most_many (regardless of the number of
            % outputs).
            %
            % If the argument is force_pruning, then the outer goal will
            % succeed at most once even if the inner goal is impure.

    ;       barrier(removable)
            % The scope exists to prevent other compiler passes from
            % arbitrarily moving computations in or out of the scope.
            % This kind of scope can only be introduced by program
            % transformations.
            %
            % The argument says whether other compiler passes are allowed
            % to delete the scope.
            %
            % A non-removable explicit quantification may be introduced
            % to keep related goals together where optimizations that
            % separate the goals can only result in worse behaviour.
            %
            % A barrier says nothing about the determinism of either
            % the inner or the outer goal, or about pruning.

    ;       from_ground_term(prog_var, from_ground_term_kind)
            % The goal inside the scope, which should be a conjunction,
            % results from the conversion of one ground term to
            % superhomogeneous form. The variable specifies what the
            % compiler calls that ground term.
            %
            % This kind of scope is intended to be meaningful after
            % mode analysis only if Kind = from_ground_term_construct.

    ;       trace_goal(
                trace_compiletime   :: maybe(trace_expr(trace_compiletime)),
                trace_runtime       :: maybe(trace_expr(trace_runtime)),
                trace_maybe_io      :: maybe(string),
                trace_mutable_vars  :: list(trace_mutable_var_hlds),
                trace_quant_vars    :: list(prog_var)
            ).
            % The goal inside the scope is trace code that is executed only
            % conditionally, and should have no effect on the semantics of
            % the program even if executed.
            %
            % The trace goal is removed by simplification if the compile time
            % condition isn't true. If it is true, the code generator will
            % generate code that will execute the goal inside the scope
            % only if the runtime condition is satisfied.
            %
            % The maybe_io and mutable_vars fields are advisory only in the
            % HLDS, since they are fully processed when the corresponding goal
            % in the parse tree is converted to HLDS.

:- type promise_solutions_kind
    --->    equivalent_solutions
    ;       equivalent_solution_sets
    ;       equivalent_solution_sets_arbitrary.

:- type removable
    --->    removable
    ;       not_removable.

:- type force_pruning
    --->    force_pruning
    ;       dont_force_pruning.

:- type trace_mutable_var_hlds
    --->    trace_mutable_var_hlds(
                tmvh_mutable_name       :: string,
                tmvh_state_var_name     :: string
            ).

:- type is_first_disjunct
    --->    is_first_disjunct
    ;       is_not_first_disjunct.

%-----------------------------------------------------------------------------%
%
% Information for calls
%

    % There may be two sorts of "builtin" predicates - those that we open-code
    % using inline instructions (e.g. arithmetic predicates), and those which
    % are still "internal", but for which we generate a call to an out-of-line
    % procedure. At the moment there are no builtins of the second sort,
    % although we used to handle call/N that way.

:- type builtin_state
    --->    inline_builtin
    ;       out_of_line_builtin
    ;       not_builtin.

%-----------------------------------------------------------------------------%
%
% Information for call_foreign_proc
%

    % In the usual case, the arguments of a foreign_proc are the arguments
    % of the call to the predicate whose implementation is in the foreign
    % language. Each such argument is described by a foreign_arg.
    %
    % The arg_var field gives the identity of the actual parameter.
    %
    % The arg_name_mode field gives the foreign variable name and the original
    % mode declaration for the argument; a no means that the argument is not
    % used by the foreign code. (In particular, the type_info variables
    % introduced by polymorphism.m might be represented in this way).
    %
    % The arg_type field gives the original types of the arguments.
    % (With inlining, the actual type may be an instance of the original type.)
    %
:- type foreign_arg
    --->    foreign_arg(
                arg_var         :: prog_var,
                arg_name_mode   :: maybe(pair(string, mer_mode)),
                arg_type        :: mer_type,
                arg_box_policy  :: box_policy
            ).

:- func foreign_arg_var(foreign_arg) = prog_var.
:- func foreign_arg_maybe_name_mode(foreign_arg) =
    maybe(pair(string, mer_mode)).
:- func foreign_arg_type(foreign_arg) = mer_type.
:- func foreign_arg_box(foreign_arg) = box_policy.

:- pred make_foreign_args(list(prog_var)::in,
    list(pair(maybe(pair(string, mer_mode)), box_policy))::in,
    list(mer_type)::in, list(foreign_arg)::out) is det.

%-----------------------------------------------------------------------------%
%
% Information for generic_calls
%

:- type generic_call
    --->    higher_order(
                ho_call_var     :: prog_var,
                ho_call_purity  :: purity,
                ho_call_kind    :: pred_or_func,
                                % call/N (pred) or apply/N (func)
                ho_call_arity   :: arity
                                % number of arguments (including the
                                % higher-order term)
            )

    ;       class_method(
                method_tci      :: prog_var,
                                % typeclass_info for the instance
                method_num      :: int,
                                % number of the called method
                method_class_id :: class_id,
                                % name and arity of the class
                method_name     :: simple_call_id
                                % name of the called method
            )

    ;       event_call(
                event_name      :: string
            )

    ;       cast(
                cast_kind       :: cast_kind
                % cast(Input, Output): Assigns `Input' to `Output', performing
                % a type and/or inst cast.
            ).

    % The various kinds of casts that we can do.
    %
:- type cast_kind
    --->    unsafe_type_cast
            % An unsafe type cast between ground values.

    ;       unsafe_type_inst_cast
            % An unsafe type and inst cast.

    ;       equiv_type_cast
            % A safe type cast between equivalent types, in either direction.

    ;       exists_cast.
            % A safe cast between an internal type_info or typeclass_info
            % variable, for which the bindings of existential type variables
            % are known statically, to an external type_info or typeclass_info
            % head variable, for which they are not. These are used instead of
            % assignments so that the simplification pass does not attempt
            % to merge the two variables, which could lead to inconsistencies
            % in the rtti_varmaps.

    % Get a description of a generic_call goal.
    %
:- pred generic_call_id(generic_call::in, call_id::out) is det.

    % Determine whether a generic_call is calling
    % a predicate or a function.
    %
:- func generic_call_pred_or_func(generic_call) = pred_or_func.

%-----------------------------------------------------------------------------%
%
% Information for unifications
%

    % Initially all unifications are represented as
    % unify(prog_var, unify_rhs, _, _, _), but mode analysis replaces
    % these with various special cases (construct/deconstruct/assign/
    % simple_test/complicated_unify).
    %
:- type unify_rhs
    --->    rhs_var(prog_var)
    ;       rhs_functor(
                rhs_functor         :: cons_id,
                % The `is_existential_construction' field is only used
                % after polymorphism.m strips off the `new ' prefix from
                % existentially typed constructions.
                rhs_is_exist_constr :: is_existential_construction,
                rhs_args            :: list(prog_var)
            )
    ;       rhs_lambda_goal(
                rhs_purity          :: purity,

                % Whether this closure is `ground' or `any'.
                rhs_groundness      :: ho_groundness,

                rhs_p_or_f          :: pred_or_func,

                % Currently, we don't support any other value than `normal'.
                rhs_eval_method     :: lambda_eval_method,

                % Non-locals of the goal excluding the lambda quantified
                % variables.
                rhs_nonlocals       :: list(prog_var),

                % Lambda quantified variables.
                rhs_lambda_quant_vars :: list(prog_var),

                % Modes of the lambda quantified variables.
                rhs_lambda_modes    :: list(mer_mode),

                rhs_detism          :: determinism,
                rhs_lambda_goal     :: hlds_goal
            ).

:- inst rhs_lambda_goal
    --->    rhs_lambda_goal(ground, ground, ground, ground, ground, ground,
                ground, ground, ground).

    % Was the constructor originally of the form 'new ctor'(...).
    %
:- type is_existential_construction == bool.

    % This type contains the fields of a construct unification that are needed
    % only rarely. If a value of this type is bound to no_construct_sub_info,
    % this means the same as construct_sub_info(no, no), but takes less space.
    % This matters because a module has lots of construct unifications.
:- type construct_sub_info
    --->    construct_sub_info(
                take_address_fields     :: maybe(list(int)),

                % The value `yes' tells the code generator to reserve an extra
                % slot, at offset -1, to hold an integer giving the size of
                % the term. The argument specifies the value to be put into
                % this slot, either as an integer constant or as the value
                % of a given variable.
                %
                % The value `no' means there is no extra slot, and is the
                % default.
                %
                % The content of this slot is not meaningful before the
                % size_prof pass has been run.
                term_size_slot          :: maybe(term_size_value)
            )
    ;       no_construct_sub_info.

:- type unification

    --->    construct(
                % A construction unification is a unification with a functor
                % or lambda expression which binds the LHS variable,
                % e.g. Y = f(X) where the top node of Y is output,
                % Constructions are written using `:=', e.g. Y := f(X).

                % The variable being constructed, e.g. Y in above example.
                construct_cell_var      :: prog_var,

                % The cons_id of the functor f/1 in the above example.
                construct_cons_id       :: cons_id,

                % The list of argument variables; [X] in the above example.
                % For a unification with a lambda expression, this is the list
                % of the non-local variables of the lambda expression.
                construct_args          :: list(prog_var),

                % The list of modes of the arguments sub-unifications.
                % For a unification with a lambda expression, this is the list
                % of modes of the non-local variables of the lambda expression.
                construct_arg_modes     :: list(uni_mode),

                % Specify whether to allocate statically, to allocate
                % dynamically (and if so, on the heap or in a region),
                % or to reuse an existing cell (and if so, which cell).
                % Constructions for which this field is `reuse_cell(_)'
                % are described as "reconstructions".
                construct_how           :: how_to_construct,

                % Can the cell be allocated in shared data.
                construct_is_unique     :: cell_is_unique,

                construct_sub_info      :: construct_sub_info
            )

    ;       deconstruct(
                % A deconstruction unification is a unification with a functor
                % for which the LHS variable was already bound,
                % e.g. Y = f(X) where the top node of Y is input.
                % Deconstructions are written using `==', e.g. Y == f(X).
                % Note that deconstruction of lambda expressions is
                % a mode error.

                % The variable being deconstructed, e.g. Y in the example.
                deconstruct_cell_var    :: prog_var,

                % The cons_id of the functor, e.g. f/1 in the example.
                deconstruct_cons_id     :: cons_id,

                % The list of argument variables, e.g. [X] in the example.
                deconstruct_args        :: list(prog_var),

                % The lists of modes of the argument sub-unifications.
                deconstruct_arg_modes   :: list(uni_mode),

                % Whether or not the unification could possibly fail.
                deconstruct_can_fail    :: can_fail,

                % Can compile time GC this cell, i.e. explicitly deallocate it
                % after the deconstruction.
                deconstruct_can_cgc     :: can_cgc
            )

    ;       assign(
                % Y = X where the top node of Y is output, written Y := X.

                assign_to_var           :: prog_var,
                assign_from_var         :: prog_var
            )

    ;       simple_test(
                % Y = X where the type of X and Y is an atomic type and
                % they are both input, written Y == X.

                test_var1               :: prog_var,
                test_var2               :: prog_var
            )

    ;       complicated_unify(
                % Y = X where the type of Y and X is not an atomic type,
                % and where the top-level node of both Y and X is input.
                % May involve bi-directional data flow. Implemented using
                % out-of-line call to a compiler generated unification
                % predicate for that type & mode.

                % The mode of the unification.
                compl_unify_mode        :: uni_mode,

                % Whether or not it could possibly fail.
                compl_unify_can_fail    :: can_fail,

                % When unifying polymorphic types such as map/2, we need to
                % pass type_info variables to the unification procedure for
                % map/2 so that it knows how to unify the polymorphically
                % typed components of the data structure. Likewise for
                % comparison predicates. This field records which type_info
                % variables we will need. This field is set by polymorphism.m.
                % It is used by quantification.m when recomputing the
                % nonlocals. It is also used by modecheck_unify.m, which
                % checks that the type_info variables needed are all ground.
                % It is also checked by simplify.m when it converts
                % complicated unifications into procedure calls.

                % The type_info variables needed by this unification,
                % if it ends up being a complicated unify.
                compl_unify_typeinfos   :: list(prog_var)
            ).

:- type term_size_value
    --->    known_size(
                int                     % The cell being created has this size.
            )
    ;       dynamic_size(
                prog_var                % This variable contains the size of
                                        % the cell being created.
            ).

    % `can_cgc' iff the cell is available for compile time garbage collection.
    % Compile time garbage collection is when the compiler recognises that
    % a memory cell is no longer needed and can be safely deallocated
    % (by inserting an explicit call to free).
    %
:- type can_cgc
    --->    can_cgc
    ;       cannot_cgc.

    % A unify_context describes the location in the original source
    % code of a unification, for use in error messages.
    %
:- type unify_context
    --->    unify_context(
                unify_main_context,
                unify_sub_contexts
            ).

    % A unify_main_context describes overall location of the
    % unification within a clause
    %
:- type unify_main_context
    --->    umc_explicit
            % An explicit call to =/2.

    ;       umc_head(
            % A unification in an argument of a clause head.

                int         % The argument number (first argument == no. 1)
            )

    ;       umc_head_result
            % A unification in the function result term of a clause head.

    ;       umc_call(
                % A unification in an argument of a predicate call.

                call_id,    % The name and arity of the predicate.
                int         % The argument number (first arg == 1).
            )

    ;       umc_implicit(
                % A unification added by some syntactic transformation
                % (e.g. for handling state variables).

                string      % Used to explain the source of the unification.
            ).

    % A unify_sub_context describes the location of sub-unification
    % (which is unifying one argument of a term) within a particular
    % unification.
    %
:- type unify_sub_context
    --->    unify_sub_context(
                cons_id,    % The functor.
                int         % The argument number (first arg == 1).
            ).

:- type unify_sub_contexts == list(unify_sub_context).

    % A call_unify_context is used for unifications that get turned into
    % calls to out-of-line unification predicates, and functions.  It records
    % which part of the original source code the unification (which may be
    % a function application) occurred in.
    %
:- type call_unify_context
    --->    call_unify_context(
                prog_var,       % The LHS of the unification.
                unify_rhs,      % The RHS of the unification.
                unify_context   % The context of the unification.
            ).

    % Information on how to construct the cell for a construction unification.
    % The `construct_statically' alternative is set by the mark_static_terms.m
    % pass, and is currently only used for the MLDS back-end (for the LLDS
    % back-end, the same optimization is handled by var_locn.m).
    %
:- type how_to_construct
    --->    construct_statically
            % Create a static constant in the target language.

    ;       construct_dynamically
            % Allocate a new term on the heap.

    ;       construct_in_region(prog_var)
            % Allocate a new term in a region.

    ;       reuse_cell(cell_to_reuse).
            % Reuse an existing heap cell.

    % Information used to perform structure reuse on a cell.
    %
:- type cell_to_reuse
    --->    cell_to_reuse(
                prog_var,
                list(cons_id), % The cell to be reused may be tagged
                                    % with one of these cons_ids.
                list(needs_update)  % Whether the corresponding
                                    % argument already has the correct value
                                    % and does not need to be filled in.
            ).

    % Cells marked `cell_is_shared' can be allocated in read-only memory,
    % and can be shared.
    % Cells marked `cell_is_unique' must be writeable, and therefore
    % cannot be shared.
    % `cell_is_unique' is always a safe approximation.
    %
:- type cell_is_unique
    --->    cell_is_unique
    ;       cell_is_shared.

:- type unify_mode  ==  pair(mer_mode, mer_mode).

:- type uni_mode    --->    pair(mer_inst) -> pair(mer_inst).
                    % Each uni_mode maps a pair of insts to a pair of new insts
                    % Each pair represents the insts of the LHS and the RHS
                    % respectively.

%-----------------------------------------------------------------------------%
%
% Information for switches.
%

:- type case
    --->    case(
                % The list of functors for which this case arm is applicable.
                case_first_functor          :: cons_id,
                case_later_functors         :: list(cons_id),

                % The code of the switch arm.
                case_goal                   :: hlds_goal
            ).

:- type tagged_case
    --->    tagged_case(
                % The list of functors, and their tags, for which
                % this case arm is applicable.
                tagged_case_first_functor   :: tagged_cons_id,
                tagged_case_later_functors  :: list(tagged_cons_id),

                % An identifier of the switch arm.
                tagged_case_id              :: int,

                % The code of the switch arm.
                tagged_case_goal            :: hlds_goal
            ).

%-----------------------------------------------------------------------------%
%
% Information for all kinds of goals.
%

% Access predicates for the hlds_goal_info data structure.
% For documentation on the meaning of the fields that these
% procedures access, see the definition of the hlds_goal_info type.

:- type hlds_goal_info.

    % Stuff specific to a back-end. At the moment, only the LLDS back-end
    % annotates the HLDS.
:- type hlds_goal_code_gen_info
    --->    no_code_gen_info
    ;       llds_code_gen_info(
                llds_code_gen           :: llds_code_gen_details
            ).

    % This type stores the possible values of a higher order variable
    % at a particular point, as determined by the closure analysis
    % (see closure_analysis.m.)  If a variable does not have an entry
    % in the map, then it may take any (valid) value.
    %
:- type ho_values == map(prog_var, set(pred_proc_id)).

:- type rbmm_goal_info
    --->    rbmm_goal_info(
                % The first three fields partition the nonlocal variables
                % of the goal that represent regions.
                %
                % - The first gives the set of regions that are created
                %   by code inside the goal.
                % - The second gives the set of regions that were created
                %   before the goal, and are removed (though not necessarily
                %   destroyed) by code inside the goal.
                % - The third gives the set of regions that were created before
                %   the goal and are *not* removed by code inside the goal.

                created_regions         :: set(prog_var),
                removed_regions         :: set(prog_var),
                carried_regions         :: set(prog_var),

                % Regions that exist before the goal (i.e. removed or carried
                % regions) that may be allocated into inside the goal.
                allocated_into_regions  :: set(prog_var),

                % Regions that exist before the goal (i.e. removed or carried
                % regions) that may be read from inside the goal.
                used_regions            :: set(prog_var)
            ).

:- func rbmm_info_init = rbmm_goal_info.

:- type mode_constr_goal_info
    --->    mode_constr_goal_info(
                % Inst_graph nodes that are reachable from variables
                % that occur in the goal.
                mci_occurring_vars          :: set(prog_var),

                % Inst_graph nodes produced by this goal.
                mci_producing_vars          :: set(prog_var),

                % Inst_graph nodes consumed by this goal.
                mci_consuming_vars          :: set(prog_var),

                % The variables that this goal makes visible.
                mci_make_visible_vars       :: set(prog_var),

                % The variables that this goal needs to be visible
                % before it is executed.
                mci_need_visible_vars       :: set(prog_var)
            ).

    % Information about compile-time garbage collection.
:- type ctgc_goal_info
    --->    ctgc_goal_info(
                % The local forward use set: this set contains the variables
                % that are syntactically needed during forward execution.
                % It is computed as the set of instantiated vars (input vars
                % + sum(pre_births), minus the set of dead vars
                % (sum(post_deaths and pre_deaths).
                % The information is needed for determining the direct reuses.
                ctgc_lfu        :: set(prog_var),

                % The local backward use set. This set contains the
                % instantiated variables that are needed upon backtracking
                % (i.e. syntactically appearing in any nondet call preceding
                % this goal).
                ctgc_lbu        :: set(prog_var),

                % Any structure reuse information related to this call.
                ctgc_reuse      :: reuse_description
            ).

    % Information describing possible kinds of reuse on a per goal basis.
    %
    % - 'no_reuse_info': before CTGC analysis, every goal is annotated with
    % the reuse description 'no_reuse_info', i.e. no information about any
    % reuse.
    %
    % - 'no_possible_reuse': the goal has been analysed and determined to have
    % no reuse opportunity and reanalysis in light of further information
    % within the same module is unnecessary.
    %
    % - 'potential_reuse': the value 'potential_reuse' states that in a reuse
    % version of the procedure to which the goal belongs, this goal may safely
    % be replaced by a goal implementing structure reuse.
    %
    % - 'reuse': the value 'reuse' states that in the current procedure (either
    % the specialised reuse version of a procedure, or the original procedure
    % itself) the current goal can safely be replaced by a goal performing
    % structure reuse.
    %
    % - 'missed_reuse': the value 'missed_reuse' gives some feedback when an
    % opportunity for reuse was missed for some reason (only used for calls).
    %
:- type reuse_description
    --->    no_reuse_info
    ;       no_possible_reuse
    ;       missed_reuse(list(missed_message))
    ;       potential_reuse(short_reuse_description)
    ;       reuse(short_reuse_description).

    % A short description of the kind of reuse allowed in the associated
    % goal:
    %
    % - 'cell_died' (only relevant for deconstructions): states that the cell
    % of the deconstruction becomes dead after that deconstruction.
    %
    % - 'cell_reused' (only relevant for constructions): states that it is
    % allowed to reuse a previously discovered dead term for constructing a
    % new term in the given construction. Details of which term is reused are
    % recorded.
    %
    % - 'reuse_call' (only applicable to procedure calls): the called
    % procedure is an optimised procedure w.r.t. CTGC. Records whether the
    % call is conditional or not.
    %
:- type short_reuse_description
    --->    cell_died
    ;       cell_reused(
                % The dead variable selected for reusing.
                dead_var,

                % States whether the reuse is conditional.
                is_conditional,

                % What are the possible cons_ids that the variable
                % to be reused can have.
                list(cons_id),

                % Which of the fields of the cell to be reused already contain
                % the correct value.
                list(needs_update)
            )
    ;       reuse_call(
                is_conditional,

                % Which arguments must not be clobbered; determines the reuse
                % version to call.
                list(int)
            ).

    % Used to represent the fact whether a reuse opportunity is either
    % always safe (unconditional_reuse) or involves a reuse condition to
    % be satisfied (conditional_reuse).
    %
:- type is_conditional
    --->    conditional_reuse
    ;       unconditional_reuse.

:- type needs_update
    --->    needs_update
    ;       does_not_need_update.

:- type missed_message == string.

    % Information about the goal used by the deep profiler.
    %
:- type dp_goal_info
    --->    dp_goal_info(
                goal_is_mdprof_inst,
                maybe(dp_coverage_goal_info)
            ).

    % Was this goal introduced by the deep profiler as instrumentation code?
    %
:- type goal_is_mdprof_inst
    --->    goal_is_mdprof_inst
    ;       goal_is_not_mdprof_inst.

    % Information used by the deep profiler to perform coverage profiling.
    % The predicates that operate on these types are in deep_profiling.m.
    %
:- type dp_coverage_goal_info
    --->    dp_coverage_goal_info(
                goal_trivial,
                port_counts_give_coverage_after
            ).

    % A goal is trivial if it is a simple atomic goal (not a call), or it's a
    % non-atomic goal and all it's descendants are trivial.
    %
:- type goal_trivial
    --->    goal_is_trivial
    ;       goal_is_nontrivial.

    % A goal has port counts that can be used to calculate the coverage at the
    % end of that goal.
    %
:- type port_counts_give_coverage_after
    --->    port_counts_give_coverage_after
    ;       no_port_counts_give_coverage_after.

:- pred goal_info_init(hlds_goal_info::out) is det.
:- pred goal_info_init(prog_context::in, hlds_goal_info::out) is det.
:- pred goal_info_init(set(prog_var)::in, instmap_delta::in, determinism::in,
    purity::in, hlds_goal_info::out) is det.
:- pred goal_info_init(set(prog_var)::in, instmap_delta::in, determinism::in,
    purity::in, prog_context::in, hlds_goal_info::out) is det.

:- func impure_init_goal_info(set(prog_var), instmap_delta, determinism)
    = hlds_goal_info.
:- func impure_reachable_init_goal_info(set(prog_var), determinism)
    = hlds_goal_info.
:- func impure_unreachable_init_goal_info(set(prog_var), determinism)
    = hlds_goal_info.

:- func goal_info_add_nonlocals_make_impure(hlds_goal_info, set(prog_var))
    = hlds_goal_info.
:- pred make_impure(hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred add_impurity_if_needed(bool::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.

% Instead of recording the liveness of every variable at every
% part of the goal, we just keep track of the initial liveness
% and the changes in liveness.  Note that when traversing forwards
% through a goal, deaths must be applied before births;
% this is necessary to handle certain circumstances where a
% variable can occur in both the post-death and post-birth sets,
% or in both the pre-death and pre-birth sets.

    % see also goal_info_get_code_model in code_model.m
:- func goal_info_get_determinism(hlds_goal_info) = determinism.
:- func goal_info_get_instmap_delta(hlds_goal_info) = instmap_delta.
:- func goal_info_get_context(hlds_goal_info) = prog_context.
:- func goal_info_get_nonlocals(hlds_goal_info) = set(prog_var).
:- func goal_info_get_code_gen_nonlocals(hlds_goal_info) = set(prog_var).
:- func goal_info_get_purity(hlds_goal_info) = purity.
:- func goal_info_get_features(hlds_goal_info) = set(goal_feature).
:- func goal_info_get_goal_id(hlds_goal_info) = goal_id.
:- func goal_info_get_reverse_goal_path(hlds_goal_info) = reverse_goal_path.
:- func goal_info_get_code_gen_info(hlds_goal_info) = hlds_goal_code_gen_info.
:- func goal_info_get_ho_values(hlds_goal_info) = ho_values.
:- func goal_info_get_maybe_rbmm(hlds_goal_info) = maybe(rbmm_goal_info).
:- func goal_info_get_maybe_mode_constr(hlds_goal_info) =
    maybe(mode_constr_goal_info).
:- func goal_info_get_maybe_ctgc(hlds_goal_info) = maybe(ctgc_goal_info).
:- func goal_info_get_maybe_lfu(hlds_goal_info) = maybe(set(prog_var)).
:- func goal_info_get_maybe_lbu(hlds_goal_info) = maybe(set(prog_var)).
:- func goal_info_get_maybe_reuse(hlds_goal_info) = maybe(reuse_description).
:- func goal_info_get_maybe_dp_info(hlds_goal_info) = maybe(dp_goal_info).

:- pred goal_info_set_determinism(determinism::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_instmap_delta(instmap_delta::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_context(prog_context::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_purity(purity::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_nonlocals(set(prog_var)::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_code_gen_nonlocals(set(prog_var)::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_features(set(goal_feature)::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_goal_id(goal_id::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_reverse_goal_path(reverse_goal_path::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_code_gen_info(hlds_goal_code_gen_info::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_ho_values(ho_values::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_maybe_rbmm(maybe(rbmm_goal_info)::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_maybe_mode_constr(maybe(mode_constr_goal_info)::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_maybe_ctgc(maybe(ctgc_goal_info)::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_lfu(set(prog_var)::in, hlds_goal_info::in,
    hlds_goal_info::out) is det.
:- pred goal_info_set_lbu(set(prog_var)::in, hlds_goal_info::in,
    hlds_goal_info::out) is det.
:- pred goal_info_set_reuse(reuse_description::in, hlds_goal_info::in,
    hlds_goal_info::out) is det.
:- pred goal_info_set_maybe_dp_info(maybe(dp_goal_info)::in, hlds_goal_info::in,
    hlds_goal_info::out) is det.

    % The following functions produce an 'unexpected' error when the
    % requested values have not been set.
    %
:- func goal_info_get_rbmm(hlds_goal_info) = rbmm_goal_info.
:- func goal_info_get_lfu(hlds_goal_info) = set(prog_var).
:- func goal_info_get_lbu(hlds_goal_info) = set(prog_var).
:- func goal_info_get_reuse(hlds_goal_info) = reuse_description.

:- pred goal_info_get_occurring_vars(hlds_goal_info::in, set(prog_var)::out)
    is det.
:- pred goal_info_get_producing_vars(hlds_goal_info::in, set(prog_var)::out)
    is det.
:- pred goal_info_get_consuming_vars(hlds_goal_info::in, set(prog_var)::out)
    is det.
:- pred goal_info_get_make_visible_vars(hlds_goal_info::in, set(prog_var)::out)
    is det.
:- pred goal_info_get_need_visible_vars(hlds_goal_info::in, set(prog_var)::out)
    is det.

:- pred goal_info_set_occurring_vars(set(prog_var)::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_producing_vars(set(prog_var)::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_consuming_vars(set(prog_var)::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_make_visible_vars(set(prog_var)::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_set_need_visible_vars(set(prog_var)::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.

:- func producing_vars(hlds_goal_info) = set(prog_var).
:- func 'producing_vars :='(hlds_goal_info, set(prog_var)) = hlds_goal_info.

:- func consuming_vars(hlds_goal_info) = set(prog_var).
:- func 'consuming_vars :='(hlds_goal_info, set(prog_var)) = hlds_goal_info.

:- func make_visible_vars(hlds_goal_info) = set(prog_var).
:- func 'make_visible_vars :='(hlds_goal_info, set(prog_var)) = hlds_goal_info.

:- func need_visible_vars(hlds_goal_info) = set(prog_var).
:- func 'need_visible_vars :='(hlds_goal_info, set(prog_var)) = hlds_goal_info.

:- type contains_trace_goal
    --->    contains_trace_goal
    ;       contains_no_trace_goal.

:- func worst_contains_trace(contains_trace_goal, contains_trace_goal)
    = contains_trace_goal.

:- func goal_get_nonlocals(hlds_goal) = set(prog_var).

:- pred goal_set_goal_id(goal_id::in, hlds_goal::in, hlds_goal::out) is det.

:- func goal_get_purity(hlds_goal) = purity.
:- pred goal_set_purity(purity::in, hlds_goal::in, hlds_goal::out) is det.

:- pred goal_get_goal_purity(hlds_goal::in,
    purity::out, contains_trace_goal::out) is det.
:- pred goal_info_get_goal_purity(hlds_goal_info::in,
    purity::out, contains_trace_goal::out) is det.

:- pred goal_info_add_feature(goal_feature::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_remove_feature(goal_feature::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.
:- pred goal_info_has_feature(hlds_goal_info::in, goal_feature::in) is semidet.

    % Set the 'goal_is_mdprof_inst' field in the goal_dp_info structure
    % in the given goal info structure.
    %
:- pred goal_info_set_mdprof_inst(goal_is_mdprof_inst::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.

:- pred goal_set_context(term.context::in, hlds_goal::in, hlds_goal::out)
    is det.

:- pred goal_add_feature(goal_feature::in, hlds_goal::in, hlds_goal::out)
    is det.
:- pred goal_remove_feature(goal_feature::in, hlds_goal::in, hlds_goal::out)
    is det.
:- pred goal_has_feature(hlds_goal::in, goal_feature::in) is semidet.

:- type goal_feature
    --->    feature_constraint
            % This is included if the goal is a constraint. See constraint.m
            % for the definition of this.

    ;       feature_from_head
            % This goal was originally in the head of the clause, and was
            % put into the body by the superhomogeneous form transformation.

    ;       feature_not_impure_for_determinism
            % This goal should not be treated as impure for the purpose of
            % computing its determinism. This is intended to be used by program
            % transformations that insert impure code into existing goals,
            % and wish to keep the old determinism of those goals.

    ;       feature_stack_opt
            % This goal was created by stack slot optimization. Other
            % optimizations should assume that it is there for a reason, and
            % therefore should refrain from "optimizing" it away, even though
            % it is a copy of another, previous goal.

    ;       feature_tuple_opt
            % This goal was create by the tupling optimization.
            % The comment for the stack slot optimization above
            % applies here.

    ;       feature_call_table_gen
            % This goal generates the variable that represents the call table
            % tip. If debugging is enabled, the code generator needs to save
            % the value of this variable in its stack slot as soon as it is
            % generated; this marker tells the code generator when this
            % happens.

    ;       feature_preserve_backtrack_into
            % Determinism analysis should preserve backtracking into goals
            % marked with this feature, even if their determinism puts an
            % at_most_zero upper bound on the number of solutions they have.

    ;       feature_save_deep_excp_vars
            % This goal generates the deep profiling variables that the
            % exception handler needs to execute the exception port code.

    ;       feature_hide_debug_event
            % The events associated with this goal should be hidden. This is
            % used e.g. by the tabling transformation to preserve the set
            % of events generated by a tabled procedure.

    ;       feature_deep_tail_rec_call
            % This goal represents a tail recursive call. This marker is used
            % by deep profiling.

    ;       feature_debug_tail_rec_call
            % This goal represents a tail recursive call. This marker is used
            % by code generation for execution tracing.

    ;       feature_keep_constant_binding
            % This feature should only be attached to unsafe_cast goals
            % that cast a value of an user-defined type to an integer.
            % It tells the mode checker that if the first variable is known
            % to be bound to a given constant, then the second variable
            % should be set to the corresponding local tag value.

    ;       feature_dont_warn_singleton
            % Don't warn about singletons in this goal. Intended to be used
            % by the state variable transformation, for situations such as the
            % following:
            %
            % p(X, !.S, ...) :-
            %   (
            %       X = a,
            %       !:S = f(!.S, ...)
            %   ;
            %       X = b,
            %       <code A>
            %   ),
            %   <code B>.
            %
            % The state variable transformation creates a new variable for
            % the new value of !:S in the disjunction. If code A doesn't define
            % !:S, the state variable transformation inserts an unification
            % after it, unifying the variables representing !.S and !:S.
            % If code B doesn't refer to S, then quantification will restrict
            % the scope of the variable representing !:S to each disjunct,
            % and the unification inserted after code A will refer to a
            % singleton variable.
            %
            % Since it is not reasonable to expect the state variable
            % transformation to do the job of quantification as well,
            % we simply make it mark the unifications it creates, and get
            % the singleton warning code to respect it.

    ;       feature_duplicated_for_switch
            % This goal was created by switch detection by duplicating
            % the source code written by the user.

    ;       feature_mode_check_clauses_goal
            % This goal is the main disjunction of a predicate with the
            % mode_check_clauses pragma. No compiler pass should try to invoke
            % quadratic or worse algorithms on the arms of this goal, since it
            % probably has many arms (possibly several thousand). This feature
            % may be attached to switches as well as disjunctions.

    ;       feature_will_not_modify_trail
            % This goal will not modify the trail, so it is safe for the
            % compiler to omit trailing primitives when generating code
            % for this goal.

    ;       feature_will_not_call_mm_tabled
            % This goal will never call a procedure that is evaluted using
            % minimal model tabling. It is safe for the code generator to omit
            % the pneg context wrappers when generating code for this goal.

    ;       feature_contains_trace
            % This goal contains a scope goal whose scope_reason is
            % trace_goal(...).

    ;       feature_pretest_equality
            % This goal is an if-then-else in a compiler-generated
            % type-constructor-specific unify or compare predicate
            % whose condition is a test of whether the two input arguments
            % are equal or not. The goal feature exists because in some
            % circumstances we need to strip off this pretest, and replace
            % the if-then-else with just its else branch.

    ;       feature_pretest_equality_condition
            % This goal is the unification in the condition of a
            % pretest-equality if-then-else goal. The goal feature is required
            % to allow pointer comparisons generated by the compiler.

    ;       feature_lambda_undetermined_mode
            % This goal is a lambda goal converted from a higher order term
            % for which we don't know the mode of the call to the underlying
            % predicate. These can be produced by the polymorphism
            % transformation but should be removed by the end of mode
            % checking.

    ;       feature_contains_stm_inner_outer.
            % This goal is a goal inside an atomic scope, for which the calls
            % to convert inner and outer variables have been inserted.

%-----------------------------------------------------------------------------%
%
% The rename_var* predicates take a structure and a mapping from var -> var
% and apply that translation. If a var in the input structure does not
% occur as a key in the mapping, then the variable is left unsubstituted
% (if Must = need_not_rename) or we throw an exception (if Must = must_rename).
%
% We keep these predicates here to allow rename_vars_in_goal_info to exploit
% knowledge of the actual representation of hlds_goal_infos; since
% hlds_goal_info is an abstract type, this knowledge is not available
% in any other module.
%
% This exploitation also makes the code of rename_vars_in_goal_info depend on
% the structure of hlds_goal_infos, which makes accidentally forgetting to
% update that predicate after modifying the hlds_goal_info type much harder.

:- pred rename_some_vars_in_goal(prog_var_renaming::in,
    hlds_goal::in, hlds_goal::out) is det.

:- pred must_rename_vars_in_goal(prog_var_renaming::in,
    hlds_goal::in, hlds_goal::out) is det.

:- pred rename_vars_in_goals(must_rename::in, prog_var_renaming::in,
    list(hlds_goal)::in, list(hlds_goal)::out) is det.

:- pred rename_vars_in_goal_expr(must_rename::in, prog_var_renaming::in,
    hlds_goal_expr::in, hlds_goal_expr::out) is det.

:- pred rename_vars_in_goal_info(must_rename::in, prog_var_renaming::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.

    % Rename the variables in the given goal, incrementally updating the
    % substitution. When we start processing a goal, we look up its goal_id
    % in the provided map. If we find it, we add the given var to var mappings
    % to the substitution we apply to that goal. We do not insist on variables
    % in the goal occurring in the substitution (i.e. we implicitly assume
    % Must = need_not_rename).
    %
:- pred incremental_rename_vars_in_goal(prog_var_renaming::in,
    map(goal_id, assoc_list(prog_var, prog_var))::in,
    hlds_goal::in, hlds_goal::out) is det.

%-----------------------------------------------------------------------------%
%
% Miscellaneous utility procedures for dealing with HLDS goals.
%

    % Convert a goal to a list of conjuncts.
    % If the goal is a conjunction, then return its conjuncts,
    % otherwise return the goal as a singleton list.
    %
:- pred goal_to_conj_list(hlds_goal::in, list(hlds_goal)::out) is det.

    % Convert a goal to a list of parallel conjuncts.
    % If the goal is a parallel conjunction, then return its conjuncts,
    % otherwise return the goal as a singleton list.
    %
:- pred goal_to_par_conj_list(hlds_goal::in, list(hlds_goal)::out) is det.

    % Convert a goal to a list of disjuncts.
    % If the goal is a disjunction, then return its disjuncts,
    % otherwise return the goal as a singleton list.
    %
:- pred goal_to_disj_list(hlds_goal::in, list(hlds_goal)::out) is det.

    % Convert a list of conjuncts to a goal.
    % If the list contains only one goal, then return that goal,
    % otherwise return the conjunction of the conjuncts,
    % with the specified goal_info.
    %
:- pred conj_list_to_goal(list(hlds_goal)::in, hlds_goal_info::in,
    hlds_goal::out) is det.

    % Convert a list of parallel conjuncts to a goal.
    % If the list contains only one goal, then return that goal,
    % otherwise return the parallel conjunction of the conjuncts,
    % with the specified goal_info.
    %
:- pred par_conj_list_to_goal(list(hlds_goal)::in, hlds_goal_info::in,
    hlds_goal::out) is det.

    % Convert a list of disjuncts to a goal.
    % If the list contains only one goal, then return that goal,
    % otherwise return the disjunction of the disjuncts,
    % with the specified goal_info.
    %
:- pred disj_list_to_goal(list(hlds_goal)::in, hlds_goal_info::in,
    hlds_goal::out) is det.

    % Takes a goal and a list of goals, and conjoins them
    % (with a potentially blank goal_info).
    %
:- pred conjoin_goal_and_goal_list(hlds_goal::in, list(hlds_goal)::in,
    hlds_goal::out) is det.

    % Conjoin two goals (with a potentially blank goal_info).
    %
:- pred conjoin_goals(hlds_goal::in, hlds_goal::in, hlds_goal::out) is det.

    % Negate a goal, eliminating double negations as we go.
    %
:- pred negate_goal(hlds_goal::in, hlds_goal_info::in, hlds_goal::out) is det.

    % Return yes if goal(s) contain any foreign code
    %
:- func goal_has_foreign(hlds_goal) = bool.

:- type has_subgoals
    --->    has_subgoals
    ;       does_not_have_subgoals.

    % A goal is primitive iff it doesn't contain any sub-goals
    % (except possibly goals inside lambda expressions --
    % but lambda expressions will get transformed into separate
    % predicates by the polymorphism.m pass).
    %
:- func goal_expr_has_subgoals(hlds_goal_expr) = has_subgoals.

    % Return the HLDS equivalent of `true'.
    %
:- func true_goal = hlds_goal.
:- func true_goal_expr = hlds_goal_expr.

:- func true_goal_with_context(prog_context) = hlds_goal.

    % Return the HLDS equivalent of `fail'.
    %
:- func fail_goal = hlds_goal.
:- func fail_goal_expr = hlds_goal_expr.
:- func fail_goal_info = hlds_goal_info.

:- func fail_goal_with_context(prog_context) = hlds_goal.

    % Return the union of all the nonlocals of a list of goals.
    %
:- pred goal_list_nonlocals(list(hlds_goal)::in, set(prog_var)::out) is det.

    % Compute the instmap_delta resulting from applying
    % all the instmap_deltas of the given goals.
    %
:- pred goal_list_instmap_delta(list(hlds_goal)::in, instmap_delta::out)
    is det.

    % Compute the determinism of a list of goals.
    %
:- pred goal_list_determinism(list(hlds_goal)::in, determinism::out) is det.

    % Compute the purity of a list of goals.
:- pred goal_list_purity(list(hlds_goal)::in, purity::out) is det.

    % Change the contexts of the goal_infos of all the sub-goals
    % of the given goal. This is used to ensure that error messages
    % for automatically generated unification procedures have a useful
    % context.
    %
:- pred set_goal_contexts(prog_context::in, hlds_goal::in, hlds_goal::out)
    is det.

    % Create the hlds_goal for a unification, filling in all the as yet
    % unknown slots with dummy values. The unification is constructed as a
    % complicated unification; turning it into some other kind of unification,
    % if appropriate is left to mode analysis. Therefore this predicate
    % shouldn't be used unless you know mode analysis will be run on its
    % output.
    %
:- pred create_atomic_complicated_unification(prog_var::in, unify_rhs::in,
    prog_context::in, unify_main_context::in, unify_sub_contexts::in,
    purity::in, hlds_goal::out) is det.

    % As above, but with default purity pure.
    %
:- pred create_pure_atomic_complicated_unification(prog_var::in, unify_rhs::in,
    prog_context::in, unify_main_context::in, unify_sub_contexts::in,
    hlds_goal::out) is det.

    % Create the hlds_goal for a unification that assigns the second variable
    % to the first. The initial inst of the second variable should be
    % ground_inst. The resulting goal has all its fields filled in.
    %
:- pred make_simple_assign(prog_var::in, prog_var::in,
    unify_main_context::in, unify_sub_contexts::in, hlds_goal::out) is det.

    % Create the hlds_goal for a unification that tests the equality of two
    % values of atomic types. The resulting goal has all its fields filled in.
    %
:- pred make_simple_test(prog_var::in, prog_var::in,
    unify_main_context::in, unify_sub_contexts::in, hlds_goal::out) is det.

    % Produce a goal to construct a given constant. These predicates all
    % fill in the non-locals, instmap_delta and determinism fields of the
    % goal_info of the returned goal. With alias tracking, the instmap_delta
    % will be correct only if the variable being assigned to has no aliases.
    %
    % Ths cons_id passed to make_const_construction must be fully module
    % qualified.
    %
:- pred make_int_const_construction(prog_var::in, int::in,
    hlds_goal::out) is det.
:- pred make_string_const_construction(prog_var::in, string::in,
    hlds_goal::out) is det.
:- pred make_float_const_construction(prog_var::in, float::in,
    hlds_goal::out) is det.
:- pred make_char_const_construction(prog_var::in, char::in,
    hlds_goal::out) is det.
:- pred make_const_construction(prog_var::in, cons_id::in,
    hlds_goal::out) is det.

:- pred make_int_const_construction_alloc(int::in, maybe(string)::in,
    hlds_goal::out, prog_var::out,
    prog_varset::in, prog_varset::out, vartypes::in, vartypes::out) is det.
:- pred make_string_const_construction_alloc(string::in, maybe(string)::in,
    hlds_goal::out, prog_var::out,
    prog_varset::in, prog_varset::out, vartypes::in, vartypes::out) is det.
:- pred make_float_const_construction_alloc(float::in, maybe(string)::in,
    hlds_goal::out, prog_var::out,
    prog_varset::in, prog_varset::out, vartypes::in, vartypes::out) is det.
:- pred make_char_const_construction_alloc(char::in, maybe(string)::in,
    hlds_goal::out, prog_var::out,
    prog_varset::in, prog_varset::out, vartypes::in, vartypes::out) is det.
:- pred make_const_construction_alloc(cons_id::in, mer_type::in,
    maybe(string)::in, hlds_goal::out, prog_var::out,
    prog_varset::in, prog_varset::out, vartypes::in, vartypes::out) is det.

:- pred make_int_const_construction_alloc_in_proc(int::in,
    maybe(string)::in, hlds_goal::out, prog_var::out,
    proc_info::in, proc_info::out) is det.
:- pred make_string_const_construction_alloc_in_proc(string::in,
    maybe(string)::in, hlds_goal::out, prog_var::out,
    proc_info::in, proc_info::out) is det.
:- pred make_float_const_construction_alloc_in_proc(float::in,
    maybe(string)::in, hlds_goal::out, prog_var::out,
    proc_info::in, proc_info::out) is det.
:- pred make_char_const_construction_alloc_in_proc(char::in,
    maybe(string)::in, hlds_goal::out, prog_var::out,
    proc_info::in, proc_info::out) is det.
:- pred make_const_construction_alloc_in_proc(cons_id::in, mer_type::in,
    maybe(string)::in, hlds_goal::out, prog_var::out,
    proc_info::in, proc_info::out) is det.

    % Given the variable info field from a pragma foreign_code, get
    % all the variable names.
    %
:- pred get_pragma_foreign_var_names(list(maybe(pair(string, mer_mode)))::in,
    list(string)::out) is det.

    % Produce a goal to construct or deconstruct a unification with
    % a functor.  It fills in the non-locals, instmap_delta and
    % determinism fields of the goal_info.
    %
:- pred construct_functor(prog_var::in, cons_id::in, list(prog_var)::in,
    hlds_goal::out) is det.
:- pred deconstruct_functor(prog_var::in, cons_id::in, list(prog_var)::in,
    hlds_goal::out) is det.

    % Produce a goal to construct or deconstruct a tuple containing
    % the given list of arguments, filling in the non-locals,
    % instmap_delta and determinism fields of the goal_info.
    %
:- pred construct_tuple(prog_var::in, list(prog_var)::in, hlds_goal::out)
    is det.
:- pred deconstruct_tuple(prog_var::in, list(prog_var)::in, hlds_goal::out)
    is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module parse_tree.builtin_lib_types.
:- import_module parse_tree.prog_mode.

:- import_module io.
:- import_module map.
:- import_module require.
:- import_module string.
:- import_module svmap.
:- import_module svvarset.
:- import_module varset.

%-----------------------------------------------------------------------------%

get_hlds_goal_expr(Goal) = Goal ^ hlds_goal_expr.
get_hlds_goal_info(Goal) = Goal ^ hlds_goal_info.

foreign_arg_var(Arg) = Arg ^ arg_var.
foreign_arg_maybe_name_mode(Arg) = Arg ^ arg_name_mode.
foreign_arg_type(Arg) = Arg ^ arg_type.
foreign_arg_box(Arg) = Arg ^ arg_box_policy.

make_foreign_args(Vars, NamesModesBoxes, Types, Args) :-
    (
        Vars = [Var | VarsTail],
        NamesModesBoxes = [NameModeBox | NamesModesBoxesTail],
        Types = [Type | TypesTail]
    ->
        make_foreign_args(VarsTail, NamesModesBoxesTail, TypesTail, ArgsTail),
        NameModeBox = NameMode - Box,
        Arg = foreign_arg(Var, NameMode, Type, Box),
        Args = [Arg | ArgsTail]
    ;
        Vars = [],
        NamesModesBoxes = [],
        Types = []
    ->
        Args = []
    ;
        unexpected($module, $pred, "unmatched lists")
    ).

%-----------------------------------------------------------------------------%
%
% Predicates dealing with generic_calls
%

generic_call_id(higher_order(_, Purity, PorF, Arity),
        generic_call_id(gcid_higher_order(Purity, PorF, Arity))).
generic_call_id(class_method(_, _, ClassId, MethodId),
        generic_call_id(gcid_class_method(ClassId, MethodId))).
generic_call_id(event_call(EventName),
        generic_call_id(gcid_event_call(EventName))).
generic_call_id(cast(CastType), generic_call_id(gcid_cast(CastType))).

generic_call_pred_or_func(higher_order(_, _, PredOrFunc, _)) = PredOrFunc.
generic_call_pred_or_func(class_method(_, _, _, CallId)) =
    simple_call_id_pred_or_func(CallId).
generic_call_pred_or_func(event_call(_)) = pf_predicate.
generic_call_pred_or_func(cast(_)) = pf_predicate.

:- func simple_call_id_pred_or_func(simple_call_id) = pred_or_func.

simple_call_id_pred_or_func(simple_call_id(PredOrFunc, _, _)) = PredOrFunc.

%-----------------------------------------------------------------------------%
%
% Information stored with all kinds of goals.
%

    % This type has eight fields, which means that the Boehm collector
    % allocates eight words for it. For a type with nine or ten fields,
    % the Boehm collector would allocate a sixteen word block, so if
    % you need any new fields, you probably want to add them to the
    % extension structure in the hlds_goal_extra_info field instead of
    % directly to this type.

:- type hlds_goal_info
    --->    goal_info(
                % The overall determinism of the goal (computed during
                % determinism analysis). Since the determinism analysis problem
                % is is undecidable, this may be a conservative approximation.
/*  1 */        gi_determinism      :: determinism,

                % The change in insts over this goal (computed during mode
                % analysis). Since the unreachability problem is undecidable,
                % the instmap_delta may be reachable even when the goal
                % really never succeeds.
                %
                % The following invariant is required by the code generator
                % and is enforced by the final simplification pass:
                %
                %   the determinism specifies at_most_zero solns
                %   IFF the instmap_delta is unreachable.
                %
                % Before the final simplification pass, the determinism and
                % instmap_delta might not be consistent with regard to
                % unreachability, but both will be conservative approximations,
                % so if either says a goal is unreachable then it is.
                %
                % Normally the instmap_delta will list only the nonlocal
                % variables of the goal.
/*  2 */        gi_instmap_delta    :: instmap_delta,

                % The non-local vars in the goal, i.e. the variables that
                % occur both inside and outside of the goal (computed by
                % quantification.m). In some circumstances, this may be a
                % conservative approximation: it may be a superset of the
                % real non-locals.
/*  3 */        gi_nonlocals        :: set(prog_var),

/*  4 */        gi_purity           :: purity,

                % The set of compiler-defined "features" of this goal,
                % which optimisers may wish to know about.
/*  5 */        gi_features         :: set(goal_feature),

                % An value that uniquely identifies this goal in its procedure.
/*  6 */        gi_goal_id          :: goal_id,

/*  7 */        gi_code_gen_info    :: hlds_goal_code_gen_info,

                % Extra information about the goal that doesn't fit in an
                % eight-word cell. Mostly used for information used by
                % various optional analysis passes, e.g closure analysis.
/*  8 */        gi_extra            :: hlds_goal_extra_info
            ).

:- type hlds_goal_extra_info
    --->    extra_goal_info(
                egi_context             :: prog_context,

                egi_rev_goal_path       :: reverse_goal_path,

                egi_ho_vals             :: ho_values,

                % Any information related to structure reuse (CTGC).
                egi_maybe_ctgc          :: maybe(ctgc_goal_info),

                egi_maybe_rbmm          :: maybe(rbmm_goal_info),

                egi_maybe_mode_constr   :: maybe(mode_constr_goal_info),

                egi_maybe_dp            :: maybe(dp_goal_info)
            ).

:- pragma inline(goal_info_init/1).

goal_info_init(GoalInfo) :-
    Detism = detism_erroneous,
    instmap_delta_init_unreachable(InstMapDelta),
    set.init(NonLocals),
    term.context_init(Context),
    set.init(Features),
    GoalId = goal_id(-1),
    GoalInfo = goal_info(Detism, InstMapDelta, NonLocals, purity_pure,
        Features, GoalId, no_code_gen_info,
        hlds_goal_extra_info_init(Context)).

:- pragma inline(goal_info_init/2).

goal_info_init(Context, GoalInfo) :-
    Detism = detism_erroneous,
    instmap_delta_init_unreachable(InstMapDelta),
    set.init(NonLocals),
    set.init(Features),
    GoalId = goal_id(-1),
    GoalInfo = goal_info(Detism, InstMapDelta, NonLocals, purity_pure,
        Features, GoalId, no_code_gen_info,
        hlds_goal_extra_info_init(Context)).

goal_info_init(NonLocals, InstMapDelta, Detism, Purity, GoalInfo) :-
    set.init(Features),
    term.context_init(Context),
    GoalId = goal_id(-1),
    GoalInfo = goal_info(Detism, InstMapDelta, NonLocals, Purity,
        Features, GoalId, no_code_gen_info,
        hlds_goal_extra_info_init(Context)).

goal_info_init(NonLocals, InstMapDelta, Detism, Purity, Context, GoalInfo) :-
    set.init(Features),
    GoalId = goal_id(-1),
    GoalInfo = goal_info(Detism, InstMapDelta, NonLocals, Purity,
        Features, GoalId, no_code_gen_info,
        hlds_goal_extra_info_init(Context)).

impure_init_goal_info(NonLocals, InstMapDelta, Determinism) = GoalInfo :-
    goal_info_init(NonLocals, InstMapDelta, Determinism, purity_impure,
        GoalInfo0),
    goal_info_add_feature(feature_not_impure_for_determinism,
        GoalInfo0, GoalInfo).

impure_reachable_init_goal_info(NonLocals, Determinism) = GoalInfo :-
    instmap_delta_init_reachable(InstMapDelta),
    goal_info_init(NonLocals, InstMapDelta, Determinism, purity_impure,
        GoalInfo).

impure_unreachable_init_goal_info(NonLocals, Determinism) = GoalInfo :-
    instmap_delta_init_unreachable(InstMapDelta),
    goal_info_init(NonLocals, InstMapDelta, Determinism, purity_impure,
        GoalInfo0),
    goal_info_add_feature(feature_not_impure_for_determinism,
        GoalInfo0, GoalInfo).

goal_info_add_nonlocals_make_impure(!.GoalInfo, NewNonLocals) = !:GoalInfo :-
    NonLocals0 = goal_info_get_nonlocals(!.GoalInfo),
    NonLocals = set.union(NonLocals0, NewNonLocals),
    goal_info_set_nonlocals(NonLocals, !GoalInfo),
    make_impure(!GoalInfo).

fail_goal_info = GoalInfo :-
    instmap_delta_init_unreachable(InstMapDelta),
    goal_info_init(set.init, InstMapDelta, detism_failure, purity_pure,
        GoalInfo).

make_impure(!GoalInfo) :-
    ( goal_info_get_purity(!.GoalInfo) = purity_impure ->
        % We don't add not_impure_for_determinism, since we want to
        % keep the existing determinism.
        true
    ;
        goal_info_set_purity(purity_impure, !GoalInfo),
        goal_info_add_feature(feature_not_impure_for_determinism, !GoalInfo)
    ).

add_impurity_if_needed(AddedImpurity, !GoalInfo) :-
    (
        AddedImpurity = no
    ;
        AddedImpurity = yes,
        make_impure(!GoalInfo)
    ).

:- func hlds_goal_extra_info_init(term.context) = hlds_goal_extra_info.

hlds_goal_extra_info_init(Context) = ExtraInfo :-
    HO_Values = map.init,
    ExtraInfo = extra_goal_info(Context, rgp([]), HO_Values, no, no, no, no).

:- func ctgc_goal_info_init = ctgc_goal_info.

ctgc_goal_info_init = ctgc_goal_info(set.init, set.init, no_reuse_info).

rbmm_info_init = rbmm_goal_info(set.init, set.init, set.init, set.init,
    set.init).

goal_info_get_determinism(GoalInfo) = GoalInfo ^ gi_determinism.
goal_info_get_instmap_delta(GoalInfo) = GoalInfo ^ gi_instmap_delta.
goal_info_get_nonlocals(GoalInfo) = GoalInfo ^ gi_nonlocals.
goal_info_get_purity(GoalInfo) = GoalInfo ^ gi_purity.
goal_info_get_features(GoalInfo) = GoalInfo ^ gi_features.
goal_info_get_goal_id(GoalInfo) = GoalInfo ^ gi_goal_id.
goal_info_get_reverse_goal_path(GoalInfo) =
    GoalInfo ^ gi_extra ^ egi_rev_goal_path.
goal_info_get_code_gen_info(GoalInfo) = GoalInfo ^ gi_code_gen_info.
goal_info_get_context(GoalInfo) = GoalInfo ^ gi_extra ^ egi_context.
goal_info_get_ho_values(GoalInfo) = GoalInfo ^ gi_extra ^ egi_ho_vals.
goal_info_get_maybe_rbmm(GoalInfo) = GoalInfo ^ gi_extra ^ egi_maybe_rbmm.
goal_info_get_maybe_mode_constr(GoalInfo) =
    GoalInfo ^ gi_extra ^ egi_maybe_mode_constr.
goal_info_get_maybe_ctgc(GoalInfo) = GoalInfo ^ gi_extra ^ egi_maybe_ctgc.
goal_info_get_maybe_dp_info(GoalInfo) = GoalInfo ^ gi_extra ^ egi_maybe_dp.

goal_info_set_determinism(Determinism, !GoalInfo) :-
    !GoalInfo ^ gi_determinism := Determinism.
goal_info_set_instmap_delta(InstMapDelta, !GoalInfo) :-
    !GoalInfo ^ gi_instmap_delta := InstMapDelta.
goal_info_set_nonlocals(NonLocals, !GoalInfo) :-
    !GoalInfo ^ gi_nonlocals := NonLocals.
goal_info_set_purity(Purity, !GoalInfo) :-
    !GoalInfo ^ gi_purity := Purity.
goal_info_set_features(Features, !GoalInfo) :-
    !GoalInfo ^ gi_features := Features.
goal_info_set_goal_id(GoalId, !GoalInfo) :-
    !GoalInfo ^ gi_goal_id := GoalId.
goal_info_set_reverse_goal_path(RevGoalPath, !GoalInfo) :-
    !GoalInfo ^ gi_extra ^ egi_rev_goal_path := RevGoalPath.
goal_info_set_code_gen_info(CodeGenInfo, !GoalInfo) :-
    !GoalInfo ^ gi_code_gen_info := CodeGenInfo.
goal_info_set_context(Context, !GoalInfo) :-
    !GoalInfo ^ gi_extra ^ egi_context := Context.
goal_info_set_ho_values(Values, !GoalInfo) :-
    !GoalInfo ^ gi_extra ^ egi_ho_vals := Values.
goal_info_set_maybe_rbmm(RBMMInfo, !GoalInfo) :-
    !GoalInfo ^ gi_extra ^ egi_maybe_rbmm := RBMMInfo.
goal_info_set_maybe_mode_constr(ModeConstrInfo, !GoalInfo) :-
    !GoalInfo ^ gi_extra ^ egi_maybe_mode_constr := ModeConstrInfo.
goal_info_set_maybe_ctgc(CTGCInfo, !GoalInfo) :-
    !GoalInfo ^ gi_extra ^ egi_maybe_ctgc := CTGCInfo.
goal_info_set_maybe_dp_info(DPInfo, !GoalInfo) :-
    !GoalInfo ^ gi_extra ^ egi_maybe_dp := DPInfo.

    % The code-gen non-locals are always the same as the
    % non-locals when structure reuse is not being performed.
goal_info_get_code_gen_nonlocals(GoalInfo) =
    goal_info_get_nonlocals(GoalInfo).
    % The code-gen non-locals are always the same as the
    % non-locals when structure reuse is not being performed.
goal_info_set_code_gen_nonlocals(NonLocals, !GoalInfo) :-
    goal_info_set_nonlocals(NonLocals, !GoalInfo).

goal_info_get_rbmm(GoalInfo) = RBMM :-
    MaybeRBMM = goal_info_get_maybe_rbmm(GoalInfo),
    (
        MaybeRBMM = yes(RBMM)
    ;
        MaybeRBMM = no,
        unexpected($module, $pred, "Requesting unavailable RBMM information.")
    ).

goal_info_get_occurring_vars(GoalInfo, OccurringVars) :-
    MMCI = GoalInfo ^ gi_extra ^ egi_maybe_mode_constr,
    (
        MMCI = yes(MCI),
        OccurringVars = MCI ^ mci_occurring_vars
    ;
        MMCI = no,
        OccurringVars = set.init
    ).

goal_info_get_producing_vars(GoalInfo, ProducingVars) :-
    MMCI = GoalInfo ^ gi_extra ^ egi_maybe_mode_constr,
    (
        MMCI = yes(MCI),
        ProducingVars = MCI ^ mci_producing_vars
    ;
        MMCI = no,
        ProducingVars = set.init
    ).

goal_info_get_consuming_vars(GoalInfo, ConsumingVars) :-
    MMCI = GoalInfo ^ gi_extra ^ egi_maybe_mode_constr,
    (
        MMCI = yes(MCI),
        ConsumingVars = MCI ^ mci_consuming_vars
    ;
        MMCI = no,
        ConsumingVars = set.init
    ).

goal_info_get_make_visible_vars(GoalInfo, MakeVisibleVars) :-
    MMCI = GoalInfo ^ gi_extra ^ egi_maybe_mode_constr,
    (
        MMCI = yes(MCI),
        MakeVisibleVars = MCI ^ mci_make_visible_vars
    ;
        MMCI = no,
        MakeVisibleVars = set.init
    ).

goal_info_get_need_visible_vars(GoalInfo, NeedVisibleVars) :-
    MMCI = GoalInfo ^ gi_extra ^ egi_maybe_mode_constr,
    (
        MMCI = yes(MCI),
        NeedVisibleVars = MCI ^ mci_need_visible_vars
    ;
        MMCI = no,
        NeedVisibleVars = set.init
    ).

goal_info_set_occurring_vars(OccurringVars, !GoalInfo) :-
    MMCI0 = !.GoalInfo ^ gi_extra ^ egi_maybe_mode_constr,
    (
        MMCI0 = yes(MCI0),
        MCI = MCI0 ^ mci_occurring_vars := OccurringVars
    ;
        MMCI0 = no,
        set.init(ProducingVars),
        set.init(ConsumingVars),
        set.init(MakeVisibleVars),
        set.init(NeedVisibleVars),
        MCI = mode_constr_goal_info(OccurringVars, ProducingVars,
            ConsumingVars, MakeVisibleVars, NeedVisibleVars)
    ),
    !GoalInfo ^ gi_extra ^ egi_maybe_mode_constr := yes(MCI).

goal_info_set_producing_vars(ProducingVars, !GoalInfo) :-
    MMCI0 = !.GoalInfo ^ gi_extra ^ egi_maybe_mode_constr,
    (
        MMCI0 = yes(MCI0),
        MCI = MCI0 ^ mci_producing_vars := ProducingVars
    ;
        MMCI0 = no,
        set.init(OccurringVars),
        set.init(ConsumingVars),
        set.init(MakeVisibleVars),
        set.init(NeedVisibleVars),
        MCI = mode_constr_goal_info(OccurringVars, ProducingVars,
            ConsumingVars, MakeVisibleVars, NeedVisibleVars)
    ),
    !GoalInfo ^ gi_extra ^ egi_maybe_mode_constr := yes(MCI).

goal_info_set_consuming_vars(ConsumingVars, !GoalInfo) :-
    MMCI0 = !.GoalInfo ^ gi_extra ^ egi_maybe_mode_constr,
    (
        MMCI0 = yes(MCI0),
        MCI = MCI0 ^ mci_consuming_vars := ConsumingVars
    ;
        MMCI0 = no,
        set.init(OccurringVars),
        set.init(ProducingVars),
        set.init(MakeVisibleVars),
        set.init(NeedVisibleVars),
        MCI = mode_constr_goal_info(OccurringVars, ProducingVars,
            ConsumingVars, MakeVisibleVars, NeedVisibleVars)
    ),
    !GoalInfo ^ gi_extra ^ egi_maybe_mode_constr := yes(MCI).

goal_info_set_make_visible_vars(MakeVisibleVars, !GoalInfo) :-
    MMCI0 = !.GoalInfo ^ gi_extra ^ egi_maybe_mode_constr,
    (
        MMCI0 = yes(MCI0),
        MCI = MCI0 ^ mci_make_visible_vars := MakeVisibleVars
    ;
        MMCI0 = no,
        set.init(OccurringVars),
        set.init(ProducingVars),
        set.init(ConsumingVars),
        set.init(NeedVisibleVars),
        MCI = mode_constr_goal_info(OccurringVars, ProducingVars,
            ConsumingVars, MakeVisibleVars, NeedVisibleVars)
    ),
    !GoalInfo ^ gi_extra ^ egi_maybe_mode_constr := yes(MCI).

goal_info_set_need_visible_vars(NeedVisibleVars, !GoalInfo) :-
    MMCI0 = !.GoalInfo ^ gi_extra ^ egi_maybe_mode_constr,
    (
        MMCI0 = yes(MCI0),
        MCI = MCI0 ^ mci_need_visible_vars := NeedVisibleVars
    ;
        MMCI0 = no,
        set.init(OccurringVars),
        set.init(ProducingVars),
        set.init(ConsumingVars),
        set.init(MakeVisibleVars),
        MCI = mode_constr_goal_info(OccurringVars, ProducingVars,
            ConsumingVars, MakeVisibleVars, NeedVisibleVars)
    ),
    !GoalInfo ^ gi_extra ^ egi_maybe_mode_constr := yes(MCI).

producing_vars(GoalInfo) = ProducingVars :-
    goal_info_get_producing_vars(GoalInfo, ProducingVars).

'producing_vars :='(GoalInfo0, ProducingVars) = GoalInfo :-
    goal_info_set_producing_vars(ProducingVars, GoalInfo0, GoalInfo).

consuming_vars(GoalInfo) = ConsumingVars :-
    goal_info_get_consuming_vars(GoalInfo, ConsumingVars).

'consuming_vars :='(GoalInfo0, ConsumingVars) = GoalInfo :-
    goal_info_set_consuming_vars(ConsumingVars, GoalInfo0, GoalInfo).

make_visible_vars(GoalInfo) = MakeVisibleVars :-
    goal_info_get_make_visible_vars(GoalInfo, MakeVisibleVars).

'make_visible_vars :='(GoalInfo0, MakeVisibleVars) = GoalInfo :-
    goal_info_set_make_visible_vars(MakeVisibleVars, GoalInfo0, GoalInfo).

need_visible_vars(GoalInfo) = NeedVisibleVars :-
    goal_info_get_need_visible_vars(GoalInfo, NeedVisibleVars).

'need_visible_vars :='(GoalInfo0, NeedVisibleVars) = GoalInfo :-
    goal_info_set_need_visible_vars(NeedVisibleVars, GoalInfo0, GoalInfo).

goal_info_get_maybe_lfu(GoalInfo) = MaybeLFU :-
    MaybeCTGC = GoalInfo ^ gi_extra ^ egi_maybe_ctgc,
    (
        MaybeCTGC = yes(CTGC),
        MaybeLFU = yes(CTGC ^ ctgc_lfu)
    ;
        MaybeCTGC = no,
        MaybeLFU = no
    ).

goal_info_get_maybe_lbu(GoalInfo) = MaybeLBU :-
    MaybeCTGC = GoalInfo ^ gi_extra ^ egi_maybe_ctgc,
    (
        MaybeCTGC = yes(CTGC),
        MaybeLBU = yes(CTGC ^ ctgc_lbu)
    ;
        MaybeCTGC = no,
        MaybeLBU = no
    ).

goal_info_get_maybe_reuse(GoalInfo) = MaybeReuse :-
    MaybeCTGC = GoalInfo ^ gi_extra ^ egi_maybe_ctgc,
    (
        MaybeCTGC = yes(CTGC),
        MaybeReuse = yes(CTGC ^ ctgc_reuse)
    ;
        MaybeCTGC = no,
        MaybeReuse = no
    ).

goal_info_set_lfu(LFU, !GoalInfo) :-
    MaybeCTGC0 = !.GoalInfo ^ gi_extra ^ egi_maybe_ctgc,
    (
        MaybeCTGC0 = yes(CTGC0)
    ;
        MaybeCTGC0 = no,
        CTGC0 = ctgc_goal_info_init
    ),
    CTGC = CTGC0 ^ ctgc_lfu := LFU,
    MaybeCTGC = yes(CTGC),
    !GoalInfo ^ gi_extra ^ egi_maybe_ctgc := MaybeCTGC.

goal_info_set_lbu(LBU, !GoalInfo) :-
    MaybeCTGC0 = !.GoalInfo ^ gi_extra ^ egi_maybe_ctgc,
    (
        MaybeCTGC0 = yes(CTGC0)
    ;
        MaybeCTGC0 = no,
        CTGC0 = ctgc_goal_info_init
    ),
    CTGC = CTGC0 ^ ctgc_lbu := LBU,
    MaybeCTGC = yes(CTGC),
    !GoalInfo ^ gi_extra ^ egi_maybe_ctgc := MaybeCTGC.

goal_info_set_reuse(Reuse, !GoalInfo) :-
    MaybeCTGC0 = !.GoalInfo ^ gi_extra ^ egi_maybe_ctgc,
    (
        MaybeCTGC0 = yes(CTGC0)
    ;
        MaybeCTGC0 = no,
        CTGC0 = ctgc_goal_info_init
    ),
    CTGC = CTGC0 ^ ctgc_reuse := Reuse,
    MaybeCTGC = yes(CTGC),
    !GoalInfo ^ gi_extra ^ egi_maybe_ctgc := MaybeCTGC.

goal_info_get_lfu(GoalInfo) = LFU :-
    MaybeLFU = goal_info_get_maybe_lfu(GoalInfo),
    (
        MaybeLFU = yes(LFU)
    ;
        MaybeLFU = no,
        unexpected($module, $pred,
            "Requesting LFU information while CTGC field not set.")
    ).

goal_info_get_lbu(GoalInfo) = LBU :-
    MaybeLBU = goal_info_get_maybe_lbu(GoalInfo),
    (
        MaybeLBU = yes(LBU)
    ;
        MaybeLBU = no,
        unexpected($module, $pred,
            "Requesting LBU information while CTGC field not set.")
    ).

goal_info_get_reuse(GoalInfo) = Reuse :-
    MaybeReuse = goal_info_get_maybe_reuse(GoalInfo),
    (
        MaybeReuse = yes(Reuse)
    ;
        MaybeReuse = no,
        unexpected($module, $pred,
            "Requesting reuse information while CTGC field not set.")
    ).

%-----------------------------------------------------------------------------%

worst_contains_trace(contains_trace_goal, contains_trace_goal) =
    contains_trace_goal.
worst_contains_trace(contains_trace_goal, contains_no_trace_goal) =
    contains_trace_goal.
worst_contains_trace(contains_no_trace_goal, contains_trace_goal) =
    contains_trace_goal.
worst_contains_trace(contains_no_trace_goal, contains_no_trace_goal) =
    contains_no_trace_goal.

goal_get_nonlocals(hlds_goal(_GoalExpr, GoalInfo)) =
    goal_info_get_nonlocals(GoalInfo).

goal_set_goal_id(GoalId, Goal0, Goal) :-
    Goal0 = hlds_goal(GoalExpr, GoalInfo0),
    goal_info_set_goal_id(GoalId, GoalInfo0, GoalInfo),
    Goal = hlds_goal(GoalExpr, GoalInfo).

goal_get_purity(hlds_goal(_GoalExpr, GoalInfo)) =
    goal_info_get_purity(GoalInfo).

goal_set_purity(Purity, Goal0, Goal) :-
    Goal0 = hlds_goal(GoalExpr, GoalInfo0),
    goal_info_set_purity(Purity, GoalInfo0, GoalInfo),
    Goal = hlds_goal(GoalExpr, GoalInfo).

goal_get_goal_purity(Goal, Purity, ContainsTraceGoal) :-
    Goal = hlds_goal(_GoalExpr, GoalInfo),
    goal_info_get_goal_purity(GoalInfo, Purity, ContainsTraceGoal).

goal_info_get_goal_purity(GoalInfo, Purity, ContainsTraceGoal) :-
    Purity = goal_info_get_purity(GoalInfo),
    ( goal_info_has_feature(GoalInfo, feature_contains_trace) ->
        ContainsTraceGoal = contains_trace_goal
    ;
        ContainsTraceGoal = contains_no_trace_goal
    ).

goal_info_add_feature(Feature, !GoalInfo) :-
    Features0 = goal_info_get_features(!.GoalInfo),
    set.insert(Features0, Feature, Features),
    goal_info_set_features(Features, !GoalInfo).

goal_info_remove_feature(Feature, !GoalInfo) :-
    Features0 = goal_info_get_features(!.GoalInfo),
    ( set.remove(Features0, Feature, Features) ->
        goal_info_set_features(Features, !GoalInfo)
    ;
        % !.GoalInfo did not have Feature, so there is no need to allocate
        % memory for a new !:GoalInfo.
        true
    ).

goal_info_has_feature(GoalInfo, Feature) :-
    Features = goal_info_get_features(GoalInfo),
    set.member(Feature, Features).

%-----------------------------------------------------------------------------%

goal_info_set_mdprof_inst(IsMDProfInst, !GoalInfo) :-
    goal_info_get_maybe_dp_info(!.GoalInfo) = MaybeDPInfo0,
    (
        MaybeDPInfo0 = yes(dp_goal_info(_, DPCoverageInfo)),
        MaybeDPInfo = yes(dp_goal_info(IsMDProfInst, DPCoverageInfo))
    ;
        MaybeDPInfo0 = no,
        MaybeDPInfo = yes(dp_goal_info(IsMDProfInst, no))
    ),
    goal_info_set_maybe_dp_info(MaybeDPInfo, !GoalInfo).

%-----------------------------------------------------------------------------%

goal_set_context(Context, hlds_goal(GoalExpr, GoalInfo0),
        hlds_goal(GoalExpr, GoalInfo)) :-
    goal_info_set_context(Context, GoalInfo0, GoalInfo).

goal_add_feature(Feature, hlds_goal(GoalExpr, GoalInfo0),
        hlds_goal(GoalExpr, GoalInfo)) :-
    goal_info_add_feature(Feature, GoalInfo0, GoalInfo).

goal_remove_feature(Feature, hlds_goal(GoalExpr, GoalInfo0),
        hlds_goal(GoalExpr, GoalInfo)) :-
    goal_info_remove_feature(Feature, GoalInfo0, GoalInfo).

goal_has_feature(hlds_goal(_GoalExpr, GoalInfo), Feature) :-
    goal_info_has_feature(GoalInfo, Feature).

%-----------------------------------------------------------------------------%
%
% Rename predicates.
%

rename_some_vars_in_goal(Subn, Goal0, Goal) :-
    rename_vars_in_goal(need_not_rename, Subn, Goal0, Goal).

must_rename_vars_in_goal(Subn, Goal0, Goal) :-
    rename_vars_in_goal(must_rename, Subn, Goal0, Goal).

:- pred rename_vars_in_goal(must_rename::in, prog_var_renaming::in,
    hlds_goal::in, hlds_goal::out) is det.

rename_vars_in_goal(Must, Subn, Goal0, Goal) :-
    Goal0 = hlds_goal(GoalExpr0, GoalInfo0),
    rename_vars_in_goal_expr(Must, Subn, GoalExpr0, GoalExpr),
    rename_vars_in_goal_info(Must, Subn, GoalInfo0, GoalInfo),
    Goal = hlds_goal(GoalExpr, GoalInfo).

rename_vars_in_goals(_, _, [], []).
rename_vars_in_goals(Must, Subn, [Goal0 | Goals0], [Goal | Goals]) :-
    rename_vars_in_goal(Must, Subn, Goal0, Goal),
    rename_vars_in_goals(Must, Subn, Goals0, Goals).

:- pred rename_vars_in_cases(must_rename::in, prog_var_renaming::in,
    list(case)::in, list(case)::out) is det.

rename_vars_in_cases(_Must, _Subn, [], []).
rename_vars_in_cases(Must, Subn, [Case0 | Cases0], [Case | Cases]) :-
    Case0 = case(MainConsId, OtherConsIds, Goal0),
    rename_vars_in_goal(Must, Subn, Goal0, Goal),
    Case = case(MainConsId, OtherConsIds, Goal),
    rename_vars_in_cases(Must, Subn, Cases0, Cases).

%-----------------------------------------------------------------------------%

rename_vars_in_goal_expr(Must, Subn, Expr0, Expr) :-
    (
        Expr0 = conj(ConjType, Goals0),
        rename_vars_in_goals(Must, Subn, Goals0, Goals),
        Expr = conj(ConjType, Goals)
    ;
        Expr0 = disj(Goals0),
        rename_vars_in_goals(Must, Subn, Goals0, Goals),
        Expr = disj(Goals)
    ;
        Expr0 = switch(Var0, Det, Cases0),
        rename_var(Must, Subn, Var0, Var),
        rename_vars_in_cases(Must, Subn, Cases0, Cases),
        Expr = switch(Var, Det, Cases)
    ;
        Expr0 = if_then_else(Vars0, Cond0, Then0, Else0),
        rename_var_list(Must, Subn, Vars0, Vars),
        rename_vars_in_goal(Must, Subn, Cond0, Cond),
        rename_vars_in_goal(Must, Subn, Then0, Then),
        rename_vars_in_goal(Must, Subn, Else0, Else),
        Expr = if_then_else(Vars, Cond, Then, Else)
    ;
        Expr0 = negation(Goal0),
        rename_vars_in_goal(Must, Subn, Goal0, Goal),
        Expr = negation(Goal)
    ;
        Expr0 = scope(Reason0, Goal0),
        (
            Reason0 = exist_quant(Vars0),
            rename_var_list(Must, Subn, Vars0, Vars),
            Reason = exist_quant(Vars)
        ;
            Reason0 = promise_purity(_),
            Reason = Reason0
        ;
            Reason0 = promise_solutions(Vars0, Kind),
            rename_var_list(Must, Subn, Vars0, Vars),
            Reason = promise_solutions(Vars, Kind)
        ;
            Reason0 = require_complete_switch(Var0),
            rename_var(Must, Subn, Var0, Var),
            Reason = require_complete_switch(Var)
        ;
            Reason0 = require_detism(_),
            Reason = Reason0
        ;
            Reason0 = barrier(_),
            Reason = Reason0
        ;
            Reason0 = commit(_),
            Reason = Reason0
        ;
            Reason0 = from_ground_term(Var0, Kind),
            rename_var(Must, Subn, Var0, Var),
            Reason = from_ground_term(Var, Kind)
        ;
            Reason0 = trace_goal(Flag, Grade, Env, Vars, QuantVars0),
            rename_var_list(Must, Subn, QuantVars0, QuantVars),
            Reason = trace_goal(Flag, Grade, Env, Vars, QuantVars)
        ),
        rename_vars_in_goal(Must, Subn, Goal0, Goal),
        Expr = scope(Reason, Goal)
    ;
        Expr0 = generic_call(GenericCall0, Args0, Modes, Det),
        rename_generic_call(Must, Subn, GenericCall0, GenericCall),
        rename_var_list(Must, Subn, Args0, Args),
        Expr = generic_call(GenericCall, Args, Modes, Det)
    ;
        Expr0 = plain_call(PredId, ProcId, Args0, Builtin, Context, Sym),
        rename_var_list(Must, Subn, Args0, Args),
        Expr = plain_call(PredId, ProcId, Args, Builtin, Context, Sym)
    ;
        Expr0 = unify(LHS0, RHS0, Mode, Unify0, Context),
        rename_var(Must, Subn, LHS0, LHS),
        rename_unify_rhs(Must, Subn, RHS0, RHS),
        rename_unify(Must, Subn, Unify0, Unify),
        Expr = unify(LHS, RHS, Mode, Unify, Context)
    ;
        Expr0 = call_foreign_proc(Attrs, PredId, ProcId, Args0, Extra0,
            MTRC, Impl),
        rename_arg_list(Must, Subn, Args0, Args),
        rename_arg_list(Must, Subn, Extra0, Extra),
        Expr = call_foreign_proc(Attrs, PredId, ProcId, Args, Extra,
            MTRC, Impl)
    ;
        Expr0 = shorthand(Shorthand0),
        (
            Shorthand0 = atomic_goal(GoalType0, Outer0, Inner0,
                MaybeOutputVars0, MainGoal0, OrElseGoals0, OrElseInners),
            GoalType = GoalType0,
            Outer0 = atomic_interface_vars(OuterDI0, OuterUO0),
            rename_var(Must, Subn, OuterDI0, OuterDI),
            rename_var(Must, Subn, OuterUO0, OuterUO),
            Outer = atomic_interface_vars(OuterDI, OuterUO),
            Inner0 = atomic_interface_vars(InnerDI0, InnerUO0),
            rename_var(Must, Subn, InnerDI0, InnerDI),
            rename_var(Must, Subn, InnerUO0, InnerUO),
            Inner = atomic_interface_vars(InnerDI, InnerUO),
            (
                MaybeOutputVars0 = no,
                MaybeOutputVars = MaybeOutputVars0
            ;
                MaybeOutputVars0 = yes(OutputVars0),
                rename_var_list(Must, Subn, OutputVars0, OutputVars),
                MaybeOutputVars = yes(OutputVars)
            ),
            rename_vars_in_goal(Must, Subn, MainGoal0, MainGoal),
            rename_vars_in_goals(Must, Subn, OrElseGoals0, OrElseGoals),
            Shorthand = atomic_goal(GoalType, Outer, Inner,
                MaybeOutputVars, MainGoal, OrElseGoals, OrElseInners)
        ;
            Shorthand0 = try_goal(MaybeIO0, ResultVar0, SubGoal0),
            (
                MaybeIO0 = yes(try_io_state_vars(IOVarInitial0, IOVarFinal0)),
                rename_var(Must, Subn, IOVarInitial0, IOVarInitial),
                rename_var(Must, Subn, IOVarFinal0, IOVarFinal),
                MaybeIO = yes(try_io_state_vars(IOVarInitial, IOVarFinal))
            ;
                MaybeIO0 = no,
                MaybeIO = no
            ),
            rename_var(Must, Subn, ResultVar0, ResultVar),
            rename_vars_in_goal(Must, Subn, SubGoal0, SubGoal),
            Shorthand = try_goal(MaybeIO, ResultVar, SubGoal)
        ;
            Shorthand0 = bi_implication(LeftGoal0, RightGoal0),
            rename_vars_in_goal(Must, Subn, LeftGoal0, LeftGoal),
            rename_vars_in_goal(Must, Subn, RightGoal0, RightGoal),
            Shorthand = bi_implication(LeftGoal, RightGoal)
        ),
        Expr = shorthand(Shorthand)
    ).

:- pred rename_unify_rhs(must_rename::in, prog_var_renaming::in,
    unify_rhs::in, unify_rhs::out) is det.

rename_unify_rhs(Must, Subn, RHS0, RHS) :-
    (
        RHS0 = rhs_var(Var0),
        rename_var(Must, Subn, Var0, Var),
        RHS = rhs_var(Var)
    ;
        RHS0 = rhs_functor(Functor, E, ArgVars0),
        rename_var_list(Must, Subn, ArgVars0, ArgVars),
        RHS = rhs_functor(Functor, E, ArgVars)
    ;
        RHS0 = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
            NonLocals0, Vars0, Modes, Det, Goal0),
        rename_var_list(Must, Subn, NonLocals0, NonLocals),
        rename_var_list(Must, Subn, Vars0, Vars),
        rename_vars_in_goal(Must, Subn, Goal0, Goal),
        RHS = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
            NonLocals, Vars, Modes, Det, Goal)
    ).

%-----------------------------------------------------------------------------%
%
% Incremental rename predicates.
%

incremental_rename_vars_in_goal(Subn0, SubnUpdates, Goal0, Goal) :-
    Goal0 = hlds_goal(GoalExpr0, GoalInfo0),
    GoalId = goal_info_get_goal_id(GoalInfo0),
    ( map.search(SubnUpdates, GoalId, GoalSubns) ->
        trace [compiletime(flag("statevar-subn")), io(!IO)] (
            GoalId = goal_id(GoalIdNum),
            io.format("Goal id %d has substitutions\n", [i(GoalIdNum)], !IO),
            io.write(GoalSubns, !IO),
            io.nl(!IO)
        ),
        list.foldl(follow_subn_until_fixpoint, GoalSubns, Subn0, Subn)
    ;
        Subn = Subn0
    ),
    incremental_rename_vars_in_goal_expr(Subn, SubnUpdates,
        GoalExpr0, GoalExpr),
    rename_vars_in_goal_info(need_not_rename, Subn, GoalInfo0, GoalInfo),
    Goal = hlds_goal(GoalExpr, GoalInfo).

:- pred follow_subn_until_fixpoint(pair(prog_var, prog_var)::in,
    prog_var_renaming::in, prog_var_renaming::out) is det.

follow_subn_until_fixpoint(FromVar - ToVar, !Subn) :-
    ( map.search(!.Subn, ToVar, SubstitutedToVar) ->
        trace [compiletime(flag("statevar-subn")), io(!IO)] (
            io.write_string("short circuiting ", !IO),
            io.write(FromVar, !IO),
            io.write_string(": ", !IO),
            io.write(ToVar, !IO),
            io.write_string(" -> ", !IO),
            io.write(SubstitutedToVar, !IO),
            io.nl(!IO)
        ),
        follow_subn_until_fixpoint(FromVar - SubstitutedToVar, !Subn)
    ;
        trace [compiletime(flag("statevar-subn")), io(!IO)] (
            io.write_string("applied substitution: ", !IO),
            io.write(FromVar, !IO),
            io.write_string(" to ", !IO),
            io.write(ToVar, !IO),
            io.nl(!IO)
        ),
        svmap.det_insert(FromVar, ToVar, !Subn)
    ).

:- pred incremental_rename_vars_in_goals(prog_var_renaming::in,
    map(goal_id, assoc_list(prog_var, prog_var))::in,
    list(hlds_goal)::in, list(hlds_goal)::out) is det.

incremental_rename_vars_in_goals(_, _, [], []).
incremental_rename_vars_in_goals(Subn, SubnUpdates,
        [Goal0 | Goals0], [Goal | Goals]) :-
    incremental_rename_vars_in_goal(Subn, SubnUpdates, Goal0, Goal),
    incremental_rename_vars_in_goals(Subn, SubnUpdates, Goals0, Goals).

:- pred incremental_rename_vars_in_cases(prog_var_renaming::in,
    map(goal_id, assoc_list(prog_var, prog_var))::in,
    list(case)::in, list(case)::out) is det.

incremental_rename_vars_in_cases(_, _, [], []).
incremental_rename_vars_in_cases(Subn, SubnUpdates,
        [Case0 | Cases0], [Case | Cases]) :-
    Case0 = case(MainConsId, OtherConsIds, Goal0),
    incremental_rename_vars_in_goal(Subn, SubnUpdates, Goal0, Goal),
    Case = case(MainConsId, OtherConsIds, Goal),
    incremental_rename_vars_in_cases(Subn, SubnUpdates, Cases0, Cases).

%-----------------------------------------------------------------------------%

:- pred incremental_rename_vars_in_goal_expr(prog_var_renaming::in,
    map(goal_id, assoc_list(prog_var, prog_var))::in,
    hlds_goal_expr::in, hlds_goal_expr::out) is det.

incremental_rename_vars_in_goal_expr(Subn, SubnUpdates, Expr0, Expr) :-
    (
        Expr0 = conj(ConjType, Goals0),
        incremental_rename_vars_in_goals(Subn, SubnUpdates, Goals0, Goals),
        Expr = conj(ConjType, Goals)
    ;
        Expr0 = disj(Goals0),
        incremental_rename_vars_in_goals(Subn, SubnUpdates, Goals0, Goals),
        Expr = disj(Goals)
    ;
        Expr0 = switch(Var0, Det, Cases0),
        rename_var(need_not_rename, Subn, Var0, Var),
        incremental_rename_vars_in_cases(Subn, SubnUpdates, Cases0, Cases),
        Expr = switch(Var, Det, Cases)
    ;
        Expr0 = if_then_else(Vars0, Cond0, Then0, Else0),
        rename_var_list(need_not_rename, Subn, Vars0, Vars),
        incremental_rename_vars_in_goal(Subn, SubnUpdates, Cond0, Cond),
        incremental_rename_vars_in_goal(Subn, SubnUpdates, Then0, Then),
        incremental_rename_vars_in_goal(Subn, SubnUpdates, Else0, Else),
        Expr = if_then_else(Vars, Cond, Then, Else)
    ;
        Expr0 = negation(Goal0),
        incremental_rename_vars_in_goal(Subn, SubnUpdates, Goal0, Goal),
        Expr = negation(Goal)
    ;
        Expr0 = scope(Reason0, Goal0),
        (
            Reason0 = exist_quant(Vars0),
            rename_var_list(need_not_rename, Subn, Vars0, Vars),
            Reason = exist_quant(Vars)
        ;
            Reason0 = promise_purity(_),
            Reason = Reason0
        ;
            Reason0 = promise_solutions(Vars0, Kind),
            rename_var_list(need_not_rename, Subn, Vars0, Vars),
            Reason = promise_solutions(Vars, Kind)
        ;
            Reason0 = require_complete_switch(Var0),
            rename_var(need_not_rename, Subn, Var0, Var),
            Reason = require_complete_switch(Var)
        ;
            Reason0 = require_detism(_),
            Reason = Reason0
        ;
            Reason0 = barrier(_),
            Reason = Reason0
        ;
            Reason0 = commit(_),
            Reason = Reason0
        ;
            Reason0 = from_ground_term(Var0, Kind),
            rename_var(need_not_rename, Subn, Var0, Var),
            Reason = from_ground_term(Var, Kind)
        ;
            Reason0 = trace_goal(Flag, Grade, Env, Vars, QuantVars0),
            rename_var_list(need_not_rename, Subn, QuantVars0, QuantVars),
            Reason = trace_goal(Flag, Grade, Env, Vars, QuantVars)
        ),
        incremental_rename_vars_in_goal(Subn, SubnUpdates, Goal0, Goal),
        Expr = scope(Reason, Goal)
    ;
        Expr0 = generic_call(GenericCall0, Args0, Modes, Det),
        rename_generic_call(need_not_rename, Subn, GenericCall0, GenericCall),
        rename_var_list(need_not_rename, Subn, Args0, Args),
        Expr = generic_call(GenericCall, Args, Modes, Det)
    ;
        Expr0 = plain_call(PredId, ProcId, Args0, Builtin, Context, Sym),
        rename_var_list(need_not_rename, Subn, Args0, Args),
        Expr = plain_call(PredId, ProcId, Args, Builtin, Context, Sym)
    ;
        Expr0 = unify(LHS0, RHS0, Mode, Unify0, Context),
        rename_var(need_not_rename, Subn, LHS0, LHS),
        incremental_rename_unify_rhs(Subn, SubnUpdates, RHS0, RHS),
        rename_unify(need_not_rename, Subn, Unify0, Unify),
        Expr = unify(LHS, RHS, Mode, Unify, Context)
    ;
        Expr0 = call_foreign_proc(Attrs, PredId, ProcId, Args0, Extra0,
            MTRC, Impl),
        rename_arg_list(need_not_rename, Subn, Args0, Args),
        rename_arg_list(need_not_rename, Subn, Extra0, Extra),
        Expr = call_foreign_proc(Attrs, PredId, ProcId, Args, Extra,
            MTRC, Impl)
    ;
        Expr0 = shorthand(Shorthand0),
        (
            Shorthand0 = atomic_goal(GoalType0, Outer0, Inner0,
                MaybeOutputVars0, MainGoal0, OrElseGoals0, OrElseInners),
            GoalType = GoalType0,
            Outer0 = atomic_interface_vars(OuterDI0, OuterUO0),
            rename_var(need_not_rename, Subn, OuterDI0, OuterDI),
            rename_var(need_not_rename, Subn, OuterUO0, OuterUO),
            Outer = atomic_interface_vars(OuterDI, OuterUO),
            Inner0 = atomic_interface_vars(InnerDI0, InnerUO0),
            rename_var(need_not_rename, Subn, InnerDI0, InnerDI),
            rename_var(need_not_rename, Subn, InnerUO0, InnerUO),
            Inner = atomic_interface_vars(InnerDI, InnerUO),
            (
                MaybeOutputVars0 = no,
                MaybeOutputVars = MaybeOutputVars0
            ;
                MaybeOutputVars0 = yes(OutputVars0),
                rename_var_list(need_not_rename, Subn, OutputVars0, OutputVars),
                MaybeOutputVars = yes(OutputVars)
            ),
            incremental_rename_vars_in_goal(Subn, SubnUpdates,
                MainGoal0, MainGoal),
            incremental_rename_vars_in_goals(Subn, SubnUpdates,
                OrElseGoals0, OrElseGoals),
            Shorthand = atomic_goal(GoalType, Outer, Inner,
                MaybeOutputVars, MainGoal, OrElseGoals, OrElseInners)
        ;
            Shorthand0 = try_goal(MaybeIO0, ResultVar0, SubGoal0),
            (
                MaybeIO0 = yes(try_io_state_vars(IOVarInitial0, IOVarFinal0)),
                rename_var(need_not_rename, Subn, IOVarInitial0, IOVarInitial),
                rename_var(need_not_rename, Subn, IOVarFinal0, IOVarFinal),
                MaybeIO = yes(try_io_state_vars(IOVarInitial, IOVarFinal))
            ;
                MaybeIO0 = no,
                MaybeIO = no
            ),
            rename_var(need_not_rename, Subn, ResultVar0, ResultVar),
            incremental_rename_vars_in_goal(Subn, SubnUpdates,
                SubGoal0, SubGoal),
            Shorthand = try_goal(MaybeIO, ResultVar, SubGoal)
        ;
            Shorthand0 = bi_implication(LeftGoal0, RightGoal0),
            incremental_rename_vars_in_goal(Subn, SubnUpdates,
                LeftGoal0, LeftGoal),
            incremental_rename_vars_in_goal(Subn, SubnUpdates,
                RightGoal0, RightGoal),
            Shorthand = bi_implication(LeftGoal, RightGoal)
        ),
        Expr = shorthand(Shorthand)
    ).

:- pred incremental_rename_unify_rhs(prog_var_renaming::in,
    map(goal_id, assoc_list(prog_var, prog_var))::in,
    unify_rhs::in, unify_rhs::out) is det.

incremental_rename_unify_rhs(Subn, SubnUpdates, RHS0, RHS) :-
    (
        RHS0 = rhs_var(Var0),
        rename_var(need_not_rename, Subn, Var0, Var),
        RHS = rhs_var(Var)
    ;
        RHS0 = rhs_functor(Functor, E, ArgVars0),
        rename_var_list(need_not_rename, Subn, ArgVars0, ArgVars),
        RHS = rhs_functor(Functor, E, ArgVars)
    ;
        RHS0 = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
            NonLocals0, Vars0, Modes, Det, Goal0),
        rename_var_list(need_not_rename, Subn, NonLocals0, NonLocals),
        rename_var_list(need_not_rename, Subn, Vars0, Vars),
        incremental_rename_vars_in_goal(Subn, SubnUpdates, Goal0, Goal),
        RHS = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
            NonLocals, Vars, Modes, Det, Goal)
    ).

%-----------------------------------------------------------------------------%
%
% Predicates used to implement both incremental and non-incremental renames.
%

:- pred rename_arg_list(must_rename::in, prog_var_renaming::in,
    list(foreign_arg)::in, list(foreign_arg)::out) is det.

rename_arg_list(_Must, _Subn, [], []).
rename_arg_list(Must, Subn, [Arg0 | Args0], [Arg | Args]) :-
    rename_arg(Must, Subn, Arg0, Arg),
    rename_arg_list(Must, Subn, Args0, Args).

:- pred rename_arg(must_rename::in, prog_var_renaming::in,
    foreign_arg::in, foreign_arg::out) is det.

rename_arg(Must, Subn, Arg0, Arg) :-
    Arg0 = foreign_arg(Var0, B, C, D),
    rename_var(Must, Subn, Var0, Var),
    Arg = foreign_arg(Var, B, C, D).

:- pred rename_unify(must_rename::in, prog_var_renaming::in,
    unification::in, unification::out) is det.

rename_unify(Must, Subn, Unify0, Unify) :-
    (
        Unify0 = construct(Var0, ConsId, Vars0, Modes, How0, Uniq, SubInfo0),
        rename_var(Must, Subn, Var0, Var),
        rename_var_list(Must, Subn, Vars0, Vars),
        (
            How0 = reuse_cell(cell_to_reuse(ReuseVar0, B, C)),
            rename_var(Must, Subn, ReuseVar0, ReuseVar),
            How = reuse_cell(cell_to_reuse(ReuseVar, B, C))
        ;
            How0 = construct_dynamically,
            How = How0
        ;
            How0 = construct_statically,
            How = How0
        ;
            How0 = construct_in_region(RegVar0),
            rename_var(Must, Subn, RegVar0, RegVar),
            How = construct_in_region(RegVar)
        ),
        (
            SubInfo0 = construct_sub_info(MTA, MaybeSize0),
            (
                MaybeSize0 = no,
                MaybeSize = no
            ;
                MaybeSize0 = yes(Size0),
                (
                    Size0 = known_size(_),
                    Size = Size0
                ;
                    Size0 = dynamic_size(SizeVar0),
                    rename_var(Must, Subn, SizeVar0, SizeVar),
                    Size = dynamic_size(SizeVar)
                ),
                MaybeSize = yes(Size)
            ),
            SubInfo = construct_sub_info(MTA, MaybeSize)
        ;
            SubInfo0 = no_construct_sub_info,
            SubInfo = no_construct_sub_info
        ),
        Unify = construct(Var, ConsId, Vars, Modes, How, Uniq, SubInfo)
    ;
        Unify0 = deconstruct(Var0, ConsId, Vars0, Modes, Cat, CanCGC),
        rename_var(Must, Subn, Var0, Var),
        rename_var_list(Must, Subn, Vars0, Vars),
        Unify = deconstruct(Var, ConsId, Vars, Modes, Cat, CanCGC)
    ;
        Unify0 = assign(L0, R0),
        rename_var(Must, Subn, L0, L),
        rename_var(Must, Subn, R0, R),
        Unify = assign(L, R)
    ;
        Unify0 = simple_test(L0, R0),
        rename_var(Must, Subn, L0, L),
        rename_var(Must, Subn, R0, R),
        Unify = simple_test(L, R)
    ;
        Unify0 = complicated_unify(Modes, Cat, TypeInfoVars0),
        rename_var_list(Must, Subn, TypeInfoVars0, TypeInfoVars),
        Unify = complicated_unify(Modes, Cat, TypeInfoVars)
    ).

:- pred rename_generic_call(must_rename::in, prog_var_renaming::in,
    generic_call::in, generic_call::out) is det.

rename_generic_call(Must, Subn, Call0, Call) :-
    (
        Call0 = higher_order(Var0, Purity, PredOrFunc, Arity),
        rename_var(Must, Subn, Var0, Var),
        Call = higher_order(Var, Purity, PredOrFunc, Arity)
    ;
        Call0 = class_method(Var0, Method, ClassId, MethodId),
        rename_var(Must, Subn, Var0, Var),
        Call = class_method(Var, Method, ClassId, MethodId)
    ;
        ( Call0 = event_call(_EventName)
        ; Call0 = cast(_CastKind)
        ),
        Call = Call0
    ).

rename_vars_in_goal_info(Must, Subn, !GoalInfo) :-
    !.GoalInfo = goal_info(Detism, InstMapDelta0, NonLocals0, Purity,
        Features, GoalPath, CodeGenInfo0, ExtraInfo0),

    rename_vars_in_var_set(Must, Subn, NonLocals0, NonLocals),
    instmap_delta_apply_sub(Must, Subn, InstMapDelta0, InstMapDelta),
    (
        CodeGenInfo0 = no_code_gen_info,
        CodeGenInfo = no_code_gen_info
    ;
        CodeGenInfo0 = llds_code_gen_info(LldsInfo0),
        rename_vars_in_llds_code_gen_info(Must, Subn, LldsInfo0, LldsInfo),
        CodeGenInfo = llds_code_gen_info(LldsInfo)
    ),

    ExtraInfo0 = extra_goal_info(Context, RevGoalPath, HO_Values,
        MaybeCTGC0, MaybeRBMM0, MaybeMCI0, MaybeDPInfo0),
    (
        MaybeCTGC0 = no,
        MaybeCTGC = no
    ;
        MaybeCTGC0 = yes(CTGC0),
        CTGC0 = ctgc_goal_info(ForwardUse0, BackwardUse0, ReuseDesc0),
        rename_vars_in_var_set(Must, Subn, ForwardUse0, ForwardUse),
        rename_vars_in_var_set(Must, Subn, BackwardUse0, BackwardUse),
        (
            ( ReuseDesc0 = no_reuse_info
            ; ReuseDesc0 = no_possible_reuse
            ; ReuseDesc0 = missed_reuse(_)
            ),
            ReuseDesc = ReuseDesc0
        ;
            ReuseDesc0 = potential_reuse(ShortReuseDesc0),
            rename_vars_in_short_reuse_desc(Must, Subn,
                ShortReuseDesc0, ShortReuseDesc),
            ReuseDesc = potential_reuse(ShortReuseDesc)
        ;
            ReuseDesc0 = reuse(ShortReuseDesc0),
            rename_vars_in_short_reuse_desc(Must, Subn,
                ShortReuseDesc0, ShortReuseDesc),
            ReuseDesc = reuse(ShortReuseDesc)
        ),
        CTGC = ctgc_goal_info(ForwardUse, BackwardUse, ReuseDesc),
        MaybeCTGC = yes(CTGC)
    ),
    (
        MaybeRBMM0 = no,
        MaybeRBMM = no
    ;
        MaybeRBMM0 = yes(RBMM0),
        RBMM0 = rbmm_goal_info(Created0, Removed0, Carried0, Alloc0, NonAlloc0),
        rename_vars_in_var_set(Must, Subn, Created0, Created),
        rename_vars_in_var_set(Must, Subn, Removed0, Removed),
        rename_vars_in_var_set(Must, Subn, Carried0, Carried),
        rename_vars_in_var_set(Must, Subn, Alloc0, Alloc),
        rename_vars_in_var_set(Must, Subn, NonAlloc0, NonAlloc),
        RBMM = rbmm_goal_info(Created, Removed, Carried, Alloc, NonAlloc),
        MaybeRBMM = yes(RBMM)
    ),
    (
        MaybeMCI0 = no,
        MaybeMCI = no
    ;
        MaybeMCI0 = yes(MCI0),
        MCI0 = mode_constr_goal_info(Occurring0, Producing0, Consuming0,
            MakeVisible0, NeedVisible0),
        rename_vars_in_var_set(Must, Subn, Occurring0, Occurring),
        rename_vars_in_var_set(Must, Subn, Producing0, Producing),
        rename_vars_in_var_set(Must, Subn, Consuming0, Consuming),
        rename_vars_in_var_set(Must, Subn, MakeVisible0, MakeVisible),
        rename_vars_in_var_set(Must, Subn, NeedVisible0, NeedVisible),
        MCI = mode_constr_goal_info(Occurring, Producing, Consuming,
            MakeVisible, NeedVisible),
        MaybeMCI = yes(MCI)
    ),
    MaybeDPInfo = MaybeDPInfo0,
    ExtraInfo = extra_goal_info(Context, RevGoalPath, HO_Values,
        MaybeCTGC, MaybeRBMM, MaybeMCI, MaybeDPInfo),

    !:GoalInfo = goal_info(Detism, InstMapDelta, NonLocals, Purity,
        Features, GoalPath, CodeGenInfo, ExtraInfo).

:- pred rename_vars_in_short_reuse_desc(must_rename::in, prog_var_renaming::in,
    short_reuse_description::in, short_reuse_description::out) is det.

rename_vars_in_short_reuse_desc(Must, Subn, ShortReuseDesc0, ShortReuseDesc) :-
    (
        ( ShortReuseDesc0 = cell_died
        ; ShortReuseDesc0 = reuse_call(_, _)
        ),
        ShortReuseDesc = ShortReuseDesc0
    ;
        ShortReuseDesc0 = cell_reused(DeadVar0, IsCond, ConsIds,
            FieldNeedUpdates),
        rename_var(Must, Subn, DeadVar0, DeadVar),
        ShortReuseDesc = cell_reused(DeadVar, IsCond, ConsIds,
            FieldNeedUpdates)
    ).

:- pred rename_var_maps(must_rename::in, prog_var_renaming::in,
    map(prog_var, T)::in, map(prog_var, T)::out) is det.

rename_var_maps(Must, Subn, Map0, Map) :-
    map.to_assoc_list(Map0, AssocList0),
    rename_var_maps_2(Must, Subn, AssocList0, AssocList),
    map.from_assoc_list(AssocList, Map).

:- pred rename_var_maps_2(must_rename::in, map(var(V), var(V))::in,
    assoc_list(var(V), T)::in, assoc_list(var(V), T)::out) is det.

rename_var_maps_2(_Must, _Subn, [], []).
rename_var_maps_2(Must, Subn,
        [Var - Item | VarItems], [NewVar - Item | NewVarItems]) :-
    rename_var(Must, Subn, Var, NewVar),
    rename_var_maps_2(Must, Subn, VarItems, NewVarItems).

:- pred rename_var_pair_list(must_rename::in, prog_var_renaming::in,
    assoc_list(prog_var, T)::in, list(pair(prog_var, T))::out) is det.

rename_var_pair_list(_Must, _Subn, [], []).
rename_var_pair_list(Must, Subn,
        [Var - Item | VarItems], [NewVar - Item | NewVarItems]) :-
    rename_var(Must, Subn, Var, NewVar),
    rename_var_pair_list(Must, Subn, VarItems, NewVarItems).

%-----------------------------------------------------------------------------%
%
% Miscellaneous utility procedures for dealing with HLDS goals.
%

goal_to_conj_list(Goal, ConjList) :-
    ( Goal = hlds_goal(conj(plain_conj, List), _) ->
        ConjList = List
    ;
        ConjList = [Goal]
    ).

goal_to_par_conj_list(Goal, ConjList) :-
    ( Goal = hlds_goal(conj(parallel_conj, List), _) ->
        ConjList = List
    ;
        ConjList = [Goal]
    ).

goal_to_disj_list(Goal, DisjList) :-
    ( Goal = hlds_goal(disj(List), _) ->
        DisjList = List
    ;
        DisjList = [Goal]
    ).

conj_list_to_goal(ConjList, GoalInfo, Goal) :-
    ( ConjList = [Goal0] ->
        Goal = Goal0
    ;
        Goal = hlds_goal(conj(plain_conj, ConjList), GoalInfo)
    ).

par_conj_list_to_goal(ConjList, GoalInfo, Goal) :-
    ( ConjList = [Goal0] ->
        Goal = Goal0
    ;
        Goal = hlds_goal(conj(parallel_conj, ConjList), GoalInfo)
    ).

disj_list_to_goal(DisjList, GoalInfo, Goal) :-
    ( DisjList = [Goal0] ->
        Goal = Goal0
    ;
        Goal = hlds_goal(disj(DisjList), GoalInfo)
    ).

conjoin_goal_and_goal_list(Goal0, Goals, Goal) :-
    Goal0 = hlds_goal(GoalExpr0, GoalInfo0),
    ( GoalExpr0 = conj(plain_conj, GoalList0) ->
        GoalList = GoalList0 ++ Goals,
        GoalExpr = conj(plain_conj, GoalList)
    ;
        GoalExpr = conj(plain_conj, [Goal0 | Goals])
    ),
    Goal = hlds_goal(GoalExpr, GoalInfo0).

conjoin_goals(Goal1, Goal2, Goal) :-
    ( Goal2 = hlds_goal(conj(plain_conj, Goals2), _) ->
        GoalList = Goals2
    ;
        GoalList = [Goal2]
    ),
    conjoin_goal_and_goal_list(Goal1, GoalList, Goal).

negate_goal(Goal, GoalInfo, NegatedGoal) :-
    (
        % Eliminate double negations.
        Goal = hlds_goal(negation(Goal1), _)
    ->
        NegatedGoal = Goal1
    ;
        % Convert negated conjunctions of negations into disjunctions.
        Goal = hlds_goal(conj(plain_conj, NegatedGoals), _),
        all_negated(NegatedGoals, UnnegatedGoals)
    ->
        NegatedGoal = hlds_goal(disj(UnnegatedGoals), GoalInfo)
    ;
        NegatedGoal = hlds_goal(negation(Goal), GoalInfo)
    ).

:- pred all_negated(list(hlds_goal)::in, list(hlds_goal)::out) is semidet.

all_negated([], []).
all_negated([hlds_goal(negation(Goal), _) | NegatedGoals], [Goal | Goals]) :-
    all_negated(NegatedGoals, Goals).
all_negated([hlds_goal(conj(plain_conj, NegatedConj), _) | NegatedGoals],
        Goals) :-
    all_negated(NegatedConj, Goals1),
    all_negated(NegatedGoals, Goals2),
    Goals = Goals1 ++ Goals2.

%-----------------------------------------------------------------------------%

    % Returns yes if a goal (or subgoal contained within) contains
    % any foreign code.
    %
goal_has_foreign(Goal) = HasForeign :-
    Goal = hlds_goal(GoalExpr, _),
    (
        ( GoalExpr = plain_call(_, _, _, _, _, _)
        ; GoalExpr = generic_call(_, _, _, _)
        ; GoalExpr = unify(_, _, _, _, _)
        ),
        HasForeign = no
    ;
        GoalExpr = conj(_, Goals),
        HasForeign = goal_list_has_foreign(Goals)
    ;
        GoalExpr = disj(Goals),
        HasForeign = goal_list_has_foreign(Goals)
    ;
        GoalExpr = switch(_, _, Cases),
        HasForeign = case_list_has_foreign(Cases)
    ;
        GoalExpr = negation(SubGoal),
        HasForeign = goal_has_foreign(SubGoal)
    ;
        GoalExpr = scope(Reason, SubGoal),
        ( Reason = from_ground_term(_, from_ground_term_construct) ->
            HasForeign = no
        ;
            HasForeign = goal_has_foreign(SubGoal)
        )
    ;
        GoalExpr = if_then_else(_, Cond, Then, Else),
        (
            ( goal_has_foreign(Cond) = yes
            ; goal_has_foreign(Then) = yes
            ; goal_has_foreign(Else) = yes
            )
        ->
            HasForeign = yes
        ;
            HasForeign = no
        )
    ;
        GoalExpr = call_foreign_proc(_, _, _, _, _, _, _),
        HasForeign = yes
    ;
        GoalExpr = shorthand(ShortHand),
        (
            ShortHand = atomic_goal(_, _, _, _, _, _, _),
            HasForeign = yes
        ;
            ShortHand = try_goal(_, _, SubGoal),
            HasForeign = goal_has_foreign(SubGoal)
        ;
            ShortHand = bi_implication(GoalA, GoalB),
            HasForeign = bool.or(goal_has_foreign(GoalA),
                goal_has_foreign(GoalB))
        )
    ).

:- func goal_list_has_foreign(list(hlds_goal)) = bool.

goal_list_has_foreign([]) = no.
goal_list_has_foreign([Goal | Goals]) = HasForeign :-
    ( goal_has_foreign(Goal) = yes ->
        HasForeign = yes
    ;
        HasForeign = goal_list_has_foreign(Goals)
    ).

:- func case_list_has_foreign(list(case)) = bool.

case_list_has_foreign([]) = no.
case_list_has_foreign([Case | Cases]) = HasForeign :-
    Case = case(_, _, Goal),
    ( goal_has_foreign(Goal) = yes ->
        HasForeign = yes
    ;
        HasForeign = case_list_has_foreign(Cases)
    ).

%-----------------------------------------------------------------------------%

goal_expr_has_subgoals(GoalExpr) = HasSubGoals :-
    (
        ( GoalExpr = unify(_, _, _, _, _)
        ; GoalExpr = generic_call(_, _, _, _)
        ; GoalExpr = plain_call(_, _, _, _, _, _)
        ; GoalExpr = call_foreign_proc(_, _, _, _, _, _,  _)
        ),
        HasSubGoals = does_not_have_subgoals
    ;
        ( GoalExpr = conj(_, SubGoals)
        ; GoalExpr = disj(SubGoals)
        ),
        (
            SubGoals = [],
            HasSubGoals = does_not_have_subgoals
        ;
            SubGoals = [_ | _],
            HasSubGoals = has_subgoals
        )
    ;
        ( GoalExpr = if_then_else(_, _, _, _)
        ; GoalExpr = negation(_)
        ; GoalExpr = switch(_, _, _)
        ; GoalExpr = scope(_, _)
        ),
        HasSubGoals = has_subgoals
    ;
        GoalExpr = shorthand(ShortHand),
        ( ShortHand = atomic_goal(_, _, _, _, _, _, _)
        ; ShortHand = try_goal(_, _, _)
        ; ShortHand = bi_implication(_, _)
        ),
        HasSubGoals = has_subgoals
    ).

%-----------------------------------------------------------------------------%

true_goal = hlds_goal(true_goal_expr, GoalInfo) :-
    instmap_delta_init_reachable(InstMapDelta),
    goal_info_init(set.init, InstMapDelta, detism_det, purity_pure, GoalInfo).

true_goal_expr = conj(plain_conj, []).

true_goal_with_context(Context) = hlds_goal(GoalExpr, GoalInfo) :-
    hlds_goal(GoalExpr, GoalInfo0) = true_goal,
    goal_info_set_context(Context, GoalInfo0, GoalInfo).

fail_goal = hlds_goal(fail_goal_expr, GoalInfo) :-
    instmap_delta_init_unreachable(InstMapDelta),
    goal_info_init(set.init, InstMapDelta, detism_failure, purity_pure,
        GoalInfo).

fail_goal_expr = disj([]).

fail_goal_with_context(Context) = hlds_goal(GoalExpr, GoalInfo) :-
    hlds_goal(GoalExpr, GoalInfo0) = fail_goal,
    goal_info_set_context(Context, GoalInfo0, GoalInfo).

%-----------------------------------------------------------------------------%

goal_list_nonlocals(Goals, NonLocals) :-
    UnionNonLocals = (pred(Goal::in, Vars0::in, Vars::out) is det :-
        Goal = hlds_goal(_, GoalInfo),
        Vars1 = goal_info_get_nonlocals(GoalInfo),
        set.union(Vars0, Vars1, Vars)
    ),
    set.init(NonLocals0),
    list.foldl(UnionNonLocals, Goals, NonLocals0, NonLocals).

goal_list_instmap_delta(Goals, InstMapDelta) :-
    ApplyDelta = (pred(Goal::in, Delta0::in, Delta::out) is det :-
        Goal = hlds_goal(_, GoalInfo),
        Delta1 = goal_info_get_instmap_delta(GoalInfo),
        instmap_delta_apply_instmap_delta(Delta0, Delta1, test_size, Delta)
    ),
    instmap_delta_init_reachable(InstMapDelta0),
    list.foldl(ApplyDelta, Goals, InstMapDelta0, InstMapDelta).

goal_list_determinism(Goals, Determinism) :-
    ComputeDeterminism = (pred(Goal::in, Det0::in, Det::out) is det :-
        Goal = hlds_goal(_, GoalInfo),
        Det1 = goal_info_get_determinism(GoalInfo),
        det_conjunction_detism(Det0, Det1, Det)
    ),
    list.foldl(ComputeDeterminism, Goals, detism_det, Determinism).

goal_list_purity(Goals, GoalsPurity) :-
    ComputePurity = (pred(Goal::in, Purity0::in, Purity::out) is det :-
        Goal = hlds_goal(_, GoalInfo),
        Purity1 = goal_info_get_purity(GoalInfo),
        worst_purity(Purity0, Purity1) = Purity
    ),
    list.foldl(ComputePurity, Goals, purity_pure, GoalsPurity).

%-----------------------------------------------------------------------------%

set_goal_contexts(Context, Goal0, Goal) :-
    Goal0 = hlds_goal(GoalExpr0, GoalInfo0),
    goal_info_set_context(Context, GoalInfo0, GoalInfo),
    (
        GoalExpr0 = conj(ConjType, SubGoals0),
        list.map(set_goal_contexts(Context), SubGoals0, SubGoals),
        GoalExpr = conj(ConjType, SubGoals)
    ;
        GoalExpr0 = disj(SubGoals0),
        list.map(set_goal_contexts(Context), SubGoals0, SubGoals),
        GoalExpr = disj(SubGoals)
    ;
        GoalExpr0 = if_then_else(Vars, Cond0, Then0, Else0),
        set_goal_contexts(Context, Cond0, Cond),
        set_goal_contexts(Context, Then0, Then),
        set_goal_contexts(Context, Else0, Else),
        GoalExpr = if_then_else(Vars, Cond, Then, Else)
    ;
        GoalExpr0 = switch(Var, CanFail, Cases0),
        list.map(set_case_contexts(Context), Cases0, Cases),
        GoalExpr = switch(Var, CanFail, Cases)
    ;
        GoalExpr0 = scope(Reason, SubGoal0),
        set_goal_contexts(Context, SubGoal0, SubGoal),
        GoalExpr = scope(Reason, SubGoal)
    ;
        GoalExpr0 = negation(SubGoal0),
        set_goal_contexts(Context, SubGoal0, SubGoal),
        GoalExpr = negation(SubGoal)
    ;
        ( GoalExpr0 = plain_call(_, _, _, _, _, _)
        ; GoalExpr0 = generic_call(_, _, _, _)
        ; GoalExpr0 = unify(_, _, _, _, _)
        ; GoalExpr0 = call_foreign_proc(_, _, _, _, _, _, _)
        ),
        GoalExpr = GoalExpr0
    ;
        GoalExpr0 = shorthand(ShortHand0),
        (
            ShortHand0 = atomic_goal(GoalType, Outer, Inner, MaybeOutputVars,
                MainGoal0, OrElseGoals0, OrElseInners),
            set_goal_contexts(Context, MainGoal0, MainGoal),
            list.map(set_goal_contexts(Context), OrElseGoals0, OrElseGoals),
            ShortHand = atomic_goal(GoalType, Outer, Inner, MaybeOutputVars,
                MainGoal, OrElseGoals, OrElseInners)
        ;
            ShortHand0 = try_goal(MaybeIO, ResultVar, SubGoal0),
            set_goal_contexts(Context, SubGoal0, SubGoal),
            ShortHand = try_goal(MaybeIO, ResultVar, SubGoal)
        ;
            ShortHand0 = bi_implication(LHS0, RHS0),
            set_goal_contexts(Context, LHS0, LHS),
            set_goal_contexts(Context, RHS0, RHS),
            ShortHand = bi_implication(LHS, RHS)
        ),
        GoalExpr = shorthand(ShortHand)
    ),
    Goal = hlds_goal(GoalExpr, GoalInfo).

:- pred set_case_contexts(prog_context::in, case::in, case::out) is det.

set_case_contexts(Context, Case0, Case) :-
    Case0 = case(MainConsId, OtherConsIds, Goal0),
    set_goal_contexts(Context, Goal0, Goal),
    Case = case(MainConsId, OtherConsIds, Goal).

%-----------------------------------------------------------------------------%

create_pure_atomic_complicated_unification(LHS, RHS, Context,
        UnifyMainContext, UnifySubContext, Goal) :-
    create_atomic_complicated_unification(LHS, RHS, Context,
        UnifyMainContext, UnifySubContext, purity_pure, Goal).

create_atomic_complicated_unification(LHS, RHS, Context,
        UnifyMainContext, UnifySubContext, Purity, Goal) :-
    UMode = ((free - free) -> (free - free)),
    Mode = ((free -> free) - (free -> free)),
    Unification = complicated_unify(UMode, can_fail, []),
    UnifyContext = unify_context(UnifyMainContext, UnifySubContext),
    goal_info_init(Context, GoalInfo0),
    goal_info_set_purity(Purity, GoalInfo0, GoalInfo),
    GoalExpr = unify(LHS, RHS, Mode, Unification, UnifyContext),
    Goal = hlds_goal(GoalExpr, GoalInfo).

%-----------------------------------------------------------------------------%

make_simple_assign(X, Y, UnifyMainContext, UnifySubContext, Goal) :-
    Ground = ground(shared, none),
    Mode = ((free -> Ground) - (Ground -> Ground)),
    Unification = assign(X, Y),
    UnifyContext = unify_context(UnifyMainContext, UnifySubContext),
    goal_info_init(set.list_to_set([X, Y]), instmap_delta_bind_var(X),
        detism_semi, purity_pure, GoalInfo),
    GoalExpr = unify(X, rhs_var(Y), Mode, Unification, UnifyContext),
    Goal = hlds_goal(GoalExpr, GoalInfo).

make_simple_test(X, Y, UnifyMainContext, UnifySubContext, Goal) :-
    Ground = ground(shared, none),
    Mode = ((Ground -> Ground) - (Ground -> Ground)),
    Unification = simple_test(X, Y),
    UnifyContext = unify_context(UnifyMainContext, UnifySubContext),
    goal_info_init(set.list_to_set([X, Y]), instmap_delta_bind_no_var,
        detism_semi, purity_pure, GoalInfo),
    GoalExpr = unify(X, rhs_var(Y), Mode, Unification, UnifyContext),
    Goal = hlds_goal(GoalExpr, GoalInfo).

%-----------------------------------------------------------------------------%

make_int_const_construction_alloc_in_proc(Int, MaybeName, Goal, Var,
        !ProcInfo) :-
    proc_info_create_var_from_type(int_type, MaybeName, Var, !ProcInfo),
    make_int_const_construction(Var, Int, Goal).

make_string_const_construction_alloc_in_proc(String, MaybeName, Goal, Var,
        !ProcInfo) :-
    proc_info_create_var_from_type(string_type, MaybeName, Var, !ProcInfo),
    make_string_const_construction(Var, String, Goal).

make_float_const_construction_alloc_in_proc(Float, MaybeName, Goal, Var,
        !ProcInfo) :-
    proc_info_create_var_from_type(float_type, MaybeName, Var, !ProcInfo),
    make_float_const_construction(Var, Float, Goal).

make_char_const_construction_alloc_in_proc(Char, MaybeName, Goal, Var,
        !ProcInfo) :-
    proc_info_create_var_from_type(char_type, MaybeName, Var, !ProcInfo),
    make_char_const_construction(Var, Char, Goal).

make_const_construction_alloc_in_proc(ConsId, Type, MaybeName, Goal, Var,
        !ProcInfo) :-
    proc_info_create_var_from_type(Type, MaybeName, Var, !ProcInfo),
    make_const_construction(Var, ConsId, Goal).

make_int_const_construction_alloc(Int, MaybeName, Goal, Var,
        !VarSet, !VarTypes) :-
    svvarset.new_maybe_named_var(MaybeName, Var, !VarSet),
    svmap.det_insert(Var, int_type, !VarTypes),
    make_int_const_construction(Var, Int, Goal).

make_string_const_construction_alloc(String, MaybeName, Goal, Var,
        !VarSet, !VarTypes) :-
    svvarset.new_maybe_named_var(MaybeName, Var, !VarSet),
    svmap.det_insert(Var, string_type, !VarTypes),
    make_string_const_construction(Var, String, Goal).

make_float_const_construction_alloc(Float, MaybeName, Goal, Var,
        !VarSet, !VarTypes) :-
    svvarset.new_maybe_named_var(MaybeName, Var, !VarSet),
    svmap.det_insert(Var, float_type, !VarTypes),
    make_float_const_construction(Var, Float, Goal).

make_char_const_construction_alloc(Char, MaybeName, Goal, Var,
        !VarSet, !VarTypes) :-
    svvarset.new_maybe_named_var(MaybeName, Var, !VarSet),
    svmap.det_insert(Var, char_type, !VarTypes),
    make_char_const_construction(Var, Char, Goal).

make_const_construction_alloc(ConsId, Type, MaybeName, Goal, Var,
        !VarSet, !VarTypes) :-
    svvarset.new_maybe_named_var(MaybeName, Var, !VarSet),
    svmap.det_insert(Var, Type, !VarTypes),
    make_const_construction(Var, ConsId, Goal).

make_int_const_construction(Var, Int, Goal) :-
    make_const_construction(Var, int_const(Int), Goal).

make_string_const_construction(Var, String, Goal) :-
    make_const_construction(Var, string_const(String), Goal).

make_float_const_construction(Var, Float, Goal) :-
    make_const_construction(Var, float_const(Float), Goal).

make_char_const_construction(Var, Char, Goal) :-
    make_const_construction(Var, char_const(Char), Goal).

make_const_construction(Var, ConsId, hlds_goal(GoalExpr, GoalInfo)) :-
    RHS = rhs_functor(ConsId, no, []),
    Inst = bound(unique, [bound_functor(ConsId, [])]),
    Mode = (free -> Inst) - (Inst -> Inst),
    Unification = construct(Var, ConsId, [], [],
        construct_dynamically, cell_is_unique, no_construct_sub_info),
    Context = unify_context(umc_explicit, []),
    GoalExpr = unify(Var, RHS, Mode, Unification, Context),
    set.singleton_set(NonLocals, Var),
    instmap_delta_init_reachable(InstMapDelta0),
    instmap_delta_insert_var(Var, Inst, InstMapDelta0, InstMapDelta),
    goal_info_init(NonLocals, InstMapDelta, detism_det, purity_pure, GoalInfo).

construct_functor(Var, ConsId, Args, Goal) :-
    list.length(Args, Arity),
    Rhs = rhs_functor(ConsId, no, Args),
    UnifyMode = (free_inst -> ground_inst) - (ground_inst -> ground_inst),
    UniMode = ((free_inst - ground_inst) -> (ground_inst - ground_inst)),
    list.duplicate(Arity, UniMode, UniModes),
    Unification = construct(Var, ConsId, Args, UniModes,
        construct_dynamically, cell_is_unique, no_construct_sub_info),
    UnifyContext = unify_context(umc_explicit, []),
    Unify = unify(Var, Rhs, UnifyMode, Unification, UnifyContext),
    set.list_to_set([Var | Args], NonLocals),
    InstMapDelta = instmap_delta_bind_var(Var),
    goal_info_init(NonLocals, InstMapDelta, detism_det, purity_pure, GoalInfo),
    Goal = hlds_goal(Unify, GoalInfo).

deconstruct_functor(Var, ConsId, Args, Goal) :-
    list.length(Args, Arity),
    Rhs = rhs_functor(ConsId, no, Args),
    UnifyMode = (ground_inst -> free_inst) - (ground_inst -> ground_inst),
    UniMode = ((ground_inst - free_inst) -> (ground_inst - ground_inst)),
    list.duplicate(Arity, UniMode, UniModes),
    UnifyContext = unify_context(umc_explicit, []),
    Unification = deconstruct(Var, ConsId, Args, UniModes, cannot_fail,
        cannot_cgc),
    Unify = unify(Var, Rhs, UnifyMode, Unification, UnifyContext),
    set.list_to_set([Var | Args], NonLocals),
    InstMapDelta = instmap_delta_bind_vars(Args),
    goal_info_init(NonLocals, InstMapDelta, detism_det, purity_pure, GoalInfo),
    Goal = hlds_goal(Unify, GoalInfo).

construct_tuple(Tuple, Args, Goal) :-
    list.length(Args, Arity),
    ConsId = tuple_cons(Arity),
    construct_functor(Tuple, ConsId, Args, Goal).

deconstruct_tuple(Tuple, Args, Goal) :-
    list.length(Args, Arity),
    ConsId = tuple_cons(Arity),
    deconstruct_functor(Tuple, ConsId, Args, Goal).

%-----------------------------------------------------------------------------%

get_pragma_foreign_var_names(MaybeVarNames, VarNames) :-
    get_pragma_foreign_var_names_2(MaybeVarNames, [], VarNames0),
    list.reverse(VarNames0, VarNames).

:- pred get_pragma_foreign_var_names_2(list(maybe(pair(string, mer_mode)))::in,
    list(string)::in, list(string)::out) is det.

get_pragma_foreign_var_names_2([], !Names).
get_pragma_foreign_var_names_2([MaybeName | MaybeNames], !Names) :-
    (
        MaybeName = yes(Name - _),
        !:Names = [Name | !.Names]
    ;
        MaybeName = no
    ),
    get_pragma_foreign_var_names_2(MaybeNames, !Names).

%-----------------------------------------------------------------------------%
:- end_module hlds.hlds_goal.
%-----------------------------------------------------------------------------%
