%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1994-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: opt_util.m.
% Main author: zs.
%
% Utilities for LLDS to LLDS optimization.
%
%-----------------------------------------------------------------------------%

:- module ll_backend.opt_util.
:- interface.

:- import_module ll_backend.llds.
:- import_module mdbcomp.prim_data.

:- import_module bool.
:- import_module list.
:- import_module map.
:- import_module maybe.

%-----------------------------------------------------------------------------%

:- type instrmap == map(label, instruction).
:- type lvalmap == map(label, maybe(instruction)).
:- type tailmap == map(label, list(instruction)).
:- type succmap == map(label, bool).

:- pred get_prologue(list(instruction)::in, instruction::out,
    list(instruction)::out, list(instruction)::out) is det.

:- pred gather_comments(list(instruction)::in,
    list(instruction)::out, list(instruction)::out) is det.

:- pred gather_comments_livevals(list(instruction)::in,
    list(instruction)::out, list(instruction)::out) is det.

    % Given a list of instructions, skip past any comment instructions
    % at the start and return the remaining instructions. We do this because
    % comment instructions get in the way of peephole optimization.
    %
:- pred skip_comments(list(instruction)::in, list(instruction)::out) is det.

:- pred skip_comments_livevals(list(instruction)::in,
    list(instruction)::out) is det.

:- pred skip_comments_labels(list(instruction)::in,
    list(instruction)::out) is det.

:- pred skip_comments_livevals_labels(list(instruction)::in,
    list(instruction)::out) is det.

    % Find the next assignment to the redoip of the frame whose address
    % is given by the base addresses in the second argument, provided
    % it is guaranteed to be reached from here, and guaranteed not to be
    % reached from anywhere else by a jump.
    %
:- pred next_assign_to_redoip(list(instruction)::in, list(lval)::in,
    list(instruction)::in, code_addr::out, list(instruction)::out,
    list(instruction)::out) is semidet.

    % See if these instructions touch nondet stack controls, i.e.
    % the virtual machine registers that point to the nondet stack
    % (curfr and maxfr) and the fixed slots in nondet stack frames.
    %
:- func touches_nondet_ctrl(list(instruction)) = bool.

    % Find the instructions up to and including the next one that
    % cannot fall through.
    %
:- pred find_no_fallthrough(list(instruction)::in,
    list(instruction)::out) is det.

    % Find the first label in the instruction stream.
    %
:- pred find_first_label(list(instruction)::in, label::out) is det.

    % Skip to the next label, returning the code before the label,
    % and the label together with the code after the label.
    %
:- pred skip_to_next_label(list(instruction)::in,
    list(instruction)::out, list(instruction)::out) is det.

    % Check whether the named label follows without any intervening code.
    % If yes, return the instructions after the label.
    %
:- pred is_this_label_next(label::in, list(instruction)::in,
    list(instruction)::out) is semidet.

    % Is a proceed instruction (i.e. a goto(succip) instruction)
    % next in the instruction list, possibly preceded by a restoration
    % of succip and a det stack frame removal? If yes, return the
    % instructions up to the proceed.
    %
:- pred is_proceed_next(list(instruction)::in,
    list(instruction)::out) is semidet.

    % Is a proceed instruction (i.e. a goto(succip) instruction)
    % next in the instruction list, possibly preceded by an assignment
    % to r1, a restoration of succip and a det stack frame removal?
    % If yes, return the instructions up to the proceed.
    %
:- pred is_sdproceed_next(list(instruction)::in,
    list(instruction)::out) is semidet.

    % Same as the previous predicate, but also return whether it is
    % a success or a fail.
    %
:- pred is_sdproceed_next_sf(list(instruction)::in,
    list(instruction)::out, bool::out) is semidet.

    % Is a succeed instruction (i.e. a goto(do_succeed(_)) instruction)
    % next in the instruction list? If yes, return the instructions
    % up to and including the succeed.
    %
:- pred is_succeed_next(list(instruction)::in,
    list(instruction)::out) is semidet.

    % Is the following code a test of r1, followed in both continuations
    % by a semidet proceed? Is the code in both continuations the same,
    % modulo livevals annotations and the value assigned to r1? Is MR_TRUE
    % assigned to r1 in the success continuation and MR_FALSE in the failure
    % continuation? If the answer is yes to all these questions, return
    % the code shared by the two continuations.
    %
:- pred is_forkproceed_next(list(instruction)::in, tailmap::in,
    list(instruction)::out) is semidet.

    % Remove the assignment to r1 from the list returned by is_sdproceed_next.
    %
:- pred filter_out_r1(list(instruction)::in, maybe(rval_const)::out,
    list(instruction)::out) is det.

    % Does the following code consist of straighline instructions that do not
    % modify nondet frame linkages, plus possibly if_val(..., dofail), and then
    % a succeed? If yes, then return all the instructions up to the succeed,
    % and all the following instructions.
    %
:- pred straight_alternative(list(instruction)::in,
    list(instruction)::out, list(instruction)::out) is semidet.

    % Find and return the initial sequence of instructions that do not
    % refer to stackvars and do not branch.
    %
:- pred no_stack_straight_line(list(instruction)::in,
    list(instruction)::out, list(instruction)::out) is det.

    % Check whether the given instruction sequence consist of an initial
    % sequence of instructions that do not refer to stackvars and do not
    % contain any entry points or unconditional branches away, until a
    % goto(do_succeed(yes)) instruction. If yes, return that initial sequence,
    % the comment on the goto(do_succeed(yes)) instruction, and the
    % instructions after it.
    %
:- pred may_replace_succeed_with_succeed_discard(list(instruction)::in,
    list(instruction)::out, string::out, list(instruction)::out) is semidet.

    % Remove the labels from a block of code for jumpopt.
    %
:- pred filter_out_labels(list(instruction)::in, list(instruction)::out)
    is det.

    % Remove any livevals instructions that do not precede an instruction
    % that needs one.
    %
:- pred filter_out_bad_livevals(list(instruction)::in, list(instruction)::out)
    is det.

    % Remove the livevals instruction from the list returned by
    % is_proceed_next.
    %
:- pred filter_out_livevals(list(instruction)::in, list(instruction)::out)
    is det.

    % Get just the livevals instructions from a list of instructions.
    %
:- pred filter_in_livevals(list(instruction)::in,
    list(instruction)::out) is det.

    % See if the condition of an if-then-else is constant, and if yes,
    % whether the branch will be taken or not.
    %
:- pred is_const_condition(rval::in, bool::out) is semidet.

    % Check whether an instruction can possibly branch away.
    %
:- func can_instr_branch_away(instr) = bool.

    % Check whether an instruction can possibly fall through
    % to the next instruction without using its label.
    %
:- func can_instr_fall_through(instr) = bool.

    % Check whether a code_addr, when the target of a goto, represents either
    % a call or a proceed/succeed; if so, it is the end of an extended basic
    % block and needs a livevals in front of it.
    %
:- func livevals_addr(code_addr) = bool.

    % Determine all the labels and code addresses which are referenced
    % by an instruction. The code addresses that are labels are returned
    % in both output arguments.
    %
:- pred instr_labels(instr::in, list(label)::out, list(code_addr)::out) is det.

    % Determine all the labels and code addresses which are referenced
    % by a list of instructions.
    %
:- pred instr_list_labels(list(instruction)::in,
    list(label)::out, list(code_addr)::out) is det.

    % Given an instruction, find the set of labels and other code addresses
    % to which it can cause control to transfer. In the case of calls, this
    % includes transfer via return from the called procedure.
    %
:- pred possible_targets(instr::in, list(label)::out, list(code_addr)::out)
    is det.

    % Find the maximum temp variable number used.
    %
:- pred count_temps_instr_list(list(instruction)::in, int::in, int::out,
    int::in, int::out) is det.

:- pred count_temps_instr(instr::in, int::in, int::out,
    int::in, int::out) is det.

    % See whether a (list of) instructions or instruction components
    % references the current stack frame (on either stack).
    %
:- func lval_refers_stackvars(lval) = bool.
:- func rval_refers_stackvars(rval) = bool.
:- func rvals_refer_stackvars(list(maybe(rval))) = bool.
:- func instr_refers_to_stack(instruction) = bool.
:- func block_refers_to_stack(list(instruction)) = bool.

    % See whether instructions until the next decr_sp (if any) refer to
    % any stackvars or branch away. If not, return the instructions up to
    % the decr_sp. A restoration of succip from the bottom stack slot
    % is allowed; this instruction is not returned in the output.
    % The same thing applies to assignments to detstackvars; these are
    % not useful if we throw away the stack frame.
    %
:- pred no_stackvars_til_decr_sp(list(instruction)::in, int::in,
    list(instruction)::out, list(instruction)::out) is semidet.

    % Format a label or proc_label for verbose messages during compilation.
    %
:- func format_label(label) = string.
:- func format_proc_label(proc_label) = string.

    % Find out if an instruction sequence has both incr_sp and decr_sp.
    %
:- pred has_both_incr_decr_sp(list(instruction)::in) is semidet.

    % Find out what rvals, if any, are needed to access an lval.
    %
:- pred lval_access_rvals(lval::in, list(rval)::out) is det.

    % See whether an rval is free of references to a given lval.
    %
:- pred rval_free_of_lval(rval::in, lval::in) is semidet.

    % See whether a list of rvals is free of references to a given lval.
    %
:- pred rvals_free_of_lval(list(rval)::in, lval::in) is semidet.

    % Count the number of hp increments in a block of code.
    %
:- pred count_incr_hp(list(instruction)::in, int::out) is det.

    % Whenever the input list of instructions contains two livevals pseudo-ops
    % without an intervening no-fall-through instruction, ensure that the
    % first of these registers as live every lval that is live in the second,
    % except those that are assigned to by intervening instructions. This makes
    % the shadowing of the second livevals by the first benign.
    %
:- pred propagate_livevals(list(instruction)::in, list(instruction)::out)
    is det.

    % Replace references to one set of local labels with references to another
    % set, in one instruction or a list of instructions. Control references
    % (those that can cause a transfer of control from the instruction they
    % occur in to the replaced label, either directly or via return from a
    % called procedure) are always replaced; references that treat the label
    % as data are replaced iff the third argument is set to "yes".
    %
    % With replace_labels_instruction_list, the fourth arg says whether
    % it is OK to replace a label in a label instruction itself.
    %
:- pred replace_labels_instr(instr::in, map(label, label)::in,
    bool::in, instr::out) is det.

:- pred replace_labels_instruction(instruction::in,
    map(label, label)::in, bool::in, instruction::out) is det.

:- pred replace_labels_instruction_list(list(instruction)::in,
    map(label, label)::in, bool::in, bool::in, list(instruction)::out) is det.

:- pred replace_labels_comps(list(foreign_proc_component)::in,
    map(label, label)::in, list(foreign_proc_component)::out) is det.

:- pred replace_labels_code_addr(code_addr::in, map(label, label)::in,
    code_addr::out) is det.

:- pred replace_labels_label_list(list(label)::in,
    map(label, label)::in, list(label)::out) is det.

