%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2009-2010 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: message.m.
% Author: pbone.
%
% This module contains types and predicates for building messages used by the
% mdprof_feedback tool.  These messages can represent information such as
% warnings and errors.  Code is also included here to print them out.
%
%-----------------------------------------------------------------------------%

:- module message.
:- interface.

:- import_module mdbcomp.
:- import_module mdbcomp.program_representation.
:- import_module profile.

:- import_module cord.
:- import_module int.
:- import_module string.

%-----------------------------------------------------------------------------%
    
	% A message to be displayed to the user.
    %
:- type message 
    --->    message(
                message_location    :: program_location,
                message_type        :: message_type 
            ).
    
    % The 'importance' of a message,  Debug messages are not covered here since
    % they should be implemented via trace goals. neither are critical messages
    % since we use exceptions in that case.
    %
:- type message_level
    --->    message_info
    ;       message_notice
    ;       message_warning
    ;       message_error.

:- type program_location
    --->    proc(string_proc_label)
    ;       goal(string_proc_label, goal_path)
    ;       clique(clique_ptr).

%-----------------------------------------------------------------------------%

:- func message_get_level(message) = message_level.

:- func message_level_to_int(message_level) = int.

:- pred message_to_string(message::in, string::out) is det.

:- pred location_to_string(program_location::in, string::out) is det.

:- pred append_message(program_location::in, message_type::in,
    cord(message)::in, cord(message)::out) is det.

%-----------------------------------------------------------------------------%
    
	% A type of message, values of type 'message' are instances of values of
    % type 'message_type'.
    %
:- type message_type

                % A candidate parallel conjunction has been found.
    --->    info_found_candidate_conjunction

                % There are a number of conjuncts containing calls above the
                % configured call site threshold, we're considering them for
                % parallelisation against one another.
                %
    ;       info_found_conjs_above_callsite_threshold(int)

                % The conjunction being consdered for parallelisation had to be
                % split into several 'partitions' because it contains some non
                % atomic goals, this can limit the amount of parallelism
                % available.
    ;       info_split_conjunction_into_partitions(int)

                % There are N conjunctions whose speedup due to parallelisation
                % is positive.
    ;       info_found_n_conjunctions_with_positive_speedup(int)

                % This occurs when a variable is instantiated twice in a
                % procedure body (different instantiation states are used).  We
                % don't bother parallelising such procedures.
                %
    ;       notice_duplicate_instantiation(
                int
                    % The number of conjunctions that could have been
                    % parallelised.
            )

                % A pair of calls that could be parallelised have many
                % dependant variables.  We don't yet calculate the speedup in
                % these situations.
                %
    ;       notice_callpair_has_more_than_one_dependant_var

                % A partition does not enough enough costly calls (>1) and
                % could not be parallelised, we could have parallelised them if
                % we could parallelise over non-atomic code.
                % 
                % The parameters are the partition number and the number of
                % costly calls found.
                %
    ;       notice_partition_does_not_have_costly_calls(int, int)

                % Couldn't find the proc defn in the progrep data, maybe the
                % procedure is built-in.
                %
    ;       warning_cannot_lookup_proc_defn

                % Couldn't compute the coverage annotation for a procedure
                % representation.  A fallback method will be used but whithout
                % this information it may be less accurate.
                %
    ;       warning_cannot_compute_procrep_coverage_fallback(string)

                % We don't yet handle clique_proc_reports with multiple proc
                % dynamics.
                %
    ;       error_extra_proc_dynamics_in_clique_proc

                % An error in the generation of a coverage_procrep report.
                %
    ;       error_coverage_procrep_error(string).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module list.

:- import_module program_representation_utils.

%-----------------------------------------------------------------------------%

message_get_level(message(_, Type)) =
    message_type_to_level(Type).

%-----------------------------------------------------------------------------%

message_to_string(message(Location, MessageType), String) :-
    location_to_string(Location, LocationString),
    Level = message_type_to_level(MessageType),
    LevelString = message_level_to_string(Level),
    MessageStr = message_type_to_string(MessageType),
    string.format("%s: In %s: %s",
        [s(LevelString), s(LocationString), s(MessageStr)], String).

location_to_string(proc(ProcLabel), String) :-
    print_proc_label_to_string(ProcLabel, ProcLabelString),
    format("procedure %s", [s(ProcLabelString)], String). 
