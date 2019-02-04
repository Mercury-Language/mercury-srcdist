%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1996-2007 The University of Melbourne.
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

:- import_module hlds.hlds_llds.
:- import_module hlds.hlds_pred.
:- import_module hlds.instmap.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.program_representation.
:- import_module parse_tree.prog_data.

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

    ;       conj(conj_type, hlds_goals)
            % A conjunction. NOTE: plain conjunctions must be fully flattened
            % before mode analysis. As a general rule, it is a good idea to
            % keep them flattened.

    ;       disj(hlds_goals)
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

:- type conj_type
    --->    plain_conj
    ;       parallel_conj.

:- type after_semantic_analysis
    --->    before_semantic_analysis
    ;       after_semantic_analysis.

    % Instances of these `shorthand' goals are implemented by a
    % hlds --> hlds transformation that replaces them with
    % equivalent non-shorthand goals.
    %
:- type shorthand_goal_expr
            % bi-implication (A <=> B)
            %
            % Note that ordinary implications (A => B)
            % and reverse implications (A <= B) are expanded
            % out before we construct the HLDS.  But we can't
            % do that for bi-implications, because if expansion
            % of bi-implications is done before implicit quantification,
            % then the quantification would be wrong.
            %
    --->    bi_implication(hlds_goal, hlds_goal).

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

    ;       promise_purity(implicit_purity_promise, purity)
            % The goal inside the scope implements an interface of the
            % specified purity, even if its implementation uses less pure
            % components.
            %
            % Works the same way as a promise_pure or promise_semipure
            % pragma, except that it applies to arbitrary goals and not
            % just whole procedure bodies. The implicit_purity_promise
            % says whether or not the compiler requires explicit purity
            % annotations on the goals inside the scope.

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

    ;       from_ground_term(prog_var)
            % The goal inside the scope, which should be a conjunction,
            % results from the conversion of one ground term to
            % superhomogeneous form. The variable specifies what the
            % compiler calls that ground term.
            %
            % This kind of scope is not intended to be meaningful after
            % mode analysis, and should be removed after mode analysis.

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
                rhs_is_exist_constr :: is_existential_construction,
                                    % The `is_existential_construction' field
                                    % is only used after polymorphism.m strips
                                    % off the `new ' prefix from existentially
                                    % typed constructions.
                rhs_args            :: list(prog_var)
            )
    ;       rhs_lambda_goal(
                rhs_purity          :: purity,
                rhs_p_or_f          :: pred_or_func,
                rhs_eval_method     :: lambda_eval_method,
                                    % Currently, we don't support any other
                                    % value than `normal'.
                rhs_nonlocals       :: list(prog_var),
                                    % Non-locals of the goal excluding
                                    % the lambda quantified variables.
                rhs_lambda_quant_vars :: list(prog_var),
                                    % Lambda quantified variables.
                rhs_lambda_modes    :: list(mer_mode),
                                    % Modes of the lambda quantified variables.
                rhs_detism          :: determinism,
                rhs_lambda_goal     :: hlds_goal
            ).

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

                term_size_slot          :: maybe(term_size_value)
                                        % The value `yes' tells the code
                                        % generator to reserve an extra slot,
                                        % at offset -1, to hold an integer
                                        % giving the size of the term.
                                        % The argument specifies the value
                                        % to be put into this slot, either
                                        % as an integer constant or as the
                                        % value of a given variable.
                                        %
                                        % The value `no' means there is no
                                        % extra slot, and is the default.
                                        %
                                        % The content of this slot is not
                                        % meaningful before the size_prof pass
                                        % has been run.
            )
    ;       no_construct_sub_info.

