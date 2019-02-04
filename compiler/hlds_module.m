%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1996-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: hlds_module.m.
% Main authors: fjh, conway.
%
% This module defines the main part of the High Level Data Structure or HLDS
% that deals with issues that concern the module as a whole.
%
% The main data structures defined here are the types
%
%   module_info
%   dependency_info
%
% There is a separate interface section for each of these.
%
%-----------------------------------------------------------------------------%

:- module hlds.hlds_module.
:- interface.

:- import_module analysis.
:- import_module check_hlds.unify_proc.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_pred.
:- import_module hlds.pred_table.
:- import_module hlds.special_pred.
:- import_module libs.globals.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.module_qual.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_foreign.
:- import_module parse_tree.prog_item.
:- import_module recompilation.

:- import_module bool.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module multi_map.
:- import_module pair.
:- import_module relation.
:- import_module set.

:- implementation.

:- import_module transform_hlds.mmc_analysis.
:- import_module parse_tree.modules.

:- import_module int.
:- import_module string.

%-----------------------------------------------------------------------------%

:- interface.

:- type module_info.

:- type foreign_code_info
    --->    foreign_code_info(
                foreign_decl_info,
                foreign_body_info
            ).

:- type pragma_exported_proc
    --->    pragma_exported_proc(
                foreign_language,       % The language we are exporting to.
                pred_id,
                proc_id,
                string,                 % The exported name of the procedure.
                                        % i.e. the function name in C, method
                                        % name in Java etc.
                prog_context
            ).

    % This structure contains the information we need to generate
    % a type_ctor_info structure for a type defined in this module.

:- type type_ctor_gen_info
    --->    type_ctor_gen_info(
                type_ctor,
                module_name,            % module name
                string,                 % type name
                int,                    % type arity
                import_status,          % of the type
                hlds_type_defn,         % defn of type
                pred_proc_id,           % unify procedure
                pred_proc_id            % compare procedure
                % maybe(pred_proc_id)   % prettyprinter, if relevant
            ).

    % Map from proc to a list of unused argument numbers.
    %
:- type unused_arg_info == map(pred_proc_id, list(int)).

    % Map from proc to an indication of whether or not it might throw an
    % exception.
    %
:- type exception_info == map(pred_proc_id, proc_exception_info).

:- type proc_exception_info
    --->    proc_exception_info(
                proc_exception_status               :: exception_status,
                proc_maybe_excep_analysis_status    :: maybe(analysis_status)
            ).

    % Map from proc to an indication of whether or not it modifies the trail.
    %
:- type trailing_info == map(pred_proc_id, proc_trailing_info).

:- type proc_trailing_info
    --->    proc_trailing_info(
                proc_trailing_status                :: trailing_status,
                proc_maybe_trail_analysis_status    :: maybe(analysis_status)
            ).

    % For every procedure that requires its own tabling structure,
    % this field records the information needed to define that
    % structure.
:- type table_struct_map == map(pred_proc_id, table_struct_info).

:- type table_struct_info
    --->    table_struct_info(
                table_struct_proc                   :: proc_table_struct_info,
                table_struct_attrs                  :: table_attributes
            ).

    % Map from a proc to a indication of whether or not it (or one of its
    % subgoals) calls a procedure that is tabled using minimal model tabling.
    %
:- type mm_tabling_info == map(pred_proc_id, proc_mm_tabling_info).

:- type proc_mm_tabling_info
    --->    proc_mm_tabling_info(
                % The tabling status for this procedures as determined
                % by tabling analysis.
                proc_mm_status                      :: mm_tabling_status,

                % The status of the tabling analysis results for this
                % procedure.  This is used by the intermodule-analysis
                % framework to determine if there is any benefit in
                % re-analysing this procedure.
                proc_mm_analysis_status             :: maybe(analysis_status)
            ).

    % List of procedures for which there are user-requested type
    % specializations, and a list of predicates which should be
    % processed by higher_order.m to ensure the production of those
    % versions.
