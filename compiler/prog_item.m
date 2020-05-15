%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 1996-2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: prog_item.m.
% Main author: fjh.
%
% This module, together with prog_data, defines a data structure for
% representing Mercury programs.
%
% This data structure specifies basically the same information as is
% contained in the source code, but in a parse tree rather than a flat file.
% This module defines the parts of the parse tree that are *not* needed
% by the various compiler backends; parts of the parse tree that
% are needed by the backends are contained in prog_data.m.
%
%---------------------------------------------------------------------------%
%
% One important consideration in the design of the parse trees is that
% they have two different use cases:
%
% - to represent files being read in, and
% - to represent files being written out.
%
% The two have slightly different requirements, which is why in several
% kinds of parse trees seemingly the same information is present in
% more than one set of fields. This is because while we will never
% knowingly write out erroneous Mercury code, we know that we *will*
% read in some. An example is import_module and use_module declarations.
% Each parse_tree_module_src contains four field that respectively specify
%
% - the locations where a module has an import_module in the interface
% - the locations where a module has an use_module in the interface
% - the locations where a module has an import_module in the implementation
% - the locations where a module has an use_module in the implementation
%
% It is an error if a module has an entry in more than one of these maps,
% with the sole exception being the use_module in interface and import_module
% in implementation combination (because each grants a permission that the
% other does not). Yet we want the ability to represent even invalid
% combinations of these declarations, so that we can wait to generate
% the appropriate error messages until we know all the relevant facts.
% And in the process of checking for and reporting errors, we build up
% another data structure, the import_and_or_use_map, which contains
% a record of how the rest of the compiler should view, not just the
% import_module and use_module declarations explicitly present in the
% source code, but also the ones that get made available to it implicitly.
% (Examples include builtin and private_builtin, which are implicitly available
% to every module, and table_builtin, which is implicitly available
% to modules that do certain kinds of tabling.)
%
%---------------------------------------------------------------------------%

:- module parse_tree.prog_item.
:- interface.

:- import_module libs.
:- import_module libs.globals.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.sym_name.
:- import_module recompilation.
:- import_module parse_tree.error_util.
:- import_module parse_tree.file_kind.
:- import_module parse_tree.maybe_error.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_data_foreign.
:- import_module parse_tree.prog_data_pragma.

:- import_module assoc_list.
:- import_module cord.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module one_or_more_map.
:- import_module one_or_more.
:- import_module pair.
:- import_module set.

%---------------------------------------------------------------------------%

:- type include_module_map == map(module_name, include_module_info).
:- type include_module_info
    --->    include_module_info(module_section, prog_context).
            % The "include_module" declaration occurs in the given section
            % of the relevant file, and at the given context.

:- type module_name_context == map(module_name, prog_context).
:- type module_names_contexts == one_or_more_map(module_name, prog_context).

%---------------------%

% The module being compiled can have another module made available to it
% either explicitly or implicitly.
%
% An explicit availability can happen either through an `:- import_module'
% or a `:- use_module' declaration (import or use, for short), and these
% declarations can occur in either the interface section or in the
% implementation section.
%
% The values of section_import_and_or_use specify the possible valid ways
% that a module may be made available explicitly. The first four specify
% the usual ways: an import or use in either section, with the one context.
% The last one says that the module was named in an use_module declaration
% in the interface section and in an import_module declaration
% in the implementation section, and give the two contexts respectively.
%
% The values of the implicit_import_or_use type specify the possible ways
% that a module may be made available implicitly. Most implicit availability
% is to give the compiler access to the declarations of predicates and
% functions that the compiler will automatically insert calls to as part of
% the implementation of some language feature, such as table resets for
% memoed procedures. Since these automatically generated references
% will be created fully module qualified, an import of the target modules
% is not needed; a use is enough. However, the public builtin module
% is implicitly imported into every Mercury module, and this one
% does get imported, not used.
%
% Note that we do not record contexts for implicit uses. In general,
% there is no *single specific* context that makes an implicit use needed,
% and we don't need contexts for any error messages about implicit imports,
% since we don't want to require Mercury programmers to have to know
% such details of the Mercury implementation. We *could* collect the set of
% contexts that make a given implicit use needed, for internal compiler
% purposes, but we do not (yet) have any need for that information.

:- type section_import_and_or_use
    --->    int_import(prog_context)
    ;       int_use(prog_context)
    ;       imp_import(prog_context)
    ;       imp_use(prog_context)
    ;       int_use_imp_import(prog_context, prog_context).

:- type implicit_import_or_use
    --->    implicit_int_import
    ;       implicit_int_use
    ;       implicit_imp_use.

:- type maybe_implicit_import_and_or_use
    --->    explicit_avail(
                section_import_and_or_use
            )
    ;       implicit_avail(
                implicit_import_or_use,
                maybe(section_import_and_or_use)
            ).

    % Values of this type specify how each module we have available
    % was *made* available. If a module had redundant import_module
    % and/or use_module declarations, each of these has had a warning
    % generated for it and was then discarded. One of these declarations
    % can be made redundant redundant not only by another declaration
    % of the same kind in the same section, but also by more permissive
    % declarations; import_module declarations grant more permissions
    % than use_module declarations, and declarations in the interface
    % give more permissions than the declarations of the same kind
    % in the implementation section.
:- type section_import_and_or_use_map ==
    map(module_name, section_import_and_or_use).
:- type import_and_or_use_map ==
    map(module_name, maybe_implicit_import_and_or_use).

%---------------------------------------------------------------------------%
%
% The parse_tree_{src,int,opt} types define the ASTs we use for source files,
% interface files and optimization files respectively.
%
% Nested submodules may appear in source files, but not in interface files
% or optimization files.
%
% We use cords of items instead of lists of items where we may need to add
% items to an already-existing partial parse tree.
%
% The contexts of module declarations below may be term.dummy_context_init
% if the actual context isn't known, but if the recorded context is
% not term.dummy_context_init, then it is valid.

:- type parse_tree_src
    --->    parse_tree_src(
                pts_module_name             :: module_name,

                % The context of the `:- module' declaration.
                pts_module_name_context     :: prog_context,

                % The contents of the module.
                pts_components              :: cord(module_component)
            ).

:- type module_component
    --->    mc_section(
                mcs_module_name             :: module_name,
                mcs_section_kind            :: module_section,

                % The context of the `:- interface' or `:- implementation'
                % declaration.
                mcs_section_context         :: prog_context,

                mcs_includes                :: cord(item_include),
                mcs_avails                  :: cord(item_avail),
                pti_fims                    :: cord(item_fim),
                mcs_items                   :: cord(item)
            )
    ;       mc_nested_submodule(
                % The name of the *including* module.
                mcns_module_name            :: module_name,

                % What kind of section is the submodule in?
                mcns_in_section_kind        :: module_section,

                % The context of the section that the submodule is in.
                mcns_in_section_context     :: prog_context,

                % The submodule itself.
                mcns_submodule              :: parse_tree_src
            ).

