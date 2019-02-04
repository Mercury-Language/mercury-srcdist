%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2001-2009 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: layout_out.m.
% Author: zs.
%
% This structure converts layout structures from the representation used
% within the compiler to the representation used by the runtime system.
% The types of the inputs are defined in layout.m. The types of the outputs
% are defined in runtime/mercury_stack_layout.h, where the documentation
% of the semantics of the various kinds of layout structures can also be found.
%
% This module should be, but as yet isn't, independent of whether we are
% compiling to LLDS or MLDS.
%
%-----------------------------------------------------------------------------%

:- module ll_backend.layout_out.
:- interface.

:- import_module ll_backend.layout.
:- import_module ll_backend.llds_out.
:- import_module mdbcomp.prim_data.

:- import_module bool.
:- import_module io.
:- import_module list.
:- import_module maybe.

%-----------------------------------------------------------------------------%

:- pred output_user_event_var_nums_array_defn(llds_out_info::in,
    list(maybe(int))::in, io::di, io::uo) is det.

:- pred output_user_events_array_defn(llds_out_info::in,
    list(user_event_data)::in, io::di, io::uo) is det.

:- pred output_var_label_layouts_array_defn(llds_out_info::in,
    list(label_layout_vars)::in, io::di, io::uo) is det.

:- pred output_no_var_label_layouts_array_defn(llds_out_info::in,
    list(label_layout_no_vars)::in, io::di, io::uo) is det.

%-----------------------------------------------------------------------------%

    % Given a Mercury representation of a layout structure, output its
    % definition in the appropriate C global variable.
    %
