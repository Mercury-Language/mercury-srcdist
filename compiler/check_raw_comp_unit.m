%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 2015-2011 The Mercury team.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: check_raw_comp_unit.m.
%
% Check whether the interface of a module exports anything.
% XXX The name of this module is now misleading, since it does not operate
% on raw_compilation_units.
%
%---------------------------------------------------------------------------%

:- module parse_tree.check_raw_comp_unit.
:- interface.

:- import_module libs.
:- import_module libs.globals.
:- import_module parse_tree.error_util.
:- import_module parse_tree.prog_item.

:- import_module list.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

    % Given a module's source code, check whether its interface
    % exports anything. If it does not, and --warn-nothing-exported is set,
    % report a warning.
    %
:- pred check_module_interface_for_no_exports(globals::in,
    parse_tree_module_src::in,
    list(error_spec)::in, list(error_spec)::out) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module libs.options.
:- import_module mdbcomp.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.item_util.
:- import_module parse_tree.prog_data.

:- import_module bool.
:- import_module map.
:- import_module term.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

check_module_interface_for_no_exports(Globals, ParseTreeModuleSrc, !Specs) :-
    globals.lookup_bool_option(Globals, warn_nothing_exported, ExportWarning),
    (
        ExportWarning = no
    ;
        ExportWarning = yes,
        ParseTreeModuleSrc = parse_tree_module_src(ModuleName,
            ModuleNameContext, IntIncls, _ImpIncls, _InclMap,
            _IntImports, _IntUses, _ImpImports, _ImpUses, _ImportUseMap,
            _IntFIMs, _ImpFIMs, _IntSelfFIMLangs, _ImpSelfFIMLangs,

            TypeCtorCheckedMap, InstCtorCheckedMap, ModeCtorCheckedMap,
            TypeSpecs, InstModeSpecs,

            IntTypeClasses, IntInstances, IntPredDecls, IntModeDecls,
            IntDeclPragmas, IntPromises, _IntBadClauses,

            _ImpTypeClasses, _ImpInstances, _ImpPredDecls, _ImpModeDecls,
            _ImpClauses, _ImpForeignExportEnums,
            _ImpDeclPragmas, _ImpImplPragmas, _ImpPromises,
            _ImpInitialises, _ImpFinalises, _ImpMutables),
        % XXX ITEM_LIST Should we return "yes" for an item_block
        % that contains only ONE include_module declaration?
        ( if
            map.is_empty(IntIncls),
            type_ctor_checked_map_get_src_defns(TypeCtorCheckedMap,
                IntTypeDefns, _, _),
            IntTypeDefns = [],
            inst_ctor_checked_map_get_src_defns(InstCtorCheckedMap,
                IntInstDefns, _),
            IntInstDefns = [],
            mode_ctor_checked_map_get_src_defns(ModeCtorCheckedMap,
                IntModeDefns, _),
            IntModeDefns = [],

            % If some type, inst or mode definitions were invalid, then
            % there are two possibilities: either some of them are in
            % the interface section, or none of them are. Unfortunately,
            % we don't know which is the case, so must choose an algorithm
            % that works in both cases.
            %
            % - If some of the errors are in the interface section, then
            %   generating a "no exports" warning would be misleading.
            %
            % - If all of the errors are in the implementation section, then
            %   generating that warning would not be misleading, but
            %   it is also not quite needed. Due to those errors,
            %   the compilation will fail, with error messages that the
            %   programmer can and should fix, whether we generate
            %   a "no exports" warning or not. This means that the warning
            %   is not really needed *now*; it can be generated later,
            %   once the complained-about invalid definitions are fixed.
            TypeSpecs = [],
            InstModeSpecs = [],

            IntTypeClasses = [],
            IntInstances = [],
            IntPredDecls = [],
            IntModeDecls = [],
            IntDeclPragmas = [],
            IntPromises = []
        then
            generate_no_exports_warning(ModuleName, ModuleNameContext, !Specs)
        else
            true
        )
    ).

:- pred generate_no_exports_warning(module_name::in, prog_context::in,
    list(error_spec)::in, list(error_spec)::out) is det.

generate_no_exports_warning(ModuleName, Context, !Specs) :-
    Msg = simple_msg(Context,
        [always([invis_order_default_start(2),
            words("Warning: the interface of module"),
            qual_sym_name(ModuleName),
            words("does not export anything."), nl]),
        verbose_only(verbose_always,
            [words("To be useful, a module should export something."),
            words("A file should contain at least one declaration"),
            words("other than"), decl("import_module"),
            words("in its interface section(s)."),
            words("This would normally be a"),
            decl("pred"), suffix(","), decl("func"), suffix(","),
            decl("type"), suffix(","), decl("inst"), words("or"),
            decl("mode"), words("declaration."), nl])
        ]),
    Spec = error_spec($pred, severity_warning, phase_term_to_parse_tree,
        [Msg]),
    !:Specs = [Spec | !.Specs].

%---------------------------------------------------------------------------%
:- end_module parse_tree.check_raw_comp_unit.
%---------------------------------------------------------------------------%
