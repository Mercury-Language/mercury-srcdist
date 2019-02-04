%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1997-2001,2003-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
% 
% File: basic_block.m.
% Main author: zs.
% 
% This module defines a representation for basic blocks, sequences of
% instructions with one entry and one exit, and provides predicates that
% convert a list of instructions into a list of basic blocks and vice versa.
% 
%-----------------------------------------------------------------------------%

:- module ll_backend.basic_block.
:- interface.

:- import_module ll_backend.llds.
:- import_module mdbcomp.prim_data.

:- import_module bool.
:- import_module counter.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module set.

%-----------------------------------------------------------------------------%

:- type block_map   ==  map(label, block_info).

:- type block_info
    --->    block_info(
                starting_label      :: label,
                                    % The label starting the block.

                label_instr         :: instruction,
                                    % The instruction containing the label.

                later_instrs        :: list(instruction),
                                    % The code of the block without the initial
                                    % label.

                fallen_into         :: bool,
                                    % Does the previous block (if any)
                                    % fall through to this block?

                jump_dests          :: list(label),
                                    % The labels we can jump to
                                    % (not falling through).

                fall_dest           :: maybe(label)
                                    % The label we fall through to
                                    % (if there is one).
            ).

    % create_basic_blocks(ProcInstrs, Comments, ProcLabel, !C, NewLabels,
    %   LabelSeq, BlockMap):
    %
    % Given ProcInstrs, the instruction sequence of the procedure given by
    % ProcLabel and whose label counter is currently !.C, create_basic_blocks
    % will divide up ProcInstrs into a sequence of basic blocks, each
    % identified by a label. The info on each basic block is returned in
    % BlockMap, and the sequence of basic blocks is returned in LabelSeq.
    % In the process, create_basic_blocks creates new labels for basic blocks
    % that can be reached only by falling through. The set of these new labels
    % is returned in NewLabels. Any initial comments are returned in Comments.
    %
:- pred create_basic_blocks(list(instruction)::in, list(instruction)::out,
    proc_label::in, counter::in, counter::out,
    set(label)::out, list(label)::out, block_map::out) is det.

    % extend_basic_blocks(!LabelSeq, !BlockMap, NewLabels):
    %
    % Given !.LabelSeq, a sequence of labels each referring to a basic block in
    % !.BlockMap, and the set of labels NewLabels that are not the targets of
    % gotos (e.g. because they were freshly created by create_basic_blocks),
    % delete from !.LabelSeq each label in NewLabels, merging its basic block
    % with the immediately previous basic block. As a result, each block in
    % !:BlockMap is an extended basic block.
    %
:- pred extend_basic_blocks(list(label)::in, list(label)::out,
    block_map::in, block_map::out, set(label)::in) is det.

    % flatten_basic_blocks(LabelSeq, BlockMap, Instrs):
    %
    % Given LabelSeq, a sequence of labels each referring to a block in
    % BlockMap, return the concatenation of the basic blocks referred to by
    % the labels in LabelSeq.
    %