:- type parse_tree_module_src
    --->    parse_tree_module_src(
                ptms_module_name            :: module_name,

                % The context of the `:- module' declaration.
                ptms_module_name_context    :: prog_context,

                % The set of modules mentioned in `:- include_module'
                % declarations in the interface and in the implementation,
                % and their locations. If a module has been included
                % N times, which is an error, it will appear in (one
                % or both of) these maps N times.
                ptms_int_includes           :: module_names_contexts,
                ptms_imp_includes           :: module_names_contexts,

                % A cleaned-up version of the above two fields,
                % which maps each included module to *one* effective
                % section of inclusion (which will be the interface section
                % if the module is ever included in the interface)
                % and *one* effective context. The process of filling in
                % this field will generate error messages for any duplicate
                % inclusions.
                ptms_include_map            :: include_module_map,

                % A specification of the set of modules mentioned in
                % `:- import_module' and/or `:- use_module' declarations
                % in each section, mapped to their location(s).
                % Again, any module imported and/or used N times
                % will appear in these maps N times.
                ptms_int_imports            :: module_names_contexts,
                ptms_int_uses               :: module_names_contexts,
                ptms_imp_imports            :: module_names_contexts,
                ptms_imp_uses               :: module_names_contexts,

                % A cleaned-up and extended version of the above four fields.
                %
                % The cleaned-up part means that each module is mapped
                % to exactly *one* section_import_and_or_use,
                % reporting any invalid duplicate availability in the process.
                % (Having a use_module in the interface section and an
                % import_module in the implementation section is the only
                % allowed situation in which a module may have more than one
                % import or use declaration.)
                %
                % The extended part means that this field contains information
                % about implicit availability of builtin modules as well,
                % in a form that allows explicit vs implicit availability
                % to be clearly distinguished from each other.
                ptms_import_use_map         :: import_and_or_use_map,

                % A cleaned-up version of the set of explicit
                % `:- pragma foreign_import_module' declarations
                % in the interface and in the implementation.
                % The cleaned-up part means that we we have reported both
                %
                % - FIMs that occur more than once in a given section, and
                % - FIMs that occur in both sections.
                %
                % We keep the context of only the first FIM for a given
                % fim_spec in each section, and if a fim_spec occurs in
                % both sections, we keep only the (first) occurrence in the
                % interface section.
                %
                % We don't have a field containing the original, non-cleaned-up
                % data, since no part of the compiler (yet) need this.
                ptms_int_fims               :: map(fim_spec, prog_context),
                ptms_imp_fims               :: map(fim_spec, prog_context),

                % The set of foreign languages for which this module
                % should have implicit foreign_import_module declaration
                % for itself.
                %
                % XXX CLEANUP This field should simply contain a set
                % of foreign languages, but currently,
                % check_convert_raw_comp_unit_to_module_src creates
                % this structure when it does not have a valid value
                % for this field (which we now record as a `no').
                % The field is then filled in (and thus set to `yes(...)')
                % *later* by code in grab_unqual_imported_modules_make_int.
                % However, grab_unqual_imported_modules_make_int is not
                % called on all compiler invocations, so this field can remain
                % in its not-filled-in state. This legacy of the traditional
                % split between how compiler invocations that generate code
                % and those that don't should be fixed.
                ptms_implicit_fim_langs     :: maybe(set(foreign_language)),

                % XXX The type, inst and mode definitions should be in
                % {type,inst,mode}_ctor_defn_maps. We already have code
                % to create these, and they would make the jobs of the
                % predicates that add types, insts and modes to the HLDS
                % significantly simpler.
                %
                % For now, we divide type definitions into three kinds:
                % abstract, Mercury, and foreign type definitions.

                % Items of various kinds in the interface.
                % All these items are to be treated as being in the
                % sms_interface section, with one exception.
                % If this module has some submodules, i.e. if at least one
                % of the ptms_{int,imp}_included_modules fields above are
                % nonempty, then we handle any nonabstract instance items
                % in the interface by
                % - treating only an abstract version of the item as being
                %   in sms_interface, and
                % - treating the original version as being in the
                %   sms_impl_but_exported_to_submodules section.
                % (For abstract instances, there is no point in adding them
                % twice, once in each section, so we treat them as only
                % being in sms_interface.)
                ptms_int_type_defns_abs     :: list(item_type_defn_info),
                ptms_int_type_defns_mer     :: list(item_type_defn_info),
                ptms_int_type_defns_for     :: list(item_type_defn_info),
                ptms_int_inst_defns         :: list(item_inst_defn_info),
                ptms_int_mode_defns         :: list(item_mode_defn_info),
                ptms_int_typeclasses        :: list(item_typeclass_info),
                ptms_int_instances          :: list(item_instance_info),
                ptms_int_pred_decls         :: list(item_pred_decl_info),
                ptms_int_mode_decls         :: list(item_mode_decl_info),
                ptms_int_foreign_export_enums ::
                                        list(item_foreign_export_enum_info),
                ptms_int_decl_pragmas       :: list(item_decl_pragma_info),
                ptms_int_promises           :: list(item_promise_info),

                % The set of predicate names for which the interface contains
                % attempts at either a definition (i.e. a clause or a
                % foreign_proc), or something else that tells us that
                % generating a warning about a lack of a definition
                % in the implementation section (if in fact there is
                % no definition there) more misleading than useful.
                ptms_int_bad_clauses        :: set(pf_sym_name_arity),

                % A repeat of everything above, but in the implementation
                % section, with the addition of some item kinds that may occur
                % *only* in implementation sections.
                %
                % However, note that the conversion process we now use
                % to generate parse_tree_module_srcs will put any impl pragmas,
                % initialises, finalises and mutable that were wrongly placed
                % in the interface section into their fields below, so that
                % if there is something wrong with them *beyond* their
                % location, the compiler can detect and report it in the
                % same compiler invocation. It would be easy to put these
                % misplaced items into separate fields of their own,
                % but so far there has been no need for that.
                %
                % If this module has no submodules, i.e. if the fields
                % ptms_{int,imp}_included_modules above are both empty,
                % then all the items in these fields are to be treated
                % as in being in a sms_implementation section. However,
                % if this module HAS at least one submodule (in either
                % section), then only the following kinds of items are
                % to be treated as being in a sms_implementation section:
                %
                %   clauses
                %   foreign_export_enums
                %   impl_pragmas
                %   initialises
                %   finalises
                %
                % All the other kinds of items are to be treated as being
                % in the sms_impl_but_exported_to_submodules section.
                ptms_imp_type_defns_abs     :: list(item_type_defn_info),
                ptms_imp_type_defns_mer     :: list(item_type_defn_info),
                ptms_imp_type_defns_for     :: list(item_type_defn_info),
                ptms_imp_inst_defns         :: list(item_inst_defn_info),
                ptms_imp_mode_defns         :: list(item_mode_defn_info),
                ptms_imp_typeclasses        :: list(item_typeclass_info),
                ptms_imp_instances          :: list(item_instance_info),
                ptms_imp_pred_decls         :: list(item_pred_decl_info),
                ptms_imp_mode_decls         :: list(item_mode_decl_info),
                ptms_imp_clauses            :: list(item_clause_info),
                ptms_imp_foreign_enums      :: list(item_foreign_enum_info),
                ptms_imp_foreign_export_enums ::
                                        list(item_foreign_export_enum_info),
                ptms_imp_decl_pragmas       :: list(item_decl_pragma_info),
                ptms_imp_impl_pragmas       :: list(item_impl_pragma_info),
                ptms_imp_promises           :: list(item_promise_info),
                ptms_imp_initialises        :: list(item_initialise_info),
                ptms_imp_finalises          :: list(item_finalise_info),
                ptms_imp_mutables           :: list(item_mutable_info)
            ).

:- func init_empty_parse_tree_module_src(module_name, prog_context)
    = parse_tree_module_src.

    % When comp_unit_interface.m creates the contents of an interface file,
    % it will always set the maybe_version_numbers field of that interface file
    % to `no_version_numbers'. If the value of that field is needed,
    % it will be filled in by the actually_write_interface_file predicate
    % in write_module_interface_files.m, which (unlike comp_unit_interface.m)
    % has access to the I/O state to read in the *previous* version
    % of that interface file.
:- type maybe_version_numbers
    --->    no_version_numbers
    ;       version_numbers(version_numbers).

    % The generic representation of all the different kinds of interface files.
    % XXX It should be replaced by the kind-specific representations below.
:- type parse_tree_int
    --->    parse_tree_int(
                pti_module_name             :: module_name,
                pti_int_file_kind           :: int_file_kind,

                % The context of the `:- module' declaration.
                pti_module_name_context     :: prog_context,

                % For .int0, .int and .int2; not for .int3.
                pti_maybe_version_numbers   :: maybe_version_numbers,

                % `:- include_module' declarations in the interface and
                % in the implementation.
                pti_int_includes            :: list(item_include),
                pti_imp_includes            :: list(item_include),

                % `:- import_module' and `:- use_module' declarations
                % in the interface and in the implementation.
                pti_int_avails              :: list(item_avail),
                pti_imp_avails              :: list(item_avail),

                % `:- pragma foreign_import_module' declarations
                % in the interface and in the implementation.
                pti_int_fims                :: list(item_fim),
                pti_imp_fims                :: list(item_fim),

                % Items in the interface and in the implementation.
                pti_int_items               :: list(item),
                pti_imp_items               :: list(item)
            ).

% The representations specific to .int0, .int, .int2 and .int3 files.
% XXX We should replace the lists of items of various kinds with data
% structures that encode uniqueness properties, such as "each type constructor
% may be defined only once". Maps from primary keys such as type_ctors,
% or symnames/arity pairs in general, would work for this.

    % A version of parse_tree_int specialized to hold the contents of
    % .int0 files.
:- type parse_tree_int0
    --->    parse_tree_int0(
                pti0_module_name            :: module_name,

                % The context of the `:- module' declaration.
                pti0_module_name_context    :: prog_context,

                pti0_maybe_version_numbers  :: maybe_version_numbers,

                % The set of modules mentioned in `:- include_module'
                % declarations in the interface and implementation,
                % and their locations.
                pti0_int_includes           :: module_names_contexts,
                pti0_imp_includes           :: module_names_contexts,
                pti0_include_map            :: include_module_map,

                % The set of modules mentioned in `:- import_module'
                % declarations in the interface and implementation,
                % and their locations.
                pti0_int_imports            :: module_names_contexts,
                pti0_int_uses               :: module_names_contexts,
                pti0_imp_imports            :: module_names_contexts,
                pti0_imp_uses               :: module_names_contexts,
                pti0_import_use_map         :: import_and_or_use_map,

                % `:- pragma foreign_import_module' declarations
                % in the interface and in the implementation.
                pti0_int_fims               :: set(fim_spec),
                pti0_imp_fims               :: set(fim_spec),

                % Items of various kinds in the interface.
                % XXX For the consumers of the .int0 file, in most cases
                % it makes no difference whether an item was in the parent's
                % interface or implementation section. We should make that
                % distinction here ONLY when we have to.
                pti0_int_type_defns         :: type_ctor_defn_map,
                pti0_int_inst_defns         :: inst_ctor_defn_map,
                pti0_int_mode_defns         :: mode_ctor_defn_map,
                pti0_int_typeclasses        :: list(item_typeclass_info),
                pti0_int_instances          :: list(item_instance_info),
                pti0_int_pred_decls         :: list(item_pred_decl_info),
                pti0_int_mode_decls         :: list(item_mode_decl_info),
                pti0_int_foreign_enums      :: type_ctor_foreign_enum_map,
                pti0_int_decl_pragmas       :: list(item_decl_pragma_info),
                pti0_int_promises           :: list(item_promise_info),
                % XXX We will probably need a list of item_type_repn_infos.

                % Items of various kinds in the implementation section.
                pti0_imp_type_defns         :: type_ctor_defn_map,
                pti0_imp_inst_defns         :: inst_ctor_defn_map,
                pti0_imp_mode_defns         :: mode_ctor_defn_map,
                pti0_imp_typeclasses        :: list(item_typeclass_info),
                pti0_imp_instances          :: list(item_instance_info),
                pti0_imp_pred_decls         :: list(item_pred_decl_info),
                pti0_imp_mode_decls         :: list(item_mode_decl_info),
                pti0_imp_foreign_enums      :: type_ctor_foreign_enum_map,
                pti0_imp_decl_pragmas       :: list(item_decl_pragma_info),
                pti0_imp_promises           :: list(item_promise_info)
                % XXX We will probably need a list of item_type_repn_infos.
            ).

    % A version of parse_tree_int specialized to hold the contents of
    % .int files.
:- type parse_tree_int1
    --->    parse_tree_int1(
                pti1_module_name            :: module_name,

                % The context of the `:- module' declaration.
                pti1_module_name_context    :: prog_context,

                pti1_maybe_version_numbers  :: maybe_version_numbers,

                % The set of modules mentioned in `:- include_module'
                % declarations in the interface and implementation,
                % and their contexts.
                pti1_int_includes           :: module_names_contexts,
                pti1_imp_includes           :: module_names_contexts,
                pti1_include_map            :: include_module_map,

                % The set of modules mentioned in `:- use_module'
                % declarations in the interface and implementation,
                % and their locations.
                pti1_int_uses               :: module_names_contexts,
                pti1_imp_uses               :: module_names_contexts,
                pti1_import_use_map         :: import_and_or_use_map,

                % `:- pragma foreign_import_module' declarations
                % in the interface and in the implementation.
                pti1_int_fims               :: set(fim_spec),
                pti1_imp_fims               :: set(fim_spec),

                % Items of various kinds in the interface.
                pti1_int_type_defns         :: type_ctor_defn_map,
                pti1_int_inst_defns         :: inst_ctor_defn_map,
                pti1_int_mode_defns         :: mode_ctor_defn_map,
                pti1_int_typeclasses        :: list(item_typeclass_info),
                pti1_int_instances          :: list(item_instance_info),
                pti1_int_pred_decls         :: list(item_pred_decl_info),
                pti1_int_mode_decls         :: list(item_mode_decl_info),
                pti1_int_foreign_enum_specs :: type_ctor_foreign_enum_map,
                pti1_int_decl_pragmas       :: list(item_decl_pragma_info),
                pti1_int_promises           :: list(item_promise_info),

                pti1_int_type_repns         :: type_ctor_repn_map,

                % Items of various kinds in the implementation.
                % Should not be needed after we switch to use type_repn items.
                pti1_imp_type_defns         :: type_ctor_defn_map,
                pti1_imp_foreign_enum_specs :: type_ctor_foreign_enum_map,
                pti1_imp_typeclasses        :: list(item_typeclass_info)
            ).

    % A version of parse_tree_int specialized to hold the contents of
    % .int2 files.
:- type parse_tree_int2
    --->    parse_tree_int2(
                pti2_module_name            :: module_name,

                % The context of the `:- module' declaration.
                pti2_module_name_context    :: prog_context,

                % XXX While it is clear that .int files need version number
                % fields while .int3 files do not, I (zs) don't see any
                % clear argument either way for .int2 files. Having
                % the field here preserves old behavior.
                pti2_maybe_version_numbers  :: maybe_version_numbers,

                % The set of modules mentioned in `:- include_module'
                % declarations in the interface, and their locations.
                pti2_int_includes           :: module_names_contexts,
                pti2_include_map            :: include_module_map,

                % The set of modules mentioned in `:- use_module'
                % declarations in the interface, and their locations.
                pti2_int_uses               :: module_names_contexts,
                pti2_import_use_map         :: import_and_or_use_map,

                % `:- pragma foreign_import_module' declarations
                % in the interface and in the implementation.
                pti2_int_fims               :: set(fim_spec),
                pti2_imp_fims               :: set(fim_spec),

                % Items of various kinds in the interface.
                pti2_int_type_defns         :: type_ctor_defn_map,
                pti2_int_inst_defns         :: inst_ctor_defn_map,
                pti2_int_mode_defns         :: mode_ctor_defn_map,
                pti2_int_typeclasses        :: list(item_typeclass_info),
                pti2_int_instances          :: list(item_instance_info),
                pti2_int_type_repns         :: type_ctor_repn_map,

                % Items of various kinds in the implementation.
                % Should not be needed after we switch to use type_repn items.
                pti2_imp_type_defns         :: type_ctor_defn_map
            ).

    % A version of parse_tree_int specialized to hold the contents of
    % .int3 files.
:- type parse_tree_int3
    --->    parse_tree_int3(
                pti3_module_name            :: module_name,

                % The context of the `:- module' declaration.
                pti3_module_name_context    :: prog_context,

                % The set of modules mentioned in `:- include_module'
                % declarations in the interface, and their locations.
                pti3_int_includes           :: module_names_contexts,
                pti3_include_map            :: include_module_map,

                % The set of modules mentioned in `:- import_module'
                % declarations in the interface, and their locations.
                pti3_int_imports            :: module_names_contexts,
                pti3_import_use_map         :: import_and_or_use_map,

                % Items of various kinds in the interface.
                pti3_int_type_defns         :: type_ctor_defn_map,
                pti3_int_inst_defns         :: inst_ctor_defn_map,
                pti3_int_mode_defns         :: mode_ctor_defn_map,
                pti3_int_typeclasses        :: list(item_typeclass_info),
                pti3_int_instances          :: list(item_instance_info),
                pti3_int_type_repns         :: type_ctor_repn_map
            ).

%---------------------------------------------------------------------------%
%
% The intended semantics of a type_ctor_defn_map is a map of
% all the type constructors defined in a given SECTION of a given
% interface file to all its definitions in that section.
%
% There are four intended uses of a type_ctor_defn_map. The most
% important is the fourth one.
%
% One is to eliminate unnecessary items from interface files.
% For example, library/set.m contains two definitions of the set
% type constructor: an abstract definition in the publicly documented
% interface section, and an actual du definition in another interface
% section that we do not include in the automatically generated
% documentation but we *do* export to other modules. In situations
% like this, the abstract definition is redundant. Never including it
% in an interface file lets that interface file to remain unchanged
% in the event that the user deletes the abstract definition from
% the source file as well.
%
% The second use is to canonicalize the parts of interface files
% containing type definitions.
%
% The third use is to help deal with sets of definitions that
% don't make sense. There are many rules that a set of definitions
% for a given type constructor must meet (such as "there may be at most one
% definition for a type constructor that is a du, equivalence or solver
% definition), and bugs may manifest themselves as violations of these rules.
%
% We have a choice in when these violations are detected.
%
% - If we allow the inclusion of inconsistent sets of type definitions
%   in interface files, then we must detect and handle these
%   inconsistencies every time a compiler invocation reads that interface
%   file. These invocations won't generate error messages for these
%   inconsistencies since the type constructor won't be local, but
%   they may generate messages for other "errors" that look like errors
%   only because the compiler's resolution of the inconsistency (i.e.
%   its choice of which type definitions to keep and which to throw out)
%   differs from the programmer's choice.
%
% - If we do NOT allow the inclusion of inconsistent sets of type
%   definitions in interface files, then we must report any violations
%   at interface file construction time, and make them cause that
%   construction to fail. Printing such error messages to stdout
%   instead of the module's .err file is less than ideal, but
%   this early detection can avoid avalanches of misleading diagnostics
%   of the kind mentioned in the previous point. It can also save
%   recompilations. If a module's source file contains inconsistent
%   definitions for a type constructor, then the programmer will
%   have to delete the unintended ones. Once this is done, the
%   interface file will have to be rebuilt. If we allow inconsistent
%   definitions in the interface file, its new contents will differ
%   from its old contents, which means that all the compilations
%   of *other* modules that read the old contents will have been wasted.
%   If we cause the construction of the interface file to fail instead,
%   those compilations won't have taken place.
%
% We implement the first choice by checking whether each entry in
% a type_ctor_defn_map makes sense, and generating error messages
% when they don't. This is done by code in check_parse_tree_type_defns.m.
%
% The fourth and most motivating use is that having all the definitions
% of a type_ctor, *and* all the foreign_enum pragmas that apply to that
% type_ctor, all together at once will make the code that decides
% the proper representation of that type significantly simpler.
%
% Everything above except the fourth use also applies to the inst_
% and mode_ctor_defn_maps, though for those, the consistency rules are
% much simpler: that each inst and mode constructor must have at most one
% non-abstract definition.
%

:- type type_ctor_defn_map == map(type_ctor, type_ctor_all_defns).

:- type type_ctor_all_defns
    --->    type_ctor_all_defns(
                % Abstract and nonabstract solver type definitions.
                tcad_abstract_solver    :: list(item_type_defn_info_abstract),
                tcad_solver             :: list(item_type_defn_info_solver),

                % Abstract and nonabstract nonsolver type definitions.
                tcad_abstract_std       :: list(item_type_defn_info_abstract),
                tcad_eqv                :: list(item_type_defn_info_eqv),
                tcad_du                 :: list(item_type_defn_info_du),
                tcad_foreign            :: c_j_cs_e_defns
            ).

:- type type_ctor_maybe_defn
    --->    type_ctor_maybe_defn(
                % Abstract and nonabstract solver type definitions.
                tcmd_abstract_solver    :: maybe(item_type_defn_info_abstract),
                tcmd_solver             :: maybe(item_type_defn_info_solver),

                % Abstract and nonabstract nonsolver type definitions.
                tcmd_abstract_std       :: maybe(item_type_defn_info_abstract),
                tcmd_eqv                :: maybe(item_type_defn_info_eqv),
                tcmd_du                 :: maybe(item_type_defn_info_du),
                tcmd_foreign            :: c_j_cs_e_maybe_defn
            ).

    % We support foreign type definitions in all four of our target languages,
    % C, Java, C# and Erlang (though since Erlang is not statically typed,
    % the only Erlang type name we allow is the empty string). Likewise,
    % we allow foreign enum declarations in these four languages.
    %
    % There are several kinds of info that we may want to store for every
    % one of these foreign languages. This can be done in instances
    % of this type, whose fields always contain the info for C, Java, C#
    % and Erlang (in that order).
    %