:- pred replace_labels_label(label::in, map(label, label)::in,
    label::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module backend_libs.builtin_ops.
:- import_module hlds.special_pred.
:- import_module libs.compiler_util.
:- import_module ll_backend.exprn_aux.
:- import_module parse_tree.prog_data.

:- import_module int.
:- import_module pair.
:- import_module set.
:- import_module string.

%-----------------------------------------------------------------------------%

get_prologue(Instrs0, LabelInstr, Comments, Instrs) :-
    gather_comments(Instrs0, Comments1, Instrs1),
    (
        Instrs1 = [Instr1 | Instrs2],
        Instr1 = llds_instr(label(_), _)
    ->
        LabelInstr = Instr1,
        gather_comments(Instrs2, Comments2, Instrs),
        list.append(Comments1, Comments2, Comments)
    ;
        unexpected(this_file, "procedure does not begin with label")
    ).

gather_comments(Instrs0, Comments, Instrs) :-
    (
        Instrs0 = [Instr0 | Instrs1],
        Instr0 = llds_instr(comment(_), _)
    ->
        gather_comments(Instrs1, Comments0, Instrs),
        Comments = [Instr0 | Comments0]
    ;
        Instrs = Instrs0,
        Comments = []
    ).

gather_comments_livevals(Instrs0, Comments, Instrs) :-
    (
        Instrs0 = [Instr0 | Instrs1],
        Instr0 = llds_instr(Uinstr0, _),
        ( Uinstr0 = comment(_)
        ; Uinstr0 = livevals(_)
        )
    ->
        gather_comments_livevals(Instrs1, Comments0, Instrs),
        Comments = [Instr0 | Comments0]
    ;
        Instrs = Instrs0,
        Comments = []
    ).

skip_comments(Instrs0, Instrs) :-
    ( Instrs0 = [llds_instr(comment(_), _) | Instrs1] ->
        skip_comments(Instrs1, Instrs)
    ;
        Instrs = Instrs0
    ).

skip_comments_livevals(Instrs0, Instrs) :-
    ( Instrs0 = [llds_instr(comment(_), _) | Instrs1] ->
        skip_comments(Instrs1, Instrs)
    ; Instrs0 = [llds_instr(livevals(_), _) | Instrs1] ->
        skip_comments_livevals(Instrs1, Instrs)
    ;
        Instrs = Instrs0
    ).

skip_comments_labels(Instrs0, Instrs) :-
    ( Instrs0 = [llds_instr(comment(_), _) | Instrs1] ->
        skip_comments_labels(Instrs1, Instrs)
    ; Instrs0 = [llds_instr(label(_), _) | Instrs1] ->
        skip_comments_labels(Instrs1, Instrs)
    ;
        Instrs = Instrs0
    ).

skip_comments_livevals_labels(Instrs0, Instrs) :-
    ( Instrs0 = [llds_instr(comment(_), _) | Instrs1] ->
        skip_comments_livevals_labels(Instrs1, Instrs)
    ; Instrs0 = [llds_instr(livevals(_), _) | Instrs1] ->
        skip_comments_livevals_labels(Instrs1, Instrs)
    ; Instrs0 = [llds_instr(label(_), _) | Instrs1] ->
        skip_comments_livevals_labels(Instrs1, Instrs)
    ;
        Instrs = Instrs0
    ).

next_assign_to_redoip([Instr | Instrs], AllowedBases, RevSkip,
        Redoip, Skip, Rest) :-
    Instr = llds_instr(Uinstr, _Comment),
    (
        Uinstr = assign(redoip_slot(lval(Fr)),
            const(llconst_code_addr(Redoip0))),
        list.member(Fr, AllowedBases)
    ->
        Redoip = Redoip0,
        list.reverse(RevSkip, Skip),
        Rest = Instrs
    ;
        Uinstr = mkframe(_, _)
    ->
        fail

    ;
        Uinstr = label(_)
    ->
        fail
    ;
        CanBranchAway = can_instr_branch_away(Uinstr),
        (
            CanBranchAway = no,
            next_assign_to_redoip(Instrs, AllowedBases, [Instr | RevSkip],
                Redoip, Skip, Rest)
        ;
            CanBranchAway = yes,
            fail
        )
    ).

find_no_fallthrough([], []).
find_no_fallthrough([Instr0 | Instrs0], Instrs) :-
    (
        Instr0 = llds_instr(Uinstr0, _),
        can_instr_fall_through(Uinstr0) = no
    ->
        Instrs = [Instr0]
    ;
        find_no_fallthrough(Instrs0, Instrs1),
        Instrs = [Instr0 | Instrs1]
    ).

find_first_label([], _) :-
    unexpected(this_file, "cannot find first label").
find_first_label([Instr0 | Instrs0], Label) :-
    ( Instr0 = llds_instr(label(LabelPrime), _) ->
        Label = LabelPrime
    ;
        find_first_label(Instrs0, Label)
    ).

skip_to_next_label([], [], []).
skip_to_next_label([Instr0 | Instrs0], Before, Remain) :-
    ( Instr0 = llds_instr(label(_), _) ->
        Before = [],
        Remain = [Instr0 | Instrs0]
    ;
        skip_to_next_label(Instrs0, Before1, Remain),
        Before = [Instr0 | Before1]
    ).

is_this_label_next(Label, [Instr | Moreinstr], Remainder) :-
    Instr = llds_instr(Uinstr, _Comment),
    ( Uinstr = comment(_) ->
        is_this_label_next(Label, Moreinstr, Remainder)
    ; Uinstr = livevals(_) ->
        % this is questionable
        is_this_label_next(Label, Moreinstr, Remainder)
    ; Uinstr = label(NextLabel) ->
        ( Label = NextLabel ->
            Remainder = Moreinstr
        ;
            is_this_label_next(Label, Moreinstr, Remainder)
        )
    ;
        fail
    ).

is_proceed_next(Instrs0, InstrsBetween) :-
    skip_comments_labels(Instrs0, Instrs1),
    Instrs1 = [Instr1 | Instrs2],
    ( Instr1 = llds_instr(assign(succip, lval(stackvar(_))), _) ->
        Instr1use = Instr1,
        skip_comments_labels(Instrs2, Instrs3)
    ;
        Instr1use = llds_instr(comment("no succip restoration"), ""),
        Instrs3 = Instrs1
    ),
    Instrs3 = [Instr3 | Instrs4],
    ( Instr3 = llds_instr(decr_sp(_), _) ->
        Instr3use = Instr3,
        skip_comments_labels(Instrs4, Instrs5)
    ;
        Instr3use = llds_instr(comment("no sp restoration"), ""),
        Instrs5 = Instrs3
    ),
    Instrs5 = [Instr5 | Instrs6],
    Instr5 = llds_instr(livevals(_), _),
    skip_comments_labels(Instrs6, Instrs7),
    Instrs7 = [Instr7 | _],
    Instr7 = llds_instr(goto(code_succip), _),
    InstrsBetween = [Instr1use, Instr3use, Instr5].

is_sdproceed_next(Instrs0, InstrsBetween) :-
    is_sdproceed_next_sf(Instrs0, InstrsBetween, _).

is_sdproceed_next_sf(Instrs0, InstrsBetween, Success) :-
    skip_comments_labels(Instrs0, Instrs1),
    Instrs1 = [Instr1 | Instrs2],
    ( Instr1 = llds_instr(assign(succip, lval(stackvar(_))), _) ->
        Instr1use = Instr1,
        skip_comments_labels(Instrs2, Instrs3)
    ;
        Instr1use = llds_instr(comment("no succip restoration"), ""),
        Instrs3 = Instrs1
    ),
    Instrs3 = [Instr3 | Instrs4],
    ( Instr3 = llds_instr(decr_sp(_), _) ->
        Instr3use = Instr3,
        skip_comments_labels(Instrs4, Instrs5)
    ;
        Instr3use = llds_instr(comment("no sp restoration"), ""),
        Instrs5 = Instrs3
    ),
    Instrs5 = [Instr5 | Instrs6],
    Instr5 = llds_instr(assign(reg(reg_r, 1), const(R1val)), _),
    (
        R1val = llconst_true,
        Success = yes
    ;
        R1val = llconst_false,
        Success = no
    ),
    skip_comments_labels(Instrs6, Instrs7),
    Instrs7 = [Instr7 | Instrs8],
    Instr7 = llds_instr(livevals(_), _),
    skip_comments_labels(Instrs8, Instrs9),
    Instrs9 = [Instr9 | _],
    Instr9 = llds_instr(goto(code_succip), _),
    InstrsBetween = [Instr1use, Instr3use, Instr5, Instr7].

is_succeed_next(Instrs0, InstrsBetweenIncl) :-
    skip_comments_labels(Instrs0, Instrs1),
    Instrs1 = [Instr1 | Instrs2],
    Instr1 = llds_instr(livevals(_), _),
    skip_comments_labels(Instrs2, Instrs3),
    Instrs3 = [Instr3 | _],
    Instr3 = llds_instr(goto(do_succeed(_)), _),
    InstrsBetweenIncl = [Instr1, Instr3].

is_forkproceed_next(Instrs0, Sdprocmap, Between) :-
    skip_comments_labels(Instrs0, Instrs1),
    Instrs1 = [Instr1 | Instrs2],
    Instr1 = llds_instr(Uinstr1, _),
    (
        Uinstr1 = if_val(lval(reg(reg_r, 1)), code_label(JumpLabel))
    ->
        map.search(Sdprocmap, JumpLabel, BetweenJump),
        is_sdproceed_next(Instrs2, BetweenFall),
        filter_out_r1(BetweenJump, yes(llconst_true), BetweenTrue0),
        filter_out_livevals(BetweenTrue0, Between),
        filter_out_r1(BetweenFall, yes(llconst_false), BetweenFalse0),
        filter_out_livevals(BetweenFalse0, Between)
    ;
        Uinstr1 = if_val(unop(logical_not, lval(reg(reg_r, 1))),
            code_label(JumpLabel))
    ->
        map.search(Sdprocmap, JumpLabel, BetweenJump),
        is_sdproceed_next(Instrs2, BetweenFall),
        filter_out_r1(BetweenJump, yes(llconst_false), BetweenFalse0),
        filter_out_livevals(BetweenFalse0, Between),
        filter_out_r1(BetweenFall, yes(llconst_true), BetweenTrue0),
        filter_out_livevals(BetweenTrue0, Between)
    ;
        fail
    ).

filter_out_r1([], no, []).
filter_out_r1([Instr0 | Instrs0], Success, Instrs) :-
    filter_out_r1(Instrs0, Success0, Instrs1),
    ( Instr0 = llds_instr(assign(reg(reg_r, 1), const(Success1)), _) ->
        Instrs = Instrs1,
        Success = yes(Success1)
    ;
        Instrs = [Instr0 | Instrs1],
        Success = Success0
    ).

straight_alternative(Instrs0, Between, After) :-
    straight_alternative_2(Instrs0, [], BetweenRev, After),
    list.reverse(BetweenRev, Between).

:- pred straight_alternative_2(list(instruction)::in, list(instruction)::in,
    list(instruction)::out, list(instruction)::out) is semidet.

straight_alternative_2([Instr0 | Instrs0], !Between, After) :-
    Instr0 = llds_instr(Uinstr0, _),
    (
        Uinstr0 = label(_)
    ->
        fail
    ;
        Uinstr0 = goto(do_succeed(no))
    ->
        After = Instrs0
    ;
        (
            can_instr_branch_away(Uinstr0) = no,
            touches_nondet_ctrl_instr(Uinstr0) = no
        ;
            Uinstr0 = if_val(_, CodeAddr),
            ( CodeAddr = do_fail ; CodeAddr = do_redo )
        )
    ->
        !:Between = [Instr0 | !.Between],
        straight_alternative_2(Instrs0, !Between, After)
    ;
        fail
    ).

no_stack_straight_line(Instrs0, StraightLine, Instrs) :-
    no_stack_straight_line_2(Instrs0, [], RevStraightLine, Instrs),
    list.reverse(RevStraightLine, StraightLine).

:- pred no_stack_straight_line_2(list(instruction)::in, list(instruction)::in,
    list(instruction)::out, list(instruction)::out) is det.

no_stack_straight_line_2([], !RevStraightLine, []).
no_stack_straight_line_2([Instr0 | Instrs0], !RevStraightLine, Instrs) :-
    Instr0 = llds_instr(Uinstr, _),
    (
        (
            Uinstr = comment(_)
        ;
            Uinstr = livevals(_)
        ;
            Uinstr = assign(Lval, Rval),
            lval_refers_stackvars(Lval) = no,
            rval_refers_stackvars(Rval) = no
        )
    ->
        !:RevStraightLine = [Instr0 | !.RevStraightLine],
        no_stack_straight_line_2(Instrs0, !RevStraightLine, Instrs)
    ;
        Instrs = [Instr0 | Instrs0]
    ).

may_replace_succeed_with_succeed_discard(Instrs0, UntilSucceed, SucceedComment,
        Remain) :-
    may_replace_succeed_with_succeed_discard_2(Instrs0, [], RevUntilSucceed,
        SucceedComment, Remain),
    list.reverse(RevUntilSucceed, UntilSucceed).

:- pred may_replace_succeed_with_succeed_discard_2(list(instruction)::in,
    list(instruction)::in, list(instruction)::out, string::out,
    list(instruction)::out) is semidet.

may_replace_succeed_with_succeed_discard_2([Instr0 | Instrs0],
        !RevUntilSucceed, SucceedComment, Remain) :-
    Instr0 = llds_instr(Uinstr, Comment),
    (
        Uinstr = goto(do_succeed(yes))
    ->
        SucceedComment = Comment,
        Remain = Instrs0
    ;
        (
            Uinstr = assign(Lval, Rval),
            lval_refers_stackvars(Lval) = no,
            rval_refers_stackvars(Rval) = no
        ;
            ( Uinstr = comment(_)
            ; Uinstr = livevals(_)
            ; Uinstr = if_val(_, _)
            ; Uinstr = incr_hp(_, _, _, _, _, _)
            ; Uinstr = mark_hp(_)
            ; Uinstr = restore_hp(_)
            ; Uinstr = free_heap(_)
            ; Uinstr = store_ticket(_)
            ; Uinstr = store_ticket(_)
            ; Uinstr = reset_ticket(_, _)
            ; Uinstr = prune_ticket
            ; Uinstr = discard_ticket
            ; Uinstr = mark_ticket_stack(_)
            ; Uinstr = prune_tickets_to(_)
            )
        )
    ->
        !:RevUntilSucceed = [Instr0 | !.RevUntilSucceed],
        may_replace_succeed_with_succeed_discard_2(Instrs0, !RevUntilSucceed,
            SucceedComment, Remain)
    ;
        fail
    ).

lval_refers_stackvars(reg(_, _)) = no.
lval_refers_stackvars(stackvar(_)) = yes.
lval_refers_stackvars(parent_stackvar(_)) = yes.
lval_refers_stackvars(framevar(_)) = yes.
lval_refers_stackvars(succip) = no.
lval_refers_stackvars(maxfr) = no.
lval_refers_stackvars(curfr) = no.
lval_refers_stackvars(succfr_slot(_)) = yes.
lval_refers_stackvars(prevfr_slot(_)) = yes.
lval_refers_stackvars(redofr_slot(_)) = yes.
lval_refers_stackvars(redoip_slot(_)) = yes.
lval_refers_stackvars(succip_slot(_)) = yes.
lval_refers_stackvars(hp) = no.
lval_refers_stackvars(sp) = no.
lval_refers_stackvars(parent_sp) = no.
lval_refers_stackvars(field(_, Rval, FieldNum)) =
    bool.or(
        rval_refers_stackvars(Rval),
        rval_refers_stackvars(FieldNum)).
lval_refers_stackvars(lvar(_)) = _ :-
    unexpected(this_file, "found lvar in lval_refers_stackvars").
lval_refers_stackvars(temp(_, _)) = no.
lval_refers_stackvars(mem_ref(Rval)) =
    rval_refers_stackvars(Rval).
lval_refers_stackvars(global_var_ref(_)) = no.

:- func mem_ref_refers_stackvars(mem_ref) = bool.

mem_ref_refers_stackvars(stackvar_ref(_)) = yes.
mem_ref_refers_stackvars(framevar_ref(_)) = yes.
mem_ref_refers_stackvars(heap_ref(Rval1, _, Rval2)) =
    bool.or(rval_refers_stackvars(Rval1), rval_refers_stackvars(Rval2)).

rval_refers_stackvars(lval(Lval)) =
    lval_refers_stackvars(Lval).
rval_refers_stackvars(var(_)) = _ :-
    unexpected(this_file, "found var in rval_refers_stackvars").
rval_refers_stackvars(mkword(_, Rval)) =
    rval_refers_stackvars(Rval).
rval_refers_stackvars(const(_)) = no.
rval_refers_stackvars(unop(_, Rval)) =
    rval_refers_stackvars(Rval).
rval_refers_stackvars(binop(_, Rval1, Rval2)) =
    bool.or(rval_refers_stackvars(Rval1), rval_refers_stackvars(Rval2)).
rval_refers_stackvars(mem_addr(MemRef)) =
    mem_ref_refers_stackvars(MemRef).

% XXX probably unused
rvals_refer_stackvars([]) = no.
rvals_refer_stackvars([MaybeRval | Tail]) =
    (
        (
            MaybeRval = no
        ;
            MaybeRval = yes(Rval),
            rval_refers_stackvars(Rval) = no
        )
    ->
        rvals_refer_stackvars(Tail)
    ;
        yes
    ).

:- func code_addr_refers_to_stack(code_addr) = bool.

code_addr_refers_to_stack(code_label(_)) = no.
code_addr_refers_to_stack(code_imported_proc(_)) = no.
code_addr_refers_to_stack(code_succip) = no.
code_addr_refers_to_stack(do_succeed(_)) = yes.
code_addr_refers_to_stack(do_redo) = yes.
code_addr_refers_to_stack(do_fail) = yes.
code_addr_refers_to_stack(do_trace_redo_fail_shallow) = yes.
code_addr_refers_to_stack(do_trace_redo_fail_deep) = yes.
code_addr_refers_to_stack(do_call_closure(_)) = no.
code_addr_refers_to_stack(do_call_class_method(_)) = no.
code_addr_refers_to_stack(do_not_reached) = no.

no_stackvars_til_decr_sp([Instr0 | Instrs0], FrameSize, Between, Remain) :-
    Instr0 = llds_instr(Uinstr0, _),
    (
        Uinstr0 = comment(_),
        no_stackvars_til_decr_sp(Instrs0, FrameSize, Between0, Remain),
        Between = [Instr0 | Between0]
    ;
        Uinstr0 = livevals(_),
        no_stackvars_til_decr_sp(Instrs0, FrameSize, Between0, Remain),
        Between = [Instr0 | Between0]
    ;
        Uinstr0 = assign(Lval, Rval),
        (
            Lval = stackvar(_),
            rval_refers_stackvars(Rval) = no
        ->
            no_stackvars_til_decr_sp(Instrs0, FrameSize, Between, Remain)
        ;
            Lval = succip,
            Rval = lval(stackvar(FrameSize)),
            skip_comments(Instrs0, Instrs1),
            Instrs1 = [llds_instr(decr_sp(FrameSize), _) | Instrs2]
        ->
            Between = [],
            Remain = Instrs2
        ;
            lval_refers_stackvars(Lval) = no,
            rval_refers_stackvars(Rval) = no,
            no_stackvars_til_decr_sp(Instrs0, FrameSize, Between0, Remain),
            Between = [Instr0 | Between0]
        )
    ;
        Uinstr0 = incr_hp(Lval, _, _, Rval, _, _),
        lval_refers_stackvars(Lval) = no,
        rval_refers_stackvars(Rval) = no,
        no_stackvars_til_decr_sp(Instrs0, FrameSize, Between0, Remain),
        Between = [Instr0 | Between0]
    ;
        Uinstr0 = decr_sp(FrameSize),
        Between = [],
        Remain = Instrs0
    ).

block_refers_to_stack([]) = no.
block_refers_to_stack([Instr | Instrs]) = Refers :-
    instr_refers_to_stack(Instr) = InstrRefers,
    (
        InstrRefers = yes,
        Refers = yes
    ;
        InstrRefers = no,
        Instr = llds_instr(Uinstr, _),
        CanFallThrough = can_instr_fall_through(Uinstr),
        (
            CanFallThrough = yes,
            Refers = block_refers_to_stack(Instrs)
        ;
            CanFallThrough = no,
            Refers = no
        )
    ).

instr_refers_to_stack(llds_instr(Uinstr, _)) = Refers :-
    (
        ( Uinstr = comment(_)
        ; Uinstr = livevals(_)
        ; Uinstr = label(_)
        ; Uinstr = arbitrary_c_code(_, _, _)
        ; Uinstr = discard_ticket
        ; Uinstr = prune_ticket
        ),
        Refers = no
    ;
        Uinstr = block(_, _, BlockInstrs),
        Refers = block_refers_to_stack(BlockInstrs)
    ;
        Uinstr = assign(Lval, Rval),
        Refers = bool.or(
            lval_refers_stackvars(Lval),
            rval_refers_stackvars(Rval))
    ;
        Uinstr = llcall(_, _, _, _, _, _),
        Refers = yes
    ;
        Uinstr = mkframe(_, _),
        Refers = yes
    ;
        Uinstr = goto(CodeAddr),
        Refers = code_addr_refers_to_stack(CodeAddr)
    ;
        Uinstr = computed_goto(Rval, _Labels),
        Refers = rval_refers_stackvars(Rval)
    ;
        Uinstr = if_val(Rval, CodeAddr),
        Refers = bool.or(
            rval_refers_stackvars(Rval),
            code_addr_refers_to_stack(CodeAddr))
    ;
        Uinstr = save_maxfr(Lval),
        Refers = lval_refers_stackvars(Lval)
    ;
        Uinstr = restore_maxfr(Lval),
        Refers = lval_refers_stackvars(Lval)
    ;
        Uinstr = incr_hp(Lval, _, _, Rval, _, _),
        Refers = bool.or(
            lval_refers_stackvars(Lval),
            rval_refers_stackvars(Rval))
    ;
        Uinstr = mark_hp(Lval),
        Refers = lval_refers_stackvars(Lval)
    ;
        Uinstr = restore_hp(Rval),
        Refers = rval_refers_stackvars(Rval)
    ;
        Uinstr = free_heap(Rval),
        Refers = rval_refers_stackvars(Rval)
    ;
        Uinstr = store_ticket(Lval),
        Refers = lval_refers_stackvars(Lval)
    ;
        Uinstr = reset_ticket(Rval, _Reason),
        Refers = rval_refers_stackvars(Rval)
    ;
        Uinstr = mark_ticket_stack(Lval),
        Refers = lval_refers_stackvars(Lval)
    ;
        Uinstr = prune_tickets_to(Rval),
        Refers = rval_refers_stackvars(Rval)
    ;
        Uinstr = incr_sp(_, _, _),
        Refers = yes
    ;
        Uinstr = decr_sp(_),
        Refers = yes
    ;
        Uinstr = decr_sp_and_return(_),
        Refers = yes
    ;
        Uinstr = foreign_proc_code(_, Components, _, _, _, _, _, _, _),
        Refers = bool.or_list(list.map(foreign_proc_component_refers_stackvars,
            Components))
    ;
        Uinstr = init_sync_term(Lval, _),
        Refers = lval_refers_stackvars(Lval)
    ;
        Uinstr = fork(_),
        Refers = yes
    ;
        Uinstr = join_and_continue(Lval, _),
        Refers = lval_refers_stackvars(Lval)
    ).

:- func foreign_proc_component_refers_stackvars(foreign_proc_component) = bool.

foreign_proc_component_refers_stackvars(Component) = Refers :-
    (
        Component = foreign_proc_inputs(Inputs),
        bool.or_list(list.map(foreign_proc_input_refers_stackvars, Inputs),
            Refers)
    ;
        Component = foreign_proc_outputs(Outputs),
        bool.or_list(list.map(foreign_proc_output_refers_stackvars, Outputs),
            Refers)
    ;
        ( Component = foreign_proc_user_code(_, _, _)
        ; Component = foreign_proc_raw_code(_, _, _, _)
        ; Component = foreign_proc_fail_to(_)
        ; Component = foreign_proc_noop
        ),
        Refers = no
    ).

:- func foreign_proc_input_refers_stackvars(foreign_proc_input) = bool.

foreign_proc_input_refers_stackvars(Input) = Refers :-
    Input = foreign_proc_input(_Name, _Type, IsDummy, _OrigType, Rval,
        _MaybeForeign, _BoxPolicy),
    (
        IsDummy = yes,
        Refers = no
    ;
        IsDummy = no,
        Refers = rval_refers_stackvars(Rval)
    ).

:- func foreign_proc_output_refers_stackvars(foreign_proc_output) = bool.

foreign_proc_output_refers_stackvars(Input) = Refers :-
    Input = foreign_proc_output(Lval, _Type, IsDummy, _OrigType, _Name,
        _MaybeForeign, _BoxPolicy),
    (
        IsDummy = yes,
        Refers = no
    ;
        IsDummy = no,
        Refers = lval_refers_stackvars(Lval)
    ).

filter_out_labels([], []).
filter_out_labels([Instr0 | Instrs0], Instrs) :-
    filter_out_labels(Instrs0, Instrs1),
    ( Instr0 = llds_instr(label(_), _) ->
        Instrs = Instrs1
    ;
        Instrs = [Instr0 | Instrs1]
    ).

filter_out_bad_livevals([], []).
filter_out_bad_livevals([Instr0 | Instrs0], Instrs) :-
    filter_out_bad_livevals(Instrs0, Instrs1),
    (
        Instr0 = llds_instr(livevals(_), _),
        skip_comments(Instrs1, Instrs2),
        Instrs2 = [llds_instr(Uinstr2, _) | _],
        can_use_livevals(Uinstr2, no)
    ->
        Instrs = Instrs1
    ;
        Instrs = [Instr0 | Instrs1]
    ).

filter_out_livevals([], []).
filter_out_livevals([Instr0 | Instrs0], Instrs) :-
    filter_out_livevals(Instrs0, Instrs1),
    ( Instr0 = llds_instr(livevals(_), _) ->
        Instrs = Instrs1
    ;
        Instrs = [Instr0 | Instrs1]
    ).

filter_in_livevals([], []).
filter_in_livevals([Instr0 | Instrs0], Instrs) :-
    filter_in_livevals(Instrs0, Instrs1),
    ( Instr0 = llds_instr(livevals(_), _) ->
        Instrs = [Instr0 | Instrs1]
    ;
        Instrs = Instrs1
    ).

    % We recognize only a subset of all constant conditions.
    % The time to extend this predicate is when the rest of the compiler
    % generates more complicated constant conditions.
is_const_condition(const(Const), Taken) :-
    ( Const = llconst_true ->
        Taken = yes
    ; Const = llconst_false ->
        Taken = no
    ;
        unexpected(this_file, "non-boolean constant as if-then-else condition")
    ).
is_const_condition(unop(Op, Rval1), Taken) :-
    Op = logical_not,
    is_const_condition(Rval1, Taken1),
    bool.not(Taken1, Taken).
is_const_condition(binop(Op, Rval1, Rval2), Taken) :-
    Op = eq,
    Rval1 = Rval2,
    Taken = yes.

can_instr_branch_away(comment(_)) = no.
can_instr_branch_away(livevals(_)) = no.
can_instr_branch_away(block(_, _, _)) = yes.
can_instr_branch_away(assign(_, _)) = no.
can_instr_branch_away(llcall(_, _, _, _, _, _)) = yes.
can_instr_branch_away(mkframe(_, _)) = no.
can_instr_branch_away(label(_)) = no.
can_instr_branch_away(goto(_)) = yes.
can_instr_branch_away(computed_goto(_, _)) = yes.
can_instr_branch_away(arbitrary_c_code(_, _, _)) = no.
can_instr_branch_away(if_val(_, _)) = yes.
can_instr_branch_away(save_maxfr(_)) = no.
can_instr_branch_away(restore_maxfr(_)) = no.
can_instr_branch_away(incr_hp(_, _, _, _, _, _)) = no.
can_instr_branch_away(mark_hp(_)) = no.
can_instr_branch_away(restore_hp(_)) = no.
can_instr_branch_away(free_heap(_)) = no.
can_instr_branch_away(store_ticket(_)) = no.
can_instr_branch_away(reset_ticket(_, _)) = no.
can_instr_branch_away(discard_ticket) = no.
can_instr_branch_away(prune_ticket) = no.
can_instr_branch_away(mark_ticket_stack(_)) = no.
can_instr_branch_away(prune_tickets_to(_)) = no.
can_instr_branch_away(incr_sp(_, _, _)) = no.
can_instr_branch_away(decr_sp(_)) = no.
can_instr_branch_away(decr_sp_and_return(_)) = yes.
can_instr_branch_away(init_sync_term(_, _)) = no.
can_instr_branch_away(fork(_)) = no.
can_instr_branch_away(join_and_continue(_, _)) = yes.
can_instr_branch_away(foreign_proc_code(_, Comps, _, _, _, _, _, _, _)) =
    can_components_branch_away(Comps).

:- func can_components_branch_away(list(foreign_proc_component)) = bool.

can_components_branch_away([]) = no.
can_components_branch_away([Component | Components]) = !:BranchAway :-
    !:BranchAway = can_component_branch_away(Component),
    (
        !.BranchAway = yes
    ;
        !.BranchAway = no,
        !:BranchAway = can_components_branch_away(Components)
    ).

    % The input and output components get expanded to straight line code.
    % Some of the raw_code components we generate for nondet pragma C codes
    % invoke succeed(), which definitely does branch away.
    % Also the raw_code components for semidet pragma C codes can
    % branch to a label on failure.
    % User-written C code cannot branch away because users do not know
    % how to do that. (They can call other functions, but those functions
    % will return, so control will still go to the instruction following
    % this one. We the developers could write C code that branched away,
    % but we are careful to preserve a declarative interface, and that
    % is incompatible with branching away.)
    %
:- func can_component_branch_away(foreign_proc_component) = bool.

can_component_branch_away(foreign_proc_inputs(_)) = no.
can_component_branch_away(foreign_proc_outputs(_)) = no.
can_component_branch_away(foreign_proc_raw_code(CanBranchAway, _, _, _))
        = CanBranchAwayBool :-
    (
        CanBranchAway = can_branch_away,
        CanBranchAwayBool = yes
    ;
        CanBranchAway = cannot_branch_away,
        CanBranchAwayBool = no
    ).
can_component_branch_away(foreign_proc_user_code(_, _, _)) = no.
can_component_branch_away(foreign_proc_fail_to(_)) = yes.
can_component_branch_away(foreign_proc_noop) = no.

can_instr_fall_through(comment(_)) = yes.
can_instr_fall_through(livevals(_)) = yes.
can_instr_fall_through(block(_, _, Instrs)) = FallThrough :-
    can_block_fall_through(Instrs, FallThrough).
can_instr_fall_through(assign(_, _)) = yes.
can_instr_fall_through(llcall(_, _, _, _, _, _)) = no.
can_instr_fall_through(mkframe(_, _)) = yes.
can_instr_fall_through(label(_)) = yes.
can_instr_fall_through(goto(_)) = no.
can_instr_fall_through(computed_goto(_, _)) = no.
can_instr_fall_through(arbitrary_c_code(_, _, _)) = yes.
can_instr_fall_through(if_val(_, _)) = yes.
can_instr_fall_through(save_maxfr(_)) = yes.
can_instr_fall_through(restore_maxfr(_)) = yes.
can_instr_fall_through(incr_hp(_, _, _, _, _, _)) = yes.
can_instr_fall_through(mark_hp(_)) = yes.
can_instr_fall_through(restore_hp(_)) = yes.
can_instr_fall_through(free_heap(_)) = yes.
can_instr_fall_through(store_ticket(_)) = yes.
can_instr_fall_through(reset_ticket(_, _)) = yes.
can_instr_fall_through(discard_ticket) = yes.
can_instr_fall_through(prune_ticket) = yes.
can_instr_fall_through(mark_ticket_stack(_)) = yes.
can_instr_fall_through(prune_tickets_to(_)) = yes.
can_instr_fall_through(incr_sp(_, _, _)) = yes.
can_instr_fall_through(decr_sp(_)) = yes.
can_instr_fall_through(decr_sp_and_return(_)) = no.
can_instr_fall_through(init_sync_term(_, _)) = yes.
can_instr_fall_through(fork(_)) = yes.
can_instr_fall_through(join_and_continue(_, _)) = no.
can_instr_fall_through(foreign_proc_code(_, _, _, _, _, _, _, _, _)) = yes.

    % Check whether an instruction sequence can possibly fall through
    % to the next instruction without using its label.
    %
:- pred can_block_fall_through(list(instruction)::in, bool::out) is det.

can_block_fall_through([], yes).
can_block_fall_through([llds_instr(Uinstr, _) | Instrs], FallThrough) :-
    ( can_instr_fall_through(Uinstr) = no ->
        FallThrough = no
    ;
        can_block_fall_through(Instrs, FallThrough)
    ).

:- pred can_use_livevals(instr::in, bool::out) is det.

can_use_livevals(comment(_), no).
can_use_livevals(livevals(_), no).
can_use_livevals(block(_, _, _), no).
can_use_livevals(assign(_, _), no).
can_use_livevals(llcall(_, _, _, _, _, _), yes).
can_use_livevals(mkframe(_, _), no).
can_use_livevals(label(_), no).
can_use_livevals(goto(_), yes).
can_use_livevals(computed_goto(_, _), no).
can_use_livevals(arbitrary_c_code(_, _, _), no).
can_use_livevals(if_val(_, _), yes).
can_use_livevals(save_maxfr(_), no).
can_use_livevals(restore_maxfr(_), no).
can_use_livevals(incr_hp(_, _, _, _, _, _), no).
can_use_livevals(mark_hp(_), no).
can_use_livevals(restore_hp(_), no).
can_use_livevals(free_heap(_), no).
can_use_livevals(store_ticket(_), no).
can_use_livevals(reset_ticket(_, _), no).
can_use_livevals(discard_ticket, no).
can_use_livevals(prune_ticket, no).
can_use_livevals(mark_ticket_stack(_), no).
can_use_livevals(prune_tickets_to(_), no).
can_use_livevals(incr_sp(_, _, _), no).
can_use_livevals(decr_sp(_), no).
can_use_livevals(decr_sp_and_return(_), yes).
can_use_livevals(init_sync_term(_, _), no).
can_use_livevals(fork(_), no).
can_use_livevals(join_and_continue(_, _), no).
can_use_livevals(foreign_proc_code(_, _, _, _, _, _, _, _, _), no).

instr_labels(Instr, Labels, CodeAddrs) :-
    instr_labels_2(Instr, Labels0, CodeAddrs1),
    instr_rvals_and_lvals(Instr, Rvals, Lvals),
    exprn_aux.rval_list_addrs(Rvals, CodeAddrs2, _),
    exprn_aux.lval_list_addrs(Lvals, CodeAddrs3, _),
    list.append(CodeAddrs1, CodeAddrs2, CodeAddrs12),
    list.append(CodeAddrs12, CodeAddrs3, CodeAddrs),
    find_label_code_addrs(CodeAddrs, Labels0, Labels).

    % Find out which code addresses are also labels.
    %
:- pred find_label_code_addrs(list(code_addr)::in,
    list(label)::in, list(label)::out) is det.

find_label_code_addrs([], Labels, Labels).
find_label_code_addrs([CodeAddr | Rest], Labels0, Labels) :-
    ( CodeAddr = code_label(Label) ->
        Labels1 = [Label | Labels0]
    ;
        Labels1 = Labels0
    ),
    find_label_code_addrs(Rest, Labels1, Labels).

    % Determine all the labels and code_addresses that are directly referenced
    % by an instruction (not counting ones referenced indirectly via rvals or
    % lvals).
    %
:- pred instr_labels_2(instr::in, list(label)::out, list(code_addr)::out)
    is det.

instr_labels_2(comment(_), [], []).
instr_labels_2(livevals(_), [], []).
instr_labels_2(block(_, _, Instrs), Labels, CodeAddrs) :-
    instr_list_labels(Instrs, Labels, CodeAddrs).
instr_labels_2(assign(_,_), [], []).
instr_labels_2(llcall(Target, Ret, _, _, _, _), [], [Target, Ret]).
instr_labels_2(mkframe(_, yes(Addr)), [], [Addr]).
instr_labels_2(mkframe(_, no), [], []).
instr_labels_2(label(_), [], []).
instr_labels_2(goto(Addr), [], [Addr]).
instr_labels_2(computed_goto(_, Labels), Labels, []).
instr_labels_2(arbitrary_c_code(_, _, _), [], []).
instr_labels_2(if_val(_, Addr), [], [Addr]).
instr_labels_2(save_maxfr(_), [], []).
instr_labels_2(restore_maxfr(_), [], []).
instr_labels_2(incr_hp(_, _, _, _, _, _), [], []).
instr_labels_2(mark_hp(_), [], []).
instr_labels_2(restore_hp(_), [], []).
instr_labels_2(free_heap(_), [], []).
instr_labels_2(store_ticket(_), [], []).
instr_labels_2(reset_ticket(_, _), [], []).
instr_labels_2(discard_ticket, [], []).
instr_labels_2(prune_ticket, [], []).
instr_labels_2(mark_ticket_stack(_), [], []).
instr_labels_2(prune_tickets_to(_), [], []).
instr_labels_2(incr_sp(_, _, _), [], []).
instr_labels_2(decr_sp(_), [], []).
instr_labels_2(decr_sp_and_return(_), [], []) :-
    % XXX decr_sp_and_return does refer to a code addr, but the code addr it
    % refers to is the original succip (now in a stack slot), which is not
    % necessarily the current succip. However, we introduce decr_sp_and_return
    % so late that this predicate should never be invoked on such instructions.
    unexpected(this_file, "instr_labels_2: decr_sp_and_return").
instr_labels_2(init_sync_term(_, _), [], []).
instr_labels_2(fork(Child), [Child], []).
instr_labels_2(join_and_continue(_, Label), [Label], []).
instr_labels_2(foreign_proc_code(_, _, _, MaybeFixLabel, MaybeLayoutLabel,
        MaybeOnlyLayoutLabel, MaybeSubLabel, _, _), Labels, []) :-
    foreign_proc_labels(MaybeFixLabel, MaybeLayoutLabel,
        MaybeOnlyLayoutLabel, MaybeSubLabel, Labels).

possible_targets(comment(_), [], []).
possible_targets(livevals(_), [], []).
possible_targets(block(_, _, _), _, _) :-
    unexpected(this_file, "block in possible_targets").
possible_targets(assign(_, _), [], []).
possible_targets(llcall(_, Return, _, _, _, _), Labels, CodeAddrs) :-
    ( Return = code_label(ReturnLabel) ->
        Labels = [ReturnLabel],
        CodeAddrs = []
    ;
        Labels = [],
        CodeAddrs = [Return]
    ).
possible_targets(mkframe(_, _), [], []).
possible_targets(label(_), [], []).
possible_targets(goto(CodeAddr), Labels, CodeAddrs) :-
    ( CodeAddr = code_label(Label) ->
        Labels = [Label],
        CodeAddrs = []
    ;
        Labels = [],
        CodeAddrs = [CodeAddr]
    ).
possible_targets(computed_goto(_, Labels), Labels, []).
possible_targets(arbitrary_c_code(_, _, _), [], []).
possible_targets(if_val(_, CodeAddr), Labels, CodeAddrs) :-
    ( CodeAddr = code_label(Label) ->
        Labels = [Label],
        CodeAddrs = []
    ;
        Labels = [],
        CodeAddrs = [CodeAddr]
    ).
possible_targets(save_maxfr(_), [], []).
possible_targets(restore_maxfr(_), [], []).
possible_targets(incr_hp(_, _, _, _, _, _), [], []).
possible_targets(mark_hp(_), [], []).
possible_targets(restore_hp(_), [], []).
possible_targets(free_heap(_), [], []).
possible_targets(store_ticket(_), [], []).
possible_targets(reset_ticket(_, _), [], []).
possible_targets(discard_ticket, [], []).
possible_targets(prune_ticket, [], []).
possible_targets(mark_ticket_stack(_), [], []).
possible_targets(prune_tickets_to(_), [], []).
possible_targets(incr_sp(_, _, _), [], []).
possible_targets(decr_sp(_), [], []).
possible_targets(decr_sp_and_return(_), [], []) :-
    % See the comment in instr_labels_2.
    unexpected(this_file, "possible_targets: decr_sp_and_return").
possible_targets(init_sync_term(_, _), [], []).
possible_targets(fork(_Child), [], []).
possible_targets(join_and_continue(_, L), [L], []).
possible_targets(foreign_proc_code(_, _, _, MaybeFixedLabel, MaybeLayoutLabel,
        _, MaybeSubLabel, _, _), Labels, []) :-
    foreign_proc_labels(MaybeFixedLabel, MaybeLayoutLabel,
        no, MaybeSubLabel, Labels).

:- pred foreign_proc_labels(maybe(label)::in, maybe(label)::in,
    maybe(label)::in, maybe(label)::in, list(label)::out) is det.

foreign_proc_labels(MaybeFixedLabel, MaybeLayoutLabel,
        MaybeOnlyLayoutLabel, MaybeSubLabel, !:Labels) :-
    !:Labels = [],
    (
        MaybeFixedLabel = yes(FixedLabel),
        !:Labels = [FixedLabel | !.Labels]
    ;
        MaybeFixedLabel = no
    ),
    (
        MaybeLayoutLabel = yes(LayoutLabel),
        !:Labels = [LayoutLabel | !.Labels]
    ;
        MaybeLayoutLabel = no
    ),
    (
        MaybeOnlyLayoutLabel = yes(OnlyLayoutLabel),
        !:Labels = [OnlyLayoutLabel | !.Labels]
    ;
        MaybeOnlyLayoutLabel = no
    ),
    (
        MaybeSubLabel = yes(SubLabel),
        !:Labels = [SubLabel | !.Labels]
    ;
        MaybeSubLabel = no
    ).

    % Determine all the rvals and lvals referenced by an instruction.
    %
:- pred instr_rvals_and_lvals(instr::in, list(rval)::out, list(lval)::out)
    is det.

instr_rvals_and_lvals(comment(_), [], []).
instr_rvals_and_lvals(livevals(_), [], []).
instr_rvals_and_lvals(block(_, _, Instrs), Labels, CodeAddrs) :-
    instr_list_rvals_and_lvals(Instrs, Labels, CodeAddrs).
instr_rvals_and_lvals(assign(Lval,Rval), [Rval], [Lval]).
instr_rvals_and_lvals(llcall(_, _, _, _, _, _), [], []).
instr_rvals_and_lvals(mkframe(_, _), [], []).
instr_rvals_and_lvals(label(_), [], []).
instr_rvals_and_lvals(goto(_), [], []).
instr_rvals_and_lvals(computed_goto(Rval, _), [Rval], []).
instr_rvals_and_lvals(arbitrary_c_code(_, _, _), [], []).
instr_rvals_and_lvals(if_val(Rval, _), [Rval], []).
instr_rvals_and_lvals(save_maxfr(Lval), [], [Lval]).
instr_rvals_and_lvals(restore_maxfr(Lval), [], [Lval]).
instr_rvals_and_lvals(incr_hp(Lval, _, _, Rval, _, _), [Rval], [Lval]).
instr_rvals_and_lvals(mark_hp(Lval), [], [Lval]).
instr_rvals_and_lvals(restore_hp(Rval), [Rval], []).
instr_rvals_and_lvals(free_heap(Rval), [Rval], []).
instr_rvals_and_lvals(store_ticket(Lval), [], [Lval]).
instr_rvals_and_lvals(reset_ticket(Rval, _Reason), [Rval], []).
instr_rvals_and_lvals(discard_ticket, [], []).
instr_rvals_and_lvals(prune_ticket, [], []).
instr_rvals_and_lvals(mark_ticket_stack(Lval), [], [Lval]).
instr_rvals_and_lvals(prune_tickets_to(Rval), [Rval], []).
instr_rvals_and_lvals(incr_sp(_, _, _), [], []).
instr_rvals_and_lvals(decr_sp(_), [], []).
instr_rvals_and_lvals(decr_sp_and_return(_), [], []).
instr_rvals_and_lvals(init_sync_term(Lval, _), [], [Lval]).
instr_rvals_and_lvals(fork(_), [], []).
instr_rvals_and_lvals(join_and_continue(Lval, _), [], [Lval]).
instr_rvals_and_lvals(foreign_proc_code(_, Cs, _, _, _, _, _, _, _),
        Rvals, Lvals) :-
    foreign_proc_components_get_rvals_and_lvals(Cs, Rvals, Lvals).

    % Extract the rvals and lvals from the foreign_proc_components.
    %
:- pred foreign_proc_components_get_rvals_and_lvals(
    list(foreign_proc_component)::in,
    list(rval)::out, list(lval)::out) is det.

foreign_proc_components_get_rvals_and_lvals([], [], []).
foreign_proc_components_get_rvals_and_lvals([Comp | Comps], !:Rvals, !:Lvals) :-
    foreign_proc_components_get_rvals_and_lvals(Comps, !:Rvals, !:Lvals),
    foreign_proc_component_get_rvals_and_lvals(Comp, !Rvals, !Lvals).

    % Extract the rvals and lvals from the foreign_proc_component
    % and add them to the list.
    %
:- pred foreign_proc_component_get_rvals_and_lvals(foreign_proc_component::in,
    list(rval)::in, list(rval)::out, list(lval)::in, list(lval)::out) is det.

foreign_proc_component_get_rvals_and_lvals(foreign_proc_inputs(Inputs),
        !Rvals, !Lvals) :-
    NewRvals = foreign_proc_inputs_get_rvals(Inputs),
    list.append(NewRvals, !Rvals).
foreign_proc_component_get_rvals_and_lvals(foreign_proc_outputs(Outputs),
        !Rvals, !Lvals) :-
    NewLvals = foreign_proc_outputs_get_lvals(Outputs),
    list.append(NewLvals, !Lvals).
foreign_proc_component_get_rvals_and_lvals(foreign_proc_user_code(_, _, _),
        !Rvals, !Lvals).
foreign_proc_component_get_rvals_and_lvals(foreign_proc_raw_code(_, _, _, _),
        !Rvals, !Lvals).
foreign_proc_component_get_rvals_and_lvals(foreign_proc_fail_to(_),
        !Rvals, !Lvals).
foreign_proc_component_get_rvals_and_lvals(foreign_proc_noop,
        !Rvals, !Lvals).

    % Extract the rvals from the foreign_proc_input.
    %
:- func foreign_proc_inputs_get_rvals(list(foreign_proc_input)) = list(rval).

foreign_proc_inputs_get_rvals([]) = [].
foreign_proc_inputs_get_rvals([Input | Inputs]) = [Rval | Rvals] :-
    Input = foreign_proc_input(_Name, _VarType, _IsDummy, _OrigType, Rval,
        _, _),
    Rvals = foreign_proc_inputs_get_rvals(Inputs).

    % Extract the lvals from the foreign_proc_output.
    %
:- func foreign_proc_outputs_get_lvals(list(foreign_proc_output)) = list(lval).

foreign_proc_outputs_get_lvals([]) = [].
foreign_proc_outputs_get_lvals([Output | Outputs]) = [Lval | Lvals] :-
    Output = foreign_proc_output(Lval, _VarType, _IsDummy, _OrigType,
        _Name, _, _),
    Lvals = foreign_proc_outputs_get_lvals(Outputs).

    % Determine all the rvals and lvals referenced by a list of instructions.
    %
:- pred instr_list_rvals_and_lvals(list(instruction)::in,
    list(rval)::out, list(lval)::out) is det.

instr_list_rvals_and_lvals([], [], []).
instr_list_rvals_and_lvals([llds_instr(Uinstr, _) | Instrs], Rvals, Lvals) :-
    instr_rvals_and_lvals(Uinstr, HeadRvals, HeadLvals),
    instr_list_rvals_and_lvals(Instrs, TailRvals, TailLvals),
    Rvals = HeadRvals ++ TailRvals,
    Lvals = HeadLvals ++ TailLvals.

instr_list_labels([], [], []).
instr_list_labels([llds_instr(Uinstr, _) | Instrs], Labels, CodeAddrs) :-
    instr_labels(Uinstr, HeadLabels, HeadCodeAddrs),
    instr_list_labels(Instrs, TailLabels, TailCodeAddrs),
    Labels = HeadLabels ++ TailLabels,
    CodeAddrs = HeadCodeAddrs ++ TailCodeAddrs.

livevals_addr(code_label(Label)) = Result :-
    (
        Label = internal_label(_, _),
        Result = no
    ;
        Label = entry_label(_, _),
        Result = yes
    ).
livevals_addr(code_imported_proc(_)) = yes.
livevals_addr(code_succip) = yes.
livevals_addr(do_succeed(_)) = yes.
livevals_addr(do_redo) = no.
livevals_addr(do_fail) = no.
livevals_addr(do_trace_redo_fail_shallow) = no.
livevals_addr(do_trace_redo_fail_deep) = no.
livevals_addr(do_call_closure(_)) = yes.
livevals_addr(do_call_class_method(_)) = yes.
livevals_addr(do_not_reached) = no.

count_temps_instr_list([], !R, !F).
count_temps_instr_list([llds_instr(Uinstr, _Comment) | Instrs], !R, !F) :-
    count_temps_instr(Uinstr, !R, !F),
    count_temps_instr_list(Instrs, !R, !F).

count_temps_instr(comment(_), !R, !F).
count_temps_instr(livevals(_), !R, !F).
count_temps_instr(block(_, _, _), !R, !F).
count_temps_instr(assign(Lval, Rval), !R, !F) :-
    count_temps_lval(Lval, !R, !F),
    count_temps_rval(Rval, !R, !F).
count_temps_instr(llcall(_, _, _, _, _, _), !R, !F).
count_temps_instr(mkframe(_, _), !R, !F).
count_temps_instr(label(_), !R, !F).
count_temps_instr(goto(_), !R, !F).
count_temps_instr(computed_goto(Rval, _), !R, !F) :-
    count_temps_rval(Rval, !R, !F).
count_temps_instr(if_val(Rval, _), !R, !F) :-
    count_temps_rval(Rval, !R, !F).
count_temps_instr(arbitrary_c_code(_, _, _), !R, !F).
count_temps_instr(save_maxfr(Lval), !R, !F) :-
    count_temps_lval(Lval, !R, !F).
count_temps_instr(restore_maxfr(Lval), !R, !F) :-
    count_temps_lval(Lval, !R, !F).
count_temps_instr(incr_hp(Lval, _, _, Rval, _, _), !R, !F) :-
    count_temps_lval(Lval, !R, !F),
    count_temps_rval(Rval, !R, !F).
count_temps_instr(mark_hp(Lval), !R, !F) :-
    count_temps_lval(Lval, !R, !F).
count_temps_instr(restore_hp(Rval), !R, !F) :-
    count_temps_rval(Rval, !R, !F).
count_temps_instr(free_heap(Rval), !R, !F) :-
    count_temps_rval(Rval, !R, !F).
count_temps_instr(store_ticket(Lval), !R, !F) :-
    count_temps_lval(Lval, !R, !F).
count_temps_instr(reset_ticket(Rval, _Reason), !R, !F) :-
    count_temps_rval(Rval, !R, !F).
count_temps_instr(discard_ticket, !R, !F).
count_temps_instr(prune_ticket, !R, !F).
count_temps_instr(mark_ticket_stack(Lval), !R, !F) :-
    count_temps_lval(Lval, !R, !F).
count_temps_instr(prune_tickets_to(Rval), !R, !F) :-
    count_temps_rval(Rval, !R, !F).
count_temps_instr(incr_sp(_, _, _), !R, !F).
count_temps_instr(decr_sp(_), !R, !F).
count_temps_instr(decr_sp_and_return(_), !R, !F).
count_temps_instr(init_sync_term(Lval, _), !R, !F) :-
    count_temps_lval(Lval, !R, !F).
count_temps_instr(fork(_), !R, !F).
count_temps_instr(join_and_continue(Lval, _), !R, !F) :-
    count_temps_lval(Lval, !R, !F).
count_temps_instr(foreign_proc_code(_, Comps, _, _, _, _, _, _, _), !R, !F) :-
    count_temps_components(Comps, !R, !F).

:- pred count_temps_components(list(foreign_proc_component)::in,
    int::in, int::out, int::in, int::out) is det.

count_temps_components([], !R, !F).
count_temps_components([Comp | Comps], !R, !F) :-
    count_temps_component(Comp, !R, !F),
    count_temps_components(Comps, !R, !F).

:- pred count_temps_component(foreign_proc_component::in,
    int::in, int::out, int::in, int::out) is det.

count_temps_component(Comp, !R, !F) :-
    (
        Comp = foreign_proc_inputs(Inputs),
        count_temps_inputs(Inputs, !R, !F)
    ;
        Comp = foreign_proc_outputs(Outputs),
        count_temps_outputs(Outputs, !R, !F)
    ;
        Comp = foreign_proc_user_code(_, _, _)
    ;
        Comp = foreign_proc_raw_code(_, _, _, _)
    ;
        Comp = foreign_proc_fail_to(_)
    ;
        Comp = foreign_proc_noop
    ).

:- pred count_temps_inputs(list(foreign_proc_input)::in,
    int::in, int::out, int::in, int::out) is det.

count_temps_inputs([], !R, !F).
count_temps_inputs([Input | Inputs], !R, !F) :-
    Input = foreign_proc_input(_VarName, _VarType, _IsDummy, _OrigType,
        ArgRval, _MaybeForeignType, _BoxPolicy),
    count_temps_rval(ArgRval, !R, !F),
    count_temps_inputs(Inputs, !R, !F).

:- pred count_temps_outputs(list(foreign_proc_output)::in,
    int::in, int::out, int::in, int::out) is det.

count_temps_outputs([], !R, !F).
count_temps_outputs([Output | Outputs], !R, !F) :-
    Output = foreign_proc_output(DestLval, _VarType, _IsDummy, _OrigType,
        _VarName, _MaybeForeignType, _BoxPolicy),
    count_temps_lval(DestLval, !R, !F),
    count_temps_outputs(Outputs, !R, !F).

:- pred count_temps_lval(lval::in, int::in, int::out, int::in, int::out)
    is det.

count_temps_lval(Lval, !R, !F) :-
    ( Lval = temp(Type, N) ->
        (
            Type = reg_r,
            int.max(N, !R)
        ;
            Type = reg_f,
            int.max(N, !F)
        )
    ; Lval = field(_, Rval, FieldNum) ->
        count_temps_rval(Rval, !R, !F),
        count_temps_rval(FieldNum, !R, !F)
    ;
        true
    ).

:- pred count_temps_rval(rval::in, int::in, int::out, int::in, int::out)
    is det.

% XXX We assume that we don't generate code
% that uses a temp var without defining it.
count_temps_rval(_, !R, !F).

format_label(internal_label(_, ProcLabel)) = format_proc_label(ProcLabel).
format_label(entry_label(_, ProcLabel)) = format_proc_label(ProcLabel).

format_proc_label(ordinary_proc_label(_Module, _PredOrFunc, _, Name,
        Arity, Mode)) =
    Name ++ "/" ++ int_to_string(Arity) ++ " mode " ++ int_to_string(Mode).
format_proc_label(special_proc_label(_Module, SpecialPredId, TypeModule,
        TypeName, TypeArity, Mode)) =
        PredName ++ "_" ++ TypeName ++ "/" ++ int_to_string(TypeArity)
            ++ " mode " ++ int_to_string(Mode) :-
    TypeCtor = type_ctor(qualified(TypeModule, TypeName), TypeArity),
    PredName = special_pred_name(SpecialPredId, TypeCtor).

has_both_incr_decr_sp(Instrs) :-
    has_both_incr_decr_sp_2(Instrs, no, yes, no, yes).

:- pred has_both_incr_decr_sp_2(list(instruction)::in,
    bool::in, bool::out, bool::in, bool::out) is det.

has_both_incr_decr_sp_2([], !HasIncr, !HasDecr).
has_both_incr_decr_sp_2([llds_instr(Uinstr, _) | Instrs],
        !HasIncr, !HasDecr) :-
    ( Uinstr = incr_sp(_, _, _) ->
        !:HasIncr = yes
    ;
        true
    ),
    ( Uinstr = decr_sp(_) ->
        !:HasDecr = yes
    ;
        true
    ),
    has_both_incr_decr_sp_2(Instrs, !HasIncr, !HasDecr).

touches_nondet_ctrl([]) = no.
touches_nondet_ctrl([llds_instr(Uinstr, _) | Instrs]) = !:Touch :-
    !:Touch = touches_nondet_ctrl_instr(Uinstr),
    (
        !.Touch = yes
    ;
        !.Touch = no,
        !:Touch = touches_nondet_ctrl(Instrs)
    ).

:- func touches_nondet_ctrl_instr(instr) = bool.

touches_nondet_ctrl_instr(Uinstr) = Touch :-
    (
        ( Uinstr = comment(_)
        ; Uinstr = livevals(_)
        ; Uinstr = label(_)
        ; Uinstr = free_heap(_)
        ; Uinstr = store_ticket(_)
        ; Uinstr = reset_ticket(_, _)
        ; Uinstr = prune_ticket
        ; Uinstr = discard_ticket
        ; Uinstr = prune_tickets_to(_)
        ; Uinstr = mark_ticket_stack(_)
        ; Uinstr = incr_sp(_, _, _)
        ; Uinstr = decr_sp(_)
        ; Uinstr = decr_sp_and_return(_)
        ),
        Touch = no
    ;
        ( Uinstr = mkframe(_, _)
        ; Uinstr = goto(_)
        ; Uinstr = computed_goto(_, _)
        ; Uinstr = llcall(_, _, _, _, _, _) % This is a safe approximation.
        ; Uinstr = if_val(_, _)
        ; Uinstr = arbitrary_c_code(_, _, _)
        ; Uinstr = save_maxfr(_)
        ; Uinstr = restore_maxfr(_)
        ; Uinstr = init_sync_term(_, _)     % This is a safe approximation.
        ; Uinstr = fork(_)                  % This is a safe approximation.
        ; Uinstr = join_and_continue(_, _)  % This is a safe approximation.
        ),
        Touch = yes
    ;
        Uinstr = block(_, _, _),
        % Blocks aren't introduced until after the last user of this predicate.
        unexpected(this_file, "touches_nondet_ctrl_instr: block")
    ;
        Uinstr = assign(Lval, Rval),
        TouchLval = touches_nondet_ctrl_lval(Lval),
        TouchRval = touches_nondet_ctrl_rval(Rval),
        bool.or(TouchLval, TouchRval, Touch)
    ;
        Uinstr = incr_hp(Lval, _, _, Rval, _, _),
        TouchLval = touches_nondet_ctrl_lval(Lval),
        TouchRval = touches_nondet_ctrl_rval(Rval),
        bool.or(TouchLval, TouchRval, Touch)
    ;
        Uinstr = mark_hp(Lval),
        Touch = touches_nondet_ctrl_lval(Lval)
    ;
        Uinstr = restore_hp(Rval),
        Touch = touches_nondet_ctrl_rval(Rval)
    ;
        Uinstr = foreign_proc_code(_, Components, _, _, _, _, _, _, _),
        Touch = touches_nondet_ctrl_components(Components)
    ).

:- func touches_nondet_ctrl_lval(lval) = bool.

touches_nondet_ctrl_lval(reg(_, _)) = no.
touches_nondet_ctrl_lval(stackvar(_)) = no.
touches_nondet_ctrl_lval(parent_stackvar(_)) = no.
touches_nondet_ctrl_lval(framevar(_)) = no.
touches_nondet_ctrl_lval(succip) = no.
touches_nondet_ctrl_lval(maxfr) = yes.
touches_nondet_ctrl_lval(curfr) = yes.
touches_nondet_ctrl_lval(succfr_slot(_)) = yes.
touches_nondet_ctrl_lval(prevfr_slot(_)) = yes.
touches_nondet_ctrl_lval(redofr_slot(_)) = yes.
touches_nondet_ctrl_lval(redoip_slot(_)) = yes.
touches_nondet_ctrl_lval(succip_slot(_)) = yes.
touches_nondet_ctrl_lval(hp) = no.
touches_nondet_ctrl_lval(sp) = no.
touches_nondet_ctrl_lval(parent_sp) = no.
touches_nondet_ctrl_lval(field(_, Rval1, Rval2)) = Touch :-
    Touch1 = touches_nondet_ctrl_rval(Rval1),
    Touch2 = touches_nondet_ctrl_rval(Rval2),
    bool.or(Touch1, Touch2, Touch).
touches_nondet_ctrl_lval(lvar(_)) = no.
touches_nondet_ctrl_lval(temp(_, _)) = no.
touches_nondet_ctrl_lval(mem_ref(Rval)) =
    touches_nondet_ctrl_rval(Rval).
touches_nondet_ctrl_lval(global_var_ref(_)) = no.

:- func touches_nondet_ctrl_rval(rval) = bool.

touches_nondet_ctrl_rval(lval(Lval)) =
    touches_nondet_ctrl_lval(Lval).
touches_nondet_ctrl_rval(var(_)) = no.
touches_nondet_ctrl_rval(mkword(_, Rval)) =
    touches_nondet_ctrl_rval(Rval).
touches_nondet_ctrl_rval(const(_)) = no.
touches_nondet_ctrl_rval(unop(_, Rval)) =
    touches_nondet_ctrl_rval(Rval).
touches_nondet_ctrl_rval(binop(_, Rval1, Rval2)) = Touch :-
    Touch1 = touches_nondet_ctrl_rval(Rval1),
    Touch2 = touches_nondet_ctrl_rval(Rval2),
    bool.or(Touch1, Touch2, Touch).
touches_nondet_ctrl_rval(mem_addr(MemRef)) =
    touches_nondet_ctrl_mem_ref(MemRef).

:- func touches_nondet_ctrl_mem_ref(mem_ref) = bool.

touches_nondet_ctrl_mem_ref(stackvar_ref(_)) = no.
touches_nondet_ctrl_mem_ref(framevar_ref(_)) = no.
touches_nondet_ctrl_mem_ref(heap_ref(Rval, _, _)) =
    touches_nondet_ctrl_rval(Rval).

:- func touches_nondet_ctrl_components(list(foreign_proc_component)) = bool.

touches_nondet_ctrl_components([]) = no.
touches_nondet_ctrl_components([Comp | Comps]) = Touch :-
    Touch1 = touches_nondet_ctrl_component(Comp),
    Touch2 = touches_nondet_ctrl_components(Comps),
    bool.or(Touch1, Touch2, Touch).

    % The inputs and outputs components get emitted as simple straight-line
    % code that do not refer to control slots. The compiler does not generate
    % raw_code that refers to control slots. User code shouldn't either, but
    % until we have prohibited the use of ordinary pragma C codes for model_non
    % procedures, some user code will need to ignore this restriction.
    %
:- func touches_nondet_ctrl_component(foreign_proc_component) = bool.

touches_nondet_ctrl_component(foreign_proc_inputs(_)) = no.
touches_nondet_ctrl_component(foreign_proc_outputs(_)) = no.
touches_nondet_ctrl_component(foreign_proc_raw_code(_, _, _, _)) = no.
touches_nondet_ctrl_component(foreign_proc_user_code(_, _, _)) = yes.
touches_nondet_ctrl_component(foreign_proc_fail_to(_)) = no.
touches_nondet_ctrl_component(foreign_proc_noop) = no.

%-----------------------------------------------------------------------------%

lval_access_rvals(reg(_, _), []).
lval_access_rvals(stackvar(_), []).
lval_access_rvals(parent_stackvar(_), []).
lval_access_rvals(framevar(_), []).
lval_access_rvals(succip, []).
lval_access_rvals(maxfr, []).
lval_access_rvals(curfr, []).
lval_access_rvals(redoip_slot(Rval), [Rval]).
lval_access_rvals(succip_slot(Rval), [Rval]).
lval_access_rvals(redofr_slot(Rval), [Rval]).
lval_access_rvals(prevfr_slot(Rval), [Rval]).
lval_access_rvals(succfr_slot(Rval), [Rval]).
lval_access_rvals(hp, []).
lval_access_rvals(sp, []).
lval_access_rvals(parent_sp, []).
lval_access_rvals(field(_, Rval1, Rval2), [Rval1, Rval2]).
lval_access_rvals(temp(_, _), []).
lval_access_rvals(lvar(_), _) :-
    unexpected(this_file, "lvar detected in lval_access_rvals").
lval_access_rvals(mem_ref(Rval), [Rval]).
lval_access_rvals(global_var_ref(_), []).

%-----------------------------------------------------------------------------%

rvals_free_of_lval([], _).
rvals_free_of_lval([Rval | Rvals], Forbidden) :-
    rval_free_of_lval(Rval, Forbidden),
    rvals_free_of_lval(Rvals, Forbidden).

rval_free_of_lval(lval(Lval), Forbidden) :-
    Lval \= Forbidden,
    lval_access_rvals(Lval, Rvals),
    rvals_free_of_lval(Rvals, Forbidden).
rval_free_of_lval(var(_), _) :-
    unexpected(this_file, "found var in rval_free_of_lval").
rval_free_of_lval(mkword(_, Rval), Forbidden) :-
    rval_free_of_lval(Rval, Forbidden).
rval_free_of_lval(const(_), _).
rval_free_of_lval(unop(_, Rval), Forbidden) :-
    rval_free_of_lval(Rval, Forbidden).
rval_free_of_lval(binop(_, Rval1, Rval2), Forbidden) :-
    rval_free_of_lval(Rval1, Forbidden),
    rval_free_of_lval(Rval2, Forbidden).

%-----------------------------------------------------------------------------%

count_incr_hp(Instrs, N) :-
    count_incr_hp_2(Instrs, 0, N).

:- pred count_incr_hp_2(list(instruction)::in, int::in, int::out) is det.

count_incr_hp_2([], !N).
count_incr_hp_2([llds_instr(Uinstr0, _) | Instrs], !N) :-
    ( Uinstr0 = incr_hp(_, _, _, _, _, _) ->
        !:N = !.N + 1
    ;
        true
    ),
    count_incr_hp_2(Instrs, !N).

%-----------------------------------------------------------------------------%

propagate_livevals(Instrs0, Instrs) :-
    list.reverse(Instrs0, RevInstrs0),
    set.init(Livevals),
    propagate_livevals_2(RevInstrs0, Livevals, RevInstrs),
    list.reverse(RevInstrs, Instrs).

:- pred propagate_livevals_2(list(instruction)::in, set(lval)::in,
    list(instruction)::out) is det.

propagate_livevals_2([], _, []).
propagate_livevals_2([Instr0 | Instrs0], Livevals0,
        [Instr | Instrs]) :-
    Instr0 = llds_instr(Uinstr0, Comment),
    ( Uinstr0 = livevals(ThisLivevals) ->
        set.union(Livevals0, ThisLivevals, Livevals),
        Instr = llds_instr(livevals(Livevals), Comment)
    ;
        Instr = Instr0,
        ( Uinstr0 = assign(Lval, _) ->
            set.delete(Livevals0, Lval, Livevals)
        ; can_instr_fall_through(Uinstr0) = no ->
            set.init(Livevals)
        ;
            Livevals = Livevals0
        )
    ),
    propagate_livevals_2(Instrs0, Livevals, Instrs).

%-----------------------------------------------------------------------------%
%
% The code in this section is concerned with replacing all references
% to one given label with a reference to another given label.

replace_labels_instruction_list([], _, _, _, []).
replace_labels_instruction_list([Instr0 | Instrs0], ReplMap, ReplData,
        ReplLabel, [Instr | Instrs]) :-
    (
        Instr0 = llds_instr(label(InstrLabel), Comment),
        ReplLabel = yes
    ->
        replace_labels_label(InstrLabel, ReplMap, ReplInstrLabel),
        Instr = llds_instr(label(ReplInstrLabel), Comment)
    ;
        replace_labels_instruction(Instr0, ReplMap, ReplData, Instr)
    ),
    replace_labels_instruction_list(Instrs0, ReplMap, ReplData, ReplLabel,
        Instrs).

replace_labels_instruction(llds_instr(Instr0, Comment), ReplMap, ReplData,
        llds_instr(Instr, Comment)) :-
    replace_labels_instr(Instr0, ReplMap, ReplData, Instr).

replace_labels_instr(comment(Comment), _, _, comment(Comment)).
replace_labels_instr(livevals(Livevals), _, _, livevals(Livevals)).
replace_labels_instr(block(R, F, Instrs0), ReplMap, ReplData,
        block(R, F, Instrs)) :-
    % There should be no labels in Instrs0.
    replace_labels_instruction_list(Instrs0, ReplMap, ReplData, no, Instrs).
replace_labels_instr(assign(Lval0, Rval0), ReplMap, ReplData,
        assign(Lval, Rval)) :-
    (
        ReplData = yes,
        replace_labels_lval(Lval0, ReplMap, Lval),
        replace_labels_rval(Rval0, ReplMap, Rval)
    ;
        ReplData = no,
        Lval = Lval0,
        Rval = Rval0
    ).
replace_labels_instr(llcall(Target, Return0, LiveInfo, CXT, GP, CM),
        ReplMap, _, llcall(Target, Return, LiveInfo, CXT, GP, CM)) :-
    replace_labels_code_addr(Return0, ReplMap, Return).
replace_labels_instr(mkframe(NondetFrameInfo, MaybeRedoip0), ReplMap,
        ReplData, mkframe(NondetFrameInfo, MaybeRedoip)) :-
    (
        ReplData = yes,
        (
            MaybeRedoip0 = yes(Redoip0),
            replace_labels_code_addr(Redoip0, ReplMap, Redoip),
            MaybeRedoip = yes(Redoip)
        ;
            MaybeRedoip0 = no,
            MaybeRedoip = no
        )
    ;
        ReplData = no,
        MaybeRedoip = MaybeRedoip0
    ).
replace_labels_instr(label(Label), ReplMap, _, label(Label)) :-
    ( map.search(ReplMap, Label, _) ->
        % The reason why we are replacing references to this label is that
        % it is being eliminated, and in fact should have been already
        % eliminated by the time replace_labels_instr is called.
        unexpected(this_file, "eliminated label in replace_labels_instr")
    ;
        true
    ).
replace_labels_instr(goto(Target0), ReplMap, _, goto(Target)) :-
    replace_labels_code_addr(Target0, ReplMap, Target).
replace_labels_instr(computed_goto(Rval0, Labels0), ReplMap,
        ReplData, computed_goto(Rval, Labels)) :-
    (
        ReplData = yes,
        replace_labels_rval(Rval0, ReplMap, Rval)
    ;
        ReplData = no,
        Rval = Rval0
    ),
    replace_labels_label_list(Labels0, ReplMap, Labels).
replace_labels_instr(arbitrary_c_code(Lvals, AffectsLiveness, Code), _, _,
        arbitrary_c_code(Lvals, AffectsLiveness, Code)).
replace_labels_instr(if_val(Rval0, Target0), ReplMap, ReplData,
        if_val(Rval, Target)) :-
    (
        ReplData = yes,
        replace_labels_rval(Rval0, ReplMap, Rval)
    ;
        ReplData = no,
        Rval = Rval0
    ),
    replace_labels_code_addr(Target0, ReplMap, Target).
replace_labels_instr(save_maxfr(Lval0), ReplMap, ReplData, save_maxfr(Lval)) :-
    (
        ReplData = yes,
        replace_labels_lval(Lval0, ReplMap, Lval)
    ;
        ReplData = no,
        Lval = Lval0
    ).
replace_labels_instr(restore_maxfr(Lval0), ReplMap, ReplData,
        restore_maxfr(Lval)) :-
    (
        ReplData = yes,
        replace_labels_lval(Lval0, ReplMap, Lval)
    ;
        ReplData = no,
        Lval = Lval0
    ).
replace_labels_instr(incr_hp(Lval0, MaybeTag, MO, Rval0, Msg, Atomic),
        ReplMap, ReplData, incr_hp(Lval, MaybeTag, MO, Rval, Msg, Atomic)) :-
    (
        ReplData = yes,
        replace_labels_lval(Lval0, ReplMap, Lval),
        replace_labels_rval(Rval0, ReplMap, Rval)
    ;
        ReplData = no,
        Lval = Lval0,
        Rval = Rval0
    ).
replace_labels_instr(mark_hp(Lval0), ReplMap, ReplData,
        mark_hp(Lval)) :-
    (
        ReplData = yes,
        replace_labels_lval(Lval0, ReplMap, Lval)
    ;
        ReplData = no,
        Lval = Lval0
    ).
replace_labels_instr(restore_hp(Rval0), ReplMap, ReplData,
        restore_hp(Rval)) :-
    (
        ReplData = yes,
        replace_labels_rval(Rval0, ReplMap, Rval)
    ;
        ReplData = no,
        Rval = Rval0
    ).
replace_labels_instr(free_heap(Rval0), ReplMap, ReplData,
        free_heap(Rval)) :-
    (
        ReplData = yes,
        replace_labels_rval(Rval0, ReplMap, Rval)
    ;
        ReplData = no,
        Rval = Rval0
    ).
replace_labels_instr(store_ticket(Lval0), ReplMap, ReplData,
        store_ticket(Lval)) :-
    (
        ReplData = yes,
        replace_labels_lval(Lval0, ReplMap, Lval)
    ;
        ReplData = no,
        Lval = Lval0
    ).
replace_labels_instr(reset_ticket(Rval0, Reason), ReplMap, ReplData,
        reset_ticket(Rval, Reason)) :-
    (
        ReplData = yes,
        replace_labels_rval(Rval0, ReplMap, Rval)
    ;
        ReplData = no,
        Rval = Rval0
    ).
replace_labels_instr(discard_ticket, _, _, discard_ticket).
replace_labels_instr(prune_ticket, _, _, prune_ticket).
replace_labels_instr(mark_ticket_stack(Lval0), ReplMap, ReplData,
        mark_ticket_stack(Lval)) :-
    (
        ReplData = yes,
        replace_labels_lval(Lval0, ReplMap, Lval)
    ;
        ReplData = no,
        Lval = Lval0
    ).
replace_labels_instr(prune_tickets_to(Rval0), ReplMap, ReplData,
        prune_tickets_to(Rval)) :-
    (
        ReplData = yes,
        replace_labels_rval(Rval0, ReplMap, Rval)
    ;
        ReplData = no,
        Rval = Rval0
    ).
replace_labels_instr(incr_sp(Size, Msg, Kind), _, _, incr_sp(Size, Msg, Kind)).
replace_labels_instr(decr_sp(Size), _, _, decr_sp(Size)).
replace_labels_instr(decr_sp_and_return(Size), _, _, decr_sp_and_return(Size)).
replace_labels_instr(init_sync_term(T, N), _, _, init_sync_term(T, N)).
replace_labels_instr(fork(Child0), Replmap, _, fork(Child)) :-
    replace_labels_label(Child0, Replmap, Child).
replace_labels_instr(join_and_continue(Lval0, Label0),
        Replmap, _, join_and_continue(Lval, Label)) :-
    replace_labels_label(Label0, Replmap, Label),
    replace_labels_lval(Lval0, Replmap, Lval).
replace_labels_instr(foreign_proc_code(A, Comps0, C, MaybeFix, MaybeLayout,
        MaybeOnlyLayout, MaybeSub0, H, I), ReplMap, _,
        foreign_proc_code(A, Comps, C, MaybeFix, MaybeLayout, MaybeOnlyLayout,
            MaybeSub, H, I)) :-
    (
        MaybeFix = no
    ;
        MaybeFix = yes(FixLabel0),
        replace_labels_label(FixLabel0, ReplMap, FixLabel),
            % We cannot replace the label in the C code string itself.
        expect(unify(FixLabel0, FixLabel), this_file,
            "trying to replace Mercury label in C code")
    ),
    (
        MaybeLayout = no
    ;
        MaybeLayout = yes(LayoutLabel0),
        replace_labels_label(LayoutLabel0, ReplMap, LayoutLabel),
            % We cannot replace a label that has a layout structure.
        expect(unify(LayoutLabel0, LayoutLabel), this_file,
            "trying to replace Mercury label with layout")
    ),
    (
        MaybeOnlyLayout = no
    ;
        MaybeOnlyLayout = yes(OnlyLayoutLabel0),
        replace_labels_label(OnlyLayoutLabel0, ReplMap, OnlyLayoutLabel),
            % We cannot replace a label that has a layout structure.
        expect(unify(OnlyLayoutLabel0, OnlyLayoutLabel), this_file,
            "trying to replace Mercury label with layout")
    ),
    (
        MaybeSub0 = no,
        MaybeSub = no,
        Comps = Comps0
    ;
        MaybeSub0 = yes(SubLabel0),
        replace_labels_label(SubLabel0, ReplMap, SubLabel),
        MaybeSub = yes(SubLabel),
        replace_labels_comps(Comps0, ReplMap, Comps)
    ).

replace_labels_comps([], _, []).
replace_labels_comps([Comp0 | Comps0], ReplMap, [Comp | Comps]) :-
    replace_labels_comp(Comp0, ReplMap, Comp),
    replace_labels_comps(Comps0, ReplMap, Comps).

:- pred replace_labels_comp(foreign_proc_component::in,
    map(label, label)::in, foreign_proc_component::out) is det.

replace_labels_comp(foreign_proc_inputs(A), _, foreign_proc_inputs(A)).
replace_labels_comp(foreign_proc_outputs(A), _, foreign_proc_outputs(A)).
replace_labels_comp(foreign_proc_user_code(A, B, C), _,
        foreign_proc_user_code(A, B, C)).
replace_labels_comp(foreign_proc_raw_code(A, B, C, D), _,
        foreign_proc_raw_code(A, B, C, D)).
replace_labels_comp(foreign_proc_fail_to(Label0), ReplMap,
        foreign_proc_fail_to(Label)) :-
    replace_labels_label(Label0, ReplMap, Label).
replace_labels_comp(foreign_proc_noop, _, foreign_proc_noop).

:- pred replace_labels_lval(lval::in, map(label, label)::in, lval::out) is det.

replace_labels_lval(reg(RegType, RegNum), _, reg(RegType, RegNum)).
replace_labels_lval(stackvar(N), _, stackvar(N)).
replace_labels_lval(parent_stackvar(N), _, parent_stackvar(N)).
replace_labels_lval(framevar(N), _, framevar(N)).
replace_labels_lval(succip, _, succip).
replace_labels_lval(maxfr, _, maxfr).
replace_labels_lval(curfr, _, curfr).
replace_labels_lval(succip_slot(Rval0), ReplMap, succip_slot(Rval)) :-
    replace_labels_rval(Rval0, ReplMap, Rval).
replace_labels_lval(redoip_slot(Rval0), ReplMap, redoip_slot(Rval)) :-
    replace_labels_rval(Rval0, ReplMap, Rval).
replace_labels_lval(redofr_slot(Rval0), ReplMap, redofr_slot(Rval)) :-
    replace_labels_rval(Rval0, ReplMap, Rval).
replace_labels_lval(succfr_slot(Rval0), ReplMap, succfr_slot(Rval)) :-
    replace_labels_rval(Rval0, ReplMap, Rval).
replace_labels_lval(prevfr_slot(Rval0), ReplMap, prevfr_slot(Rval)) :-
    replace_labels_rval(Rval0, ReplMap, Rval).
replace_labels_lval(hp, _, hp).
replace_labels_lval(sp, _, sp).
replace_labels_lval(parent_sp, _, parent_sp).
replace_labels_lval(field(Tag, Base0, Offset0), ReplMap,
        field(Tag, Base, Offset)) :-
    replace_labels_rval(Base0, ReplMap, Base),
    replace_labels_rval(Offset0, ReplMap, Offset).
replace_labels_lval(lvar(Var), _, lvar(Var)).
replace_labels_lval(temp(Type, Num), _, temp(Type, Num)).
replace_labels_lval(mem_ref(Rval0), ReplMap, mem_ref(Rval)) :-
    replace_labels_rval(Rval0, ReplMap, Rval).
replace_labels_lval(global_var_ref(Name), _, global_var_ref(Name)).

:- pred replace_labels_rval(rval::in, map(label, label)::in,
    rval::out) is det.

replace_labels_rval(lval(Lval0), ReplMap, lval(Lval)) :-
    replace_labels_lval(Lval0, ReplMap, Lval).
replace_labels_rval(var(Var), _, var(Var)).
replace_labels_rval(mkword(Tag, Rval0), ReplMap,
        mkword(Tag, Rval)) :-
    replace_labels_rval(Rval0, ReplMap, Rval).
replace_labels_rval(const(Const0), ReplMap, const(Const)) :-
    replace_labels_rval_const(Const0, ReplMap, Const).
replace_labels_rval(unop(Op, Rval0), ReplMap, unop(Op, Rval)) :-
    replace_labels_rval(Rval0, ReplMap, Rval).
replace_labels_rval(binop(Op, LRval0, RRval0), ReplMap,
        binop(Op, LRval, RRval)) :-
    replace_labels_rval(LRval0, ReplMap, LRval),
    replace_labels_rval(RRval0, ReplMap, RRval).
replace_labels_rval(mem_addr(MemRef0), ReplMap, mem_addr(MemRef)) :-
    replace_labels_mem_ref(MemRef0, ReplMap, MemRef).

:- pred replace_labels_mem_ref(mem_ref::in, map(label, label)::in,
    mem_ref::out) is det.

replace_labels_mem_ref(stackvar_ref(N), _, stackvar_ref(N)).
replace_labels_mem_ref(framevar_ref(N), _, framevar_ref(N)).
replace_labels_mem_ref(heap_ref(Rval0, Tag, N), ReplMap,
        heap_ref(Rval, Tag, N)) :-
    replace_labels_rval(Rval0, ReplMap, Rval).

:- pred replace_labels_rval_const(rval_const::in,
    map(label, label)::in, rval_const::out) is det.

replace_labels_rval_const(llconst_true, _, llconst_true).
replace_labels_rval_const(llconst_false, _, llconst_false).
replace_labels_rval_const(llconst_int(N), _, llconst_int(N)).
replace_labels_rval_const(llconst_float(N), _, llconst_float(N)).
replace_labels_rval_const(llconst_string(S), _, llconst_string(S)).
replace_labels_rval_const(llconst_multi_string(S), _, llconst_multi_string(S)).
replace_labels_rval_const(llconst_code_addr(Addr0), ReplMap,
        llconst_code_addr(Addr)) :-
    replace_labels_code_addr(Addr0, ReplMap, Addr).
replace_labels_rval_const(llconst_data_addr(DataAddr, MaybeOffset), _,
        llconst_data_addr(DataAddr, MaybeOffset)).

replace_labels_code_addr(code_label(Label0), ReplMap, code_label(Label)) :-
    replace_labels_label(Label0, ReplMap, Label).
replace_labels_code_addr(code_imported_proc(Proc), _,
        code_imported_proc(Proc)).
replace_labels_code_addr(code_succip, _, code_succip).
replace_labels_code_addr(do_succeed(Last), _, do_succeed(Last)).
replace_labels_code_addr(do_redo, _, do_redo).
replace_labels_code_addr(do_fail, _, do_fail).
replace_labels_code_addr(do_trace_redo_fail_shallow, _,
    do_trace_redo_fail_shallow).
replace_labels_code_addr(do_trace_redo_fail_deep, _,
    do_trace_redo_fail_deep).
replace_labels_code_addr(do_call_closure(MaybeSpec), _,
        do_call_closure(MaybeSpec)).
replace_labels_code_addr(do_call_class_method(MaybeSpec), _,
        do_call_class_method(MaybeSpec)).
replace_labels_code_addr(do_not_reached, _, do_not_reached).

replace_labels_label_list([], _ReplMap, []).
replace_labels_label_list([Label0 | Labels0], ReplMap, [Label | Labels]) :-
    replace_labels_label(Label0, ReplMap, Label),
    replace_labels_label_list(Labels0, ReplMap, Labels).

replace_labels_label(Label0, ReplMap, Label) :-
    ( map.search(ReplMap, Label0, NewLabel) ->
        Label = NewLabel
    ;
        Label = Label0
    ).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "opt_util.m".

%-----------------------------------------------------------------------------%
:- end_module opt_util.
%-----------------------------------------------------------------------------%
