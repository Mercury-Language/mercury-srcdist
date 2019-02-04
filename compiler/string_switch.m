%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1994-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: string_switch.m.
% Author: fjh.
%
% For switches on strings, we generate a hash table using open addressing
% to resolve hash conflicts.
%
%-----------------------------------------------------------------------------%

:- module ll_backend.string_switch.
:- interface.

:- import_module backend_libs.switch_util.
:- import_module hlds.code_model.
:- import_module hlds.hlds_goal.
:- import_module ll_backend.code_info.
:- import_module ll_backend.llds.
:- import_module parse_tree.prog_data.

:- pred generate_string_switch(cases_list::in, prog_var::in, code_model::in,
    can_fail::in, hlds_goal_info::in, label::in,
    branch_end::in, branch_end::out, code_tree::out,
    code_info::in, code_info::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module backend_libs.builtin_ops.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_llds.
:- import_module libs.compiler_util.
:- import_module libs.tree.
:- import_module ll_backend.code_gen.
:- import_module ll_backend.trace_gen.

:- import_module int.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module string.

%-----------------------------------------------------------------------------%

generate_string_switch(Cases, Var, CodeModel, _CanFail, SwitchGoalInfo,
        EndLabel, !MaybeEnd, Code, !CI) :-
    produce_variable(Var, VarCode, VarRval, !CI),
    acquire_reg(reg_r, SlotReg, !CI),
    acquire_reg(reg_r, StringReg, !CI),
    get_next_label(LoopLabel, !CI),
    get_next_label(FailLabel, !CI),
    get_next_label(JumpLabel, !CI),

    % Determine how big to make the hash table. Currently we round the number
    % of cases up to the nearest power of two, and then double it.
    % This should hopefully ensure that we don't get too many hash collisions.

    list.length(Cases, NumCases),
    int.log2(NumCases, LogNumCases),
    int.pow(2, LogNumCases, RoundedNumCases),
    TableSize = 2 * RoundedNumCases,
    HashMask = TableSize - 1,

    % Compute the hash table.
    switch_util.string_hash_cases(Cases, HashMask, HashValsMap),
    map.to_assoc_list(HashValsMap, HashValsList),
    switch_util.calc_hash_slots(HashValsList, HashValsMap, HashSlotsMap),

    % Note that it is safe to release the registers now, even though we haven't
    % yet generated all the code which uses them, because that code will be
    % executed before the code for the cases (which might reuse those
    % registers), and because that code is generated manually (below)
    % so we don't need the reg info to be valid when we generate it.

    release_reg(SlotReg, !CI),
    release_reg(StringReg, !CI),

    % Generate the code for when the hash lookup fails. This must be done
    % before gen_hash_slots, since we want to use the exprn_info corresponding
    % to the start of the switch, not to the end of the last case.
    generate_failure(FailCode, !CI),

    % Generate the code etc. for the hash table.
    gen_hash_slots(0, TableSize, HashSlotsMap, CodeModel, SwitchGoalInfo,
        FailLabel, EndLabel, !MaybeEnd, Strings, Labels, NextSlots,
        SlotsCode, !CI),

    % Generate code which does the hash table lookup
    (
        add_scalar_static_cell_natural_types(NextSlots, NextSlotsTableAddr,
            !CI),
        NextSlotsTable = const(llconst_data_addr(NextSlotsTableAddr, no)),
        add_scalar_static_cell_natural_types(Strings, StringTableAddr, !CI),
        StringTable = const(llconst_data_addr(StringTableAddr, no)),
        HashLookupCode = node([
            llds_instr(comment("hashed string switch"), ""),
            llds_instr(assign(SlotReg,
                binop(bitwise_and, unop(hash_string, VarRval),
                    const(llconst_int(HashMask)))),
                "compute the hash value of the input string"),
            llds_instr(label(LoopLabel), "begin hash chain loop"),
            llds_instr(assign(StringReg,
                binop(array_index(elem_type_string),
                    StringTable, lval(SlotReg))),
                "lookup the string for this hash slot"),
            llds_instr(if_val(binop(logical_and, lval(StringReg),
                binop(str_eq, lval(StringReg), VarRval)),
                    code_label(JumpLabel)),
                "did we find a match?"),
            llds_instr(assign(SlotReg,
                binop(array_index(elem_type_int),
                    NextSlotsTable, lval(SlotReg))),
                "not yet, so get next slot in hash chain"),
            llds_instr(
                if_val(binop(int_ge, lval(SlotReg), const(llconst_int(0))),
                    code_label(LoopLabel)),
                "keep searching until we reach the end of the chain"),
            llds_instr(label(FailLabel), "no match, so fail")
        ])
    ),
    JumpCode = node([
        llds_instr(label(JumpLabel), "we found a match"),
        llds_instr(computed_goto(lval(SlotReg), Labels),
            "jump to the corresponding code")
    ]),
    Code = tree_list([VarCode, HashLookupCode, FailCode, JumpCode, SlotsCode]).

:- pred gen_hash_slots(int::in, int::in,
    map(int, hash_slot)::in, code_model::in, hlds_goal_info::in, label::in,
    label::in, branch_end::in, branch_end::out,
    list(rval)::out, list(label)::out, list(rval)::out, code_tree::out,
    code_info::in, code_info::out) is det.

gen_hash_slots(Slot, TableSize, HashSlotMap, CodeModel, SwitchGoalInfo,
        FailLabel, EndLabel, !MaybeEnd, Strings, Labels, NextSlots,
        Code, !CI) :-
    ( Slot = TableSize ->
        Strings = [],
        Labels = [],
        NextSlots = [],
        Code = node([
            llds_instr(label(EndLabel), "end of hashed string switch")
        ])
    ;
        gen_hash_slot(Slot, TableSize, HashSlotMap, CodeModel, SwitchGoalInfo,
            FailLabel, EndLabel, !MaybeEnd, String, Label, NextSlot,
            SlotCode, !CI),
        Slot1 = Slot + 1,
        gen_hash_slots(Slot1, TableSize, HashSlotMap, CodeModel,
            SwitchGoalInfo, FailLabel, EndLabel, !MaybeEnd, Strings0, Labels0,
            NextSlots0, Code0, !CI),
        Strings = [String | Strings0],
        Labels = [Label | Labels0],
        NextSlots = [NextSlot | NextSlots0],
        Code = tree(SlotCode, Code0)
    ).

:- pred gen_hash_slot(int::in, int::in, map(int, hash_slot)::in,
    code_model::in, hlds_goal_info::in, label::in, label::in,
    branch_end::in, branch_end::out, rval::out, label::out, rval::out,
    code_tree::out, code_info::in, code_info::out) is det.

gen_hash_slot(Slot, TblSize, HashSlotMap, CodeModel, SwitchGoalInfo, FailLabel,
        EndLabel, !MaybeEnd, StringRval, Label, NextSlotRval, Code, !CI) :-
    ( map.search(HashSlotMap, Slot, hash_slot(Case, Next)) ->
        NextSlotRval = const(llconst_int(Next)),
        Case = extended_case(_, ConsTag, _, Goal),
        ( ConsTag = string_tag(String0) ->
            String = String0
        ;
            unexpected(this_file, "gen_hash_slots: string expected")
        ),
        StringRval = const(llconst_string(String)),
        get_next_label(Label, !CI),
        string.append_list(["case """, String, """"], Comment),
        LabelCode = node([llds_instr(label(Label), Comment)]),
        remember_position(!.CI, BranchStart),
        maybe_generate_internal_event_code(Goal, SwitchGoalInfo, TraceCode,
            !CI),
        code_gen.generate_goal(CodeModel, Goal, GoalCode, !CI),
        goal_info_get_store_map(SwitchGoalInfo, StoreMap),
        generate_branch_end(StoreMap, !MaybeEnd, SaveCode, !CI),
        ( this_is_last_case(Slot, TblSize, HashSlotMap) ->
            true
        ;
            reset_to_position(BranchStart, !CI)
        ),
        FinishCode = node([
            llds_instr(goto(code_label(EndLabel)), "jump to end of switch")
        ]),
        Code = tree_list([LabelCode, TraceCode, GoalCode, SaveCode,
             FinishCode])
    ;
        StringRval = const(llconst_int(0)),
        Label = FailLabel,
        NextSlotRval = const(llconst_int(-2)),
        Code = empty
    ).

:- pred this_is_last_case(int::in, int::in, map(int, hash_slot)::in)
    is semidet.

this_is_last_case(Slot, TableSize, Table) :-
    Slot1 = Slot + 1,
    ( Slot1 >= TableSize ->
        true
    ;
        \+ map.contains(Table, Slot1),
        this_is_last_case(Slot1, TableSize, Table)
    ).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "string_switch.m".

%-----------------------------------------------------------------------------%