:- type c_java_csharp_erlang(T)
    --->    c_java_csharp_erlang(T, T, T, T).

:- type c_j_cs_e_defns ==
    c_java_csharp_erlang(list(item_type_defn_info_foreign)).
:- type c_j_cs_e_maybe_defn ==
    c_java_csharp_erlang(maybe(item_type_defn_info_foreign)).
:- type c_j_cs_e_enums ==
    c_java_csharp_erlang(list(item_foreign_enum_info)).
:- type c_j_cs_e_maybe_enum ==
    c_java_csharp_erlang(maybe(item_foreign_enum_info)).
:- type c_j_cs_e_repn ==
    c_java_csharp_erlang(maybe(foreign_type_repn)).
:- type c_j_cs_e_enum_repn ==
    c_java_csharp_erlang(maybe(enum_foreign_repn)).

% The map key is sym_name_arity because we don't have an inst_ctor type.
% XXX CLEANUP We should add one.
:- type inst_ctor_defn_map == map(sym_name_arity, inst_ctor_all_defns).
:- type inst_ctor_all_defns
    --->    inst_ctor_all_defns(
                icad_abstract               :: list(item_inst_defn_info),
                icad_eqv                    :: list(item_inst_defn_info)
            ).

% The map key is sym_name_arity because we don't have a mode_ctor type.
% XXX CLEANUP We should add one.
:- type mode_ctor_defn_map == map(sym_name_arity, mode_ctor_all_defns).
:- type mode_ctor_all_defns
    --->    mode_ctor_all_defns(
                mcad_abstract               :: list(item_mode_defn_info),
                mcad_eqv                    :: list(item_mode_defn_info)
            ).

:- type type_ctor_foreign_enum_map == map(type_ctor, c_j_cs_e_enums).

:- type type_ctor_repn_map == map(type_ctor, item_type_repn_info).

%---------------------------------------------------------------------------%

:- type parse_tree_opt
    --->    parse_tree_opt(
                pto_module_name             :: module_name,
                pto_opt_file_kind           :: opt_file_kind,

                % The context of the `:- module' declaration.
                pto_module_name_context     :: prog_context,

                % `:- use_module' (not `:- import_module') declarations.
                pto_uses                    :: list(avail_use_info),

                pto_fims                    :: list(item_fim),
                pto_items                   :: list(item)
            ).

:- type parse_tree_plain_opt
    --->    parse_tree_plain_opt(
                ptpo_module_name            :: module_name,

                % The context of the `:- module' declaration.
                ptpo_module_name_context    :: prog_context,

                % `:- use_module' (not `:- import_module') declarations.
                ptpo_uses                   :: module_names_contexts,
                ptpo_fims                   :: set(fim_spec),
                ptpo_type_defns             :: list(item_type_defn_info),
                ptpo_foreign_enums          :: list(item_foreign_enum_info),
                ptpo_inst_defns             :: list(item_inst_defn_info),
                ptpo_mode_defns             :: list(item_mode_defn_info),
                ptpo_typeclasses            :: list(item_typeclass_info),
                ptpo_instances              :: list(item_instance_info),
                ptpo_pred_decls             :: list(item_pred_decl_info),
                ptpo_mode_decls             :: list(item_mode_decl_info),
                ptpo_clauses                :: list(item_clause_info),
                ptpo_foreign_procs          :: list(item_foreign_proc),
                ptpo_promises               :: list(item_promise_info),

                ptpo_pred_marker_pragmas    :: list(item_pred_marker),
                ptpo_type_spec_pragmas      :: list(item_type_spec),
                ptpo_unused_args            :: list(item_unused_args),
                ptpo_termination            :: list(item_termination),
                ptpo_termination2           :: list(item_termination2),
                ptpo_exceptions             :: list(item_exceptions),
                ptpo_trailing               :: list(item_trailing),
                ptpo_mm_tabling             :: list(item_mm_tabling),
                ptpo_struct_sharing         :: list(item_struct_sharing),
                ptpo_struct_reuse           :: list(item_struct_reuse)
            ).

:- type parse_tree_trans_opt
    --->    parse_tree_trans_opt(
                ptto_module_name            :: module_name,

                % The context of the `:- module' declaration.
                ptto_module_name_context    :: prog_context,

                ptto_termination            :: list(item_termination),
                ptto_termination2           :: list(item_termination2),
                ptto_exceptions             :: list(item_exceptions),
                ptto_trailing               :: list(item_trailing),
                ptto_mm_tabling             :: list(item_mm_tabling),
                ptto_struct_sharing         :: list(item_struct_sharing),
                ptto_struct_reuse           :: list(item_struct_reuse)
            ).

%---------------------------------------------------------------------------%
%
% A raw compilation unit is one module to be compiled. A parse_tree_src
% that contains N nested submodules corresponds to 1 + N raw_compilation_units,
% one for the top level module and one for each (possibly deeply) nested
% submodule.
%
% A raw compilation unit consists of some raw item blocks, with each raw
% item block containing the items in an interface or implementation section
% of its module.
%
% XXX CLEANUP We should stop using raw_compilation_units completely,
% replacing their use with a parse_tree_module_src. That also contains
% the same components (includes, avails, fims and items), but in a more
% convenient form, with different kinds of separated out and with
% e.g. duplicate imports and type definitions already handled.
%
% Before we convert a raw compilation unit into the HLDS, we augment it
% with the contents of the interface files of the modules it imports
% (directly or indirectly), and if requested, with the contents of the
% optimization files of those modules as well. The augmented compilation unit
% will consist of the following for compiler invocations that generate
% target language code. (For compiler invocations that generate .int and
% .int2 files, all the interface files mentioned below will be replaced
% by .int3 files.)
%
% - The module_src field contains the original raw_compilation_unit
%   after being transformed into a parse_tree_module_src.
%
%   Once upon a time, we depended on the raw compilation unit
%   having item blocks marked as "implementation section but exported
%   to submodules", but now we rely on the fact that some kinds of items
%   in the implementation section are *always* exported to the current
%   module's submodules (if there are any), while others are *never* exported
%   to submodules, and these are already separated in the
%   parse_tree_module_src.
%
% - The ancestor_int_specs field contains the .int0 interface files of
%   the ancestors of this module, which are always implicitly imported.
%
% - The direct_int_specs field contains the .int files of the modules
%   directly imported or used by this module, with the "override" exception
%   noted below.
%
% - The indirect_int_specs field contains the .int2 files of the modules
%   indirectly imported or used by this module, again with the "override"
%   exception noted below.
%
%   In this case, module A "indirectly imports or uses" module C if
%   module A imports or uses a module B whose .int file uses module C.
%   (.int files only use modules; they do not import them.)
%
%   The exceptions above are that
%
%   o   if a module's .int0 file is in the ancestor_int_specs field,
%       we don't include its .int1 file in the direct_int_specs field,
%       or its .int2 file in the indirect_int_specs field. In effect,
%       the appearance of a module in the ancestor_int_specs field
%       overrides (i.e. prevents) its appearance in the direct_int_specs
%       or the indirect_int_specs fields.
%
%   o   if a module's .int file is in the direct_int_specs field,
%       we don't include its .int2 file in the indirect_int_specs field.
%       Again, the appearance of a module in the direct_int_specs field
%       overrides its appearance in the indirect_int_specs field.
%
%   The reason for the exceptions is that an .int0 file contains (or at least
%   is intended to contain, which *may* be different) every item that
%   the .int file for the same module contains, and the same relationship
%   holds between .int and .int2 files. The exceptions thus save the compiler
%   from doing work that (a) is unnecessary, and (b) would lead things
%   being declared or defined more than once.
%
% - Provided intermodule optimization is enabled, the plain_opts field
%   will contain
%
%   o   the .opt files of the modules whose .int0, .int or .int2 files
%       are in the ancestor_int_sprcs, direct_int_specs and indirect_int_specs
%       fields above, and
%
%   o   unless the compiler is invoked with --no-read-opt-files-transitively,
%       the .opt files of every other module the .opt files specified
%       by either the previous bullet point or *this* bullet point
%       import either explicitly or implicitly.
%
%   These .opt files are supposed to contain more information about
%   the ancestor-, direct- or indirect-imported modules than their
%   .int0, .int or .int2 files do. Unfortunately, they often also
%   *duplicate* items in those interface files, which leads to
%   double definitions, which may then lead to test case failures
%   (such as submodules/ts if I -zs- recall correctly).
%
% - Provided transitive intermodule optimization is enabled, the trans_opts
%   field will contain the .trans_opt files of the modules named in
%   the module's .d file as the module's trans_opt dependencies.
%   XXX This seems to me (zs) a bit too indirect.
%
% - If intermodule optimization is enabled, the int_for_opt_specs field
%   will contain
%
%   o   the .int0 files of the ancestor modules of the modules whose .opt files
%       are in the plain_opts field,
%
%   o   the .int files of the modules imported or used either explicitly
%       or implicitly by the modules whose .opt files are in the plain_opts
%       field, or by their ancestors, and
%
%   o   the .int2 files of the modules used by the .int files in the previous
%       bullet point.
%
%   The idea is that these interface files may in general be needed to define
%   entities (such as types, insts or modes) that the .opt files in the
%   plain_opts field may need.
%
%   XXX There is a problem here, which is that override exception does *not*
%   apply to the int_for_opt_specs field. It is possible for e.g. a module's
%   .int2 file to appear in the indirect_int_specs field, but its .int0 or
%   .int file to appear in the int_for_opt_specs field. This may also lead
%   to double definitions of e.g. types, insts or modes. The compiler does
%   ignore such double definitions, under the principle of generating error
%   messages for double definitions *only* when the entity being double-defined
%   has the module currently being compiled as its module qualifier.
%   Nevertheless, including more than one interface file for any given module
%   in the augmented compilation unit will lead to wasted work, which means
%   that we should avoid doing that if possible.
%

:- type raw_compilation_unit
    --->    raw_compilation_unit(
                % The name of the module.
                rci_module_name                 :: module_name,

                % The context of the `:- module' declaration.
                rci_module_name_context         :: prog_context,

                % The items in the module.
                rci_raw_item_blocks             :: list(raw_item_block)
            ).