location_to_string(goal(ProcLabel, GoalPath), String) :-
    print_proc_label_to_string(ProcLabel, ProcLabelString),
    ( empty_goal_path(GoalPath) ->
        GoalPathString = "root goal"
    ;
        GoalPathString = goal_path_to_string(GoalPath)
    ),
    format("goal %s in procedure %s", 
        [s(GoalPathString), s(ProcLabelString)], String).
location_to_string(clique(clique_ptr(Id)), String) :-
    format("clique %d", [i(Id)], String).

%-----------------------------------------------------------------------------%

append_message(Location, MessageType, !Messages) :-
    Message = message(Location, MessageType),
    !:Messages = cord.snoc(!.Messages, Message).

%-----------------------------------------------------------------------------%

:- func message_level_to_string(message_level) = string.
message_level_to_string(message_info) = "Info".
message_level_to_string(message_notice) = "Notice".
message_level_to_string(message_warning) = "Warning".
message_level_to_string(message_error) = "Error".

%-----------------------------------------------------------------------------%

message_level_to_int(message_info) = 4.
message_level_to_int(message_notice) = 3.
message_level_to_int(message_warning) = 2.
message_level_to_int(message_error) = 1.

%-----------------------------------------------------------------------------%

:- func message_type_to_level(message_type) = message_level.

message_type_to_level(info_found_candidate_conjunction) =
    message_info.
message_type_to_level(info_found_conjs_above_callsite_threshold(_)) =
    message_info.
message_type_to_level(info_found_n_conjunctions_with_positive_speedup(_)) =
    message_info.
message_type_to_level(info_split_conjunction_into_partitions(_)) = message_info.
message_type_to_level(notice_duplicate_instantiation(_)) = message_notice.
message_type_to_level(notice_callpair_has_more_than_one_dependant_var) =
    message_notice.
message_type_to_level(notice_partition_does_not_have_costly_calls(_, _)) =
    message_notice.
message_type_to_level(warning_cannot_lookup_proc_defn) = message_warning.
message_type_to_level(warning_cannot_compute_procrep_coverage_fallback(_)) =
    message_warning.
message_type_to_level(error_extra_proc_dynamics_in_clique_proc) = 
    message_error.
message_type_to_level(error_coverage_procrep_error(_)) =
    message_error.

%-----------------------------------------------------------------------------%

:- func message_type_to_string(message_type) = string.

message_type_to_string(MessageType) = String :-
    (
        MessageType = info_found_candidate_conjunction, 
        String = "Found candidate conjunction"
    ;
        (
            MessageType = info_found_conjs_above_callsite_threshold(Num),
            MessageStr = "Found %d conjuncts above callsite threashold"
        ;
            MessageType = info_found_n_conjunctions_with_positive_speedup(Num),
            MessageStr = "Found %d conjunctions with a positive speedup due"
                ++ " to parallelisation"
        ;
            MessageType = info_split_conjunction_into_partitions(Num),
            MessageStr = "Split conjunction into %d partitions, this may reduce"
                ++ " parallelism"
        ),
        string.format(MessageStr, [i(Num)], String)
    ;
        MessageType = notice_duplicate_instantiation(CandidateConjuncts), 
        string.format(
            "%d conjunctions not parallelised: Seen duplicate instantiations",
            [i(CandidateConjuncts)], String)
    ;
        MessageType = notice_callpair_has_more_than_one_dependant_var,
        String = "Parallelising call pairs that have more than one dependant"
            ++ " variable is not yet supported."
    ;
        MessageType = notice_partition_does_not_have_costly_calls(PartNum,
            NumCalls),
        string.format("Partition %d has only %d costly calls and cannot be"
                ++ " parallelised", 
            [i(PartNum), i(NumCalls)], String)
    ;
        MessageType = warning_cannot_lookup_proc_defn,
        String = "Could not look up proc defn, perhaps this procedure is"
            ++ " built-in"
    ;
        MessageType = warning_cannot_compute_procrep_coverage_fallback(Error),
        String = "Cannot compute procrep coverage annotation: " ++ Error 
            ++ "\n  falling back to some other method"
    ;
        MessageType = error_extra_proc_dynamics_in_clique_proc, 
        String = "extra proc dynamnics for a clique proc are not currenty"
            ++ " handled."
    ;
        MessageType = error_coverage_procrep_error(ErrorStr),
        string.format("Error generating coverage procedure report: %s",
            [s(ErrorStr)], String)
    ).

%-----------------------------------------------------------------------------%
:- end_module message.
%-----------------------------------------------------------------------------%
