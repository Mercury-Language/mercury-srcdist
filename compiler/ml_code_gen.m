%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1999-2008 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: ml_code_gen.m.
% Main author: fjh.
%
% MLDS code generation -- convert from HLDS to MLDS.
%
% This module is an alternative to the original code generator.
% The original code generator compiles from HLDS to LLDS, generating
% very low-level code. This code generator instead compiles to MLDS,
% generating much higher-level code than the original code generator.
%
% One of the aims of the MLDS is to be able to generated human-readable
% code in languages like C or Java. This means that unlike the LLDS back-end,
% we do not want to rely on macros or conditional compilation. If the
% final code is going to depend on the setting of some compilation option,
% our philosophy is to reflect that change in the generated MLDS and C code
% where possible, rather than generating C code which calls macros that do
% different things in different grades. This is important both for
% readability of the generated code, and to make sure that we can easily
% adapt the MLDS code generator to target languages like Java that don't
% support macros or conditional compilation.
%
% A big challenge in generating MLDS code is handling nondeterminism.
% For nondeterministic procedures, we generate code using an explicit
% continuation passing style. Each nondeterministic procedures gets
% translated into a function which takes an extra parameter which is a
% function pointer that points to the success continuation. On success,
% the function calls its success continuation, and on failure it returns.
%
% To keep things easy, this pass generates code which may contain nested
% functions; if the target language doesn't support nested functions (or
% doesn't support them _efficiently_) then a later MLDS->MLDS simplification
% pass will convert it to a form that does not use nested functions.
%
% Note that when we take the address of a nested function, we only ever
% do two things with it: pass it as a continuation argument, or call it.
% The continuations are never returned and never stored inside heap objects
% or global variables. These conditions are sufficient to ensure that
% we never keep the address of a nested function after the containing
% functions has returned, so we won't get any dangling continuations.
%
%-----------------------------------------------------------------------------%
% CODE GENERATION SUMMARY
%-----------------------------------------------------------------------------%
%
% In each procedure, we declare a local variable `MR_bool succeeded'.
% This is used to hold the success status of semidet sub-goals.
% Note that the comments below show local declarations for the
% `succeeded' variable in all the places where they would be
% needed if we were generating them locally, but currently
% we actually just generate a single `succeeded' variable for
% each procedure.
%
% The calling convention for sub-goals is as follows.
%
%   model_det goal:
%       On success, fall through.
%       (May clobber `succeeded'.)
%   model_semi goal:
%       On success, set `succeeded' to MR_TRUE and fall through.
%       On failure, set `succeeded' to MR_FALSE and fall through.
%   multi/nondet goal:
%       On success, call the current success continuation.
%       On failure, fall through.
%       (May clobber `succeeded' in either case.)
%
% In comments, we use the following notation to distinguish between
% these three.
%
%   model_det goal:
%       <do Goal>
%           This means execute Goal (which must be model_det).
%   model_semi goal:
%       <succeeded = Goal>
%           This means execute Goal, and set `succeeded' to
%           MR_TRUE if the goal succeeds and MR_FALSE if it fails.
%   model_non goal:
%       <Goal && CONT()>
%           This means execute Goal, calling the success
%           continuation function CONT() if it succeeds,
%           and falling through if it fails.
%
% The notation
%
%   [situation]:
%       <[construct]>
%   ===>
%       [code]
%
% means that in the situation described by [situation],
% for the the specified [construct] we will generate the specified [code].

% There is one other important thing which can be considered part of the
% calling convention for the code that we generate for each goal.
% If static ground term optimization is enabled, then for the terms
% marked as static by mark_static_terms.m, we will generate static consts.
% These static consts can refer to other static consts defined earlier.
% We need to be careful about the scopes of variables to ensure that
% for any term that mark_static_terms.m marks as static, the C constants
% representing the arguments of that term are in scope at the point
% where that term is constructed. Basically this means that
% all the static consts generated inside a goal must be hoist out to
% the top level scope for that goal, except for goal types where
% goal_expr_mark_static_terms (in mark_static_terms.m) returns the
% same static_info unchanged, i.e. branched goals and negations.
%
% Handling static constants also requires that the calls to ml_gen_goal
% for each subgoal must be done in the right order, so that the
% const_num_map in the ml_gen_info holds the right sequence numbers
% for the constants in scope.
%
%-----------------------------------------------------------------------------%
%
% Code for wrapping goals
%
% If a model_foo goal occurs in a model_bar context, where foo != bar,
% then we need to modify the code that we emit for the goal so that
% it conforms to the calling convenion expected for model_bar.
%
%   det goal in semidet context:
%       <succeeded = Goal>
%   ===>
%       <do Goal>
%       succeeded = MR_TRUE;
%
%   det goal in nondet context:
%       <Goal && SUCCEED()>
%   ===>
%       <do Goal>
%       SUCCEED();
%
%   semi goal in nondet context:
%       <Goal && SUCCEED()>
%   ===>
%       MR_bool succeeded;
%
%       <succeeded = Goal>
%       if (succeeded) SUCCEED();
%
%-----------------------------------------------------------------------------%
%
% Code for commits
%
%
% There's several different ways of handling commits:
%   - using catch/throw
%   - using setjmp/longjmp
%   - using GCC's __builtin_setjmp/__builtin_longjmp
%   - exiting nested functions via gotos to
%     their containing functions
%
% The MLDS data structure abstracts away these differences using the
% `try_commit' and `do_commit' instructions. The comments below show
% the MLDS try_commit/do_commit version first, but for clarity I've also
% included sample code using each of the three different techniques.
% This shows how the MLDS->target back-end can map mlds_commit_type,
% do_commit and try_commit into target language constructs.
%
% Note that if we're using GCC's __builtin_longjmp(), then it is important
% that the call to __builtin_longjmp() be put in its own function, to ensure
% that it is not in the same function as the __builtin_setjmp(). The code
% generation schema below does that automatically. We will need to be careful
% with MLDS optimizations to ensure that we preserve that invariant, though.
% (Alternatively, we could just call a function that calls __builtin_longjmp()
% rather than calling it directly. But that would be a little less efficient.)
%
% If those methods turn out to be too inefficient, another alternative would be
% to change the generated code so that after every function call, it would
% check a flag, and if that flag was set, it would return. Then MR_DO_COMMIT
% would just set the flag and return. The flag could be in a global
% (or thread-local) variable, or it could be an additional value returned
% from each function.
%
%   model_non in semi context: (using try_commit/do_commit)
%       <succeeded = Goal>
%   ===>
%       MR_COMMIT_TYPE ref;
%       void success() {
%           MR_DO_COMMIT(ref);
%       }
%       MR_TRY_COMMIT(ref, {
%           <Goal && success()>
%           succeeded = MR_FALSE;
%       }, {
%           succeeded = MR_TRUE;
%       })
%
%   model_non in semi context: (using catch/throw)
%       <succeeded = Goal>
%   ===>
%       void success() {
%           throw COMMIT();
%       }
%       try {
%           <Goal && success()>
%           succeeded = MR_FALSE;
%       } catch (COMMIT) {
%           succeeded = MR_TRUE;
%       }
%
% The above is using C++ syntax. Here COMMIT is an exception type, which
% can be defined trivially (e.g. "class COMMIT {};"). Note that when using
% catch/throw, we don't need the "ref" argument at all; the target language's
% exception handling implementation keeps track of all the information needed
% to unwind the stack.
%
%   model_non in semi context: (using setjmp/longjmp)
%       <succeeded = Goal>
%   ===>
%       jmp_buf ref;
%       void success() {
%           longjmp(ref, 1);
%       }
%       if (setjmp(ref)) {
%           succeeded = MR_TRUE;
%       } else {
%           <Goal && success()>
%           succeeded = MR_FALSE;
%       }
%
%   model_non in semi context: (using GNU C nested functions,
%               GNU C local labels, and exiting
%               the nested function by a goto
%               to a label in the containing function)
%       <succeeded = Goal>
%   ===>
%       __label__ commit;
%       void success() {
%           goto commit;
%       }
%       <Goal && success()>
%       succeeded = MR_FALSE;
%       goto commit_done;
%   commit:
%       succeeded = MR_TRUE;
%   commit_done:
%       ;
%
%   model_non in det context: (using try_commit/do_commit)
%       <do Goal>
%   ===>
%       MR_COMMIT_TYPE ref;
%       void success() {
%           MR_DO_COMMIT(ref);
%       }
%       MR_TRY_COMMIT(ref, {
%           <Goal && success()>
%       }, {})
%
%   model_non in det context (using GNU C nested functions,
%               GNU C local labels, and exiting
%               the nested function by a goto
%               to a label in the containing function)
%       <do Goal>
%   ===>
%       __label__ done;
%       void success() {
%           goto done;
%       }
%       <Goal && success()>
%   done:   ;
%
%   model_non in det context (using catch/throw):
%       <do Goal>
%   ===>
%       void success() {
%           throw COMMIT();
%       }
%       try {
%           <Goal && success()>
%       } catch (COMMIT) {}
%
%   model_non in det context (using setjmp/longjmp):
%       <do Goal>
%   ===>
%       jmp_buf ref;
%       void success() {
%           longjmp(ref, 1);
%       }
%       if (setjmp(ref) == 0) {
%           <Goal && success()>
%       }
%
% Note that for all of these versions, we must hoist any static declarations
% generated for <Goal> out to the top level; this is needed so that such
% declarations remain in scope for any following goals.
%
%-----------------------------------------------------------------------------%
%
% Code for empty conjunctions (`true')
%
%
%   model_det goal:
%       <do true>
%   ===>
%       /* fall through */
%
%   model_semi goal:
%       <succeeded = true>
%   ===>
%       succceeded = MR_TRUE;
%
%   model_non goal
%       <true && CONT()>
%   ===>
%       CONT();
%
%-----------------------------------------------------------------------------%
%
% Code for non-empty conjunctions
%
%
% We need to handle the case where the first goal cannot succeed
% specially:
%
%   at_most_zero Goal:
%       <Goal, Goals>
%   ===>
%       <Goal>
%
% The remaining cases for conjunction all assume that the first
% goal's determinism is not `erroneous' or `failure'.
%
% If the first goal is model_det, it is straight-forward:
%
%   model_det Goal:
%       <Goal, Goals>
%   ===>
%       <do Goal>
%       <Goals>
%
% If the first goal is model_semidet, then there are two cases:
% if the conj as a whole is semidet, things are simple, and
% if the conj as a whole is model_non, then we do the same as
% for the semidet case, except that we also (ought to) declare
% a local `succeeded' variable.
%
%   model_semi Goal in model_semi conj:
%       <succeeded = (Goal, Goals)>
%   ===>
%       <succeeded = Goal>;
%       if (succeeded) {
%           <Goals>;
%       }
%
%   model_semi Goal in model_non conj:
%       <Goal && Goals>
%   ===>
%       MR_bool succeeded;
%
%       <succeeded = Goal>;
%       if (succeeded) {
%           <Goals>;
%       }
%
% The actual code generation scheme we use is slightly different to that:
% we hoist any declarations generated for <Goals> to the outer scope,
% rather than keeping them inside the `if', so that they remain in scope
% for any later goals which follow this. This is needed for declarations
% of static consts.
%
% For model_non goals, there are a couple of different ways that we could
% generate code, depending on whether we are aiming to maximize readability,
% or whether we prefer to generate code that may be more efficient but is
% a little less readable. The more readable method puts the generated goals
% in the same order that they occur in the source code:
%
%   model_non Goal (optimized for readability)
%       <Goal, Goals>
%   ===>
%       entry_func() {
%           <Goal && succ_func()>;
%       }
%       succ_func() {
%           <Goals && SUCCEED()>;
%       }
%
%       entry_func();
%
% The more efficient method generates the goals in reverse order, so it's less
% readable, but it has fewer function calls and can make it easier for the C
% compiler to inline things:
%
%   model_non Goal (optimized for efficiency):
%       <Goal, Goals>
%   ===>
%       succ_func() {
%           <Goals && SUCCEED()>;
%       }
%
%       <Goal && succ_func()>;
%
% The more efficient method is the one we actually use.
%
% Here's how those two methods look on longer conjunctions of nondet goals:
%
%   model_non goals (optimized for readability):
%       <Goal1, Goal2, Goal3, Goals>
%   ===>
%       label0_func() {
%           <Goal1 && label1_func()>;
%       }
%       label1_func() {
%           <Goal2 && label2_func()>;
%       }
%       label2_func() {
%           <Goal3 && label3_func()>;
%       }
%       label3_func() {
%           <Goals && SUCCEED()>;
%       }
%
%       label0_func();
%
%   model_non goals (optimized for efficiency):
%       <Goal1, Goal2, Goal3, Goals>
%   ===>
%       label1_func() {
%           label2_func() {
%               label3_func() {
%                   <Goals && SUCCEED()>;
%               }
%               <Goal3 && label3_func()>;
%           }
%           <Goal2 && label2_func()>;
%       }
%       <Goal1 && label1_func()>;
%
% Note that it might actually make more sense to generate conjunctions
% of nondet goals like this:
%
%   model_non goals (optimized for efficiency, alternative version):
%       <Goal1, Goal2, Goal3, Goals>
%   ===>
%       label3_func() {
%           <Goals && SUCCEED()>;
%       }
%       label2_func() {
%           <Goal3 && label3_func()>;
%       }
%       label1_func() {
%           <Goal2 && label2_func()>;
%       }
%
%       <Goal1 && label1_func()>;
%
% This would avoid the undesirable deep nesting that we sometimes get with
% our current scheme. However, if we're eliminating nested functions, as is
% normally the case, then after the ml_elim_nested transformation all the
% functions and variables have been hoisted to the top level, so there is
% no difference between these two.
%
% As with semidet conjunctions, we hoist declarations out so that they remain
% in scope for any following goals. This is needed for declarations of static
% consts. However, we want to keep the declarations of non-static variables
% local, since accessing local variables is more efficient that accessing
% variables in the environment from a nested function. So we only hoist
% declarations of static constants.
%
%-----------------------------------------------------------------------------%
%
% Code for empty disjunctions (`fail')
%
%
%   model_semi goal:
%       <succeeded = fail>
%   ===>
%       succeeded = MR_FALSE;
%
%   model_non goal:
%       <fail && CONT()>
%   ===>
%       /* fall through */
%
%-----------------------------------------------------------------------------%
%
% Code for non-empty disjunctions
%
%
% model_det disj:
%
%   model_det Goal:
%       <do (Goal ; Goals)>
%   ===>
%       <do Goal>
%       /* <Goals> will never be reached */
%
%   model_semi Goal:
%       <do (Goal ; Goals)>
%   ===>
%       MR_bool succeeded;
%
%       <succeeded = Goal>;
%       if (!succeeded) {
%           <do Goals>;
%       }
%
% model_semi disj:
%
%   model_det Goal:
%       <succeeded = (Goal ; Goals)>
%   ===>
%       MR_bool succeeded;
%
%       <do Goal>
%       succeeded = MR_TRUE
%       /* <Goals> will never be reached */
%
%   model_semi Goal:
%       <succeeded = (Goal ; Goals)>
%   ===>
%       MR_bool succeeded;
%
%       <succeeded = Goal>;
%       if (!succeeded) {
%           <succeeded = Goals>;
%       }
%
% model_non disj:
%
%   model_det Goal:
%       <(Goal ; Goals) && SUCCEED()>
%   ===>
%       <Goal>
%       SUCCEED();
%       <Goals && SUCCEED()>
%
%   model_semi Goal:
%       <(Goal ; Goals) && SUCCEED()>
%   ===>
%       MR_bool succeeded;
%
%       <succeeded = Goal>
%       if (succeeded) SUCCEED();
%       <Goals && SUCCEED()>
%
%   model_non Goal:
%       <(Goal ; Goals) && SUCCEED()>
%   ===>
%       <Goal && SUCCEED()>
%       <Goals && SUCCEED()>
%
%-----------------------------------------------------------------------------%
%
% Code for if-then-else
%
%
%   model_det Cond:
%       <(Cond -> Then ; Else)>
%   ===>
%       <Cond>
%       <Then>
%
%   model_semi Cond:
%       <(Cond -> Then ; Else)>
%   ===>
%       MR_bool succeeded;
%
%       <succeeded = Cond>
%       if (succeeded) {
%           <Then>
%       } else {
%           <Else>
%       }
%
% XXX The following transformation does not do as good a job of GC as it could.
% Ideally we ought to ensure that stuff used only in the `Else' part will be
% reclaimed if a GC occurs during the `Then' part. But that is a bit tricky
% to achieve.
%
%   model_non Cond:
%       <(Cond -> Then ; Else)>
%   ===>
%       MR_bool cond_<N>;
%
%       void then_func() {
%           cond_<N> = MR_TRUE;
%           <Then>
%       }
%
%       cond_<N> = MR_FALSE;
%       <Cond && then_func()>
%       if (!cond_<N>) {
%           <Else>
%       }
%
% except that we hoist any declarations generated for <Cond> to the top
% of the scope, so that they are in scope for the <Then> goal
% (this is needed for declarations of static consts).
%
%-----------------------------------------------------------------------------%
%
% Code for negation
%
%
% model_det negation
%       <not(Goal)>
%   ===>
%       MR_bool succeeded;
%       <succeeded = Goal>
%       /* now ignore the value of succeeded,
%        which we know will be MR_FALSE */
%
% model_semi negation, model_det Goal:
%       <succeeded = not(Goal)>
%   ===>
%       <do Goal>
%       succeeded = MR_FALSE;
%
% model_semi negation, model_semi Goal:
%       <succeeded = not(Goal)>
%   ===>
%       <succeeded = Goal>
%       succeeded = !succeeded;
%
%-----------------------------------------------------------------------------%
%
% Code for deconstruction unifications
%
%
%   det (cannot_fail) deconstruction:
%       <succeeded = (X => f(A1, A2, ...))>
%   ===>
%       A1 = arg(X, f, 1);                  % extract arguments
%       A2 = arg(X, f, 2);
%       ...
%
%   semidet (can_fail) deconstruction:
%       <X => f(A1, A2, ...)>
%   ===>
%       <succeeded = (X => f(_, _, _, _))>  % tag test
%       if (succeeded) {
%           A1 = arg(X, f, 1);              % extract arguments
%           A2 = arg(X, f, 2);
%           ...
%       }
%
%-----------------------------------------------------------------------------%
%
% This back-end is still not yet 100% complete.
%
% Done:
%   - function prototypes
%   - code generation for det, semidet, and nondet predicates/functions:
%       - conjunctions
%       - disjunctions
%       - negation
%       - if-then-else
%       - predicate/function calls
%       - higher-order calls
%       - unifications
%           - assignment
%           - simple tests
%           - constructions
%           - deconstructions
%       - switches
%       - commits
%       - `pragma c_code'
%   - RTTI
%   - high level data representation
%     (i.e. generate MLDS type declarations for user-defined types)
%   - support trailing
%
% BUGS:
%   - XXX parameter passing problem for abstract equivalence types
%     that are defined as float (or anything which doesn't map to `Word')
%
% TODO:
%   - XXX define compare & unify preds for RTTI types
%   - XXX need to generate correct layout information for closures
%     so that tests/hard_coded/copy_pred works.
%   - XXX fix ANSI/ISO C conformance of the generated code (i.e. port to lcc)
%
% UNIMPLEMENTED FEATURES:
%   - test --det-copy-out
%   - fix --gcc-nested-functions (need forward declarations for
%     nested functions)
%   - support debugging (with mdb)
%   - support genuine parallel conjunction
%   - support fact tables
%   - support accurate GC
%
% POTENTIAL EFFICIENCY IMPROVEMENTS:
%   - optimize unboxed float on DEC Alphas.
%   - generate better code for switches:
%       - optimize switches so that the recursive case comes first
%         (see switch_gen.m).
%       - apply the reverse tag test optimization
%         for types with two functors (see unify_gen.m)
%       - binary search switches
%       - lookup switches
%   - generate local declarations for the `succeeded' variable;
%     this would help in nondet code, because it would avoid
%     the need to access the outermost function's `succeeded'
%     variable via the environment pointer
%     (be careful about the interaction with setjmp(), though)
%
%-----------------------------------------------------------------------------%

:- module ml_backend.ml_code_gen.
:- interface.

:- import_module hlds.code_model.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_module.
:- import_module ml_backend.ml_code_util.
:- import_module ml_backend.mlds.
:- import_module parse_tree.prog_data.

:- import_module io.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

    % Generate MLDS code for an entire module.
    %
:- pred ml_code_gen(module_info::in, mlds::out, io::di, io::uo) is det.

    % Generate MLDS code for the specified goal in the specified code model.
    % Return the result as a single statement (which may be a block statement
    % containing nested declarations).
    %
:- pred ml_gen_goal_as_block(code_model::in, hlds_goal::in, statement::out,
    ml_gen_info::in, ml_gen_info::out) is det.

    % Generate MLDS code for the specified goal in the specified code model.
    % Return the result as two lists, one containing the necessary declarations
    % and the other containing the generated statements.
    %
:- pred ml_gen_goal(code_model::in, hlds_goal::in,
    mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

    % ml_gen_wrap_goal(OuterCodeModel, InnerCodeModel, Context,
    %   Statements0, Statements):
    %
    % OuterCodeModel is the code model expected by the context in which a goal
    % is called. InnerCodeModel is the code model which the goal actually has.
    % This predicate converts the code generated for the goal using
    % InnerCodeModel into code that uses the calling convention appropriate
    % for OuterCodeModel.
    %
:- pred ml_gen_wrap_goal(code_model::in, code_model::in, prog_context::in,
    statements::in, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

    % Generate declarations for a list of local variables.
    %
:- pred ml_gen_local_var_decls(prog_varset::in, vartypes::in,
    prog_context::in, prog_vars::in, mlds_defns::out,
    ml_gen_info::in, ml_gen_info::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module backend_libs.builtin_ops.
:- import_module backend_libs.c_util.
:- import_module backend_libs.foreign. % XXX needed for pragma foreign code
:- import_module backend_libs.rtti.
:- import_module check_hlds.mode_util.
:- import_module check_hlds.type_util.
:- import_module hlds.goal_util.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_pred.
:- import_module hlds.passes_aux.
:- import_module hlds.pred_table.
:- import_module libs.compiler_util.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module mdbcomp.prim_data.
:- import_module ml_backend.ml_call_gen.
:- import_module ml_backend.ml_code_util.
:- import_module ml_backend.ml_switch_gen.
:- import_module ml_backend.ml_type_gen.
:- import_module ml_backend.ml_unify_gen.
:- import_module ml_backend.ml_util.
:- import_module parse_tree.prog_foreign.
:- import_module parse_tree.prog_type.

:- import_module bool.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module set.
:- import_module solutions.
:- import_module string.
:- import_module std_util.
:- import_module term.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

ml_code_gen(ModuleInfo, MLDS, !IO) :-
    module_info_get_name(ModuleInfo, ModuleName),
    ml_gen_foreign_code(ModuleInfo, ForeignCode, !IO),
    ml_gen_imports(ModuleInfo, Imports),
    ml_gen_defns(ModuleInfo, Defns, !IO),
    ml_gen_exported_enums(ModuleInfo, ExportedEnums, !IO),
    module_info_user_init_pred_c_names(ModuleInfo, InitPreds),
    module_info_user_final_pred_c_names(ModuleInfo, FinalPreds),
    MLDS = mlds(ModuleName, ForeignCode, Imports, Defns,
        InitPreds, FinalPreds, ExportedEnums).

:- pred ml_gen_foreign_code(module_info::in,
    map(foreign_language, mlds_foreign_code)::out,
    io::di, io::uo) is det.

ml_gen_foreign_code(ModuleInfo, AllForeignCode, !IO) :-
    module_info_get_foreign_decl(ModuleInfo, ForeignDecls),
    module_info_get_foreign_import_module(ModuleInfo, ForeignImports),
    module_info_get_foreign_body_code(ModuleInfo, ForeignBodys),
    module_info_get_pragma_exported_procs(ModuleInfo, ForeignExports),
    globals.io_get_backend_foreign_languages(BackendForeignLanguages, !IO),

    WantedForeignImports = list.condense(
        list.map((func(L) = Imports :-
            foreign.filter_imports(L, ForeignImports, Imports, _)
        ), BackendForeignLanguages)),

    list.foldl(ml_gen_foreign_code_lang(ModuleInfo, ForeignDecls,
        ForeignBodys, WantedForeignImports, ForeignExports),
        BackendForeignLanguages, map.init, AllForeignCode).

:- pred ml_gen_foreign_code_lang(module_info::in, foreign_decl_info::in,
    foreign_body_info::in, foreign_import_module_info_list::in,
    list(pragma_exported_proc)::in, foreign_language::in,
    map(foreign_language, mlds_foreign_code)::in,
    map(foreign_language, mlds_foreign_code)::out) is det.

ml_gen_foreign_code_lang(ModuleInfo, ForeignDecls, ForeignBodys,
        WantedForeignImports, ForeignExports, Lang, Map0, Map) :-
    foreign.filter_decls(Lang, ForeignDecls, WantedForeignDecls,
        _OtherForeignDecls),
    foreign.filter_bodys(Lang, ForeignBodys, WantedForeignBodys,
        _OtherForeignBodys),
    foreign.filter_exports(Lang, ForeignExports, WantedForeignExports,
        _OtherForeignExports),
    ConvBody = (func(foreign_body_code(L, S, C)) =
        user_foreign_code(L, S, C)),
    MLDSWantedForeignBodys = list.map(ConvBody, WantedForeignBodys),
    list.map(ml_gen_pragma_export_proc(ModuleInfo),
        WantedForeignExports, MLDSWantedForeignExports),
    MLDS_ForeignCode = mlds_foreign_code(WantedForeignDecls,
        WantedForeignImports, MLDSWantedForeignBodys,
        MLDSWantedForeignExports),
    map.det_insert(Map0, Lang, MLDS_ForeignCode, Map).

:- pred ml_gen_imports(module_info::in, mlds_imports::out) is det.

ml_gen_imports(ModuleInfo, MLDS_ImportList) :-
    % Determine all the mercury imports.
    % XXX This is overly conservative, i.e. we import more than we really need.
    module_info_get_globals(ModuleInfo, Globals),
    globals.get_target(Globals, Target),
    module_info_get_all_deps(ModuleInfo, AllImports0),
    % No module needs to import itself.
    module_info_get_name(ModuleInfo, ThisModule),
    AllImports = set.delete(AllImports0, ThisModule),
    P = (func(Name) = mercury_import(compiler_visible_interface,
        mercury_module_name_to_mlds(Name))),

    % For every foreign type determine the import needed to find
    % the declaration for that type.
    module_info_get_type_table(ModuleInfo, Types),
    ForeignTypeImports = list.condense(
        list.map(foreign_type_required_imports(Target), map.values(Types))),

    MLDS_ImportList = ForeignTypeImports ++
        list.map(P, set.to_sorted_list(AllImports)).

:- func foreign_type_required_imports(compilation_target, hlds_type_defn)
    = list(mlds_import).

foreign_type_required_imports(Target, TypeDefn) = Imports :-
    (
        ( Target = target_c
        ; Target = target_java
        ; Target = target_asm
        ),
        Imports = []
    ;
        Target = target_il,
        hlds_data.get_type_defn_body(TypeDefn, TypeBody),
        (
            TypeBody = hlds_foreign_type(ForeignTypeBody),
            ForeignTypeBody = foreign_type_body(MaybeIL,
                _MaybeC, _MaybeJava, _MaybeErlang),
            (
                MaybeIL = yes(Data),
                Data = foreign_type_lang_data(il_type(_, Location, _), _, _)
            ->
                Name = il_assembly_name(mercury_module_name_to_mlds(
                    unqualified(Location))),
                Imports = [foreign_import(Name)]
            ;
                unexpected(this_file, "no IL type")
            )
        ;
            ( TypeBody = hlds_du_type(_, _, _,_,  _, _, _, _)
            ; TypeBody = hlds_eqv_type(_)
            ; TypeBody = hlds_solver_type(_, _)
            ; TypeBody = hlds_abstract_type(_)
            ),
            Imports = []
        )
    ;
        Target = target_x86_64,
        unexpected(this_file, "target x86_64 and --high-level-code")
    ;
        Target = target_erlang,
        unexpected(this_file, "foreign_type_required_imports: target erlang")
    ).

:- pred ml_gen_defns(module_info::in, mlds_defns::out, io::di, io::uo) is det.

ml_gen_defns(ModuleInfo, Defns, !IO) :-
    ml_gen_types(ModuleInfo, TypeDefns, !IO),
    ml_gen_table_structs(ModuleInfo, TableStructDefns),
    ml_gen_preds(ModuleInfo, PredDefns, !IO),
    Defns = TypeDefns ++ TableStructDefns ++ PredDefns.

%-----------------------------------------------------------------------------%
%
% For each pragma foreign_export declaration we associate with it the
% information used to generate the function prototype for the MLDS entity.

:- pred ml_gen_pragma_export_proc(module_info::in, pragma_exported_proc::in,
    mlds_pragma_export::out) is det.

ml_gen_pragma_export_proc(ModuleInfo, PragmaExportedProc, Defn) :-
    PragmaExportedProc = pragma_exported_proc(Lang, PredId, ProcId,
        ExportName, ProgContext),
    ml_gen_proc_label(ModuleInfo, PredId, ProcId, Name, ModuleName),
    FuncParams = ml_gen_proc_params(ModuleInfo, PredId, ProcId),
    MLDS_Context = mlds_make_context(ProgContext),
    Defn = ml_pragma_export(Lang, ExportName,
        qual(ModuleName, module_qual, Name), FuncParams, MLDS_Context).

%-----------------------------------------------------------------------------%
%
% Stuff to generate MLDS code for HLDS predicates & functions.
%

    % Generate MLDS definitions for all the non-imported predicates
    % (and functions) in the HLDS.
    %
:- pred ml_gen_preds(module_info::in, mlds_defns::out, io::di, io::uo) is det.

ml_gen_preds(ModuleInfo, PredDefns, !IO) :-
    module_info_preds(ModuleInfo, PredTable),
    map.keys(PredTable, PredIds),
    PredDefns0 = [],
    ml_gen_preds_2(ModuleInfo, PredIds, PredTable, PredDefns0, PredDefns, !IO).

:- pred ml_gen_preds_2(module_info::in, list(pred_id)::in, pred_table::in,
    mlds_defns::in, mlds_defns::out, io::di, io::uo) is det.

ml_gen_preds_2(ModuleInfo, PredIds0, PredTable, !Defns, !IO) :-
    (
        PredIds0 = [PredId | PredIds],
        map.lookup(PredTable, PredId, PredInfo),
        pred_info_get_import_status(PredInfo, ImportStatus),
        (
            (
                ImportStatus = status_imported(_)
            ;
                % We generate incorrect and unnecessary code for the external
                % special preds which are pseudo_imported, so just ignore them.
                is_unify_or_compare_pred(PredInfo),
                ImportStatus = status_external(status_pseudo_imported)
            )
        ->
            true
        ;
            ml_gen_pred(ModuleInfo, PredId, PredInfo, ImportStatus,
                !Defns, !IO)
        ),
        ml_gen_preds_2(ModuleInfo, PredIds, PredTable, !Defns, !IO)
    ;
        PredIds0 = []
    ).

    % Generate MLDS definitions for all the non-imported procedures
    % of a given predicate (or function).
    %
:- pred ml_gen_pred(module_info::in, pred_id::in, pred_info::in,
    import_status::in, mlds_defns::in, mlds_defns::out, io::di, io::uo)
    is det.

ml_gen_pred(ModuleInfo, PredId, PredInfo, ImportStatus, !Defns, !IO) :-
    ( ImportStatus = status_external(_) ->
        ProcIds = pred_info_procids(PredInfo)
    ;
        ProcIds = pred_info_non_imported_procids(PredInfo)
    ),
    (
        ProcIds = []
    ;
        ProcIds = [_ | _],
        write_pred_progress_message("% Generating MLDS code for ",
            PredId, ModuleInfo, !IO),
        pred_info_get_procedures(PredInfo, ProcTable),
        ml_gen_procs(ProcIds, ModuleInfo, PredId, PredInfo, ProcTable, !Defns)
    ).

:- pred ml_gen_procs(list(proc_id)::in, module_info::in, pred_id::in,
    pred_info::in, proc_table::in, mlds_defns::in, mlds_defns::out) is det.

ml_gen_procs([], _, _, _, _, !Defns).
ml_gen_procs([ProcId | ProcIds], ModuleInfo, PredId, PredInfo, ProcTable,
        !Defns) :-
    map.lookup(ProcTable, ProcId, ProcInfo),
    ml_gen_proc(ModuleInfo, PredId, ProcId, PredInfo, ProcInfo, !Defns),
    ml_gen_procs(ProcIds, ModuleInfo, PredId, PredInfo, ProcTable, !Defns).

%-----------------------------------------------------------------------------%
%
% Code for handling individual procedures
%

    % Generate MLDS code for the specified procedure.
    %
:- pred ml_gen_proc(module_info::in, pred_id::in, proc_id::in, pred_info::in,
    proc_info::in, mlds_defns::in, mlds_defns::out) is det.

ml_gen_proc(ModuleInfo, PredId, ProcId, _PredInfo, ProcInfo, !Defns) :-
    proc_info_get_context(ProcInfo, Context),
    ml_gen_proc_label(ModuleInfo, PredId, ProcId, Name, _ModuleName),
    MLDS_Context = mlds_make_context(Context),
    DeclFlags = ml_gen_proc_decl_flags(ModuleInfo, PredId, ProcId),
    ml_gen_proc_defn(ModuleInfo, PredId, ProcId, ProcDefnBody, ExtraDefns),
    ProcDefn = mlds_defn(Name, MLDS_Context, DeclFlags, ProcDefnBody),
    !:Defns = list.append(ExtraDefns, [ProcDefn | !.Defns]).

%-----------------------------------------------------------------------------%
%
% Code for handling tabling structures
%

:- pred ml_gen_table_structs(module_info::in, mlds_defns::out) is det.

ml_gen_table_structs(ModuleInfo, Defns) :-
    module_info_get_table_struct_map(ModuleInfo, TableStructMap),
    map.to_assoc_list(TableStructMap, TableStructs),
    (
        TableStructs = [],
        Defns = []
    ;
        TableStructs = [_ | _],
        module_info_get_globals(ModuleInfo, Globals),
        globals.get_gc_method(Globals, GC_Method),
        % XXX To handle accurate GC properly, the GC would need to trace
        % through the global variables that we generate for the tables.
        % Support for this is not yet implemented. Also, we would need to add
        % GC support (stack frame registration, and calls to MR_GC_check()) to
        % MR_make_long_lived() and MR_deep_copy() so that we do garbage
        % collection of the "global heap" which is used to store the tables.
        expect(isnt(unify(gc_accurate), GC_Method), this_file,
            "tabling and `--gc accurate'"),

        list.foldl(ml_gen_add_table_var(ModuleInfo), TableStructs, [], Defns)
    ).

:- pred ml_gen_add_table_var(module_info::in,
    pair(pred_proc_id, table_struct_info)::in,
    mlds_defns::in, mlds_defns::out) is det.

ml_gen_add_table_var(ModuleInfo, PredProcId - TableStructInfo, !Defns) :-
    module_info_get_name(ModuleInfo, ModuleName),
    MLDS_ModuleName = mercury_module_name_to_mlds(ModuleName),
    PredProcId = proc(_PredId, ProcId),

    TableStructInfo = table_struct_info(ProcTableStructInfo, _Attributes),
    ProcTableStructInfo = proc_table_struct_info(RttiProcLabel, _TVarSet,
        Context, NumInputs, NumOutputs, InputSteps, MaybeOutputSteps,
        _ArgInfos, EvalMethod),

    ml_gen_pred_label_from_rtti(ModuleInfo, RttiProcLabel, PredLabel,
        _PredModule),
    MLDS_ProcLabel = mlds_proc_label(PredLabel, ProcId),
    MLDS_Context = mlds_make_context(Context),
    TableTypeStr = eval_method_to_table_type(EvalMethod),
    (
        InputSteps = [],
        % We don't want to generate arrays with zero elements.
        InputStepsRefInit = gen_init_null_pointer(
            mlds_tabling_type(tabling_steps_desc(call_table))),
        InputStepsDefns = []
    ;
        InputSteps = [_ | _],
        InputStepsRefInit = gen_init_tabling_name(MLDS_ModuleName,
            MLDS_ProcLabel, tabling_steps_desc(call_table)),
        InputStepsInit = init_array(
            list.map(init_step_desc(tabling_steps_desc(call_table)),
            InputSteps)),
        InputStepsDefns = [tabling_name_and_init_to_defn(MLDS_ProcLabel,
            MLDS_Context, const, tabling_steps_desc(call_table),
            InputStepsInit)]
    ),
    init_stats(MLDS_ModuleName, MLDS_ProcLabel, MLDS_Context,
        call_table, curr_table, InputSteps,
        CallStatsInit, CallStatsDefns),
    init_stats(MLDS_ModuleName, MLDS_ProcLabel, MLDS_Context,
        call_table, prev_table, InputSteps,
        PrevCallStatsInit, PrevCallStatsDefns),
    CallDefns = InputStepsDefns ++ CallStatsDefns ++ PrevCallStatsDefns,
    (
        MaybeOutputSteps = no,
        HasAnswerTable = 0,
        OutputStepsRefInit = gen_init_null_pointer(
            mlds_tabling_type(tabling_steps_desc(answer_table))),
        OutputStepsDefns = []
    ;
        MaybeOutputSteps = yes(OutputSteps),
        HasAnswerTable = 1,
        OutputStepsRefInit = gen_init_tabling_name(MLDS_ModuleName,
            MLDS_ProcLabel, tabling_steps_desc(answer_table)),
        OutputStepsInit = init_array(
            list.map(init_step_desc(tabling_steps_desc(answer_table)),
            OutputSteps)),
        OutputStepsDefns = [tabling_name_and_init_to_defn(MLDS_ProcLabel,
            MLDS_Context, const, tabling_steps_desc(answer_table),
            OutputStepsInit)]
    ),
    init_stats(MLDS_ModuleName, MLDS_ProcLabel, MLDS_Context,
        answer_table, curr_table, InputSteps,
        AnswerStatsInit, AnswerStatsDefns),
    init_stats(MLDS_ModuleName, MLDS_ProcLabel, MLDS_Context,
        answer_table, prev_table, InputSteps,
        PrevAnswerStatsInit, PrevAnswerStatsDefns),
    AnswerDefns = OutputStepsDefns ++ AnswerStatsDefns ++ PrevAnswerStatsDefns,

    PTIsRefInit = gen_init_null_pointer(mlds_tabling_type(tabling_ptis)),
    TypeParamLocnsRefInit = gen_init_null_pointer(
        mlds_tabling_type(tabling_type_param_locns)),
    RootNodeInit = init_struct(mlds_tabling_type(tabling_root_node),
        [gen_init_int(0)]),
    TipsRefInit = gen_init_null_pointer(mlds_tabling_type(tabling_tips)),

    ProcTableInfoInit = init_struct(mlds_tabling_type(tabling_info), [
        gen_init_builtin_const(TableTypeStr),
        gen_init_int(NumInputs),
        gen_init_int(NumOutputs),
        gen_init_int(HasAnswerTable),
        PTIsRefInit,
        TypeParamLocnsRefInit,
        RootNodeInit,
        init_array([InputStepsRefInit, OutputStepsRefInit]),
        init_array([
            init_array([CallStatsInit, PrevCallStatsInit]),
            init_array([AnswerStatsInit, PrevAnswerStatsInit])
        ]),
        gen_init_int(0),
        TipsRefInit,
        gen_init_int(0),
        gen_init_int(0)
    ]),
    ProcTableInfoDefn = tabling_name_and_init_to_defn(MLDS_ProcLabel,
        MLDS_Context, modifiable, tabling_info, ProcTableInfoInit),

    !:Defns = CallDefns ++ AnswerDefns ++ [ProcTableInfoDefn | !.Defns].

:- func init_step_desc(proc_tabling_struct_id, table_step_desc)
    = mlds_initializer.

init_step_desc(StructId, StepDesc) = init_struct(StructType, FieldInits) :-
    StepDesc = table_step_desc(VarName, Step),
    table_trie_step_to_c(Step, StepStr, MaybeEnumRange),
    VarNameInit = gen_init_string(VarName),
    StepInit = encode_enum_init(StepStr),
    (
        MaybeEnumRange = no,
        MaybeEnumRangeInit = gen_init_int(-1)
    ;
        MaybeEnumRange = yes(EnumRange),
        MaybeEnumRangeInit = gen_init_int(EnumRange)
    ),
    StructType = mlds_tabling_type(StructId),
    FieldInits = [VarNameInit, StepInit, MaybeEnumRangeInit].

:- pred init_stats(mlds_module_name::in, mlds_proc_label::in, mlds_context::in,
    call_or_answer_table::in, curr_or_prev_table::in,
    list(table_step_desc)::in, mlds_initializer::out, list(mlds_defn)::out)
    is det.

init_stats(MLDS_ModuleName, MLDS_ProcLabel, MLDS_Context,
        CallOrAnswer, CurrOrPrev, StepDescs, StatsInit, StatsStepDefns) :-
    StatsId = tabling_stats(CallOrAnswer, CurrOrPrev),
    StatsStepsId = tabling_stat_steps(CallOrAnswer, CurrOrPrev),
    StatsType = mlds_tabling_type(StatsId),
    StatsStepsType = mlds_tabling_type(StatsStepsId),
    (
        StepDescs = [],
        StatsStepDefns = [],
        StatsStepsArrayRefInit = gen_init_null_pointer(StatsStepsType)
    ;
        StepDescs = [_ | _],
        list.map(init_stats_step(StatsStepsId), StepDescs, StatsStepsInits),
        StatsStepsArrayInit = init_array(StatsStepsInits),
        StatsStepDefns = [tabling_name_and_init_to_defn(MLDS_ProcLabel,
            MLDS_Context, modifiable, StatsStepsId, StatsStepsArrayInit)],
        StatsStepsArrayRefInit = gen_init_tabling_name(MLDS_ModuleName,
            MLDS_ProcLabel, tabling_stat_steps(CallOrAnswer, CurrOrPrev))
    ),
    StatsInit = init_struct(StatsType, [
        gen_init_int(0),
        gen_init_int(0),
        StatsStepsArrayRefInit
    ]).

:- pred init_stats_step(proc_tabling_struct_id::in, table_step_desc::in,
    mlds_initializer::out) is det.

init_stats_step(StepId, StepDesc, Init) :-
    StepDesc = table_step_desc(_VarName, Step),
    KindStr = table_step_stats_kind(Step),
    Init = init_struct(mlds_tabling_type(StepId), [
        gen_init_int(0),
        gen_init_int(0),
        encode_enum_init(KindStr),

        % The fields about hash tables.
        gen_init_int(0),
        gen_init_int(0),
        gen_init_int(0),
        gen_init_int(0),
        gen_init_int(0),
        gen_init_int(0),
        gen_init_int(0),
        gen_init_int(0),
        gen_init_int(0),

        % The fields about enums.
        gen_init_int(0),
        gen_init_int(0),

        % The fields about du types.
        gen_init_int(0),
        gen_init_int(0),
        gen_init_int(0),
        gen_init_int(0),

        % The fields about start tables.
        gen_init_int(0),
        gen_init_int(0)
    ]).

:- func encode_enum_init(string) = mlds_initializer.

encode_enum_init(EnumConstName) =
    init_obj(const(mlconst_named_const(EnumConstName))).

:- func gen_init_tabling_name(mlds_module_name, mlds_proc_label,
    proc_tabling_struct_id) = mlds_initializer.

gen_init_tabling_name(ModuleName, ProcLabel, TablingId) = Rval :-
    DataAddr = data_addr(ModuleName, mlds_tabling_ref(ProcLabel, TablingId)),
    Rval = init_obj(const(mlconst_data_addr(DataAddr))).

:- func tabling_name_and_init_to_defn(mlds_proc_label, mlds_context, constness,
    proc_tabling_struct_id, mlds_initializer) = mlds_defn.

tabling_name_and_init_to_defn(ProcLabel, MLDS_Context, Constness, Id,
        Initializer) = Defn :-
    GCStatement = gc_no_stmt,
    MLDS_Type = mlds_tabling_type(Id),
    Flags = tabling_data_decl_flags(Constness),
    DefnBody = mlds_data(MLDS_Type, Initializer, GCStatement),
    Name = entity_data(mlds_tabling_ref(ProcLabel, Id)),
    Defn = mlds_defn(Name, MLDS_Context, Flags, DefnBody).

    % Return the declaration flags appropriate for a tabling data structure.
    %
:- func tabling_data_decl_flags(constness) = mlds_decl_flags.

tabling_data_decl_flags(Constness) = MLDS_DeclFlags :-
    Access = private,
    PerInstance = one_copy,
    Virtuality = non_virtual,
    Finality = final,
    Abstractness = concrete,
    MLDS_DeclFlags = init_decl_flags(Access, PerInstance,
        Virtuality, Finality, Constness, Abstractness).

%-----------------------------------------------------------------------------%
%
% Code for handling individual procedures (continued)
%

    % Return the declaration flags appropriate for a procedure definition.
    %
:- func ml_gen_proc_decl_flags(module_info, pred_id, proc_id)
    = mlds_decl_flags.

ml_gen_proc_decl_flags(ModuleInfo, PredId, ProcId) = DeclFlags :-
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    ( procedure_is_exported(ModuleInfo, PredInfo, ProcId) ->
        Access = public
    ;
        Access = private
    ),
    PerInstance = one_copy,
    Virtuality = non_virtual,
    Finality = overridable,
    Constness = modifiable,
    Abstractness = concrete,
    DeclFlags = init_decl_flags(Access, PerInstance,
        Virtuality, Finality, Constness, Abstractness).

    % Generate an MLDS definition for the specified procedure.
    %
:- pred ml_gen_proc_defn(module_info::in, pred_id::in, proc_id::in,
    mlds_entity_defn::out, mlds_defns::out) is det.

ml_gen_proc_defn(ModuleInfo, PredId, ProcId, ProcDefnBody, ExtraDefns) :-
    module_info_pred_proc_info(ModuleInfo, PredId, ProcId, PredInfo, ProcInfo),
    pred_info_get_import_status(PredInfo, ImportStatus),
    pred_info_get_arg_types(PredInfo, ArgTypes),
    CodeModel = proc_info_interface_code_model(ProcInfo),
    proc_info_get_headvars(ProcInfo, HeadVars),
    proc_info_get_argmodes(ProcInfo, Modes),
    proc_info_get_goal(ProcInfo, Goal0),

    % The HLDS front-end sometimes over-estimates the set of non-locals.
    % We need to restrict the set of non-locals for the top-level goal
    % to just the headvars, because otherwise variables which occur in the
    % top-level non-locals but which are not really non-local will not be
    % declared.

    Goal0 = hlds_goal(GoalExpr, GoalInfo0),
    NonLocals0 = goal_info_get_code_gen_nonlocals(GoalInfo0),
    set.list_to_set(HeadVars, HeadVarsSet),
    set.intersect(HeadVarsSet, NonLocals0, NonLocals),
    goal_info_set_code_gen_nonlocals(NonLocals, GoalInfo0, GoalInfo),
    Goal = hlds_goal(GoalExpr, GoalInfo),

    Context = goal_info_get_context(GoalInfo),

    some [!Info] (
        !:Info = ml_gen_info_init(ModuleInfo, PredId, ProcId),

        ( ImportStatus = status_external(_) ->
            % For Mercury procedures declared `:- external', we generate an
            % MLDS definition for them with no function body. The MLDS ->
            % target code pass can treat this accordingly, e.g. for C
            % it outputs a function declaration with no corresponding
            % definition, making sure that the function is declared as `extern'
            % rather than `static'.
            %
            FunctionBody = body_external,
            ExtraDefns = [],
            ml_gen_proc_params(PredId, ProcId, MLDS_Params, !.Info, _Info)
        ;
            % Set up the initial success continuation, if any.
            % Also figure out which output variables are returned by value
            % (rather than being passed by reference) and remove them from
            % the byref_output_vars field in the ml_gen_info.
            (
                ( CodeModel = model_det
                ; CodeModel = model_semi
                ),
                ml_det_copy_out_vars(ModuleInfo, CopiedOutputVars, !Info)
            ;
                CodeModel = model_non,
                ml_set_up_initial_succ_cont(ModuleInfo, CopiedOutputVars,
                    !Info)
            ),

            % This would generate all the local variables at the top of
            % the function:
            %   ml_gen_all_local_var_decls(Goal,
            %       VarSet, VarTypes, HeadVars, MLDS_LocalVars, Info1, Info2)
            % But instead we now generate them locally for each goal.
            % We just declare the `succeeded' var here, plus locals
            % for any output arguments that are returned by value
            % (e.g. if --nondet-copy-out is enabled, or for det function
            % return values).
            (
                CopiedOutputVars = [],
                % Optimize common case.
                OutputVarLocals = []
            ;
                CopiedOutputVars = [_ | _],
                proc_info_get_varset(ProcInfo, VarSet),
                proc_info_get_vartypes(ProcInfo, VarTypes),
                % note that for headvars we must use the types from
                % the procedure interface, not from the procedure body
                HeadVarTypes = map.from_corresponding_lists(HeadVars,
                    ArgTypes),
                ml_gen_local_var_decls(VarSet,
                    map.overlay(VarTypes, HeadVarTypes),
                    Context, CopiedOutputVars, OutputVarLocals, !Info)
            ),
            MLDS_Context = mlds_make_context(Context),
            MLDS_LocalVars = [ml_gen_succeeded_var_decl(MLDS_Context) |
                OutputVarLocals],
            modes_to_arg_modes(ModuleInfo, Modes, ArgTypes, ArgModes),
            ml_gen_proc_body(CodeModel, HeadVars, ArgTypes, ArgModes,
                CopiedOutputVars, Goal, Decls0, Statements, !Info),
            ml_gen_proc_params(PredId, ProcId, MLDS_Params, !Info),
            ml_gen_info_get_extra_defns(!.Info, ExtraDefns),
            Decls = list.append(MLDS_LocalVars, Decls0),
            Statement = ml_gen_block(Decls, Statements, Context),
            FunctionBody = body_defined_here(Statement)
        ),
        ml_gen_info_get_env_vars(!.Info, EnvVarNames)
    ),

    pred_info_get_attributes(PredInfo, Attributes),
    attributes_to_attribute_list(Attributes, AttributeList),

    MLDS_Attributes = attributes_to_mlds_attributes(ModuleInfo, AttributeList),

    ProcDefnBody = mlds_function(yes(proc(PredId, ProcId)), MLDS_Params,
        FunctionBody, MLDS_Attributes, EnvVarNames).

    % For model_det and model_semi procedures, figure out which output
    % variables are returned by value (rather than being passed by reference)
    % and remove them from the byref_output_vars field in the ml_gen_info.
    %
:- pred ml_det_copy_out_vars(module_info::in, list(prog_var)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_det_copy_out_vars(ModuleInfo, CopiedOutputVars, !Info) :-
    ml_gen_info_get_byref_output_vars(!.Info, OutputVars),
    module_info_get_globals(ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, det_copy_out, DetCopyOut),
    (
        % If --det-copy-out is enabled, all output variables are returned
        % by value, rather than passing them by reference.
        DetCopyOut = yes,
        ByRefOutputVars = [],
        CopiedOutputVars = OutputVars
    ;
        DetCopyOut = no,
        (
            % For det functions, the function result variable is returned by
            % value, and any remaining output variables are passed by
            % reference.
            ml_gen_info_get_pred_id(!.Info, PredId),
            ml_gen_info_get_proc_id(!.Info, ProcId),
            ml_is_output_det_function(ModuleInfo, PredId, ProcId, ResultVar)
        ->
            CopiedOutputVars = [ResultVar],
            list.delete_all(OutputVars, ResultVar, ByRefOutputVars)
        ;
            % Otherwise, all output vars are passed by reference.
            CopiedOutputVars = [],
            ByRefOutputVars = OutputVars
        )
    ),
    ml_gen_info_set_byref_output_vars(ByRefOutputVars, !Info),
    ml_gen_info_set_value_output_vars(CopiedOutputVars, !Info).

    % For model_non procedures, figure out which output variables are returned
    % by value (rather than being passed by reference) and remove them from
    % the byref_output_vars field in the ml_gen_info, and construct the
    % initial success continuation.
    %
:- pred ml_set_up_initial_succ_cont(module_info::in, list(prog_var)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_set_up_initial_succ_cont(ModuleInfo, NondetCopiedOutputVars, !Info) :-
    module_info_get_globals(ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, nondet_copy_out, NondetCopyOut),
    (
        NondetCopyOut = yes,
        % For --nondet-copy-out, we generate local variables for the output
        % variables and then pass them to the continuation, rather than
        % passing them by reference.
        ml_gen_info_get_byref_output_vars(!.Info, NondetCopiedOutputVars),
        ml_gen_info_set_byref_output_vars([], !Info)
    ;
        NondetCopyOut = no,
        NondetCopiedOutputVars = []
    ),
    ml_gen_info_set_value_output_vars(NondetCopiedOutputVars, !Info),
    ml_gen_var_list(!.Info, NondetCopiedOutputVars, OutputVarLvals),
    ml_variable_types(!.Info, NondetCopiedOutputVars, OutputVarTypes),
    ml_initial_cont(!.Info, OutputVarLvals, OutputVarTypes, InitialCont),
    ml_gen_info_push_success_cont(InitialCont, !Info).

    % Generate MLDS definitions for all the local variables in a function.
    %
    % Note that this function generates all the local variables at the
    % top of the function. It might be a better idea to instead generate
    % local declarations for all the variables used in each sub-goal.
    %
:- pred ml_gen_all_local_var_decls(hlds_goal::in, prog_varset::in,
    vartypes::in, list(prog_var)::in, mlds_defns::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_all_local_var_decls(Goal, VarSet, VarTypes, HeadVars, MLDS_LocalVars,
        !Info) :-
    Goal = hlds_goal(_, GoalInfo),
    Context = goal_info_get_context(GoalInfo),
    goal_util.goal_vars(Goal, AllVarsSet),
    set.delete_list(AllVarsSet, HeadVars, LocalVarsSet),
    set.to_sorted_list(LocalVarsSet, LocalVars),
    ml_gen_local_var_decls(VarSet, VarTypes, Context, LocalVars,
        MLDS_LocalVars0, !Info),
    MLDS_Context = mlds_make_context(Context),
    MLDS_SucceededVar = ml_gen_succeeded_var_decl(MLDS_Context),
    MLDS_LocalVars = [MLDS_SucceededVar | MLDS_LocalVars0].

    % Generate declarations for a list of local variables.
    %
ml_gen_local_var_decls(_VarSet, _VarTypes, _Context, [], [], !Info).
ml_gen_local_var_decls(VarSet, VarTypes, Context, [Var | Vars], Defns,
        !Info) :-
    map.lookup(VarTypes, Var, Type),
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    IsDummy = check_dummy_type(ModuleInfo, Type),
    (
        IsDummy = is_dummy_type,
        % No declaration needed for this variable.
        ml_gen_local_var_decls(VarSet, VarTypes, Context, Vars, Defns, !Info)
    ;
        IsDummy = is_not_dummy_type,
        VarName = ml_gen_var_name(VarSet, Var),
        ml_gen_var_decl(VarName, Type, Context, Defn, !Info),
        ml_gen_local_var_decls(VarSet, VarTypes, Context, Vars, Defns0, !Info),
        Defns = [Defn | Defns0]
    ).

    % Generate the code for a procedure body.
    %
:- pred ml_gen_proc_body(code_model::in, list(prog_var)::in,
    list(mer_type)::in, list(arg_mode)::in, list(prog_var)::in,
    hlds_goal::in, mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_proc_body(CodeModel, HeadVars, ArgTypes, ArgModes, CopiedOutputVars,
        Goal, Decls, Statements, !Info) :-
    Goal = hlds_goal(_, GoalInfo),
    Context = goal_info_get_context(GoalInfo),

    % First just generate the code for the procedure's goal.
    DoGenGoal = ml_gen_goal(CodeModel, Goal),

    % In certain cases -- for example existentially typed procedures,
    % or unification/compare procedures for equivalence types --
    % the parameters types may not match the types of the head variables.
    % In such cases, we need to box/unbox/cast them to the right type.
    % We also grab the original (uncast) lvals for the copied output
    % variables (if any) here, since for the return statement that
    % we append below, we want the original vars, not their cast versions.

    ml_gen_var_list(!.Info, CopiedOutputVars, CopiedOutputVarOriginalLvals),
    ml_gen_convert_headvars(HeadVars, ArgTypes, ArgModes, CopiedOutputVars,
        Context, ConvDecls, ConvInputStatements, ConvOutputStatements, !Info),
    (
        ConvDecls = [],
        ConvInputStatements = [],
        ConvOutputStatements = []
    ->
        % No boxing/unboxing/casting required.
        DoGenGoal(Decls, Statements1, !Info)
    ;
        % Boxing/unboxing/casting required. We need to convert the input
        % arguments, generate the goal, convert the output arguments,
        % and then succeeed.
        DoConvOutputs = (pred(NewDecls::out, NewStatements::out,
                Info0::in, Info::out) is det :-
            ml_gen_success(CodeModel, Context, SuccStatements, Info0, Info),
            NewDecls = [],
            NewStatements = ConvOutputStatements ++ SuccStatements
        ),
        ml_combine_conj(CodeModel, Context, DoGenGoal, DoConvOutputs,
            Decls0, Statements0, !Info),
        Statements1 = ConvInputStatements ++ Statements0,
        Decls = ConvDecls ++ Decls0
    ),

    % Finally append an appropriate `return' statement, if needed.
    ml_append_return_statement(!.Info, CodeModel, CopiedOutputVarOriginalLvals,
        Context, Statements1, Statements).

    % In certain cases -- for example existentially typed procedures,
    % or unification/compare procedures for equivalence types --
    % the parameter types may not match the types of the head variables.
    % In such cases, we need to box/unbox/cast them to the right type.
    % This procedure handles that.
    %
:- pred ml_gen_convert_headvars(list(prog_var)::in, list(mer_type)::in,
    list(arg_mode)::in, list(prog_var)::in, prog_context::in,
    mlds_defns::out, statements::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_convert_headvars(Vars, HeadTypes, ArgModes, CopiedOutputVars, Context,
        Decls, InputStatements, OutputStatements, !Info) :-
    (
        Vars = [],
        HeadTypes = [],
        ArgModes = []
    ->
        Decls = [],
        InputStatements = [],
        OutputStatements = []
    ;
        Vars = [Var | VarsTail],
        HeadTypes = [HeadType | HeadTypesTail],
        ArgModes = [ArgMode | ArgModesTail]
    ->
        ml_variable_type(!.Info, Var, BodyType),
        (
            % Arguments with mode `top_unused' do not need to be converted.
            ArgMode = top_unused
        ->
            ml_gen_convert_headvars(VarsTail, HeadTypesTail, ArgModesTail,
                CopiedOutputVars, Context, Decls,
                InputStatements, OutputStatements, !Info)
        ;
            % Check whether HeadType is the same as BodyType
            % (modulo the term.contexts). If so, no conversion is needed.
            map.init(Subst0),
            type_unify(HeadType, BodyType, [], Subst0, Subst),
            map.is_empty(Subst)
        ->
            ml_gen_convert_headvars(VarsTail, HeadTypesTail, ArgModesTail,
                CopiedOutputVars, Context, Decls,
                InputStatements, OutputStatements, !Info)
        ;
            % Generate the lval for the head variable.
            ml_gen_var_with_type(!.Info, Var, HeadType, HeadVarLval),

            % Generate code to box or unbox that head variable,
            % to convert its type from HeadType to BodyType.
            ml_gen_info_get_varset(!.Info, VarSet),
            VarName = ml_gen_var_name(VarSet, Var),
            ml_gen_box_or_unbox_lval(HeadType, BodyType, native_if_possible,
                HeadVarLval, VarName, Context, no, 0, BodyLval, ConvDecls,
                ConvInputStatements, ConvOutputStatements, !Info),

            % Ensure that for any uses of this variable in the procedure body,
            % we use the BodyLval (which has type BodyType) rather than the
            % HeadVarLval (which has type HeadType).
            ml_gen_info_set_var_lval(Var, BodyLval, !Info),

            ml_gen_convert_headvars(VarsTail, HeadTypesTail, ArgModesTail,
                CopiedOutputVars, Context, DeclsTail,
                InputStatementsTail, OutputStatementsTail, !Info),

            % Add the code to convert this input or output.
            ml_gen_info_get_byref_output_vars(!.Info, ByRefOutputVars),
            (
                ( list.member(Var, ByRefOutputVars)
                ; list.member(Var, CopiedOutputVars)
                )
            ->
                InputStatements = InputStatementsTail,
                OutputStatements = OutputStatementsTail ++ ConvOutputStatements
            ;
                InputStatements = ConvInputStatements ++ InputStatementsTail,
                OutputStatements = OutputStatementsTail
            ),
            Decls = ConvDecls ++ DeclsTail
        )
    ;
        unexpected(this_file, "ml_gen_convert_headvars: length mismatch")
    ).

%-----------------------------------------------------------------------------%
%
% Stuff to generate code for goals.
%

    % Generate MLDS code for the specified goal in the specified code model.
    % Return the result as a single statement (which may be a block statement
    % containing nested declarations).
    %
ml_gen_goal_as_block(CodeModel, Goal, Statement, !Info) :-
    ml_gen_goal(CodeModel, Goal, Decls, Statements, !Info),
    Goal = hlds_goal(_, GoalInfo),
    Context = goal_info_get_context(GoalInfo),
    Statement = ml_gen_block(Decls, Statements, Context).

    % Generate MLDS code for the specified goal in the specified code model.
    % Return the result as two lists, one containing the necessary declarations
    % and the other containing the generated statements.
    %
ml_gen_goal(CodeModel, Goal, Decls, Statements, !Info) :-
    Goal = hlds_goal(GoalExpr, GoalInfo),
    Context = goal_info_get_context(GoalInfo),
    % Generate the local variables for this goal. We need to declare any
    % variables which are local to this goal (including its subgoals),
    % but which are not local to a subgoal. (If they're local to a subgoal,
    % they'll be declared when we generate code for that subgoal.)
    %
    % We need to make sure that we declare any type_info or type_classinfo
    % variables *before* any other variables, since the GC tracing code
    % for the other variables may refer to the type_info variables, so they
    % need to be in scope.

    Locals = goal_local_vars(Goal),
    SubGoalLocals = union_of_direct_subgoal_locals(Goal),
    set.difference(Locals, SubGoalLocals, VarsToDeclareHere),
    set.to_sorted_list(VarsToDeclareHere, VarsList0),
    ml_gen_info_get_varset(!.Info, VarSet),
    ml_gen_info_get_var_types(!.Info, VarTypes),
    VarsList = put_typeinfo_vars_first(VarsList0, VarTypes),
    ml_gen_local_var_decls(VarSet, VarTypes, Context, VarsList, VarDecls,
        !Info),

    % Generate code for the goal in its own code model.
    GoalCodeModel = goal_info_get_code_model(GoalInfo),
    ml_gen_goal_expr(GoalExpr, GoalCodeModel, Context,
        GoalDecls, GoalStatements0, !Info),

    % Add whatever wrapper is needed to convert the goal's code model
    % to the desired code model.
    ml_gen_wrap_goal(CodeModel, GoalCodeModel, Context,
        GoalStatements0, GoalStatements, !Info),

    ml_join_decls(VarDecls, [], GoalDecls, GoalStatements, Context,
        Decls, Statements).

    % Return the set of variables which occur in the specified goal
    % (including in its subgoals) and which are local to that goal.
    %
:- func goal_local_vars(hlds_goal) = set(prog_var).

goal_local_vars(Goal) = LocalVars :-
    % Find all the variables in the goal.
    goal_util.goal_vars(Goal, GoalVars),
    % Delete the non-locals.
    Goal = hlds_goal(_, GoalInfo),
    NonLocalVars = goal_info_get_code_gen_nonlocals(GoalInfo),
    set.difference(GoalVars, NonLocalVars, LocalVars).

:- func union_of_direct_subgoal_locals(hlds_goal) = set(prog_var).

union_of_direct_subgoal_locals(hlds_goal(GoalExpr, _))
        = UnionOfSubGoalLocals :-
    promise_equivalent_solutions [UnionOfSubGoalLocals] (
        set.init(EmptySet),
        solutions.unsorted_aggregate(direct_subgoal(GoalExpr),
            union_subgoal_locals, EmptySet, UnionOfSubGoalLocals)
    ).

:- pred union_subgoal_locals(hlds_goal::in, set(prog_var)::in,
    set(prog_var)::out) is det.

union_subgoal_locals(SubGoal, UnionOfSubGoalLocals0, UnionOfSubGoalLocals) :-
    SubGoalLocals = goal_local_vars(SubGoal),
    set.union(UnionOfSubGoalLocals0, SubGoalLocals, UnionOfSubGoalLocals).

    % If the inner and outer code models are equal, we don't need to do
    % anything special.

ml_gen_wrap_goal(model_det, model_det, _, !Statements, !Info).
ml_gen_wrap_goal(model_semi, model_semi, _, !Statements, !Info).
ml_gen_wrap_goal(model_non, model_non, _, !Statements, !Info).

    % If the inner code model is more precise than the outer code model,
    % then we need to append some statements to convert the calling convention
    % for the inner code model to that of the outer code model.

ml_gen_wrap_goal(model_semi, model_det, Context, !Statements, !Info) :-
    %
    % det goal in semidet context:
    %   <succeeded = Goal>
    % ===>
    %   <do Goal>
    %   succeeded = MR_TRUE
    %
    ml_gen_set_success(!.Info, const(mlconst_true), Context, SetSuccessTrue),
    !:Statements = !.Statements ++ [SetSuccessTrue].

ml_gen_wrap_goal(model_non, model_det, Context, !Statements, !Info) :-
    %
    % det goal in nondet context:
    %   <Goal && SUCCEED()>
    % ===>
    %   <do Goal>
    %   SUCCEED()
    %
    ml_gen_call_current_success_cont(Context, CallCont, !Info),
    !:Statements = !.Statements ++ [CallCont].

ml_gen_wrap_goal(model_non, model_semi, Context, !Statements, !Info) :-
    %
    % semi goal in nondet context:
    %   <Goal && SUCCEED()>
    % ===>
    %   MR_bool succeeded;
    %
    %   <succeeded = Goal>
    %   if (succeeded) SUCCEED()
    %
    ml_gen_test_success(!.Info, Succeeded),
    ml_gen_call_current_success_cont(Context, CallCont, !Info),
    IfStmt = ml_stmt_if_then_else(Succeeded, CallCont, no),
    IfStatement = statement(IfStmt, mlds_make_context(Context)),
    !:Statements = !.Statements ++ [IfStatement].

    % If the inner code model is less precise than the outer code model,
    % then simplify.m is supposed to wrap the goal inside a `some'
    % to indicate that a commit is needed.

ml_gen_wrap_goal(model_det, model_semi, _, _, _, !Info) :-
    unexpected(this_file,
        "ml_gen_wrap_goal: code model mismatch -- semi in det").
ml_gen_wrap_goal(model_det, model_non, _, _, _, !Info) :-
    unexpected(this_file,
        "ml_gen_wrap_goal: code model mismatch -- nondet in det").
ml_gen_wrap_goal(model_semi, model_non, _, _, _, !Info) :-
    unexpected(this_file,
        "ml_gen_wrap_goal: code model mismatch -- nondet in semi").

    % Generate code for a commit.
    %
:- pred ml_gen_commit(hlds_goal::in, code_model::in, prog_context::in,
    mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_commit(Goal, CodeModel, Context, Decls, Statements, !Info) :-
    Goal = hlds_goal(_, GoalInfo),
    GoalCodeModel = goal_info_get_code_model(GoalInfo),
    GoalContext = goal_info_get_context(GoalInfo),

    (
        GoalCodeModel = model_non,
        CodeModel = model_semi
    ->

        %   model_non in semi context: (using try_commit/do_commit)
        %       <succeeded = Goal>
        %   ===>
        %       MR_bool succeeded;
        %   #ifdef NONDET_COPY_OUT
        %       <local var decls>
        %   #endif
        %   #ifdef PUT_COMMIT_IN_OWN_FUNC
        %       /*
        %       ** to avoid problems with setjmp() and non-volatile
        %       ** local variables, we need to put the call to
        %       ** setjmp() in its own nested function
        %       */
        %       void commit_func()
        %       {
        %   #endif
        %       MR_COMMIT_TYPE ref;
        %
        %       void success() {
        %           MR_DO_COMMIT(ref);
        %       }
        %
        %       MR_TRY_COMMIT(ref, {
        %           <Goal && success()>
        %           succeeded = MR_FALSE;
        %       }, {
        %   #ifdef NONDET_COPY_OUT
        %           <copy local vars to output args>
        %   #endif
        %           succeeded = MR_TRUE;
        %       })
        %   #ifdef PUT_COMMIT_IN_OWN_FUNC
        %
        %       commit_func();
        %   #endif

        ml_gen_maybe_make_locals_for_output_args(GoalInfo, LocalVarDecls,
            CopyLocalsToOutputArgs, OrigVarLvalMap, !Info),

        % Generate the `success()' function.
        ml_gen_new_func_label(no, SuccessFuncLabel, SuccessFuncLabelRval,
            !Info),
        % push nesting level
        MLDS_Context = mlds_make_context(Context),
        ml_gen_info_new_commit_label(CommitLabelNum, !Info),
        CommitRef = mlds_var_name(string.format("commit_%d",
            [i(CommitLabelNum)]), no),
        ml_gen_var_lval(!.Info, CommitRef, mlds_commit_type, CommitRefLval),
        CommitRefDecl = ml_gen_commit_var_decl(MLDS_Context, CommitRef),
        DoCommitStmt = ml_stmt_do_commit(lval(CommitRefLval)),
        DoCommitStatement = statement(DoCommitStmt, MLDS_Context),
        % Pop nesting level.
        ml_gen_nondet_label_func(!.Info, SuccessFuncLabel, Context,
            DoCommitStatement, SuccessFunc),

        ml_get_env_ptr(!.Info, EnvPtrRval),
        SuccessCont = success_cont(SuccessFuncLabelRval, EnvPtrRval, [], []),
        ml_gen_info_push_success_cont(SuccessCont, !Info),
        ml_gen_goal(model_non, Goal, GoalDecls, GoalStatements, !Info),
        % Hoist any static constant declarations for Goal out to the top level.
        list.filter(ml_decl_is_static_const, GoalDecls,
            GoalStaticDecls, GoalOtherDecls),
        GoalStatement = ml_gen_block(GoalOtherDecls, GoalStatements,
            GoalContext),
        ml_gen_info_pop_success_cont(!Info),
        ml_gen_set_success(!.Info, const(mlconst_false), Context,
            SetSuccessFalse),
        ml_gen_set_success(!.Info, const(mlconst_true), Context,
            SetSuccessTrue),
        TryCommitStmt = ml_stmt_try_commit(CommitRefLval,
            ml_gen_block([], [GoalStatement, SetSuccessFalse], Context),
            ml_gen_block([], list.append(CopyLocalsToOutputArgs,
                [SetSuccessTrue]), Context)),
        TryCommitStatement = statement(TryCommitStmt, MLDS_Context),
        CommitFuncLocalDecls = [CommitRefDecl, SuccessFunc | GoalStaticDecls],
        maybe_put_commit_in_own_func(CommitFuncLocalDecls,
            [TryCommitStatement], Context, CommitFuncDecls, Statements, !Info),
        Decls = LocalVarDecls ++ CommitFuncDecls,

        ml_gen_info_set_var_lvals(OrigVarLvalMap, !Info)
    ;
        GoalCodeModel = model_non,
        CodeModel = model_det
    ->
        %   model_non in det context: (using try_commit/do_commit)
        %       <do Goal>
        %   ===>
        %   #ifdef NONDET_COPY_OUT
        %       <local var decls>
        %   #endif
        %   #ifdef PUT_COMMIT_IN_NESTED_FUNC
        %       /*
        %       ** to avoid problems with setjmp() and non-volatile
        %       ** local variables, we need to put the call to
        %       ** setjmp() in its own nested functions
        %       */
        %       void commit_func()
        %       {
        %       #endif
        %       MR_COMMIT_TYPE ref;
        %       void success() {
        %           MR_DO_COMMIT(ref);
        %       }
        %       MR_TRY_COMMIT(ref, {
        %           <Goal && success()>
        %       }, {
        %   #ifdef NONDET_COPY_OUT
        %           <copy local vars to output args>
        %   #endif
        %       })
        %   #ifdef PUT_COMMIT_IN_NESTED_FUNC
        %
        %       commit_func();
        %       #endif

        ml_gen_maybe_make_locals_for_output_args(GoalInfo, LocalVarDecls,
            CopyLocalsToOutputArgs, OrigVarLvalMap, !Info),

        % Generate the `success()' function.
        ml_gen_new_func_label(no, SuccessFuncLabel, SuccessFuncLabelRval,
            !Info),
        % push nesting level
        MLDS_Context = mlds_make_context(Context),
        ml_gen_info_new_commit_label(CommitLabelNum, !Info),
        CommitRef = mlds_var_name(
            string.format("commit_%d", [i(CommitLabelNum)]), no),
        ml_gen_var_lval(!.Info, CommitRef, mlds_commit_type, CommitRefLval),
        CommitRefDecl = ml_gen_commit_var_decl(MLDS_Context, CommitRef),
        DoCommitStmt = ml_stmt_do_commit(lval(CommitRefLval)),
        DoCommitStatement = statement(DoCommitStmt, MLDS_Context),
        % pop nesting level
        ml_gen_nondet_label_func(!.Info, SuccessFuncLabel, Context,
            DoCommitStatement, SuccessFunc),

        ml_get_env_ptr(!.Info, EnvPtrRval),
        SuccessCont = success_cont(SuccessFuncLabelRval, EnvPtrRval, [], []),
        ml_gen_info_push_success_cont(SuccessCont, !Info),
        ml_gen_goal(model_non, Goal, GoalDecls, GoalStatements, !Info),
        % Hoist any static constant declarations for Goal out to the top level.
        list.filter(ml_decl_is_static_const, GoalDecls,
            GoalStaticDecls, GoalOtherDecls),
        GoalStatement = ml_gen_block(GoalOtherDecls, GoalStatements,
            GoalContext),
        ml_gen_info_pop_success_cont(!Info),

        TryCommitStmt = ml_stmt_try_commit(CommitRefLval, GoalStatement,
            ml_gen_block([], CopyLocalsToOutputArgs, Context)),
        TryCommitStatement = statement(TryCommitStmt, MLDS_Context),
        CommitFuncLocalDecls = [CommitRefDecl, SuccessFunc | GoalStaticDecls],
        maybe_put_commit_in_own_func(CommitFuncLocalDecls,
            [TryCommitStatement], Context, CommitFuncDecls, Statements, !Info),
        Decls = LocalVarDecls ++ CommitFuncDecls,
        ml_gen_info_set_var_lvals(OrigVarLvalMap, !Info)
    ;
        % No commit required.
        ml_gen_goal(CodeModel, Goal, Decls, Statements, !Info)
    ).

    % maybe_put_commit_in_own_func(Defns0, Stmts0, Defns, Stmts):
    %
    % If the --put-commit-in-own-func option is set, put the commit in its
    % own function. This is needed for the high-level C back-end, to handle
    % problems with setjmp()/longjmp() clobbering non-volatile local variables.
    %
    % Detailed explanation:
    %
    % For the high-level C back-end, we implement commits using
    % setjmp()/longjmp(). Unfortunately for us, ANSI/ISO C says that longjmp()
    % is allowed to clobber the values of any non-volatile local variables
    % in the function that called setjmp() which have been modified between
    % the setjmp() and the longjmp().
    %
    % To avoid this, whenever we generate a commit, we put it in its own
    % nested function, with the local variables (e.g. `succeeded', plus any
    % outputs from the goal that we're committing over) remaining in the
    % containing function. This ensures that none of the variables which
    % get modified between the setjmp() and the longjmp() and which get
    % referenced after the longjmp() are local variables in the function
    % containing the setjmp().
    %
    % [The obvious alternative of declaring the local variables in the function
    % containing setjmp() as `volatile' doesn't work, since the assignments
    % to those output variables may be deep in some function called indirectly
    % from the goal that we're committing across, and assigning to a
    % volatile-qualified variable via a non-volatile pointer is undefined
    % behaviour. The only way to make it work would be to be to declare
    % *every* output argument that we pass by reference as `volatile T *'.
    % But that would impose distributed fat and would make interoperability
    % difficult.]
    %
:- pred maybe_put_commit_in_own_func(mlds_defns::in, statements::in,
    prog_context::in, mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

maybe_put_commit_in_own_func(CommitFuncLocalDecls, TryCommitStatements,
        Context, Decls, Statements, !Info) :-
    ml_gen_info_put_commit_in_own_func(!.Info, PutCommitInOwnFunc),
    (
        PutCommitInOwnFunc = yes,

        % Generate the `void commit_func() { ... }' wrapper
        % around the main body that we generated above
        ml_gen_new_func_label(no, CommitFuncLabel, CommitFuncLabelRval, !Info),
        % push nesting level
        CommitFuncBody = ml_gen_block(CommitFuncLocalDecls,
            TryCommitStatements, Context),
        % pop nesting level
        ml_gen_nondet_label_func(!.Info, CommitFuncLabel, Context,
            CommitFuncBody, CommitFunc),

        % Generate the call to `commit_func();'
        ml_gen_info_use_gcc_nested_functions(!.Info, UseNestedFuncs),
        (
            UseNestedFuncs = yes,
            ArgRvals = [],
            ArgTypes = []
        ;
            UseNestedFuncs = no,
            ml_get_env_ptr(!.Info, EnvPtrRval),
            ArgRvals = [EnvPtrRval],
            ArgTypes = [mlds_generic_env_ptr_type]
        ),
        RetTypes = [],
        Signature = mlds_func_signature(ArgTypes, RetTypes),
        CallKind = ordinary_call,
        CallStmt = ml_stmt_call(Signature, CommitFuncLabelRval, no, ArgRvals,
            [], CallKind),
        CallStatement = statement(CallStmt, mlds_make_context(Context)),
        % Package it all up.
        Statements = [CallStatement],
        Decls = [CommitFunc]
    ;
        PutCommitInOwnFunc = no,
        Statements = TryCommitStatements,
        Decls = CommitFuncLocalDecls
    ).

    % In commits, you have model_non code called from a model_det or model_semi
    % context. With --nondet-copy-out, when generating code for commits,
    % if the context is a model_det or model_semi procedure with output
    % arguments passed by reference, then we need to introduce local variables
    % corresponding to those output arguments, and at the end of the commit
    % we'll copy the local variables into the output arguments.
    %
:- pred ml_gen_maybe_make_locals_for_output_args(hlds_goal_info::in,
    mlds_defns::out, statements::out,
    map(prog_var, mlds_lval)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_maybe_make_locals_for_output_args(GoalInfo, LocalVarDecls,
        CopyLocalsToOutputArgs, OrigVarLvalMap, !Info) :-
    ml_gen_info_get_var_lvals(!.Info, OrigVarLvalMap),
    ml_gen_info_get_globals(!.Info, Globals),
    globals.lookup_bool_option(Globals, nondet_copy_out, NondetCopyOut),
    (
        NondetCopyOut = yes,
        Context = goal_info_get_context(GoalInfo),
        NonLocals = goal_info_get_nonlocals(GoalInfo),
        ml_gen_info_get_byref_output_vars(!.Info, ByRefOutputVars),
        VarsToCopy = set.intersect(set.list_to_set(ByRefOutputVars),
            NonLocals),
        ml_gen_make_locals_for_output_args(set.to_sorted_list(VarsToCopy),
            Context, LocalVarDecls, CopyLocalsToOutputArgs, !Info)
    ;
        NondetCopyOut = no,
        LocalVarDecls = [],
        CopyLocalsToOutputArgs = []
    ).

:- pred ml_gen_make_locals_for_output_args(list(prog_var)::in,
    prog_context::in, mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_make_locals_for_output_args([], _, [], [], !Info).
ml_gen_make_locals_for_output_args([Var | Vars], Context,
        LocalDefns, Assigns, !Info) :-
    ml_gen_make_locals_for_output_args(Vars, Context, LocalDefns0, Assigns0,
        !Info),
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    ml_variable_type(!.Info, Var, Type),
    IsDummy = check_dummy_type(ModuleInfo, Type),
    (
        IsDummy = is_dummy_type,
        LocalDefns = LocalDefns0,
        Assigns = Assigns0
    ;
        IsDummy = is_not_dummy_type,
        ml_gen_make_local_for_output_arg(Var, Type, Context,
            LocalDefn, Assign, !Info),
        LocalDefns = [LocalDefn | LocalDefns0],
        Assigns = [Assign | Assigns0]
    ).

:- pred ml_gen_make_local_for_output_arg(prog_var::in, mer_type::in,
    prog_context::in, mlds_defn::out, statement::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_make_local_for_output_arg(OutputVar, Type, Context,
        LocalVarDefn, Assign, !Info) :-
    % Look up the name of the output variable.
    ml_gen_info_get_varset(!.Info, VarSet),
    OutputVarName = ml_gen_var_name(VarSet, OutputVar),

    % Generate a declaration for a corresponding local variable.
    OutputVarName = mlds_var_name(OutputVarNameStr, MaybeNum),
    LocalVarName = mlds_var_name(
        string.append("local_", OutputVarNameStr), MaybeNum),
    ml_gen_type(!.Info, Type, MLDS_Type),
    ml_gen_gc_statement(LocalVarName, Type, Context, GCStatement,
        !Info),
    LocalVarDefn = ml_gen_mlds_var_decl(var(LocalVarName), MLDS_Type,
        GCStatement, mlds_make_context(Context)),

    % Generate code to assign from the local var to the output var.
    ml_gen_var(!.Info, OutputVar, OutputVarLval),
    ml_gen_var_lval(!.Info, LocalVarName, MLDS_Type, LocalVarLval),
    Assign = ml_gen_assign(OutputVarLval, lval(LocalVarLval), Context),

    % Update the lval for this variable so that any references to it inside
    % the commit refer to the local variable rather than to the output
    % argument. (Note that we reset all the var lvals at the end of the
    % commit.)
    ml_gen_info_set_var_lval(OutputVar, LocalVarLval, !Info).

    % Generate the declaration for the `commit' variable.
    %
:- func ml_gen_commit_var_decl(mlds_context, mlds_var_name) = mlds_defn.

ml_gen_commit_var_decl(Context, VarName) =
    ml_gen_mlds_var_decl(var(VarName), mlds_commit_type, gc_no_stmt, Context).

    % Generate MLDS code for the different kinds of HLDS goals.
    %
:- pred ml_gen_goal_expr(hlds_goal_expr::in, code_model::in, prog_context::in,
    mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_goal_expr(GoalExpr, CodeModel, Context, Decls, Statements, !Info) :-
    (
        GoalExpr = unify(_LHS, _RHS, _Mode, Unification, _UnifyContext),
        ml_gen_unification(Unification, CodeModel, Context, Decls, Statements,
            !Info)
    ;
        GoalExpr = plain_call(PredId, ProcId, ArgVars, BuiltinState, _, _),
        (
            BuiltinState = not_builtin,
            ml_gen_var_list(!.Info, ArgVars, ArgLvals),
            ml_gen_info_get_varset(!.Info, VarSet),
            ArgNames = ml_gen_var_names(VarSet, ArgVars),
            ml_variable_types(!.Info, ArgVars, ActualArgTypes),
            ml_gen_call(PredId, ProcId, ArgNames, ArgLvals, ActualArgTypes,
                CodeModel, Context, no, Decls, Statements, !Info)
        ;
            ( BuiltinState = inline_builtin
            ; BuiltinState = out_of_line_builtin
            ),
            ml_gen_builtin(PredId, ProcId, ArgVars, CodeModel, Context,
                Decls, Statements, !Info)
        )
    ;
        GoalExpr = generic_call(GenericCall, Vars, Modes, Detism),
        determinism_to_code_model(Detism, CallCodeModel),
        expect(unify(CodeModel, CallCodeModel), this_file,
            "ml_gen_generic_call: code model mismatch"),
        ml_gen_generic_call(GenericCall, Vars, Modes, Detism, Context,
            Decls, Statements, !Info)
    ;
        GoalExpr = call_foreign_proc(Attributes, PredId, ProcId,
            Args, ExtraArgs, MaybeTraceRuntimeCond, PragmaImpl),
        (
            PragmaImpl = fc_impl_ordinary(ForeignCode, MaybeContext),
            (
                MaybeContext = yes(ContextToUse)
            ;
                MaybeContext = no,
                ContextToUse = Context
            ),
            (
                MaybeTraceRuntimeCond = no,
                ml_gen_ordinary_pragma_foreign_proc(CodeModel, Attributes,
                    PredId, ProcId, Args, ExtraArgs, ForeignCode,
                    ContextToUse, Decls, Statements, !Info)
            ;
                MaybeTraceRuntimeCond = yes(TraceRuntimeCond),
                ml_gen_trace_runtime_cond(TraceRuntimeCond, ContextToUse,
                    Decls, Statements, !Info)
            )
        ;
            PragmaImpl = fc_impl_model_non(LocalVarsDecls, LocalVarsContext,
                FirstCode, FirstContext, LaterCode, LaterContext,
                _Treatment, SharedCode, SharedContext),
            expect(unify(ExtraArgs, []), this_file,
                "ml_gen_goal_expr: extra args"),
            expect(unify(MaybeTraceRuntimeCond, no), this_file,
                "ml_gen_goal_expr: MaybeTraceRuntimeCond"),
            ml_gen_nondet_pragma_foreign_proc(CodeModel, Attributes,
                PredId, ProcId, Args, Context,
                LocalVarsDecls, LocalVarsContext,
                FirstCode, FirstContext, LaterCode, LaterContext,
                SharedCode, SharedContext, Decls, Statements, !Info)
        ;
            PragmaImpl = fc_impl_import(Name, HandleReturn, Vars, _Context),
            expect(unify(ExtraArgs, []), this_file,
                "ml_gen_goal_expr: extra args"),
            expect(unify(MaybeTraceRuntimeCond, no), this_file,
                "ml_gen_goal_expr: MaybeTraceRuntimeCond"),
            ForeignCode = string.append_list([HandleReturn, " ",
                Name, "(", Vars, ");"]),
            ml_gen_ordinary_pragma_foreign_proc(CodeModel, Attributes,
                PredId, ProcId, Args, ExtraArgs, ForeignCode,
                Context, Decls, Statements, !Info)
        )
    ;
        GoalExpr = conj(_ConjType, Goals),
        % XXX Currently we treat parallel conjunction the same as
        % sequential conjunction -- parallelism is not yet implemented.
        ml_gen_conj(Goals, CodeModel, Context, Decls, Statements, !Info)
    ;
        GoalExpr = disj(Goals),
        ml_gen_disj(Goals, CodeModel, Context, Decls, Statements, !Info)
    ;
        GoalExpr = switch(Var, CanFail, CasesList),
        ml_gen_switch(Var, CanFail, CasesList, CodeModel, Context,
            Decls, Statements, !Info)
    ;
        GoalExpr = if_then_else(_Vars, Cond, Then, Else),
        ml_gen_ite(CodeModel, Cond, Then, Else, Context, Decls, Statements,
            !Info)
    ;
        GoalExpr = negation(SubGoal),
        ml_gen_negation(SubGoal, CodeModel, Context, Decls, Statements, !Info)
    ;
        GoalExpr = scope(_, SubGoal),
        ml_gen_commit(SubGoal, CodeModel, Context, Decls, Statements, !Info)
    ;
        GoalExpr = shorthand(_),
        % these should have been expanded out by now
        unexpected(this_file, "ml_gen_goal_expr: unexpected shorthand")
    ).

    % ml_foreign creates MLDS code to execute foreign language code.
    %
:- pred ml_gen_nondet_pragma_foreign_proc(code_model::in,
    pragma_foreign_proc_attributes::in,
    pred_id::in, proc_id::in, list(foreign_arg)::in,
    prog_context::in, string::in, maybe(prog_context)::in, string::in,
    maybe(prog_context)::in, string::in, maybe(prog_context)::in,
    string::in, maybe(prog_context)::in,
    mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

    % For model_non pragma c_code,
    % we generate code of the following form:
    %
    %   #define MR_PROC_LABEL <procedure name>
    %   <declaration of locals needed for boxing/unboxing>
    %   {
    %       <declaration of one local variable for each arg>
    %       struct {
    %           <user's local_vars decls>
    %       } MR_locals;
    %       MR_bool MR_done = MR_FALSE;
    %       MR_bool MR_succeeded = MR_FALSE;
    %
    %       #define FAIL            (MR_done = MR_TRUE)
    %       #define SUCCEED         (MR_succeeded = MR_TRUE)
    %       #define SUCCEED_LAST    (MR_succeeded = MR_TRUE, \
    %                                   MR_done = MR_TRUE)
    %       #define LOCALS          (&MR_locals)
    %
    %       <assign input args>
    %       <obtain global lock>
    %       <user's first_code C code>
    %       while (true) {
    %           <user's shared_code C code>
    %           <release global lock>
    %           if (MR_succeeded) {
    %               <assign output args>
    %               <boxing/unboxing of outputs>
    %               CONT();
    %           }
    %           if (MR_done) break;
    %           MR_succeeded = MR_FALSE;
    %           <obtain global lock>
    %           <user's later_code C code>
    %       }
    %
    %       #undef FAIL
    %       #undef SUCCEED
    %       #undef SUCCEED_LAST
    %       #undef LOCALS
    %   }
    %   #undef MR_PROC_LABEL
    %
    % We insert a #define for MR_PROC_LABEL, so that the C code in the Mercury
    % standard library that allocates memory manually can use MR_PROC_LABEL
    % as the procname argument to incr_hp_msg(), for memory profiling.
    % Hard-coding the procname argument in the C code would be wrong,
    % since it wouldn't handle the case where the original pragma foreign_proc
    % procedure gets inlined and optimized away. Of course we also need to
    % #undef it afterwards.
    %
ml_gen_nondet_pragma_foreign_proc(CodeModel, Attributes, PredId, _ProcId,
        Args, Context, LocalVarsDecls, LocalVarsContext,
        FirstCode, FirstContext, LaterCode, LaterContext,
        SharedCode, SharedContext, Decls, Statements, !Info) :-

    Lang = get_foreign_language(Attributes),
    ( Lang = lang_csharp ->
        sorry(this_file, "nondet pragma foreign_proc for C#")
    ;
        true
    ),

    % Generate <declaration of one local variable for each arg>
    ml_gen_pragma_c_decls(!.Info, Lang, Args, ArgDeclsList),

    %
    % Generate definitions of the FAIL, SUCCEED, SUCCEED_LAST,
    % and LOCALS macros
    %
    string.append_list([
"   #define FAIL        (MR_done = MR_TRUE)\n",
"   #define SUCCEED     (MR_succeeded = MR_TRUE)\n",
"   #define SUCCEED_LAST    (MR_succeeded = MR_TRUE, MR_done = MR_TRUE)\n",
"   #define LOCALS      (&MR_locals)\n"
        ], HashDefines),
    string.append_list([
            "   #undef  FAIL\n",
            "   #undef  SUCCEED\n",
            "   #undef  SUCCEED_LAST\n",
            "   #undef  LOCALS\n"
        ], HashUndefs),

    % Generate code to set the values of the input variables.
    ml_gen_pragma_c_input_arg_list(Lang, Args, AssignInputsList, !Info),

    % Generate code to assign the values of the output variables.
    ml_gen_pragma_c_output_arg_list(Lang, Args, Context,
        AssignOutputsList, ConvDecls, ConvStatements, !Info),

    % Generate code fragments to obtain and release the global lock.
    ThreadSafe = get_thread_safe(Attributes),
    ml_gen_obtain_release_global_lock(!.Info, ThreadSafe, PredId,
        ObtainLock, ReleaseLock),

    % Generate the MR_PROC_LABEL #define.
    ml_gen_hash_define_mr_proc_label(!.Info, HashDefine),

    % Put it all together.
    Starting_C_Code = list.condense([
        [raw_target_code("{\n", [])],
        HashDefine,
        ArgDeclsList,
        [raw_target_code("\tstruct {\n", []),
        user_target_code(LocalVarsDecls, LocalVarsContext, []),
        raw_target_code("\n", []),
        raw_target_code("\t} MR_locals;\n", []),
        raw_target_code("\tMR_bool MR_succeeded = MR_FALSE;\n", []),
        raw_target_code("\tMR_bool MR_done = MR_FALSE;\n", []),
        raw_target_code("\n", []),
        raw_target_code(HashDefines, []),
        raw_target_code("\n", [])],
        AssignInputsList,
        [raw_target_code(ObtainLock, []),
        raw_target_code("\t{\n", []),
        user_target_code(FirstCode, FirstContext, []),
        raw_target_code("\n\t;}\n", []),
        raw_target_code("\twhile (1) {\n", []),
        raw_target_code("\t\t{\n", []),
        user_target_code(SharedCode, SharedContext, []),
        raw_target_code("\n\t\t;}\n", []),
        raw_target_code("#undef MR_PROC_LABEL\n", []),
        raw_target_code(ReleaseLock, []),
        raw_target_code("\t\tif (MR_succeeded) {\n", [])],
        AssignOutputsList
    ]),
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    module_info_get_globals(ModuleInfo, Globals),
    globals.get_target(Globals, Target),
    (
        CodeModel = model_non,

        (
            Target = target_il,
            % For IL code, we can't call continutations because there is no
            % syntax for calling managed function pointers in C#. Instead,
            % we have to call back into IL and make the continuation call
            % in IL. This is called an "indirect" success continuation call.
            ml_gen_call_current_success_cont_indirectly(Context, CallCont,
                !Info)
        ;
            ( Target = target_c
            ; Target = target_java
            ; Target = target_asm
            ),
            ml_gen_call_current_success_cont(Context, CallCont, !Info)
        ;
            Target = target_x86_64,
            unexpected(this_file,
                "target x86_64 with --high-level-code")
        ;
            Target = target_erlang,
            unexpected(this_file,
                "ml_gen_nondet_pragma_foreign_proc: target erlang")
        )
    ;
        ( CodeModel = model_det
        ; CodeModel = model_semi
        ),
        unexpected(this_file,
            "ml_gen_nondet_pragma_foreign_proc: unexpected code model")
    ),
    Ending_C_Code = [
        raw_target_code("\t\t}\n", []),
        raw_target_code("\t\tif (MR_done) break;\n", []),
        raw_target_code("\tMR_succeeded = MR_FALSE;\n", []),
        raw_target_code(ObtainLock, []),
        raw_target_code("\t\t{\n", []),
        user_target_code(LaterCode, LaterContext, []),
        raw_target_code("\n\t\t;}\n", []),
        raw_target_code("\t}\n", []),
        raw_target_code("\n", []),
        raw_target_code(HashUndefs, []),
        raw_target_code("}\n", [])
    ],
    Starting_C_Code_Stmt = inline_target_code(ml_target_c, Starting_C_Code),
    Starting_C_Code_Statement = statement(
        ml_stmt_atomic(Starting_C_Code_Stmt), mlds_make_context(Context)),
    Ending_C_Code_Stmt = inline_target_code(ml_target_c, Ending_C_Code),
    Ending_C_Code_Statement = statement(
        ml_stmt_atomic(Ending_C_Code_Stmt), mlds_make_context(Context)),
    Statements = list.condense([
        [Starting_C_Code_Statement],
        ConvStatements,
        [CallCont,
        Ending_C_Code_Statement]
    ]),
    Decls = ConvDecls.

:- pred ml_gen_trace_runtime_cond(trace_expr(trace_runtime)::in,
    term.context::in, mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_trace_runtime_cond(TraceRuntimeCond, Context, Decls, Statements,
        !Info) :-
    Decls = [],
    MLDSContext = mlds_make_context(Context),
    ml_success_lval(!.Info, SuccessLval),
    ml_generate_runtime_cond_code(TraceRuntimeCond, CondRval, !Info),
    Statement = statement(ml_stmt_atomic(assign(SuccessLval, CondRval)),
        MLDSContext),
    Statements = [Statement].

:- pred ml_generate_runtime_cond_code(trace_expr(trace_runtime)::in,
    mlds_rval::out, ml_gen_info::in, ml_gen_info::out) is det.

ml_generate_runtime_cond_code(Expr, CondRval, !Info) :-
    (
        Expr = trace_base(trace_envvar(EnvVar)),
        ml_gen_info_add_env_var_name(EnvVar, !Info),
        EnvVarRval = lval(global_var_ref(env_var_ref(EnvVar))),
        ZeroRval = const(mlconst_int(0)),
        CondRval = binop(ne, EnvVarRval, ZeroRval)
    ;
        Expr = trace_not(ExprA),
        ml_generate_runtime_cond_code(ExprA, RvalA, !Info),
        CondRval = unop(std_unop(logical_not), RvalA)
    ;
        Expr = trace_op(TraceOp, ExprA, ExprB),
        ml_generate_runtime_cond_code(ExprA, RvalA, !Info),
        ml_generate_runtime_cond_code(ExprB, RvalB, !Info),
        (
            TraceOp = trace_or,
            Op = logical_or
        ;
            TraceOp = trace_and,
            Op = logical_and
        ),
        CondRval = binop(Op, RvalA, RvalB)
    ).

:- pred ml_gen_ordinary_pragma_foreign_proc(code_model::in,
    pragma_foreign_proc_attributes::in, pred_id::in, proc_id::in,
    list(foreign_arg)::in, list(foreign_arg)::in, string::in,
    prog_context::in, mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_ordinary_pragma_foreign_proc(CodeModel, Attributes, PredId, ProcId,
        Args, ExtraArgs, Foreign_Code, Context, Decls, Statements, !Info) :-
    Lang = get_foreign_language(Attributes),
    (
        CodeModel = model_det,
        OrdinaryKind = kind_det
    ;
        CodeModel = model_semi,
        ml_gen_info_get_module_info(!.Info, ModuleInfo),
        module_info_pred_proc_info(ModuleInfo, PredId, ProcId,
            _PredInfo, ProcInfo),
        proc_info_interface_determinism(ProcInfo, Detism),
        determinism_components(Detism, _, MaxSoln),
        (
            MaxSoln = at_most_zero,
            OrdinaryKind = kind_failure
        ;
            ( MaxSoln = at_most_one
            ; MaxSoln = at_most_many
            ; MaxSoln = at_most_many_cc
            ),
            OrdinaryKind = kind_semi
        )
    ;
        CodeModel = model_non,
        OrdinaryDespiteDetism = get_ordinary_despite_detism(Attributes),
        (
            OrdinaryDespiteDetism = no,
            unexpected(this_file,
                "ml_gen_ordinary_pragma_foreign_proc: unexpected code model")
        ;
            OrdinaryDespiteDetism = yes,
            OrdinaryKind = kind_semi
        )
    ),
    (
        Lang = lang_c,
        ml_gen_ordinary_pragma_c_proc(OrdinaryKind, Attributes,
            PredId, ProcId, Args, ExtraArgs,
            Foreign_Code, Context, Decls, Statements, !Info)
    ;
        Lang = lang_csharp,
        ml_gen_ordinary_pragma_managed_proc(OrdinaryKind, Attributes,
            PredId, ProcId, Args, ExtraArgs,
            Foreign_Code, Context, Decls, Statements, !Info)
    ;
        Lang = lang_il,
        % XXX should pass OrdinaryKind
        ml_gen_ordinary_pragma_il_proc(CodeModel, Attributes,
            PredId, ProcId, Args, ExtraArgs,
            Foreign_Code, Context, Decls, Statements, !Info)
    ;
        Lang = lang_java,
        % XXX should pass OrdinaryKind
        ml_gen_ordinary_pragma_java_proc(CodeModel, Attributes,
            PredId, ProcId, Args, ExtraArgs,
            Foreign_Code, Context, Decls, Statements, !Info)
    ;
        Lang = lang_erlang,
        unexpected(this_file,
            "ml_gen_ordinary_pragma_foreign_proc: unexpected language Erlang")
    ).

:- pred ml_gen_ordinary_pragma_java_proc(code_model::in,
    pragma_foreign_proc_attributes::in, pred_id::in, proc_id::in,
    list(foreign_arg)::in, list(foreign_arg)::in, string::in,
    prog_context::in, mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_ordinary_pragma_java_proc(_CodeModel, Attributes, _PredId, _ProcId,
        Args, ExtraArgs, JavaCode, Context, Decls, Statements, !Info) :-

    Lang = get_foreign_language(Attributes),

    % Generate <declaration of one local variable for each arg>
    ml_gen_pragma_c_decls(!.Info, Lang, Args, ArgDeclsList),
    expect(unify(ExtraArgs, []), this_file,
        "ml_gen_ordinary_pragma_java_proc: extra args"),

    % Generate code to set the values of the input variables.
    ml_gen_pragma_c_input_arg_list(Lang, Args, AssignInputsList, !Info),

    % Generate MLDS statements to assign the values of the output variables.
    ml_gen_pragma_java_output_arg_list(Lang, Args, Context,
        AssignOutputsList, ConvDecls, ConvStatements, !Info),

    % Put it all together
    % XXX FIXME need to handle model_semi code here,
    % i.e. provide some equivalent to SUCCESS_INDICATOR.
    Java_Code = list.condense([
        ArgDeclsList,
        AssignInputsList,
        [user_target_code(JavaCode, yes(Context), [])]
    ]),
    Java_Code_Stmt = inline_target_code(ml_target_java, Java_Code),
    Java_Code_Statement = statement(
        ml_stmt_atomic(Java_Code_Stmt),
        mlds_make_context(Context)),
    Statements = list.condense([
        [Java_Code_Statement],
        AssignOutputsList,
        ConvStatements
        ]),
    Decls = ConvDecls.

:- type ordinary_pragma_kind
    --->    kind_det
    ;       kind_semi
    ;       kind_failure.

    % For ordinary (not model_non) pragma foreign_code in C#,
    % we generate a call to an out-of-line procedure that contains
    % the user's code.
    %
:- pred ml_gen_ordinary_pragma_managed_proc(ordinary_pragma_kind::in,
    pragma_foreign_proc_attributes::in, pred_id::in, proc_id::in,
    list(foreign_arg)::in, list(foreign_arg)::in, string::in,
    prog_context::in, mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_ordinary_pragma_managed_proc(OrdinaryKind, Attributes, _PredId, _ProcId,
        Args, ExtraArgs, ForeignCode, Context, Decls, Statements, !Info) :-

    ml_gen_outline_args(Args, OutlineArgs, !Info),
    expect(unify(ExtraArgs, []), this_file,
        "ml_gen_ordinary_pragma_managed_proc: extra args"),

    ForeignLang = get_foreign_language(Attributes),
    MLDSContext = mlds_make_context(Context),
    ml_gen_info_get_value_output_vars(!.Info, OutputVars),
    ml_gen_var_list(!.Info, OutputVars, OutputVarLvals),
    OutlineStmt = outline_foreign_proc(ForeignLang, OutlineArgs,
        OutputVarLvals, ForeignCode),

    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    module_info_get_name(ModuleInfo, ModuleName),
    MLDSModuleName = mercury_module_name_to_mlds(ModuleName),

    ml_success_lval(!.Info, SucceededLval),
    (
        OrdinaryKind = kind_det,
        SuccessVarLocals = [],
        SuccessIndicatorStatements = []
    ;
        OrdinaryKind = kind_semi,
        % If the code is semidet, we should copy SUCCESS_INDICATOR
        % out into "success".
        SuccessIndicatorVarName = mlds_var_name("SUCCESS_INDICATOR", no),
        SuccessIndicatorDecl = ml_gen_mlds_var_decl(
            var(SuccessIndicatorVarName),
            mlds_native_bool_type,
            gc_no_stmt, MLDSContext),
        SuccessIndicatorLval = var(qual(MLDSModuleName, module_qual,
            SuccessIndicatorVarName), mlds_native_bool_type),
        SuccessIndicatorStatement = ml_gen_assign(SucceededLval,
            lval(SuccessIndicatorLval), Context),
        SuccessVarLocals = [SuccessIndicatorDecl],
        SuccessIndicatorStatements = [SuccessIndicatorStatement]
    ;
        OrdinaryKind = kind_failure,
        unexpected(this_file,
            "ml_gen_ordinary_pragma_managed_proc: " ++
            "kind_failure not yet implemented")
    ),

    Statements = [
        statement(ml_stmt_atomic(OutlineStmt), MLDSContext) |
        SuccessIndicatorStatements
        ],
    Decls = SuccessVarLocals.

:- pred ml_gen_outline_args(list(foreign_arg)::in, list(outline_arg)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_outline_args([], [], !Info).
ml_gen_outline_args([Arg | Args], [OutlineArg | OutlineArgs], !Info) :-
    Arg = foreign_arg(Var, MaybeVarMode, OrigType, BoxPolicy),
    ml_gen_outline_args(Args, OutlineArgs, !Info),
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    ml_gen_var(!.Info, Var, VarLval),
    (
        BoxPolicy = native_if_possible,
        ml_gen_type(!.Info, OrigType, MldsType)
    ;
        BoxPolicy = always_boxed,
        MldsType = mlds_generic_type
    ),
    (
        MaybeVarMode = yes(ArgName - Mode),
        check_dummy_type(ModuleInfo, OrigType) = is_not_dummy_type,
        not var_is_singleton(ArgName)
    ->
        mode_to_arg_mode(ModuleInfo, Mode, OrigType, ArgMode),
        (
            ArgMode = top_in,
            OutlineArg = in(MldsType, ArgName, lval(VarLval))
        ;
            ArgMode = top_out,
            OutlineArg = out(MldsType, ArgName, VarLval)
        ;
            ArgMode = top_unused,
            OutlineArg = unused
        )
    ;
        OutlineArg = unused
    ).

:- pred ml_gen_ordinary_pragma_il_proc(code_model::in,
    pragma_foreign_proc_attributes::in, pred_id::in, proc_id::in,
    list(foreign_arg)::in, list(foreign_arg)::in, string::in,
    prog_context::in, mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_ordinary_pragma_il_proc(_CodeModel, Attributes, PredId, ProcId,
        Args, ExtraArgs, ForeignCode, Context, Decls, Statements, !Info) :-

    expect(unify(ExtraArgs, []), this_file,
        "ml_gen_ordinary_pragma_managed_proc: extra args"),

    % XXX FIXME need to handle model_semi code here,
    % i.e. provide some equivalent to SUCCESS_INDICATOR.

    % XXX FIXME do we handle top_unused mode correctly?

    MLDSContext = mlds_make_context(Context),

    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    module_info_pred_proc_info(ModuleInfo, PredId, ProcId,
        _PredInfo, ProcInfo),
    proc_info_get_varset(ProcInfo, VarSet),
%   proc_info_get_vartypes(ProcInfo, VarTypes),
    % note that for headvars we must use the types from
    % the procedure interface, not from the procedure body
    ml_gen_info_get_byref_output_vars(!.Info, ByRefOutputVars),
    ml_gen_info_get_value_output_vars(!.Info, CopiedOutputVars),
    module_info_get_name(ModuleInfo, ModuleName),
    MLDSModuleName = mercury_module_name_to_mlds(ModuleName),

    % XXX in the code to marshall parameters, fjh says:
    % We need to handle the case where the types in the procedure interface
    % are polymorphic, but the types of the vars in the `foreign_proc' HLDS
    % goal are concrete instances of those types, which can happen when the
    % procedure is inlined or specialized. The assignment that you
    % generate here with ml_gen_assign won't be type-correct. In general
    % you may need to box/unbox the arguments.

    build_arg_map(Args, map.init, ArgMap),

    % Generate statements to assign by-ref output arguments.
    list.filter_map(ml_gen_pragma_il_proc_assign_output(ModuleInfo,
            MLDSModuleName, ArgMap, VarSet, Context, yes),
        ByRefOutputVars, ByRefAssignStatements),

    % Generate statements to assign copied output arguments.
    list.filter_map(ml_gen_pragma_il_proc_assign_output(ModuleInfo,
            MLDSModuleName, ArgMap, VarSet, Context, no),
        CopiedOutputVars, CopiedOutputStatements),

    ArgVars = list.map(foreign_arg_var, Args),
    % Generate declarations for all the variables, and initializers for
    % input variables.
    list.map(ml_gen_pragma_il_proc_var_decl_defn(ModuleInfo,
            MLDSModuleName, ArgMap, VarSet, MLDSContext,
            ByRefOutputVars, CopiedOutputVars),
        ArgVars, VarLocals),

    OutlineStmt = inline_target_code(ml_target_il, [
        user_target_code(ForeignCode, yes(Context),
            get_target_code_attributes(lang_il,
                get_extra_attributes(Attributes)))
        ]),

    ILCodeFragment = statement(ml_stmt_atomic(OutlineStmt), MLDSContext),
    Statements = [statement(ml_stmt_block(VarLocals,
        [ILCodeFragment] ++ ByRefAssignStatements ++ CopiedOutputStatements),
        mlds_make_context(Context))],
    Decls = [].

:- pred build_arg_map(list(foreign_arg)::in, map(prog_var, foreign_arg)::in,
    map(prog_var, foreign_arg)::out) is det.

build_arg_map([], !ArgMap).
build_arg_map([ForeignArg | ForeignArgs], !ArgMap) :-
    ForeignArg = foreign_arg(Var, _, _, _),
    map.det_insert(!.ArgMap, Var, ForeignArg, !:ArgMap),
    build_arg_map(ForeignArgs, !ArgMap).

:- pred ml_gen_pragma_il_proc_assign_output(module_info::in,
    mlds_module_name::in, map(prog_var, foreign_arg)::in, prog_varset::in,
    prog_context::in, bool::in, prog_var::in, statement::out)
    is semidet.

ml_gen_pragma_il_proc_assign_output(ModuleInfo, MLDSModuleName, ArgMap,
        VarSet, Context, IsByRef, Var, Statement) :-
    map.lookup(ArgMap, Var, ForeignArg),
    ForeignArg = foreign_arg(_, MaybeNameMode, Type, BoxPolicy),
    check_dummy_type(ModuleInfo, Type) = is_not_dummy_type,
    (
        BoxPolicy = always_boxed,
        MLDSType = mlds_generic_type
    ;
        BoxPolicy = native_if_possible,
        MLDSType = mercury_type_to_mlds_type(ModuleInfo, Type)
    ),

    VarName = ml_gen_var_name(VarSet, Var),
    QualVarName = qual(MLDSModuleName, module_qual, VarName),
    (
        IsByRef = yes,
        OutputVarLval = mem_ref(lval(var(QualVarName, MLDSType)), MLDSType)
    ;
        IsByRef = no,
        OutputVarLval = var(QualVarName, MLDSType)
    ),

    MaybeNameMode = yes(UserVarNameString - _),
    NonMangledVarName = mlds_var_name(UserVarNameString, no),
    QualLocalVarName= qual(MLDSModuleName, module_qual, NonMangledVarName),
    LocalVarLval = var(QualLocalVarName, MLDSType),

    Statement = ml_gen_assign(OutputVarLval, lval(LocalVarLval), Context).

:- pred ml_gen_pragma_il_proc_var_decl_defn(module_info::in,
    mlds_module_name::in, map(prog_var, foreign_arg)::in, prog_varset::in,
    mlds_context::in, list(prog_var)::in, list(prog_var)::in,
    prog_var::in, mlds_defn::out) is det.

ml_gen_pragma_il_proc_var_decl_defn(ModuleInfo, MLDSModuleName, ArgMap, VarSet,
        MLDSContext, ByRefOutputVars, CopiedOutputVars, Var, Defn) :-
    map.lookup(ArgMap, Var, ForeignArg),
    ForeignArg = foreign_arg(_, MaybeNameMode, Type, BoxPolicy),
    VarName = ml_gen_var_name(VarSet, Var),
    (
        MaybeNameMode = yes(UserVarNameString - _),
        NonMangledVarName = mlds_var_name(UserVarNameString, no)
    ;
        MaybeNameMode = no,
        sorry(this_file, "no variable name for var")
    ),
    (
        BoxPolicy = always_boxed,
        MLDSType0 = mlds_generic_type
    ;
        BoxPolicy = native_if_possible,
        MLDSType0 = mercury_type_to_mlds_type(ModuleInfo, Type)
    ),

    % Dummy arguments are just mapped to integers, since they shouldn't be
    % used in any way that requires them to have a real value.
    ( check_dummy_type(ModuleInfo, Type) = is_dummy_type ->
        Initializer = no_initializer,
        MLDSType = mlds_native_int_type
    ; list.member(Var, ByRefOutputVars) ->
        Initializer = no_initializer,
        MLDSType = MLDSType0
    ; list.member(Var, CopiedOutputVars) ->
        Initializer = no_initializer,
        MLDSType = MLDSType0
    ;
        MLDSType = MLDSType0,
        QualVarName = qual(MLDSModuleName, module_qual, VarName),
        Initializer = init_obj(lval(var(QualVarName, MLDSType)))
    ),
    % XXX Accurate GC is not supported for IL foreign code;
    % this would only be useful if interfacing to
    % IL when compiling to C, which is not yet supported.
    GCStatement = gc_no_stmt,
    Defn = ml_gen_mlds_var_decl_init(var(NonMangledVarName), MLDSType,
        Initializer, GCStatement, MLDSContext).

    % For ordinary (not model_non) pragma c_proc,
    % we generate code of the following form:
    %
    % model_det pragma_c_proc:
    %
    %   #define MR_PROC_LABEL <procedure name>
    %   <declaration of locals needed for boxing/unboxing>
    %   {
    %       <declaration of one local variable for each arg>
    %
    %       <assign input args>
    %       <obtain global lock>
    %       <c code>
    %       <boxing/unboxing of outputs>
    %       <release global lock>
    %       <assign output args>
    %   }
    %   #undef MR_PROC_LABEL
    %
    % model_semi pragma_c_proc:
    %
    %   #define MR_PROC_LABEL <procedure name>
    %   <declaration of locals needed for boxing/unboxing>
    %   {
    %       <declaration of one local variable for each arg>
    %       MR_bool SUCCESS_INDICATOR;
    %
    %       <assign input args>
    %       <obtain global lock>
    %       <c code>
    %       <release global lock>
    %       if (SUCCESS_INDICATOR) {
    %           <assign output args>
    %           <boxing/unboxing of outputs>
    %       }
    %
    %       <succeeded> = SUCCESS_INDICATOR;
    %   }
    %   #undef MR_PROC_LABEL
    %
    % We insert a #define for MR_PROC_LABEL, so that the C code in
    % the Mercury standard library that allocates memory manually
    % can use MR_PROC_LABEL as the procname argument to
    % incr_hp_msg(), for memory profiling. Hard-coding the procname
    % argument in the C code would be wrong, since it wouldn't
    % handle the case where the original pragma c_code procedure
    % gets inlined and optimized away. Of course we also need to
    % #undef it afterwards.
    %
    % Note that we generate this code directly as
    % `target_code(lang_C, <string>)' instructions in the MLDS.
    % It would probably be nicer to encode more of the structure
    % in the MLDS, so that (a) we could do better MLDS optimization
    % and (b) so that the generation of C code strings could be
    % isolated in mlds_to_c.m. Also we will need to do something
    % different for targets other than C, e.g. when compiling to
    % Java.
    %
:- pred ml_gen_ordinary_pragma_c_proc(ordinary_pragma_kind::in,
    pragma_foreign_proc_attributes::in, pred_id::in, proc_id::in,
    list(foreign_arg)::in, list(foreign_arg)::in, string::in,
    prog_context::in, mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_ordinary_pragma_c_proc(OrdinaryKind, Attributes, PredId, _ProcId,
        OrigArgs, ExtraArgs, C_Code, Context, Decls, Statements, !Info) :-

    Lang = get_foreign_language(Attributes),

    % Generate <declaration of one local variable for each arg>
    list.append(OrigArgs, ExtraArgs, Args),
    ml_gen_pragma_c_decls(!.Info, Lang, Args, ArgDeclsList),

    % Generate code to set the values of the input variables.
    ml_gen_pragma_c_input_arg_list(Lang, Args, AssignInputsList, !Info),

    % Generate code to assign the values of the output variables.
    ml_gen_pragma_c_output_arg_list(Lang, Args, Context,
        AssignOutputsList, ConvDecls, ConvStatements, !Info),

    % Generate code fragments to obtain and release the global lock.
    ThreadSafe = get_thread_safe(Attributes),
    ml_gen_obtain_release_global_lock(!.Info, ThreadSafe, PredId,
        ObtainLock, ReleaseLock),

    % Generate the MR_PROC_LABEL #define.
    ml_gen_hash_define_mr_proc_label(!.Info, HashDefine),

    % Put it all together.
    (
        OrdinaryKind = kind_det,
        Starting_C_Code = list.condense([
            [raw_target_code("{\n", [])],
            HashDefine,
            ArgDeclsList,
            [raw_target_code("\n", [])],
            AssignInputsList,
            [raw_target_code(ObtainLock, []),
            raw_target_code("\t\t{\n", []),
            user_target_code(C_Code, yes(Context), []),
            raw_target_code("\n\t\t;}\n", []),
            raw_target_code("#undef MR_PROC_LABEL\n", []),
            raw_target_code(ReleaseLock, [])],
            AssignOutputsList
        ]),
        Ending_C_Code = [raw_target_code("}\n", [])]
    ;
        OrdinaryKind = kind_failure,
        % We need to treat this case separately, because for these
        % foreign_procs the C code fragment won't assign anything
        % SUCCESS_INDICATOR; the code we generate for CanSucceed = yes
        % would test an undefined value.
        ml_success_lval(!.Info, SucceededLval),
        Starting_C_Code = list.condense([
            [raw_target_code("{\n", [])],
            HashDefine,
            ArgDeclsList,
            [raw_target_code("\n", [])],
            AssignInputsList,
            [raw_target_code(ObtainLock, []),
            raw_target_code("\t\t{\n", []),
            user_target_code(C_Code, yes(Context), []),
            raw_target_code("\n\t\t;}\n", []),
            raw_target_code("#undef MR_PROC_LABEL\n", []),
            raw_target_code(ReleaseLock, [])]
        ]),
        Ending_C_Code = [
            target_code_output(SucceededLval),
            raw_target_code(" = MR_FALSE;\n", []),
            raw_target_code("}\n", [])
        ]
    ;
        OrdinaryKind = kind_semi,
        ml_success_lval(!.Info, SucceededLval),
        Starting_C_Code = list.condense([
            [raw_target_code("{\n", [])],
            HashDefine,
            ArgDeclsList,
            [raw_target_code("\tMR_bool SUCCESS_INDICATOR;\n", []),
            raw_target_code("\n", [])],
            AssignInputsList,
            [raw_target_code(ObtainLock, []),
            raw_target_code("\t\t{\n", []),
            user_target_code(C_Code, yes(Context), []),
            raw_target_code("\n\t\t;}\n", []),
            raw_target_code("#undef MR_PROC_LABEL\n", []),
            raw_target_code(ReleaseLock, []),
            raw_target_code("\tif (SUCCESS_INDICATOR) {\n", [])],
            AssignOutputsList
        ]),
        Ending_C_Code = [
            raw_target_code("\t}\n", []),
            target_code_output(SucceededLval),
            raw_target_code(" = SUCCESS_INDICATOR;\n", []),
            raw_target_code("}\n", [])
        ]
    ),
    Starting_C_Code_Stmt = inline_target_code(ml_target_c, Starting_C_Code),
    Ending_C_Code_Stmt = inline_target_code(ml_target_c, Ending_C_Code),
    Starting_C_Code_Statement = statement(
        ml_stmt_atomic(Starting_C_Code_Stmt), mlds_make_context(Context)),
    Ending_C_Code_Statement = statement(ml_stmt_atomic(Ending_C_Code_Stmt),
        mlds_make_context(Context)),
    Statements = list.condense([
        [Starting_C_Code_Statement],
        ConvStatements,
        [Ending_C_Code_Statement]
    ]),
    Decls = ConvDecls.

    % Generate code fragments to obtain and release the global lock
    % (this is used for ensuring thread safety in a concurrent implementation).
    %
:- pred ml_gen_obtain_release_global_lock(ml_gen_info::in,
    proc_thread_safe::in, pred_id::in, string::out, string::out) is det.

ml_gen_obtain_release_global_lock(Info, ThreadSafe, PredId,
        ObtainLock, ReleaseLock) :-
    ml_gen_info_get_module_info(Info, ModuleInfo),
    module_info_get_globals(ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, parallel, Parallel),
    (
        Parallel = yes,
        ThreadSafe = proc_not_thread_safe
    ->
        module_info_pred_info(ModuleInfo, PredId, PredInfo),
        Name = pred_info_name(PredInfo),
        MangledName = c_util.quote_string(Name),
        string.append_list(["\tMR_OBTAIN_GLOBAL_LOCK(""",
            MangledName, """);\n"], ObtainLock),
        string.append_list(["\tMR_RELEASE_GLOBAL_LOCK(""",
            MangledName, """);\n"], ReleaseLock)
    ;
        ObtainLock = "",
        ReleaseLock = ""
    ).

:- pred ml_gen_hash_define_mr_proc_label(ml_gen_info::in,
    list(target_code_component)::out) is det.

ml_gen_hash_define_mr_proc_label(Info, HashDefine) :-
    ml_gen_info_get_module_info(Info, ModuleInfo),
    % Note that we use the pred_id and proc_id of the current procedure,
    % not the one that the pragma foreign_code originally came from.
    % There may not be any function address for the latter, e.g. if it
    % has been inlined and the original definition optimized away.
    ml_gen_info_get_pred_id(Info, PredId),
    ml_gen_info_get_proc_id(Info, ProcId),
    ml_gen_proc_label(ModuleInfo, PredId, ProcId, Name, Module),
    HashDefine = [raw_target_code("#define MR_PROC_LABEL ", []),
        name(qual(Module, module_qual, Name)), raw_target_code("\n", [])].

:- func get_target_code_attributes(foreign_language,
    pragma_foreign_proc_extra_attributes) = target_code_attributes.

get_target_code_attributes(_, []) = [].
get_target_code_attributes(Lang, [refers_to_llds_stack | Attrs]) =
        get_target_code_attributes(Lang, Attrs).
get_target_code_attributes(Lang, [backend(_Backend) | Attrs]) =
        get_target_code_attributes(Lang, Attrs).
get_target_code_attributes(Lang, [max_stack_size(N) | Attrs]) =
    ( Lang = lang_il ->
        [max_stack_size(N) | get_target_code_attributes(Lang, Attrs)]
    ;
        []
    ).

%---------------------------------------------------------------------------%

    % ml_gen_pragma_c_decls generates C code to declare the arguments
    % for a `pragma foreign_proc' declaration.
    %
:- pred ml_gen_pragma_c_decls(ml_gen_info::in, foreign_language::in,
    list(foreign_arg)::in, list(target_code_component)::out) is det.

    % XXX Maybe this ought to be renamed as it works for, and
    % is used by the Java back-end as well.
    %
ml_gen_pragma_c_decls(_, _, [], []).
ml_gen_pragma_c_decls(Info, Lang, [Arg | Args], [Decl | Decls]) :-
    ml_gen_pragma_c_decl(Info, Lang, Arg, Decl),
    ml_gen_pragma_c_decls(Info, Lang, Args, Decls).

    % ml_gen_pragma_c_decl generates C code to declare an argument
    % of a `pragma foreign_proc' declaration.
    %
:- pred ml_gen_pragma_c_decl(ml_gen_info::in, foreign_language::in,
    foreign_arg::in, target_code_component::out) is det.

ml_gen_pragma_c_decl(Info, Lang, Arg, Decl) :-
    Arg = foreign_arg(_Var, MaybeNameAndMode, Type, BoxPolicy),
    ml_gen_info_get_module_info(Info, ModuleInfo),
    (
        MaybeNameAndMode = yes(ArgName - _Mode),
        not var_is_singleton(ArgName)
    ->
        (
            BoxPolicy = always_boxed,
            TypeString = "MR_Word"
        ;
            BoxPolicy = native_if_possible,
            TypeString = mercury_exported_type_to_string(ModuleInfo, Lang,
                Type)
        ),
        string.format("\t%s %s;\n", [s(TypeString), s(ArgName)], DeclString)
    ;
        % If the variable doesn't occur in the ArgNames list,
        % it can't be used, so we just ignore it.
        DeclString = ""
    ),
    Decl = raw_target_code(DeclString, []).

%-----------------------------------------------------------------------------%

    % var_is_singleton determines whether or not a given foreign_proc variable
    % is singleton (i.e. starts with an underscore)
    %
    % Singleton vars should be ignored when generating the declarations for
    % foreign_proc arguments because:
    %
    %   - they should not appear in the C code
    %   - they could clash with the system name space
    %
:- pred var_is_singleton(string::in) is semidet.

var_is_singleton(Name) :-
    string.first_char(Name, '_', _).

%-----------------------------------------------------------------------------%

    % XXX Maybe this ought to be renamed as it works for, and is used
    % by the Java back-end as well.
    %
:- pred ml_gen_pragma_c_input_arg_list(foreign_language::in,
    list(foreign_arg)::in, list(target_code_component)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_c_input_arg_list(Lang, ArgList, AssignInputs, !Info) :-
    list.map_foldl(ml_gen_pragma_c_input_arg(Lang), ArgList,
        AssignInputsList, !Info),
    list.condense(AssignInputsList, AssignInputs).

    % ml_gen_pragma_c_input_arg generates C code to assign the value of an
    % input arg for a `pragma foreign_proc' declaration.
    %
:- pred ml_gen_pragma_c_input_arg(foreign_language::in, foreign_arg::in,
    list(target_code_component)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_c_input_arg(Lang, ForeignArg, AssignInput, !Info) :-
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    (
        ForeignArg = foreign_arg(Var, MaybeNameAndMode, OrigType, BoxPolicy),
        MaybeNameAndMode = yes(ArgName - Mode),
        not var_is_singleton(ArgName),
        mode_to_arg_mode(ModuleInfo, Mode, OrigType, top_in)
    ->
        ml_gen_pragma_c_gen_input_arg(Lang, Var, ArgName, OrigType,
            BoxPolicy, AssignInput, !Info)
    ;
        % If the variable doesn't occur in the ArgNames list,
        % it can't be used, so we just ignore it.
        AssignInput = []
    ).

:- pred ml_gen_pragma_c_gen_input_arg(foreign_language::in, prog_var::in,
    string::in, mer_type::in, box_policy::in, list(target_code_component)::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_c_gen_input_arg(Lang, Var, ArgName, OrigType, BoxPolicy,
        AssignInput, !Info) :-
    ml_variable_type(!.Info, Var, VarType),
    ml_gen_var(!.Info, Var, VarLval),
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    IsDummy = check_dummy_type(ModuleInfo, VarType),
    (
        IsDummy = is_dummy_type,
        % The variable may not have been declared, so we need to generate
        % a dummy value for it. Using `0' here is more efficient than using
        % private_builtin.dummy_var, which is what ml_gen_var will have
        % generated for this variable.
        ArgRval = const(mlconst_int(0))
    ;
        IsDummy = is_not_dummy_type,
        ml_gen_box_or_unbox_rval(VarType, OrigType, BoxPolicy,
            lval(VarLval), ArgRval, !Info)
    ),
    % At this point we have an rval with the right type for *internal* use
    % in the code generated by the Mercury compiler's MLDS back-end. We need
    % to convert this to the appropriate type to use for the C interface.
    ExportedType = foreign.to_exported_type(ModuleInfo, OrigType),
    TypeString = exported_type_to_string(Lang, ExportedType),
    IsForeign = foreign.is_foreign_type(ExportedType),
    (
        (
            Lang = lang_java,
            MaybeCast = no
        ;
            Lang = lang_c,
            IsForeign = no,
            MaybeCast = no
        ;
            Lang = lang_c,
            IsForeign = yes(Assertions),
            list.member(foreign_type_can_pass_as_mercury_type, Assertions),
            MaybeCast = yes("(" ++ TypeString ++ ") ")
        )
    ->
        % In the usual case, we can just use an assignment and perhaps a cast.
        module_info_get_globals(ModuleInfo, Globals),
        globals.lookup_bool_option(Globals, highlevel_data, HighLevelData),
        (
            HighLevelData = yes,
            % In general, the types used for the C interface are not the same
            % as the types used by --high-level-data, so we always use a cast
            % here. (Strictly speaking the cast is not needed for a few cases
            % like `int', but it doesn't do any harm.)
            string.format("(%s)", [s(TypeString)], Cast)
        ;
            HighLevelData = no,
            % For --no-high-level-data, we only need to use a cast is for
            % polymorphic types, which are `MR_Word' in the C interface but
            % `MR_Box' in the MLDS back-end.
            ( OrigType = type_variable(_, _) ->
                Cast = "(MR_Word) "
            ;
                (
                    MaybeCast = yes(Cast)
                ;
                    MaybeCast = no,
                    Cast = ""
                )
            )
        ),
        string.format("\t%s = %s ", [s(ArgName), s(Cast)], AssignToArgName),
        AssignInput = [
            raw_target_code(AssignToArgName, []),
            target_code_input(ArgRval),
            raw_target_code(";\n", [])
        ]
    ;
        % For foreign types,
        % we need to call MR_MAYBE_UNBOX_FOREIGN_TYPE
        % XXX not if can_pass_as_mercury_type is set
        AssignInput = [
            raw_target_code("\tMR_MAYBE_UNBOX_FOREIGN_TYPE("
                ++ TypeString ++ ", ", []),
            target_code_input(ArgRval),
            raw_target_code(", " ++ ArgName ++ ");\n", [])
        ]
    ).

:- pred ml_gen_pragma_java_output_arg_list(foreign_language::in,
    list(foreign_arg)::in, prog_context::in, statements::out,
    mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_java_output_arg_list(_, [], _, [], [], [], !Info).
ml_gen_pragma_java_output_arg_list(Lang, [Java_Arg | Java_Args], Context,
        Statements, ConvDecls, ConvStatements, !Info) :-
    ml_gen_pragma_java_output_arg(Lang, Java_Arg, Context, Statements1,
        ConvDecls1, ConvStatements1, !Info),
    ml_gen_pragma_java_output_arg_list(Lang, Java_Args, Context,
        Statements2, ConvDecls2, ConvStatements2, !Info),
    Statements = Statements1 ++ Statements2,
    ConvDecls = ConvDecls1 ++ ConvDecls2,
    ConvStatements = ConvStatements1 ++ ConvStatements2.

    % ml_gen_pragma_java_output_arg generates MLDS statements to assign the
    % value of an output arg for a `pragma foreign_proc' declaration.
    %
:- pred ml_gen_pragma_java_output_arg(foreign_language::in,
    foreign_arg::in, prog_context::in, statements::out,
    mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_java_output_arg(_Lang, ForeignArg, Context, AssignOutput,
        ConvDecls, ConvOutputStatements, !Info) :-
    ForeignArg = foreign_arg(Var, MaybeNameAndMode, OrigType, BoxPolicy),
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    (
        MaybeNameAndMode = yes(ArgName - Mode),
        not var_is_singleton(ArgName),
        check_dummy_type(ModuleInfo, OrigType) = is_not_dummy_type,
        mode_to_arg_mode(ModuleInfo, Mode, OrigType, top_out)
    ->
        % Create a target lval with the right type for *internal* use in the
        % code generated by the Mercury compiler's MLDS back-end.
        ml_variable_type(!.Info, Var, VarType),
        ml_gen_var(!.Info, Var, VarLval),
        ml_gen_box_or_unbox_lval(VarType, OrigType, BoxPolicy,
            VarLval, mlds_var_name(ArgName, no), Context, no, 0,
            ArgLval, ConvDecls, _ConvInputStatements,
            ConvOutputStatements, !Info),
        % This is the MLDS type of the original argument, which we need to
        % cast the local (Java) representation of the argument back to.
        MLDSType = mercury_type_to_mlds_type(ModuleInfo, OrigType),
        % Construct an MLDS lval for the local Java representation
        % of the argument.
        module_info_get_name(ModuleInfo, ModuleName),
        MLDSModuleName = mercury_module_name_to_mlds(ModuleName),
        NonMangledVarName = mlds_var_name(ArgName, no),
        QualLocalVarName = qual(MLDSModuleName, module_qual,
            NonMangledVarName),
        % XXX MLDSType is the incorrect type for this variable.
        % It should have the Java foreign language representation
        % of that type. Unfortunately this is not easily expressed
        % as an mlds_type.
        LocalVarLval = var(QualLocalVarName, MLDSType),
        % We cast this variable back to the corresponding
        % MLDS type before assigning it to the lval.
        Rval = unop(cast(MLDSType), lval(LocalVarLval)),
        AssignOutput = [ml_gen_assign(ArgLval, Rval, Context)]
    ;
        % If the variable doesn't occur in the ArgNames list,
        % it can't be used, so we just ignore it.
        AssignOutput = [],
        ConvDecls = [],
        ConvOutputStatements = []
    ).

:- pred ml_gen_pragma_c_output_arg_list(foreign_language::in,
    list(foreign_arg)::in, prog_context::in,
    list(target_code_component)::out, mlds_defns::out,
    statements::out, ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_c_output_arg_list(_, [], _, [], [], [], !Info).
ml_gen_pragma_c_output_arg_list(Lang, [ForeignArg | ForeignArgs], Context,
        Components, ConvDecls, ConvStatements, !Info) :-
    ml_gen_pragma_c_output_arg(Lang, ForeignArg, Context, Components1,
        ConvDecls1, ConvStatements1, !Info),
    ml_gen_pragma_c_output_arg_list(Lang, ForeignArgs, Context,
        Components2, ConvDecls2, ConvStatements2, !Info),
    Components = Components1 ++ Components2,
    ConvDecls = ConvDecls1 ++ ConvDecls2,
    ConvStatements = ConvStatements1 ++ ConvStatements2.

    % ml_gen_pragma_c_output_arg generates C code to assign the value of
    % an output arg for a `pragma foreign_proc' declaration.
    %
:- pred ml_gen_pragma_c_output_arg(foreign_language::in, foreign_arg::in,
    prog_context::in, list(target_code_component)::out,
    mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_c_output_arg(Lang, Arg, Context, AssignOutput, ConvDecls,
        ConvOutputStatements, !Info) :-
    Arg = foreign_arg(Var, MaybeNameAndMode, OrigType, BoxPolicy),
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    (
        MaybeNameAndMode = yes(ArgName - Mode),
        not var_is_singleton(ArgName),
        check_dummy_type(ModuleInfo, OrigType) = is_not_dummy_type,
        mode_to_arg_mode(ModuleInfo, Mode, OrigType, top_out)
    ->
        ml_gen_pragma_c_gen_output_arg(Lang, Var, ArgName, OrigType, BoxPolicy,
            Context, AssignOutput, ConvDecls, ConvOutputStatements, !Info)
    ;
        % If the variable doesn't occur in the ArgNames list,
        % it can't be used, so we just ignore it.
        AssignOutput = [],
        ConvDecls = [],
        ConvOutputStatements = []
    ).

:- pred ml_gen_pragma_c_gen_output_arg(foreign_language::in, prog_var::in,
    string::in, mer_type::in, box_policy::in, prog_context::in,
    list(target_code_component)::out, mlds_defns::out,
    statements::out, ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_pragma_c_gen_output_arg(Lang, Var, ArgName, OrigType, BoxPolicy,
        Context, AssignOutput, ConvDecls, ConvOutputStatements, !Info) :-
    ml_variable_type(!.Info, Var, VarType),
    ml_gen_var(!.Info, Var, VarLval),
    ml_gen_box_or_unbox_lval(VarType, OrigType, BoxPolicy, VarLval,
        mlds_var_name(ArgName, no), Context, no, 0, ArgLval,
        ConvDecls, _ConvInputStatements, ConvOutputStatements, !Info),
    % At this point we have an lval with the right type for *internal* use
    % in the code generated by the Mercury compiler's MLDS back-end. We need
    % to convert this to the appropriate type to use for the C interface.
    ml_gen_info_get_module_info(!.Info, ModuleInfo),
    ExportedType = foreign.to_exported_type(ModuleInfo, OrigType),
    TypeString = exported_type_to_string(Lang, ExportedType),
    IsForeign = foreign.is_foreign_type(ExportedType),
    (
        (
            Lang = lang_java,
            IsForeign = no,
            Cast = no
        ;
            Lang = lang_c,
            IsForeign = no,
            Cast = no
        ;
            Lang = lang_c,
            IsForeign = yes(Assertions),
            list.member(foreign_type_can_pass_as_mercury_type, Assertions),
            Cast = yes
        )
    ->
        % In the usual case, we can just use an assignment,
        % perhaps with a cast.
        module_info_get_globals(ModuleInfo, Globals),
        globals.lookup_bool_option(Globals, highlevel_data,
            HighLevelData),
        (
            HighLevelData = yes,
            % In general, the types used for the C interface are not the same
            % as the types used by --high-level-data, so we always use a cast
            % here. (Strictly speaking the cast is not needed for a few cases
            % like `int', but it doesn't do any harm.) Note that we can't
            % easily obtain the type string for the RHS of the assignment,
            % so instead we cast the LHS.
            string.format("*(%s *)&", [s(TypeString)], LHS_Cast),
            RHS_Cast = ""
        ;
            HighLevelData = no,
            % For --no-high-level-data, we only need to use a cast is for
            % polymorphic types, which are `MR_Word' in the C interface but
            % `MR_Box' in the MLDS back-end.
            (
                ( OrigType = type_variable(_, _)
                ; Cast = yes
                )
            ->
                RHS_Cast = "(MR_Box) "
            ;
                RHS_Cast = ""
            ),
            LHS_Cast = ""
        ),
        string.format(" = %s%s;\n", [s(RHS_Cast), s(ArgName)],
            AssignFromArgName),
        string.format("\t%s ", [s(LHS_Cast)], AssignTo),
        AssignOutput = [
            raw_target_code(AssignTo, []),
            target_code_output(ArgLval),
            raw_target_code(AssignFromArgName, [])
        ]
    ;
        % For foreign types, we need to call MR_MAYBE_BOX_FOREIGN_TYPE.
        AssignOutput = [
            raw_target_code("\tMR_MAYBE_BOX_FOREIGN_TYPE("
                ++ TypeString ++ ", " ++ ArgName ++ ", ", []),
            target_code_output(ArgLval),
            raw_target_code(");\n", [])
        ]
    ).

%-----------------------------------------------------------------------------%
%
% Code for if-then-else
%

:- pred ml_gen_ite(code_model::in, hlds_goal::in, hlds_goal::in, hlds_goal::in,
    prog_context::in, mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_ite(CodeModel, Cond, Then, Else, Context, Decls, Statements, !Info) :-
    Cond = hlds_goal(_, CondGoalInfo),
    CondCodeModel = goal_info_get_code_model(CondGoalInfo),
    (
        %   model_det Cond:
        %       <(Cond -> Then ; Else)>
        %   ===>
        %       <Cond>
        %       <Then>

        CondCodeModel = model_det,
        ml_gen_goal_as_block(model_det, Cond, CondStatement, !Info),
        ml_gen_goal_as_block(CodeModel, Then, ThenStatement, !Info),
        Decls = [],
        Statements = [CondStatement, ThenStatement]
    ;
        %   model_semi cond:
        %       <(Cond -> Then ; Else)>
        %   ===>
        %       MR_bool succeeded;
        %
        %       <succeeded = Cond>
        %       if (succeeded) {
        %           <Then>
        %       } else {
        %           <Else>
        %       }

        CondCodeModel = model_semi,
        ml_gen_goal(model_semi, Cond, CondDecls, CondStatements, !Info),
        ml_gen_test_success(!.Info, Succeeded),
        ml_gen_goal_as_block(CodeModel, Then, ThenStatement, !Info),
        ml_gen_goal_as_block(CodeModel, Else, ElseStatement, !Info),
        IfStmt = ml_stmt_if_then_else(Succeeded, ThenStatement,
            yes(ElseStatement)),
        IfStatement = statement(IfStmt, mlds_make_context(Context)),
        Decls = CondDecls,
        Statements = CondStatements ++ [IfStatement]
    ;
        % XXX The following transformation does not do as good a job of GC
        % as it could. Ideally we ought to ensure that stuff used only
        % in the `Else' part will be reclaimed if a GC occurs during the `Then'
        % part. But that is a bit tricky to achieve.
        %
        %   model_non cond:
        %       <(Cond -> Then ; Else)>
        %   ===>
        %       MR_bool cond_<N>;
        %
        %       void then_func() {
        %           cond_<N> = MR_TRUE;
        %           <Then>
        %       }
        %
        %       cond_<N> = MR_FALSE;
        %       <Cond && then_func()>
        %       if (!cond_<N>) {
        %           <Else>
        %       }
        %
        % except that we hoist any declarations generated for <Cond> to the top
        % of the scope, so that they are in scope for the <Then> goal (this
        % is needed for declarations of static consts)

        CondCodeModel = model_non,

        % Generate the `cond_<N>' var and the code to initialize it to false.
        ml_gen_info_new_cond_var(CondVar, !Info),
        MLDS_Context = mlds_make_context(Context),
        CondVarDecl = ml_gen_cond_var_decl(CondVar, MLDS_Context),
        ml_gen_set_cond_var(!.Info, CondVar, const(mlconst_false), Context,
            SetCondFalse),

        % Allocate a name for the `then_func'.
        ml_gen_new_func_label(no, ThenFuncLabel, ThenFuncLabelRval, !Info),

        % Generate <Cond && then_func()>.
        ml_get_env_ptr(!.Info, EnvPtrRval),
        SuccessCont = success_cont(ThenFuncLabelRval, EnvPtrRval, [], []),
        ml_gen_info_push_success_cont(SuccessCont, !Info),
        ml_gen_goal(model_non, Cond, CondDecls, CondStatements, !Info),
        ml_gen_info_pop_success_cont(!Info),

        % Generate the `then_func'.
        % push nesting level
        Then = hlds_goal(_, ThenGoalInfo),
        ThenContext = goal_info_get_context(ThenGoalInfo),
        ml_gen_set_cond_var(!.Info, CondVar, const(mlconst_true), ThenContext,
            SetCondTrue),
        ml_gen_goal_as_block(CodeModel, Then, ThenStatement, !Info),
        ThenFuncBody = ml_gen_block([], [SetCondTrue, ThenStatement],
            ThenContext),
        % pop nesting level
        ml_gen_nondet_label_func(!.Info, ThenFuncLabel, ThenContext,
            ThenFuncBody, ThenFunc),

        % Generate `if (!cond_<N>) { <Else> }'.
        ml_gen_test_cond_var(!.Info, CondVar, CondSucceeded),
        ml_gen_goal_as_block(CodeModel, Else, ElseStatement, !Info),
        IfStmt = ml_stmt_if_then_else(
            unop(std_unop(logical_not), CondSucceeded),
            ElseStatement, no),
        IfStatement = statement(IfStmt, MLDS_Context),

        % Package it all up in the right order.
        Decls = [CondVarDecl | CondDecls] ++ [ThenFunc],
        Statements = [SetCondFalse | CondStatements] ++ [IfStatement]
    ).

%-----------------------------------------------------------------------------%
%
% Code for negation
%

:- pred ml_gen_negation(hlds_goal::in, code_model::in, prog_context::in,
    mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_negation(Cond, CodeModel, Context, Decls, Statements, !Info) :-
    Cond = hlds_goal(_, CondGoalInfo),
    CondCodeModel = goal_info_get_code_model(CondGoalInfo),
    (
        % model_det negation:
        %       <not(Goal)>
        %   ===>
        %   {
        %       MR_bool succeeded;
        %       <succeeded = Goal>
        %       /* now ignore the value of succeeded,
        %        which we know will be MR_FALSE */
        %   }

        CodeModel = model_det,
        ml_gen_goal(model_semi, Cond, Decls, Statements, !Info)
    ;
        % model_semi negation, model_det goal:
        %       <succeeded = not(Goal)>
        %   ===>
        %       <do Goal>
        %       succeeded = MR_FALSE;

        CodeModel = model_semi, CondCodeModel = model_det,
        ml_gen_goal(model_det, Cond, CondDecls, CondStatements, !Info),
        ml_gen_set_success(!.Info, const(mlconst_false), Context,
            SetSuccessFalse),
        Decls = CondDecls,
        Statements = list.append(CondStatements, [SetSuccessFalse])
    ;
        % model_semi negation, model_semi goal:
        %       <succeeded = not(Goal)>
        %   ===>
        %       <succeeded = Goal>
        %       succeeded = !succeeded;

        CodeModel = model_semi, CondCodeModel = model_semi,
        ml_gen_goal(model_semi, Cond, CondDecls, CondStatements, !Info),
        ml_gen_test_success(!.Info, Succeeded),
        ml_gen_set_success(!.Info, unop(std_unop(logical_not), Succeeded),
            Context, InvertSuccess),
        Decls = CondDecls,
        Statements = list.append(CondStatements, [InvertSuccess])
    ;
        CodeModel = model_semi, CondCodeModel = model_non,
        unexpected(this_file, "ml_gen_negation: nondet cond")
    ;
        CodeModel = model_non,
        unexpected(this_file, "ml_gen_negation: nondet negation")
    ).

%-----------------------------------------------------------------------------%
%
% Code for conjunctions
%

:- pred ml_gen_conj(hlds_goals::in, code_model::in, prog_context::in,
    mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_conj([], CodeModel, Context, [], Statements, !Info) :-
    ml_gen_success(CodeModel, Context, Statements, !Info).
ml_gen_conj([SingleGoal], CodeModel, _Context, Decls, Statements, !Info) :-
    ml_gen_goal(CodeModel, SingleGoal, Decls, Statements, !Info).
ml_gen_conj([First | Rest], CodeModel, Context, Decls, Statements, !Info) :-
    Rest = [_ | _],
    First = hlds_goal(_, FirstGoalInfo),
    FirstDeterminism = goal_info_get_determinism(FirstGoalInfo),
    ( determinism_components(FirstDeterminism, _, at_most_zero) ->
        % the `Rest' code is unreachable
        ml_gen_goal(CodeModel, First, Decls, Statements, !Info)
    ;
        determinism_to_code_model(FirstDeterminism, FirstCodeModel),
        DoGenFirst = ml_gen_goal(FirstCodeModel, First),
        DoGenRest = ml_gen_conj(Rest, CodeModel, Context),
        ml_combine_conj(FirstCodeModel, Context, DoGenFirst, DoGenRest,
            Decls, Statements, !Info)
    ).

%-----------------------------------------------------------------------------%
%
% Code for disjunctions
%

:- pred ml_gen_disj(hlds_goals::in, code_model::in, prog_context::in,
    mlds_defns::out, statements::out,
    ml_gen_info::in, ml_gen_info::out) is det.

ml_gen_disj([], CodeModel, Context, [], Statements, !Info) :-
    % Handle empty disjunctions (a.ka. `fail').
    ml_gen_failure(CodeModel, Context, Statements, !Info).

ml_gen_disj([SingleGoal], CodeModel, Context, [], [Statement], !Info) :-
    % Handle singleton disjunctions.
    % (The HLDS should not contain singleton disjunctions, but this code
    % is needed to handle recursive calls to ml_gen_disj).
    % Note that each arm of the model_non disjunction is placed into a block.
    % This avoids a problem where ml_join_decls can create block nesting
    % proportional to the size of the disjunction. The nesting can hit fixed
    % limit problems in some C compilers.
    ml_gen_goal(CodeModel, SingleGoal, Goal_Decls, Goal_Statements, !Info),
    Statement = ml_gen_block(Goal_Decls, Goal_Statements, Context).

ml_gen_disj([First | Rest], CodeModel, Context, Decls, Statements, !Info) :-
    Rest = [_ | _],
    (
        CodeModel = model_non,
        % model_non disj:
        %
        %       <(Goal ; Goals) && SUCCEED()>
        %   ===>
        %       <Goal && SUCCEED()>
        %       <Goals && SUCCEED()>

        ml_gen_goal(model_non, First, FirstDecls, FirstStatements, !Info),
        ml_gen_disj(Rest, model_non, Context, RestDecls, RestStatements,
            !Info),
        (
            RestDecls = [],
            FirstBlock = ml_gen_block(FirstDecls, FirstStatements, Context),
            Decls = [],
            Statements = [FirstBlock | RestStatements]
        ;
            RestDecls = [_ | _],
            unexpected(this_file, "ml_gen_disj: RestDecls not empty.")
        )

    ;
        ( CodeModel = model_det
        ; CodeModel = model_semi
        ),
        % model_det/model_semi disj:
        %
        %   model_det goal:
        %       <Goal ; Goals>
        %   ===>
        %       <Goal>
        %       /* <Goals> will never be reached */
        %
        %   model_semi goal:
        %       <Goal ; Goals>
        %   ===>
        %   {
        %       MR_bool succeeded;
        %
        %       <succeeded = Goal>;
        %       if (!succeeded) {
        %           <Goals>;
        %       }
        %   }

        First = hlds_goal(_, FirstGoalInfo),
        FirstCodeModel = goal_info_get_code_model(FirstGoalInfo),
        (
            FirstCodeModel = model_det,
            ml_gen_goal(model_det, First, Decls, Statements, !Info)
        ;
            FirstCodeModel = model_semi,
            ml_gen_goal(model_semi, First, FirstDecls, FirstStatements, !Info),
            ml_gen_test_success(!.Info, Succeeded),
            ml_gen_disj(Rest, CodeModel, Context,
                RestDecls, RestStatements, !Info),
            RestStatement = ml_gen_block(RestDecls, RestStatements, Context),
            IfStmt = ml_stmt_if_then_else(
                unop(std_unop(logical_not), Succeeded), RestStatement, no),
            IfStatement = statement(IfStmt, mlds_make_context(Context)),
            Decls = FirstDecls,
            Statements = FirstStatements ++ [IfStatement]
        ;
            FirstCodeModel = model_non,
            % simplify.m should get wrap commits around these.
            unexpected(this_file, "model_non disj in model_det disjunction")
        )
    ).

%-----------------------------------------------------------------------------%
%
% Code for handling attributes
%

:- func attributes_to_mlds_attributes(module_info, list(hlds_pred.attribute))
    = list(mlds_attribute).

attributes_to_mlds_attributes(ModuleInfo, Attrs) =
    list.map(attribute_to_mlds_attribute(ModuleInfo), Attrs).

:- func attribute_to_mlds_attribute(module_info, hlds_pred.attribute)
    = mlds_attribute.

attribute_to_mlds_attribute(ModuleInfo, custom(Type)) =
    custom(mercury_type_to_mlds_type(ModuleInfo, Type)).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "ml_code_gen.m".

%-----------------------------------------------------------------------------%
:- end_module ml_code_gen.
%-----------------------------------------------------------------------------%