:- type aug_compilation_unit
    --->    aug_compilation_unit(
                % The name of the module.
                % XXX CLEANUP This is available in aci_module_src.
                aci_module_name                 :: module_name,

                % The context of the `:- module' declaration.
                % XXX CLEANUP This is available in aci_module_src.
                aci_module_name_context         :: prog_context,

                % The module_version_numbers records in all the imported
                % interface files.
                aci_module_version_numbers_map  :: module_version_numbers_map,

                % The source code of the module.
                aci_module_src                  :: parse_tree_module_src,

                % The interface files of the ancestors of this module.
                % (If we have e.g. module foo.bar among the modules
                % we import int_for_opt, we also need to grab its ancestor foo,
                % but such .int0 files also go into the int_for_opt field.
                aci_ancestor_int_specs          :: map(module_name,
                                                    ancestor_int_spec),

                % The interface files of directly imported modules.
                aci_direct_int_specs            :: map(module_name,
                                                    direct_int_spec),

                % The interface files of indirectly imported modules.
                aci_indirect_int_specs          :: map(module_name,
                                                    indirect_int_spec),

                % The optimization files of directly or indirectly
                % imported modules.
                aci_plain_opts                  :: map(module_name,
                                                    parse_tree_plain_opt),
                aci_trans_opts                  :: map(module_name,
                                                    parse_tree_trans_opt),

                % The interface files needed to make sense
                % of those optimization files.
                aci_int_for_opt_specs           :: map(module_name,
                                                    int_for_opt_spec)
            ).

:- type ancestor_int_spec
    --->    ancestor_int0(parse_tree_int0, read_why_int0).

:- type direct_int_spec
    --->    direct_int1(parse_tree_int1, read_why_int1)
    ;       direct_int3(parse_tree_int3, read_why_int3).

:- type indirect_int_spec
    --->    indirect_int2(parse_tree_int2, read_why_int2)
    ;       indirect_int3(parse_tree_int3, read_why_int3).

:- type int_for_opt_spec
    --->    for_opt_int0(parse_tree_int0, read_why_int0)
    ;       for_opt_int1(parse_tree_int1, read_why_int1)
    ;       for_opt_int2(parse_tree_int2, read_why_int2).

    % All these record recomp_avail_int_import as recompilation reason.
    % (Since there is no recomp_avail_ancestor_import, yet).
:- type read_why_int0
    --->    rwi0_section
            % The items in the .int0 file's sections should have section marker
            % make_ims_imported(import_locn_ancestor_int0_interface) and
            % make_ims_imported(import_locn_ancestor_int0_implementation)
            % respectively.
            %
            % Add the parse tree to the set of directly-read interfaces.
    ;       rwi0_opt.
            % The items in both sections should have section marker
            % make_ioms_opt_imported.
            %
            % Add the parse tree to the set of read-int-for-opt interfaces.

:- type read_why_int1
    --->    rwi1_int_import
            % The items in the interface should have the section marker
            % make_ims_imported(import_locn_interface).
            % The items in the implementation should have the section marker
            % make_ims_abstract_imported.
            %
            % Add the parse tree to the set of directly-read interfaces.
            %
            % Record recomp_avail_int_import as recompilation reason.
    ;       rwi1_int_use
            % The items in the interface should have the section marker
            % make_ims_used(import_locn_interface).
            % The items in the implementation should have the section marker
            % make_ims_abstract_imported.
            %
            % Add the parse tree to the set of directly-read interfaces.
            %
            % Record recomp_avail_int_use as recompilation reason.
    ;       rwi1_imp_import
            % The items in the interface should have the section marker
            % make_ims_imported(import_locn_implementation).
            % The items in the implementation should have the section marker
            % make_ims_abstract_imported.
            %
            % Add the parse tree to the set of directly-read interfaces.
            %
            % Record recomp_avail_imp_import as recompilation reason.
    ;       rwi1_imp_use
            % The items in the interface should have the section marker
            % make_ims_used(import_locn_implementation).
            % The items in the implementation should have the section marker
            % make_ims_abstract_imported.
            %
            % Add the parse tree to the set of directly-read interfaces.
            %
            % Record recomp_avail_imp_use as recompilation reason.
    ;       rwi1_int_use_imp_import
            % The items in the interface should have the section marker
            % make_ims_used_and_imported(import_locn_interface).
            % The items in the implementation should have the section marker
            % make_ims_abstract_imported.
            %
            % Add the parse tree to the set of directly-read interfaces.
            %
            % Record recomp_avail_int_use_imp_import as recompilation reason.
    ;       rwi1_opt.
            % The items in both sections should have the section marker
            % make_ioms_opt_imported.
            %
            % Add the parse tree to the set of read-int-for-opt interfaces.
            %
            % Record recomp_avail_imp_use as recompilation reason.

    % All these record recomp_avail_imp_use as recompilation reason.
:- type read_why_int2
    --->    rwi2_int_use
            % The items in the interface should have the section marker
            % make_ims_used(import_locn_interface).
            % The items in the implementation should have the section marker
            % make_ims_abstract_imported.
            %
            % Add the parse tree to the set of indirectly-read interfaces.
    ;       rwi2_imp_use
            % The items in the interface should have the section marker
            % make_ims_used(import_locn_import_by_ancestor).
            % The items in the implementation should have the section marker
            % make_ims_abstract_imported.
            %
            % Add the parse tree to the set of indirectly-read interfaces.
    ;       rwi2_abstract
            % The items in both sections should have the section marker
            % make_ims_abstract_imported.
            %
            % Add the parse tree to the set of indirectly-read interfaces.
    ;       rwi2_opt.
            % The items in both sections should have the section marker
            % make_ioms_opt_imported.
            %
            % Add the parse tree to the set of read-int-for-opt interfaces.

:- type read_why_int3
    --->    rwi3_direct_ancestor_import
            % The items in the interface should have the section marker
            % make_ims_imported(import_locn_import_by_ancestor).
            %
            % Add the parse tree to the set of directly-read interfaces.
            %
            % Record recomp_avail_int_import as recompilation reason.
            % (Since there is no recomp_avail_ancestor_import, yet).
    ;       rwi3_direct_int_import
            % The items in the interface should have the section marker
            % make_ims_imported(import_locn_interface).
            %
            % Add the parse tree to the set of directly-read interfaces.
            %
            % Record recomp_avail_int_import as recompilation reason.
    ;       rwi3_direct_imp_import
            % The items in the interface should have the section marker
            % make_ims_imported(import_locn_implementation).
            %
            % Add the parse tree to the set of directly-read interfaces.
            %
            % Record recomp_avail_imp_import as recompilation reason.
    ;       rwi3_direct_ancestor_use
            % The items in the interface should have the section marker
            % make_ims_used(import_locn_import_by_ancestor).
            %
            % Add the parse tree to the set of directly-read interfaces.
            %
            % Record recomp_avail_int_use as recompilation reason.
            % (Since there is no recomp_avail_ancestor_use, yet).
    ;       rwi3_direct_int_use
            % The items in the interface should have the section marker
            % make_ims_used(import_locn_interface).
            %
            % Add the parse tree to the set of directly-read interfaces.
            %
            % Record recomp_avail_int_use as recompilation reason.
    ;       rwi3_direct_imp_use
            % The items in the interface should have the section marker
            % make_ims_used(import_locn_implementation).
            %
            % Add the parse tree to the set of directly-read interfaces.
            %
            % Record recomp_avail_imp_use as recompilation reason.
    ;       rwi3_direct_int_use_imp_import
            % The items in the interface should have the section marker
            % make_ims_used_and_imported(import_locn_interface).
            %
            % Add the parse tree to the set of directly-read interfaces.
            %
            % Record recomp_avail_int_use_imp_import as recompilation reason.
    ;       rwi3_indirect_int_use
            % The items in the interface should have the section marker
            % make_ims_used(import_locn_interface).
            %
            % Add the parse tree to the set of indirectly-read interfaces.
            %
            % Record recomp_avail_int_use as recompilation reason.
            % (Since there is no recomp_avail_indirect_use_int, yet).
    ;       rwi3_indirect_imp_use.
            % The items in the interface should have the section marker
            % make_ims_used(import_locn_implementation).
            %
            % Add the parse tree to the set of indirectly-read interfaces.
            %
            % Record recomp_avail_imp_use as recompilation reason.
            % (Since there is no recomp_avail_indirect_use_imp, yet).

:- type raw_item_block == item_block(module_section).

:- type src_item_block == item_block(src_module_section).
:- type int_item_block == item_block(int_module_section).
:- type opt_item_block == item_block(opt_module_section).
:- type int_for_opt_item_block == item_block(int_for_opt_module_section).

:- type item_block(MS)
    --->    item_block(
                module_name,
                MS,
                list(item_include),
                list(item_avail),
                list(item_fim),
                list(item)
            ).

%---------------------------------------------------------------------------%

:- type module_section
    --->    ms_interface
    ;       ms_implementation.

:- type src_module_section
    --->    sms_interface
    ;       sms_implementation
    ;       sms_impl_but_exported_to_submodules.
            % This is used internally by the compiler, to identify items
            % which originally came from an implementation section of a module
            % that contains submodules; such items need to be exported
            % to the submodules. This is done in grab_modules.m
            % by grab_qual_imported_modules_augment.

:- type imported_or_used
    --->    iou_imported
    ;       iou_used
    ;       iou_used_and_imported.

:- type int_module_section
    --->    ims_imported_or_used(module_name, int_file_kind, import_locn,
                imported_or_used)
            % These are used internally by the compiler, to identify
            % declarations which originally came from some other module
            % imported with a `:- import_module' or `:- use_module'
            % declaration. They record the name of the imported module,
            % and in which section the module was imported or used.
            % An iou_used_and_imported means that the module was the subject
            % of a `:- use_module' declaration in the interface and of an
            % `:- import_module' declaration in the implementation; its
            % import_locn will be the one in the implementation.

    ;       ims_abstract_imported(module_name, int_file_kind).
            % This is used internally by the compiler, to identify items which
            % originally came from the implementation section of an interface
            % file; usually type declarations (especially equivalence types)
            % which should be used in code generation but not in type checking.

:- type opt_module_section
    --->    oms_opt_imported(module_name, opt_file_kind).
            % This is used internally by the compiler, to identify items which
            % originally came from an optimization file.

:- type int_for_opt_module_section
    --->    ioms_opt_imported(module_name, int_file_kind).
            % This is used internally by the compiler, to identify items which
            % originally came from an interface file needed by an
            % optimization file.

%---------------------------------------------------------------------------%

    % An import_locn is used to describe the place where an item was
    % imported from.
:- type import_locn
    --->    import_locn_implementation
            % The item is from a module imported in the implementation.

    ;       import_locn_interface
            % The item is from a module imported in the interface.

    ;       import_locn_import_by_ancestor
            % The item is from a module imported by an ancestor.
            % XXX Did the ancestor do the import in its interface, or not?

    ;       import_locn_ancestor_int0_interface
    ;       import_locn_ancestor_int0_implementation.
            % The item is from the interface or implementation section
            % of the .int0 file of an ancestor module.

%---------------------------------------------------------------------------%

%---------------------------------------------------------------------------%
%
% The main parts of parse trees are items. There are many kinds of items,
% and most of those kinds have their own item-kind-specific type that stores
% all the information the parse tree has about an item of that kind.
%
% The sequence number fields in the item-kind-specific types are intended to
% allow the recreation of the original item sequence after we have processed
% it into more complex data structures. Negative sequence numbers represent
% items that were not in the original read-in sequence, but which were added
% by the compiler. It is possible for two items to have the same sequence
% number if one original term (e.g. one that imports two or more modules)
% is split apart (e.g. into several items that each import only one module).
%
% When we create interface files, we print out selected items in the module.
% If the sequence of items printed changes, all the other modules depending
% on that interface file will be recompiled.
%
% A nontrivial fraction of changes to a module affect only the *order*
% of the items included in the interface, not their *content*. To minimize
% the amount of recompilation we have to do, we sort (most of the kinds of)
% items in the interface file, so that a change in the item order in the
% source file does not change the order of the items in the interface file.
% To make this sorting effective, we put the fields we prefer to use as
% the sort keys at the start of the item-kind-specific types. These are
% usually those that define the name of the entity, and if it makes sense
% to have more than item with that name, the main fields that distinguish
% items of the same name from each other.
%

    % Did an item originate in user code or was it added by the compiler
    % as part of a source-to-source transformation, e.g. the initialise
    % declarations? If the latter, specify the information that the
    % make_hlds pass may need to answer questions about the item.
    %
:- type item_maybe_attrs
    --->    item_origin_user
    ;       item_origin_compiler(item_compiler_attributes).

:- type item_compiler_attributes
    --->    item_compiler_attributes(
                compiler_origin
            ).

:- type compiler_origin
    --->    compiler_origin_initialise
    ;       compiler_origin_finalise
    ;       compiler_origin_class_method(
                cm_class_id                     :: class_id,
                cm_method                       :: pf_sym_name_arity
            )
    ;       compiler_origin_solver_type(
                cost_type_ctor_name             :: sym_name,
                cost_type_ctor_arity            :: arity,
                cost_aux_pred_kind              :: solver_type_pred_kind
            )
    ;       compiler_origin_mutable(
                com_module_name                 :: module_name,
                com_mutable_name                :: string,
                com_aux_pred_kind               :: mutable_pred_kind
            )
    ;       compiler_origin_tabling(
                cot_pred_spec                   :: pf_sym_name_arity,
                cot_aux_pred_kind               :: tabling_aux_pred_kind
            ).

:- type item
    --->    item_clause(item_clause_info)
    ;       item_type_defn(item_type_defn_info)
    ;       item_inst_defn(item_inst_defn_info)
    ;       item_mode_defn(item_mode_defn_info)
    ;       item_pred_decl(item_pred_decl_info)
    ;       item_mode_decl(item_mode_decl_info)
    ;       item_foreign_enum(item_foreign_enum_info)
    ;       item_foreign_export_enum(item_foreign_export_enum_info)
    ;       item_decl_pragma(item_decl_pragma_info)
    ;       item_impl_pragma(item_impl_pragma_info)
    ;       item_generated_pragma(item_generated_pragma_info)
    ;       item_promise(item_promise_info)
    ;       item_typeclass(item_typeclass_info)
    ;       item_instance(item_instance_info)
    ;       item_initialise(item_initialise_info)
    ;       item_finalise(item_finalise_info)
    ;       item_mutable(item_mutable_info)
    ;       item_type_repn(item_type_repn_info).

:- type item_clause_info
    --->    item_clause_info(
                cl_predname                     :: sym_name,
                cl_pred_or_func                 :: pred_or_func,
                cl_head_args                    :: list(prog_term),
                cl_maybe_attrs                  :: item_maybe_attrs,
                cl_varset                       :: prog_varset,
                cl_body                         :: maybe2(goal,
                                                    list(warning_spec)),
                cl_context                      :: prog_context,
                cl_seq_num                      :: int
            ).

:- type item_type_defn_info == item_type_defn_info_general(type_defn).

:- type item_type_defn_info_abstract
    == item_type_defn_info_general(type_details_abstract).
:- type item_type_defn_info_solver
    == item_type_defn_info_general(type_details_solver).
:- type item_type_defn_info_eqv
    == item_type_defn_info_general(type_details_eqv).
:- type item_type_defn_info_du
    == item_type_defn_info_general(type_details_du).
:- type item_type_defn_info_foreign
    == item_type_defn_info_general(type_details_foreign_generic).

:- type item_type_defn_info_general(T)
    --->    item_type_defn_info(
                % `:- type ...':
                % a definition of a type, or a declaration of an abstract type.
                td_ctor_name                    :: sym_name,
                td_ctor_args                    :: list(type_param),
                td_ctor_defn                    :: T,
                td_tvarset                      :: tvarset,
                td_context                      :: prog_context,
                td_seq_num                      :: int
            ).

:- type item_inst_defn_info
    --->    item_inst_defn_info(
                % `:- inst ... = ...':
                % a definition of an inst.
                id_inst_name                    :: sym_name,
                id_inst_args                    :: list(inst_var),
                id_maybe_for_type               :: maybe(type_ctor),
                id_inst_defn                    :: maybe_abstract_inst_defn,
                id_varset                       :: inst_varset,
                id_context                      :: prog_context,
                id_seq_num                      :: int
            ).

:- type maybe_abstract_inst_defn
    --->    abstract_inst_defn
    ;       nonabstract_inst_defn(inst_defn).

:- type item_mode_defn_info
    --->    item_mode_defn_info(
                % `:- mode ... = ...':
                % a definition of a mode.
                md_mode_name                    :: sym_name,
                md_mode_args                    :: list(inst_var),
                md_mode_defn                    :: maybe_abstract_mode_defn,
                md_varset                       :: inst_varset,
                md_context                      :: prog_context,
                md_seq_num                      :: int
            ).

:- type maybe_abstract_mode_defn
    --->    abstract_mode_defn
    ;       nonabstract_mode_defn(mode_defn).

:- type item_pred_decl_info
    --->    item_pred_decl_info(
                % `:- pred ...' or `:- func ...':
                % a predicate or function declaration.
                % This specifies the type of the predicate or function,
                % and it may optionally also specify the mode and determinism.
                pf_name                         :: sym_name,
                pf_p_or_f                       :: pred_or_func,
                pf_arg_decls                    :: list(type_and_mode),
                % The next two fields hold the `with_type` and `with_inst`
                % annotations. This syntactic sugar is expanded out by
                % equiv_type.m, which will then set these fields to `no'.
                pf_maybe_with_type              :: maybe(mer_type),
                pf_maybe_with_inst              :: maybe(mer_inst),
                pf_maybe_detism                 :: maybe(determinism),
                pf_maybe_attrs                  :: item_maybe_attrs,
                pf_tvarset                      :: tvarset,
                pf_instvarset                   :: inst_varset,
                pf_existqvars                   :: existq_tvars,
                pf_purity                       :: purity,
                pf_constraints                  :: prog_constraints,
                pf_context                      :: prog_context,
                pf_seq_num                      :: int
            ).

:- type item_mode_decl_info
    --->    item_mode_decl_info(
                % `:- mode ...':
                % a mode declaration for a predicate or function.
                pfm_name                        :: sym_name,
                pfm_p_or_f                      :: maybe(pred_or_func),
                pfm_arg_modes                   :: list(mer_mode),
                % The next field holds the `with_inst` annotation. This
                % syntactic sugar is expanded by equiv_type.m, which will
                % then set the field to `no'.
                pfm_maybe_with_inst             :: maybe(mer_inst),
                pfm_maybe_detism                :: maybe(determinism),
                pfm_instvarset                  :: inst_varset,
                pfm_context                     :: prog_context,
                pfm_seq_num                     :: int
            ).

:- type item_foreign_enum_info
    --->    item_foreign_enum_info(
                fe_language                     :: foreign_language,
                fe_type_ctor                    :: type_ctor,
                fe_values                       :: one_or_more(
                                                    pair(sym_name, string)),
                fe_context                      :: prog_context,
                fe_seq_num                      :: int
            ).

:- type foreign_enum_spec
    --->    foreign_enum_spec(
                foreign_language,
                type_ctor,
                one_or_more(pair(sym_name, string))
            ).

:- type item_foreign_export_enum_info
    --->    item_foreign_export_enum_info(
                fee_language                    :: foreign_language,
                fee_type_ctor                   :: type_ctor,
                fee_attributes                  :: export_enum_attributes,
                fee_overrides                   :: assoc_list(sym_name,
                                                    string),
                fee_context                     :: prog_context,
                fee_seq_num                     :: int
            ).

:- type item_decl_pragma_info == item_pragma_info(decl_pragma).
:- type item_impl_pragma_info == item_pragma_info(impl_pragma).
:- type item_generated_pragma_info == item_pragma_info(generated_pragma).
:- type item_pragma_info(T)
    --->    item_pragma_info(
                prag_type                       :: T,
                prag_context                    :: prog_context,
                prag_seq_num                    :: int
            ).

:- type item_promise_info
    --->    item_promise_info(
                prom_type                       :: promise_type,
                prom_clause                     :: goal,
                prom_varset                     :: prog_varset,
                prom_univ_quant_vars            :: list(prog_var),
                prom_context                    :: prog_context,
                prom_seq_num                    :: int
            ).

:- type item_typeclass_info
    --->    item_typeclass_info(
                tc_class_name                   :: class_name,
                tc_class_params                 :: list(tvar),
                tc_superclasses                 :: list(prog_constraint),
                tc_fundeps                      :: list(prog_fundep),
                tc_class_methods                :: class_interface,
                tc_varset                       :: tvarset,
                tc_context                      :: prog_context,
                tc_seq_num                      :: int
            ).

:- type item_instance_info
    --->    item_instance_info(
                % The original types field preserves the types in the instance
                % declaration as written by the programmer. The types field
                % is subject to the expansion of equivalent types.
                ci_class_name                   :: class_name,
                ci_types                        :: list(mer_type),
                ci_original_types               :: list(mer_type),
                ci_deriving_class               :: list(prog_constraint),
                ci_method_instances             :: instance_body,
                ci_varset                       :: tvarset,
                ci_module_containing_instance   :: module_name,
                ci_context                      :: prog_context,
                ci_seq_num                      :: int
            ).

:- type item_initialise_info
    --->    item_initialise_info(
                % :- initialise pred_name.
                init_name                       :: sym_name,
                init_arity                      :: arity,
                init_maybe_attrs                :: item_maybe_attrs,
                init_context                    :: prog_context,
                init_seq_num                    :: int
            ).

:- type item_finalise_info
    --->    item_finalise_info(
                % :- finalise pred_name.
                final_name                      :: sym_name,
                final_arity                     :: arity,
                final_maybe_attrs               :: item_maybe_attrs,
                final_context                   :: prog_context,
                final_seq_num                   :: int
            ).

:- type item_mutable_info
    --->    item_mutable_info(
                % :- mutable(var_name, type, inst, value, attrs).
                mut_name                        :: string,
                % The mut_type and mut_inst fields are subject to expansion
                % in equiv_type.m; the mut_orig_type and mut_orig_inst fields
                % are not. The latter are used to improve error reporting.
                mut_orig_type                   :: mer_type,
                mut_type                        :: mer_type,
                mut_orig_inst                   :: mer_inst,
                mut_inst                        :: mer_inst,
                mut_init_value                  :: prog_term,
                mut_init_value_varset           :: prog_varset,
                mut_attrs                       :: mutable_var_attributes,
                mut_context                     :: prog_context,
                mut_seq_num                     :: int
            ).

:- type item_type_repn_info
    --->    item_type_repn_info(
                % `:- type_representation ...':
                % An item added by the compiler to a .int3 file
                % to tell readers of that file the information they need
                % to correctly reconstruct the representation of the given
                % type constructor, even when that information is supposed
                % to be invisible to them semantically.
                % There should be at most one such item for any type_ctor
                % in the .int3 file of its defining module.
                % The sym_name should be fully qualified.
                tr_ctor                         :: sym_name,
                tr_ctor_arg_tvars               :: list(tvar),
                tr_ctor_repn_info               :: type_ctor_repn_info,
                tr_tvarset                      :: tvarset,
                tr_context                      :: prog_context,
                tr_seq_num                      :: int
            ).

%---------------------------------------------------------------------------%
%
% Declarations of relationships between modules.
%

:- type item_include
    --->    item_include(
                % The representation of an `:- include_module' declaration
                % is a list of one or more item_includes, each of which
                % declares the named module to be a submodule of the
                % current module,
                %
                % If this item_include occurs in module x.y, then
                % the module_name here is guaranteed to have the form x.y.z.
                % In other words, the included module is guaranteed to be
                % an immediate descendant of the including module.
                % Any attempt to include a non-descendant module or a
                % non-immediate descendant module will be caught and
                % diagnosed by the parser.

                incl_module                     :: module_name,

                % The context and item sequence number of the declaration.
                incl_context                    :: prog_context,
                incl_seq_num                    :: int
            ).

:- type import_or_use
    --->    import_decl
    ;       use_decl.

    % The representation of an `:- import_module' or an `:- use_module'
    % declaration is a list of one or more item_avails, each of which
    % makes available to the current module the entities in the interface
    % of the module named in the declaration.
    %
    % With avail_use, references to these entities must be module qualified;
    % with avail_import, they don't have to be.

:- type item_avail
    --->    avail_import(avail_import_info)
    ;       avail_use(avail_use_info).

    % The structures of avail_import_info and avail_use_info are the same,
    % with the first argument being the name of the module that is the subject
    % of the import_module or use_module declaration, and the second and third
    % being the context and item sequence number of the declaration.
    %
    % The two types are separate to allow parse_tree_opts to contain only
    % values of a type that makes it clear that they contain information
    % ONLY about use_module declarations, not import_module declarations.
:- type avail_import_info
    --->    avail_import_info(
                aii_module_name     :: module_name,
                aii_context         :: prog_context,
                aii_seq_num         :: int
            ).
:- type avail_use_info
    --->    avail_use_info(
                aui_module_name     :: module_name,
                aui_context         :: prog_context,
                aui_seq_num         :: int
            ).

:- type item_fim
    --->    item_fim(
                % A `:- pragma foreign_import_module(Lang, ModuleName)'
                % declaration, which tells the compiler to include the
                % header file we automatically generate for Module
                % in the target language Lang when we compile this module
                % to that language, and, if this occurs in the interface,
                % when we compile the modules importing this one
                % to that same target language.
                %
                % Equivalent to
                % `:- pragma foreign_decl(Lang, "#include <module>.h")',
                % except that the name of the header file is not hard-coded,
                % and mmake can use the dependency information.
                %
                % Throughout most parts of the compiler, we use "FIM"
                % as shorthand for foreign_import_module.

                fim_lang                        :: foreign_language,
                fim_module_name                 :: module_name,
                fim_context                     :: prog_context,
                fim_seq_num                     :: int
            ).

%---------------------------------------------------------------------------%
%
% Type classes.
%

    % The class_decl type represents any declaration that occurs
    % in the body of a type class definition.
    %
    % Such declarations may either declare class methods, or they may declare
    % the modes of class methods.
    %
:- type class_decl
    --->    class_decl_pred_or_func(class_pred_or_func_info)
    ;       class_decl_mode(class_mode_info).

:- type class_pred_or_func_info
    --->    class_pred_or_func_info(
                % This is a `pred ...' or `func ...' declaration in a
                % type class body, which declares a predicate or function
                % method. Such declarations specify the types of the
                % arguments, and may optionally also specify argument modes
                % and the determinism.

                % The name of the predicate or function.
                sym_name,
                pred_or_func,

                % The arguments' types, and maybe modes.
                list(type_and_mode),

                % Any `with_type` and/or `with_inst` annotation.
                maybe(mer_type),
                maybe(mer_inst),

                % The determinism declaration, if any.
                maybe(determinism),

                % The varsets of the type and inst variables.
                tvarset,
                inst_varset,

                % The existentially quantified type variables, if any.
                existq_tvars,

                % Any purity annotation.
                purity,

                % The typeclass constraints on the declaration.
                prog_constraints,

                prog_context
            ).

:- type class_mode_info
    --->    class_mode_info(
                % This is a `mode ...' declaration in a type class body.
                % Such a declaration declares a mode for one of the methods
                % of the type class.

                % The name of the predicate or function.
                sym_name,

                % Whether the method is a predicate or a function.
                % For declarations using `with_inst`, we don't know
                % which it is until we have expanded the inst.
                maybe(pred_or_func),

                % The arguments' modes.
                list(mer_mode),

                % Any `with_inst` annotation.
                maybe(mer_inst),

                % Any determinism declaration.
                maybe(determinism),

                % The varset of the inst variables.
                inst_varset,

                prog_context
            ).

%---------------------------------------------------------------------------%
%
% Mutable variables.
%

    % Indicates if updates to the mutable are trailed or untrailed.
    %
:- type mutable_trailed
    --->    mutable_untrailed
    ;       mutable_trailed.

    % Indicates if a mutable is attached to the I/O state or not.
    %
:- type mutable_attach_to_io_state
    --->    mutable_dont_attach_to_io_state
    ;       mutable_attach_to_io_state.

    % Indicates if a mutable is constant or not.
    %
:- type mutable_constant
    --->    mutable_not_constant
    ;       mutable_constant.

    % Indicates if a mutable is thread-local or not.
    %
:- type mutable_thread_local
    --->    mutable_not_thread_local
    ;       mutable_thread_local.

    % Has the user specified a name for us to use on the target code side
    % of the FLI?
    %
:- type foreign_name
    --->    foreign_name(
                foreign_name_lang :: foreign_language,
                foreign_name_name :: string
            ).

    % An abstract type for representing a set of mutable variable
    % attributes.
    %
:- type mutable_var_attributes.

    % Return the default attributes for a mutable variable.
    %
:- func default_mutable_attributes = mutable_var_attributes.

    % Access functions for the `mutable_var_attributes' structure.
    %
:- func mutable_var_trailed(mutable_var_attributes) = mutable_trailed.
:- func mutable_var_maybe_foreign_names(mutable_var_attributes)
    = maybe(list(foreign_name)).
:- func mutable_var_attach_to_io_state(mutable_var_attributes)
    = mutable_attach_to_io_state.
:- func mutable_var_constant(mutable_var_attributes) = mutable_constant.
:- func mutable_var_thread_local(mutable_var_attributes)
    = mutable_thread_local.

:- pred set_mutable_var_trailed(mutable_trailed::in,
    mutable_var_attributes::in, mutable_var_attributes::out) is det.
:- pred set_mutable_add_foreign_name(foreign_name::in,
    mutable_var_attributes::in, mutable_var_attributes::out) is det.
:- pred set_mutable_var_attach_to_io_state(mutable_attach_to_io_state::in,
    mutable_var_attributes::in, mutable_var_attributes::out) is det.
:- pred set_mutable_var_constant(mutable_constant::in,
    mutable_var_attributes::in, mutable_var_attributes::out) is det.
:- pred set_mutable_var_thread_local(mutable_thread_local::in,
    mutable_var_attributes::in, mutable_var_attributes::out) is det.

%---------------------------------------------------------------------------%
%
% Information about the representations of types defined in other modules.
%

    % This type and type_ctor_checked_defn are closely related.
    % The principal differences are the following.
    %
    % - type_ctor_checked_defn deals with solver types. Since solver types
    %   have no representation information themselves (they are represented
    %   by values of another type), this type does not deal with them.
    %
    % - One of the purposes of type_ctor_checked_defn is to decide
    %   what items to include in interface files, for use by code using
    %   the compiler's ancient approach to deciding type representation,
    %   where each compiler invocation that generated code decided for itself
    %   how every type it had access to was represented, including the types
    %   imported from other modules. This means that it needs to contain
    %   either whole items (of particular kinds), or information from which
    %   whole items can be reconstructed.
    %
    % - The above consideration also requires a type_ctor_checked_defn
    %   to specify the status of the type. On the other hand, values of
    %   this type have no use for status information. Status information
    %   is used only for checking whether an access to a type should be
    %   allowed or not; the only use of values of this type is to help
    %   compute type representations.
    %
    % - Only the last four of the function symbols of this type are
    %   now intended to be the used. The others are part of a discarded
    %   attempt to redesign that ancient system.
    %   XXX TYPE_REPN Delete the others.
    %
    % - Only this type needs to contain representation information.
    %   A value of the type_ctor_checked_defn type needs to contain *part*
    %   of the information from which this representation information is
    %   computed for its type, but not *all* of it; some of that information
    %   comes from information about the representation of *other* types.
    %
    % One sort-of difference is while both contain information that has been
    % checked by a compiler invocation, values of this type that have been
    % read in from an interface file, while checked by another compiler
    % invocation before being written out, may be corrupted in the filesystem.
    % However, while this danger is always present, we need not take any
    % special steps to guard against it, precisely because no perfect defense
    % is possible.
    %
:- type type_ctor_repn_info
    --->    tcrepn_is_direct_dummy
    ;       tcrepn_is_notag
    ;       tcrepn_fits_in_n_bits(int, fill_kind)
    ;       tcrepn_has_direct_arg_functors(list(sym_name_arity))
    ;       tcrepn_is_word_aligned_ptr
    ;       tcrepn_is_eqv_to(mer_type)
    ;       tcrepn_du(du_repn)
    ;       tcrepn_foreign(c_j_cs_e_repn).

    % A type that has a discriminated union definition in Mercury
    % may also have a definition in each of our foreign languages,
    % If it is an direct_dummy or enum type, that definition may be
    % either a foreign type definition or a foreign enum definition;
    % otherwise, it can only be a foreign type definition.
:- type du_repn
    --->    dur_direct_dummy(direct_dummy_repn)
    ;       dur_enum(enum_repn)
    ;       dur_notag(notag_repn)
    ;       dur_gen_only_functor(gen_du_repn_only_functor)
    ;       dur_gen_more_functors(gen_du_repn_more_functors).

:- type direct_dummy_repn
    --->    direct_dummy_repn(
                % The type is a direct dummy type that satisfies the
                % requirements of du_type_is_dummy.

                % The name of the one functor in the type, which must be
                % arity 0. Its representation will be dummy_tag.
                dummy_functor_name          :: string,

                % Any foreign type or foreign enum definitions for the type.
                dummy_foreign               :: c_j_cs_e_enum_repn
            ).

:- type enum_repn
    --->    enum_repn(
                % The type is an enum type that satisfies the requirements
                % of du_type_is_enum.

                % The list of the functor names (all arity 0). We store
                % the first two separately to enforce the structural invariant
                % that an enum must have at least two functors.
                %
                % The representation of functor #N in Mercury will be
                % int_tag(int_tag_int(N)), with counting starting at 0.
                %
                % We do not care about the 32 vs 64 bit distinction here,
                % because the definition of an enum type with more than 2^32
                % function symbols will cause a compiler to run out of memory
                % for a *very* long time to come.
                enum_functor1               :: string,
                enum_functor2               :: string,
                enum_functors3plus          :: list(string),

                % Any foreign type or foreign enum definitions for the type.
                enum_foreign            :: c_j_cs_e_enum_repn
            ).

:- type notag_repn
    --->    notag_repn(
                % The name of the one functor in the type, which must be
                % arity 1. Its representation will be no_tag.
                % The representation of the argument be *recorded*
                % as a full word at offset 0, but this should never be
                % looked up, since the argument will actually be stored
                % wherever the whole term is stored.
                notag_functor_name          :: string,

                notag_foreign               :: c_j_cs_e_repn
            ).

:- type gen_du_repn_only_functor
    --->    gen_du_repn_only_functor(
                % The name of the data constructor. The arity is implicit
                % in the length of the argument list, which must be the same
                % in the 64 and 32 bit versions.
                gdrof_functor           :: string,
                gdrof_args64            :: gen_du_only_functor_args,
                gdrof_args32            :: gen_du_only_functor_args,
                gdrof_foreign           :: c_j_cs_e_repn
            ).

:- type gen_du_repn_more_functors
    --->    gen_du_repn_more_functors(
                gdrmf_functor_1         :: gen_du_functor,
                gdrmf_functor_2         :: gen_du_functor,
                gdrmf_other_functors    :: list(gen_du_functor),
                gdrmf_foreign           :: c_j_cs_e_repn
            ).

:- type gen_du_only_functor_args
    --->    gen_du_only_functor_local_args(
                % The cons_tag is local_args_tag(local_args_only_functor).
                % The ptag is 0. The local sectag is 0 bits.
                % For all args, ArgOnlyOffset and CellOffset are both -2.
                gduofl_args             :: one_or_more(local_pos_size)
            )
    ;       gen_du_only_functor_remote_args(
                % The cons_tag is remote_args_tag(remote_args_only_functor).
                % The ptag is 0. The remote sectag size is 0 bits.
                gduofr_args             :: one_or_more(arg_pos_size)
            ).

:- type gen_du_functor
    --->    gen_du_constant_functor(
                % The name of the data constructor. The arity is 0.
                % The ptag is 0. The local sectag is 0. The *size*
                % of the local sectag may depend on the word size.
                gducf_functor           :: string,
                gducf_sectag_size_64    :: sectag_size,
                gducf_sectag_size_32    :: sectag_size
            )
    ;       gen_du_nonconstant_functor(
                % The name of the data constructor. The arity is implicit
                % in the length of the argument list, which must be the same
                % in the 64 and 32 bit versions.
                gduncf_functor          :: string,
                gduncf_tags_64          :: ptag_sectag,
                gduncf_tags_32          :: ptag_sectag,
                gduncf_args_64          :: one_or_more(maybe_direct_arg),
                gduncf_args_32          :: one_or_more(maybe_direct_arg)
            ).

:- type foreign_type_lang_repn
    --->    foreign_type_lang_repn(
                ftlr_lang               :: foreign_language,
                ftlr_foreign_type       :: foreign_type_repn
            ).

:- type foreign_type_repn
    --->    foreign_type_repn(
                % The name of the foreign type that represents values
                % of this Mercury type.
                ftr_foreign_type        :: string,

                % The assertions about this foreign type.
                ftr_assertions          :: foreign_type_assertions
            ).

:- type enum_foreign_repn
    --->    enum_foreign_type(foreign_type_repn)
    ;       enum_foreign_enum(one_or_more(string)).

:- type ptag_sectag
    --->    ptag_sectag(
                gdu_ptag                :: uint,
                gdu_maybe_sectag        :: maybe_sectag
            ).

:- type maybe_sectag
    --->    no_sectag
    ;       local_sectag(uint, sectag_size)
    ;       remote_sectag(uint, sectag_size).

:- type sectag_size
    --->    sectag_rest_of_word
    ;       sectag_bits(uint).

:- type maybe_direct_arg
    --->    nondirect_arg(arg_pos_size)
    ;       direct_arg(uint).   % The ptag.

:- type local_pos_size
    --->    local_pos_size(
                lps_shift               :: uint,
                lps_fill                :: fill_kind_size
            ).

:- type arg_pos_size
    --->    pos_full(
                pf_arg_only_offset      :: arg_only_offset,
                pf_cell_offset          :: cell_offset
            )
    ;       pos_double(
                pd_arg_only_offset      :: arg_only_offset,
                pd_cell_offset          :: cell_offset,
                pd_kind                 :: double_word_kind
            )
    ;       pos_partial_first(
                ppf_arg_only_offset     :: arg_only_offset,
                ppf_cell_offset         :: cell_offset,
                ppf_shift               :: uint,
                ppf_fill                :: fill_kind_size
            )
    ;       pos_partial_shifted(
                pps_arg_only_offset     :: arg_only_offset,
                pps_cell_offset         :: cell_offset,
                pps_shift               :: uint,
                pps_fill                :: fill_kind_size
            )
    ;       pos_none_shifted(
                pns_arg_only_offset     :: arg_only_offset,
                pns_cell_offset         :: cell_offset
            )
    ;       pos_none_nowhere.

:- type fill_kind_size
    --->    fk_enum(uint)
    ;       fk_int8
    ;       fk_int16
    ;       fk_int32
    ;       fk_uint8
    ;       fk_uint16
    ;       fk_uint32
    ;       fk_char21.

%---------------------------------------------------------------------------%
%
% Pragmas.
%

:- type decl_pragma
    --->    decl_pragma_obsolete_pred(pragma_info_obsolete_pred)
    ;       decl_pragma_obsolete_proc(pragma_info_obsolete_proc)
    ;       decl_pragma_type_spec(pragma_info_type_spec)
    ;       decl_pragma_oisu(pragma_info_oisu)
    ;       decl_pragma_terminates(pred_name_arity)
    ;       decl_pragma_does_not_terminate(pred_name_arity)
    ;       decl_pragma_check_termination(pred_name_arity)
    ;       decl_pragma_termination_info(pragma_info_termination_info)
    ;       decl_pragma_termination2_info(pragma_info_termination2_info)
    ;       decl_pragma_structure_sharing(pragma_info_structure_sharing)
    ;       decl_pragma_structure_reuse(pragma_info_structure_reuse).

:- type impl_pragma
    --->    impl_pragma_foreign_decl(pragma_info_foreign_decl)
    ;       impl_pragma_foreign_code(pragma_info_foreign_code)
    ;       impl_pragma_foreign_proc(pragma_info_foreign_proc)
    ;       impl_pragma_foreign_proc_export(pragma_info_foreign_proc_export)
    ;       impl_pragma_external_proc(pragma_info_external_proc)
    ;       impl_pragma_fact_table(pragma_info_fact_table)
    ;       impl_pragma_tabled(pragma_info_tabled)
    ;       impl_pragma_inline(pred_name_arity)
    ;       impl_pragma_no_inline(pred_name_arity)
    ;       impl_pragma_consider_used(pred_name_arity)
    ;       impl_pragma_mode_check_clauses(pred_name_arity)
    ;       impl_pragma_no_detism_warning(pred_name_arity)
    ;       impl_pragma_require_tail_rec(pragma_info_require_tail_rec)
    ;       impl_pragma_promise_pure(pred_name_arity)
    ;       impl_pragma_promise_semipure(pred_name_arity)
    ;       impl_pragma_promise_eqv_clauses(pred_name_arity)
    ;       impl_pragma_require_feature_set(pragma_info_require_feature_set).

:- type generated_pragma
    --->    gen_pragma_unused_args(pragma_info_unused_args)
    ;       gen_pragma_exceptions(pragma_info_exceptions)
    ;       gen_pragma_trailing_info(pragma_info_trailing_info)
    ;       gen_pragma_mm_tabling_info(pragma_info_mm_tabling_info).

:- type pred_marker_pragma_kind
    --->    pmpk_inline
    ;       pmpk_noinline
    ;       pmpk_promise_pure
    ;       pmpk_promise_semipure
    ;       pmpk_promise_eqv_clauses
    ;       pmpk_terminates
    ;       pmpk_does_not_terminate
    ;       pmpk_mode_check_clauses.

:- type pragma_info_pred_marker
    --->    pragma_info_pred_marker(
                pred_name_arity,
                pred_marker_pragma_kind
            ).

:- type item_pred_marker ==    item_pragma_info(pragma_info_pred_marker).
:- type item_type_spec ==      item_pragma_info(pragma_info_type_spec).
:- type item_termination ==    item_pragma_info(pragma_info_termination_info).
:- type item_termination2 ==   item_pragma_info(pragma_info_termination2_info).
:- type item_struct_sharing == item_pragma_info(pragma_info_structure_sharing).
:- type item_struct_reuse ==   item_pragma_info(pragma_info_structure_reuse).
:- type item_foreign_proc ==   item_pragma_info(pragma_info_foreign_proc).
:- type item_tabled ==         item_pragma_info(pragma_info_tabled).
:- type item_unused_args ==    item_pragma_info(pragma_info_unused_args).
:- type item_exceptions ==     item_pragma_info(pragma_info_exceptions).
:- type item_trailing ==       item_pragma_info(pragma_info_trailing_info).
:- type item_mm_tabling ==     item_pragma_info(pragma_info_mm_tabling_info).

    % Foreign language interfacing pragmas.

:- type pragma_info_foreign_decl
    --->    pragma_info_foreign_decl(
                % A foreign language declaration, such as C header code.
                decl_lang               :: foreign_language,
                decl_is_local           :: foreign_decl_is_local,
                decl_decl               :: foreign_literal_or_include
            ).

:- type pragma_info_foreign_code
    --->    pragma_info_foreign_code(
                code_lang               :: foreign_language,
                code_code               :: foreign_literal_or_include
            ).

:- type pragma_info_foreign_proc
    --->    pragma_info_foreign_proc(
                % Set of foreign proc attributes, such as:
                %   what language this code is in
                %   whether or not the code may call Mercury,
                %   whether or not the code is thread-safe
                % PredName, Predicate or Function, Vars/Mode,
                % VarNames, Foreign Code Implementation Info
                proc_attrs              :: pragma_foreign_proc_attributes,
                proc_name               :: sym_name,
                proc_p_or_f             :: pred_or_func,
                proc_vars               :: list(pragma_var),
                proc_varset             :: prog_varset,
                proc_instvarset         :: inst_varset,
                proc_impl               :: pragma_foreign_proc_impl
            ).

:- type pragma_info_foreign_proc_export
    --->    pragma_info_foreign_proc_export(
                exp_maybe_attrs         :: item_maybe_attrs,

                % Predname, Predicate/function, Modes, foreign function name.
                exp_language            :: foreign_language,
                exp_pred_id             :: pred_name_modes_pf,
                exp_foreign_name        :: string
            ).

:- type pragma_info_external_proc
    --->    pragma_info_external_proc(
                % The specified procedure(s) is/are implemented outside
                % of Mercury code, for the named backend if there is one,
                % or if there isn't a named backend, then for all backends.
                external_pred_name      :: sym_name,
                external_pred_arity     :: arity,
                external_p_or_f         :: pred_or_func,
                external_maybe_backend  :: maybe(backend)
            ).

    % Optimization pragmas.

:- type pragma_info_type_spec
    --->    pragma_info_type_spec(
                % PredName, SpecializedPredName, Arity, PredOrFunc,
                % Modes if a specific procedure was specified, type
                % substitution (using the variable names from the pred
                % declaration), TVarSet, Equivalence types used
                tspec_pred_name         :: sym_name,
                tspec_new_name          :: sym_name,
                tspec_arity             :: arity,
                tspec_p_or_f            :: maybe(pred_or_func),
                tspec_modes             :: maybe(list(mer_mode)),
                tspec_tsubst            :: type_subst,
                tspec_tvarset           :: tvarset,
                tspec_items             :: set(item_id)
            ).

:- type pragma_info_unused_args
    --->    pragma_info_unused_args(
                % PredName, Arity, Mode number, Removed arguments.
                % Used for intermodule unused argument removal. Should only
                % appear in .opt files.
                unused_proc_id          :: pred_name_arity_pf_mn,
                unused_args             :: list(int)
            ).

:- type pragma_info_exceptions
    --->    pragma_info_exceptions(
                % PredName, Arity, Mode number, Exception status.
                % Should only appear in `.opt' or `.trans_opt' files.
                exceptions_proc_id      :: pred_name_arity_pf_mn,
                exceptions_status       :: exception_status
            ).

:- type pragma_info_trailing_info
    --->    pragma_info_trailing_info(
                % PredName, Arity, Mode number, Trailing status.
                % Should on appear in `.opt' or `.trans_opt' files.
                trailing_info_proc_id   :: pred_name_arity_pf_mn,
                trailing_info_status    :: trailing_status
            ).

:- type pragma_info_mm_tabling_info
    --->    pragma_info_mm_tabling_info(
                % PredName, Arity, Mode number, MM Tabling status.
                % Should on appear in `.opt' or `.trans_opt' files.
                mm_tabling_info_proc_id :: pred_name_arity_pf_mn,
                mm_tabling_info_status  :: mm_tabling_status
            ).

:- type pragma_info_require_tail_rec
    --->    pragma_info_require_tail_rec(
                rtr_proc_id             :: pred_name_arity_mpf_mmode,
                rtr_require_tailrec     :: require_tail_recursion

                % This parameter only makes sense when options contains
                % either rtro_mutual_rec_only or rtro_all_recursion.
                % TODO, currently unused, may be used later to implement one
                % of Zoltan's suggestions here:
                % http://www.mercurylang.org/list-archives/developers/
                %   2015-November/016482.html
                % rtr_maybe_scc           :: maybe(list(
                %                             pred_name_arity_mpf_mmode))
            ).

    % Evaluation method pragmas.

:- type pragma_info_tabled
    --->    pragma_info_tabled(
                % Tabling type, Predname, Arity, PredOrFunc?, Mode?
                tabled_method           :: eval_method,
                tabled_name             :: pred_name_arity_mpf,
                tabled_mode             :: maybe(list(mer_mode)),
                tabled_attributes       :: maybe(table_attributes)
            ).

:- type pragma_info_fact_table
    --->    pragma_info_fact_table(
                % Predname and Arity, Fact file name.
                fact_table_pred         :: pred_name_arity,
                fact_table_filename     :: string
            ).

:- type pragma_info_oisu
    --->    pragma_info_oisu(
                oisu_type_ctor          :: type_ctor,
                oisu_creator_preds      :: list(pred_name_arity),
                oisu_transformer_preds  :: list(pred_name_arity),
                oisu_destroyer_preds    :: list(pred_name_arity)
            ).

    % Termination analysis pragmas.

:- type pragma_info_termination_info
    --->    pragma_info_termination_info(
                % The list(mer_mode) is the declared argmodes of the
                % procedure, unless there are no declared argmodes, in which
                % case the inferred argmodes are used. This pragma is used to
                % define information about a predicates termination
                % properties. It is most useful where the compiler has
                % insufficient information to be able to analyse the
                % predicate. This includes c_code, and imported predicates.
                % termination_info pragmas are used in opt and trans_opt
                % files.
                terminfo_pred_id        :: pred_name_modes_pf,
                terminfo_args           :: maybe(pragma_arg_size_info),
                terminfo_term           :: maybe(pragma_termination_info)
            ).

:- type pragma_info_termination2_info
    --->    pragma_info_termination2_info(
                terminfo2_pred_id       :: pred_name_modes_pf,
                terminfo2_args          :: maybe(pragma_constr_arg_size_info),
                terminfo2_args2         :: maybe(pragma_constr_arg_size_info),
                terminfo2_term          :: maybe(pragma_termination_info)
            ).

    % CTGC pragmas: structure sharing / structure reuse analysis.

:- type pragma_info_structure_sharing
    --->    pragma_info_structure_sharing(
                % After structure sharing analysis, the compiler generates
                % structure sharing pragmas to be stored in and read from
                % optimization interface files.
                %
                % The list of modes consists of the declared argmodes
                % (or inferred argmodes if there are no declared ones).
                sharing_pred_id         :: pred_name_modes_pf,
                sharing_headvars        :: list(prog_var),
                sharing_headvar_types   :: list(mer_type),

                % The prog_varset and tvarset are meaningful only when
                % writing out this pragma; add_pragma.m ignores both varsets.
                sharing_varset          :: prog_varset,
                sharing_tvarset         :: tvarset,

                % As of 2019 10 29, and probably long before then,
                % the compiler *always* fills this slot with `yes(...)'.
                % A `no' would mean that the relevant information is not
                % available, but in that case, we simply do not write out
                % this pragma.
                sharing_description     :: maybe(structure_sharing_domain)
            ).

:- type pragma_info_structure_reuse
    --->    pragma_info_structure_reuse(
                % After reuse analysis, the compiler generates structure reuse
                % pragmas to be stored in and read from optimization interface
                % files.
                %
                % The list of modes consists of the declared argmodes
                % (or inferred argmodes if there are no declared ones).
                %
                % The last sym_name (reuse_optimised_name) stores the name
                % of the optimised version of the exported predicate.
                % XXX As of 2019 10 29, the word "reuse_optimised_name"
                % appears nowhere in the compiler apart from this comment.
                reuse_pred_id           :: pred_name_modes_pf,
                reuse_headvars          :: list(prog_var),
                reuse_headvar_types     :: list(mer_type),

                % The prog_varset and tvarset are meaningful only when
                % writing out this pragma; add_pragma.m ignores both varsets.
                reuse_varset            :: prog_varset,
                reuse_tvarset           :: tvarset,

                % As of 2019 10 29, and probably long before then,
                % the compiler *always* fills this slot with `yes(...)'.
                % A `no' would mean that the relevant information is not
                % available, but in that case, we simply do not write out
                % this pragma.
                reuse_description       :: maybe(structure_reuse_domain)
            ).

    % Misc pragmas.

:- type pragma_info_obsolete_pred
    --->    pragma_info_obsolete_pred(
                pred_name_arity,
                list(sym_name_arity)
            ).

:- type pragma_info_obsolete_proc
    --->    pragma_info_obsolete_proc(
                pred_name_modes_pf,
                list(sym_name_arity)
            ).

:- type pragma_info_require_feature_set
    --->    pragma_info_require_feature_set(
                rfs_feature_set         :: set(required_feature)
            ).

    % These types identify procedures in pragmas.

:- type pred_name_arity
    --->    pred_name_arity(
                pna_pred_name           :: sym_name,
                pna_arity               :: arity
            ).

:- type pred_name_arity_pf
    --->    pred_name_arity_pf(
                pnap_pred_name          :: sym_name,
                pnap_arity              :: arity,
                pnap_pf                 :: pred_or_func
            ).

:- type pred_name_arity_pf_mn
    --->    pred_name_arity_pf_mn(
                pnapm_pred_name         :: sym_name,
                pnapm_arity             :: arity,
                pnapm_pf                :: pred_or_func,
                pnapm_mode_num          :: mode_num
            ).

:- type pred_name_arity_mpf_mmode
    --->    pred_name_arity_mpf_mmode(
                pnampm_pred_name        :: sym_name,
                pnampm_arity            :: arity,
                pnampm_maybe_pf         :: maybe(pred_or_func),
                pnampm_maybe_mode       :: maybe(list(mer_mode))
            ).

:- type pred_name_modes_pf
    --->    pred_name_modes_pf(
                pnmp_pred_name          :: sym_name,
                pnmp_arity              :: list(mer_mode),
                pnmp_pf                 :: pred_or_func
            ).

:- type pred_name_arity_mpf
    --->    pred_name_arity_mpf(
                pnam_pred_name          :: sym_name,
                pnam_arity              :: arity,
                pnam_maybe_pf           :: maybe(pred_or_func)
            ).

%---------------------------------------------------------------------------%
%
% Goals.
%

    % Here is how goals are represented in the parse tree.
    % The three most frequent kinds of goals are first, to give them
    % their own primary tags on 32 bit machines, and
    % the seven most frequent kinds of goals are first, to give them
    % their own primary tags on 64 bit machines.
    %
    % During a bootcheck in august 2015, the frequencies of occurrence
    % of the various goal kinds were these:
    %
    % goal_unify                1360701
    % goal_conj                 1316066
    % goal_call                 1263403
    %
    % goal_true                  135352
    % goal_if_then_else          128052
    % goal_disj                  116547
    % goal_not                     7080
    %
    % goal_fail                    5219
    % goal_pro_purity              1492
    % goal_trace                   1356
    % goal_pro_eqv_solns            913
    % goal_some_state_vars          620 now goal_quant/some/state
    % goal_some                     192 now goal_quant/some/ordinary
    % goal_req_compl_switch         172
    % goal_par_conj                 132
    % goal_implies                  129
    % goal_all                       78 now goal_quant/all/ordinary
    % goal_req_detism                49
    % goal_try                       35
    % goal_equivalent                18
    % goal_event                     17
    % goal_req_arm_detism            14
    % goal_pro_arbitrary             12
    % goal_pro_eqv_soln_sets          8
    % goal_atomic                     2
    % goal_all_state_vars             0 now goal_quant/all/state

:- type quant_type
    --->    quant_some
    ;       quant_all.

:- type quant_vars_kind
    --->    quant_ordinary_vars
    ;       quant_state_vars.

:- type plain_or_dot_var
    --->    podv_plain(prog_var)
            % V: a plain variable.
    ;       podv_dot(prog_var).
            % !.SV: the current state of this state variable.

:- type goal
    % The most frequent kinds of goals.
    --->    unify_expr(prog_context, prog_term, prog_term, purity)
    ;       call_expr(prog_context, sym_name, list(prog_term), purity)

    ;       conj_expr(prog_context, goal, goal)
            % nonempty plain conjunction

    ;       true_expr(prog_context)
            % empty conjunction

    ;       if_then_else_expr(
                prog_context,
                list(prog_var), % SomeVars
                list(prog_var), % StateVars
                goal,           % Cond
                goal,           % Then
                goal            % Else
            )
    ;       disj_expr(prog_context, goal, goal)
            % nonempty disjunction

    ;       not_expr(prog_context, goal)

    % The other kinds of goals.

    ;       fail_expr(prog_context)
            % empty disjunction

    ;       par_conj_expr(prog_context, goal, goal)
            % nonempty parallel conjunction

    ;       quant_expr(
                % Existential or universal quantification?
                quant_type,

                % Are the variables ordinary variables or state variables?
                quant_vars_kind,

                prog_context,
                list(prog_var),
                goal
            )

    ;       promise_purity_expr(prog_context, purity, goal)
    ;       promise_equivalent_solutions_expr(
                prog_context,
                list(prog_var),  % OrdinaryVars
                list(prog_var),  % StateVars (!V)
                list(prog_var),  % DotStateVars (!.V)
                list(prog_var),  % ColonStateVars (!:V)
                goal
            )
    ;       promise_equivalent_solution_sets_expr(
                prog_context,
                list(prog_var),  % OrdinaryVars
                list(prog_var),  % StateVars (!V)
                list(prog_var),  % DotStateVars (!.V)
                list(prog_var),  % ColonStateVars (!:V)
                goal
            )
    ;       promise_equivalent_solution_arbitrary_expr(
                prog_context,
                list(prog_var),  % OrdinaryVars
                list(prog_var),  % StateVars (!V)
                list(prog_var),  % DotStateVars (!.V)
                list(prog_var),  % ColonStateVars (!:V)
                goal
            )
    ;       require_detism_expr(
                prog_context,
                determinism,
                goal
            )
    ;       require_complete_switch_expr(
                prog_context,
                plain_or_dot_var,
                goal
            )
    ;       require_switch_arms_detism_expr(
                prog_context,
                plain_or_dot_var,
                determinism,
                goal
            )
    ;       disable_warnings_expr(
                % Disable the given one or more warnings
                % in the goal inside the scope.
                prog_context,
                goal_warning,
                list(goal_warning),
                goal
            )
    ;       trace_expr(
                texpr_context       :: prog_context,
                texpr_compiletime   :: maybe(trace_expr(trace_compiletime)),
                texpr_runtime       :: maybe(trace_expr(trace_runtime)),
                texpr_maybe_io      :: maybe(prog_var),
                texpr_mutable_vars  :: list(trace_mutable_var),
                texpr_goal          :: goal
            )
    ;       atomic_expr(
                % Subgoals of the atomic goal are parsed into the following
                % datatype. During the creation of the parse tree, all
                % subterms of the "orelse" operator are flattened and placed
                % into a list. If this is the case, the first "orelse"
                % alternative is stored in "main_goal" whilst the other
                % alternatives are stored in "orelse_alternatives". If there
                % are no "or_else" operators within the atomic subgoal,
                % the subgoal is stored in "main_goal" whilst the
                % "orelse_alternatives" list remains empty.

                aexpr_context           :: prog_context,
                aexpr_outer             :: atomic_component_state,
                aexpr_inner             :: atomic_component_state,
                aexpr_output_vars       :: maybe(list(prog_var)),
                aexpr_main_goal         :: goal,
                aexpr_orelse_goals      :: list(goal)
            )
    ;       try_expr(
                tryexpr_context         :: prog_context,
                tryexpr_maybe_io        :: maybe(prog_var),
                tryexpr_goal            :: goal,
                tryexpr_then            :: goal,
                tryexpr_maybe_else      :: maybe(goal),
                tryexpr_catches         :: list(catch_expr),
                tryexpr_maybe_catch_any :: maybe(catch_any_expr)
            )

    ;       implies_expr(prog_context, goal, goal)
            % implies_expr(_, A, B) represents either A => B or B <= A.

    ;       equivalent_expr(prog_context, goal, goal)
            % equivalent_expr(_, A, B) represents A <=> B.

    ;       event_expr(prog_context, string, list(prog_term)).

:- type catch_expr
    --->    catch_expr(
                catch_pattern   :: prog_term,
                catch_goal      :: goal
            ).

:- type catch_any_expr
    --->    catch_any_expr(
                catch_any_var   :: prog_var,
                catch_any_goal  :: goal
            ).

%---------------------------------------------------------------------------%

:- func get_item_context(item) = prog_context.
:- func get_goal_context(goal) = prog_context.

%---------------------------------------------------------------------------%

:- type contains_foreign_code
    --->    foreign_code_langs_known(set(foreign_language))
    ;       foreign_code_langs_unknown.

:- type contains_foreign_export
    --->    contains_foreign_export
    ;       contains_no_foreign_export.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module term.
:- import_module varset.

%---------------------------------------------------------------------------%

init_empty_parse_tree_module_src(ModuleName, ModuleNameContext) =
    parse_tree_module_src(ModuleName, ModuleNameContext,
        map.init, map.init, map.init,
        map.init, map.init, map.init, map.init, map.init,
        map.init, map.init, maybe.no,
        [], [], [], [], [], [], [], [], [], [], [], [], set.init,
        [], [], [], [], [], [], [], [], [], [], [], [],
        [], [], [], [], [], []
    ).

%---------------------------------------------------------------------------%
%
% Mutable variables.
%

    % Attributes for mutable variables.
    %
:- type mutable_var_attributes
    --->    mutable_var_attributes(
                mutable_trailed             :: mutable_trailed,
                mutable_foreign_names       :: maybe(list(foreign_name)),
                mutable_attach_to_io_state  :: mutable_attach_to_io_state,
                mutable_constant            :: mutable_constant,
                mutable_thread_local        :: mutable_thread_local
            ).

default_mutable_attributes =
    mutable_var_attributes(mutable_trailed, no,
        mutable_dont_attach_to_io_state, mutable_not_constant,
        mutable_not_thread_local).

mutable_var_trailed(MVarAttrs) = X :-
    X = MVarAttrs ^ mutable_trailed.
mutable_var_maybe_foreign_names(MVarAttrs) = X :-
    X = MVarAttrs ^ mutable_foreign_names.
mutable_var_attach_to_io_state(MVarAttrs) = X :-
    X = MVarAttrs ^ mutable_attach_to_io_state.
mutable_var_constant(MVarAttrs) = X :-
    X = MVarAttrs ^ mutable_constant.
mutable_var_thread_local(MVarAttrs) = X :-
    X = MVarAttrs ^ mutable_thread_local.

set_mutable_var_trailed(Trailed, !Attributes) :-
    !Attributes ^ mutable_trailed := Trailed.
set_mutable_add_foreign_name(ForeignName, !Attributes) :-
    MaybeForeignNames0 = !.Attributes ^ mutable_foreign_names,
    (
        MaybeForeignNames0 = no,
        MaybeForeignNames  = yes([ForeignName])
    ;
        MaybeForeignNames0 = yes(ForeignNames0),
        ForeignNames = [ForeignName | ForeignNames0],
        MaybeForeignNames   = yes(ForeignNames)
    ),
    !Attributes ^ mutable_foreign_names := MaybeForeignNames.
set_mutable_var_attach_to_io_state(AttachToIOState, !Attributes) :-
    !Attributes ^ mutable_attach_to_io_state := AttachToIOState.
set_mutable_var_constant(Constant, !Attributes) :-
    !Attributes ^ mutable_constant := Constant.
set_mutable_var_thread_local(ThreadLocal, !Attributes) :-
    !Attributes ^ mutable_thread_local := ThreadLocal.

%---------------------------------------------------------------------------%

get_item_context(Item) = Context :-
    (
        Item = item_clause(ItemClause),
        Context = ItemClause ^ cl_context
    ;
        Item = item_type_defn(ItemTypeDefn),
        Context = ItemTypeDefn ^ td_context
    ;
        Item = item_inst_defn(ItemInstDefn),
        Context = ItemInstDefn ^ id_context
    ;
        Item = item_mode_defn(ItemModeDefn),
        Context = ItemModeDefn ^ md_context
    ;
        Item = item_pred_decl(ItemPredDecl),
        Context = ItemPredDecl ^ pf_context
    ;
        Item = item_mode_decl(ItemModeDecl),
        Context = ItemModeDecl ^ pfm_context
    ;
        Item = item_foreign_enum(ItemForeignEnum),
        Context = ItemForeignEnum ^ fe_context
    ;
        Item = item_foreign_export_enum(ItemForeignExportEnum),
        Context = ItemForeignExportEnum ^ fee_context
    ;
        Item = item_decl_pragma(ItemDeclPragma),
        Context = ItemDeclPragma ^ prag_context
    ;
        Item = item_impl_pragma(ItemImplPragma),
        Context = ItemImplPragma ^ prag_context
    ;
        Item = item_generated_pragma(ItemGenPragma),
        Context = ItemGenPragma ^ prag_context
    ;
        Item = item_promise(ItemPromise),
        Context = ItemPromise ^ prom_context
    ;
        Item = item_typeclass(ItemTypeClass),
        Context = ItemTypeClass ^ tc_context
    ;
        Item = item_instance(ItemInstance),
        Context = ItemInstance ^ ci_context
    ;
        Item = item_initialise(ItemInitialise),
        Context = ItemInitialise ^ init_context
    ;
        Item = item_finalise(ItemFinalise),
        Context = ItemFinalise ^ final_context
    ;
        Item = item_mutable(ItemMutable),
        Context = ItemMutable ^ mut_context
    ;
        Item = item_type_repn(ItemTypeRepn),
        Context = ItemTypeRepn ^ tr_context
    ).

get_goal_context(Goal) = Context :-
    ( Goal = conj_expr(Context, _, _)
    ; Goal = par_conj_expr(Context, _, _)
    ; Goal = true_expr(Context)
    ; Goal = disj_expr(Context, _, _)
    ; Goal = fail_expr(Context)
    ; Goal = quant_expr(_, _, Context, _, _)
    ; Goal = promise_purity_expr(Context, _, _)
    ; Goal = promise_equivalent_solutions_expr(Context, _, _, _, _, _)
    ; Goal = promise_equivalent_solution_sets_expr(Context, _, _, _, _, _)
    ; Goal = promise_equivalent_solution_arbitrary_expr(Context, _, _, _, _, _)
    ; Goal = require_detism_expr(Context, _, _)
    ; Goal = require_complete_switch_expr(Context, _, _)
    ; Goal = require_switch_arms_detism_expr(Context, _, _, _)
    ; Goal = disable_warnings_expr(Context, _, _, _)
    ; Goal = trace_expr(Context, _, _, _, _, _)
    ; Goal = atomic_expr(Context, _, _, _, _, _)
    ; Goal = try_expr(Context, _, _, _, _, _, _)
    ; Goal = implies_expr(Context, _, _)
    ; Goal = equivalent_expr(Context, _, _)
    ; Goal = not_expr(Context, _)
    ; Goal = if_then_else_expr(Context, _, _, _, _, _)
    ; Goal = event_expr(Context, _, _)
    ; Goal = call_expr(Context, _, _, _)
    ; Goal = unify_expr(Context, _, _, _)
    ).

%---------------------------------------------------------------------------%
:- end_module parse_tree.prog_item.
%---------------------------------------------------------------------------%
