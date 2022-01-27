%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1999-2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: mlds.m.
% Main author: fjh.
%
% MLDS - The Medium-Level Data Structure.
%
% This module defines the MLDS data structure itself.
% The MLDS is an intermediate data structure used in compilation;
% we compile Mercury source -> parse tree -> HLDS -> MLDS -> target (e.g. C).
% See notes/compiler_design.html for more information about the MLDS & LLDS.
%
% The MLDS is intended to be suitable for generating target code in
% languages such as Java, Java bytecode, high-level C, C++, or C--, etc.
% This is as opposed to the LLDS, which is better suited for generating
% assembler or the very low-level C or GNU C (lower level than C--) that
% the original Mercury compiler backend generates.  In the LLDS, we are
% doing all our own register allocation and stack manipulation, but with
% MLDS, those tasks are the responsibility of the target.
% The one really important simplification that we do make relative to the
% HLDS is that MLDS does not have any support for non-determinism, so the
% HLDS->MLDS compiler must compile non-deterministic code into code that
% uses continuation passing.
%
% The MLDS data structure is quite full-featured, including for example
% support for arbitrary nesting, multiple return values, and tagged pointers.
% However, many
% of the intended target languages don't support all of those features.
% Therefore the HLDS->MLDS compiler must ensure that the final MLDS code that
% it eventually generates does not use features which the target does not
% support.  This will (presumably) be accomplished by having handle_options.m
% set various flags according to the selected target, and having the
% HLDS->MLDS compiler take account of those flags and either generate simpler
% MLDS code in the first place or run some extra simplification passes over
% the MLDS code before invoking the MLDS->target compiler.
%
%-----------------------------------------------------------------------------%
%
% Mapping Mercury names to MLDS names
%
%
% 1. Modules
%
% Mercury module names map directly to MLDS package names, except that
% modules in the Mercury standard library map get a `mercury' prefix,
% e.g. `mercury.builtin', `mercury.io', `mercury.univ', etc.
% [Rationale: omitting the `mercury' prefix would lead to namespace
% pollution in the generated target language code.]
%
% 2. Procedure names
%
% HLDS procedure names map directly to MLDS function names.
% MLDS function names are structured terms that include sufficient
% information (arity, pred_or_func indicator, mode number, etc.)
% to avoid any ambiguities.
%
% [Rationale: the reason for keeping structured names rather than flattened
% names at the MLDS level is that we don't want to do name mangling at
% the HLDS -> MLDS stage, since we don't know what restrictions the target
% language will impose.  For example, some target languages (e.g. C++, Java)
% will support overloading, while others (e.g. C) will not.]
%
% 3. Procedure signatures
%
% MLDS function signatures are determined by the HLDS procedure's
% argument types, modes, and determinism.
% Procedures arguments with type `io.state' or `store(_)' are not passed.
% Procedure arguments with top_unused modes are not passed.
% Procedures arguments with top_in modes are passed as input.
% Procedures arguments with top_out modes are normally passed by reference.
% However, several alternative approaches are also supported (see below).
%
% Procedures with determinism model_det need no special handling.
% Procedures with determinism model_semi must return a boolean.
% Procedures with determinism model_non get passed a continuation;
% if the procedure succeeds, it must call the continuation, and if
% it fails, it must return.
%
% With the `--copy-out' option, arguments with top_out modes will be returned
% by value.  This requires the target language to support multiple return
% values.  The MLDS->target code generator can of course handle that by mapping
% functions with multiple return values into functions that return a struct,
% array, or tuple.
% With the `--nondet-copy-out' option, arguments for nondet procedures with
% top_out modes will be passed as arguments to the continuation.
%
% [Rationale: this mapping is designed to be as simple as possible,
% and to map as naturally to the target language as possible.
% The complication with the `--copy-out' and `--nondet-copy-out'
% options is needed to cater to different target languages.
% Some target languages (e.g. C) fully support pass-by-reference,
% and then it is most consistent to use it everywhere.
% Some (e.g. IL) support pass-by-reference, but don't allow references
% to be stored in the environment structs needed for continuations,
% and so can't use pass-by-reference for nondet procedures.
% Others (e.g. Java) don't support pass-by-reference at all.]
%
% 4. Variables
%
% MLDS variable names are determined by the HLDS variable name and
% (in some cases, to avoid ambiguity) variable number.  The MLDS
% variable name is a structured term that keeps the original variable
% name separate from the distinguishing variable number.
% It is up to each individual backend to mangle the variable name
% and number to avoid ambiguity where necessary.
% All references to MLDS variables must however be fully qualified
% with the name of the enclosing entity that defines them.
%
% [Rationale: the reason for keeping structured names rather than
% mangled names at the MLDS level is that in some cases the mangling is
% undesirable, as the original HLDS variable names are what is required
% (for instance, when interfacing with foreign code which includes
% references to the original HLDS variable names).]
%
% 5. Global data
%
% MLDS names for global data are structured; they hold some
% information about the kind of global data (see the mlds_data_name type).
%
% It's not clear whether this is actually useful.
% And we're not completely consistent about applying this approach.
% Many of the passes which create global data items do not actually
% generate structured names, but instead just generate var/1 names
% where the variable name already contains some mangling to ensure uniqueness.
% Examples of this include "string_table" and "next_slots_table" (for
% string switches), "float_*" (boxed floating point constants),
% and "obj_*" (reserved objects, for representing constants in
% discriminated union types).
%
% 6. Types
%
% If there is an MLDS type corresponding to a Mercury type, then
% the Mercury type name maps directly to the MLDS type name,
% suitably module-qualified of course.
% The MLDS type name includes the type arity (arity overloading is allowed).
% However, if a low-level data representation scheme is used,
% then some Mercury types may not have corresponding MLDS type names
% (that is, the corresponding MLDS type may be just `MR_Word' or its
% equivalent).
%
% 7.  Data constructors.
%
% With --high-level-data, Mercury data constructors normally get mapped to
% MLDS types nested within the MLDS type for the Mercury data type to which
% the constructors belong.  There are some exceptions; see ml_type_gen.m
% for full details.  The MLDS type name includes the constructor arity.
% [Rationale: Mercury allows data constructors to be overloaded on
% their result type within a single module, and also allows them
% to be overloaded on arity within a single type.  Nesting resolves
% the first problem, and keeping the arity in the MLDS type name
% resolves the second.]
% XXX There is a problem in the Java back-end with Mercury types for which
% the constructor name is the same as the type name.
%
% XXX Also need to think about equivalence types and no_tag types.
%
% XXX There are problems with the RTTI definitions for the Java back-end.
% Under the current system, the definitions are output as static variables
% with static initializers, ordered so that subdefinitions always appear before
% the definition which uses them.  This is neccessary because in Java, static
% initializers are performed at runtime in textual order, and if a definition
% relies on another static variable for its constructor but said variable has
% not been initialized, then it is treated as `null' by the JVM with no
% warning.
% The problem with this approach is that it won't work for cyclic definitions.
% eg:
%       :- type foo ---> f(bar) ; g.
%       :- type bar ---> f2(foo) ; g2
% At some point this should be changed so that initialization is performed by 2
% phases: first allocate all of the objects, then fill in the fields.
%
% 8.  Insts and modes
%
% Inst and mode definitions do not get translated into MLDS.
%
% [Inst and mode definitions do however affect the signatures of the
% MLDS functions used to implement each procedure.]
%
% 9. Type classes.
%
% Currently type classes are handled early and at a fairly low level.
% It's not yet clear how easy it will be to convert this to MLDS.
% It may depend to some degree on the target language.
% But if it is possible, then when it is done the target language
% generator will be able to ignore the issue of type classes.
%
% For language interoperability, however, it might be nice if the
% translation were done at higher level.
%
% Mercury type classes should map directly to MLDS interfaces.
%
% Mercury instance definitions should map to classes which implement the
% corresponding interface.  Note that if there is an instance declaration
% `:- instance foo(bar)', then the MLDS type for `bar' will *not* implement
% the MLDS interface for `foo' -- instead, there will be a new MLDS type
% for `instance foo(bar)' which implements that interface.
%
%-----------------------------------------------------------------------------%
%
% Mapping MLDS names to the target language
%
%
% Ultimately the exact choice of how MLDS names are mapped to
% the target language is up to the target language generator.
% So the remarks here are just guidelines, not strict rules.
%
% 1. Names.
%
% If the target language has standard conventions about certain categories
% of names beginning with uppercase or lowercase letters, then the target
% language generator should generate names that respect those conventions.
%
% An MLDS name may contain arbitrary characters.
% If the target language has restrictions on what names can be used
% in identifiers, then it is the responsibility of the target language
% generator to mangle MLDS names accordingly to ensure that they abide
% by those restrictions.
%
% 2. Packages.
%
% MLDS packages should be mapped directly to the corresponding notion
% in the target language, if possible.
% If the target doesn't have a notion of packages, then they should be
% mapped to names of the form "foo.bar.baz" or if dots are not allowed
% then to "foo__bar__baz".
%
% 3. Overloading.
%
% If the target does not support overloading, then any Mercury names which
% are overloaded within a single Mercury module must be qualified to avoid
% ambiguity.  However, Mercury names which are not overloaded should not
% be qualified.  If a name is overloaded but occurs only once in the module's
% interface then the version in the interface should not be qualified.
% The arity-zero version of type should not be arity-qualified
% unless this would cause ambiguity with an unqualified name generated by
% the previous rule.  Likewise, the arity-zero version of function
% (i.e. a constant) should not be function-qualified or arity-qualified
% unless this would cause ambiguity with an unqualified name generated
% the aforementioned rule.
% The first mode of a predicate should not be mode-qualified.
%
% [Rationale: name mangling should be avoided where possible, because
% this makes it easier for the user to interoperate with other languages
% and to use tools which do not properly demangle Mercury names.]
%
% 4. Procedures.
%
% If a procedure name needs to be qualified, the qualification should be
% done by appending "_f" for functions or "_p" for predicates,
% optionally followed by the arity,
% optionally followed by an underscore and then the mode number,
% optionally followed by "_i" and then the MLDS function sequence number
% (for internal MLDS functions, used e.g. to implement backtracking).
%
% [Rationale: any qualifiers should go at the end of a name, so that
% command-line completion works even for mangled names (and hopefully
% even shows all the possible alternatives...).]
%
% To avoid ambiguity as to whether a name is qualified or not,
% any procedures whose unqualified name matches the pattern for qualified
% names, i.e. the regular expression `.*_[fp][0-9]*(_[0-9]+)?(_i[0-9]+)?',
% should always be qualified (even if not overloaded).
%
% 5. Types.
%
% If a type name needs to be qualified, the qualification should be
% done by appending an underscore followed by the arity.
%
% To avoid ambiguity as to whether a name is qualified or not,
% any types whose unqualified name matches the pattern for qualified
% names, i.e. the regular expression `.*_[0-9]+',
% should always be qualified (even if not overloaded).
%
%-----------------------------------------------------------------------------%
%
% Notes on garbage collection and liveness.
%
%
% "Liveness-accurate GC" is GC in which the collector does not trace local
% variables which are definitely not live according to a straight-forward
% static analysis of definite-deadness/possible-liveness.  Liveness-accurate
% GC is desirable, in general, since tracing through variables which are
% no longer live may lead to excessive memory retention for some programs.
% However these programs are relatively rare, so liveness-accurate GC
% is not always worth the extra complication.
%
% The MLDS is therefore designed to optionally support liveness-accurate
% GC, if the target language supports it.  If liveness-accurate GC is
% supported and enabled, then it is the responsibility of the target
% language implementation to do whatever is needed to avoid having the GC
% trace variables which have gone out of scope.
%
% That means that to support liveness-accurate the HLDS->MLDS code
% generator just needs to cover the cases where a straight-forward liveness
% calculation on the generated MLDS does not match up with the desired
% result of a straight-forward liveness calculation on the HLDS.  That is,
% the HLDS->MLDS code generator must generate code to clobber variables
% which are no longer live according to a straight-forward liveness
% calculation on the HLDS but which have not gone out of scope in
% the generated MLDS.  For example, with our current HLDS->MLDS code
% generation scheme, this is the case for variables in the `else' of a
% nondet if-then-else once the `then' has been entered.
% (XXX Currently ml_code_gen.m does _not_ clobber those variables, though.)
%
% The rationale for leaving most of the responsibility for liveness-accurate
% GC up to the MLDS back-end is as follows: at very least we need the
% target language implementation's _cooperation_, since if the MLDS code
% generator inserts statements to clobber variables that are no longer live,
% then an uncooperative target language implementation could just optimize
% them away, since they are assignments to dead variables.  Given this need
% for the MLDS target back-end's cooperation, it makes sense to assign as
% much of the responsibily for this task as is possible to the MLDS target
% back-end, to keep the front-end simple and to keep the responsibility
% for this task in one place.
%
% But in cases such as nondet if-then-else, where HLDS-liveness does not
% match MLDS-liveness, we can't just leave it to the MLDS target back-end,
% because that would require assuming an unreasonably smart liveness
% calculation in the MLDS target back-end, so in such cases we do need
% to handle it in the HLDS->MLDS code generator.
%
%-----------------------------------------------------------------------------%

:- module ml_backend.mlds.
:- interface.

:- import_module backend_libs.builtin_ops.
:- import_module backend_libs.foreign.
:- import_module backend_libs.rtti.
:- import_module hlds.code_model.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.
:- import_module libs.globals.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.sym_name.
:- import_module ml_backend.ml_global_data.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_foreign.
:- import_module parse_tree.prog_type.

:- import_module bool.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module set.

%-----------------------------------------------------------------------------%

:- type mercury_module_name == sym_name.module_name.

%
% The type `mlds' is the actual MLDS.
% XXX we ought to make this type abstract
%
:- type mlds
    --->    mlds(
                % The original Mercury module name.
                mlds_name               :: mercury_module_name,

                % Code defined in some other language, e.g.  for
                % `pragma foreign_decl', etc.
                mlds_foreign_code_map   :: map(foreign_language,
                                            mlds_foreign_code),

                % The MLDS code itself.

                % Packages/classes to import
                mlds_toplevel_imports   :: mlds_imports,

                mlds_global_defns       :: ml_global_data,

                % Definitions of code and non-global data.
                % XXX Is there any non-global data?
                mlds_defns              :: list(mlds_defn),

                % The names of init and final preds.
                mlds_init_preds         :: list(string),
                mlds_final_preds        :: list(string),

                mlds_exported_enums     :: list(mlds_exported_enum)
            ).

:- func mlds_get_module_name(mlds) = mercury_module_name.

:- type mlds_imports == list(mlds_import).

    % For the C backend, we generate a `.mh' file containing the
    % prototypes for C functions generated for `:- pragma foreign_export'
    % declarations, and a `.mih' file containing the prototypes
    % for the C functions generated by the compiler which should
    % not be visible to the user.
    %
    % For languages which don't support multiple interfaces, it's
    % probably OK to put everything in the compiler-visible interface.
:- type mercury_mlds_import_type
    --->    user_visible_interface
    ;       compiler_visible_interface.

    % An mlds_import specifies  FIXME
    % Currently an import just gives the name of the package to be imported.
    % This might perhaps need to be expanded to cater to different kinds of
    % imports, e.g. imports with wild-cards ("import java.lang.*").
:- type mlds_import
    --->    mercury_import(
                mercury_mlds_import_type    :: mercury_mlds_import_type,
                import_name                 :: mlds_module_name
            )
    ;       foreign_import(
                foreign_import_name         :: foreign_import_name
            ).

:- type foreign_import_name
    --->    il_assembly_name(mlds_module_name).

    % An mlds_module_name specifies the name of an mlds package or class.
    % XXX This is wrongly named as it is also used for class names.
    %
:- type mlds_module_name.

    % An mlds_package_name specifies the name of an mlds package.
    % XXX This is wrongly named as it is used for module names in the Java
    % backend.
    %
:- type mlds_package_name == mlds_module_name.

    % Given the name of a Mercury module, return the name of the corresponding
    % MLDS package in which this module is defined.
    %
:- func mercury_module_name_to_mlds(mercury_module_name) = mlds_module_name.

    % Given the name of a Mercury module, and a package name, return the
    % name of the corresponding MLDS module name in which this module is
    % defined.
    % In this case, the package is specified as the first parameter (c.f.
    % mercury_module_name_to_mlds above).
    %
:- func mercury_module_and_package_name_to_mlds(mercury_module_name,
    mercury_module_name) = mlds_module_name.

    % Given the name of a Mercury module return the fully qualified module
    % name, e.g. for the name System.Object which is defined in the source
    % package mscorlib, it will return System.Object.
    %
:- func mlds_module_name_to_sym_name(mlds_package_name) = sym_name.

    % Give the name of a Mercury module, return the name of the corresponding
    % MLDS package.
    %
:- func mlds_module_name_to_package_name(mlds_module_name) = sym_name.

    % Is the current module a member of the std library,
    % and if so which module is it?
    %
:- pred is_std_lib_module(mlds_module_name::in, mercury_module_name::out)
    is semidet.

    % Given an MLDS module name (e.g. `foo.bar'), append another class
    % qualifier (e.g. for a class `baz'), and return the result (e.g.
    % `foo.bar.baz'). The `arity' argument specifies the arity of the class.
    % The qual_kind argument specifies the qualifier kind of the module_name
    % argument.
    %
:- func mlds_append_class_qualifier(compilation_target, mlds_module_name,
    mlds_qual_kind, mlds_class_name, arity) = mlds_module_name.

    % Append a wrapper class qualifier to the module name and leave the
    % package name unchanged.
    %
:- func mlds_append_wrapper_class(mlds_module_name) = mlds_module_name.

    % Append an arbitrary qualifier to the module name and leave the package
    % name unchanged.
    %
:- func mlds_append_name(mlds_module_name, string) = mlds_module_name.

    % When targetting languages such as IL, C#, and Java, which don't support
    % global methods or global variables, we need to wrap all the generated
    % global functions and global data inside a wrapper class. This function
    % returns the name to use for the wrapper class.
    %
:- func wrapper_class_name = string.

:- type mlds_defn
    --->    mlds_defn(
                % The name of the entity being declared.
                md_entity_name          :: mlds_entity_name,

                % The source location.
                md_context              :: mlds_context,

                % these contain the following:
                % access,               % public/private/protected
                % member_type,          % static/per_instance
                % virtuality,           % virtual/non_virtual
                % overridability,       % sealed/overridable (class/funcs only)
                % constness,            % const/modifiable  (data only)
                % is_abstract,          % abstract/concrete
                % etc.
                md_decl_flags           :: mlds_decl_flags,

                md_entity_defn          :: mlds_entity_defn
            ).

    % An mlds name may contain arbitrary characters.
    % If the target language has restrictions on what names can be used
    % in identifiers, then it is the responsibility of the target language
    % generator to mangle these names accordingly.
:- type mlds_qualified_entity_name
    ==  mlds_fully_qualified_name(mlds_entity_name).

:- type mlds_fully_qualified_name(T)
    --->    qual(mlds_module_name, mlds_qual_kind, T).

    % For the Java back-end, we need to distinguish between module qualifiers
    % and type qualifiers, because type names get the case of their initial
    % letter inverted (i.e. lowercase => uppercase).
    %
:- type mlds_qual_kind
    --->    module_qual
    ;       type_qual.

:- type mlds_entity_name
    --->    entity_type(mlds_class_name, arity)   % Name, arity.
    ;       entity_data(mlds_data_name)
    ;       entity_function(
                % Identifies the source code predicate or function.
                ef_pred_label       :: mlds_pred_label,

                ef_proc_id          :: proc_id,

                % A sequence number used to distinguish different MLDS
                % functions when compiling a single HLDS predicate into
                % multiple MLDS functions (e.g. to handle backtracking).
                ef_maybe_func_seq   :: maybe(mlds_func_sequence_num),

                % Specifies the HLDS pred_id.
                % This should generally not be needed much, since all the
                % necessary information should be in the mlds_pred_label
                % and/or in the mlds_entity_defn. However, the target
                % generator may want to refer to the HLDS for additional
                % information.
                ef_pred_id          :: pred_id
            )
    ;       entity_export(
                % A pragma foreign_export name.
                string
            ).

:- type mlds_func_sequence_num == int.

    % This specifies information about some entity being defined
    % The entity may be any of the following:
    %   constant or variable
    %   function
    %   class, including
    %       package (class with only static (one_copy) members)
    %       interface (abstract class, no data members)
    %       struct (value class)
    %       enum
    %
:- type mlds_entity_defn
    --->    mlds_data(
                % Represents a constant or variable.

                mlds_type,
                mlds_initializer,
                % If accurate GC is enabled, we associate with each variable
                % the code needed to initialise or trace that variable when
                % doing GC (in the compiler-generated gc trace functions).
                mlds_gc_statement
            )
    ;       mlds_function(
                % Represents functions.

                maybe(pred_proc_id),    % Identifies the original
                                        % Mercury procedure, if any.
                mlds_func_params,       % The arguments & return types.
                mlds_function_body,     % The function body.
                list(mlds_attribute),   % Attributes.
                set(string)             % The set of environment variables
                                        % referred to by the function body.
            )
    ;       mlds_class(
                % Represents packages, classes, interfaces, structs, enums.
                mlds_class_defn
            ).

    % If accurate GC is enabled, we associate with each variable
    % (including function parameters) the code needed to initialise
    % or trace that variable when doing GC (in the GC trace function).
    % `gc_no_stmt' here indicates that no code is needed (e.g. because
    % accurate GC isn't enabled, or because the variable can never
    % contain pointers to objects on the heap).
    % 'gc_trace_code' indicates that GC tracing code is required for the
    % variable.
    % 'gc_initialiser' indicates that the variable is a compiler-generated
    % variable that needs to be initialised before tracing the other
    % variables for the predicate (used when generating closures).
    %
:- type mlds_gc_statement
    --->    gc_trace_code(statement)
    ;       gc_initialiser(statement)
    ;       gc_no_stmt.

    % It is possible for the function to be defined externally
    % (i.e. the original Mercury procedure was declared `:- external').
    % (If you want to generate an abstract body consider adding another
    % alternative here).
    %
:- type mlds_function_body
    --->    body_defined_here(statement)
    ;       body_external.

    % Note that `one_copy' variables *must* have an initializer
    % (the GCC back-end relies on this).
    % XXX Currently we only record the type for structs.
    % We should do the same for objects and arrays.
    %
:- type mlds_initializer
    --->    init_obj(mlds_rval)
    ;       init_struct(mlds_type, list(mlds_initializer))
    ;       init_array(list(mlds_initializer))
    ;       no_initializer.

:- type initializer_array_size
    --->    array_size(int)
    ;       no_size.            % Either the size is unknown,
                                % or the data is not an array.

:- func get_initializer_array_size(mlds_initializer) = initializer_array_size.

:- type mlds_func_params
    --->    mlds_func_params(
                mlds_arguments,    % names and types of arguments (inputs)
                mlds_return_types  % types of return values (outputs)
            ).

:- type mlds_arguments == list(mlds_argument).
:- type mlds_argument
    --->    mlds_argument(
                mlds_entity_name,          % Argument name.
                mlds_type,                 % Argument type.
                mlds_gc_statement          % code for GC necessitated
                                           % by this argument.
            ).

:- type mlds_arg_types == list(mlds_type).
:- type mlds_return_types == list(mlds_type).

:- func mlds_get_arg_types(mlds_arguments) = list(mlds_type).

    % An mlds_func_signature is like an mlds_func_params
    % except that it only includes the function's type, not
    % the parameter names.
    %
:- type mlds_func_signature
    --->    mlds_func_signature(
                mlds_arg_types,    % argument types
                mlds_return_types  % return types
            ).

:- func mlds_get_func_signature(mlds_func_params) = mlds_func_signature.

:- type mlds_class_kind
    --->    mlds_class     % A generic class: can inherit other classes and
                           % interfaces (but most targets will only support
                           % single inheritence, so usually there will be
                           % at most one class).

    ;       mlds_package   % A class with only static members (can only
                           % inherit other packages). Unlike other kinds
                           % of classes, packages should not be used as types.

    ;       mlds_interface % A class with no variable data members (can only
                           % inherit other interfaces).

    ;       mlds_struct    % A value class (can only inherit other structs).

    ;       mlds_enum.     % A class with one integer member and a bunch
                           % of static consts (cannot inherit anything).

:- type mlds_class_name == string.
:- type mlds_class == mlds_fully_qualified_name(mlds_class_name).

    % Note that standard C doesn't support empty structs, so when targeting C,
    % it is the MLDS code generator's responsibility to ensure that each
    % generated MLDS class has at least one base class or non-static
    % data member.
    %
:- type mlds_class_defn
    --->    mlds_class_defn(
                mcd_kind        :: mlds_class_kind,

                % Imports these classes (or modules, packages, ...).
                mcd_imports     :: mlds_imports,

                % Inherits these base classes.
                mcd_inherits    :: list(mlds_class_id),

                % Implements these interfaces.
                mcd_implements  :: list(mlds_interface_id),

                % Type parameters.
                mcd_tparams     :: list(type_param),

                % Has these constructors.
                mcd_ctors       :: list(mlds_defn),

                % Contains these members.
                mcd_members     :: list(mlds_defn)
            ).

:- type mlds_type
    --->    mercury_type(
                % Mercury data types

                mer_type,           % The exact Mercury type.
                type_ctor_category, % What kind of type it is: enum, float, ...
                exported_type       % A representation of the type which can be
                                    % used to determine the foreign language
                                    % representation of the type.
            )

    ;       mlds_mercury_array_type(mlds_type)
            % The Mercury array type is treated specially, some backends
            % will treat it like any other mercury_type, whereas other may
            % use a special representation for it.
            % Arrays are type constructors in some backends, and so it is
            % easier to represent it here as a special type constructor.
            % (if we used the mercury_type representation above, we would
            % only classify the topmost level of the type, whereas we
            % really want to classify the element type for arrays, so
            % we can generate int[] for array(int)).
            % Note that mlds_mercury_array_type/1 is used for representing
            % Mercury arrays, whereas mlds_array_type/1 (see below)
            % is used for representing the target language's native arrays.

    ;       mlds_cont_type(mlds_return_types)
            % The type for the continuation functions used to handle
            % nondeterminism

    ;       mlds_commit_type
            % mlds_commit_type is used for storing information about a
            % commit. This is an abstract type; the exact definition
            % will depend on the back-end.  The only operations on this ADT
            % are `try_commit' and `do_commit'.  This type holds
            % information about the `try_commit' stack frame that is
            % needed to unwind the stack when a `do_commit' is executed.
            %
            % For the C back-end, if we're implementing do_commit/try_commit
            % using setjmp/longmp, then mlds_commit_type will be jmp_buf.
            % If we're implementing them using GNU C nested functions, then
            % it will be `__label__'; in this case, the local variable
            % of this "type" is actually a label, and doing a goto to that
            % label will unwind the stack.
            %
            % If the back-end implements commits using the target
            % language's, try/catch-style exception handling, as in
            % Java/C++/etc., then the target language implementation's
            % exception handling support will keep track of the information
            % needed to unwind the stack, and so variables of this type
            % don't need to be declared at all.
            %
            % See also the comments in ml_code_gen.m which show how commits
            % can be implemented for different target languages.

    ;       mlds_native_bool_type
    ;       mlds_native_int_type
    ;       mlds_native_float_type
    ;       mlds_native_char_type
            % MLDS native builtin types.
            % These are the builtin types of the MLDS target language,
            % whatever that may be.
            % Currently we don't actually use many of these.

    ;       mlds_foreign_type(
                % This is a type of the target language.
                foreign_language_type
            )

    ;       mlds_class_type(
                % MLDS types defined using mlds_class_defn.

                mlds_class,        % name
                arity,
                mlds_class_kind
            )

    ;       mlds_array_type(mlds_type)
            % MLDS array types.
            % These are single-dimensional, and can be indexed
            % using the `field' lval with an `offset' mlds_field_id;
            % indices start at zero.
            %
            % Note that mlds_array_type/1 is used for representing
            % the target language's native arrays, whereas
            % mlds_mercury_array_type/1 (see above) is used for
            % representing Mercury arrays.
            %
            % Currently MLDS array types are used for
            % (a) static constants that would otherwise be allocated
            %     with a `new_object', if we're using the low-level
            %     data representation (--no-high-level-data)
            % (b) for static constants of certain Mercury types which are
            %     always represented using the low-level data
            %     representation, regardless of --high-level-data,
            %     in particular closures and type_infos.
            % (c) for any other arrays generated internally by the
            %     MLDS code generator, e.g. the arrays used for
            %     string switches.

    ;       mlds_mostly_generic_array_type(list(mlds_type))
            % A generic array with some float elements. All other elements
            % are mlds_generic_type.
            %
            % This is the same as mlds_array_type(mlds_generic_type) except
            % that some element types are mlds_native_float_type instead of
            % mlds_generic_type. In C, it is not possible to initialize an
            % element of a generic array with a float literal, so we replace
            % the generic array type with a structure type containing a
            % combination of generic fields and float fields.

    ;       mlds_ptr_type(mlds_type)
            % Pointer types.
            % Currently these are used for handling output arguments.

    ;       mlds_func_type(mlds_func_params)
            % Function types.
            % For the C back-end, these are mapped to function pointer types,
            % since C doesn't have first-class function types.

    ;       mlds_generic_type
            % A generic type (e.g. `Word') that can hold any Mercury value.
            % This is used for implementing polymorphism.

    ;       mlds_generic_env_ptr_type
            % A generic pointer type (e.g. `void *' in C) that can be used
            % to point to the environment (set of local variables) of the
            % containing function. This is used for handling nondeterminism,
            % if the target language doesn't support nested functions, and
            % also for handling closures for higher-order code.

    ;       mlds_type_info_type

    ;       mlds_pseudo_type_info_type

    ;       mlds_rtti_type(rtti_id_maybe_element)

    ;       mlds_tabling_type(proc_tabling_struct_id)

    ;       mlds_unknown_type.
            % A type used by the ML code generator for references to variables
            % that have yet to be declared. This occurs once in ml_code_util.m
            % where references to env_ptr's are generated but the declaration
            % of these env_ptr's does not occur until the ml_elim_nested pass.

:- func mercury_type_to_mlds_type(module_info, mer_type) = mlds_type.

    % Hmm... this is tentative.
:- type mlds_class_id == mlds_type.
:- type mlds_interface_id == mlds_type.

%-----------------------------------------------------------------------------%
%
% Declaration flags
%

:- type mlds_decl_flags.

:- type access
    % The following used for class members (this includes globals,
    % which are actually members of the top-level package)

    --->    acc_public
            % Accessible to anyone.
    ;       acc_protected
            % Only accessible to the class and to derived classes.
    ;       acc_private
            % Only accessible to the class.
    ;       acc_default
            % Java "default" access or .NET assembly access:
            % accessible to anything defined in the same package.

    % The following is used for entities defined in a block/2 statement,
    % i.e. local variables and nested functions.

    ;       acc_local.
            % Only accessible within the block in which the entity
            % (variable or nested function) is defined.

:- type per_instance
    --->    one_copy    % I.e. "static" storage duration (but not necessarily
                        % static linkage) or static member function. Note that
                        % `one_copy' variables *must* have an initializer
                        % (the GCC back-end relies on this.)

    ;       per_instance.
                        % I.e. "auto" local variable in function, or non-static
                        % member of class.

:- type virtuality
    --->    non_virtual
    ;       virtual.

:- type overridability
    --->    overridable
    ;       sealed.     % i.e. the class cannot be inherited from,
                        % or the virtual method is not overridable.

:- type constness
    --->    modifiable
    ;       const.

:- type abstractness
    --->    concrete
    ;       abstract.

:- func access(mlds_decl_flags) = access.
:- func per_instance(mlds_decl_flags) = per_instance.
:- func virtuality(mlds_decl_flags) = virtuality.
:- func overridability(mlds_decl_flags) = overridability.
:- func constness(mlds_decl_flags) = constness.
:- func abstractness(mlds_decl_flags) = abstractness.

:- func set_access(mlds_decl_flags, access) = mlds_decl_flags.
:- func set_per_instance(mlds_decl_flags, per_instance) = mlds_decl_flags.
:- func set_virtuality(mlds_decl_flags, virtuality) = mlds_decl_flags.
:- func set_overridability(mlds_decl_flags, overridability) = mlds_decl_flags.
:- func set_constness(mlds_decl_flags, constness) = mlds_decl_flags.
:- func set_abstractness(mlds_decl_flags, abstractness) = mlds_decl_flags.

:- func init_decl_flags(access, per_instance, virtuality, overridability,
    constness, abstractness) = mlds_decl_flags.

    % Return the declaration flags appropriate for an initialized
    % local static constant.
    %
:- func ml_static_const_decl_flags = mlds_decl_flags.

%-----------------------------------------------------------------------------%
%
% Foreign code interfacing
%

    % Foreign code required for the foreign language interface.
    % When compiling to a language other than the foreign language,
    % this part still needs to be generated as C (or whatever) code
    % and compiled with a C (or whatever) compiler.
    %
:- type mlds_foreign_code
    --->    mlds_foreign_code(
                foreign_decl_info,
                foreign_import_module_info_list,
                list(user_foreign_code),
                list(mlds_pragma_export)
            ).

    % Information required to generate code for each `pragma foreign_export'.
    %
:- type mlds_pragma_export
    --->    ml_pragma_export(
                foreign_language,
                string,                        % Exported name
                mlds_qualified_entity_name,    % MLDS name for exported entity
                mlds_func_params,              % MLDS function parameters
                list(tvar),                    % Universally quantified type
                                               % variables.
                mlds_context
            ).

%-----------------------------------------------------------------------------%
%
% Attributes

:- type mlds_attribute
    --->    custom(
                mlds_type
            ).

%-----------------------------------------------------------------------------%
%
% Contexts (i.e. source code locations)

    % mlds.context is probably == prog_context,
    % but might also contain goal_path or other information.
:- type mlds_context.

:- func mlds_make_context(prog_context) = mlds_context.

:- func mlds_get_prog_context(mlds_context) = prog_context.

%-----------------------------------------------------------------------------%
%
% Statements
%

:- type statement
    --->    statement(
                mlds_stmt,
                mlds_context
            ).

:- type while_loop_kind
    --->    may_loop_zero_times
    ;       loop_at_least_once.

:- type mlds_stmt
    % Sequence.

    --->    ml_stmt_block(list(mlds_defn), list(statement))

    % Iteration.

    ;       ml_stmt_while(while_loop_kind, mlds_rval, statement)
            % The `bool' is true iff the loop is guaranteed to iterate at
            % least once -- in that case, the compiler can generate a
            % `do...while' loop rather than a `while...' loop.

    % Selection (see also computed_goto).

    ;       ml_stmt_if_then_else(mlds_rval, statement, maybe(statement))

    ;       ml_stmt_switch(
                % This representation for switches is very general:
                % it allows switching on any type, and cases can match
                % on ranges as well as on values.
                % Many target languages only allow switches on ints or enums.
                % Some (e.g. C#) also allow switches on strings.
                % Most target languages only allow matching on values;
                % only some (e.g. GNU C) allow matching on ranges.
                % The MLDS code generator should only generate switches
                % that the target will support.
                %
                % Note that unlike C, MLDS cases do NOT fall through; if you
                % want to achieve that effect, you need to use an explicit
                % goto.

                % The value to switch on.
                mlds_type,
                mlds_rval,

                % The range of possible values which the value might take
                % (if known).
                mlds_switch_range,

                % The different cases.
                list(mlds_switch_case),

                % What to do if none of the cases match.
                mlds_switch_default
            )

    % Transfer of control.

    ;       ml_stmt_label(mlds_label)
            % Defines a label that can be used as the target of calls,
            % gotos, etc.

    ;       ml_stmt_goto(mlds_goto_target)
            % goto(Target): Branch to the specified address.

    ;       ml_stmt_computed_goto(mlds_rval, list(mlds_label))
            % Evaluate rval, which should be an integer, and jump to the
            % (rval+1)th label in the list. e.g. computed_goto(2, [A, B, C, D])
            % will branch to label C.

    % Function call/return.

    ;       ml_stmt_call(
                mlds_func_signature,    % Signature of the function.
                mlds_rval,              % The function to call.
                maybe(mlds_rval),       % For method calls, this field
                                        % specifies the `this' object.
                list(mlds_rval),        % Ordinary function arguments.
                list(mlds_lval),        % Places to store the function return
                                        % value(s).
                ml_call_kind            % Indicates whether this call is a
                                        % tail call.
            )

    ;       ml_stmt_return(list(mlds_rval))  % Some targets will not support
                                             % returning more than one value.

    % Commits (a specialized form of exception handling).

    ;       ml_stmt_try_commit(mlds_lval, statement, statement)
    ;       ml_stmt_do_commit(mlds_rval)
            % try_commit(Ref, GoalToTry, CommitHandlerGoal):
            %   Execute GoalToTry.  If GoalToTry exits via a
            %   `commit(Ref)' instruction, then execute
            %   CommitHandlerGoal.
            %
            % do_commit(Ref):
            %   Unwind the stack to the corresponding `try_commit'
            %   statement for Ref, and branch to the CommitHandlerGoal
            %   that was specified in that try_commit instruction.
            %
            % For both try_commit and do_commit instructions, Ref should be
            % the name of a local variable of type mlds_commit_type.
            % (This variable can be used by the back-end's implementation
            % of do_commit and try_commit to store information needed to unwind
            % the stack.) There should be exactly one try_commit instruction
            % for each Ref. do_commit(Ref) instructions should only be used
            % in goals called from the GoalToTry goal in the try_commit
            % instruction with the same Ref.
            %
            % The C and GCC back-ends require each try_commit to be put in
            % its own nested function, to avoid problems with setjmp() and
            % local vars not declared volatile. They also require each
            % do_commit to be put in its own function -- this is needed when
            % using __builtin_setjmp()/__builtin_longjmp() to ensure that
            % the call to __builtin_longjmp() is not in the same function
            % as the call to __builtin_setjmp().

    % Exception handling.
    %
    % We use C++-style exceptions.
    % For C, the back-end can simulate them using setjmp/longjmp.
    %
    % XXX This is tentative -- the current definition may be
    % a bit too specific to C++-style exceptions.
    % It might not be a good choice for different target languages.
    % XXX Full exception handling support is not yet implemented.

%   ;       ml_stmt_throw(mlds_type, mlds_rval)
%           % Throw the specified exception.

%   ;       ml_stmt_rethrow
%           % Rethrow the current exception
%           % (only valid inside an exception handler).

%   ;       ml_stmt_try_catch(
%               statement,
%               list(mlds_exception_handler)
%           )
%           % Execute the specified statement, and if it throws an exception,
%           % and the exception matches any of the exception handlers,
%           % then execute the first matching exception handler.

    % Atomic statements.

    ;       ml_stmt_atomic(mlds_atomic_statement).

%-----------------------------------------------------------------------------%
%
% Extra info for switches
%
    % The range of possible values which the switch variable might take
    % (if known).
:- type mlds_switch_range
    --->    mlds_switch_range_unknown
    ;       mlds_switch_range(range_min::int, range_max::int).
            % From range_min to range_max, both inclusive.

    % Each switch case consists of the conditions to match against,
    % and the statement to execute if the match succeeds.
    % Unlike C, cases do NOT fall through; if you want to achieve that
    % effect, you need to use an explicit goto.
:- type mlds_switch_case
    --->    mlds_switch_case(
                % Each switch case contains one or more conditions.
                % If _any_ of the conditions match, this case will be selected.
                mlds_case_match_cond,
                list(mlds_case_match_cond),

                statement
            ).

    % A case_match_cond specifies when a switch case will be selected
:- type mlds_case_match_cond
    --->    match_value(mlds_rval)
            % match_value(Val) matches if the switch value is equal to
            % the specified Val.

    ;       match_range(mlds_rval, mlds_rval).
            % match_range(Min, Max) matches if the switch value is between
            % Min and Max, both inclusive. Note that this should only be used
            % if the target supports it; currently the C back-end supports
            % this only if you're using the GNU C compiler.

    % The switch_default specifies what to do if none of the switch
    % conditions match.
:- type mlds_switch_default
    --->    default_is_unreachable
            % The switch is exhaustive, so the default case should
            % never be reached.

    ;       default_do_nothing
            % The default action is to just fall through to the statement
            % after the switch.

    ;       default_case(statement).
            % The default is to execute the specified statement.

%-----------------------------------------------------------------------------%
%
% Extra info for labels.
%

:- type mlds_label == string.

:- type mlds_goto_target
    --->    goto_label(mlds_label)
            % Branch to the specified label.

    ;       goto_break
            % Branch to just after the end of the immediately enclosing loop
            % or switch, just like a C/C++/Java `break' statement.
            % Not supported by all target languages.

    ;       goto_continue.
            % Branch to the end of the loop body for the immediately enclosing
            % loop, just like a C/C++/Java/C# `continue' statement.
            % Not supported by all target languages.

%-----------------------------------------------------------------------------%
%
% Extra info for calls.
%

    % The `ml_call_kind' type indicates whether a call is a tail call
    % and whether the call is know to never return.
    %
    % Marking a call as a tail_call is intended as a hint to
    % the target language that this call can be implemented
    % by removing the caller's stack frame and jumping to the
    % destination, rather than a normal call.
    % However, the target code generator need not obey this hint;
    % it is permitted for the target code generator to ignore the
    % hint and generate code which does not remove the caller's
    % stack frame and/or which falls through to the following
    % statement.
    %
:- type ml_call_kind
    --->    no_return_call  % A call that never returns
                            % (this is a special case of a tail call)
    ;       tail_call       % A tail call.
    ;       ordinary_call.  % Just an ordinary call.

%-----------------------------------------------------------------------------%
%
% Extra info for exception handling.
%

    % XXX This is tentative -- the current definition may be
    % a bit too specific to C++-style exceptions.
    % It might not be a good choice for different target languages.
    %
:- type mlds_exception_handler
    --->    handler(
                maybe(mlds_type),
                % If `yes(T)', specifies the type of exceptions to catch.
                % If `no', it means catch all exceptions.

                maybe(string)
                % If `yes(Name)', gives the variable name to use for the
                % exception value.
                % If `no', then exception value will not be used.
            ).

%-----------------------------------------------------------------------------%

    %
    % atomic statements
    %
:- type mlds_atomic_statement

    --->    comment(string)
            % Insert a comment into the output code.

    ;       assign(mlds_lval, mlds_rval)
            % assign(Location, Value):
            % Assign the value specified by rval to the location
            % specified by lval.

    ;       assign_if_in_heap(mlds_lval, mlds_rval)
            % assign_if_in_heap(Location, Value):
            % Assign the address specified by rval to the location specified
            % by lval if the address is in the bounds of the garbage collected
            % heap.  Otherwise assign a null pointer to lval.

    % Heap management.

    ;       delete_object(mlds_rval)
            % Compile time garbage collect (ie explicitly
            % deallocate) the memory used by the lval.

    ;       new_object(
                % new_object(Target, Tag, Type, Size, CtorName,
                %   Args, ArgTypes, MayUseAtomic, MaybeAllocId):
                % Allocate a memory block of the given size,
                % initialize it with a new object of the given
                % type by calling the constructor with the specified
                % arguments, and put its address in the given lval,
                % possibly after tagging the address with a given tag.
                % (Some targets might not support tags.)

                % The target to assign the new object's address to.
                mlds_lval,

                % A (primary) tag to tag the address with before assigning
                % the result to the target.
                maybe(mlds_tag),

                % Indicates whether or not the first argument in the list (see
                % below) is a secondary tag. For target languages with
                % constructors, secondary tags are implicitly initialised by
                % the constructor, not passed in.
                bool,

                % The type of the object being allocated.
                mlds_type,

                % The amount of memory that needs to be allocated for the new
                % object, measured in words (NOT bytes!).
                maybe(mlds_rval),

                % The name of the constructor to invoke.
                maybe(ctor_name),

                % The arguments to the constructor.
                % Any arguments which are supposed to be packed together should
                % be packed in this list by the HLDS->MLDS code generator.
                list(mlds_rval),

                % The types of the arguments to the constructor.
                %
                % For boxed fields, the type here should be mlds_generic_type;
                % it is the responsibility of the HLDS->MLDS code generator to
                % insert code to box/unbox the arguments.
                list(mlds_type),

                % Can we use a cell allocated with GC_malloc_atomic to hold
                % this object in the C backend?
                may_use_atomic_alloc,

                % The allocation site identifier.
                maybe(mlds_alloc_id)
            )

    ;       gc_check
            % Check to see if we need to do a garbage collection,
            % and if so, do it.
            % This is used for accurate garbage collection
            % with the MLDS->C back-end.

    ;       mark_hp(mlds_lval)
            % Tell the heap sub-system to store a marker (for later use in
            % restore_hp/1 instructions) in the specified lval.
            %
            % It's OK for the target to treat this as a no-op, and probably
            % that is what most targets will do.

    ;       restore_hp(mlds_rval)
            % The rval must be a marker as returned by mark_hp/1.
            % The effect is to deallocate all the memory which
            % was allocated since that call to mark_hp.
            %
            % It's OK for the target to treat this as a no-op,
            % and probably that is what most targets will do.

    % Trail management.

    ;       trail_op(trail_op)

    % Foreign language interfacing.

    ;       inline_target_code(mlds_target_lang, list(target_code_component))
            % Do whatever is specified by the target_code_components, which
            % can be any piece of code in the specified target language (C,
            % assembler, or whatever) that does not have any non-local flow
            % of control. This is implemented by embedding the target code
            % in the output stream of instructions or statements.

    ;       outline_foreign_proc(
                % Do whatever is specified by the string, which can be any
                % piece of code in the specified foreign language (C#,
                % managed C++, or whatever). This is implemented by calling
                % an externally defined function, which the backend must
                % generate the definition for (in some other file perhaps)
                % and calling it. The lvals are use to generate the appropriate
                % forwarding code.
                % XXX We should also store the list of mlds_rvals where
                % the input values come from.

                % The foreign language this code is written in.
                foreign_language,

                list(outline_arg),

                % Where to store return value(s).
                list(mlds_lval),

                % The user's foreign language code fragment.
                string
            ).

    % Stores information about each argument to an outline_foreign_proc.
    %
:- type outline_arg
    --->    ola_in(
                mlds_type,      % The type of the argument.
                string,         % The name of the argument in the foreign code.
                mlds_rval       % The rval which holds the value of this
                                % argument.
            )
    ;       ola_out(
                mlds_type,      % The type of the argument.
                string,         % The name of the argument in the foreign code.
                mlds_lval       % The lval where we are to place the result
                                % calculated by the foreign code into.
            )
    ;       ola_unused.

    % This is just a random selection of possible languages
    % that we might want to target...
:- type mlds_target_lang
    --->    ml_target_c
    ;       ml_target_gnu_c
%   ;       ml_target_c_minus_minus
    ;       ml_target_il
    ;       ml_target_csharp
    ;       ml_target_java.
%   ;       ml_target_java_asm
%   ;       ml_target_java_bytecode.

:- type target_code_component
    --->    user_target_code(
                % User_target_code holds C code from the user's
                % `pragma foreign_proc' declaration.

                string,
                maybe(prog_context),
                target_code_attributes
            )
    ;       raw_target_code(
                % Raw_target_code holds C code that the compiler has generated.
                % To ensure that following `#line' directives work OK, either
                % the string in a raw_target_code must end in `\n' (or `\n'
                % followed by whitespace), or the following
                % target_code_component must be a `name(Name)' component,
                % for which we do not output #line directives.

                string,
                target_code_attributes
            )

    ;       target_code_input(mlds_rval)
    ;       target_code_output(mlds_lval)
    ;       target_code_type(mlds_type)
    ;       target_code_name(mlds_qualified_entity_name)
    ;       target_code_alloc_id(mlds_alloc_id).

:- type target_code_attributes == list(target_code_attribute).

:- type target_code_attribute
    --->    max_stack_size(int).
            % max_stack_size(Size):
            % This attribute declares the maximum stack usage of a
            % particular piece of code.  The unit that `Size' is measured
            % in depends upon foreign language being used.  Currently this
            % attribute is only used (and is in fact required) by the
            % `IL' foreign language interface, and is measured in units
            % of stack items.

:- type mlds_alloc_id
    --->    mlds_alloc_id(int).

    % Constructor id.
    %
:- type ctor_name == mlds_qualified_ctor_id.
:- type mlds_ctor_id ---> ctor_id(mlds_class_name, arity).
:- type mlds_qualified_ctor_id == mlds_fully_qualified_name(mlds_ctor_id).

    % Trail management.
    % For documentation, see the corresponding LLDS instructions in llds.m.
    %
:- type trail_op
    --->    store_ticket(mlds_lval)
    ;       reset_ticket(mlds_rval, mlds_reset_trail_reason)
    ;       discard_ticket
    ;       prune_ticket
    ;       mark_ticket_stack(mlds_lval)
    ;       prune_tickets_to(mlds_rval).
%   ;       discard_tickets_to(mlds_rval).  % used only by the library

%-----------------------------------------------------------------------------%

    % An mlds_field_id represents some data within an object.
    %
:- type mlds_field_id
    --->    ml_field_offset(mlds_rval)
            % offset(N) represents the field at offset N Words.

    ;       ml_field_named(
                % ml_field_named(Name, MaybeCtorType) represents the field with
                % the specified name.
                %
                % CtorType gives the MLDS type for this particular constructor.
                % The type of the object is given by the PtrType in the
                % field(..) lval. CtorType may either be the same as PtrType,
                % or it may be a pointer to a derived class. In the latter
                % case, the MLDS->target code back-end is responsible for
                % inserting a downcast from PtrType to CtorType before
                % accessing the field.

                mlds_fully_qualified_name(mlds_field_name),
                mlds_type
            ).

:- type mlds_field_name == string.

    % An mlds_var represents a variable or constant.
    %
:- type mlds_var == mlds_fully_qualified_name(mlds_var_name).
:- type mlds_var_name
        --->    mlds_var_name(string, maybe(int)).
                % Var name and perhaps a unique number to be added as a
                % suffix where necessary.

    % An lval represents a data location or variable that can be used
    % as the target of an assignment.
    %
:- type mlds_lval

    % Values on the heap or fields of a structure.

    --->    ml_field(
                % field(Tag, Address, FieldId, FieldType, PtrType):
                % Selects a field of a compound term.

                % Address is a tagged pointer to a cell on the heap.
                % The position in the cell, FieldId, is represented either
                % as a field name or a number of words offset. If Tag is yes,
                % the arg gives the value of the tag; if it is no, the tag bits
                % will have to be masked off. The value of the tag should be
                % given if it is known, since this will lead to faster code.
                % The FieldType is the type of the field. The PtrType is the
                % type of the pointer from which we are fetching the field.
                %
                % For boxed fields, the type here should be mlds_generic_type,
                % not the actual type of the field. If the actual type is
                % different, then it is the HLDS->MLDS code generator's
                % responsibility to insert the necessary code to handle
                % boxing/unboxing.

                field_tag       :: maybe(mlds_tag),
                field_addr      :: mlds_rval,
                field_field_id  :: mlds_field_id,
                field_type      :: mlds_type,
                field_ptr_type  :: mlds_type
            )

    % Values somewhere in memory.
    % This is the dereference operator (e.g. unary `*' in C).

    ;       ml_mem_ref(
                % The rval should have originally come from a mem_addr rval.
                % The type is the type of the value being dereferenced.

                mlds_rval,
                mlds_type
            )

    ;       ml_global_var_ref(
                % A reference to the value of the global variable in the target
                % language with the given name. At least for now, the global
                % variable's type must be mlds_generic_type.
                %
                % XXX This functionality is currently only supported for
                % the C backend.

                global_var_ref
            )

    % Variables.
    % These may be local or they may come from some enclosing scope
    % the variable name should be fully qualified.

    ;       ml_var(
                mlds_var,
                mlds_type
            ).

:- type global_var_ref
    --->    env_var_ref(string).

%-----------------------------------------------------------------------------%
%
% Expressions
%

:- type ml_scalar_common_type_num
    --->    ml_scalar_common_type_num(int).
:- type ml_vector_common_type_num
    --->    ml_vector_common_type_num(int).

:- type mlds_scalar_common
    --->    ml_scalar_common(mlds_module_name, mlds_type,
                ml_scalar_common_type_num, int).
            % module name, type, type number, row number

:- type mlds_vector_common
    --->    ml_vector_common(mlds_module_name, mlds_type,
                ml_vector_common_type_num, int, int).
            % module name, type, type number,
            % starting row number, number of rows

    % An rval is an expression that represents a value.
    %
:- type mlds_rval
    --->    ml_lval(mlds_lval)
            % The value of an `lval' rval is just the value stored in
            % the specified lval.

    ;       ml_mkword(mlds_tag, mlds_rval)
            % Given a pointer and a tag, mkword returns a tagged pointer.
            %
            % (XXX It might be more consistent to make this a binary_op,
            % with the tag argument just being an rval, rather than
            % having `mkword' be a separate kind of rval.)

    ;       ml_const(mlds_rval_const)

    ;       ml_unop(mlds_unary_op, mlds_rval)

    ;       ml_binop(binary_op, mlds_rval, mlds_rval)

    ;       ml_mem_addr(mlds_lval)
            % The address of a variable, etc.

    ;       ml_scalar_common(mlds_scalar_common)
            % A reference to the given common structure. The reference is NOT
            % the address; that can be represented using a mlds_data_addr
            % const. This rval is intended to be used as the name of an
            % array to be indexed into. This is possible because the elements
            % of a scalar common cell are all boxed and thus of the same size.

    ;       ml_vector_common_row(mlds_vector_common, mlds_rval)
            % ml_vector_common_row(VectorCommon, Index),
            % A reference to a selected row (selected by the second argument)
            % of the given common structure. If VectorCommon is equal e.g.
            % to ml_vector_common(ModuleName, Type, TypeNum, StartRow, NumRows)
            % then Index must be between 0 and NumRows-1 (both inclusive),
            % and the reference will be row StartRow + Index in the 2D table
            % represented by the 2D table holding all the vector static data of
            % this type.
            %
            % The selected row should be a struct holding unboxed values,
            % which can be retrieved using field names (not field offsets).

    ;       ml_self(mlds_type).
            % The equivalent of the `this' pointer in C++ with the type of the
            % object. Note that this rval is valid iff we are targeting an
            % object oriented backend and we are in an instance method
            % (procedures which have the per_instance flag set).

:- type mlds_unary_op
    --->    box(mlds_type)
            % box(MLDSType); convert from MLDSType to mlds_generic_type,
            % by boxing if necessary, or just casting if not.

    ;       unbox(mlds_type)
            % unbox(MLDSType): convert from mlds_generic_type to MLDSType,
            % applying the inverse transformation to box/1, i.e. unboxing
            % if boxing was necessary, and just casting otherwise.

    ;       cast(mlds_type)
            % cast(MLDSType): Coerce the type of the rval to be MLDSType.
            % XXX It might be worthwhile adding the type that we cast from.

    ;       std_unop(builtin_ops.unary_op).

:- type mlds_rval_const
    --->    mlconst_true
    ;       mlconst_false
    ;       mlconst_int(int)
    ;       mlconst_enum(int, mlds_type)
    ;       mlconst_char(int)
    ;       mlconst_float(float)
    ;       mlconst_string(string)
    ;       mlconst_multi_string(list(string))
            % A multi_string_const is a string containing embedded NULs
            % between each substring in the list.

    ;       mlconst_foreign(foreign_language, string, mlds_type)

    ;       mlconst_named_const(string)
            % A constant with the given name, such as a value of an enum type
            % in C.
            % It is the responsibility of the code that creates named constants
            % to ensure that the constant's name is meaningful for the target
            % language. This includes making sure that the name is acceptable
            % as an identifier, does not need quoting, and the constant it
            % refers to is accessible.

    ;       mlconst_code_addr(mlds_code_addr)
    ;       mlconst_data_addr(mlds_data_addr)

    ;       mlconst_null(mlds_type).
            % A null value, of the given type. Usually the type will be a
            % pointer (mlds_ptr_type) but it could also be string or a
            % func_type. (Null is not a valid value of type string or
            % func_type, but null values of those types may be useful as
            % placeholders in cases where the value will never be used.)

:- type mlds_code_addr
    --->    code_addr_proc(
                mlds_qualified_proc_label,
                mlds_func_signature
            )
    ;       code_addr_internal(
                mlds_qualified_proc_label,
                mlds_func_sequence_num,
                mlds_func_signature
            ).

:- type mlds_data_addr
    --->    data_addr(
                mlds_module_name,   % The name of the module module.
                mlds_data_name      % The id of the variable inside the module.
            ).

:- type mlds_data == mlds_fully_qualified_name(mlds_data_name).

:- type mlds_data_name
    --->    mlds_data_var(mlds_var_name)
            % Ordinary variables.

    ;       mlds_scalar_common_ref(mlds_scalar_common)
            % The address of the given scalar common cell.

    % Stuff for handling polymorphism/RTTI and type classes.

    ;       mlds_rtti(rtti_id)

    % Stuff for handling debugging and accurate garbage collection.
    % (Those features are not yet implemented for the MLDS back-end,
    % so these data_names are not yet used.)

    ;       mlds_module_layout
            % Layout information for the current module.

    ;       mlds_proc_layout(mlds_proc_label)
            % Layout structure for the given procedure.

    ;       mlds_internal_layout(mlds_proc_label, mlds_func_sequence_num)
            % Layout structure for the given internal MLDS func.

    % Stuff for tabling.

    ;       mlds_tabling_ref(mlds_proc_label, proc_tabling_struct_id).
            % A variable that contains a pointer that points to the table
            % used to implement memoization, loopcheck or minimal model
            % semantics for the given procedure.

%-----------------------------------------------------------------------------%

% Note: the types `tag' and `reset_trail_reason' here are all
% defined exactly the same as the ones in llds.m.  The definitions are
% duplicated here because we don't want mlds.m to depend on llds.m.
% (Alternatively, we could move both these definitions into a new module
% imported by both mlds.m and llds.m, but these definitions are small enough
% and simple enough that I don't think it is worth creating a new module
% just for them.)

    % A tag should be a small non-negative integer.
    %
:- type mlds_tag == int.

    % See runtime/mercury_trail.h.
    %
:- type mlds_reset_trail_reason
    --->    undo
    ;       commit
    ;       solve
    ;       exception
    ;       gc.

%-----------------------------------------------------------------------------%

:- type mlds_qualified_proc_label
    ==  mlds_fully_qualified_name(mlds_proc_label).

:- type mlds_proc_label
    --->    mlds_proc_label(mlds_pred_label, proc_id).

:- type mlds_qualified_pred_label
    ==  mlds_fully_qualified_name(mlds_pred_label).

    % An mlds_pred_label is a structure containing information that
    % uniquely identifies a HLDS predicate within a given module.
    %
    % Note that a predicate can have both a declaring and a defining module.
    % The defining module is the module that provides the code for the
    % predicate, the declaring module contains the `:- pred' declaration.
    % When these are different, as for specialised versions of predicates
    % from `.opt' files, the defining module's name is added as a
    % qualifier to the pred name.
    %
:- type mlds_pred_label
    --->    mlds_user_pred_label(
                pred_or_func,       % predicate/function
                maybe(mercury_module_name),
                                    % The declaring module,
                                    % if different to the defining module
                string,             % Name.
                arity,              % Arity.
                code_model,         % Code model.
                bool                % Function without return value
                                    % (i.e. non-default mode).
            )
    ;       mlds_special_pred_label(
                string,             % pred name
                maybe(mercury_module_name),
                                    % The module declaring the type,
                                    % if this is different to module defining
                                    % the special_pred.
                string,             % The type name.
                arity               % The type arity.
            ).

:- func mlds_std_tabling_proc_label(mlds_proc_label) = mlds_proc_label.

%-----------------------------------------------------------------------------%

:- type mlds_exported_enums == list(mlds_exported_enum).

:- type mlds_exported_enum
    --->    mlds_exported_enum(
                exported_enum_lang      :: foreign_language,
                exported_enum_context   :: prog_context,
                exported_enum_type_ctor :: type_ctor,
                exported_enum_constants :: list(mlds_exported_enum_constant)
                % The name of each constant plus a value to initialize it to.
            ).

:- type mlds_exported_enum_constant
    --->    mlds_exported_enum_constant(
                exported_enum_constant_name     :: string,
                exported_enum_constant_value    :: mlds_initializer
            ).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module backend_libs.foreign.
:- import_module check_hlds.type_util.
:- import_module hlds.hlds_data.
:- import_module libs.globals.
:- import_module mdbcomp.builtin_modules.
:- import_module parse_tree.file_names.
:- import_module parse_tree.java_names.
:- import_module parse_tree.prog_type.

:- import_module int.
:- import_module require.
:- import_module string.
:- import_module term.

%-----------------------------------------------------------------------------%

mlds_get_module_name(MLDS) = MLDS ^ mlds_name.

%-----------------------------------------------------------------------------%

% Currently mlds_contexts just contain a prog_context.

:- type mlds_context
    --->    mlds_context(prog_context).

mlds_make_context(Context) = mlds_context(Context).

mlds_get_prog_context(mlds_context(Context)) = Context.

%-----------------------------------------------------------------------------%

% There is some special-case handling for arrays, foreign types and some
% other types here, but apart from that, currently we return mlds_types
% that are just the same as Mercury types, except that we also store the type
% category, so that we can tell if the type is an enumeration or not, without
% needing to refer to the HLDS type_table.
% XXX It might be a better idea to get rid of the mercury_type/2 MLDS type
% and instead fully convert all Mercury types to MLDS types.

mercury_type_to_mlds_type(ModuleInfo, Type) = MLDSType :-
    ( type_to_ctor_and_args(Type, TypeCtor, TypeArgs) ->
        (
            TypeCtor = type_ctor(qualified(unqualified("array"), "array"), 1),
            TypeArgs = [ElemType]
        ->
            MLDSElemType = mercury_type_to_mlds_type(ModuleInfo, ElemType),
            MLDSType = mlds_mercury_array_type(MLDSElemType)
        ;
            TypeCtor = type_ctor(qualified(mercury_private_builtin_module,
                "store_at_ref_type"), 1),
            TypeArgs = [RefType]
        ->
            MLDSRefType = mercury_type_to_mlds_type(ModuleInfo, RefType),
            module_info_get_globals(ModuleInfo, Globals),
            globals.get_target(Globals, Target),
            (
                Target = target_csharp,
                % `mlds_ptr_type' confuses the C# backend because it is also
                % used for `out' parameters. `store_at_ref_type' is not
                % applicable on that backend anyway.
                MLDSType = MLDSRefType
            ;
                ( Target = target_c
                ; Target = target_il
                ; Target = target_java
                ; Target = target_erlang
                ),
                MLDSType = mlds_ptr_type(MLDSRefType)
            )
        ;
            module_info_get_type_table(ModuleInfo, TypeTable),
            ( search_type_ctor_defn(TypeTable, TypeCtor, TypeDefn) ->
                hlds_data.get_type_defn_body(TypeDefn, TypeBody),
                ( TypeBody = hlds_foreign_type(ForeignTypeBody) ->
                    MLDSType = foreign_type_to_mlds_type(ModuleInfo,
                        ForeignTypeBody)
                ; TypeBody = hlds_abstract_type(_) ->
                    Category = classify_type_ctor(ModuleInfo, TypeCtor),
                    ExportedType = non_foreign_type(Type),
                    MLDSType = mercury_type(Type, Category, ExportedType)
                ;
                    Category = classify_type_defn_body(TypeBody),
                    ExportedType = non_foreign_type(Type),
                    MLDSType = mercury_type(Type, Category, ExportedType)
                )
            ;
                Category = classify_type_ctor(ModuleInfo, TypeCtor),
                ExportedType = non_foreign_type(Type),
                MLDSType = mercury_type(Type, Category, ExportedType)
            )
        )
    ;
        Category = ctor_cat_variable,
        ExportedType = non_foreign_type(Type),
        MLDSType = mercury_type(Type, Category, ExportedType)
    ).

:- func foreign_type_to_mlds_type(module_info, foreign_type_body) = mlds_type.

foreign_type_to_mlds_type(ModuleInfo, ForeignTypeBody) = MLDSType :-
    % The body of this function is very similar to the function
    % foreign_type_body_to_exported_type in foreign.m.
    % Any changes here may require changes there as well.

    ForeignTypeBody = foreign_type_body(MaybeIL, MaybeC, MaybeJava,
        MaybeCSharp, _MaybeErlang),
    module_info_get_globals(ModuleInfo, Globals),
    globals.get_target(Globals, Target),
    (
        Target = target_c,
        (
            MaybeC = yes(Data),
            Data = foreign_type_lang_data(CForeignType, _, _),
            ForeignType = c(CForeignType)
        ;
            MaybeC = no,
            % This is checked by check_foreign_type in make_hlds.
            unexpected($module, $pred, "no C foreign type")
        )
    ;
        Target = target_il,
        (
            MaybeIL = yes(Data),
            Data = foreign_type_lang_data(ILForeignType, _, _),
            ForeignType = il(ILForeignType)
        ;
            MaybeIL = no,
            % This is checked by check_foreign_type in make_hlds.
            unexpected($module, $pred, "no IL foreign type")
        )
    ;
        Target = target_csharp,
        (
            MaybeCSharp = yes(Data),
            Data = foreign_type_lang_data(CSharpForeignType, _, _),
            ForeignType = csharp(CSharpForeignType)
        ;
            MaybeCSharp = no,
            % This is checked by check_foreign_type in make_hlds.
            unexpected($module, $pred, "no C# foreign type")
        )
    ;
        Target = target_java,
        (
            MaybeJava = yes(Data),
            Data = foreign_type_lang_data(JavaForeignType, _, _),
            ForeignType = java(JavaForeignType)
        ;
            MaybeJava = no,
            % This is checked by check_foreign_type in make_hlds.
            unexpected($module, $pred, "no Java foreign type")
        )
    ;
        Target = target_erlang,
        unexpected($module, $pred, "target erlang")
    ),
    MLDSType = mlds_foreign_type(ForeignType).

%-----------------------------------------------------------------------------%

get_initializer_array_size(no_initializer) = no_size.
get_initializer_array_size(init_obj(_)) = no_size.
get_initializer_array_size(init_struct(_, _)) = no_size.
get_initializer_array_size(init_array(Elems)) = array_size(list.length(Elems)).

mlds_get_func_signature(mlds_func_params(Parameters, RetTypes)) =
        mlds_func_signature(ParamTypes, RetTypes) :-
    ParamTypes = mlds_get_arg_types(Parameters).

mlds_get_arg_types(Parameters) = ArgTypes :-
    GetArgType = (func(mlds_argument(_, Type, _)) = Type),
    ArgTypes = list.map(GetArgType, Parameters).

%-----------------------------------------------------------------------------%

% For IL:
% An MLDS module name consists of two parts. One part is the package
% which the module name is defined in, and the other part is the actual
% module name. For example the module name System.XML could be defined
% in the package XML.
%
% For Java:
% The "package_name" is really the name of the Mercury module, and the
% "module_name" is the "package_name" plus additional qualifiers (if any).
% For example, a type `c' in module `a.b' would have package_name == `a.b'
% and module_name == `a.b.c'.
% XXX clean this up
%
% Note that modules in the Mercury standard library map get a `mercury'
% prefix e.g. `mercury.builtin', `mercury.io', `mercury.univ', etc.,
% when mapped to MLDS package names.

:- type mlds_module_name
    --->    mlds_module_name(
                mmn_package_name    :: mdbcomp.sym_name.module_name,
                mmn_module_name     :: mdbcomp.sym_name.module_name
            ).

mercury_module_and_package_name_to_mlds(MLDS_Package, MercuryModule)
    = mlds_module_name(MLDS_Package, MercuryModule).

mercury_module_name_to_mlds(MercuryModule) = Name :-
    ( mercury_std_library_module_name(MercuryModule) ->
        MLDS_Package = add_outermost_qualifier("mercury", MercuryModule)
    ;
        MLDS_Package = MercuryModule
    ),
    Name = mlds_module_name(MLDS_Package, MLDS_Package).

is_std_lib_module(Module, Name) :-
    Name0 = Module ^ mmn_module_name,
    strip_outermost_qualifier(Name0, "mercury", Name),
    mercury_std_library_module_name(Name).

mlds_module_name_to_sym_name(Module) = Module ^ mmn_module_name.

mlds_module_name_to_package_name(Module) = Module ^ mmn_package_name.

mlds_append_class_qualifier(Target, mlds_module_name(Package, Module),
        QualKind, ClassName, ClassArity) = Name :-
    % For the Java back-end, we flip the initial case of an type qualifiers,
    % in order to match the usual Java conventions.
    (
        Target = target_java,
        QualKind = type_qual
    ->
        AdjustedModule = flip_initial_case_of_final_part(Module)
    ;
        AdjustedModule = Module
    ),
    string.format("%s_%d", [s(ClassName), i(ClassArity)], ClassQualifier),
    Name = mlds_module_name(Package,
        qualified(AdjustedModule, ClassQualifier)).

mlds_append_wrapper_class(Name) = mlds_append_name(Name, wrapper_class_name).

mlds_append_name(mlds_module_name(Package, Module), Name)
    = mlds_module_name(Package, qualified(Module, Name)).

wrapper_class_name = "mercury_code".

mlds_std_tabling_proc_label(ProcLabel0) = ProcLabel :-
    % We standardize the parts of PredLabel0 that aren't computable from
    % the tabling pragma, because the code that creates the reset predicate
    % in table_info_global_var_name in add_pragma.m doesn't have access to
    % this information.
    ProcLabel0 = mlds_proc_label(PredLabel0, ProcId),
    (
        PredLabel0 = mlds_user_pred_label(PorF, MaybeModuleName, Name,
            Arity, _, _),
        PredLabel = mlds_user_pred_label(PorF, MaybeModuleName, Name,
            Arity, model_det, no)
    ;
        PredLabel0 = mlds_special_pred_label(_, _, _, _),
        unexpected($module, $pred, "mlds_special_pred_label")
    ),
    ProcLabel = mlds_proc_label(PredLabel, ProcId).

%-----------------------------------------------------------------------------%

    % The compiler can pack all the enumeration arguments together,
    % though a cell will still be allocated.
    %
:- type mlds_decl_flags
    --->    mlds_decl_flags(
                mdf_access          :: access,
                mdf_per_instance    :: per_instance,
                mdf_virtuality      :: virtuality,
                mdf_overridability  :: overridability,
                mdf_constness       :: constness,
                mdf_abstractness    :: abstractness
            ).

access(Flags) = Flags ^ mdf_access.
per_instance(Flags) = Flags ^ mdf_per_instance.
virtuality(Flags) = Flags ^ mdf_virtuality.
overridability(Flags) = Flags ^ mdf_overridability.
constness(Flags) = Flags ^ mdf_constness.
abstractness(Flags) = Flags ^ mdf_abstractness.

set_access(Flags, Access) =
    Flags ^ mdf_access := Access.
set_per_instance(Flags, PerInstance) =
    Flags ^ mdf_per_instance := PerInstance.
set_virtuality(Flags, Virtuality) =
    Flags ^ mdf_virtuality := Virtuality.
set_overridability(Flags, Overridability) =
    Flags ^ mdf_overridability := Overridability.
set_constness(Flags, Constness) =
    Flags ^ mdf_constness := Constness.
set_abstractness(Flags, Abstractness) =
    Flags ^ mdf_abstractness := Abstractness.

init_decl_flags(Access, PerInstance, Virtuality, Overridability, Constness,
        Abstractness) =
    mlds_decl_flags(Access, PerInstance, Virtuality, Overridability, Constness,
        Abstractness).

ml_static_const_decl_flags = DeclFlags :-
    % Note that rtti_data_decl_flags, in rtti_to_mlds.m,
    % must be the same as this apart from the access.
    Access = acc_local,
    PerInstance = one_copy,
    Virtuality = non_virtual,
    Overridability = overridable,
    Constness = const,
    Abstractness = concrete,
    DeclFlags = init_decl_flags(Access, PerInstance,
        Virtuality, Overridability, Constness, Abstractness).

%-----------------------------------------------------------------------------%
:- end_module ml_backend.mlds.
%-----------------------------------------------------------------------------%