:- pred output_layout_data_defn(llds_out_info::in, layout_data::in,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

    % Given the name of a layout structure, output the declaration
    % of the C global variable which will hold it.
    %
:- pred output_layout_name_decl(layout_name::in, io::di, io::uo) is det.

    % Given the name of a layout structure, output the declaration of the C
    % global variable which will hold it, if it has not already been declared.
    %
:- pred output_maybe_layout_name_decl(layout_name::in,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

    % Given a Mercury representation of a layout structure, output the
    % declaration of the C global variable which will hold it, if it has
    % not already been declared.
    %
:- pred output_maybe_layout_data_decl(layout_data::in,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

:- type being_defined
    --->    not_being_defined
    ;       being_defined.

    % Given a reference to a layout structure, output the storage class
    % (e.g. static), type and name of the global variable that will
    % hold it. The second arg says whether the output is part of the definition
    % of that variable (this influences e.g. whether we output "extern"
    % or not).
    %
:- pred output_layout_name_storage_type_name(layout_name::in,
    being_defined::in, io::di, io::uo) is det.

    % Given a mangled module name and a reference to a layout array, output
    % the storage class (e.g. static), type and name of the global variable
    % that will hold it. The bool says whether the output is part of the
    % definition of that variable (this influences e.g. whether we output
    % "extern" or not).
    %
:- pred output_layout_array_name_storage_type_name(string::in,
    layout_array_name::in, being_defined::in, io::di, io::uo) is det.

:- type use_layout_macro
    --->    do_not_use_layout_macro
    ;       use_layout_macro.

    % Given the mangled name of the module and a reference to a layout array,
    % output the name of the global variable that will hold it. The first arg
    % says whether we should use a macro to refer to the global. Using the
    % macro generates shorter code, but is not valid in all contexts.
    %
:- pred output_layout_array_name(use_layout_macro::in, string::in,
    layout_array_name::in, io::di, io::uo) is det.

    % Given the mangled name of the module, output a reference to the address
    % of the given layout array slot.
    %
:- pred output_layout_slot_name(use_layout_macro::in, string::in,
    layout_slot_name::in, io::di, io::uo) is det.

    % Given a reference to a layout structure, output the name of the
    % global variable that will hold it.
    %
:- pred output_layout_name(layout_name::in, io::di, io::uo) is det.

    % Given a reference to a layout structure, return a bool that is true
    % iff the layout structure contains code addresses.
    %
:- func layout_name_would_include_code_addr(layout_name) = bool.

    % For a given procedure label, return whether the procedure is
    % user-defined or part of a compiler-generated unify, compare or index
    % predicate.
    %
:- func proc_label_user_or_uci(proc_label) = proc_layout_user_or_uci.

    % Output a value of C type MR_PredFunc corrresponding to the argument.
    %
:- pred output_pred_or_func(pred_or_func::in, io::di, io::uo) is det.

    % Return the name of the given port, as in the enum MR_Trace_Port
    % in runtime/mercury_stack_layout.h.
    %
:- func trace_port_to_string(trace_port) = string.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module backend_libs.c_util.
:- import_module backend_libs.name_mangle.
:- import_module backend_libs.proc_label.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_pred.
:- import_module hlds.hlds_rtti.
:- import_module hlds.special_pred.
:- import_module libs.compiler_util.
:- import_module libs.trace_params.
:- import_module ll_backend.llds.
:- import_module mdbcomp.program_representation.
:- import_module parse_tree.mercury_to_mercury.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_foreign.

:- import_module assoc_list.
:- import_module char.
:- import_module int.
:- import_module map.
:- import_module pair.
:- import_module string.
:- import_module varset.

%-----------------------------------------------------------------------------%

output_user_event_var_nums_array_defn(Info, MaybeVarNums, !IO) :-
    ModuleName = Info ^ lout_mangled_module_name,
    list.length(MaybeVarNums, NumMaybeVarNums),
    Name = user_event_var_nums_array,
    output_layout_array_name_storage_type_name(ModuleName, Name,
        being_defined, !IO),
    io.format("[%d] = {", [i(NumMaybeVarNums)], !IO),
    list.foldl2(output_maybe_var_num_slot, MaybeVarNums, 0, _, !IO),
    io.write_string("};\n\n", !IO).

:- pred output_maybe_var_num_slot(maybe(int)::in, int::in, int::out,
    io::di, io::uo) is det.

output_maybe_var_num_slot(MaybeVarNum, !Slot, !IO) :-
    (
        MaybeVarNum = no,
        % Zero means not a variable, which is what we want.
        VarNum = 0
    ;
        MaybeVarNum = yes(VarNum)
    ),
    ( !.Slot mod 10 = 0 ->
        io.format("\n/* slot %d */ ", [i(!.Slot)], !IO)
    ;
        io.write_string(" ", !IO)
    ),
    io.format("%d,", [i(VarNum)], !IO),
    !:Slot = !.Slot + 1.

%-----------------------------------------------------------------------------%

output_user_events_array_defn(Info, UserEvents, !IO) :-
    ModuleName = Info ^ lout_mangled_module_name,
    list.length(UserEvents, NumUserEvents),
    Name = user_event_layout_array,
    output_layout_array_name_storage_type_name(ModuleName, Name,
        being_defined, !IO),
    io.format("[%d] = {\n", [i(NumUserEvents)], !IO),
    list.foldl2(output_user_event_slot(Info), UserEvents, 0, _, !IO),
    io.write_string("};\n\n", !IO).

:- pred output_user_event_slot(llds_out_info::in, user_event_data::in,
    int::in, int::out, io::di, io::uo) is det.

output_user_event_slot(Info, UserEvent, !Slot, !IO) :-
    UserEvent = user_event_data(UserEventNumber, UserLocnsRval,
        MaybeVarNumsSlot),
    io.format("  { /* slot %d */ %d, ",
        [i(!.Slot), i(UserEventNumber)], !IO),
    io.write_string("(MR_LongLval *) ", !IO),
    output_rval_as_addr(Info, UserLocnsRval, !IO),
    io.write_string(",\n    ", !IO),
    ModuleName = Info ^ lout_mangled_module_name,
    output_layout_slot_name(use_layout_macro, ModuleName, MaybeVarNumsSlot,
        !IO),
    io.write_string(" },\n", !IO),
    !:Slot = !.Slot + 1.

%-----------------------------------------------------------------------------%

output_var_label_layouts_array_defn(Info, LabelLayouts, !IO) :-
    ModuleName = Info ^ lout_mangled_module_name,
    list.length(LabelLayouts, NumLabelLayouts),
    Name = label_layout_array(label_has_var_info),
    output_layout_array_name_storage_type_name(ModuleName, Name,
        being_defined, !IO),
    io.format("[%d] = {\n", [i(NumLabelLayouts)], !IO),
    list.foldl2(output_var_label_layout_slot(Info), LabelLayouts, 0, _, !IO),
    io.write_string("};\n\n", !IO).

output_no_var_label_layouts_array_defn(Info, LabelLayouts, !IO) :-
    ModuleName = Info ^ lout_mangled_module_name,
    list.length(LabelLayouts, NumLabelLayouts),
    Name = label_layout_array(label_has_no_var_info),
    output_layout_array_name_storage_type_name(ModuleName, Name,
        being_defined, !IO),
    io.format("[%d] = {\n", [i(NumLabelLayouts)], !IO),
    list.foldl2(output_no_var_label_layout_slot(Info), LabelLayouts,
        0, _, !IO),
    io.write_string("};\n\n", !IO).

:- pred output_var_label_layout_slot(llds_out_info::in,
    label_layout_vars::in, int::in, int::out, io::di, io::uo) is det.

output_var_label_layout_slot(Info, LabelLayout, !Slot, !IO) :-
    ModuleName = Info ^ lout_mangled_module_name,
    LabelLayout = label_layout_vars(BasicLabelLayout, LabelVarInfo),
    BasicLabelLayout = basic_label_layout(_ProcLabel, LabelNum,
        _, _, _, _, _, _),
    % The procedure is given by the proc_label printed from the basic layout.
    io.format("{/* %d, %d */\n  ", [i(!.Slot), i(LabelNum)], !IO),
    output_basic_label_layout_slot(ModuleName, BasicLabelLayout, !IO),
    io.write_string(",\n  ", !IO),

    LabelVarInfo = label_var_info(EncodedVarCount, LocnsTypes, VarNums,
        TypeParams),
    io.write_int(EncodedVarCount, !IO),
    io.write_string(",", !IO),
    (
        LocnsTypes = const(llconst_data_addr(LTDataAddr, no)),
        LTDataAddr = data_addr(_,
            scalar_common_ref(type_num(LTTypeNum), LTCellNum)),
        VarNums = const(llconst_data_addr(VNDataAddr, no)),
        VNDataAddr = data_addr(_,
            scalar_common_ref(type_num(VNTypeNum), VNCellNum))
    ->
        (
            TypeParams = const(llconst_data_addr(TPDataAddr, no)),
            TPDataAddr = data_addr(_,
                scalar_common_ref(type_num(TPTypeNum), TPCellNum))
        ->
            io.format("MR_LLV_CCC(%d,%d,%d,%d,%d,%d)",
                [i(LTTypeNum), i(LTCellNum), i(VNTypeNum), i(VNCellNum),
                i(TPTypeNum), i(TPCellNum)], !IO)
        ;
            TypeParams = const(llconst_int(0))
        ->
            io.format("MR_LLV_CC0(%d,%d,%d,%d)",
                [i(LTTypeNum), i(LTCellNum), i(VNTypeNum), i(VNCellNum)], !IO)
        ;
            io.format("MR_LLV_CC(%d,%d,%d,%d,",
                [i(LTTypeNum), i(LTCellNum), i(VNTypeNum), i(VNCellNum)], !IO),
            output_rval_as_addr(Info, TypeParams, !IO),
            io.write_string(")", !IO)
        )
    ;
        io.write_string("MR_LLV(", !IO),
        output_rval_as_addr(Info, LocnsTypes, !IO),
        io.write_string(",", !IO),
        output_rval_as_addr(Info, VarNums, !IO),
        io.write_string(",", !IO),
        output_rval_as_addr(Info, TypeParams, !IO),
        io.write_string(")", !IO)
    ),

    io.write_string(" },\n", !IO),
    !:Slot = !.Slot + 1.

:- pred output_no_var_label_layout_slot(llds_out_info::in,
    label_layout_no_vars::in, int::in, int::out, io::di, io::uo) is det.

output_no_var_label_layout_slot(Info, LabelLayout, !Slot, !IO) :-
    ModuleName = Info ^ lout_mangled_module_name,
    LabelLayout = label_layout_no_vars(BasicLabelLayout),
    BasicLabelLayout = basic_label_layout(_ProcLabel, LabelNum,
        _, _, _, _, _, _),
    % The procedure is given by the proc_label printed from the basic layout.
    io.format("{ /* %d, %d */\n  ",
        [i(!.Slot), i(LabelNum)], !IO),
    output_basic_label_layout_slot(ModuleName, BasicLabelLayout, !IO),
    io.write_string(" },\n", !IO),
    !:Slot = !.Slot + 1.

:- pred output_basic_label_layout_slot(string::in, basic_label_layout::in,
    io::di, io::uo) is det.

output_basic_label_layout_slot(ModuleName, BasicLabelLayout, !IO) :-
    BasicLabelLayout = basic_label_layout(ProcLabel, _LabelNum,
        ProcLayoutName, MaybePort, MaybeIsHidden, LabelNumberInModule,
        MaybeGoalPath, MaybeUserSlotName),
    (
        ProcLayoutName = proc_layout(RttiProcLabel, _),
        ProcLabelFromRtti = make_proc_label_from_rtti(RttiProcLabel),
        ProcLabelFromRtti = ProcLabel
    ->
        true
    ;
        unexpected(this_file, "output_basic_label_layout_slot: != proclabels")
    ),

    % MaybeIsHidden = no means that the value of the hidden field shouldn't
    % matter; we arbitrarily set it to `not hidden'.
    (
        ( MaybeIsHidden = no
        ; MaybeIsHidden = yes(no)
        ),
        (
            MaybeUserSlotName = no,
            MacroName = "MR_LLC"
        ;
            MaybeUserSlotName = yes(_),
            MacroName = "MR_LLC_U"
        )
    ;
        MaybeIsHidden = yes(yes),
        (
            MaybeUserSlotName = no,
            MacroName = "MR_LLC_H"
        ;
            MaybeUserSlotName = yes(_),
            MacroName = "MR_LLC_H_U"
        )
    ),

    io.write_string(MacroName, !IO),
    io.write_string("(", !IO),
    output_proc_label_no_prefix(ProcLabel, !IO),
    io.write_string(", ", !IO),
    (
        MaybePort = yes(Port),
        io.write_string(trace_port_to_string(Port), !IO),
        io.write_string(",", !IO)
    ;
        MaybePort = no,
        io.write_string("NONE,", !IO)
    ),
    io.write_int(LabelNumberInModule, !IO),
    io.write_string(",", !IO),
    (
        MaybeGoalPath = yes(GoalPath),
        io.write_int(GoalPath, !IO)
    ;
        MaybeGoalPath = no,
        io.write_string("0", !IO)
    ),
    (
        MaybeUserSlotName = no
    ;
        MaybeUserSlotName = yes(UserSlotName),
        io.write_string(",", !IO),
        output_layout_slot_name(use_layout_macro, ModuleName, UserSlotName,
            !IO)
    ),
    io.write_string(")", !IO).

%-----------------------------------------------------------------------------%

output_layout_data_defn(Info, Data, !DeclSet, !IO) :-
    (
        Data = proc_layout_data(ProcLabel, Traversal, MaybeRest),
        output_proc_layout_data_defn(Info, ProcLabel,
            Traversal, MaybeRest, !DeclSet, !IO)
    ;
        Data = closure_proc_id_data(CallerProcLabel, SeqNo, ProcLabel,
            ModuleName, FileName, LineNumber, PredOrigin, GoalPath),
        output_closure_proc_id_data_defn(CallerProcLabel, SeqNo, ProcLabel,
            ModuleName, FileName, LineNumber, PredOrigin, GoalPath,
            !DeclSet, !IO)
    ;
        Data = module_layout_common_data(ModuleName,
            StringTableSize, StringTable),
        output_module_common_layout_data_defn(ModuleName, StringTableSize,
            StringTable, !DeclSet, !IO)
    ;
        Data = module_layout_data(ModuleName, ModuleCommonLayoutName,
            ProcLayoutNames, FileLayouts, TraceLevel,
            SuppressedEvents, NumLabels, MaybeEventSet),
        output_module_layout_data_defn(Info, ModuleName,
            ModuleCommonLayoutName, ProcLayoutNames, FileLayouts, TraceLevel,
            SuppressedEvents, NumLabels, MaybeEventSet, !DeclSet, !IO)
    ;
        Data = table_io_decl_data(RttiProcLabel, Kind, NumPTIs,
            PTIVectorRval, TypeParamsRval),
        output_table_io_decl(Info, RttiProcLabel, Kind, NumPTIs,
            PTIVectorRval, TypeParamsRval, !DeclSet, !IO)
    ).

%-----------------------------------------------------------------------------%

output_layout_name_decl(LayoutName, !IO) :-
    output_layout_name_storage_type_name(LayoutName, not_being_defined, !IO),
    io.write_string(";\n", !IO).

output_maybe_layout_name_decl(LayoutName, !DeclSet, !IO) :-
    ( decl_set_is_member(decl_data_addr(layout_addr(LayoutName)), !.DeclSet) ->
        true
    ;
        output_layout_name_decl(LayoutName, !IO),
        decl_set_insert(decl_data_addr(layout_addr(LayoutName)), !DeclSet)
    ).

output_maybe_layout_data_decl(LayoutData, !DeclSet, !IO) :-
    extract_layout_name(LayoutData, LayoutName),
    output_maybe_layout_name_decl(LayoutName, !DeclSet, !IO).

:- pred extract_layout_name(layout_data::in, layout_name::out) is det.

extract_layout_name(Data, LayoutName) :-
    (
        Data = proc_layout_data(RttiProcLabel, _, MaybeRest),
        ProcLabel = make_proc_label_from_rtti(RttiProcLabel),
        Kind = maybe_proc_layout_and_more_kind(MaybeRest, ProcLabel),
        LayoutName = proc_layout(RttiProcLabel, Kind)
    ;
        Data = closure_proc_id_data(CallerProcLabel, SeqNo, ClosureProcLabel,
            _, _, _, _, _),
        LayoutName = closure_proc_id(CallerProcLabel, SeqNo, ClosureProcLabel)
    ;
        Data = module_layout_common_data(ModuleName, _, _),
        LayoutName = module_common_layout(ModuleName)
    ;
        Data = module_layout_data(ModuleName, _, _, _, _, _, _, _),
        LayoutName = module_layout(ModuleName)
    ;
        Data = table_io_decl_data(RttiProcLabel, _, _, _, _),
        LayoutName = table_io_decl(RttiProcLabel)
    ).

:- pred output_layout_decl(layout_name::in, decl_set::in, decl_set::out,
    io::di, io::uo) is det.

output_layout_decl(LayoutName, !DeclSet, !IO) :-
    ( decl_set_is_member(decl_data_addr(layout_addr(LayoutName)), !.DeclSet) ->
        true
    ;
        output_layout_name_storage_type_name(LayoutName, not_being_defined,
            !IO),
        io.write_string(";\n", !IO),
        decl_set_insert(decl_data_addr(layout_addr(LayoutName)), !DeclSet)
    ).

output_layout_array_name(UseMacro, ModuleName, ArrayName, !IO) :-
    (
        UseMacro = use_layout_macro,
        (
            ArrayName = label_layout_array(label_has_var_info),
            io.write_string("MR_var_label_layouts", !IO)
        ;
            ArrayName = label_layout_array(label_has_no_var_info),
            io.write_string("MR_no_var_label_layouts", !IO)
        ;
            ArrayName = user_event_var_nums_array,
            io.write_string("MR_user_event_var_nums", !IO)
        ;
            ArrayName = user_event_layout_array,
            io.write_string("MR_user_event_layouts", !IO)
        ),
        io.write_string("(", !IO),
        io.write_string(ModuleName, !IO),
        io.write_string(")", !IO)
    ;
        UseMacro = do_not_use_layout_macro,
        (
            ArrayName = label_layout_array(label_has_var_info),
            io.write_string("mercury_data__var_label_layout_array__", !IO)
        ;
            ArrayName = label_layout_array(label_has_no_var_info),
            io.write_string("mercury_data__no_var_label_layout_array__", !IO)
        ;
            ArrayName = user_event_var_nums_array,
            io.write_string("mercury_data__user_event_var_nums_array__", !IO)
        ;
            ArrayName = user_event_layout_array,
            io.write_string("mercury_data__user_event_layouts_array__", !IO)
        ),
        io.write_string(ModuleName, !IO)
    ).

output_layout_slot_name(UseMacro, ModuleName, SlotName, !IO) :-
    SlotName = layout_slot(ArrayName, SlotNum),
    io.write_string("&", !IO),
    output_layout_array_name(UseMacro, ModuleName, ArrayName, !IO),
    io.format("[%d]", [i(SlotNum)], !IO).

output_layout_name(Data, !IO) :-
    (
        Data = proc_layout(RttiProcLabel, _),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_proc_layout__", !IO),
        % We can't omit the mercury_ prefix on ProcLabel, even though the
        % mercury_data_prefix duplicates it, because there is no simple way
        % to make the MR_init_entryl_sl macro delete that prefix from the
        % entry label's name to get the name of its layout structure.
        output_proc_label(make_proc_label_from_rtti(RttiProcLabel), !IO)
    ;
        Data = proc_layout_exec_trace(RttiProcLabel),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_proc_layout_exec_trace__", !IO),
        output_proc_label_no_prefix(make_proc_label_from_rtti(RttiProcLabel),
            !IO)
    ;
        Data = proc_layout_label_layouts(RttiProcLabel),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_proc_label_layouts__", !IO),
        output_proc_label_no_prefix(make_proc_label_from_rtti(RttiProcLabel),
            !IO)
    ;
        Data = proc_layout_head_var_nums(RttiProcLabel),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_head_var_nums__", !IO),
        output_proc_label_no_prefix(make_proc_label_from_rtti(RttiProcLabel),
            !IO)
    ;
        Data = proc_layout_var_names(RttiProcLabel),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_var_names__", !IO),
        output_proc_label_no_prefix(make_proc_label_from_rtti(RttiProcLabel),
            !IO)
    ;
        Data = proc_layout_body_bytecode(RttiProcLabel),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_body_bytecode__", !IO),
        output_proc_label_no_prefix(make_proc_label_from_rtti(RttiProcLabel),
            !IO)
    ;
        Data = closure_proc_id(CallerProcLabel, SeqNo, _),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_closure_layout__", !IO),
        output_proc_label_no_prefix(CallerProcLabel, !IO),
        io.write_string("_", !IO),
        io.write_int(SeqNo, !IO)
    ;
        Data = file_layout(ModuleName, FileNum),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_file_layout__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO),
        io.write_string("_", !IO),
        io.write_int(FileNum, !IO)
    ;
        Data = file_layout_line_number_vector(ModuleName, FileNum),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_file_lines__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO),
        io.write_string("_", !IO),
        io.write_int(FileNum, !IO)
    ;
        Data = file_layout_label_layout_vector(ModuleName, FileNum),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_file_label_layouts__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO),
        io.write_string("_", !IO),
        io.write_int(FileNum, !IO)
    ;
        Data = module_layout_string_table(ModuleName),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_module_strings__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO)
    ;
        Data = module_layout_file_vector(ModuleName),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_module_files__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO)
    ;
        Data = module_layout_proc_vector(ModuleName),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_module_procs__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO)
    ;
        Data = module_layout_label_exec_count(ModuleName, _),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_module_label_exec_counts__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO)
    ;
        Data = module_layout_event_set_desc(ModuleName),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_module_layout_event_set_desc__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO)
    ;
        Data = module_layout_event_arg_names(ModuleName, EventNumber),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_module_layout_event_arg_names__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO),
        io.write_string("_", !IO),
        io.write_int(EventNumber, !IO)
    ;
        Data = module_layout_event_synth_attrs(ModuleName, EventNumber),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_module_layout_event_synth_attrs__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO),
        io.write_string("_", !IO),
        io.write_int(EventNumber, !IO)
    ;
        Data = module_layout_event_synth_attr_args(ModuleName,
            EventNumber, SynthCallArgNumber),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_module_layout_event_synth_attr_args__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO),
        io.write_string("_", !IO),
        io.write_int(EventNumber, !IO),
        io.write_string("_", !IO),
        io.write_int(SynthCallArgNumber, !IO)
    ;
        Data = module_layout_event_synth_attr_order(ModuleName,
            EventNumber, SynthCallArgNumber),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_module_layout_event_synth_attr_order__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO),
        io.write_string("_", !IO),
        io.write_int(EventNumber, !IO),
        io.write_string("_", !IO),
        io.write_int(SynthCallArgNumber, !IO)
    ;
        Data = module_layout_event_synth_order(ModuleName, EventNumber),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_module_layout_event_synth_order__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO),
        io.write_string("_", !IO),
        io.write_int(EventNumber, !IO)
    ;
        Data = module_layout_event_specs(ModuleName),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_module_layout_event_specs__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO)
    ;
        Data = module_common_layout(ModuleName),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_module_common_layout__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO)
    ;
        Data = module_layout(ModuleName),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_module_layout__", !IO),
        ModuleNameStr = sym_name_mangle(ModuleName),
        io.write_string(ModuleNameStr, !IO)
    ;
        Data = proc_static(RttiProcLabel),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_proc_static__", !IO),
        ProcLabel = make_proc_label_from_rtti(RttiProcLabel),
        output_proc_label_no_prefix(ProcLabel, !IO)
    ;
        Data = proc_static_call_sites(RttiProcLabel),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_proc_static_call_sites__", !IO),
        ProcLabel = make_proc_label_from_rtti(RttiProcLabel),
        output_proc_label_no_prefix(ProcLabel, !IO)
    ;
        Data = proc_static_coverage_point_static(RttiProcLabel),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_proc_static_coverage_points_static__", !IO),
        ProcLabel = make_proc_label_from_rtti(RttiProcLabel),
        output_proc_label_no_prefix(ProcLabel, !IO)
    ;
        Data = proc_static_coverage_point_dynamic(RttiProcLabel),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_proc_static_coverage_points_dynamic__", !IO),
        ProcLabel = make_proc_label_from_rtti(RttiProcLabel),
        output_proc_label_no_prefix(ProcLabel, !IO)
    ;
        Data = table_io_decl(RttiProcLabel),
        io.write_string(mercury_data_prefix, !IO),
        io.write_string("_table_io_decl__", !IO),
        ProcLabel = make_proc_label_from_rtti(RttiProcLabel),
        output_proc_label_no_prefix(ProcLabel, !IO)
    ).

output_layout_array_name_storage_type_name(ModuleName, Name, _BeingDefined,
        !IO) :-
    (
        Name = label_layout_array(label_has_var_info),
        io.write_string("static const MR_LabelLayout ", !IO),
        output_layout_array_name(do_not_use_layout_macro, ModuleName,
            Name, !IO)
    ;
        Name = label_layout_array(label_has_no_var_info),
        io.write_string("static const MR_LabelLayoutNoVarInfo ", !IO),
        output_layout_array_name(do_not_use_layout_macro, ModuleName,
            Name, !IO)
    ;
        Name = user_event_var_nums_array,
        io.write_string("static const MR_HLDSVarNum ", !IO),
        output_layout_array_name(do_not_use_layout_macro, ModuleName,
            Name, !IO)
    ;
        Name = user_event_layout_array,
        io.write_string("static const struct MR_UserEvent_Struct ", !IO),
        output_layout_array_name(do_not_use_layout_macro, ModuleName,
            Name, !IO)
    ).

output_layout_name_storage_type_name(Name, BeingDefined, !IO) :-
    (
        Name = proc_layout(ProcLabel, Kind),
        ProcIsImported = ProcLabel ^ proc_is_imported,
        ProcIsExported = ProcLabel ^ proc_is_exported,
        (
            ProcIsImported = no,
            ProcIsExported = no
        ->
            io.write_string("static ", !IO)
        ;
            (
                BeingDefined = being_defined
            ;
                BeingDefined = not_being_defined,
                io.write_string("extern ", !IO)
            )
        ),
        io.write_string("const ", !IO),
        io.write_string(proc_layout_kind_to_type(Kind), !IO),
        io.write_string(" ", !IO),
        output_layout_name(Name, !IO)
    ;
        Name = proc_layout_exec_trace(_ProcLabel),
        io.write_string("static MR_STATIC_CODE_CONST MR_ExecTrace\n\t", !IO),
        output_layout_name(Name, !IO)
    ;
        Name = proc_layout_label_layouts(_ProcLabel),
        io.write_string("static const MR_LabelLayout *", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = proc_layout_head_var_nums(_ProcLabel),
        io.write_string("static const ", !IO),
        io.write_string("MR_uint_least16_t ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = proc_layout_var_names(_ProcLabel),
        io.write_string("static const ", !IO),
        io.write_string("MR_uint_least32_t ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = proc_layout_body_bytecode(_ProcLabel),
        io.write_string("static const ", !IO),
        io.write_string("MR_uint_least8_t ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = closure_proc_id(_CallerProcLabel, _SeqNo, ClosureProcLabel),
        io.write_string("static const ", !IO),
        (
            ClosureProcLabel = ordinary_proc_label(_, _, _, _, _, _),
            io.write_string("MR_UserClosureId\n", !IO)
        ;
            ClosureProcLabel = special_proc_label(_, _, _, _, _, _),
            io.write_string("MR_UCIClosureId\n", !IO)
        ),
        output_layout_name(Name, !IO)
    ;
        Name = file_layout(_ModuleName, _FileNum),
        io.write_string("static const MR_ModuleFileLayout ", !IO),
        output_layout_name(Name, !IO)
    ;
        Name = file_layout_line_number_vector(_ModuleName, _FileNum),
        io.write_string("static const MR_int_least16_t ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = file_layout_label_layout_vector(_ModuleName, _FileNum),
        io.write_string("static const MR_LabelLayout *", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = module_layout_string_table(_ModuleName),
        io.write_string("static const char ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = module_layout_file_vector(_ModuleName),
        io.write_string("static const MR_ModuleFileLayout *", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = module_layout_label_exec_count(_ModuleName, NumElements),
        io.write_string("static MR_Unsigned ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[", !IO),
        io.write_int(NumElements, !IO),
        io.write_string("]", !IO)
    ;
        Name = module_layout_proc_vector(_ModuleName),
        io.write_string("static const MR_ProcLayout *", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = module_layout_event_set_desc(_ModuleName),
        io.write_string("static const char ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = module_layout_event_arg_names(_ModuleName, _EventNumber),
        io.write_string("static const char * ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = module_layout_event_synth_attrs(_ModuleName, _EventNumber),
        io.write_string("static MR_SynthAttr ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = module_layout_event_synth_attr_args(_ModuleName,
            _EventNumber, _SynthCallArgNumber),
        io.write_string("static MR_uint_least16_t ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = module_layout_event_synth_attr_order(_ModuleName,
            _EventNumber, _SynthCallArgNumber),
        io.write_string("static MR_uint_least16_t ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = module_layout_event_synth_order(_ModuleName, _EventNumber),
        io.write_string("static MR_int_least16_t ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = module_layout_event_specs(_ModuleName),
        io.write_string("static MR_UserEventSpec ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = module_common_layout(_ModuleName),
        io.write_string("static const MR_ModuleCommonLayout ", !IO),
        output_layout_name(Name, !IO)
    ;
        Name = module_layout(_ModuleName),
        io.write_string("static const MR_ModuleLayout ", !IO),
        output_layout_name(Name, !IO)
    ;
        Name = proc_static(_RttiProcLabel),
        io.write_string("static MR_ProcStatic ", !IO),
        output_layout_name(Name, !IO)
    ;
        Name = proc_static_call_sites(_RttiProcLabel),
        io.write_string("static const MR_CallSiteStatic ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = proc_static_coverage_point_static(_RttiProcLabel),
        io.write_string("static const MR_CoveragePointStatic ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = proc_static_coverage_point_dynamic(_RttiProcLabel),
        io.write_string("static MR_Unsigned ", !IO),
        output_layout_name(Name, !IO),
        io.write_string("[]", !IO)
    ;
        Name = table_io_decl(_RttiProcLabel),
        io.write_string("static const MR_TableIoDecl ", !IO),
        output_layout_name(Name, !IO)
    ).

layout_name_would_include_code_addr(proc_layout(_, _)) = no.
layout_name_would_include_code_addr(proc_layout_exec_trace(_)) = yes.
layout_name_would_include_code_addr(proc_layout_label_layouts(_)) = no.
layout_name_would_include_code_addr(proc_layout_head_var_nums(_)) = no.
layout_name_would_include_code_addr(proc_layout_var_names(_)) = no.
layout_name_would_include_code_addr(proc_layout_body_bytecode(_)) = no.
layout_name_would_include_code_addr(closure_proc_id(_, _, _)) = no.
layout_name_would_include_code_addr(file_layout(_, _)) = no.
layout_name_would_include_code_addr(file_layout_line_number_vector(_, _)) = no.
layout_name_would_include_code_addr(file_layout_label_layout_vector(_, _))
    = no.
layout_name_would_include_code_addr(module_layout_string_table(_)) = no.
layout_name_would_include_code_addr(module_layout_file_vector(_)) = no.
layout_name_would_include_code_addr(module_layout_proc_vector(_)) = no.
layout_name_would_include_code_addr(module_layout_label_exec_count(_, _)) = no.
layout_name_would_include_code_addr(module_layout_event_set_desc(_)) = no.
layout_name_would_include_code_addr(module_layout_event_arg_names(_, _)) = no.
layout_name_would_include_code_addr(module_layout_event_synth_attrs(_, _))
    = no.
layout_name_would_include_code_addr(
    module_layout_event_synth_attr_args(_, _, _)) = no.
layout_name_would_include_code_addr(
    module_layout_event_synth_attr_order(_, _, _)) = no.
layout_name_would_include_code_addr(module_layout_event_synth_order(_, _))
    = no.
layout_name_would_include_code_addr(module_layout_event_specs(_)) = no.
layout_name_would_include_code_addr(module_common_layout(_)) = no.
layout_name_would_include_code_addr(module_layout(_)) = no.
layout_name_would_include_code_addr(proc_static(_)) = no.
layout_name_would_include_code_addr(proc_static_call_sites(_)) = no.
layout_name_would_include_code_addr(proc_static_coverage_point_static(_)) = no.
layout_name_would_include_code_addr(proc_static_coverage_point_dynamic(_)) = no.
layout_name_would_include_code_addr(table_io_decl(_)) = no.

:- func proc_layout_kind_to_type(proc_layout_kind) = string.

proc_layout_kind_to_type(proc_layout_traversal) = "MR_ProcLayout_Traversal".
proc_layout_kind_to_type(proc_layout_proc_id(user)) = "MR_ProcLayoutUser".
proc_layout_kind_to_type(proc_layout_proc_id(uci)) = "MR_ProcLayoutUCI".

%-----------------------------------------------------------------------------%

    % Output the rval in a context in which it is immediately cast to an
    % address.
    %
:- pred output_rval_as_addr(llds_out_info::in, rval::in,
    io::di, io::uo) is det.

output_rval_as_addr(Info, Rval, !IO) :-
    ( Rval = const(llconst_int(0)) ->
        io.write_string("0", !IO)
    ; Rval = const(llconst_data_addr(DataAddr, no)) ->
        ( DataAddr = data_addr(_, scalar_common_ref(_TypeNum, _CellNum)) ->
            output_data_addr(DataAddr, !IO)
        ;
            io.write_string("&", !IO),
            output_data_addr(DataAddr, !IO)
        )
    ;
        io.write_string("\n", !IO),
        output_rval(Info, Rval, !IO)
    ).

trace_port_to_string(port_call) =                "CALL".
trace_port_to_string(port_exit) =                "EXIT".
trace_port_to_string(port_redo) =                "REDO".
trace_port_to_string(port_fail) =                "FAIL".
trace_port_to_string(port_tailrec_call) =        "TAILREC_CALL".
trace_port_to_string(port_exception) =           "EXCEPTION".
trace_port_to_string(port_ite_cond) =            "COND".
trace_port_to_string(port_ite_then) =            "THEN".
trace_port_to_string(port_ite_else) =            "ELSE".
trace_port_to_string(port_neg_enter) =           "NEG_ENTER".
trace_port_to_string(port_neg_success) =         "NEG_SUCCESS".
trace_port_to_string(port_neg_failure) =         "NEG_FAILURE".
trace_port_to_string(port_disj_first) =          "DISJ_FIRST".
trace_port_to_string(port_disj_later) =          "DISJ_LATER".
trace_port_to_string(port_switch) =              "SWITCH".
trace_port_to_string(port_nondet_foreign_proc_first) = "FOREIGN_PROC_FIRST".
trace_port_to_string(port_nondet_foreign_proc_later) = "FOREIGN_PROC_LATER".
trace_port_to_string(port_user) =                "USER".

%-----------------------------------------------------------------------------%

:- pred output_proc_layout_data_defn(llds_out_info::in, rtti_proc_label::in,
    proc_layout_stack_traversal::in, maybe_proc_id_and_more::in,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

output_proc_layout_data_defn(Info, RttiProcLabel, Traversal, MaybeRest,
        !DeclSet, !IO) :-
    MangledModuleName = Info ^ lout_mangled_module_name,
    output_layout_traversal_decls(Info, Traversal, !DeclSet, !IO),
    ProcLabel = make_proc_label_from_rtti(RttiProcLabel),
    Kind = maybe_proc_layout_and_more_kind(MaybeRest, ProcLabel),
    (
        MaybeRest = no_proc_id_and_more,
        output_proc_layout_data_defn_start(RttiProcLabel, Kind, Traversal,
            !IO),
        output_layout_no_proc_id_group(!IO),
        output_proc_layout_data_defn_end(!IO)
    ;
        MaybeRest = proc_id_and_more(MaybeProcStatic, MaybeExecTrace,
            ProcBodyBytes, ModuleCommonLayout),
        (
            MaybeProcStatic = yes(ProcStatic),
            output_proc_static_data_defn(RttiProcLabel, ProcStatic, !DeclSet,
                !IO)
        ;
            MaybeProcStatic = no
        ),
        (
            MaybeExecTrace = yes(ExecTrace),
            HeadVarNums = ExecTrace ^ head_var_nums,
            output_proc_layout_head_var_nums(RttiProcLabel, HeadVarNums,
                !DeclSet, !IO),
            VarNames = ExecTrace ^ var_names,
            MaxVarNum = ExecTrace ^ max_var_num,
            output_proc_layout_var_names(RttiProcLabel, VarNames, MaxVarNum,
                !DeclSet, !IO),
            output_layout_exec_trace_decls(Info, RttiProcLabel, ExecTrace,
                !DeclSet, !IO),
            output_layout_exec_trace(MangledModuleName, RttiProcLabel,
                ExecTrace, !DeclSet, !IO)
        ;
            MaybeExecTrace = no
        ),
        (
            ProcBodyBytes = []
        ;
            ProcBodyBytes = [_ | _],
            io.write_string("\n", !IO),
            output_layout_name_storage_type_name(
                proc_layout_body_bytecode(RttiProcLabel), being_defined, !IO),
            io.write_string(" = {\n", !IO),
            output_bytecodes_driver(ProcBodyBytes, !IO),
            io.write_string("};\n\n", !IO)
        ),

        output_layout_decl(ModuleCommonLayout, !DeclSet, !IO),

        output_proc_layout_data_defn_start(RttiProcLabel, Kind, Traversal,
            !IO),
        Origin = RttiProcLabel ^ pred_info_origin,
        output_layout_proc_id_group(ProcLabel, Origin, !IO),
        (
            MaybeExecTrace = no,
            io.write_string("NULL,\n", !IO)
        ;
            MaybeExecTrace = yes(_),
            io.write_string("&", !IO),
            output_layout_name(proc_layout_exec_trace(RttiProcLabel), !IO),
            io.write_string(",\n", !IO)
        ),
        (
            MaybeProcStatic = no,
            io.write_string("NULL,\n", !IO)
        ;
            MaybeProcStatic = yes(_),
            io.write_string("&", !IO),
            output_layout_name(proc_static(RttiProcLabel), !IO),
            io.write_string(",\n", !IO)
        ),
        (
            ProcBodyBytes = [],
            io.write_string("NULL,\n", !IO)
        ;
            ProcBodyBytes = [_ | _],
            output_layout_name(proc_layout_body_bytecode(RttiProcLabel), !IO),
            io.write_string(",\n", !IO)
        ),
        io.write_string("&", !IO),
        output_layout_name(ModuleCommonLayout, !IO),
        output_proc_layout_data_defn_end(!IO)
    ),
    DeclId = decl_data_addr(layout_addr(proc_layout(RttiProcLabel, Kind))),
    decl_set_insert(DeclId, !DeclSet).

:- func maybe_proc_layout_and_more_kind(maybe_proc_id_and_more,
    proc_label) = proc_layout_kind.

maybe_proc_layout_and_more_kind(MaybeRest, ProcLabel) = Kind :-
    (
        MaybeRest = no_proc_id_and_more,
        Kind = proc_layout_traversal
    ;
        MaybeRest = proc_id_and_more(_, _, _, _),
        Kind = proc_layout_proc_id(proc_label_user_or_uci(ProcLabel))
    ).

proc_label_user_or_uci(ordinary_proc_label(_, _, _, _, _, _)) = user.
proc_label_user_or_uci(special_proc_label(_, _, _, _, _, _)) = uci.

:- pred output_proc_layout_data_defn_start(rtti_proc_label::in,
    proc_layout_kind::in, proc_layout_stack_traversal::in,
    io::di, io::uo) is det.

output_proc_layout_data_defn_start(RttiProcLabel, Kind, Traversal, !IO) :-
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(proc_layout(RttiProcLabel, Kind),
        being_defined, !IO),
    io.write_string(" = {\n", !IO),
    output_layout_traversal_group(Traversal, !IO).

:- pred output_proc_layout_data_defn_end(io::di, io::uo) is det.

output_proc_layout_data_defn_end(!IO) :-
    io.write_string("};\n", !IO).

:- pred output_layout_traversal_decls(llds_out_info::in,
    proc_layout_stack_traversal::in, decl_set::in, decl_set::out,
    io::di, io::uo) is det.

output_layout_traversal_decls(Info, Traversal, !DeclSet, !IO) :-
    Traversal = proc_layout_stack_traversal(MaybeEntryLabel, _MaybeSuccipSlot,
        _StackSlotCount, _Detism),
    (
        MaybeEntryLabel = yes(EntryLabel),
        output_record_code_addr_decls(Info, code_label(EntryLabel),
            !DeclSet, !IO)
    ;
        MaybeEntryLabel = no
    ).

:- pred output_layout_traversal_group(proc_layout_stack_traversal::in,
    io::di, io::uo) is det.

output_layout_traversal_group(Traversal, !IO) :-
    Traversal = proc_layout_stack_traversal(MaybeEntryLabel, MaybeSuccipSlot,
        StackSlotCount, Detism),
    io.write_string("{\n", !IO),
    (
        MaybeEntryLabel = yes(EntryLabel),
        output_code_addr(code_label(EntryLabel), !IO)
    ;
        MaybeEntryLabel = no,
        % The actual code address will be put into the structure
        % by module initialization code.
        io.write_string("NULL", !IO)
    ),
    io.write_string(",\n{ ", !IO),
    (
        MaybeSuccipSlot = yes(SuccipSlot),
        io.write_int(SuccipSlot, !IO)
    ;
        MaybeSuccipSlot = no,
        io.write_int(-1, !IO)
    ),
    io.write_string(" },\n", !IO),
    io.write_int(StackSlotCount, !IO),
    io.write_string(",\n", !IO),
    io.write_string(detism_to_c_detism(Detism), !IO),
    io.write_string("\n},\n", !IO).

:- func detism_to_c_detism(determinism) = string.

detism_to_c_detism(detism_det) =       "MR_DETISM_DET".
detism_to_c_detism(detism_semi) =      "MR_DETISM_SEMI".
detism_to_c_detism(detism_non) =       "MR_DETISM_NON".
detism_to_c_detism(detism_multi) =     "MR_DETISM_MULTI".
detism_to_c_detism(detism_erroneous) = "MR_DETISM_ERRONEOUS".
detism_to_c_detism(detism_failure) =   "MR_DETISM_FAILURE".
detism_to_c_detism(detism_cc_non) =    "MR_DETISM_CCNON".
detism_to_c_detism(detism_cc_multi) =  "MR_DETISM_CCMULTI".

:- pred output_layout_proc_id_group(proc_label::in, pred_origin::in,
    io::di, io::uo) is det.

output_layout_proc_id_group(ProcLabel, Origin, !IO) :-
    io.write_string("{\n", !IO),
    output_proc_id(ProcLabel, Origin, !IO),
    io.write_string("},\n", !IO).

:- pred output_layout_no_proc_id_group(io::di, io::uo) is det.

output_layout_no_proc_id_group(!IO) :-
    io.write_string("-1\n", !IO).

:- pred output_layout_exec_trace_decls(llds_out_info::in, rtti_proc_label::in,
    proc_layout_exec_trace::in, decl_set::in, decl_set::out,
    io::di, io::uo) is det.

output_layout_exec_trace_decls(Info, RttiProcLabel, ExecTrace, !DeclSet, !IO) :-
    ExecTrace = proc_layout_exec_trace(_MaybeCallLabelLayout,
        _InterfaceEventSlots, _InternalEventSlots, MaybeTableInfo,
        _HeadVarNums, _VarNames, _MaxVarNum,
        _MaxRegNum, _MaybeFromFullSlot, _MaybeIoSeqSlot,
        _MaybeTrailSlot, _MaybeMaxfrSlot, _EvalMethod,
        _MaybeCallTableSlot, _MaybeTailRecSlot, _EffTraceLevel, _Flags),
    ProcLabel = make_proc_label_from_rtti(RttiProcLabel),
    ModuleName = get_defining_module_name(ProcLabel),
    output_layout_decl(module_layout(ModuleName), !DeclSet, !IO),
    (
        MaybeTableInfo = yes(TableInfo),
        output_record_data_addr_decls(Info, TableInfo, !DeclSet, !IO)
    ;
        MaybeTableInfo = no
    ).

:- func wrap_decl_data_addr(data_addr) = decl_id.

wrap_decl_data_addr(DataAddr) = decl_data_addr(DataAddr).

    % The job of this predicate is to minimize stack space consumption in
    % grades that do not allow output_bytecodes to be tail recursive.
    %
:- pred output_bytecodes_driver(list(int)::in, io::di, io::uo) is det.

output_bytecodes_driver(Bytes, !IO) :-
    (
        Bytes = []
    ;
        Bytes = [_ | _],
        output_bytecodes(Bytes, BytesLeft, 0, 256, !IO),
        output_bytecodes_driver(BytesLeft, !IO)
    ).

:- pred output_bytecodes(list(int)::in, list(int)::out, int::in, int::in,
    io::di, io::uo) is det.

output_bytecodes(Bytes, BytesLeft, !.Seq, MaxSeq, !IO) :-
    (
        Bytes = [],
        BytesLeft = []
    ;
        Bytes = [Head | Tail],
        ( !.Seq < MaxSeq ->
            io.write_int(Head, !IO),
            io.write_char(',', !IO),
            !:Seq = !.Seq + 1,
            ( unchecked_rem(!.Seq, 16) = 0 ->
                io.write_char('\n', !IO)
            ;
                true
            ),
            output_bytecodes(Tail, BytesLeft, !.Seq, MaxSeq, !IO)
        ;
            BytesLeft = Bytes
        )
    ).

:- pred output_layout_exec_trace(string::in, rtti_proc_label::in,
    proc_layout_exec_trace::in, decl_set::in, decl_set::out,
    io::di, io::uo) is det.

output_layout_exec_trace(MangledModuleName, RttiProcLabel, ExecTrace,
        !DeclSet, !IO) :-
    ExecTrace = proc_layout_exec_trace(MaybeCallLabelDetails,
        InterfaceEventLabelSlots, InternalEventLabelSlots, MaybeTableInfo,
        HeadVarNums, _VarNames, MaxVarNum, MaxRegNum,
        MaybeFromFullSlot, MaybeIoSeqSlot, MaybeTrailSlot, MaybeMaxfrSlot,
        EvalMethod, MaybeCallTableSlot, MaybeTailRecSlot, EffTraceLevel,
        Flags),

    EventLabelSlots = InterfaceEventLabelSlots ++ InternalEventLabelSlots,
    (
        EventLabelSlots = []
    ;
        EventLabelSlots = [_ | _],
        io.write_string("\n", !IO),
        output_layout_name_storage_type_name(
            proc_layout_label_layouts(RttiProcLabel), being_defined, !IO),
        io.write_string(" = {\n", !IO),
        output_layout_slots_in_vector(MangledModuleName, EventLabelSlots, !IO),
        io.write_string("};\n\n", !IO)
    ),

    output_layout_name_storage_type_name(
        proc_layout_exec_trace(RttiProcLabel), being_defined, !IO),
    io.write_string(" = {\n", !IO),
    (
        MaybeCallLabelDetails = yes(CallLabelSlot),
        output_layout_slot_name(use_layout_macro, MangledModuleName,
            CallLabelSlot, !IO),
        io.write_string(",\n", !IO)
    ;
        MaybeCallLabelDetails = no,
        io.write_string("NULL,\n", !IO)
    ),
    io.write_string("(const MR_ModuleLayout *) &", !IO),
    ProcLabel = make_proc_label_from_rtti(RttiProcLabel),
    ModuleName = get_defining_module_name(ProcLabel),
    output_layout_name(module_layout(ModuleName), !IO),
    io.write_string(",\n", !IO),
    (
        EventLabelSlots = [],
        io.write_string("NULL,\n", !IO)
    ;
        EventLabelSlots = [_ | _],
        output_layout_name(proc_layout_label_layouts(RttiProcLabel), !IO),
        io.write_string(",\n", !IO)
    ),
    list.length(EventLabelSlots, NumEventLabelSlots),
    io.write_int(NumEventLabelSlots, !IO),
    io.write_string(",\n", !IO),
    io.write_string("{ ", !IO),
    (
        MaybeTableInfo = yes(TableInfo),
        io.write_string("(const void *) &", !IO),
        output_data_addr(TableInfo, !IO)
    ;
        MaybeTableInfo = no,
        io.write_string("NULL", !IO)
    ),
    io.write_string(" },\n", !IO),
    output_layout_name(proc_layout_head_var_nums(RttiProcLabel), !IO),
    io.write_string(",\n", !IO),
    output_layout_name(proc_layout_var_names(RttiProcLabel), !IO),
    io.write_string(",\n", !IO),
    io.write_int(list.length(HeadVarNums), !IO),
    io.write_string(",\n", !IO),
    io.write_int(MaxVarNum, !IO),
    io.write_string(",\n", !IO),
    io.write_int(MaxRegNum, !IO),
    io.write_string(",\n", !IO),
    write_maybe_slot_num(MaybeFromFullSlot, !IO),
    io.write_string(",\n", !IO),
    write_maybe_slot_num(MaybeIoSeqSlot, !IO),
    io.write_string(",\n", !IO),
    write_maybe_slot_num(MaybeTrailSlot, !IO),
    io.write_string(",\n", !IO),
    write_maybe_slot_num(MaybeMaxfrSlot, !IO),
    io.write_string(",\n", !IO),
    io.write_string(eval_method_to_c_string(EvalMethod), !IO),
    io.write_string(",\n", !IO),
    write_maybe_slot_num(MaybeCallTableSlot, !IO),
    io.write_string(",\n", !IO),
    io.write_string(trace_level_rep(EffTraceLevel), !IO),
    io.write_string(",\n", !IO),
    io.write_int(Flags, !IO),
    io.write_string(",\n", !IO),
    write_maybe_slot_num(MaybeTailRecSlot, !IO),
    io.write_string("\n};\n", !IO).

:- pred write_maybe_slot_num(maybe(int)::in, io::di, io::uo) is det.

write_maybe_slot_num(yes(SlotNum), !IO) :-
    io.write_int(SlotNum, !IO).
write_maybe_slot_num(no, !IO) :-
    io.write_int(-1, !IO).

:- func eval_method_to_c_string(eval_method) = string.

eval_method_to_c_string(eval_normal) =     "MR_EVAL_METHOD_NORMAL".
eval_method_to_c_string(eval_loop_check) = "MR_EVAL_METHOD_LOOP_CHECK".
eval_method_to_c_string(eval_memo) =       "MR_EVAL_METHOD_MEMO".
eval_method_to_c_string(eval_minimal(MinimalMethod)) = Str :-
    (
        MinimalMethod = stack_copy,
        Str = "MR_EVAL_METHOD_MINIMAL_STACK_COPY"
    ;
        MinimalMethod = own_stacks_consumer,
        Str = "MR_EVAL_METHOD_MINIMAL_OWN_STACKS_CONSUMER"
    ;
        MinimalMethod = own_stacks_generator,
        Str = "MR_EVAL_METHOD_MINIMAL_OWN_STACKS_GENERATOR"
    ).
eval_method_to_c_string(eval_table_io(Decl, Unitize)) = Str :-
    (
        Decl = table_io_proc,
        Unitize = table_io_alone,
        Str = "MR_EVAL_METHOD_TABLE_IO"
    ;
        Decl = table_io_proc,
        Unitize = table_io_unitize,
        Str = "MR_EVAL_METHOD_TABLE_IO_UNITIZE"
    ;
        Decl = table_io_decl,
        Unitize = table_io_alone,
        Str = "MR_EVAL_METHOD_TABLE_IO_DECL"
    ;
        Decl = table_io_decl,
        Unitize = table_io_unitize,
        Str = "MR_EVAL_METHOD_TABLE_IO_UNITIZE_DECL"
    ).

:- pred output_proc_layout_head_var_nums(rtti_proc_label::in, list(int)::in,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

output_proc_layout_head_var_nums(ProcLabel, HeadVarNums, !DeclSet, !IO) :-
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(proc_layout_head_var_nums(ProcLabel),
        being_defined, !IO),
    io.write_string(" = {\n", !IO),
    (
        HeadVarNums = [],
        % ANSI/ISO C doesn't allow empty arrays, so place a dummy value
        % in the array.
        io.write_string("0\n", !IO)
    ;
        HeadVarNums = [_ | _],
        list.foldl(output_number_in_vector, HeadVarNums, !IO)
    ),
    io.write_string("};\n", !IO),
    DeclId = decl_data_addr(layout_addr(proc_layout_head_var_nums(ProcLabel))),
    decl_set_insert(DeclId, !DeclSet).

:- pred output_proc_layout_var_names(rtti_proc_label::in, list(int)::in,
    int::in, decl_set::in, decl_set::out, io::di, io::uo) is det.

output_proc_layout_var_names(ProcLabel, VarNames, MaxVarNum, !DeclSet, !IO) :-
    list.length(VarNames, VarNameCount),
    expect(unify(VarNameCount, MaxVarNum), this_file,
        "output_proc_layout_var_names: VarNameCount != MaxVarNum"),
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(proc_layout_var_names(ProcLabel),
        being_defined, !IO),
    io.write_string(" = {\n", !IO),
    (
        VarNames = [],
        % ANSI/ISO C doesn't allow empty arrays, so place a dummy value
        % in the array.
        io.write_string("0\n", !IO)
    ;
        VarNames = [_ | _],
        list.foldl(output_number_in_vector, VarNames, !IO)
    ),
    io.write_string("};\n", !IO),
    DeclId = decl_data_addr(layout_addr(proc_layout_var_names(ProcLabel))),
    decl_set_insert(DeclId, !DeclSet).

%-----------------------------------------------------------------------------%

:- pred output_closure_proc_id_data_defn(proc_label::in, int::in,
    proc_label::in, module_name::in, string::in, int::in, pred_origin::in,
    string::in, decl_set::in, decl_set::out, io::di, io::uo) is det.

output_closure_proc_id_data_defn(CallerProcLabel, SeqNo, ClosureProcLabel,
        ModuleName, FileName, LineNumber, PredOrigin, GoalPath,
        !DeclSet, !IO) :-
    io.write_string("\n", !IO),
    LayoutName = closure_proc_id(CallerProcLabel, SeqNo, ClosureProcLabel),
    output_layout_name_storage_type_name(LayoutName, being_defined, !IO),
    io.write_string(" = {\n{\n", !IO),
    output_proc_id(ClosureProcLabel, PredOrigin, !IO),
    io.write_string("},\n", !IO),
    quote_and_write_string(sym_name_to_string(ModuleName), !IO),
    io.write_string(",\n", !IO),
    quote_and_write_string(FileName, !IO),
    io.write_string(",\n", !IO),
    io.write_int(LineNumber, !IO),
    io.write_string(",\n", !IO),
    quote_and_write_string(GoalPath, !IO),
    io.write_string("\n};\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(LayoutName)), !DeclSet).

:- pred output_proc_id(proc_label::in, pred_origin::in, io::di, io::uo) is det.

output_proc_id(ProcLabel, Origin, !IO) :-
    (
        ProcLabel = ordinary_proc_label(DefiningModule, PredOrFunc,
            DeclaringModule, PredName0, Arity, Mode),
        PredName = origin_name(Origin, PredName0),
        output_pred_or_func(PredOrFunc, !IO),
        io.write_string(",\n", !IO),
        quote_and_write_string(sym_name_to_string(DeclaringModule), !IO),
        io.write_string(",\n", !IO),
        quote_and_write_string(sym_name_to_string(DefiningModule), !IO),
        io.write_string(",\n", !IO),
        quote_and_write_string(PredName, !IO),
        io.write_string(",\n", !IO),
        io.write_int(Arity, !IO),
        io.write_string(",\n", !IO),
        io.write_int(Mode, !IO),
        io.write_string("\n", !IO)
    ;
        ProcLabel = special_proc_label(DefiningModule, SpecialPredId,
            TypeModule, TypeName, TypeArity, Mode),
        TypeCtor = type_ctor(qualified(TypeModule, TypeName), TypeArity),
        PredName0 = special_pred_name(SpecialPredId, TypeCtor),
        PredName = origin_name(Origin, PredName0),
        quote_and_write_string(TypeName, !IO),
        io.write_string(",\n", !IO),
        quote_and_write_string(sym_name_to_string(TypeModule), !IO),
        io.write_string(",\n", !IO),
        quote_and_write_string(sym_name_to_string(DefiningModule), !IO),
        io.write_string(",\n", !IO),
        quote_and_write_string(PredName, !IO),
        io.write_string(",\n", !IO),
        io.write_int(TypeArity, !IO),
        io.write_string(",\n", !IO),
        io.write_int(Mode, !IO),
        io.write_string("\n", !IO)
    ).

:- func origin_name(pred_origin, string) = string.

origin_name(Origin, Name0) = Name :-
    (
        Origin = origin_lambda(FileName0, LineNum, SeqNo),
        ( string.append("IntroducedFrom", _, Name0) ->
            string.replace_all(FileName0, ".", "_", FileName),
            ( SeqNo > 1 ->
                string.format("lambda%d_%s_%d",
                    [i(SeqNo), s(FileName), i(LineNum)], Name)
            ;
                string.format("lambda_%s_%d", [s(FileName), i(LineNum)], Name)
            )
        ;
            % If the lambda pred has a meaningful name, use it.
            % This happens when the lambda is a partial application
            % that happens to supply zero arguments.
            Name = Name0
        )
    ;
        Origin = origin_special_pred(_SpecialPredId - _TypeCtor),
        Name = Name0
        % We can't use the following code until we have adapted the
        % code in the runtime and trace directories to handle the names
        % of special preds the same way as we do user-defined names.
%       (
%           SpecialPredId = unify,
%           SpecialName = "unify"
%       ;
%           SpecialPredId = compare,
%           SpecialName = "compare"
%       ;
%           SpecialPredId = index,
%           SpecialName = "index"
%       ;
%           SpecialPredId = initialise,
%           SpecialName = "init"
%       ),
%       TypeCtor = TypeSymName - TypeArity,
%       TypeName = sym_name_to_string(TypeSymName),
%       string.format("%s_for_%s_%d",
%           [s(SpecialName), s(TypeName), i(TypeArity)], Name)
    ;
        Origin = origin_transformed(Transform, OldOrigin, _),
        OldName = origin_name(OldOrigin, ""),
        ( OldName = "" ->
            Name = Name0
        ;
            Name = OldName ++ "_" ++ pred_transform_name(Transform)
        )
    ;
        ( Origin = origin_instance_method(_, _)
        ; Origin = origin_created(_)
        ; Origin = origin_assertion(_, _)
        ; Origin = origin_user(_)
        ),
        Name = Name0
    ).

:- func pred_transform_name(pred_transformation) = string.

pred_transform_name(transform_higher_order_specialization(Seq)) =
    "ho" ++ int_to_string(Seq).
pred_transform_name(transform_higher_order_type_specialization(Proc)) =
    "hoproc" ++ int_to_string(Proc).
pred_transform_name(transform_type_specialization(Substs)) =
    string.join_list("_", list.map(subst_to_name, Substs)).
pred_transform_name(transform_unused_argument_elimination(Posns)) =
    "ua_" ++ string.join_list("_", list.map(int_to_string, Posns)).
pred_transform_name(transform_accumulator(Posns)) = "acc_" ++
    string.join_list("_", list.map(int_to_string, Posns)).
pred_transform_name(transform_loop_invariant(Proc)) =
    "inv_" ++ int_to_string(Proc).
pred_transform_name(transform_tuple(Proc)) = "tup_" ++ int_to_string(Proc).
pred_transform_name(transform_untuple(Proc)) = "untup_" ++ int_to_string(Proc).
pred_transform_name(transform_dependent_parallel_conjunction) =
    "dep_par_conj_".
pred_transform_name(transform_return_via_ptr(ProcId, ArgPos)) =
    "retptr_" ++ int_to_string(proc_id_to_int(ProcId)) ++ "_args"
        ++ ints_to_string(ArgPos).
pred_transform_name(transform_table_generator) = "table_gen".
pred_transform_name(transform_stm_expansion) = "stm_expansion".
pred_transform_name(transform_dnf(N)) = "dnf_" ++ int_to_string(N).
pred_transform_name(transform_structure_reuse) = "structure_reuse".

:- func ints_to_string(list(int)) = string.

ints_to_string([]) = "".
ints_to_string([N | Ns]) = "_" ++ int_to_string(N) ++ ints_to_string(Ns).

:- func subst_to_name(pair(int, mer_type)) = string.

subst_to_name(TVar - Type) =
    string.format("%d/%s",
        [i(TVar), s(mercury_type_to_string(varset.init, no, Type))]).

%-----------------------------------------------------------------------------%

    % The version of the layout data structures -- useful for bootstrapping.
    % If you write runtime code that checks this version number and can
    % at least handle the previous version of the data structure,
    % it makes it easier to bootstrap changes to these data structures.
    %
    % This number should be kept in sync with MR_LAYOUT_VERSION in
    % runtime/mercury_stack_layout.h.  This means you need to update
    % the code in the runtime (including the trace directory) that uses
    % layout structures to conform to whatever changes the new version
    % introduces.
    %
:- func layout_version_number = int.

layout_version_number = 4.

:- pred output_module_common_layout_data_defn(module_name::in, int::in,
    string_with_0s::in, decl_set::in, decl_set::out, io::di, io::uo) is det.

output_module_common_layout_data_defn(ModuleName, StringTableSize, StringTable,
        !DeclSet, !IO) :-
    output_module_string_table(ModuleName, StringTableSize, StringTable,
        !DeclSet, !IO),

    ModuleCommonLayoutName = module_common_layout(ModuleName),
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(ModuleCommonLayoutName,
        being_defined, !IO),
    io.write_string(" = {\n", !IO),
    io.write_int(layout_version_number, !IO),
    io.write_string(",\n", !IO),
    quote_and_write_string(sym_name_to_string(ModuleName), !IO),
    io.write_string(",\n", !IO),
    io.write_int(StringTableSize, !IO),
    io.write_string(",\n", !IO),
    ModuleStringTableName = module_layout_string_table(ModuleName),
    output_layout_name(ModuleStringTableName, !IO),
    io.write_string("\n};\n", !IO),

    decl_set_insert(decl_data_addr(layout_addr(ModuleCommonLayoutName)),
        !DeclSet).

:- pred output_module_layout_data_defn(llds_out_info::in,
    module_name::in, layout_name::in, list(layout_name)::in,
    list(file_layout_data)::in, trace_level::in, int::in, int::in,
    maybe(event_set_layout_data)::in,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

output_module_layout_data_defn(Info, ModuleName,
        ModuleCommonLayoutName, ProcLayoutNames, FileLayouts, TraceLevel,
        SuppressedEvents, NumLabels, MaybeEventSetLayout, !DeclSet, !IO) :-
    output_layout_decl(module_common_layout(ModuleName), !DeclSet, !IO),
    output_module_layout_proc_vector_defn(ModuleName, ProcLayoutNames,
        ProcVectorName, !DeclSet, !IO),
    output_file_layout_data_defns(Info, ModuleName,
        0, FileLayouts, FileLayoutNames, !DeclSet, !IO),
    output_file_layout_vector_data_defn(ModuleName, FileLayoutNames,
        FileVectorName, !DeclSet, !IO),

    io.write_string("\n", !IO),
    LabelExecCountName = module_layout_label_exec_count(ModuleName,
        NumLabels),
    output_layout_name_storage_type_name(LabelExecCountName,
        being_defined, !IO),
    io.write_string(";\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(LabelExecCountName)), !DeclSet),

    (
        MaybeEventSetLayout = no
    ;
        MaybeEventSetLayout = yes(EventSetDataLayout),
        EventSetDataLayout =
            event_set_layout_data(EventSetDataA, TypesRvalMap),
        EventSetDataA = event_set_data(_EventSetName, EventSetDesc,
            EventSpecsA, _MaxNumAttr),
        output_event_set_desc_defn(ModuleName, EventSetDesc, !DeclSet, !IO),
        output_event_specs_and_components(Info, EventSpecsA, ModuleName,
            TypesRvalMap, !DeclSet, !IO)
    ),

    ModuleLayoutName = module_layout(ModuleName),
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(ModuleLayoutName, being_defined, !IO),
    io.write_string(" = {\n", !IO),
    io.write_string("&", !IO),
    output_layout_name(ModuleCommonLayoutName, !IO),
    io.write_string(",\n", !IO),
    list.length(ProcLayoutNames, ProcLayoutVectorLength),
    io.write_int(ProcLayoutVectorLength, !IO),
    io.write_string(",\n", !IO),
    output_layout_name(ProcVectorName, !IO),
    io.write_string(",\n", !IO),
    list.length(FileLayouts, FileLayoutVectorLength),
    io.write_int(FileLayoutVectorLength, !IO),
    io.write_string(",\n", !IO),
    output_layout_name(FileVectorName, !IO),
    io.write_string(",\n", !IO),
    io.write_string(trace_level_rep(TraceLevel), !IO),
    io.write_string(",\n", !IO),
    io.write_int(SuppressedEvents, !IO),
    io.write_string(",\n", !IO),
    io.write_int(NumLabels, !IO),
    io.write_string(",\n", !IO),
    output_layout_name(LabelExecCountName, !IO),
    io.write_string(",\n", !IO),
    (
        MaybeEventSetLayout = no,
        io.write_string("NULL,\n", !IO),
        io.write_string("NULL,\n", !IO),
        io.write_string("0,\n", !IO),
        io.write_string("0,\n", !IO),
        io.write_string("NULL", !IO)
    ;
        MaybeEventSetLayout = yes(EventSetDataLayoutB),
        EventSetDataLayoutB =
            event_set_layout_data(EventSetDataB, _TypesRvalMap),
        EventSetDataB = event_set_data(EventSetName, _EventSetDesc,
            EventSpecsB, MaxNumAttr),
        quote_and_write_string(EventSetName, !IO),
        io.write_string(",\n", !IO),
        EventSetDescLayoutName = module_layout_event_set_desc(ModuleName),
        output_layout_name(EventSetDescLayoutName, !IO),
        io.write_string(",\n", !IO),
        io.write_int(MaxNumAttr, !IO),
        io.write_string(",\n", !IO),
        io.write_int(list.length(EventSpecsB), !IO),
        io.write_string(",\n", !IO),
        EventSpecLayoutName = module_layout_event_specs(ModuleName),
        output_layout_name(EventSpecLayoutName, !IO)
    ),
    io.write_string("\n};\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(ModuleLayoutName)), !DeclSet).

:- pred output_event_specs_and_components(llds_out_info::in,
    list(event_spec)::in, module_name::in, map(int, rval)::in,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

output_event_specs_and_components(Info, EventSpecs, ModuleName, TypesRvalMap,
        !DeclSet, !IO) :-
    list.foldl2(output_event_spec_components(ModuleName), EventSpecs,
        !DeclSet, !IO),

    LayoutName = module_layout_event_specs(ModuleName),
    DataAddr = layout_addr(LayoutName),
    decl_set_insert(decl_data_addr(DataAddr), !DeclSet),
    output_layout_name_storage_type_name(LayoutName, being_defined, !IO),
    io.write_string(" = {\n", !IO),
    io.write_list(EventSpecs, ",\n",
        output_event_spec(Info, ModuleName, TypesRvalMap), !IO),
    io.write_string("\n};\n\n", !IO).

:- pred output_event_spec_components(module_name::in, event_spec::in,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

output_event_spec_components(ModuleName, EventSpec, !DeclSet, !IO) :-
    EventSpec = event_spec(EventNumber, _EventName, _EventLineNumber,
        Attrs, SynthOrder),

    AttrNamesLayoutName =
        module_layout_event_arg_names(ModuleName, EventNumber),
    AttrNamesDataAddr = layout_addr(AttrNamesLayoutName),
    decl_set_insert(decl_data_addr(AttrNamesDataAddr), !DeclSet),
    output_layout_name_storage_type_name(AttrNamesLayoutName,
        being_defined, !IO),
    io.write_string(" = {\n", !IO),
    io.write_list(Attrs, ", ", output_attr_name, !IO),
    io.write_string("\n};\n\n", !IO),

    (
        SynthOrder = []
    ;
        SynthOrder = [_ | _],

        list.foldl2(output_synth_attr_args(ModuleName, EventNumber),
            Attrs, !DeclSet, !IO),

        SynthAttrsLayoutName =
            module_layout_event_synth_attrs(ModuleName, EventNumber),
        SynthAttrsDataAddr = layout_addr(SynthAttrsLayoutName),
        decl_set_insert(decl_data_addr(SynthAttrsDataAddr), !DeclSet),
        output_layout_name_storage_type_name(SynthAttrsLayoutName,
            being_defined, !IO),
        io.write_string(" = {\n", !IO),
        io.write_list(Attrs, ",\n",
            output_synth_attr(ModuleName, EventNumber), !IO),
        io.write_string("\n};\n\n", !IO),

        SynthOrderLayoutName =
            module_layout_event_synth_order(ModuleName, EventNumber),
        SynthOrderDataAddr = layout_addr(SynthOrderLayoutName),
        decl_set_insert(decl_data_addr(SynthOrderDataAddr), !DeclSet),
        output_layout_name_storage_type_name(SynthOrderLayoutName,
            being_defined, !IO),
        io.write_string(" = {\n", !IO),
        % The -1 acts as sentinel.
        io.write_list(SynthOrder ++ [-1], ", ", io.write_int, !IO),
        io.write_string("\n};\n\n", !IO)
    ).

:- pred output_attr_name(event_attribute::in, io::di, io::uo) is det.

output_attr_name(Attr, !IO) :-
    io.write_string("""", !IO),
    io.write_string(Attr ^ attr_name, !IO),
    io.write_string("""", !IO).

:- pred output_synth_attr_args(module_name::in, int::in, event_attribute::in,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

output_synth_attr_args(ModuleName, EventNumber, Attr, !DeclSet, !IO) :-
    MaybeSynthCall = Attr ^ attr_maybe_synth_call,
    (
        MaybeSynthCall = yes(SynthCall),
        SynthCall = event_attr_synth_call(_FuncAttrNameNum, ArgAttrNameNums,
            Order),
        assoc_list.values(ArgAttrNameNums, ArgAttrNums),
        AttrNumber = Attr ^ attr_num,

        ArgsLayoutName = module_layout_event_synth_attr_args(ModuleName,
            EventNumber, AttrNumber),
        ArgsDataAddr = layout_addr(ArgsLayoutName),
        decl_set_insert(decl_data_addr(ArgsDataAddr), !DeclSet),
        output_layout_name_storage_type_name(ArgsLayoutName,
            being_defined, !IO),
        io.write_string(" =\n{ ", !IO),
        io.write_list(ArgAttrNums, ", ", io.write_int, !IO),
        io.write_string(" };\n\n", !IO),

        OrderLayoutName = module_layout_event_synth_attr_order(ModuleName,
            EventNumber, AttrNumber),
        OrderDataAddr = layout_addr(OrderLayoutName),
        decl_set_insert(decl_data_addr(OrderDataAddr), !DeclSet),
        output_layout_name_storage_type_name(OrderLayoutName,
            being_defined, !IO),
        io.write_string(" =\n{ ", !IO),
        OrderSentinel = Order ++ [-1],
        io.write_list(OrderSentinel, ", ", io.write_int, !IO),
        io.write_string(" };\n\n", !IO)
    ;
        MaybeSynthCall = no
    ).

:- pred output_synth_attr(module_name::in, int::in, event_attribute::in,
    io::di, io::uo) is det.

output_synth_attr(ModuleName, EventNumber, Attr, !IO) :-
    io.write_string("{ ", !IO),
    MaybeSynthCall = Attr ^ attr_maybe_synth_call,
    (
        MaybeSynthCall = yes(SynthCall),
        SynthCall = event_attr_synth_call(_FuncAttrName - FuncAttrNum,
            ArgAttrNameNums, _EvalOrder),
        io.write_int(FuncAttrNum, !IO),
        io.write_string(", ", !IO),
        io.write_int(list.length(ArgAttrNameNums), !IO),
        io.write_string(",\n ", !IO),

        AttrNumber = Attr ^ attr_num,
        ArgsLayoutName = module_layout_event_synth_attr_args(ModuleName,
            EventNumber, AttrNumber),
        output_layout_name(ArgsLayoutName, !IO),
        io.write_string(",\n ", !IO),
        OrderLayoutName = module_layout_event_synth_attr_order(ModuleName,
            EventNumber, AttrNumber),
        output_layout_name(OrderLayoutName, !IO)
    ;
        MaybeSynthCall = no,
        io.write_string("-1, -1, NULL, NULL", !IO)
    ),
    io.write_string(" }", !IO).

:- pred output_event_spec(llds_out_info::in, module_name::in,
    map(int, rval)::in, event_spec::in, io::di, io::uo) is det.

output_event_spec(Info, ModuleName, TypesRvalMap, EventSpec, !IO) :-
    EventSpec = event_spec(EventNumber, EventName, _EventLineNumber, Attrs,
        SynthOrder),
    map.lookup(TypesRvalMap, EventNumber, TypesRval),

    io.write_string("{ """, !IO),
    io.write_string(EventName, !IO),
    io.write_string(""", ", !IO),
    io.write_int(list.length(Attrs), !IO),
    io.write_string(",\n\t", !IO),

    AttrNamesLayoutName =
        module_layout_event_arg_names(ModuleName, EventNumber),
    output_layout_name(AttrNamesLayoutName, !IO),
    io.write_string(",\n\t(MR_TypeInfo *) ", !IO),
    output_rval_as_addr(Info, TypesRval, !IO),
    io.write_string(",\n\t", !IO),

    (
        SynthOrder = [],
        io.write_string("NULL, NULL }", !IO)
    ;
        SynthOrder = [_ | _],
        SynthAttrsLayoutName =
            module_layout_event_synth_attrs(ModuleName, EventNumber),
        SynthOrderLayoutName =
            module_layout_event_synth_order(ModuleName, EventNumber),
        output_layout_name(SynthAttrsLayoutName, !IO),
        io.write_string(",\n\t", !IO),
        output_layout_name(SynthOrderLayoutName, !IO),
        io.write_string(" }", !IO)
    ).

:- pred output_module_layout_proc_vector_defn(module_name::in,
    list(layout_name)::in, layout_name::out, decl_set::in, decl_set::out,
    io::di, io::uo) is det.

output_module_layout_proc_vector_defn(ModuleName, ProcLayoutNames,
        VectorName, !DeclSet, !IO) :-
    list.foldl2(output_layout_decl, ProcLayoutNames, !DeclSet, !IO),
    VectorName = module_layout_proc_vector(ModuleName),
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(VectorName, being_defined, !IO),
    io.write_string(" = {\n", !IO),
    (
        ProcLayoutNames = [],
        % ANSI/ISO C doesn't allow empty arrays, so place a dummy value
        % in the array.
        io.write_string("NULL\n", !IO)
    ;
        ProcLayoutNames = [_ | _],
        list.foldl(output_proc_layout_name_in_vector, ProcLayoutNames, !IO)
    ),
    io.write_string("};\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(VectorName)), !DeclSet).

:- pred output_proc_layout_name_in_vector(layout_name::in, io::di, io::uo)
    is det.

output_proc_layout_name_in_vector(LayoutName, !IO) :-
    ( LayoutName = proc_layout(RttiProcLabel, _) ->
        ProcLabel = make_proc_label_from_rtti(RttiProcLabel),
        io.write_string("MR_PROC_LAYOUT1(", !IO),
        output_proc_label_no_prefix(ProcLabel, !IO),
        io.write_string(")\n", !IO)
    ;
        unexpected(this_file,
            "output_proc_layout_name_in_vector: not proc layout")
    ).

%-----------------------------------------------------------------------------%

:- pred output_event_set_desc_defn(module_name::in, string::in,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

output_event_set_desc_defn(ModuleName, EventSetDesc, !DeclSet, !IO) :-
    LayoutName = module_layout_event_set_desc(ModuleName),
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(LayoutName, being_defined, !IO),
    io.write_string(" = {", !IO),
    output_module_string_table_strings(EventSetDesc, [], !IO),
    io.write_string("};\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(LayoutName)), !DeclSet).

:- pred output_module_string_table(module_name::in,
    int::in, string_with_0s::in, decl_set::in, decl_set::out,
    io::di, io::uo) is det.

output_module_string_table(ModuleName, _StringTableSize,
        string_with_0s(StringTable0), !DeclSet, !IO) :-
    TableName = module_layout_string_table(ModuleName),
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(TableName, being_defined, !IO),
    io.write_string(" = {", !IO),

    %
    % The string table cannot be zero size; it must contain at least an
    % empty string.
    %
    ( StringTable0 = [], FirstString = "", Rest = []
    ; StringTable0 = [FirstString | Rest]
    ),
    output_module_string_table_strings(FirstString, Rest, !IO),
    io.write_string("};\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(TableName)), !DeclSet).

:- pred output_module_string_table_strings(string::in, list(string)::in,
    io::di, io::uo) is det.

output_module_string_table_strings(String, [], !IO) :-
    output_module_string_table_chars(0, length(String) - 1, String, !IO).
output_module_string_table_strings(String, [Next | Rest], !IO) :-
    output_module_string_table_chars(0, length(String) - 1, String, !IO),
    io.write_string(",\n", !IO),
    output_module_string_table_strings(Next, Rest, !IO).

:- pred output_module_string_table_chars(int::in, int::in, string::in,
    io::di, io::uo) is det.

output_module_string_table_chars(CurIndex, MaxIndex, String, !IO) :-
    ( CurIndex =< MaxIndex ->
        ( CurIndex mod 10 = 0 ->
            io.nl(!IO)
        ;
            true
        ),
        string.unsafe_index(String, CurIndex, Char),
        io.write_char('''', !IO),
        c_util.output_quoted_char(Char, !IO),
        io.write_char('''', !IO),
        io.write_string(", ", !IO),
        output_module_string_table_chars(CurIndex + 1, MaxIndex, String, !IO)
    ;
        io.write_char('''', !IO),
        c_util.output_quoted_char(char.det_from_int(0), !IO),
        io.write_char('''', !IO)
    ).

%-----------------------------------------------------------------------------%

:- pred output_file_layout_vector_data_defn(module_name::in,
    list(layout_name)::in, layout_name::out, decl_set::in, decl_set::out,
    io::di, io::uo) is det.

output_file_layout_vector_data_defn(ModuleName, FileLayoutNames, VectorName,
        !DeclSet, !IO) :-
    list.foldl2(output_layout_decl, FileLayoutNames, !DeclSet, !IO),
    VectorName = module_layout_file_vector(ModuleName),
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(VectorName, being_defined, !IO),
    io.write_string(" = {\n", !IO),
    (
        FileLayoutNames = [],
        % ANSI/ISO C doesn't allow empty arrays, so place a dummy value
        % in the array.
        io.write_string("NULL\n", !IO)
    ;
        FileLayoutNames = [_ | _],
        list.foldl(output_layout_name_in_vector("&"), FileLayoutNames, !IO)
    ),
    io.write_string("};\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(VectorName)), !DeclSet).

:- pred output_file_layout_data_defns(llds_out_info::in, module_name::in,
    int::in, list(file_layout_data)::in, list(layout_name)::out,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

output_file_layout_data_defns(_, _, _, [], [], !DeclSet, !IO).
output_file_layout_data_defns(Info, ModuleName, FileNum,
        [FileLayout | FileLayouts], [FileLayoutName | FileLayoutNames],
        !DeclSet, !IO) :-
    output_file_layout_data_defn(Info, ModuleName,
        FileNum, FileLayout, FileLayoutName, !DeclSet, !IO),
    output_file_layout_data_defns(Info, ModuleName,
        FileNum + 1, FileLayouts, FileLayoutNames, !DeclSet, !IO).

:- pred output_file_layout_data_defn(llds_out_info::in,
    module_name::in, int::in, file_layout_data::in, layout_name::out,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

output_file_layout_data_defn(Info, ModuleName, FileNum, FileLayout,
        FileLayoutName, !DeclSet, !IO) :-
    MangledModuleName = Info ^ lout_mangled_module_name,
    FileLayout = file_layout_data(FileName, LineNoLabelList),
    assoc_list.keys_and_values(LineNoLabelList, LineNos, LabelLayoutSlots),

    list.length(LineNoLabelList, VectorLengths),
    output_file_layout_line_number_vector_defn(ModuleName, FileNum,
        LineNos, LineNumberVectorName, !DeclSet, !IO),
    output_file_layout_label_layout_vector_defn(MangledModuleName, ModuleName,
        FileNum, LabelLayoutSlots, LabelVectorName, !DeclSet, !IO),

    FileLayoutName = file_layout(ModuleName, FileNum),
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(FileLayoutName, being_defined, !IO),
    io.write_string(" = {\n", !IO),
    quote_and_write_string(FileName, !IO),
    io.write_string(",\n", !IO),
    io.write_int(VectorLengths, !IO),
    io.write_string(",\n", !IO),
    output_layout_name(LineNumberVectorName, !IO),
    io.write_string(",\n", !IO),
    output_layout_name(LabelVectorName, !IO),
    io.write_string("\n};\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(FileLayoutName)), !DeclSet).

:- pred output_file_layout_line_number_vector_defn(module_name::in, int::in,
    list(int)::in, layout_name::out, decl_set::in, decl_set::out,
    io::di, io::uo) is det.

output_file_layout_line_number_vector_defn(ModuleName, FileNum, LineNumbers,
        LayoutName, !DeclSet, !IO) :-
    LayoutName = file_layout_line_number_vector(ModuleName, FileNum),
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(LayoutName, being_defined, !IO),
    io.write_string(" = {\n", !IO),
    (
        LineNumbers = [],
        % ANSI/ISO C doesn't allow empty arrays, so place a dummy value
        % in the array.
        io.write_string("0\n", !IO)
    ;
        LineNumbers = [_ | _],
        list.foldl(output_number_in_vector, LineNumbers, !IO)
    ),
    io.write_string("};\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(LayoutName)), !DeclSet).

:- pred output_file_layout_label_layout_vector_defn(string::in,
    module_name::in, int::in, list(layout_slot_name)::in, layout_name::out,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

output_file_layout_label_layout_vector_defn(MangledModuleName, ModuleName,
        FileNum, LabelSlots, LayoutName, !DeclSet, !IO) :-
    LayoutName = file_layout_label_layout_vector(ModuleName, FileNum),
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(LayoutName, being_defined, !IO),
    io.write_string(" = {\n", !IO),
    (
        LabelSlots = [],
        % ANSI/ISO C doesn't allow empty arrays, so place a dummy value
        % in the array.
        io.write_string("NULL\n", !IO)
    ;
        LabelSlots = [_ | _],
        output_layout_slots_in_vector(MangledModuleName, LabelSlots, !IO)
    ),
    io.write_string("};\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(LayoutName)), !DeclSet).

%-----------------------------------------------------------------------------%

:- pred output_layout_slots_in_vector(string::in, list(layout_slot_name)::in,
    io::di, io::uo) is det.

output_layout_slots_in_vector(_ModuleName, [], !IO).
output_layout_slots_in_vector(ModuleName, [SlotName | SlotNames], !IO) :-
    SlotName = layout_slot(ArrayName, SlotNum),
    (
        (
            ArrayName = label_layout_array(label_has_var_info),
            Macro = "MR_var_label_layout_refs"
        ;
            ArrayName = label_layout_array(label_has_no_var_info),
            Macro = "MR_no_var_label_layout_refs"
        ),
        find_slots_in_same_array(ArrayName, SlotNames, [], RevTailSlotNums,
            OtherArraySlotNames),
        list.reverse(RevTailSlotNums, TailSlotNums),
        SlotNums = [SlotNum | TailSlotNums],
        % There must be a macro of the form Macro<n> for all values of <n>
        % between 1 and ChunkSize.
        ChunkSize = 10,
        list.chunk(SlotNums, ChunkSize, SlotNumChunks),
        list.foldl(output_layout_slot_chunk(Macro, ModuleName),
            SlotNumChunks, !IO),
        output_layout_slots_in_vector(ModuleName, OtherArraySlotNames, !IO)
    ;
        ( ArrayName = user_event_var_nums_array
        ; ArrayName = user_event_layout_array
        ),
        output_layout_slot_name(use_layout_macro, ModuleName, SlotName, !IO),
        io.write_string(",\n", !IO),
        output_layout_slots_in_vector(ModuleName, SlotNames, !IO)
    ).

:- pred find_slots_in_same_array(layout_array_name::in,
    list(layout_slot_name)::in, list(int)::in, list(int)::out,
    list(layout_slot_name)::out) is det.

find_slots_in_same_array(_ArrayName, [], !RevSlotNums, []).
find_slots_in_same_array(ArrayName, [SlotName | SlotNames], !RevSlotNums,
        OtherArraySlotNames) :-
    SlotName = layout_slot(SlotArrayName, SlotNum),
    ( SlotArrayName = ArrayName ->
        !:RevSlotNums = [SlotNum | !.RevSlotNums],
        find_slots_in_same_array(ArrayName, SlotNames, !RevSlotNums,
            OtherArraySlotNames)
    ;
        OtherArraySlotNames = [SlotName | SlotNames]
    ).

:- pred output_layout_slot_chunk(string::in, string::in, list(int)::in,
    io::di, io::uo) is det.

output_layout_slot_chunk(Macro, ModuleName, SlotNums, !IO) :-
    list.length(SlotNums, Length),
    io.write_string(Macro, !IO),
    io.write_int(Length, !IO),
    io.write_string("(", !IO),
    io.write_string(ModuleName, !IO),
    io.write_string(", ", !IO),
    io.write_list(SlotNums, ",", io.write_int, !IO),
    io.write_string(")\n", !IO).

%-----------------------------------------------------------------------------%

:- pred quote_and_write_string(string::in, io::di, io::uo) is det.

quote_and_write_string(String, !IO) :-
    io.write_string("""", !IO),
    c_util.output_quoted_string(String, !IO),
    io.write_string("""", !IO).

:- pred output_number_in_vector(int::in, io::di, io::uo) is det.

output_number_in_vector(Num, !IO) :-
    io.write_int(Num, !IO),
    io.write_string(",\n", !IO).

:- pred output_layout_name_in_vector(string::in, layout_name::in,
    io::di, io::uo) is det.

output_layout_name_in_vector(Prefix, Name, !IO) :-
    io.write_string(Prefix, !IO),
    output_layout_name(Name, !IO),
    io.write_string(",\n", !IO).

:- pred output_data_addr_in_vector(string::in, data_addr::in,
    io::di, io::uo) is det.

output_data_addr_in_vector(Prefix, DataAddr, !IO) :-
    io.write_string(Prefix, !IO),
    output_data_addr(DataAddr, !IO),
    io.write_string(",\n", !IO).

%-----------------------------------------------------------------------------%

:- pred output_proc_static_data_defn(rtti_proc_label::in,
    proc_layout_proc_static::in, decl_set::in, decl_set::out,
    io::di, io::uo) is det.

output_proc_static_data_defn(RttiProcLabel, ProcLayoutProcStatic,
        !DeclSet, !IO) :-
    ProcLayoutProcStatic = proc_layout_proc_static(HLDSProcStatic,
        DeepExcpVars, _),
    HLDSProcStatic = hlds_proc_static(FileName, LineNumber, IsInInterface,
        CallSites, CoveragePoints),

    % Write out data the proc static will reference.
    list.foldl2(output_call_site_static_decl, CallSites, !DeclSet, !IO),
    output_call_site_static_array(RttiProcLabel, CallSites, !DeclSet, !IO),
    output_coverage_point_static_array(RttiProcLabel, CoveragePoints, !DeclSet,
        !IO),
    length(CoveragePoints, NumCoveragePoints),
    output_coverage_point_dynamic_array(RttiProcLabel, NumCoveragePoints,
        !DeclSet, !IO),

    % Write out the proc static.
    LayoutName = proc_static(RttiProcLabel),
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(LayoutName, being_defined, !IO),
    io.write_string(" = {\n", !IO),
    quote_and_write_string(FileName, !IO),
    io.write_string(",\n", !IO),
    io.write_int(LineNumber, !IO),
    io.write_string(",\n", !IO),
    (
        IsInInterface = yes,
        io.write_string("MR_TRUE", !IO)
    ;
        IsInInterface = no,
        io.write_string("MR_FALSE", !IO)
    ),
    io.write_string(",\n", !IO),
    io.write_int(list.length(CallSites), !IO),
    io.write_string(",\n", !IO),
    CallSitesLayoutName = proc_static_call_sites(RttiProcLabel),
    output_layout_name(CallSitesLayoutName, !IO),
    io.write_string(",\n#ifdef MR_USE_ACTIVATION_COUNTS\n", !IO),
    io.write_string("0,\n", !IO),
    io.write_string("#endif\n", !IO),
    io.write_string("NULL,\n", !IO),
    DeepExcpVars = deep_excp_slots(TopCSDSlot, MiddleCSDSlot,
        OldOutermostSlot),
    io.write_int(TopCSDSlot, !IO),
    io.write_string(",\n", !IO),
    io.write_int(MiddleCSDSlot, !IO),
    io.write_string(",\n", !IO),
    io.write_int(OldOutermostSlot, !IO),
    io.write_string(",\n", !IO),
    io.write_int(NumCoveragePoints, !IO),
    io.write_string(",\n", !IO),
    CoveragePointStaticName = proc_static_coverage_point_static(RttiProcLabel),
    output_layout_name(CoveragePointStaticName, !IO),
    io.write_string(",\n", !IO),
    CoveragePointDynamicName =
        proc_static_coverage_point_dynamic(RttiProcLabel),
    output_layout_name(CoveragePointDynamicName, !IO),
    io.write_string("};\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(LayoutName)), !DeclSet).

:- pred output_call_site_static_array(rtti_proc_label::in,
    list(call_site_static_data)::in, decl_set::in, decl_set::out,
    io::di, io::uo) is det.

output_call_site_static_array(RttiProcLabel, CallSites, !DeclSet, !IO) :-
    LayoutName = proc_static_call_sites(RttiProcLabel),
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(LayoutName, being_defined, !IO),
    io.write_string(" = {\n", !IO),
    list.foldl2(output_call_site_static, CallSites, 0, _, !IO),
    io.write_string("};\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(LayoutName)), !DeclSet).

:- pred output_call_site_static(call_site_static_data::in, int::in, int::out,
    io::di, io::uo) is det.

output_call_site_static(CallSiteStatic, Index, Index + 1, !IO) :-
    io.write_string("{ /* ", !IO),
    io.write_int(Index, !IO),
    io.write_string(" */ ", !IO),
    (
        CallSiteStatic = normal_call(Callee, TypeSubst, FileName, LineNumber,
            GoalPath),
        io.write_string("MR_callsite_normal_call, (MR_ProcLayout *)\n&", !IO),
        CalleeProcLabel = make_proc_label_from_rtti(Callee),
        CalleeUserOrUci = proc_label_user_or_uci(CalleeProcLabel),
        output_layout_name(proc_layout(Callee,
            proc_layout_proc_id(CalleeUserOrUci)), !IO),
        ( TypeSubst = "" ->
            io.write_string(", NULL, ", !IO)
        ;
            io.write_string(",\n""", !IO),
            io.write_string(TypeSubst, !IO),
            io.write_string(""", ", !IO)
        )
    ;
        CallSiteStatic = special_call(FileName, LineNumber, GoalPath),
        io.write_string("MR_callsite_special_call, NULL, NULL, ", !IO)
    ;
        CallSiteStatic = higher_order_call(FileName, LineNumber, GoalPath),
        io.write_string("MR_callsite_higher_order_call, NULL, NULL, ", !IO)
    ;
        CallSiteStatic = method_call(FileName, LineNumber, GoalPath),
        io.write_string("MR_callsite_method_call, NULL, NULL, ", !IO)
    ;
        CallSiteStatic = callback(FileName, LineNumber, GoalPath),
        io.write_string("MR_callsite_callback, NULL, NULL, ", !IO)
    ),
    io.write_string("""", !IO),
    io.write_string(FileName, !IO),
    io.write_string(""", ", !IO),
    io.write_int(LineNumber, !IO),
    io.write_string(", """, !IO),
    io.write_string(goal_path_to_string(GoalPath), !IO),
    io.write_string(""" },\n", !IO).

:- pred output_call_site_static_decl(call_site_static_data::in,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

output_call_site_static_decl(CallSiteStatic, !DeclSet, !IO) :-
    (
        CallSiteStatic = normal_call(Callee, _, _, _, _),
        CalleeProcLabel = make_proc_label_from_rtti(Callee),
        CalleeUserOrUci = proc_label_user_or_uci(CalleeProcLabel),
        output_maybe_layout_name_decl(proc_layout(Callee,
            proc_layout_proc_id(CalleeUserOrUci)), !DeclSet, !IO)
    ;
        CallSiteStatic = special_call(_, _, _)
    ;
        CallSiteStatic = higher_order_call(_, _, _)
    ;
        CallSiteStatic = method_call(_, _, _)
    ;
        CallSiteStatic = callback(_, _, _)
    ).

%-----------------------------------------------------------------------------%

    % Write out a C representation of the coverage point static data.
    %
:- pred output_coverage_point_static_array(rtti_proc_label::in,
    list(coverage_point_info)::in, decl_set::in, decl_set::out,
    io::di, io::uo) is det.

output_coverage_point_static_array(RttiProcLabel, CoveragePoints, !DeclSet,
        !IO) :-
    LayoutName = proc_static_coverage_point_static(RttiProcLabel),
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(LayoutName, being_defined, !IO),
    io.write_string(" = {\n", !IO),
    list.foldl(output_coverage_point_static, CoveragePoints, !IO),
    io.write_string("};\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(LayoutName)), !DeclSet).

:- pred output_coverage_point_static(coverage_point_info::in, io::di, io::uo)
    is det.

output_coverage_point_static(coverage_point_info(GoalPath, CPType), !IO) :-
    io.write_string("{ """, !IO),
    GoalPathString = goal_path_to_string(GoalPath),
    io.write_string(GoalPathString, !IO),
    io.write_string(""", ", !IO),
    coverage_point_type_c_value(CPType, CPTypeCValue),
    io.write_string(CPTypeCValue, !IO),
    io.write_string(" },\n", !IO).

:- pred output_coverage_point_dynamic_array(rtti_proc_label::in, int::in,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

output_coverage_point_dynamic_array(RttiProcLabel, NumCoveragePoints,
        !DeclSet, !IO) :-
    LayoutName = proc_static_coverage_point_dynamic(RttiProcLabel),
    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(LayoutName, being_defined, !IO),
    io.write_string(" = {\n", !IO),
    duplicate(NumCoveragePoints, "0,", Zeros),
    io.write_strings(Zeros, !IO),
    io.write_string("};\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(LayoutName)), !DeclSet).

%-----------------------------------------------------------------------------%

:- pred output_table_io_decl(llds_out_info::in, rtti_proc_label::in,
    proc_layout_kind::in, int::in, rval::in, rval::in,
    decl_set::in, decl_set::out, io::di, io::uo) is det.

output_table_io_decl(Info, RttiProcLabel, ProcLayoutKind, NumPTIs,
        PTIVectorRval, TypeParamsRval, !DeclSet, !IO) :-
    output_record_rval_decls(Info, PTIVectorRval, !DeclSet, !IO),
    LayoutName = table_io_decl(RttiProcLabel),
    ProcLayoutName = proc_layout(RttiProcLabel, ProcLayoutKind),
    output_layout_decl(ProcLayoutName, !DeclSet, !IO),

    io.write_string("\n", !IO),
    output_layout_name_storage_type_name(LayoutName, being_defined, !IO),
    io.write_string(" = {\n(const MR_ProcLayout *) &", !IO),
    output_layout_name(ProcLayoutName, !IO),
    io.write_string(",\n", !IO),
    io.write_int(NumPTIs, !IO),
    io.write_string(",\n(const MR_PseudoTypeInfo *) ", !IO),
    output_rval(Info, PTIVectorRval, !IO),
    io.write_string(",\n(const MR_TypeParamLocns *) ", !IO),
    output_rval(Info, TypeParamsRval, !IO),
    io.write_string("\n};\n", !IO),
    decl_set_insert(decl_data_addr(layout_addr(LayoutName)), !DeclSet).

%-----------------------------------------------------------------------------%

output_pred_or_func(PredOrFunc, !IO) :-
    (
        PredOrFunc = pf_predicate,
        io.write_string("MR_PREDICATE", !IO)
    ;
        PredOrFunc = pf_function,
        io.write_string("MR_FUNCTION", !IO)
    ).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "layout_out.m".

%-----------------------------------------------------------------------------%