:- pred flatten_basic_blocks(list(label)::in, block_map::in,
    list(instruction)::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module libs.compiler_util.
:- import_module ll_backend.opt_util.

:- import_module pair.
:- import_module svmap.
:- import_module svset.

%-----------------------------------------------------------------------------%

create_basic_blocks(Instrs0, Comments, ProcLabel, !C, NewLabels, LabelSeq,
        BlockMap) :-
    opt_util.get_prologue(Instrs0, LabelInstr, Comments, AfterLabelInstrs),
    Instrs1 = [LabelInstr | AfterLabelInstrs],
    build_block_map(Instrs1, LabelSeq, ProcLabel, no, map.init, BlockMap,
        set.init, NewLabels, !C).

%-----------------------------------------------------------------------------%

    % Build up the block map. As we go along, we add labels to the given
    % instruction sequence so that every basic block has labels around it.
    %
:- pred build_block_map(list(instruction)::in, list(label)::out,
    proc_label::in, bool::in, block_map::in, block_map::out,
    set(label)::in, set(label)::out, counter::in, counter::out) is det.

build_block_map([], [], _, _, !BlockMap, !NewLabels, !C).
build_block_map([OrigInstr0 | OrigInstrs0], LabelSeq, ProcLabel, FallInto,
        !BlockMap, !NewLabels, !C) :-
    ( OrigInstr0 = llds_instr(label(OrigLabel), _) ->
        Label = OrigLabel,
        LabelInstr = OrigInstr0,
        RestInstrs = OrigInstrs0
    ;
        counter.allocate(N, !C),
        Label = internal_label(N, ProcLabel),
        svset.insert(Label, !NewLabels),
        LabelInstr = llds_instr(label(Label), ""),
        RestInstrs = [OrigInstr0 | OrigInstrs0]
    ),
    (
        take_until_end_of_block(RestInstrs, BlockInstrs, Instrs1),
        build_block_map(Instrs1, LabelSeq1, ProcLabel, NextFallInto, !BlockMap,
            !NewLabels, !C),
        ( list.last(BlockInstrs, LastInstr) ->
            LastInstr = llds_instr(LastUinstr, _),
            opt_util.possible_targets(LastUinstr, SideLabels, _SideCodeAddrs),
            opt_util.can_instr_fall_through(LastUinstr) = NextFallInto
        ;
            SideLabels = [],
            NextFallInto = yes
        ),
        (
            NextFallInto = yes,
            get_fallthrough_from_seq(LabelSeq1, MaybeFallThrough)
        ;
            NextFallInto = no,
            MaybeFallThrough = no
        ),
        BlockInfo = block_info(Label, LabelInstr, BlockInstrs, FallInto,
            SideLabels, MaybeFallThrough),
        map.det_insert(!.BlockMap, Label, BlockInfo, !:BlockMap),
        LabelSeq = [Label | LabelSeq1]
    ).

%-----------------------------------------------------------------------------%

:- pred take_until_end_of_block(list(instruction)::in,
    list(instruction)::out, list(instruction)::out) is det.

take_until_end_of_block([], [], []).
take_until_end_of_block([Instr0 | Instrs0], BlockInstrs, Rest) :-
    Instr0 = llds_instr(Uinstr0, _Comment),
    ( Uinstr0 = label(_) ->
        BlockInstrs = [],
        Rest = [Instr0 | Instrs0]
    ; opt_util.can_instr_branch_away(Uinstr0) = yes ->
        BlockInstrs = [Instr0],
        Rest = Instrs0
    ;
        take_until_end_of_block(Instrs0, BlockInstrs1, Rest),
        BlockInstrs = [Instr0 | BlockInstrs1]
    ).

%-----------------------------------------------------------------------------%

:- pred get_fallthrough_from_seq(list(label)::in, maybe(label)::out) is det.

get_fallthrough_from_seq(LabelSeq, MaybeFallThrough) :-
    (
        LabelSeq = [NextLabel | _],
        MaybeFallThrough = yes(NextLabel)
    ;
        LabelSeq = [],
        MaybeFallThrough = no
    ).

%-----------------------------------------------------------------------------%

extend_basic_blocks([], [], !BlockMap, _NewLabels).
extend_basic_blocks([Label | Labels], LabelSeq, !BlockMap, NewLabels) :-
    (
        Labels = [NextLabel | RestLabels],
        set.member(NextLabel, NewLabels)
    ->
        map.lookup(!.BlockMap, Label, BlockInfo),
        map.lookup(!.BlockMap, NextLabel, NextBlockInfo),
        BlockInfo = block_info(BlockLabel, BlockLabelInstr, BlockInstrs,
            BlockFallInto, BlockSideLabels, BlockMaybeFallThrough),
        NextBlockInfo = block_info(NextBlockLabel, _, NextBlockInstrs,
            NextBlockFallInto, NextBlockSideLabels, NextBlockMaybeFallThrough),
        expect(unify(BlockLabel, Label), this_file,
            "extend_basic_blocks: block label mismatch"),
        expect(unify(NextBlockLabel, NextLabel), this_file,
            "extend_basic_blocks: next block label mismatch"),
        expect(unify(BlockMaybeFallThrough, yes(NextLabel)), this_file,
            "extend_basic_blocks: fall through mismatch"),
        expect(unify(NextBlockFallInto, yes), this_file,
            "extend_basic_blocks: fall into mismatch"),
        NewBlockInfo = block_info(BlockLabel, BlockLabelInstr,
            BlockInstrs ++ NextBlockInstrs, BlockFallInto,
            BlockSideLabels ++ NextBlockSideLabels, NextBlockMaybeFallThrough),
        svmap.det_update(Label, NewBlockInfo, !BlockMap),
        svmap.delete(NextLabel, !BlockMap),
        extend_basic_blocks([Label | RestLabels], LabelSeq, !BlockMap,
            NewLabels)
    ;
        extend_basic_blocks(Labels, LabelSeqTail, !BlockMap, NewLabels),
        LabelSeq = [Label | LabelSeqTail]
    ).

%-----------------------------------------------------------------------------%

flatten_basic_blocks([], _, []).
flatten_basic_blocks([Label | Labels], BlockMap, Instrs) :-
    flatten_basic_blocks(Labels, BlockMap, RestInstrs),
    map.lookup(BlockMap, Label, BlockInfo),
    BlockInfo = block_info(_, BlockLabelInstr, BlockInstrs, _, _, _),
    list.append([BlockLabelInstr | BlockInstrs], RestInstrs, Instrs).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "basic_block.m".

%-----------------------------------------------------------------------------%
:- end_module basic_block.
%-----------------------------------------------------------------------------%