:- type type_spec_info
    --->    type_spec_info(
                % Procedures for which there are user-requested type
                % specializations.
                user_req_procs      :: set(pred_proc_id),

                % Set of predicates which need to be processed by
                % higher_order.m to produce those specialized versions.
                must_process_preds  ::  set(pred_id),

                % Map from predicates for which the user requested a type
                % specialization to the list of predicates which must be
                % processed by higher_order.m to force the production of those
                % versions. This is used by dead_proc_elim.m to avoid creating
                % versions unnecessarily for versions in imported modules.
                user_to_process_map :: multi_map(pred_id, pred_id),

                % Type spec pragmas to be placed in the `.opt' file if a
                % predicate becomes exported.
                pragma_map          :: multi_map(pred_id, pragma_type)
            ).

    % Maps the full names of procedures (in the sense of
    % complexity_proc_name in complexity.m) to the number of their slot
    % in MR_complexity_proc_table.
:- type complexity_proc_map == map(string, int).

:- type complexity_proc_info
    --->    complexity_proc_info(
                % The index of the procedure in the runtime system's
                % MR_complexity_procs array.
                complexity_proc_num     :: int,

                % The full name of the procedure, in the form
                % fqn/arity-modenum, where fqn is the predicate or function's
                % fully qualified name.
                complexity_proc_name    :: string,

                complexity_proc_args    :: list(complexity_arg_info)
            ).

:- type complexity_arg_info
    --->    complexity_arg_info(
                complexity_arg_name :: maybe(string),
                complexity_arg_kind :: complexity_arg_kind
            ).

:- type complexity_arg_kind
    --->    complexity_input_variable_size
    ;       complexity_input_fixed_size
    ;       complexity_output.

    % This type is used to record the mapping between original procedures,
    % and their optimised versions with respect to structure reuse (CTGC).
    %
:- type structure_reuse_map ==
    map(pred_proc_id, pair(pred_proc_id, sym_name)).

%-----------------------------------------------------------------------------%
%
% Types for foreign exported enumerations
%

:- type exported_enum_info
    --->    exported_enum_info(
                foreign_language,
                prog_context,
                type_ctor,
                map(sym_name, string)
            ).

%-----------------------------------------------------------------------------%
%
% Various predicates for manipulating the module_info data structure
%

    % Create an empty module_info for a given module name (and the
    % global options). The item_list is passed so that we can call
    % get_implicit_dependencies to figure out whether to import
    % `table_builtin', but the items are not inserted into the module_info.
    %
:- pred module_info_init(module_name::in, item_list::in, globals::in,
    partial_qualifier_info::in, maybe(recompilation_info)::in,
    module_info::out) is det.

:- pred module_info_get_predicate_table(module_info::in, predicate_table::out)
    is det.

:- pred module_info_set_predicate_table(predicate_table::in,
    module_info::in, module_info::out) is det.

    % For an explanation of the proc_requests structure, see unify_proc.m.
    %
:- pred module_info_get_proc_requests(module_info::in, proc_requests::out)
    is det.

:- pred module_info_get_special_pred_map(module_info::in,
    special_pred_map::out) is det.

:- pred module_info_set_special_pred_map(special_pred_map::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_partial_qualifier_info(module_info::in,
    partial_qualifier_info::out) is det.

:- pred module_info_set_partial_qualifier_info(partial_qualifier_info::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_type_table(module_info::in, type_table::out) is det.

:- pred module_info_set_type_table(type_table::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_inst_table(module_info::in, inst_table::out) is det.

:- pred module_info_set_inst_table(inst_table::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_mode_table(module_info::in, mode_table::out) is det.

:- pred module_info_set_mode_table(mode_table::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_cons_table(module_info::in, cons_table::out) is det.

:- pred module_info_set_cons_table(cons_table::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_class_table(module_info::in, class_table::out) is det.

:- pred module_info_set_class_table(class_table::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_instance_table(module_info::in, instance_table::out)
    is det.

:- pred module_info_set_instance_table(instance_table::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_assertion_table(module_info::in, assertion_table::out)
    is det.

:- pred module_info_set_assertion_table(assertion_table::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_exclusive_table(module_info::in, exclusive_table::out)
    is det.

:- pred module_info_set_exclusive_table(exclusive_table::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_ctor_field_table(module_info::in,
    ctor_field_table::out) is det.

:- pred module_info_set_ctor_field_table(ctor_field_table::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_maybe_recompilation_info(module_info::in,
    maybe(recompilation_info)::out) is det.

:- pred module_info_set_maybe_recompilation_info(maybe(recompilation_info)::in,
    module_info::in, module_info::out) is det.

:- pred module_add_imported_module_specifiers(import_status::in,
    list(module_specifier)::in, module_info::in, module_info::out) is det.

:- pred module_info_get_imported_module_specifiers(module_info::in,
    set(module_specifier)::out) is det.

:- pred module_add_indirectly_imported_module_specifiers(
    list(module_specifier)::in, module_info::in, module_info::out) is det.

:- pred module_info_get_indirectly_imported_module_specifiers(module_info::in,
    set(module_specifier)::out) is det.

    % The visible modules are the current module, any imported modules,
    % any ancestor modules and any modules imported by ancestor modules.
    % It excludes transitively imported modules (those for which we read
    % `.int2' files).
    %
:- pred visible_module(module_name::out, module_info::in) is multi.

    % This returns all the modules that this module's code depends on,
    % i.e. all modules that have been used or imported by this module,
    % directly or indirectly, including parent modules.
    %
:- pred module_info_get_all_deps(module_info::in, set(module_name)::out)
    is det.

%-----------------------------------------------------------------------------%

:- pred module_info_get_name(module_info::in, module_name::out) is det.

:- pred module_info_get_globals(module_info::in, globals::out) is det.

:- pred module_info_set_globals(globals::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_contains_foreign_type(module_info::in, bool::out)
    is det.

:- pred module_info_set_contains_foreign_type(module_info::in,
    module_info::out) is det.

:- pred module_info_get_contains_par_conj(module_info::in, bool::out) is det.

:- pred module_info_set_contains_par_conj(module_info::in, module_info::out)
    is det.

:- pred module_info_get_contains_user_event(module_info::in, bool::out) is det.

:- pred module_info_set_contains_user_event(module_info::in, module_info::out)
    is det.

:- pred module_info_get_foreign_decl(module_info::in, foreign_decl_info::out)
    is det.

:- pred module_info_set_foreign_decl(foreign_decl_info::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_foreign_body_code(module_info::in,
    foreign_body_info::out) is det.

:- pred module_info_set_foreign_body_code(foreign_body_info::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_foreign_import_module(module_info::in,
    foreign_import_module_info_list::out) is det.

:- pred module_info_set_foreign_import_module(
    foreign_import_module_info_list::in,
    module_info::in, module_info::out) is det.

:- pred module_add_foreign_decl(foreign_language::in,
    foreign_decl_is_local::in, string::in, prog_context::in,
    module_info::in, module_info::out) is det.

:- pred module_add_foreign_body_code(foreign_language::in, string::in,
    prog_context::in, module_info::in, module_info::out) is det.

:- pred module_add_foreign_import_module(foreign_language::in, module_name::in,
    prog_context::in, module_info::in, module_info::out) is det.

:- pred module_get_fact_table_files(module_info::in, list(string)::out) is det.

:- pred module_add_fact_table_file(string::in,
    module_info::in, module_info::out) is det.

    % Please see module_info_ensure_dependency_info for the constraints
    % on this dependency_info.
    %
:- pred module_info_get_maybe_dependency_info(module_info::in,
    maybe(dependency_info)::out) is det.

:- pred module_info_get_num_errors(module_info::in, int::out) is det.

:- pred module_info_get_unused_arg_info(module_info::in, unused_arg_info::out)
    is det.

:- pred module_info_get_exception_info(module_info::in, exception_info::out)
    is det.

:- pred module_info_get_trailing_info(module_info::in, trailing_info::out)
    is det.

:- pred module_info_get_table_struct_map(module_info::in,
    table_struct_map::out) is det.

:- pred module_info_get_mm_tabling_info(module_info::in, mm_tabling_info::out)
    is det.

:- pred module_info_set_proc_requests(proc_requests::in,
    module_info::in, module_info::out) is det.

:- pred module_info_set_unused_arg_info(unused_arg_info::in,
    module_info::in, module_info::out) is det.

:- pred module_info_set_exception_info(exception_info::in,
    module_info::in, module_info::out) is det.

:- pred module_info_set_trailing_info(trailing_info::in,
    module_info::in, module_info::out) is det.

:- pred module_info_set_table_struct_map(table_struct_map::in,
    module_info::in, module_info::out) is det.

:- pred module_info_set_mm_tabling_info(mm_tabling_info::in,
    module_info::in, module_info::out) is det.

:- pred module_info_set_num_errors(int::in, module_info::in, module_info::out)
    is det.

:- pred module_info_get_pragma_exported_procs(module_info::in,
    list(pragma_exported_proc)::out) is det.

:- pred module_info_set_pragma_exported_procs(list(pragma_exported_proc)::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_type_ctor_gen_infos(module_info::in,
    list(type_ctor_gen_info)::out) is det.

:- pred module_info_set_type_ctor_gen_infos(list(type_ctor_gen_info)::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_stratified_preds(module_info::in, set(pred_id)::out)
    is det.

:- pred module_info_set_stratified_preds(set(pred_id)::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_type_spec_info(module_info::in, type_spec_info::out)
    is det.

:- pred module_info_set_type_spec_info(type_spec_info::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_no_tag_types(module_info::in, no_tag_type_table::out)
    is det.

:- pred module_info_set_no_tag_types(no_tag_type_table::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_analysis_info(module_info::in, analysis_info::out)
    is det.

:- pred module_info_set_analysis_info(analysis_info::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_maybe_complexity_proc_map(module_info::in,
    maybe(pair(int, complexity_proc_map))::out) is det.

:- pred module_info_set_maybe_complexity_proc_map(
    maybe(pair(int, complexity_proc_map))::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_complexity_proc_infos(module_info::in,
    list(complexity_proc_info)::out) is det.

:- pred module_info_set_complexity_proc_infos(list(complexity_proc_info)::in,
    module_info::in, module_info::out) is det.

:- pred module_info_new_user_init_pred(sym_name::in, arity::in, string::out,
    module_info::in, module_info::out) is det.

:- pred module_info_user_init_pred_c_names(module_info::in,
    list(string)::out) is det.

:- pred module_info_user_init_pred_procs(module_info::in,
    list(pred_proc_id)::out) is det.

:- pred module_info_new_user_final_pred(sym_name::in, arity::in, string::out,
    module_info::in, module_info::out) is det.

:- pred module_info_user_final_pred_c_names(module_info::in,
    list(string)::out) is det.

:- pred module_info_user_final_pred_procs(module_info::in,
    list(pred_proc_id)::out) is det.

:- pred module_info_get_structure_reuse_map(module_info::in,
    structure_reuse_map::out) is det.

:- pred module_info_set_structure_reuse_map(structure_reuse_map::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_used_modules(module_info::in,
    used_modules::out) is det.

:- pred module_info_set_used_modules(used_modules::in,
    module_info::in, module_info::out) is det.

:- pred module_info_add_parents_to_used_modules(list(module_name)::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_interface_module_specifiers(module_info::in,
    set(module_name)::out) is det.

:- pred module_info_get_exported_enums(module_info::in,
    list(exported_enum_info)::out) is det.

:- pred module_info_set_exported_enums(list(exported_enum_info)::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_event_set(module_info::in, event_set::out) is det.

:- pred module_info_set_event_set(event_set::in,
    module_info::in, module_info::out) is det.

%-----------------------------------------------------------------------------%

:- pred module_info_preds(module_info::in, pred_table::out) is det.

    % Given a pred_id, return the pred_info of the specified pred.
    %
:- pred module_info_pred_info(module_info::in, pred_id::in, pred_info::out)
    is det.

    % Given a pred_proc_id, return the proc_info of the specified procedure.
    %
:- pred module_info_proc_info(module_info::in, pred_proc_id::in,
    proc_info::out) is det.
:- pred module_info_proc_info(module_info::in, pred_id::in, proc_id::in,
    proc_info::out) is det.

    % Given a pred_id and a proc_id, get the pred_info of that predicate
    % and the proc_info for that mode of that predicate.
    %
:- pred module_info_pred_proc_info(module_info::in, pred_id::in, proc_id::in,
    pred_info::out, proc_info::out) is det.

:- pred module_info_pred_proc_info(module_info::in, pred_proc_id::in,
    pred_info::out, proc_info::out) is det.

    % Return a list of the pred_ids of all the "valid" predicates.
    % (Predicates whose definition contains a type error, etc.
    % get removed from this list, so that later passes can rely
    % on the predicates in this list being type-correct, etc.)
    %
    % This operation does not logically change the module_info,
    % but does update it physically.
    %
:- pred module_info_predids(list(pred_id)::out,
    module_info::in, module_info::out) is det.

    % Remove a predicate from the list of pred_ids, to prevent
    % further processing of this predicate after an error is encountered.
    %
:- pred module_info_remove_predid(pred_id::in,
    module_info::in, module_info::out) is det.

    % Completely remove a predicate from a module.
    %
:- pred module_info_remove_predicate(pred_id::in,
    module_info::in, module_info::out) is det.

:- pred module_info_set_preds(pred_table::in,
    module_info::in, module_info::out) is det.

:- pred module_info_set_pred_info(pred_id::in, pred_info::in,
    module_info::in, module_info::out) is det.

:- pred module_info_set_pred_proc_info(pred_id::in, proc_id::in,
    pred_info::in, proc_info::in, module_info::in, module_info::out) is det.

:- pred module_info_set_pred_proc_info(pred_proc_id::in,
    pred_info::in, proc_info::in, module_info::in, module_info::out) is det.

:- pred module_info_typeids(module_info::in, list(type_ctor)::out) is det.

:- pred module_info_instids(module_info::in, list(inst_id)::out) is det.

:- pred module_info_modeids(module_info::in, list(mode_id)::out) is det.

:- pred module_info_consids(module_info::in, list(cons_id)::out) is det.

    % Please see module_info_ensure_dependency_info for the
    % constraints on this dependency_info.
    %
:- pred module_info_dependency_info(module_info::in, dependency_info::out)
    is det.

    % Please see module_info_ensure_dependency_info for the
    % constraints on this dependency_info.
    %
:- pred module_info_set_dependency_info(dependency_info::in,
    module_info::in, module_info::out) is det.

:- pred module_info_clobber_dependency_info(module_info::in, module_info::out)
    is det.

:- pred module_info_incr_errors(module_info::in, module_info::out) is det.

:- pred module_info_incr_num_errors(int::in,
    module_info::in, module_info::out) is det.

    % The module_info stores a counter which is used to distinguish
    % lambda predicates which appear on the same line in the same file.
    % This predicate returns the next number for the given context
    % and increments the counter for that context.
    %
:- pred module_info_next_lambda_count(prog_context::in, int::out,
    module_info::in, module_info::out) is det.

:- pred module_info_next_model_non_pragma_count(int::out,
    module_info::in, module_info::out) is det.

    % Once the module_info has been built, we call module_info_optimize
    % to attempt to optimize the data structures for lots of accesses
    % and relatively few insertion/deletions. (This was useful when
    % we were using unbalanced binary trees, but now that we are using
    % 234-trees, it is a no-op, except for the mode and inst tables,
    % where the cached lists of mode_ids and inst_ids are sorted for
    % efficient conversion to sets in module_qual.m.)
    %
:- pred module_info_optimize(module_info::in, module_info::out) is det.

%-----------------------------------------------------------------------------%

:- pred predicate_id(module_info::in, pred_id::in, module_name::out,
    string::out, arity::out) is det.

:- func predicate_module(module_info, pred_id) = module_name.
:- func predicate_name(module_info, pred_id) = string.
:- func predicate_arity(module_info, pred_id) = arity.

%-----------------------------------------------------------------------------%

:- implementation.

:- import_module libs.compiler_util.
:- import_module parse_tree.prog_util.

:- import_module assoc_list.
:- import_module counter.

:- pred module_info_get_lambdas_per_context(module_info::in,
    map(prog_context, counter)::out) is det.

:- pred module_info_set_lambdas_per_context(map(prog_context, counter)::in,
    module_info::in, module_info::out) is det.

:- pred module_info_get_model_non_pragma_counter(module_info::in, counter::out)
    is det.

:- pred module_info_set_model_non_pragma_counter(counter::in,
    module_info::in, module_info::out) is det.

:- pred module_info_set_maybe_dependency_info(maybe(dependency_info)::in,
    module_info::in, module_info::out) is det.

:- type module_info
    --->    module_info(
                sub_info                    :: module_sub_info,
                predicate_table             :: predicate_table,
                proc_requests               :: proc_requests,
                special_pred_map            :: special_pred_map,
                partial_qualifier_info      :: partial_qualifier_info,
                type_table                  :: type_table,
                inst_table                  :: inst_table,
                mode_table                  :: mode_table,
                cons_table                  :: cons_table,
                class_table                 :: class_table,
                instance_table              :: instance_table,
                assertion_table             :: assertion_table,
                exclusive_table             :: exclusive_table,
                ctor_field_table            :: ctor_field_table,
                maybe_recompilation_info    :: maybe(recompilation_info)
            ).

:- type module_sub_info
    --->    module_sub_info(
                module_name                 :: module_name,
                globals                     :: globals,
                contains_par_conj           :: bool,
                contains_user_event         :: bool,
                contains_foreign_type       :: bool,
                foreign_decl_info           :: foreign_decl_info,
                foreign_body_info           :: foreign_body_info,
                foreign_import_modules      :: foreign_import_module_info_list,

                % The names of the files containing fact tables implementing
                % predicates defined in this module.
                fact_table_file_names       :: list(string),

                % This dependency info is constrained to be only for between
                % procedures which have clauses defined for them in this
                % compilation unit (that includes opt_imported procedures).
                maybe_dependency_info       :: maybe(dependency_info),

                num_errors                  :: int,

                % List of the procs for which there is a
                % pragma foreign_export(...) declaration.
                pragma_exported_procs       :: list(pragma_exported_proc),

                type_ctor_gen_infos         :: list(type_ctor_gen_info),
                must_be_stratified_preds    :: set(pred_id),

                % Unused argument info about predicates in the current module
                % which has been exported in .opt files.
                unused_arg_info             :: unused_arg_info,

                % Exception information about procedures in the current module
                % NOTE: this includes opt_imported procedures.
                exception_info              :: exception_info,

                % Information about whether procedures in the current module
                % modify the trail or not.
                % NOTE: this includes opt_imported procedures.
                trailing_info               :: trailing_info,

                % For every procedure that requires its own tabling structure,
                % this field records the information needed to define that
                % structure.
                table_struct_map            :: table_struct_map,

                % Information about if procedures in the current module make
                % calls to procedures that are evaluted using minimal model
                % tabling.
                % NOTE: this includes opt_imported procedures.
                mm_tabling_info             :: mm_tabling_info,

                % How many lambda expressions there are at different contexts
                % in the module. This is used to uniquely identify lambda
                % expressions that appear on the same line of the same file.
                lambdas_per_context         :: map(prog_context, counter),

                % Used to ensure uniqueness of the structure types defined
                % so far for model_non foreign_procs.
                model_non_pragma_counter    :: counter,

                % All the directly imported module specifiers (used during type
                % checking, and by the MLDS back-end).
                imported_module_specifiers  :: set(module_specifier),

                % All the indirectly imported modules (used by the MLDS
                % back-end).
                indirectly_imported_module_specifiers :: set(module_specifier),

                % Data used for user-guided type specialization.
                type_spec_info              :: type_spec_info,

                % Information about no tag types. This information is also
                % in the type_table, but lookups in this table will be much
                % faster.
                no_tag_type_table           :: no_tag_type_table,

                % Information about the procedures we are performing
                % complexity experiments on.
                maybe_complexity_proc_map   :: maybe(pair(int,
                                                complexity_proc_map)),
                complexity_proc_infos       :: list(complexity_proc_info),

                % Information for the inter-module analysis framework.
                analysis_info               :: analysis_info,

                % Exported C names for preds appearing in `:- initialise
                % initpred' directives in this module, in order of appearance.
                user_init_pred_c_names      :: assoc_list(sym_name_and_arity,
                                                string),

                % Export C names for preds appearing in `:- finalise
                % finalpred' directives in this module, in order of
                % appearance.
                user_final_pred_c_names     :: assoc_list(sym_name_and_arity,
                                                string),

                % Information about which procedures implement structure reuse.
                structure_reuse_map         :: structure_reuse_map,

                % The modules which have already been calculated as being used.
                % Currently this is the module imports inherited from the
                % parent modules plus those calculated during expansion of
                % equivalence types and insts.
                used_modules                :: used_modules,

                % All the directly imported module specifiers in the interface.
                % (Used by unused_imports analysis).
                interface_module_specifiers :: set(module_specifier),
           
                % Enumeration types that have been exported to a foreign
                % language.
                exported_enums              :: list(exported_enum_info),

                event_set                   :: event_set
            ).

module_info_init(Name, Items, Globals, QualifierInfo, RecompInfo,
        ModuleInfo) :-
    ContainsParConj = no,
    ContainsUserEvent = no,
    ContainsForeignType = no,
    ForeignDeclInfo = [],
    ForeignBodyInfo = [],
    ForeignImportModules = [],
    FactTableFiles = [],
    MaybeDependencyInfo = no,
    NumErrors = 0,
    PragmaExportedProcs = [],
    MustBeStratifiedPreds = [],
    set.init(StratPreds),
    map.init(UnusedArgInfo),
    map.init(ExceptionInfo),
    map.init(TrailingInfo),
    map.init(TablingStructMap),
    map.init(MM_TablingInfo),
    map.init(LambdasPerContext),
    counter.init(1, ModelNonPragmaCounter),

    % The builtin modules are automatically imported.
    get_implicit_dependencies(Items, Globals, ImportDeps, UseDeps),
    set.list_to_set(ImportDeps ++ UseDeps, ImportedModules),
    set.init(IndirectlyImportedModules),

    set.init(TypeSpecPreds),
    set.init(TypeSpecForcePreds),
    map.init(SpecMap),
    map.init(PragmaMap),
    TypeSpecInfo = type_spec_info(TypeSpecPreds, TypeSpecForcePreds,
        SpecMap, PragmaMap),

    map.init(NoTagTypes),

    MaybeComplexityMap = no,
    ComplexityProcInfos = [],
    AnalysisInfo = init_analysis_info(mmc),
    UserInitPredCNames = [],
    UserFinalPredCNames = [],
    map.init(StructureReuseMap),
    UsedModules = used_modules_init,
    set.init(InterfaceModuleSpecs),
    ExportedEnums = [],
    EventSet = event_set("", map.init),

    ModuleSubInfo = module_sub_info(Name, Globals,
        ContainsParConj, ContainsUserEvent, ContainsForeignType,
        ForeignDeclInfo, ForeignBodyInfo, ForeignImportModules, FactTableFiles,
        MaybeDependencyInfo, NumErrors, PragmaExportedProcs,
        MustBeStratifiedPreds, StratPreds, UnusedArgInfo,
        ExceptionInfo, TrailingInfo, TablingStructMap, MM_TablingInfo,
        LambdasPerContext, ModelNonPragmaCounter, ImportedModules,
        IndirectlyImportedModules, TypeSpecInfo, NoTagTypes,
        MaybeComplexityMap, ComplexityProcInfos,
        AnalysisInfo, UserInitPredCNames, UserFinalPredCNames,
        StructureReuseMap, UsedModules, InterfaceModuleSpecs,
        ExportedEnums, EventSet),

    predicate_table_init(PredicateTable),
    unify_proc.init_requests(Requests),
    map.init(UnifyPredMap),
    map.init(Types),
    inst_table_init(Insts),
    mode_table_init(Modes),
    map.init(Ctors),
    map.init(ClassTable),
    map.init(InstanceTable),
    assertion_table_init(AssertionTable),
    exclusive_table_init(ExclusiveTable),
    map.init(FieldNameTable),

    ModuleInfo = module_info(ModuleSubInfo, PredicateTable, Requests,
        UnifyPredMap, QualifierInfo, Types, Insts, Modes, Ctors,
        ClassTable, InstanceTable, AssertionTable, ExclusiveTable,
        FieldNameTable, RecompInfo).

%-----------------------------------------------------------------------------%
%
% Various predicates which access the module_info data structure
%

module_info_get_predicate_table(MI, MI ^ predicate_table).
module_info_get_proc_requests(MI, MI ^ proc_requests).
module_info_get_special_pred_map(MI, MI ^ special_pred_map).
module_info_get_partial_qualifier_info(MI, MI ^ partial_qualifier_info).
module_info_get_type_table(MI, MI ^ type_table).
module_info_get_inst_table(MI, MI ^ inst_table).
module_info_get_mode_table(MI, MI ^ mode_table).
module_info_get_cons_table(MI, MI ^ cons_table).
module_info_get_class_table(MI, MI ^ class_table).
module_info_get_instance_table(MI, MI ^ instance_table).
module_info_get_assertion_table(MI, MI ^ assertion_table).
module_info_get_exclusive_table(MI, MI ^ exclusive_table).
module_info_get_ctor_field_table(MI, MI ^ ctor_field_table).
module_info_get_maybe_recompilation_info(MI, MI ^ maybe_recompilation_info).

%-----------------------------------------------------------------------------%
%
% Various predicates which modify the module_info data structure.
%

module_info_set_predicate_table(PT, MI, MI ^ predicate_table := PT).
module_info_set_proc_requests(PR, MI, MI ^ proc_requests := PR).
module_info_set_special_pred_map(SPM, MI, MI ^ special_pred_map := SPM).
module_info_set_partial_qualifier_info(PQ, MI,
    MI ^ partial_qualifier_info := PQ).
module_info_set_type_table(T, MI, MI ^ type_table := T).
module_info_set_inst_table(I, MI, MI ^ inst_table := I).
module_info_set_mode_table(M, MI, MI ^ mode_table := M).
module_info_set_cons_table(C, MI, MI ^ cons_table := C).
module_info_set_class_table(C, MI, MI ^ class_table := C).
module_info_set_instance_table(I, MI, MI ^ instance_table := I).
module_info_set_assertion_table(A, MI, MI ^ assertion_table := A).
module_info_set_exclusive_table(PXT, MI, MI ^ exclusive_table := PXT).
module_info_set_ctor_field_table(CF, MI, MI ^ ctor_field_table := CF).
module_info_set_maybe_recompilation_info(I, MI,
    MI ^ maybe_recompilation_info := I).

%-----------------------------------------------------------------------------%
%
% Various predicates which access the module_sub_info data structure
% via the module_info structure.
%

module_info_get_name(MI, MI ^ sub_info ^ module_name).
module_info_get_globals(MI, MI ^ sub_info ^ globals).
module_info_get_contains_foreign_type(MI,
    MI ^ sub_info ^ contains_foreign_type).
module_info_get_contains_par_conj(MI, MI ^ sub_info ^ contains_par_conj).
module_info_get_contains_user_event(MI, MI ^ sub_info ^ contains_user_event).
module_info_get_foreign_decl(MI, MI ^ sub_info ^ foreign_decl_info).
module_info_get_foreign_body_code(MI, MI ^ sub_info ^ foreign_body_info).
module_info_get_foreign_import_module(MI,
    MI ^ sub_info ^ foreign_import_modules).
module_info_get_maybe_dependency_info(MI,
    MI ^ sub_info ^ maybe_dependency_info).
module_info_get_num_errors(MI, MI ^ sub_info ^ num_errors).
module_info_get_pragma_exported_procs(MI,
    MI ^ sub_info ^ pragma_exported_procs).
module_info_get_type_ctor_gen_infos(MI, MI ^ sub_info ^ type_ctor_gen_infos).
module_info_get_stratified_preds(MI, MI ^ sub_info ^ must_be_stratified_preds).
module_info_get_unused_arg_info(MI, MI ^ sub_info ^ unused_arg_info).
module_info_get_exception_info(MI, MI ^ sub_info ^ exception_info).
module_info_get_trailing_info(MI, MI ^ sub_info ^ trailing_info).
module_info_get_table_struct_map(MI, MI ^ sub_info ^ table_struct_map).
module_info_get_mm_tabling_info(MI, MI ^ sub_info ^ mm_tabling_info).
module_info_get_lambdas_per_context(MI, MI ^ sub_info ^ lambdas_per_context).
module_info_get_model_non_pragma_counter(MI,
    MI ^ sub_info ^ model_non_pragma_counter).
module_info_get_imported_module_specifiers(MI,
    MI ^ sub_info ^ imported_module_specifiers).
module_info_get_indirectly_imported_module_specifiers(MI,
    MI ^ sub_info ^ indirectly_imported_module_specifiers).
module_info_get_type_spec_info(MI, MI ^ sub_info ^ type_spec_info).
module_info_get_no_tag_types(MI, MI ^ sub_info ^ no_tag_type_table).
module_info_get_analysis_info(MI, MI ^ sub_info ^ analysis_info).
module_info_get_maybe_complexity_proc_map(MI,
    MI ^ sub_info ^ maybe_complexity_proc_map).
module_info_get_complexity_proc_infos(MI,
    MI ^ sub_info ^ complexity_proc_infos).
module_info_get_structure_reuse_map(MI, MI ^ sub_info ^ structure_reuse_map).
module_info_get_used_modules(MI, MI ^ sub_info ^ used_modules).
module_info_get_interface_module_specifiers(MI,
    MI ^ sub_info ^ interface_module_specifiers).
module_info_get_exported_enums(MI, MI ^ sub_info ^ exported_enums).
module_info_get_event_set(MI, MI ^ sub_info ^ event_set).

    % XXX There is some debate as to whether duplicate initialise directives
    % in the same module should constitute an error. Currently it is not, but
    % we may wish to revisit this code. The reference manual is therefore
    % deliberately quiet on the subject.
    %
module_info_new_user_init_pred(SymName, Arity, CName, !MI) :-
    InitPredCNames0 = !.MI ^ sub_info ^ user_init_pred_c_names,
    UserInitPredNo = list.length(InitPredCNames0),
    module_info_get_name(!.MI, ModuleSymName0),
    ( mercury_std_library_module_name(ModuleSymName0) ->
        ModuleSymName = add_outermost_qualifier("mercury", ModuleSymName0)
    ;
        ModuleSymName = ModuleSymName0
    ),
    ModuleName = prog_foreign.sym_name_mangle(ModuleSymName),
    CName = string.format("%s__user_init_pred_%d",
        [s(ModuleName), i(UserInitPredNo)]),
    InitPredCNames = InitPredCNames0 ++ [SymName / Arity - CName],
    !:MI = !.MI ^ sub_info ^ user_init_pred_c_names := InitPredCNames.

module_info_user_init_pred_c_names(MI, CNames) :-
    InitPredCNames = MI ^ sub_info ^ user_init_pred_c_names,
    CNames = assoc_list.values(InitPredCNames).

module_info_new_user_final_pred(SymName, Arity, CName, !MI) :-
    FinalPredCNames0 = !.MI ^ sub_info ^ user_final_pred_c_names,
    UserFinalPredNo = list.length(FinalPredCNames0),
    module_info_get_name(!.MI, ModuleSymName0),
    ( mercury_std_library_module_name(ModuleSymName0) ->
        ModuleSymName = add_outermost_qualifier("mercury", ModuleSymName0)
    ;
        ModuleSymName = ModuleSymName0
    ),
    ModuleName = prog_foreign.sym_name_mangle(ModuleSymName),
    CName = string.format("%s__user_final_pred_%d",
        [s(ModuleName), i(UserFinalPredNo)]),
    FinalPredCNames = FinalPredCNames0 ++ [SymName / Arity - CName],
    !:MI = !.MI ^ sub_info ^ user_final_pred_c_names := FinalPredCNames.

module_info_user_final_pred_c_names(MI, CNames) :-
    FinalPredCNames = MI ^ sub_info ^ user_final_pred_c_names,
    CNames = assoc_list.values(FinalPredCNames).

module_info_user_init_pred_procs(MI, PredProcIds) :-
    InitPredSymNames = MI ^ sub_info ^ user_init_pred_c_names,
    SymNameAndArities = assoc_list.keys(InitPredSymNames),
    list.map(module_info_user_init_fn_pred_procs_2(MI), SymNameAndArities,
        PredProcIds).

module_info_user_final_pred_procs(MI, PredProcIds) :-
    FinalPredSymNames = MI ^ sub_info ^ user_final_pred_c_names,
    SymNameAndArities = assoc_list.keys(FinalPredSymNames),
    list.map(module_info_user_init_fn_pred_procs_2(MI), SymNameAndArities,
        PredProcIds).

:- pred module_info_user_init_fn_pred_procs_2(module_info::in,
    sym_name_and_arity::in, pred_proc_id::out) is det.

module_info_user_init_fn_pred_procs_2(MI, SymName / Arity, PredProcId) :-
    module_info_get_predicate_table(MI, PredTable),
    (
        predicate_table_search_pred_sym_arity(PredTable,
            may_be_partially_qualified, SymName, Arity, [PredId])
    ->
        pred_table.get_proc_id(MI, PredId, ProcId),
        PredProcId = proc(PredId, ProcId)
    ;
        unexpected(this_file, "module_info_user_init_fn_pred_procs_2")
    ).

%-----------------------------------------------------------------------------%
%
% Various predicates which modify the module_sub_info data structure
% via the module_info structure.
%

module_info_set_globals(NewVal, MI,
    MI ^ sub_info ^ globals := NewVal).
module_info_set_contains_foreign_type(MI,
    MI ^ sub_info ^ contains_foreign_type := yes).
module_info_set_contains_par_conj(MI,
    MI ^ sub_info ^ contains_par_conj := yes).
module_info_set_contains_user_event(MI,
    MI ^ sub_info ^ contains_user_event := yes).
module_info_set_foreign_decl(NewVal, MI,
    MI ^ sub_info ^ foreign_decl_info := NewVal).
module_info_set_foreign_body_code(NewVal, MI,
    MI ^ sub_info ^ foreign_body_info := NewVal).
module_info_set_foreign_import_module(NewVal, MI,
    MI ^ sub_info ^ foreign_import_modules := NewVal).
module_info_set_maybe_dependency_info(NewVal, MI,
    MI ^ sub_info ^ maybe_dependency_info := NewVal).
module_info_set_num_errors(NewVal, MI,
    MI ^ sub_info ^ num_errors := NewVal).
module_info_set_pragma_exported_procs(NewVal, MI,
    MI ^ sub_info ^ pragma_exported_procs := NewVal).
module_info_set_type_ctor_gen_infos(NewVal, MI,
    MI ^ sub_info ^ type_ctor_gen_infos := NewVal).
module_info_set_stratified_preds(NewVal, MI,
    MI ^ sub_info ^ must_be_stratified_preds := NewVal).
module_info_set_unused_arg_info(NewVal, MI,
    MI ^ sub_info ^ unused_arg_info := NewVal).
module_info_set_exception_info(NewVal, MI,
    MI ^ sub_info ^ exception_info := NewVal).
module_info_set_trailing_info(NewVal, MI,
    MI ^ sub_info ^ trailing_info := NewVal).
module_info_set_table_struct_map(NewVal, MI,
    MI ^ sub_info ^ table_struct_map := NewVal).
module_info_set_mm_tabling_info(NewVal, MI,
    MI ^ sub_info ^ mm_tabling_info := NewVal).
module_info_set_lambdas_per_context(NewVal, MI,
    MI ^ sub_info ^ lambdas_per_context := NewVal).
module_info_set_model_non_pragma_counter(NewVal, MI,
    MI ^ sub_info ^ model_non_pragma_counter := NewVal).
module_add_imported_module_specifiers(IStat, ModuleSpecifiers, !MI) :-
    !:MI = !.MI ^ sub_info ^ imported_module_specifiers :=
        set.insert_list(!.MI ^ sub_info ^ imported_module_specifiers,
            ModuleSpecifiers),
    ( status_is_exported_to_non_submodules(IStat) = yes ->
        !:MI = !.MI ^ sub_info ^ interface_module_specifiers :=
            set.insert_list(!.MI ^ sub_info ^ interface_module_specifiers,
                ModuleSpecifiers)
    ;
        true
    ).

module_add_indirectly_imported_module_specifiers(Modules, MI,
    MI ^ sub_info ^ indirectly_imported_module_specifiers :=
        set.insert_list(MI ^ sub_info ^ indirectly_imported_module_specifiers,
            Modules)).
module_info_set_type_spec_info(NewVal, MI,
    MI ^ sub_info ^ type_spec_info := NewVal).
module_info_set_no_tag_types(NewVal, MI,
    MI ^ sub_info ^ no_tag_type_table := NewVal).
module_info_set_analysis_info(NewVal, MI,
    MI ^ sub_info ^ analysis_info := NewVal).
module_info_set_maybe_complexity_proc_map(NewVal, MI,
    MI ^ sub_info ^ maybe_complexity_proc_map := NewVal).
module_info_set_complexity_proc_infos(NewVal, MI,
    MI ^ sub_info ^ complexity_proc_infos := NewVal).
module_info_set_structure_reuse_map(ReuseMap, MI,
    MI ^ sub_info ^ structure_reuse_map := ReuseMap).
module_info_set_used_modules(UsedModules, MI,
    MI ^ sub_info ^ used_modules := UsedModules).
module_info_set_event_set(EventSet, MI, MI ^ sub_info ^ event_set := EventSet).

module_info_add_parents_to_used_modules(Modules, MI,
        MI ^ sub_info ^ used_modules := UsedModules) :-
    module_info_get_used_modules(MI, UsedModules0),
    list.foldl(add_all_modules(visibility_public),
            Modules, UsedModules0, UsedModules).
module_info_set_exported_enums(ExportedEnums, MI,
        MI ^ sub_info ^ exported_enums := ExportedEnums).

%-----------------------------------------------------------------------------%

    % Various predicates which do simple things that are nevertheless
    % beyond the capability of an access predicate.

module_info_preds(MI, Preds) :-
    module_info_get_predicate_table(MI, PredTable),
    predicate_table_get_preds(PredTable, Preds).

module_info_pred_info(MI, PredId, PredInfo) :-
    module_info_preds(MI, Preds),
    ( map.search(Preds, PredId, PredInfoPrime) ->
        PredInfo = PredInfoPrime
    ;
        pred_id_to_int(PredId, PredInt),
        string.int_to_string(PredInt, PredStr),
        string.append("cannot find predicate number ", PredStr, Msg),
        unexpected(this_file, Msg)
    ).

module_info_proc_info(MI, PPId, ProcInfo) :-
    module_info_pred_proc_info(MI, PPId, _, ProcInfo).

module_info_proc_info(MI, PredId, ProcId, ProcInfo) :-
    module_info_pred_proc_info(MI, PredId, ProcId, _, ProcInfo).

module_info_pred_proc_info(MI, PredId, ProcId, PredInfo, ProcInfo) :-
    module_info_pred_info(MI, PredId, PredInfo),
    pred_info_get_procedures(PredInfo, Procs),
    map.lookup(Procs, ProcId, ProcInfo).

module_info_pred_proc_info(MI, proc(PredId, ProcId), PredInfo, ProcInfo) :-
    module_info_pred_proc_info(MI, PredId, ProcId, PredInfo, ProcInfo).

module_info_predids(PredIds, !MI) :-
    module_info_get_predicate_table(!.MI, PredTable0),
    predicate_table_get_predids(PredIds, PredTable0, PredTable),
    module_info_set_predicate_table(PredTable, !MI).

module_info_remove_predid(PredId, !MI) :-
    module_info_get_predicate_table(!.MI, PredTable0),
    predicate_table_remove_predid(PredId, PredTable0, PredTable),
    module_info_set_predicate_table(PredTable, !MI).

module_info_remove_predicate(PredId, !MI) :-
    module_info_get_predicate_table(!.MI, PredTable0),
    predicate_table_remove_predicate(PredId, PredTable0, PredTable),
    module_info_set_predicate_table(PredTable, !MI).

module_info_set_preds(Preds, !MI) :-
    module_info_get_predicate_table(!.MI, PredTable0),
    predicate_table_set_preds(Preds, PredTable0, PredTable),
    module_info_set_predicate_table(PredTable, !MI).

module_info_set_pred_info(PredId, PredInfo, !MI) :-
    module_info_preds(!.MI, Preds0),
    map.set(Preds0, PredId, PredInfo, Preds),
    module_info_set_preds(Preds, !MI).

module_info_set_pred_proc_info(proc(PredId, ProcId), PredInfo, ProcInfo,
        !MI) :-
    module_info_set_pred_proc_info(PredId, ProcId,
        PredInfo, ProcInfo, !MI).

module_info_set_pred_proc_info(PredId, ProcId, PredInfo0, ProcInfo, !MI) :-
    pred_info_get_procedures(PredInfo0, Procs0),
    map.set(Procs0, ProcId, ProcInfo, Procs),
    pred_info_set_procedures(Procs, PredInfo0, PredInfo),
    module_info_set_pred_info(PredId, PredInfo, !MI).

module_info_typeids(MI, TypeCtors) :-
    module_info_get_type_table(MI, Types),
    map.keys(Types, TypeCtors).

module_info_instids(MI, InstIds) :-
    module_info_get_inst_table(MI, InstTable),
    inst_table_get_user_insts(InstTable, UserInstTable),
    user_inst_table_get_inst_ids(UserInstTable, InstIds).

module_info_modeids(MI, ModeIds) :-
    module_info_get_mode_table(MI, Modes),
    mode_table_get_mode_ids(Modes, ModeIds).

module_info_consids(MI, ConsIds) :-
    module_info_get_cons_table(MI, Ctors),
    map.keys(Ctors, ConsIds).

module_info_dependency_info(MI, DepInfo) :-
    module_info_get_maybe_dependency_info(MI, MaybeDepInfo),
    (
        MaybeDepInfo = yes(DepInfoPrime),
        DepInfo = DepInfoPrime
    ;
        MaybeDepInfo = no,
        unexpected(this_file, "Attempted to access invalid dependency_info")
    ).

module_info_set_dependency_info(DependencyInfo, !MI) :-
    module_info_set_maybe_dependency_info(yes(DependencyInfo), !MI).

module_info_clobber_dependency_info(!MI) :-
    module_info_set_maybe_dependency_info(no, !MI).

module_info_incr_errors(!MI) :-
    module_info_incr_num_errors(1, !MI).

module_info_incr_num_errors(Incr, !MI) :-
    module_info_get_num_errors(!.MI, Errs0),
    Errs = Errs0 + Incr,
    module_info_set_num_errors(Errs, !MI).

module_info_next_lambda_count(Context, Count, !MI) :-
    module_info_get_lambdas_per_context(!.MI, ContextCounter0),
    (
        map.insert(ContextCounter0, Context, counter.init(2),
            FoundContextCounter)
    ->
        Count = 1,
        ContextCounter = FoundContextCounter
    ;
        map.lookup(ContextCounter0, Context, Counter0),
        counter.allocate(Count, Counter0, Counter),
        map.det_update(ContextCounter0, Context, Counter, ContextCounter)
    ),
    module_info_set_lambdas_per_context(ContextCounter, !MI).

module_info_next_model_non_pragma_count(Count, !MI) :-
    module_info_get_model_non_pragma_counter(!.MI, Counter0),
    counter.allocate(Count, Counter0, Counter),
    module_info_set_model_non_pragma_counter(Counter, !MI).

module_info_optimize(!ModuleInfo) :-
    module_info_get_predicate_table(!.ModuleInfo, Preds0),
    predicate_table_optimize(Preds0, Preds),
    module_info_set_predicate_table(Preds, !ModuleInfo),

    module_info_get_type_table(!.ModuleInfo, Types0),
    map.optimize(Types0, Types),
    module_info_set_type_table(Types, !ModuleInfo),

    module_info_get_inst_table(!.ModuleInfo, InstTable0),
    inst_table_get_user_insts(InstTable0, Insts0),
    user_inst_table_optimize(Insts0, Insts),
    inst_table_set_user_insts(Insts, InstTable0, InstTable),
    module_info_set_inst_table(InstTable, !ModuleInfo),

    module_info_get_mode_table(!.ModuleInfo, Modes0),
    mode_table_optimize(Modes0, Modes),
    module_info_set_mode_table(Modes, !ModuleInfo),

    module_info_get_cons_table(!.ModuleInfo, Ctors0),
    map.optimize(Ctors0, Ctors),
    module_info_set_cons_table(Ctors, !ModuleInfo).

visible_module(VisibleModule, ModuleInfo) :-
    module_info_get_name(ModuleInfo, ThisModule),
    module_info_get_imported_module_specifiers(ModuleInfo, ImportedModules),
    (
        VisibleModule = ThisModule
    ;
        set.member(VisibleModule, ImportedModules)
    ;
        ParentModules = get_ancestors(ThisModule),
        list.member(VisibleModule, ParentModules)
    ).

module_info_get_all_deps(ModuleInfo, AllImports) :-
    module_info_get_name(ModuleInfo, ModuleName),
    Parents = get_ancestors(ModuleName),
    module_info_get_imported_module_specifiers(ModuleInfo, DirectImports),
    module_info_get_indirectly_imported_module_specifiers(ModuleInfo,
        IndirectImports),
    AllImports = set.union_list([IndirectImports, DirectImports,
        set.list_to_set(Parents)]).

module_add_foreign_decl(Lang, IsLocal, ForeignDecl, Context, !Module) :-
    module_info_get_foreign_decl(!.Module, ForeignDeclIndex0),
    % Store the decls in reverse order and reverse them later for efficiency.
    ForeignDeclIndex = [foreign_decl_code(Lang, IsLocal, ForeignDecl, Context)
        | ForeignDeclIndex0],
    module_info_set_foreign_decl(ForeignDeclIndex, !Module).

module_add_foreign_body_code(Lang, Foreign_Body_Code, Context, !Module) :-
    module_info_get_foreign_body_code(!.Module, Foreign_Body_List0),
    % Store the decls in reverse order and reverse them later for efficiency.
    Foreign_Body_List =
        [foreign_body_code(Lang, Foreign_Body_Code, Context) |
            Foreign_Body_List0],
    module_info_set_foreign_body_code(Foreign_Body_List, !Module).

module_add_foreign_import_module(Lang, ModuleName, Context, !Module) :-
    module_info_get_foreign_import_module(!.Module, ForeignImportIndex0),
    % Store the decls in reverse order and reverse them later for efficiency.
    ForeignImportIndex =
        [foreign_import_module_info(Lang, ModuleName, Context) |
            ForeignImportIndex0],
    module_info_set_foreign_import_module(ForeignImportIndex, !Module).

module_get_fact_table_files(Module, FileNames) :-
    FileNames = Module ^ sub_info ^ fact_table_file_names.

module_add_fact_table_file(FileName, !Module) :-
    FileNames = !.Module ^ sub_info ^ fact_table_file_names,
    !:Module = !.Module ^ sub_info ^ fact_table_file_names
        := [FileName | FileNames].

%-----------------------------------------------------------------------------%

predicate_id(ModuleInfo, PredId, ModuleName, PredName, Arity) :-
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    ModuleName = pred_info_module(PredInfo),
    PredName = pred_info_name(PredInfo),
    Arity = pred_info_orig_arity(PredInfo).

predicate_module(ModuleInfo, PredId) = ModuleName :-
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    ModuleName = pred_info_module(PredInfo).

predicate_name(ModuleInfo, PredId) = PredName :-
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    PredName = pred_info_name(PredInfo).

predicate_arity(ModuleInfo, PredId) = Arity :-
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    Arity = pred_info_orig_arity(PredInfo).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- interface.

:- type dependency_ordering(T)  == list(list(T)).
:- type dependency_ordering     == dependency_ordering(pred_proc_id).

:- type dependency_graph(T)     == relation(T).
:- type dependency_graph        == dependency_graph(pred_proc_id).
:- type dependency_info(T).
:- type dependency_info         == dependency_info(pred_proc_id).

:- pred hlds_dependency_info_init(dependency_info(T)::out) is det.

:- pred hlds_dependency_info_get_dependency_graph(dependency_info(T)::in,
    dependency_graph(T)::out) is det.

    % XXX document whether the dependency_ordering is ascending or descending.
:- pred hlds_dependency_info_get_dependency_ordering(dependency_info(T)::in,
    dependency_ordering(T)::out) is det.

:- pred hlds_dependency_info_set_dependency_graph(dependency_graph(T)::in,
    dependency_info(T)::in, dependency_info(T)::out) is det.

:- pred hlds_dependency_info_set_dependency_ordering(
    dependency_ordering(T)::in,
    dependency_info(T)::in, dependency_info(T)::out) is det.

%-----------------------------------------------------------------------------%

:- implementation.

:- type dependency_info(T)
    --->    dependency_info(
                dep_graph       :: dependency_graph(T),
                dep_ord         :: dependency_ordering(T)
            ).

hlds_dependency_info_init(DepInfo) :-
    relation.init(DepRel),
    DepOrd = [],
    DepInfo = dependency_info(DepRel, DepOrd).

hlds_dependency_info_get_dependency_graph(DepInfo, DepInfo ^ dep_graph).
hlds_dependency_info_get_dependency_ordering(DepInfo, DepInfo ^ dep_ord).

hlds_dependency_info_set_dependency_graph(DepGraph, DepInfo,
    DepInfo ^ dep_graph := DepGraph).
hlds_dependency_info_set_dependency_ordering(DepOrd, DepInfo,
    DepInfo ^ dep_ord := DepOrd).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "hlds_module.m".

%-----------------------------------------------------------------------------%