:- type unification

    --->    construct(
                % A construction unification is a unification with a functor
                % or lambda expression which binds the LHS variable,
                % e.g. Y = f(X) where the top node of Y is output,
                % Constructions are written using `:=', e.g. Y := f(X).

                construct_cell_var      :: prog_var,
                                        % The variable being constructed,
                                        % e.g. Y in above example.

                construct_cons_id       :: cons_id,
                                        % The cons_id of the functor
                                        % f/1 in the above example.

                construct_args          :: list(prog_var),
                                        % The list of argument variables
                                        % [X] in the above example
                                        % For a unification with a lambda
                                        % expression, this is the list of
                                        % the non-local variables of the
                                        % lambda expression.

                construct_arg_modes     :: list(uni_mode),
                                        % The list of modes of the arguments
                                        % sub-unifications.
                                        % For a unification with a lambda
                                        % expression, this is the list of
                                        % modes of the non-local variables
                                        % of the lambda expression.

                construct_how           :: how_to_construct,
                                        % Specify whether to allocate
                                        % statically, to allocate dynamically,
                                        % or to reuse an existing cell
                                        % (and if so, which cell).
                                        % Constructions for which this
                                        % field is `reuse_cell(_)' are
                                        % described as "reconstructions".

                construct_is_unique     :: cell_is_unique,
                                        % Can the cell be allocated
                                        % in shared data.

                construct_sub_info      :: construct_sub_info
            )

    ;       deconstruct(
                % A deconstruction unification is a unification with a functor
                % for which the LHS variable was already bound,
                % e.g. Y = f(X) where the top node of Y is input.
                % Deconstructions are written using `==', e.g. Y == f(X).
                % Note that deconstruction of lambda expressions is
                % a mode error.

                deconstruct_cell_var    :: prog_var,
                                        % The variable being deconstructed
                                        % e.g. Y in the above example.

                deconstruct_cons_id     :: cons_id,
                                        % The cons_id of the functor,
                                        % e.g. f/1 in the above example

                deconstruct_args        :: list(prog_var),
                                        % The list of argument variables,
                                        % e.g. [X] in the above example.

                deconstruct_arg_modes   :: list(uni_mode),
                                        % The lists of modes of the argument
                                        % sub-unifications.

                deconstruct_can_fail    :: can_fail,
                                        % Whether or not the unification
                                        % could possibly fail.

                deconstruct_can_cgc     :: can_cgc
                                        % Can compile time GC this cell,
                                        % i.e. explicitly deallocate it
                                        % after the deconstruction.
            )

    ;       assign(
                % Y = X where the top node of Y is output, written Y := X.

                assign_to_var           :: prog_var,
                assign_from_var         :: prog_var
            )

    ;       simple_test(
                % Y = X where the type of X and Y is an atomic type and
                % they are both input, written Y == X.
                %
                test_var1               :: prog_var,
                test_var2               :: prog_var
            )

    ;       complicated_unify(
                % Y = X where the type of Y and X is not an atomic type,
                % and where the top-level node of both Y and X is input.
                % May involve bi-directional data flow. Implemented using
                % out-of-line call to a compiler generated unification
                % predicate for that type & mode.

                compl_unify_mode        :: uni_mode,
                                        % The mode of the unification.

                compl_unify_can_fail    :: can_fail,
                                        % Whether or not it could possibly
                                        % fail.

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

                compl_unify_typeinfos   :: list(prog_var)
                                        % The type_info variables needed
                                        % by this unification, if it ends up
                                        % being a complicated unify.
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
    ==  pair(
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
    % back-end, the same optimization is handled by var_locn.m). The
    % `reuse_cell' alternative is not yet used.
    %
:- type how_to_construct
    --->    construct_statically(
                % Use a statically initialized constant.
                args :: list(static_cons)
            )

    ;       construct_dynamically
            % Allocate a new term on the heap.

    ;
            construct_in_region(prog_var)
            % Allocate a new term in a region.

    ;       reuse_cell(cell_to_reuse).
            % Reuse an existing heap cell.

    % Information on how to construct an argument for a static construction
    % unification. Each such argument must itself have been constructed
    % statically; we store here a subset of the fields of the original
    % `construct' unification for the arg. This is used by the MLDS back-end.
    %
:- type static_cons
    --->    static_cons(
                cons_id,            % The cons_id of the functor.
                list(prog_var),     % The list of arg variables.
                list(static_cons)   % How to construct the args.
            ).

    % Information used to perform structure reuse on a cell.
    %
:- type cell_to_reuse
    --->    cell_to_reuse(
                prog_var,
                list(cons_id),      % The cell to be reused may be tagged
                                    % with one of these cons_ids.
                list(bool)          % A `no' entry means that the corresponding
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
% Information for switches
%

:- type case
    --->    case(
                case_functor    :: cons_id,    % functor to match with,
                case_goal       :: hlds_goal   % goal to execute if match
                                               % succeeds.
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
    % - 'no_reuse_info': before CTGC analysis, every goal is annotated with
    % the reuse description 'no_reuse_info', i.e. no information about any
    % reuse.
    % - 'potential_reuse': the value 'potential_reuse' states that in a reuse
    % version of the procedure to which the goal belongs, this goal may safely
    % be replaced by a goal implementing structure reuse.
    % - 'reuse': the value 'reuse' states that in the current procedure (either
    % the specialised reuse version of a procedure, or the original procedure
    % itself) the current goal can safely be replaced by a goal performing
    % structure reuse.
    % - 'missed_reuse': the value 'missed_reuse' gives some feedback when an
    % opportunity for reuse was missed for some reason (only used for calls).
    %
:- type reuse_description
    --->    no_reuse_info
    ;       missed_reuse(list(missed_message))
    ;       potential_reuse(short_reuse_description)
    ;       reuse(short_reuse_description).

    % A short description of the kind of reuse allowed in the associated
    % goal:
    % - 'cell_died' (only relevant for deconstructions): states that the cell
    % of the deconstruction becomes dead after that deconstruction.
    % - 'cell_reused' (only relevant for constructions): states that it is
    % allowed to reuse a previously discovered dead term for constructing a
    % new term in the given construction. Details of which term is reused are
    % recorded.
    % - 'reuse_call' (only applicable to procedure calls): the called
    % procedure is an optimised procedure w.r.t. CTGC. Records whether the
    % call is conditional or not.
    %
:- type short_reuse_description
    --->    cell_died
    ;       cell_reused(
                dead_var,       % The dead variable selected for reusing.
                is_conditional, % States whether the reuse is conditional.
                list(cons_id),  % What are the possible cons_ids that the
                                % variable to be reused can have.
                list(needs_update)
                                % Which of the fields of the cell to be
                                % reused already contain the correct value.
            )
    ;       reuse_call(is_conditional).

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

:- pred goal_info_init(hlds_goal_info::out) is det.
:- pred goal_info_init(prog_context::in, hlds_goal_info::out) is det.
:- pred goal_info_init(set(prog_var)::in, instmap_delta::in, determinism::in,
    purity::in, hlds_goal_info::out) is det.
:- pred goal_info_init(set(prog_var)::in, instmap_delta::in, determinism::in,
    purity::in, prog_context::in, hlds_goal_info::out) is det.

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
:- func goal_info_get_goal_path(hlds_goal_info) = goal_path.
:- func goal_info_get_code_gen_info(hlds_goal_info) = hlds_goal_code_gen_info.
:- func goal_info_get_ho_values(hlds_goal_info) = ho_values.
:- func goal_info_get_maybe_rbmm(hlds_goal_info) = maybe(rbmm_goal_info).
:- func goal_info_get_maybe_mode_constr(hlds_goal_info) =
    maybe(mode_constr_goal_info).
:- func goal_info_get_maybe_ctgc(hlds_goal_info) = maybe(ctgc_goal_info).
:- func goal_info_get_maybe_lfu(hlds_goal_info) = maybe(set(prog_var)).
:- func goal_info_get_maybe_lbu(hlds_goal_info) = maybe(set(prog_var)).
:- func goal_info_get_maybe_reuse(hlds_goal_info) = maybe(reuse_description).

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
:- pred goal_info_set_goal_path(goal_path::in,
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

    ;       feature_tailcall
            % This goal represents a tail call. This marker is used by
            % deep profiling.

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

    ;       feature_pretest_equality.
            % This goal is an if-then-else in a compiler-generated
            % type-constructor-specific unify or compare predicate
            % whose condition is a test of whether the two input arguments
            % are equal or not. The goal feature exists because in some
            % circumstances we need to strip off this pretest, and replace
            % the if-then-else with just its else branch.

%-----------------------------------------------------------------------------%
%
% The rename_var* predicates take a structure and a mapping from var -> var
% and apply that translation. If a var in the input structure does not
% occur as a key in the mapping, then the variable is left unsubstituted
% (if Must = no) or we throw an exception (if Must = yes).
%
% We keep these predicates here to allow rename_vars_in_goal_info to exploit
% knowledge of the actual representation of hlds_goal_infos; since
% hlds_goal_info is an abstract type, this knowledge is not available
% in any other module.
%
% This exploitation also makes the code of rename_vars_in_goal_info depend on
% the structure of hlds_goal_infos, which makes accidentally forgetting to
% update that predicate after modifying the hlds_goal_info type much harder.

:- type prog_var_renaming == map(prog_var, prog_var).

:- pred rename_some_vars_in_goal(prog_var_renaming::in,
    hlds_goal::in, hlds_goal::out) is det.

:- pred must_rename_vars_in_goal(prog_var_renaming::in,
    hlds_goal::in, hlds_goal::out) is det.

:- pred rename_vars_in_goals(bool::in, prog_var_renaming::in,
    hlds_goals::in, hlds_goals::out) is det.

:- pred rename_vars_in_goal_expr(bool::in, prog_var_renaming::in,
    hlds_goal_expr::in, hlds_goal_expr::out) is det.

:- pred rename_vars_in_goal_info(bool::in, prog_var_renaming::in,
    hlds_goal_info::in, hlds_goal_info::out) is det.

:- pred rename_vars_in_var_set(bool::in, prog_var_renaming::in,
    set(prog_var)::in, set(prog_var)::out) is det.

:- pred rename_var_list(bool::in, map(var(T), var(T))::in,
    list(var(T))::in, list(var(T))::out) is det.

:- pred rename_var(bool::in, map(var(V), var(V))::in,
    var(V)::in, var(V)::out) is det.

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
:- func goal_list_has_foreign(list(hlds_goal)) = bool.

    % A goal is atomic iff it doesn't contain any sub-goals
    % (except possibly goals inside lambda expressions --
    % but lambda expressions will get transformed into separate
    % predicates by the polymorphism.m pass).
    %
:- pred goal_is_atomic(hlds_goal_expr::in) is semidet.

    % Return the HLDS equivalent of `true'.
    %
:- func true_goal = hlds_goal.
:- func true_goal_expr = hlds_goal_expr.

:- func true_goal_with_context(prog_context) = hlds_goal.

    % Return the HLDS equivalent of `fail'.
    %
:- func fail_goal = hlds_goal.
:- func fail_goal_expr = hlds_goal_expr.

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

:- import_module libs.compiler_util.
:- import_module parse_tree.prog_mode.
:- import_module parse_tree.prog_type.

:- import_module assoc_list.
:- import_module map.
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
        unexpected(this_file, "make_foreign_args: unmatched lists")
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
% Information stored with all kinds of goals
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
                gi_determinism      :: determinism,

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
                gi_instmap_delta    :: instmap_delta,

                % The non-local vars in the goal, i.e. the variables that
                % occur both inside and outside of the goal (computed by
                % quantification.m). In some circumstances, this may be a
                % conservative approximation: it may be a superset of the
                % real non-locals.
                gi_nonlocals        :: set(prog_var),

                gi_purity           :: purity,

                % The set of compiler-defined "features" of this goal,
                % which optimisers may wish to know about.
                gi_features         :: set(goal_feature),

                % The path to this goal from the root, in reverse order.
                gi_goal_path        :: goal_path,

                gi_code_gen_info    :: hlds_goal_code_gen_info,

                % Extra information about the goal that doesn't fit in an
                % eight-word cell. Mostly used for information used by
                % various optional analysis passes, e.g closure analysis.
                gi_extra            :: hlds_goal_extra_info
            ).

:- type hlds_goal_extra_info
    --->    extra_goal_info(
                egi_context             :: prog_context,

                egi_ho_vals             :: ho_values,

                % Any information related to structure reuse (CTGC).
                egi_maybe_ctgc          :: maybe(ctgc_goal_info),

                egi_maybe_rbmm          :: maybe(rbmm_goal_info),

                egi_maybe_mode_constr   :: maybe(mode_constr_goal_info)
            ).

:- pragma inline(goal_info_init/1).

goal_info_init(GoalInfo) :-
    Detism = detism_erroneous,
    instmap_delta_init_unreachable(InstMapDelta),
    set.init(NonLocals),
    term.context_init(Context),
    set.init(Features),
    GoalInfo = goal_info(Detism, InstMapDelta, NonLocals, purity_pure,
        Features, [], no_code_gen_info, hlds_goal_extra_info_init(Context)).

:- pragma inline(goal_info_init/2).

goal_info_init(Context, GoalInfo) :-
    Detism = detism_erroneous,
    instmap_delta_init_unreachable(InstMapDelta),
    set.init(NonLocals),
    set.init(Features),
    GoalInfo = goal_info(Detism, InstMapDelta, NonLocals, purity_pure,
        Features, [], no_code_gen_info, hlds_goal_extra_info_init(Context)).

goal_info_init(NonLocals, InstMapDelta, Detism, Purity, GoalInfo) :-
    set.init(Features),
    term.context_init(Context),
    GoalInfo = goal_info(Detism, InstMapDelta, NonLocals, Purity,
        Features, [], no_code_gen_info, hlds_goal_extra_info_init(Context)).

goal_info_init(NonLocals, InstMapDelta, Detism, Purity, Context, GoalInfo) :-
    set.init(Features),
    GoalInfo = goal_info(Detism, InstMapDelta, NonLocals, Purity,
        Features, [], no_code_gen_info, hlds_goal_extra_info_init(Context)).

:- func hlds_goal_extra_info_init(term.context) = hlds_goal_extra_info.

hlds_goal_extra_info_init(Context) = ExtraInfo :-
    HO_Values = map.init,
    ExtraInfo = extra_goal_info(Context, HO_Values, no, no, no).

:- func ctgc_goal_info_init = ctgc_goal_info.

ctgc_goal_info_init = ctgc_goal_info(set.init, set.init, no_reuse_info).

rbmm_info_init = rbmm_goal_info(set.init, set.init, set.init, set.init,
    set.init).

goal_info_get_determinism(GoalInfo) = GoalInfo ^ gi_determinism.
goal_info_get_instmap_delta(GoalInfo) = GoalInfo ^ gi_instmap_delta.
goal_info_get_nonlocals(GoalInfo) = GoalInfo ^ gi_nonlocals.
goal_info_get_purity(GoalInfo) = GoalInfo ^ gi_purity.
goal_info_get_features(GoalInfo) = GoalInfo ^ gi_features.
goal_info_get_goal_path(GoalInfo) = GoalInfo ^ gi_goal_path.
goal_info_get_code_gen_info(GoalInfo) = GoalInfo ^ gi_code_gen_info.
goal_info_get_context(GoalInfo) = GoalInfo ^ gi_extra ^ egi_context.
goal_info_get_ho_values(GoalInfo) = GoalInfo ^ gi_extra ^ egi_ho_vals.
goal_info_get_maybe_rbmm(GoalInfo) = GoalInfo ^ gi_extra ^ egi_maybe_rbmm.
goal_info_get_maybe_mode_constr(GoalInfo) =
    GoalInfo ^ gi_extra ^ egi_maybe_mode_constr.
goal_info_get_maybe_ctgc(GoalInfo) = GoalInfo ^ gi_extra ^ egi_maybe_ctgc.

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
goal_info_set_goal_path(GoalPath, !GoalInfo) :-
    !GoalInfo ^ gi_goal_path := GoalPath.
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
        unexpected(this_file, "Requesting unavailable RBMM information.")
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
    !:GoalInfo = !.GoalInfo ^ gi_extra ^ egi_maybe_mode_constr := yes(MCI).

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
    !:GoalInfo = !.GoalInfo ^ gi_extra ^ egi_maybe_mode_constr := yes(MCI).

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
    !:GoalInfo = !.GoalInfo ^ gi_extra ^ egi_maybe_mode_constr := yes(MCI).

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
    !:GoalInfo = !.GoalInfo ^ gi_extra ^ egi_maybe_mode_constr := yes(MCI).

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
    !:GoalInfo = !.GoalInfo ^ gi_extra ^ egi_maybe_mode_constr := yes(MCI).

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
    !:GoalInfo = !.GoalInfo ^ gi_extra ^ egi_maybe_ctgc := MaybeCTGC.

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
    !:GoalInfo = !.GoalInfo ^ gi_extra ^ egi_maybe_ctgc := MaybeCTGC.

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
    !:GoalInfo = !.GoalInfo ^ gi_extra ^ egi_maybe_ctgc := MaybeCTGC.

goal_info_get_lfu(GoalInfo) = LFU :-
    MaybeLFU = goal_info_get_maybe_lfu(GoalInfo),
    (
        MaybeLFU = yes(LFU)
    ;
        MaybeLFU = no,
        unexpected(this_file,
            "Requesting LFU information while CTGC field not set.")
    ).

goal_info_get_lbu(GoalInfo) = LBU :-
    MaybeLBU = goal_info_get_maybe_lbu(GoalInfo),
    (
        MaybeLBU = yes(LBU)
    ;
        MaybeLBU = no,
        unexpected(this_file,
            "Requesting LBU information while CTGC field not set.")
    ).

goal_info_get_reuse(GoalInfo) = Reuse :-
    MaybeReuse = goal_info_get_maybe_reuse(GoalInfo),
    (
        MaybeReuse = yes(Reuse)
    ;
        MaybeReuse = no,
        unexpected(this_file,
            "Requesting reuse information while CTGC field not set.")
    ).

%-----------------------------------------------------------------------------%

goal_get_purity(hlds_goal(_GoalExpr, GoalInfo)) =
    goal_info_get_purity(GoalInfo).

goal_get_nonlocals(hlds_goal(_GoalExpr, GoalInfo)) =
    goal_info_get_nonlocals(GoalInfo).

worst_contains_trace(contains_trace_goal, contains_trace_goal) =
    contains_trace_goal.
worst_contains_trace(contains_trace_goal, contains_no_trace_goal) =
    contains_trace_goal.
worst_contains_trace(contains_no_trace_goal, contains_trace_goal) =
    contains_trace_goal.
worst_contains_trace(contains_no_trace_goal, contains_no_trace_goal) =
    contains_no_trace_goal.

goal_set_purity(Purity, hlds_goal(GoalExpr, GoalInfo0),
        hlds_goal(GoalExpr, GoalInfo)) :-
    goal_info_set_purity(Purity, GoalInfo0, GoalInfo).

goal_get_goal_purity(hlds_goal(_GoalExpr, GoalInfo),
        Purity, ContainsTraceGoal) :-
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
    set.delete(Features0, Feature, Features),
    goal_info_set_features(Features, !GoalInfo).

goal_info_has_feature(GoalInfo, Feature) :-
    Features = goal_info_get_features(GoalInfo),
    set.member(Feature, Features).

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
    rename_vars_in_goal(no, Subn, Goal0, Goal).

must_rename_vars_in_goal(Subn, Goal0, Goal) :-
    rename_vars_in_goal(yes, Subn, Goal0, Goal).

:- pred rename_vars_in_goal(bool::in, prog_var_renaming::in,
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
            Reason0 = promise_purity(_, _),
            Reason = Reason0
        ;
            Reason0 = promise_solutions(Vars0, Kind),
            rename_var_list(Must, Subn, Vars0, Vars),
            Reason = promise_solutions(Vars, Kind)
        ;
            Reason0 = barrier(_),
            Reason = Reason0
        ;
            Reason0 = commit(_),
            Reason = Reason0
        ;
            Reason0 = from_ground_term(Var0),
            rename_var(Must, Subn, Var0, Var),
            Reason = from_ground_term(Var)
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
        Expr0 = shorthand(ShorthandGoal0),
        rename_vars_in_shorthand(Must, Subn, ShorthandGoal0, ShorthandGoal),
        Expr = shorthand(ShorthandGoal)
    ).

:- pred rename_vars_in_shorthand(bool::in, prog_var_renaming::in,
    shorthand_goal_expr::in, shorthand_goal_expr::out) is det.

rename_vars_in_shorthand(Must, Subn,
        bi_implication(LHS0, RHS0), bi_implication(LHS, RHS)) :-
    rename_vars_in_goal(Must, Subn, LHS0, LHS),
    rename_vars_in_goal(Must, Subn, RHS0, RHS).

:- pred rename_arg_list(bool::in, prog_var_renaming::in,
    list(foreign_arg)::in, list(foreign_arg)::out) is det.

rename_arg_list(_Must, _Subn, [], []).
rename_arg_list(Must, Subn, [Arg0 | Args0], [Arg | Args]) :-
    rename_arg(Must, Subn, Arg0, Arg),
    rename_arg_list(Must, Subn, Args0, Args).

:- pred rename_arg(bool::in, prog_var_renaming::in,
    foreign_arg::in, foreign_arg::out) is det.

rename_arg(Must, Subn, Arg0, Arg) :-
    Arg0 = foreign_arg(Var0, B, C, D),
    rename_var(Must, Subn, Var0, Var),
    Arg = foreign_arg(Var, B, C, D).

:- pred rename_vars_in_cases(bool::in, prog_var_renaming::in,
    list(case)::in, list(case)::out) is det.

rename_vars_in_cases(_Must, _Subn, [], []).
rename_vars_in_cases(Must, Subn,
        [case(Cons, G0) | Gs0], [case(Cons, G) | Gs]) :-
    rename_vars_in_goal(Must, Subn, G0, G),
    rename_vars_in_cases(Must, Subn, Gs0, Gs).

:- pred rename_unify_rhs(bool::in, prog_var_renaming::in,
    unify_rhs::in, unify_rhs::out) is det.

rename_unify_rhs(Must, Subn, rhs_var(Var0), rhs_var(Var)) :-
    rename_var(Must, Subn, Var0, Var).
rename_unify_rhs(Must, Subn,
        rhs_functor(Functor, E, ArgVars0), rhs_functor(Functor, E, ArgVars)) :-
    rename_var_list(Must, Subn, ArgVars0, ArgVars).
rename_unify_rhs(Must, Subn,
        rhs_lambda_goal(Purity, PredOrFunc, EvalMethod,
            NonLocals0, Vars0, Modes, Det, Goal0),
        rhs_lambda_goal(Purity, PredOrFunc, EvalMethod,
            NonLocals, Vars, Modes, Det, Goal)) :-
    rename_var_list(Must, Subn, NonLocals0, NonLocals),
    rename_var_list(Must, Subn, Vars0, Vars),
    rename_vars_in_goal(Must, Subn, Goal0, Goal).

:- pred rename_unify(bool::in, prog_var_renaming::in,
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
            How0 = construct_statically(_),
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

:- pred rename_generic_call(bool::in, prog_var_renaming::in,
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

    ExtraInfo0 = extra_goal_info(Context, HO_Values, MaybeCTGC0, MaybeRBMM0,
        MaybeMCI0),
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
    ExtraInfo = extra_goal_info(Context, HO_Values, MaybeCTGC, MaybeRBMM,
        MaybeMCI),

    !:GoalInfo = goal_info(Detism, InstMapDelta, NonLocals, Purity,
        Features, GoalPath, CodeGenInfo, ExtraInfo).

:- pred rename_vars_in_short_reuse_desc(bool::in, prog_var_renaming::in,
    short_reuse_description::in, short_reuse_description::out) is det.

rename_vars_in_short_reuse_desc(Must, Subn, ShortReuseDesc0, ShortReuseDesc) :-
    (
        ( ShortReuseDesc0 = cell_died
        ; ShortReuseDesc0 = reuse_call(_)
        ),
        ShortReuseDesc = ShortReuseDesc0
    ;
        ShortReuseDesc0 = cell_reused(DeadVar0, IsCond, ConsIds,
            FieldNeedUpdates),
        rename_var(Must, Subn, DeadVar0, DeadVar),
        ShortReuseDesc = cell_reused(DeadVar, IsCond, ConsIds,
            FieldNeedUpdates)
    ).

:- pred rename_var_maps(bool::in, prog_var_renaming::in,
    map(prog_var, T)::in, map(prog_var, T)::out) is det.

rename_var_maps(Must, Subn, Map0, Map) :-
    map.to_assoc_list(Map0, AssocList0),
    rename_var_maps_2(Must, Subn, AssocList0, AssocList),
    map.from_assoc_list(AssocList, Map).

:- pred rename_var_maps_2(bool::in, map(var(V), var(V))::in,
    assoc_list(var(V), T)::in, assoc_list(var(V), T)::out) is det.

rename_var_maps_2(_Must, _Subn, [], []).
rename_var_maps_2(Must, Subn, [V - L | Vs], [N - L | Ns]) :-
    rename_var(Must, Subn, V, N),
    rename_var_maps_2(Must, Subn, Vs, Ns).

rename_vars_in_var_set(Must, Subn, Vars0, Vars) :-
    set.to_sorted_list(Vars0, VarsList0),
    rename_var_list(Must, Subn, VarsList0, VarsList),
    set.list_to_set(VarsList, Vars).

:- pred rename_var_pair_list(bool::in, prog_var_renaming::in,
    assoc_list(prog_var, T)::in, list(pair(prog_var, T))::out) is det.

rename_var_pair_list(_Must, _Subn, [], []).
rename_var_pair_list(Must, Subn, [V - D | VDs], [N - D | NDs]) :-
    rename_var(Must, Subn, V, N),
    rename_var_pair_list(Must, Subn, VDs, NDs).

rename_var_list(_Must, _Subn, [], []).
rename_var_list(Must, Subn, [V | Vs], [N | Ns]) :-
    rename_var(Must, Subn, V, N),
    rename_var_list(Must, Subn, Vs, Ns).

rename_var(Must, Subn, V, N) :-
    ( map.search(Subn, V, N0) ->
        N = N0
    ;
        (
            Must = no,
            N = V
        ;
            Must = yes,
            term.var_to_int(V, VInt),
            string.format("rename_var: no substitute for var %i", [i(VInt)],
                Msg),
            unexpected(this_file, Msg)
        )
    ).

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
        list.append(GoalList0, Goals, GoalList),
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
    list.append(Goals1, Goals2, Goals).

%-----------------------------------------------------------------------------%

    % Returns yes if a goal (or subgoal contained within) contains
    % any foreign code.
    %
goal_has_foreign(Goal) = HasForeign :-
    Goal = hlds_goal(GoalExpr, _),
    (
        GoalExpr = conj(_, Goals),
        HasForeign = goal_list_has_foreign(Goals)
    ;
        GoalExpr = plain_call(_, _, _, _, _, _),
        HasForeign = no
    ;
        GoalExpr = generic_call(_, _, _, _),
        HasForeign = no
    ;
        GoalExpr = switch(_, _, _),
        HasForeign = no
    ;
        GoalExpr = unify(_, _, _, _, _),
        HasForeign = no
    ;
        GoalExpr = disj(Goals),
        HasForeign = goal_list_has_foreign(Goals)
    ;
        GoalExpr = negation(Goal2),
        HasForeign = goal_has_foreign(Goal2)
    ;
        GoalExpr = scope(_, Goal2),
        HasForeign = goal_has_foreign(Goal2)
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
        GoalExpr = shorthand(ShorthandGoal),
        HasForeign = goal_has_foreign_shorthand(ShorthandGoal)
    ).

    % Return yes if the shorthand goal contains any foreign code.
    %
:- func goal_has_foreign_shorthand(shorthand_goal_expr) = bool.

goal_has_foreign_shorthand(bi_implication(GoalA, GoalB)) =
    (
        ( goal_has_foreign(GoalA) = yes
        ; goal_has_foreign(GoalB) = yes
        )
    ->
        yes
    ;
        no
    ).

goal_list_has_foreign([]) = no.
goal_list_has_foreign([X | Xs]) =
    ( goal_has_foreign(X) = yes ->
        yes
    ;
        goal_list_has_foreign(Xs)
    ).

%-----------------------------------------------------------------------------%

goal_is_atomic(Goal) :-
    goal_is_atomic(Goal) = yes.

:- func goal_is_atomic(hlds_goal_expr) = bool.

goal_is_atomic(unify(_, _, _, _, _)) = yes.
goal_is_atomic(generic_call(_, _, _, _)) = yes.
goal_is_atomic(plain_call(_, _, _, _, _, _)) = yes.
goal_is_atomic(call_foreign_proc(_, _, _, _, _, _,  _)) = yes.
goal_is_atomic(conj(_, Conj)) = ( Conj = [] -> yes ; no ).
goal_is_atomic(disj(Disj)) = ( Disj = [] -> yes ; no ).
goal_is_atomic(if_then_else(_, _, _, _)) = no.
goal_is_atomic(negation(_)) = no.
goal_is_atomic(switch(_, _, _)) = no.
goal_is_atomic(scope(_, _)) = no.
goal_is_atomic(shorthand(_)) = no.

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

set_goal_contexts(Context, hlds_goal(GoalExpr0, GoalInfo0),
        hlds_goal(GoalExpr, GoalInfo)) :-
    goal_info_set_context(Context, GoalInfo0, GoalInfo),
    set_goal_contexts_2(Context, GoalExpr0, GoalExpr).

:- pred set_goal_contexts_2(prog_context::in, hlds_goal_expr::in,
    hlds_goal_expr::out) is det.

set_goal_contexts_2(Context, conj(ConjType, Goals0), conj(ConjType, Goals)) :-
    list.map(set_goal_contexts(Context), Goals0, Goals).
set_goal_contexts_2(Context, disj(Goals0), disj(Goals)) :-
    list.map(set_goal_contexts(Context), Goals0, Goals).
set_goal_contexts_2(Context, if_then_else(Vars, Cond0, Then0, Else0),
        if_then_else(Vars, Cond, Then, Else)) :-
    set_goal_contexts(Context, Cond0, Cond),
    set_goal_contexts(Context, Then0, Then),
    set_goal_contexts(Context, Else0, Else).
set_goal_contexts_2(Context, switch(Var, CanFail, Cases0),
        switch(Var, CanFail, Cases)) :-
    list.map(
        (pred(case(ConsId, Goal0)::in, case(ConsId, Goal)::out) is det :-
            set_goal_contexts(Context, Goal0, Goal)
        ), Cases0, Cases).
set_goal_contexts_2(Context, scope(Reason, Goal0), scope(Reason, Goal)) :-
    set_goal_contexts(Context, Goal0, Goal).
set_goal_contexts_2(Context, negation(Goal0), negation(Goal)) :-
    set_goal_contexts(Context, Goal0, Goal).
set_goal_contexts_2(_, Goal, Goal) :-
    Goal = plain_call(_, _, _, _, _, _).
set_goal_contexts_2(_, Goal, Goal) :-
    Goal = generic_call(_, _, _, _).
set_goal_contexts_2(_, Goal, Goal) :-
    Goal = unify(_, _, _, _, _).
set_goal_contexts_2(_, Goal, Goal) :-
    Goal = call_foreign_proc(_, _, _, _, _, _, _).
set_goal_contexts_2(Context, shorthand(ShorthandGoal0),
        shorthand(ShorthandGoal)) :-
    set_goal_contexts_2_shorthand(Context, ShorthandGoal0, ShorthandGoal).

:- pred set_goal_contexts_2_shorthand(prog_context::in,
    shorthand_goal_expr::in, shorthand_goal_expr::out) is det.

set_goal_contexts_2_shorthand(Context, bi_implication(LHS0, RHS0),
        bi_implication(LHS, RHS)) :-
    set_goal_contexts(Context, LHS0, LHS),
    set_goal_contexts(Context, RHS0, RHS).

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

make_simple_test(X, Y, UnifyMainContext, UnifySubContext, Goal) :-
    Ground = ground(shared, none),
    Mode = ((Ground -> Ground) - (Ground -> Ground)),
    Unification = simple_test(X, Y),
    UnifyContext = unify_context(UnifyMainContext, UnifySubContext),
    instmap_delta_init_reachable(InstMapDelta),
    goal_info_init(list_to_set([X, Y]), InstMapDelta, detism_semi, purity_pure,
        GoalInfo),
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
    string.char_to_string(Char, String),
    make_const_construction(Var, cons(unqualified(String), 0), Goal).

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
    instmap_delta_insert(Var, Inst, InstMapDelta0, InstMapDelta),
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
    instmap_delta_from_assoc_list([Var - ground_inst], InstMapDelta),
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
    list.duplicate(Arity, ground_inst, DeltaValues),
    assoc_list.from_corresponding_lists(Args, DeltaValues, DeltaAL),
    instmap_delta_from_assoc_list(DeltaAL, InstMapDelta),
    goal_info_init(NonLocals, InstMapDelta, detism_det, purity_pure, GoalInfo),
    Goal = hlds_goal(Unify, GoalInfo).

construct_tuple(Tuple, Args, Goal) :-
    list.length(Args, Arity),
    ConsId = cons(unqualified("{}"), Arity),
    construct_functor(Tuple, ConsId, Args, Goal).

deconstruct_tuple(Tuple, Args, Goal) :-
    list.length(Args, Arity),
    ConsId = cons(unqualified("{}"), Arity),
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

:- func this_file = string.

this_file = "hlds_goal.m".

%-----------------------------------------------------------------------------%
:- end_module hlds.hlds_goal.
%-----------------------------------------------------------------------------%
