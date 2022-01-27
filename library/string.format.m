%--------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%--------------------------------------------------------------------------%
% Copyright (C) 2014 The Mercury team.
% This file may only be copied under the terms of the GNU Library General
% Public License - see the file COPYING.LIB in the Mercury distribution.
%--------------------------------------------------------------------------%
%
% File: string.format.m.
%
% This module implements string.format.
%
%----------------------------------------------------------------------------%
%----------------------------------------------------------------------------%

:- module string.format.
:- interface.

:- import_module list.

%----------------------------------------------------------------------------%

:- pred format_impl(string::in, list(poly_type)::in, string::out) is det.

%----------------------------------------------------------------------------%
%----------------------------------------------------------------------------%

:- implementation.

:- import_module bool.
:- import_module float.
:- import_module int.
:- import_module integer.
:- import_module maybe.
:- import_module require.

%----------------------------------------------------------------------------%

:- pragma foreign_decl("C",
"
#include ""mercury_float.h""    /* for MR_float_to_string */

/*
** The following macro should expand to MR_TRUE if the C grades should
** implement string.format using C's sprintf function.
** Setting it to MR_FALSE will cause string.format to use the Mercury
** implementation of string formatting in C grades.
*/

#define ML_USE_SPRINTF MR_TRUE
").

%--------------------------------------------------------------------------%

:- type flag_hash
    --->    flag_hash_clear
    ;       flag_hash_set.

:- type flag_space
    --->    flag_space_clear
    ;       flag_space_set.

:- type flag_zero
    --->    flag_zero_clear
    ;       flag_zero_set.

:- type flag_minus
    --->    flag_minus_clear
    ;       flag_minus_set.

:- type flag_plus
    --->    flag_plus_clear
    ;       flag_plus_set.

:- type flags
    --->    flags(
                flag_hash       :: flag_hash,
                flag_space      :: flag_space,
                flag_zero       :: flag_zero,
                flag_minus      :: flag_minus,
                flag_plus       :: flag_plus
            ).

:- type maybe_width == maybe(int).
:- type maybe_prec == maybe(int).

:- type int_base
    --->    base_octal
    ;       base_decimal
    ;       base_hex_lc
    ;       base_hex_uc
    ;       base_hex_p.

:- type float_kind
    --->    kind_e_scientific_lc
    ;       kind_e_scientific_uc
    ;       kind_f_plain_lc
    ;       kind_f_plain_uc
    ;       kind_g_flexible_lc
    ;       kind_g_flexible_uc.

:- type format_str_spec
    --->    spec_percent
    ;       spec_signed_int(flags, maybe_width, maybe_prec, int)
    ;       spec_unsigned_int(flags, maybe_width, maybe_prec, int_base, int)
    ;       spec_float(flags, maybe_width, maybe_prec, float_kind, float)
    ;       spec_char(flags, maybe_width, char)
    ;       spec_string(flags, maybe_width, maybe_prec, string).

:- type format_str_component
    --->    comp_str(string)
    ;       comp_conv_spec(format_str_spec).

:- type poly_kind
    --->    poly_kind_char
    ;       poly_kind_str
    ;       poly_kind_int
    ;       poly_kind_float.

:- type format_str_error
    --->    error_no_specifier(
                int,        % Which specifier were we expecting?
                int         % How many extra polytypes?
            )
    ;       error_unknown_specifier(
                int,        % Which specifier?
                char        % The unexpected specifier character.
            )
    ;       error_wrong_polytype(
                int,        % Which specifier?
                char,       % The specifier character.
                poly_kind   % The polytype we found.
            )
    ;       error_no_polytype(
                int,        % Which specifier?
                char        % The specifier character.
            )
    ;       error_nonint_star_width(
                int,        % Which specifier?
                poly_kind   % The non-i() polytype we found.
            )
    ;       error_missing_star_width(
                int         % Which specifier?
            )
    ;       error_nonint_star_prec(
                int,        % Which specifier?
                poly_kind   % The non-i() polytype we found.
            )
    ;       error_missing_star_prec(
                int         % Which specifier?
            )
    ;       error_extra_polytypes(
                int,        % Which specifier were we expecting?
                int         % How many extra polytypes?
            ).

%----------------------------------------------------------------------------%

string.format.format_impl(FormatString, PolyList, String) :-
    % The call tree of predicate should be optimised to turn over
    % the least amount of memory possible, since memory usage is a significant
    % problem for programs which do a lot of formatted IO.
    %
    % XXX The repeated string appends performed in the call tree
    % do still allocate nontrivial amounts of memory for temporaries.
    Chars = to_char_list(FormatString),
    format_string_to_components(Chars, PolyList, 1, Components, Errors),
    (
        Errors = [],
        components_to_strings(Components, ComponentStrs),
        String = string.append_list(ComponentStrs)
    ;
        Errors = [HeadError | _],
        % In the common cases of missing or extra PolyTypes, all the errors
        % after the first may be avalanche errors, and would probably be more
        % confusing than helpful. This is why we traditionally print a message
        % only for the first one.
        %
        % XXX We should try printing messages for all the errors, not just
        % the first, and see whether the usefulness of the extra information
        % outweighs the costs of any extra confusion.
        Msg = format_str_error_to_msg(HeadError),
        error("string.format", Msg)
    ).

:- func format_str_error_to_msg(format_str_error) = string.

format_str_error_to_msg(Error) = Msg :-
    (
        Error = error_no_specifier(SpecNum, NumExtraPolyTypes),
        Msg0 = nth_specifier(SpecNum) ++ " is missing",
        ( if NumExtraPolyTypes = 0 then
            Msg = Msg0 ++ ", along with its input."
        else if NumExtraPolyTypes = 1 then
            Msg = Msg0 ++ "."
        else
            Msg = Msg0 ++ ", and there are "
                ++ string.int_to_string(NumExtraPolyTypes - 1)
                ++ " extra inputs."
        )
    ;
        Error = error_unknown_specifier(SpecNum, SpecChar),
        Msg = nth_specifier(SpecNum) ++ " uses the unknown "
            ++ specifier_char(SpecChar) ++ "."
    ;
        Error = error_wrong_polytype(SpecNum, SpecChar, PolyKind),
        Msg = nth_specifier(SpecNum) ++ " uses the "
            ++ specifier_char(SpecChar)
            ++ ", but the corresponding input is "
            ++ poly_kind_desc(PolyKind) ++ "."
    ;
        Error = error_no_polytype(SpecNum, SpecChar),
        Msg = nth_specifier(SpecNum)
            ++ ", which uses " ++ specifier_char(SpecChar)
            ++ ", is missing its input."
    ;
        Error = error_nonint_star_width(SpecNum, PolyKind),
        Msg = nth_specifier(SpecNum)
            ++ " says the width is a runtime input,"
            ++ " but the next input is " ++ poly_kind_desc(PolyKind)
            ++ ", not an integer."
    ;
        Error = error_missing_star_width(SpecNum),
        Msg = nth_specifier(SpecNum)
            ++ " says the width is a runtime input,"
            ++ " but there is no next input."
    ;
        Error = error_nonint_star_prec(SpecNum, PolyKind),
        Msg = nth_specifier(SpecNum)
            ++ " says the precision is a runtime input,"
            ++ " but the next input is " ++ poly_kind_desc(PolyKind)
            ++ ", not an integer."
    ;
        Error = error_missing_star_prec(SpecNum),
        Msg = nth_specifier(SpecNum)
            ++ " says the precision is a runtime input,"
            ++ " but there is no next input."
    ;
        Error = error_extra_polytypes(SpecNum, NumExtraPolyTypes),
        ( if SpecNum = 1 then
            % They aren't extra, since there is no other inputs before them.
            Extra = ""
        else
            Extra = "extra "
        ),
        Msg0 = "There is no " ++ nth(SpecNum) ++ " conversion specifier,",
        ( if NumExtraPolyTypes = 1 then
            Msg = Msg0 ++ " but there is an " ++ Extra ++ "input."
        else
            Msg = Msg0 ++ " but there are " ++
                string.int_to_string(NumExtraPolyTypes) ++ Extra ++ "inputs."
        )
    ).

:- func nth_specifier(int) = string.

nth_specifier(SpecNum) =
    "The " ++ nth(SpecNum) ++ " conversion specifier".

:- func nth(int) = string.

nth(N) = NStr :-
    ( if N = 1 then
        NStr = "first"
    else if N = 2 then
        NStr = "second"
    else if N = 3 then
        NStr = "third"
    else if N = 4 then
        NStr = "fourth"
    else if N = 5 then
        NStr = "fifth"
    else if N = 6 then
        NStr = "sixth"
    else if N = 7 then
        NStr = "seventh"
    else if N = 8 then
        NStr = "eighth"
    else if N = 9 then
        NStr = "ninth"
    else if N = 10 then
        NStr = "tenth"
    else
        NStr = string.int_to_string(N) ++ "th"
    ).

:- func specifier_char(char) = string.

specifier_char(SpecChar) =
    "specifier character `" ++ string.char_to_string(SpecChar) ++ "'".

:- func poly_kind_desc(poly_kind) = string.

poly_kind_desc(poly_kind_char) = "a character".
poly_kind_desc(poly_kind_str) = "a string".
poly_kind_desc(poly_kind_int) = "an integer".
poly_kind_desc(poly_kind_float) = "a float".

:- func poly_type_to_kind(poly_type) = poly_kind.

poly_type_to_kind(c(_)) = poly_kind_char.
poly_type_to_kind(s(_)) = poly_kind_str.
poly_type_to_kind(i(_)) = poly_kind_int.
poly_type_to_kind(f(_)) = poly_kind_float.

%----------------------------------------------------------------------------%

    % This predicate parses the entire format string. When it encounters
    % something that looks like a conversion specification (i.e. it starts
    % with a '%' character), but which cannot be parsed as one, it records
    % an error message, and keeps going.
    %
    % Note that making this predicate use an accumulator for the lists
    % of components and errors seen so far would yield cleaner code,
    % but would probably be slower since our caller would have to unreverse
    % the list of components we return.
    %
    % The lack of tail recursion here should not be a problem, since no
    % format string will be long enough to make us consume too much stack.
    %
:- pred format_string_to_components(list(char)::in,
    list(string.poly_type)::in, int::in,
    list(format_str_component)::out, list(format_str_error)::out) is det.

format_string_to_components(!.Chars, !.PolyTypes, SpecNum,
        Components, Errors) :-
    gather_non_percent_chars(!.Chars, NonConversionSpecChars, GatherEndedBy),
    (
        GatherEndedBy = found_end_of_string,
        Components0 = [],
        (
            !.PolyTypes = [],
            Errors = []
        ;
            !.PolyTypes = [_ | _],
            Error = error_extra_polytypes(SpecNum, list.length(!.PolyTypes)),
            Errors = [Error]
        )
    ;
        GatherEndedBy = found_percent(!:Chars),
        parse_conversion_specification(!Chars, !PolyTypes, SpecNum,
            Spec, SpecErrors),
        format_string_to_components(!.Chars, !.PolyTypes, SpecNum + 1,
            ComponentsTail, ErrorsTail),
        (
            SpecErrors = [],
            ConvComponent = comp_conv_spec(Spec),
            Components0 = [ConvComponent | ComponentsTail],
            Errors = ErrorsTail
        ;
            SpecErrors = [_ | _],
            Components0 = ComponentsTail,
            Errors = SpecErrors ++ ErrorsTail
        )
    ),
    (
        NonConversionSpecChars = [],
        Components = Components0
    ;
        NonConversionSpecChars = [_ | _],
        NonConversionSpecString =
            string.from_char_list(NonConversionSpecChars),
        StringComponent = comp_str(NonConversionSpecString),
        Components = [StringComponent | Components0]
    ).

:- type gather_ended_by
    --->    found_end_of_string
    ;       found_percent(list(char)).  % The list of chars after the percent.

    % Parse a string which doesn't contain any conversion specifications.
    %
:- pred gather_non_percent_chars(list(char)::in, list(char)::out,
    gather_ended_by::out) is det.

gather_non_percent_chars(Chars, NonConversionSpecChars, GatherEndedBy) :-
    (
        Chars = [HeadChar | TailChars],
        ( if HeadChar = '%' then
            NonConversionSpecChars = [],
            % We eat the percent sign.
            GatherEndedBy = found_percent(TailChars)
        else
            gather_non_percent_chars(TailChars, TailNonConversionSpecChars,
                GatherEndedBy),
            NonConversionSpecChars = [HeadChar | TailNonConversionSpecChars]
        )
    ;
        Chars = [],
        NonConversionSpecChars = [],
        GatherEndedBy = found_end_of_string
    ).

    % Each conversion specification starts with the character '%' (which
    % our caller has already read) and ends with a conversion specifier.
    % In between there may be (in this order) zero or more flags, an optional
    % minimum field width, and an optional precision.
    %
:- pred parse_conversion_specification(list(char)::in, list(char)::out,
    list(string.poly_type)::in, list(string.poly_type)::out, int::in,
    format_str_spec::out, list(format_str_error)::out) is det.

parse_conversion_specification(!Chars, !PolyTypes, SpecNum, Spec, Errors) :-
    Flags0 = flags(flag_hash_clear, flag_space_clear, flag_zero_clear,
        flag_minus_clear, flag_plus_clear),
    gather_flag_chars(!Chars, Flags0, Flags),
    get_optional_width(!Chars, !PolyTypes, SpecNum, MaybeWidth, WidthErrors),
    get_optional_prec(!Chars, !PolyTypes, SpecNum, MaybePrec, PrecErrors),
    get_first_spec(!Chars, !PolyTypes, Flags, MaybeWidth, MaybePrec, SpecNum,
        Spec, SpecErrors),
    Errors = WidthErrors ++ PrecErrors ++ SpecErrors.

    % Record and skip past any flag characters at the start of the char list.
    %
:- pred gather_flag_chars(list(char)::in, list(char)::out,
    flags::in, flags::out) is det.

gather_flag_chars(!Chars, !Flags) :-
    % XXX Should we return an error if we find that the format string
    % sets the same flag twice?
    ( if
        !.Chars = [Char | !:Chars],
        ( Char = '#',   !Flags ^ flag_hash  := flag_hash_set
        ; Char = ' ',   !Flags ^ flag_space := flag_space_set
        ; Char = '0',   !Flags ^ flag_zero  := flag_zero_set
        ; Char = ('-'), !Flags ^ flag_minus := flag_minus_set
        ; Char = ('+'), !Flags ^ flag_plus  := flag_plus_set
        )
    then
        gather_flag_chars(!Chars, !Flags)
    else
        true
    ).

    % Do we have a minimum field width? If yes, get it.
    %
:- pred get_optional_width(list(char)::in, list(char)::out,
    list(string.poly_type)::in, list(string.poly_type)::out, int::in,
    maybe_width::out, list(format_str_error)::out) is det.

get_optional_width(!Chars, !PolyTypes, SpecNum, MaybeWidth, Errors) :-
    ( if !.Chars = ['*' | !:Chars] then
        (
            !.PolyTypes = [PolyType | !:PolyTypes],
            ( if PolyType = i(PolyWidth) then
                MaybeWidth = yes(PolyWidth),
                Errors = []
            else
                MaybeWidth = no,
                Errors = [error_nonint_star_width(SpecNum,
                    poly_type_to_kind(PolyType))]
            )
        ;
            !.PolyTypes = [],
            MaybeWidth = no,
            Errors = [error_missing_star_width(SpecNum)]
        )
    else if get_nonzero_number_prefix(!Chars, Width) then
        MaybeWidth = yes(Width),
        Errors = []
    else
        MaybeWidth = no,
        Errors = []
    ).

    % Do we have a precision? If yes, get it.
    %
:- pred get_optional_prec(list(char)::in, list(char)::out,
    list(string.poly_type)::in, list(string.poly_type)::out, int::in,
    maybe_prec::out, list(format_str_error)::out) is det.

get_optional_prec(!Chars, !PolyTypes, SpecNum, MaybePrec, Errors) :-
    ( if !.Chars = ['.' | !:Chars] then
        ( if !.Chars = ['*' | !:Chars] then
            (
                !.PolyTypes = [PolyType | !:PolyTypes],
                ( if PolyType = i(PolyPrec) then
                    MaybePrec = yes(PolyPrec),
                    Errors = []
                else
                    MaybePrec = no,
                    Errors = [error_nonint_star_prec(SpecNum,
                        poly_type_to_kind(PolyType))]
                )
            ;
                !.PolyTypes = [],
                MaybePrec = no,
                Errors = [error_missing_star_prec(SpecNum)]
            )
        else
            % This treats an empty string as an EXPLICIT zero.
            get_number_prefix(!Chars, 0, Prec),
            MaybePrec = yes(Prec),
            Errors = []
        )
    else
        MaybePrec = no,
        Errors = []
    ).

:- pred get_nonzero_number_prefix(list(char)::in, list(char)::out,
    int::out) is semidet.

get_nonzero_number_prefix(!Chars, N) :-
    !.Chars = [Char | !:Chars],
    Char \= '0',
    char.decimal_digit_to_int(Char, CharValue),
    get_number_prefix(!Chars, CharValue, N).

:- pred get_number_prefix(list(char)::in, list(char)::out,
    int::in, int::out) is det.

get_number_prefix(!Chars, N0, N) :-
    ( if
        !.Chars = [Char | !:Chars],
        char.decimal_digit_to_int(Char, CharValue)
    then
        N1 = N0 * 10 + CharValue,
        get_number_prefix(!Chars, N1, N)
    else
        N = N0
    ).

%--------------------------------------------------------------------------%

    % get_first_spec(!Chars, !PolyTypes, Flags, MaybeWidth, MaybePrec,
    %   SpecNum, Spec, Errors):
    %
    % Try to read one conversion specifier, whose percent sign, flags,
    % width and precision have already been read, from !Chars.
    %
    % If successful, consume the corresponding poly_type from !PolyTypes,
    % we return the specifier as Spec and return an empty error list.
    %
    % If there is a problem, we return a garbage Spec and a nonempty
    % errors list. We also consume the poly_type that corresponds
    % (or at least, looks like it corresponds) to the specifier,
    % if there is one.
    %
:- pred get_first_spec(list(char)::in, list(char)::out,
    list(string.poly_type)::in, list(string.poly_type)::out,
    flags::in, maybe_width::in, maybe_prec::in, int::in,
    format_str_spec::out, list(format_str_error)::out) is det.

get_first_spec(!Chars, !PolyTypes, _Flags, _MaybeWidth, _MaybePrec, SpecNum,
        Spec, Errors) :-
    !.Chars = [],
    Spec = spec_percent,
    Errors = [error_no_specifier(SpecNum, list.length(!.PolyTypes))].
get_first_spec(!Chars, !PolyTypes, !.Flags, MaybeWidth, MaybePrec, SpecNum,
        Spec, Errors) :-
    !.Chars = [SpecChar | !:Chars],
    ( if
        (
            SpecChar = '%',
            SpecPrime = spec_percent,
            ErrorsPrime = []
        ;
            ( SpecChar = 'd'
            ; SpecChar = 'i'
            ),
            require_det
            (
                !.PolyTypes = [SpecPolyType | !:PolyTypes],
                ( if SpecPolyType = i(Int) then
                    % Base is always decimal
                    SpecPrime = spec_signed_int(!.Flags,
                        MaybeWidth, MaybePrec, Int),
                    ErrorsPrime = []
                else
                    Error = error_wrong_polytype(SpecNum, SpecChar,
                        poly_type_to_kind(SpecPolyType)),
                    SpecPrime = spec_percent,
                    ErrorsPrime = [Error]
                )
            ;
                !.PolyTypes = [],
                Error = error_no_polytype(SpecNum, SpecChar),
                SpecPrime = spec_percent,
                ErrorsPrime = [Error]
            )
        ;
            (
                SpecChar = 'o',
                Base = base_octal
            ;
                SpecChar = 'u',
                Base = base_decimal
            ;
                SpecChar = 'x',
                Base = base_hex_lc
            ;
                SpecChar = 'X',
                Base = base_hex_uc
            ;
                SpecChar = 'p',
                Base = base_hex_p,
                % XXX This should not be necessary.
                !Flags ^ flag_hash := flag_hash_set
            ),
            require_det
            (
                !.PolyTypes = [SpecPolyType | !:PolyTypes],
                ( if SpecPolyType = i(Int) then
                    SpecPrime = spec_unsigned_int(!.Flags,
                        MaybeWidth, MaybePrec, Base, Int),
                    ErrorsPrime = []
                else
                    Error = error_wrong_polytype(SpecNum, SpecChar,
                        poly_type_to_kind(SpecPolyType)),
                    SpecPrime = spec_percent,
                    ErrorsPrime = [Error]
                )
            ;
                !.PolyTypes = [],
                Error = error_no_polytype(SpecNum, SpecChar),
                SpecPrime = spec_percent,
                ErrorsPrime = [Error]
            )
        ;
            (
                SpecChar = 'e',
                FloatKind = kind_e_scientific_lc
            ;
                SpecChar = 'E',
                FloatKind = kind_e_scientific_uc
            ;
                SpecChar = 'f',
                FloatKind = kind_f_plain_lc
            ;
                SpecChar = 'F',
                FloatKind = kind_f_plain_uc
            ;
                SpecChar = 'g',
                FloatKind = kind_g_flexible_lc
            ;
                SpecChar = 'G',
                FloatKind = kind_g_flexible_uc
            ),
            require_det
            (
                !.PolyTypes = [SpecPolyType | !:PolyTypes],
                ( if SpecPolyType = f(Float) then
                    SpecPrime = spec_float(!.Flags,
                        MaybeWidth, MaybePrec, FloatKind, Float),
                    ErrorsPrime = []
                else
                    Error = error_wrong_polytype(SpecNum, SpecChar,
                        poly_type_to_kind(SpecPolyType)),
                    SpecPrime = spec_percent,
                    ErrorsPrime = [Error]
                )
            ;
                !.PolyTypes = [],
                Error = error_no_polytype(SpecNum, SpecChar),
                SpecPrime = spec_percent,
                ErrorsPrime = [Error]
            )
        ;
            SpecChar = 'c',
            require_det
            (
                !.PolyTypes = [SpecPolyType | !:PolyTypes],
                ( if SpecPolyType = c(Char) then
                    % XXX Should we generate an error if MaybePrec = yes(...)?
                    SpecPrime = spec_char(!.Flags, MaybeWidth, Char),
                    ErrorsPrime = []
                else
                    Error = error_wrong_polytype(SpecNum, SpecChar,
                        poly_type_to_kind(SpecPolyType)),
                    SpecPrime = spec_percent,
                    ErrorsPrime = [Error]
                )
            ;
                !.PolyTypes = [],
                Error = error_no_polytype(SpecNum, SpecChar),
                SpecPrime = spec_percent,
                ErrorsPrime = [Error]
            )
        ;
            SpecChar = 's',
            require_det
            (
                !.PolyTypes = [SpecPolyType | !:PolyTypes],
                ( if SpecPolyType = s(Str) then
                    SpecPrime = spec_string(!.Flags,
                        MaybeWidth, MaybePrec, Str),
                    ErrorsPrime = []
                else
                    Error = error_wrong_polytype(SpecNum, SpecChar,
                        poly_type_to_kind(SpecPolyType)),
                    SpecPrime = spec_percent,
                    ErrorsPrime = [Error]
                )
            ;
                !.PolyTypes = [],
                Error = error_no_polytype(SpecNum, SpecChar),
                SpecPrime = spec_percent,
                ErrorsPrime = [Error]
            )
        )
    then
        Spec = SpecPrime,
        Errors = ErrorsPrime
    else
        Error = error_unknown_specifier(SpecNum, SpecChar),
        Spec = spec_percent,
        Errors = [Error]
    ).

:- pred components_to_strings(list(format_str_component)::in,
    list(string)::out) is det.

components_to_strings([], []).
components_to_strings([Component | Components], [String | Strings]) :-
    component_to_string(Component, String),
    components_to_strings(Components, Strings).

:- pred component_to_string(format_str_component::in, string::out) is det.

component_to_string(Component, String) :-
    Component = comp_str(String).
component_to_string(Component, String) :-
    Component = comp_conv_spec(Spec),
    (
        % Conversion specifier representing the "%" sign.
        Spec = spec_percent,
        String = "%"
    ;
        % Signed int conversion specifiers.
        Spec = spec_signed_int(Flags, MaybeWidth, MaybePrec, Int),
        format_signed_int_component(Flags, MaybeWidth, MaybePrec, Int, String)
    ;
        % Unsigned int conversion specifiers.
        Spec = spec_unsigned_int(Flags, MaybeWidth, MaybePrec, Base, Int),
        format_unsigned_int_component(Flags, MaybeWidth, MaybePrec, Base, Int,
            String)
    ;
        % Float conversion specifiers.
        Spec = spec_float(Flags, MaybeWidth, MaybePrec, Kind, Float),
        format_float_component(Flags, MaybeWidth, MaybePrec, Kind, Float,
            String)
    ;
        % Char conversion specifiers.
        Spec = spec_char(Flags, MaybeWidth, Char),
        format_char_component(Flags, MaybeWidth, Char, String)
    ;
        % String conversion specifiers.
        Spec = spec_string(Flags, MaybeWidth, MaybePrec, Str),
        format_string_component(Flags, MaybeWidth, MaybePrec, Str, String)
    ).

%----------------------------------------------------------------------------%

:- pred format_char_component(flags::in, maybe_width::in, char::in,
    string::out) is det.

format_char_component(Flags, MaybeWidth, Char, String) :-
    ( if using_sprintf_for_char(Char) then
        FormatStr = make_format(Flags, MaybeWidth, no, "", "c"),
        String = native_format_char(FormatStr, Char)
    else
        String = format_char(Flags, MaybeWidth, Char)
    ).

:- pred format_string_component(flags::in, maybe_width::in, maybe_prec::in,
    string::in, string::out) is det.

format_string_component(Flags, MaybeWidth, MaybePrec, Str, String) :-
    ( if
        (
            using_sprintf,
            Flags = flags(flag_hash_clear, flag_space_clear,
                flag_zero_clear, flag_minus_clear, flag_plus_clear),
            MaybeWidth = no,
            MaybePrec = no
        ;
            using_sprintf_for_string(Str)
        )
    then
        FormatStr = make_format(Flags, MaybeWidth, MaybePrec, "", "s"),
        String = native_format_string(FormatStr, Str)
    else
        String = format_string(Flags, MaybeWidth, MaybePrec, Str)
    ).

:- pred format_signed_int_component(flags::in,
    maybe_width::in, maybe_prec::in, int::in, string::out) is det.

format_signed_int_component(Flags, MaybeWidth, MaybePrec, Int, String) :-
    ( if using_sprintf then
        % XXX The "d" could be "i"; we don't keep track.
        FormatStr = make_format(Flags, MaybeWidth, MaybePrec,
            int_length_modifer, "d"),
        String = native_format_int(FormatStr, Int)
    else
        String = format_signed_int(Flags, MaybeWidth, MaybePrec, Int)
    ).

:- pred format_unsigned_int_component(flags::in,
    maybe_width::in, maybe_prec::in, int_base::in, int::in, string::out)
    is det.

format_unsigned_int_component(Flags, MaybeWidth, MaybePrec, Base, Int,
        String) :-
    ( if using_sprintf then
        ( Base = base_octal,   SpecChar = "o"
        ; Base = base_decimal, SpecChar = "u"
        ; Base = base_hex_lc,  SpecChar = "x"
        ; Base = base_hex_uc,  SpecChar = "X"
        ; Base = base_hex_p,   SpecChar = "p"
        ),
        FormatStr = make_format(Flags, MaybeWidth, MaybePrec,
            int_length_modifer, SpecChar),
        String = native_format_int(FormatStr, Int)
    else
        String = format_unsigned_int(Flags, MaybeWidth, MaybePrec, Base, Int)
    ).

:- pred format_float_component(flags::in,
    maybe_width::in, maybe_prec::in, float_kind::in, float::in, string::out)
    is det.

format_float_component(Flags, MaybeWidth, MaybePrec, Kind, Float, String) :-
    ( if
        is_finite(Float),
        using_sprintf
    then
        ( Kind = kind_e_scientific_lc, SpecChar = "e"
        ; Kind = kind_e_scientific_uc, SpecChar = "E"
        ; Kind = kind_f_plain_lc,      SpecChar = "f"
        ; Kind = kind_f_plain_uc,      SpecChar = "F"
        ; Kind = kind_g_flexible_lc,   SpecChar = "g"
        ; Kind = kind_g_flexible_uc,   SpecChar = "G"
        ),
        FormatStr = make_format(Flags, MaybeWidth, MaybePrec,
            "", SpecChar),
        String = native_format_float(FormatStr, Float)
    else
        String = format_float(Flags, MaybeWidth, MaybePrec, Kind, Float)
    ).

%----------------------------------------------------------------------------%

    % Construct a format string.
    %
:- func make_format(flags, maybe_width, maybe_prec, string, string) = string.

make_format(Flags, MaybeWidth, MaybePrec, LengthMod, Spec) =
    ( if using_sprintf then
        make_format_sprintf(Flags, MaybeWidth, MaybePrec, LengthMod, Spec)
    else
        make_format_dotnet(Flags, MaybeWidth, MaybePrec, LengthMod, Spec)
    ).

    % Are we using C's sprintf? All backends other than C return false.
    % Note that any backends which return true for using_sprintf/0 must
    % also implement:
    %
    %   int_length_modifer/0
    %   native_format_float/2
    %   native_format_int/2
    %   native_format_string/2
    %   native_format_char/2
    %
:- pred using_sprintf is semidet.

:- pragma foreign_proc("C", using_sprintf,
    [will_not_call_mercury, promise_pure, thread_safe, will_not_modify_trail,
        does_not_affect_liveness, no_sharing],
"
    SUCCESS_INDICATOR = ML_USE_SPRINTF;
").
:- pragma foreign_proc("C#", using_sprintf,
    [will_not_call_mercury, promise_pure, thread_safe],
"
    SUCCESS_INDICATOR = false;
").
:- pragma foreign_proc("Java", using_sprintf,
    [will_not_call_mercury, promise_pure, thread_safe],
"
    SUCCESS_INDICATOR = false;
").
:- pragma foreign_proc("Erlang", using_sprintf,
    [will_not_call_mercury, promise_pure, thread_safe],
"
    SUCCESS_INDICATOR = false
").

:- pred using_sprintf_for_char(char::in) is semidet.

using_sprintf_for_char(_) :-
    semidet_fail.

:- pragma foreign_proc("C",
    using_sprintf_for_char(Char::in),
    [will_not_call_mercury, promise_pure, thread_safe, will_not_modify_trail,
        does_not_affect_liveness, no_sharing],
"
    /* sprintf %c specifier is inadequate for multi-byte UTF-8 characters. */
    SUCCESS_INDICATOR = ML_USE_SPRINTF && MR_is_ascii(Char);
").

:- pred using_sprintf_for_string(string::in) is semidet.

using_sprintf_for_string(_) :-
    semidet_fail.

:- pragma foreign_proc("C",
    using_sprintf_for_string(Str::in),
    [will_not_call_mercury, promise_pure, thread_safe, will_not_modify_trail,
        does_not_affect_liveness, no_sharing],
"
    const char *s;

    SUCCESS_INDICATOR = ML_USE_SPRINTF;
    for (s = Str; *s != '\\0'; s++) {
        /*
         * sprintf %s specifier is inadequate for multi-byte UTF-8 characters,
         * if there is a field width or precision specified.
         */
        if (!MR_utf8_is_single_byte(*s)) {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
    }
").

    % Construct a format string suitable to passing to sprintf.
    %
:- func make_format_sprintf(flags, maybe_width, maybe_prec, string,
    string) = string.

make_format_sprintf(Flags, MaybeWidth, MaybePrec, LengthMod, Spec) = String :-
    Flags = flags(FlagHash, FlagSpace, FlagZero, FlagMinus, FlagPlus),
    ( FlagHash  = flag_hash_clear,  FlagHashStr  = ""
    ; FlagHash  = flag_hash_set,    FlagHashStr  = "#"
    ),
    ( FlagSpace = flag_space_clear, FlagSpaceStr = ""
    ; FlagSpace = flag_space_set,   FlagSpaceStr = " "
    ),
    ( FlagZero  = flag_zero_clear,  FlagZeroStr  = ""
    ; FlagZero  = flag_zero_set,    FlagZeroStr  = "0"
    ),
    ( FlagMinus = flag_minus_clear, FlagMinusStr = ""
    ; FlagMinus = flag_minus_set,   FlagMinusStr = "-"
    ),
    ( FlagPlus  = flag_plus_clear,  FlagPlusStr  = ""
    ; FlagPlus  = flag_plus_set,    FlagPlusStr  = "+"
    ),
    (
        MaybeWidth = yes(Width),
        WidthStr = int_to_string(Width)
    ;
        MaybeWidth = no,
        WidthStr = ""
    ),
    (
        MaybePrec = yes(Prec),
        PrecPrefixStr = ".",
        PrecStr = int_to_string(Prec)
    ;
        MaybePrec = no,
        PrecPrefixStr = "",
        PrecStr = ""
    ),
    String = string.append_list(["%",
        FlagHashStr, FlagSpaceStr, FlagZeroStr, FlagMinusStr, FlagPlusStr,
        WidthStr, PrecPrefixStr, PrecStr, LengthMod, Spec]).

    % Construct a format string suitable to passing to .NET's formatting
    % functions.
    % XXX this code is not yet complete. We need to do a lot more work
    % to make this work perfectly.
    %
:- func make_format_dotnet(flags, maybe_width, maybe_prec, string,
    string) = string.

make_format_dotnet(_Flags, MaybeWidth, MaybePrec, _LengthMod, Spec0)
        = String :-
    (
        MaybeWidth = yes(Width),
        WidthPrefixStr = ",",
        WidthStr = int_to_string(Width)
    ;
        MaybeWidth = no,
        WidthPrefixStr = "",
        WidthStr = ""
    ),
    (
        MaybePrec = yes(Prec),
        PrecStr = int_to_string(Prec)
    ;
        MaybePrec = no,
        PrecStr = ""
    ),
    ( if Spec0 = "i" then
        Spec = "d"
    else if Spec0 = "f" then
        Spec = "e"
    else
        Spec = Spec0
    ),
    String = string.append_list([
        "{0",
        WidthPrefixStr,
        WidthStr,
        ":",
        Spec,
        PrecStr,
%       LengthMod,
%       from_char_list(Flags),
        "}"]).

:- func int_length_modifer = string.

:- pragma foreign_proc("C",
    int_length_modifer = (LengthModifier::out),
    [will_not_call_mercury, promise_pure, thread_safe, will_not_modify_trail,
        does_not_affect_liveness, no_sharing],
"{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}").

int_length_modifer = _ :-
    % This predicate is only called if using_sprintf/0, so we produce an error
    % by default.
    error("string.int_length_modifer/0 not defined").

    % Create a string from a float using the format string.
    % Note it is the responsibility of the caller to ensure that the
    % format string is valid.
    %
:- func native_format_float(string, float) = string.

:- pragma foreign_proc("C",
    native_format_float(FormatStr::in, Val::in) = (Str::out),
    [will_not_call_mercury, promise_pure, thread_safe, will_not_modify_trail,
        does_not_affect_liveness, no_sharing],
"{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, (double) Val);
    MR_restore_transient_hp();
}").
native_format_float(_, _) = _ :-
    % This predicate is only called if using_sprintf/0, so we produce an error
    % by default.
    error("string.native_format_float/2 not defined").

    % Create a string from a int using the format string.
    % Note it is the responsibility of the caller to ensure that the
    % format string is valid.
    %
:- func native_format_int(string, int) = string.

:- pragma foreign_proc("C",
    native_format_int(FormatStr::in, Val::in) = (Str::out),
    [will_not_call_mercury, promise_pure, thread_safe, will_not_modify_trail,
        does_not_affect_liveness, no_sharing],
"{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}").
native_format_int(_, _) = _ :-
    % This predicate is only called if using_sprintf/0, so we produce an error
    % by default.
    error("string.native_format_int/2 not defined").

    % Create a string from a string using the format string.
    % Note it is the responsibility of the caller to ensure that the
    % format string is valid.
    %
:- func native_format_string(string, string) = string.

:- pragma foreign_proc("C",
    native_format_string(FormatStr::in, Val::in) = (Str::out),
    [will_not_call_mercury, promise_pure, thread_safe, will_not_modify_trail,
        does_not_affect_liveness, no_sharing],
"{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}").
native_format_string(_, _) = _ :-
    % This predicate is only called if using_sprintf/0, so we produce an error
    % by default.
    error("string.native_format_string/2 not defined").

    % Create a string from a char using the format string.
    % Note it is the responsibility of the caller to ensure that the
    % format string is valid.
    %
:- func native_format_char(string, char) = string.

:- pragma foreign_proc("C",
    native_format_char(FormatStr::in, Val::in) = (Str::out),
    [will_not_call_mercury, promise_pure, thread_safe, will_not_modify_trail,
        does_not_affect_liveness, no_sharing],
"{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}").
native_format_char(_, _) = _ :-
    % This predicate is only called if using_sprintf/0, so we produce an error
    % by default.
    error("string.native_format_char/2 not defined").

%----------------------------------------------------------------------------%

    % Format a character.
    %
:- func format_char(flags, maybe_width, char) = string.

format_char(Flags, MaybeWidth, Char) = String :-
    CharStr = string.char_to_string(Char),
    String = justify_string(Flags, MaybeWidth, CharStr).

    % Format a string.
    %
:- func format_string(flags, maybe_width, maybe_prec, string) = string.

format_string(Flags, MaybeWidth, MaybePrec, OldStr) = NewStr :-
    (
        MaybePrec = yes(NumChars),
        PrecStr = string.left_by_codepoint(OldStr, NumChars)
    ;
        MaybePrec = no,
        PrecStr = OldStr
    ),
    NewStr = justify_string(Flags, MaybeWidth, PrecStr).

:- func format_signed_int(flags, maybe_width, maybe_prec, int) = string.

format_signed_int(Flags, MaybeWidth, MaybePrec, Int) = String :-
    ( if Int = 0 then
        % Zero is a special case. The abs_integer_to_decimal function
        % returns "" for 0, but returning no digits at all is ok
        % only if our caller explicitly allowed us to do so.
        ( if MaybePrec = yes(0) then
            AbsIntStr = ""
        else
            AbsIntStr = "0"
        )
    else
        % In the general case, we use the arbitrary-precision arithmetic
        % of integer.m to print integers. This is needed to print
        % the most negative number of our platform, whose absolute value
        % cannot be represented natively on machines with two's complement
        % integers.
        % However, if the absolute value of the integer we want to print
        % *does* fit into a native int, we want to work on ints, not integers.
        % We assume that our platform has at least 32 bit ints; note that
        % 2147483647 = 2^31-1. The "absolute value of" part of the above
        % is why the test is designed to fail for -2147483648.
        ( if -2147483647 =< Int, Int =< 2147483647 then
            AbsInt = int.abs(Int),
            AbsIntStr = abs_int_to_decimal(AbsInt)
        else
            AbsInteger = integer.abs(integer(Int)),
            AbsIntStr = abs_integer_to_decimal(AbsInteger)
        )
    ),
    AbsIntStrLength = string.count_codepoints(AbsIntStr),

    % Do we need to increase precision?
    ( if
        MaybePrec = yes(Prec),
        Prec > AbsIntStrLength
    then
        PrecStr = string.pad_left(AbsIntStr, '0', Prec)
    else
        PrecStr = AbsIntStr
    ),

    % Do we need to pad to the field width?
    ( if
        MaybeWidth = yes(Width),
        Width > string.count_codepoints(PrecStr),
        Flags ^ flag_zero = flag_zero_set,
        Flags ^ flag_minus = flag_minus_clear,
        MaybePrec = no
    then
        FieldStr = string.pad_left(PrecStr, '0', Width - 1),
        ZeroPadded = yes
    else
        FieldStr = PrecStr,
        ZeroPadded = no
    ),

    % Prefix with appropriate sign or zero padding.
    % The previous step has deliberately left room for this.
    SignedStr = add_sign_like_prefix_to_int_if_needed(Flags, ZeroPadded, Int,
        FieldStr),
    String = justify_string(Flags, MaybeWidth, SignedStr).

    % Format an unsigned int, unsigned octal, or unsigned hexadecimal
    % (u,o,x,X,p).
    %
:- func format_unsigned_int(flags, maybe_width, maybe_prec, int_base, int)
    = string.

format_unsigned_int(Flags, MaybeWidth, MaybePrec, Base, Int) = String :-
    ( if Int = 0 then
        % Zero is a special case. The abs_integer_to_decimal function
        % returns "" for 0, but returning no digits at all is ok
        % only if our caller explicitly allowed us to do so.
        ( if MaybePrec = yes(0) then
            AbsIntStr = ""
        else
            AbsIntStr = "0"
        )
    else
        % If the platform we are running on can't represent the absolute
        % value of a 16 bit signed number natively, we are in big trouble.
        %
        % Our caller wants us to treat Int as unsigned, but Mercury treats it
        % as signed. We use native arithmetic on ints (as opposed to arbitrary
        % precision arithmetic on integers) on Int only in cases where
        % the two notions coincide, i.e. if we know that Int is positive
        % even when viewed as a signed number, and that is so even on
        % 16 bit machines.
        ( if 0 =< Int, Int =< 32767 then
            (
                Base = base_octal,
                AbsIntStr = abs_int_to_octal(Int)
            ;
                Base = base_decimal,
                AbsIntStr = abs_int_to_decimal(Int)
            ;
                ( Base = base_hex_lc
                ; Base = base_hex_p
                ),
                AbsIntStr = abs_int_to_hex_lc(Int)
            ;
                Base = base_hex_uc,
                AbsIntStr = abs_int_to_hex_uc(Int)
            )
        else
            Div = integer.pow(integer(2), integer(int.bits_per_int)),
            UnsignedInteger = integer(Int) mod Div,
            (
                Base = base_octal,
                AbsIntStr = abs_integer_to_octal(UnsignedInteger)
            ;
                Base = base_decimal,
                AbsIntStr = abs_integer_to_decimal(UnsignedInteger)
            ;
                ( Base = base_hex_lc
                ; Base = base_hex_p
                ),
                AbsIntStr = abs_integer_to_hex_lc(UnsignedInteger)
            ;
                Base = base_hex_uc,
                AbsIntStr = abs_integer_to_hex_uc(UnsignedInteger)
            )
        )
    ),
    AbsIntStrLength = string.count_codepoints(AbsIntStr),

    % Do we need to increase precision?
    ( if
        MaybePrec = yes(Prec),
        Prec > AbsIntStrLength
    then
        PrecStr = string.pad_left(AbsIntStr, '0', Prec)
    else
        PrecStr = AbsIntStr
    ),

    % Do we need to increase the precision of an octal?
    ( if
        Base = base_octal,
        Flags ^ flag_hash = flag_hash_set,
        \+ string.prefix(PrecStr, "0")
    then
        PrecModStr = append("0", PrecStr)
    else
        PrecModStr = PrecStr
    ),

    % Do we need to pad to the field width?
    ( if
        MaybeWidth = yes(Width),
        Width > string.count_codepoints(PrecModStr),
        Flags ^ flag_zero = flag_zero_set,
        Flags ^ flag_minus = flag_minus_clear,
        MaybePrec = no
    then
        % Do we need to make room for "0x" or "0X" ?
        ( if
            Flags ^ flag_hash = flag_hash_set,
            (
                Base = base_hex_p,
                Prefix = "0x"
            ;
                Base = base_hex_lc,
                Int \= 0,
                Prefix = "0x"
            ;
                Base = base_hex_uc,
                Int \= 0,
                Prefix = "0X"
            )
        then
            FieldStr = string.pad_left(PrecModStr, '0', Width - 2),
            FieldModStr = Prefix ++ FieldStr
        else
            FieldStr = string.pad_left(PrecModStr, '0', Width),
            FieldModStr = FieldStr
        )
    else
        FieldStr = PrecModStr,
        % Do we have to prefix "0x" or "0X"?
        ( if
            Flags ^ flag_hash = flag_hash_set,
            (
                Base = base_hex_p,
                Prefix = "0x"
            ;
                Base = base_hex_lc,
                Int \= 0,
                Prefix = "0x"
            ;
                Base = base_hex_uc,
                Int \= 0,
                Prefix = "0X"
            )
        then
            FieldModStr = Prefix ++ FieldStr
        else
            FieldModStr = FieldStr
        )
    ),

    String = justify_string(Flags, MaybeWidth, FieldModStr).

%----------------------------------------------------------------------------%

    % Format a float.
    %
:- func format_float(flags, maybe_width, maybe_prec, float_kind, float)
    = string.

format_float(Flags, MaybeWidth, MaybePrec, Kind, Float) = String :-
    ( if is_nan(Float) then
        (
            ( Kind = kind_e_scientific_lc
            ; Kind = kind_f_plain_lc
            ; Kind = kind_g_flexible_lc
            ),
            SignedStr = "nan"
        ;
            ( Kind = kind_e_scientific_uc
            ; Kind = kind_f_plain_uc
            ; Kind = kind_g_flexible_uc
            ),
            SignedStr = "NAN"
        )
    else if is_infinite(Float) then
        (
            ( Kind = kind_e_scientific_lc
            ; Kind = kind_f_plain_lc
            ; Kind = kind_g_flexible_lc
            ),
            SignedStr = ( if Float < 0.0 then "-infinity" else "infinity" )
        ;
            ( Kind = kind_e_scientific_uc
            ; Kind = kind_f_plain_uc
            ; Kind = kind_g_flexible_uc
            ),
            SignedStr = ( if Float < 0.0 then "-INFINITY" else "INFINITY" )
        )
    else
        % XXX This general approach of converting the float to a string
        % using convert_float_to_string and then post-processing it
        % is far from ideal, since it is significantly less efficient
        % than building the right string directly.
        AbsFloat = abs(Float),
        AbsStr = convert_float_to_string(AbsFloat),

        % Change precision if needed.
        (
            ( Kind = kind_e_scientific_lc, E = "e"
            ; Kind = kind_e_scientific_uc, E = "E"
            ),
            Prec = get_prec_to_use(MaybePrec),
            PrecStr = change_to_e_notation(AbsStr, Prec, E),

            % Do we need to remove the decimal point?
            ( if
                Flags ^ flag_hash = flag_hash_clear,
                MaybePrec = yes(0)
            then
                split_at_decimal_point(PrecStr, BaseStr, ExponentStr),
                PrecModStr = BaseStr ++ ExponentStr
            else
                PrecModStr = PrecStr
            )
        ;
            ( Kind = kind_f_plain_lc
            ; Kind = kind_f_plain_uc
            ),
            Prec = get_prec_to_use(MaybePrec),
            PrecStr = change_precision(AbsStr, Prec),

            % Do we need to remove the decimal point?
            ( if
                Flags ^ flag_hash = flag_hash_clear,
                MaybePrec = yes(0)
            then
                PrecStrLen = string.count_codepoints(PrecStr),
                PrecModStr = string.between(PrecStr, 0, PrecStrLen - 1)
            else
                PrecModStr = PrecStr
            )
        ;
            ( Kind = kind_g_flexible_lc, E = "e"
            ; Kind = kind_g_flexible_uc, E = "E"
            ),
            Prec = get_prec_to_use_minimum_1(MaybePrec),
            PrecStr = change_to_g_notation(AbsStr, Prec, E, Flags),
            % Don't ever remove the decimal point.
            % XXX Why? Does change_to_g_notation do it?
            PrecModStr = PrecStr
        ),

        % Do we need to change field width?
        ( if
            MaybeWidth = yes(Width),
            Width > string.count_codepoints(PrecModStr),
            Flags ^ flag_zero = flag_zero_set,
            Flags ^ flag_minus = flag_minus_clear
        then
            FieldStr = string.pad_left(PrecModStr, '0', Width - 1),
            ZeroPadded = yes
        else
            FieldStr = PrecModStr,
            ZeroPadded = no
        ),

        % Finishing up.
        SignedStr = add_sign_like_prefix_to_float_if_needed(Flags, ZeroPadded,
            Float, FieldStr)
    ),
    String = justify_string(Flags, MaybeWidth, SignedStr).

:- func get_prec_to_use(maybe_prec) = int.
:- pragma inline(get_prec_to_use/1).

get_prec_to_use(MaybePrec) = Prec :-
    (
        MaybePrec = yes(Prec)
    ;
        MaybePrec = no,
        % The default precision is 6.
        Prec = 6
    ).

:- func get_prec_to_use_minimum_1(maybe_prec) = int.
:- pragma inline(get_prec_to_use_minimum_1/1).

get_prec_to_use_minimum_1(MaybePrec) = Prec :-
    (
        MaybePrec = yes(Prec0),
        ( if Prec0 = 0 then
            Prec = 1
        else
            Prec = Prec0
        )
    ;
        MaybePrec = no,
        % The default precision is 6.
        Prec = 6
    ).

%--------------------------------------------------------------------------%

:- func add_sign_like_prefix_to_int_if_needed(flags, bool, int, string)
    = string.
:- pragma inline(add_sign_like_prefix_to_int_if_needed/4).

add_sign_like_prefix_to_int_if_needed(Flags, ZeroPadded, Int, FieldStr)
        = SignedStr :-
    ( if Int < 0 then
        SignedStr = "-" ++ FieldStr
    else if Flags ^ flag_plus = flag_plus_set then
        SignedStr = "+" ++ FieldStr
    else if Flags ^ flag_space = flag_space_set then
        SignedStr = " " ++ FieldStr
    else
        (
            ZeroPadded = yes,
            SignedStr = "0" ++ FieldStr
        ;
            ZeroPadded = no,
            SignedStr = FieldStr
        )
    ).

:- func add_sign_like_prefix_to_float_if_needed(flags, bool, float, string)
    = string.
:- pragma inline(add_sign_like_prefix_to_float_if_needed/4).

add_sign_like_prefix_to_float_if_needed(Flags, ZeroPadded, Float, FieldStr)
        = SignedStr :-
    % XXX Float < 0.0 is the wrong test, because it fails for -0.0.
    % We should test the sign bit instead. This can be done using
    % signbit(Float) in C, but I (zs) don't know its equivalents
    % for the other backends.
    ( if Float < 0.0 then
        SignedStr = "-" ++ FieldStr
    else if Flags ^ flag_plus = flag_plus_set then
        SignedStr = "+" ++ FieldStr
    else if Flags ^ flag_space = flag_space_set then
        SignedStr = " " ++ FieldStr
    else
        (
            ZeroPadded = yes,
            SignedStr = "0" ++ FieldStr
        ;
            ZeroPadded = no,
            SignedStr = FieldStr
        )
    ).

:- func justify_string(flags, maybe_width, string) = string.

justify_string(Flags, MaybeWidth, Str) = JustifiedStr :-
    ( if
        MaybeWidth = yes(Width),
        Width > string.count_codepoints(Str)
    then
        ( if Flags ^ flag_minus = flag_minus_set then
            string.pad_right(Str, ' ', Width, JustifiedStr)
        else
            string.pad_left(Str, ' ', Width, JustifiedStr)
        )
    else
        JustifiedStr = Str
    ).

%--------------------------------------------------------------------------%
%
% Each of these functions converts a non-negative integer (that originally
% came from a Mercury int) to a string of octal, decimal or hex digits.
%
% The input is an arbitrary precision integer because if either
%
% - the original number is a signed int, and its value is minint, or
% - the original number is an unsigned int, and its value has the most
%   significant bit set,
%
% then the absolute value of that number cannot be represented as
% a Mercury int, which is always signed and always word-sized. However,
% once we have divided the original integer by 8, 10 or 16, the result
% is guaranteed not to suffer from either of the problems above,
% so we process it as an Mercury int, which is a lot faster.

    % Convert a non-negative integer to an octal string.
    %
:- func abs_integer_to_octal(integer) = string.
:- func abs_int_to_octal(int) = string.

abs_integer_to_octal(Num) = NumStr :-
    ( if Num > integer(0) then
        Integer8 = integer(8),
        FrontDigitsStr = abs_int_to_octal(int(Num // Integer8)),
        LastDigitStr = get_octal_digit(int(Num rem Integer8)),
        NumStr = append(FrontDigitsStr, LastDigitStr)
    else
        NumStr = ""
    ).

abs_int_to_octal(Num) = NumStr :-
    ( if Num > 0 then
        FrontDigitsStr = abs_int_to_octal(Num // 8),
        LastDigitStr = get_octal_digit(Num rem 8),
        NumStr = append(FrontDigitsStr, LastDigitStr)
    else
        NumStr = ""
    ).

    % Convert a non-negative integer to a decimal string.
    %
:- func abs_integer_to_decimal(integer) = string.
:- func abs_int_to_decimal(int) = string.

abs_integer_to_decimal(Num) = NumStr :-
    ( if Num > integer(0) then
        Integer10 = integer(10),
        FrontDigitsStr = abs_int_to_decimal(int(Num // Integer10)),
        LastDigitStr = get_decimal_digit(int(Num rem Integer10)),
        NumStr = append(FrontDigitsStr, LastDigitStr)
    else
        NumStr = ""
    ).

abs_int_to_decimal(Num) = NumStr :-
    ( if Num > 0 then
        FrontDigitsStr = abs_int_to_decimal(Num // 10),
        LastDigitStr = get_decimal_digit(Num rem 10),
        NumStr = append(FrontDigitsStr, LastDigitStr)
    else
        NumStr = ""
    ).

    % Convert a non-negative integer to a hexadecimal string,
    % using a-f for to_hex_lc and A-F for to_hex_uc.
    %
:- func abs_integer_to_hex_lc(integer) = string.
:- func abs_integer_to_hex_uc(integer) = string.
:- func abs_int_to_hex_lc(int) = string.
:- func abs_int_to_hex_uc(int) = string.

abs_integer_to_hex_lc(Num) = NumStr :-
    ( if Num > integer(0) then
        Integer16 = integer(16),
        FrontDigitsStr = abs_int_to_hex_lc(int(Num // Integer16)),
        LastDigitStr = get_hex_digit_lc(int(Num rem Integer16)),
        NumStr = append(FrontDigitsStr, LastDigitStr)
    else
        NumStr = ""
    ).

abs_integer_to_hex_uc(Num) = NumStr :-
    ( if Num > integer(0) then
        Integer16 = integer(16),
        FrontDigitsStr = abs_int_to_hex_uc(int(Num // Integer16)),
        LastDigitStr = get_hex_digit_uc(int(Num rem Integer16)),
        NumStr = append(FrontDigitsStr, LastDigitStr)
    else
        NumStr = ""
    ).

abs_int_to_hex_lc(Num) = NumStr :-
    ( if Num > 0 then
        FrontDigitsStr = abs_int_to_hex_lc(Num // 16),
        LastDigitStr = get_hex_digit_lc(Num rem 16),
        NumStr = append(FrontDigitsStr, LastDigitStr)
    else
        NumStr = ""
    ).

abs_int_to_hex_uc(Num) = NumStr :-
    ( if Num > 0 then
        FrontDigitsStr = abs_int_to_hex_uc(Num // 16),
        LastDigitStr = get_hex_digit_uc(Num rem 16),
        NumStr = append(FrontDigitsStr, LastDigitStr)
    else
        NumStr = ""
    ).

%----------------------------------------------------------------------------%

    % Given an int between 0 and 7, return the octal digit representing it.
    %
:- func get_octal_digit(int) = string.
:- pragma inline(get_octal_digit/1).

get_octal_digit(Int) = Octal :-
    ( if octal_digit(Int, OctalPrime) then
        Octal = OctalPrime
    else
        unexpected($module, $pred, "octal_digit failed")
    ).

    % Given an int between 0 and 9, return the decimal digit representing it.
    %
:- func get_decimal_digit(int) = string.
:- pragma inline(get_decimal_digit/1).

get_decimal_digit(Int) = Decimal :-
    ( if decimal_digit(Int, DecimalPrime) then
        Decimal = DecimalPrime
    else
        unexpected($module, $pred, "decimal_digit failed")
    ).

    % Given an int between 0 and 15, return the hexadecimal digit
    % representing it, using a-f for get_hex_digit_lc and
    % A-F for get_hex_digit_uc.
    %
:- func get_hex_digit_lc(int) = string.
:- func get_hex_digit_uc(int) = string.
:- pragma inline(get_hex_digit_lc/1).
:- pragma inline(get_hex_digit_uc/1).

get_hex_digit_lc(Int) = HexLC :-
    ( if hex_digit(Int, HexLCPrime, _HexUC) then
        HexLC = HexLCPrime
    else
        unexpected($module, $pred, "hex_digit failed")
    ).

get_hex_digit_uc(Int) = HexUC :-
    ( if hex_digit(Int, _HexLC, HexUCPrime) then
        HexUC = HexUCPrime
    else
        unexpected($module, $pred, "hex_digit failed")
    ).

:- pred octal_digit(int::in, string::out) is semidet.

octal_digit(0, "0").
octal_digit(1, "1").
octal_digit(2, "2").
octal_digit(3, "3").
octal_digit(4, "4").
octal_digit(5, "5").
octal_digit(6, "6").
octal_digit(7, "7").

:- pred decimal_digit(int::in, string::out) is semidet.

decimal_digit(0, "0").
decimal_digit(1, "1").
decimal_digit(2, "2").
decimal_digit(3, "3").
decimal_digit(4, "4").
decimal_digit(5, "5").
decimal_digit(6, "6").
decimal_digit(7, "7").
decimal_digit(8, "8").
decimal_digit(9, "9").

:- pred hex_digit(int::in, string::out, string::out) is semidet.

hex_digit( 0, "0", "0").
hex_digit( 1, "1", "1").
hex_digit( 2, "2", "2").
hex_digit( 3, "3", "3").
hex_digit( 4, "4", "4").
hex_digit( 5, "5", "5").
hex_digit( 6, "6", "6").
hex_digit( 7, "7", "7").
hex_digit( 8, "8", "8").
hex_digit( 9, "9", "9").
hex_digit(10, "a", "A").
hex_digit(11, "b", "B").
hex_digit(12, "c", "C").
hex_digit(13, "d", "D").
hex_digit(14, "e", "E").
hex_digit(15, "f", "F").

%----------------------------------------------------------------------------%

    % Unlike the standard library function, this function converts a float
    % to a string without resorting to scientific notation.
    %
    % This predicate relies on the fact that string.float_to_string returns
    % a float which is round-trippable, ie to the full precision needed.
    %
:- func convert_float_to_string(float) = string.

convert_float_to_string(Float) = String :-
    float_to_string_first_pass(Float, FloatStr),

    % Check for scientific representation.
    ( if
        ( string.contains_char(FloatStr, 'e')
        ; string.contains_char(FloatStr, 'E')
        )
    then
        split_at_exponent(FloatStr, FloatPtStr, ExpStr),
        split_at_decimal_point(FloatPtStr, MantissaStr, FractionStr),

        % What is the exponent?
        ExpInt = string.det_to_int(ExpStr),
        ( if ExpInt >= 0 then
            % Move decimal pt to the right.
            ExtraDigits = ExpInt,
            PaddedFracStr = string.pad_right(FractionStr, '0', ExtraDigits),
            string.split(PaddedFracStr, ExtraDigits, MantissaRest,
                NewFraction),

            NewMantissa = MantissaStr ++ MantissaRest,
            MantAndPoint = NewMantissa ++ ".",
            ( if NewFraction = "" then
                String = MantAndPoint ++ "0"
            else
                String = MantAndPoint ++ NewFraction
            )
        else
            % Move decimal pt to the left.
            ExtraDigits = abs(ExpInt),
            PaddedMantissaStr = string.pad_left(MantissaStr, '0',
                ExtraDigits),
            string.split(PaddedMantissaStr,
                length(PaddedMantissaStr) - ExtraDigits,
                NewMantissa, FractionRest),

            ( if NewMantissa = "" then
                MantAndPoint = "0."
            else
                MantAndPoint = NewMantissa ++ "."
            ),
            String = MantAndPoint ++ FractionRest ++ FractionStr
        )
    else
        String = FloatStr
    ).

    % float_to_string_first_pass differs from string.float_to_string in that
    % it must be implemented without calling string.format, as this is the
    % predicate that the implementation of string.format uses to get
    % the initial string representation of a float.
    %
    % The string returned must match one of the following regular expression:
    %   ^[+-]?[0-9]*\.?[0-9]+((e|E)[0-9]+)?$
    %   ^[nN][aA][nN]$
    %   ^[+-]?[iI][nN][fF][iI][nN][iI][tT][yY]$
    %   ^[+-]?[iI][nN][fF]$
    % and the string returned must have sufficient precision for representing
    % the float.
    %
:- pred float_to_string_first_pass(float::in, string::uo) is det.

:- pragma foreign_proc("C",
    float_to_string_first_pass(FloatVal::in, FloatString::uo),
    [will_not_call_mercury, promise_pure, thread_safe, will_not_modify_trail,
        does_not_affect_liveness, no_sharing],
"{
    /*
    ** Note any changes here will require the same changes in
    ** string.float_to_string.
    */
    MR_float_to_string(FloatVal, FloatString, MR_ALLOC_ID);
}").
:- pragma foreign_proc("C#",
    float_to_string_first_pass(FloatVal::in, FloatString::uo),
    [will_not_call_mercury, promise_pure, thread_safe],
"
    // The R format string prints the double out such that it can be
    // round-tripped.
    // XXX According to the documentation it tries the 15 digits of precision,
    // then 17 digits skipping 16 digits of precision, unlike what we do
    // for the C backend.
    FloatString = FloatVal.ToString(""R"");
").
:- pragma foreign_proc("Java",
    float_to_string_first_pass(FloatVal::in, FloatString::uo),
    [will_not_call_mercury, promise_pure, thread_safe],
"
    FloatString = java.lang.Double.toString(FloatVal);
").
:- pragma foreign_proc("Erlang",
    float_to_string_first_pass(FloatVal::in, FloatString::uo),
    [will_not_call_mercury, promise_pure, thread_safe],
"
    List = io_lib:format(""~.17g"", [FloatVal]),
    FloatString = list_to_binary(List)
").

    % Converts a floating point number to a specified number of standard
    % figures. The style used depends on the value converted; style e (or E)
    % is used only if the exponent resulting from such a conversion is less
    % than -4 or greater than or equal to the precision. Trailing zeros are
    % removed from the fractional portion of the result unless the # flag
    % is specified: a decimal-point character appears only if it is followed
    % by a digit.
    %
:- func change_to_g_notation(string, int, string, flags) = string.

change_to_g_notation(Float, Prec, E, Flags) = FormattedFloat :-
    Exponent = size_of_required_exponent(Float, Prec),
    ( if
        Exponent >= -4,
        Exponent < Prec
    then
        % Float will be represented normally.
        % -----------------------------------
        % We need to calculate precision to pass to change_precision,
        % because the current precision represents significant figures,
        % not decimal places.
        %
        % Now change float's precision.
        %
        ( if Exponent =< 0 then
            % Deal with floats such as 0.00000000xyz.
            DecimalPos = decimal_pos(Float),
            FormattedFloat0 = change_precision(Float,
                abs(DecimalPos) - 1 + Prec)
        else
            % Deal with floats such as ddddddd.mmmmmmmm.
            ScientificFloat = change_to_e_notation(Float, Prec - 1, "e"),
            split_at_exponent(ScientificFloat, BaseStr, ExponentStr),
            Exp = string.det_to_int(ExponentStr),
            split_at_decimal_point(BaseStr, MantissaStr, FractionStr),
            RestMantissaStr = between(FractionStr, 0, Exp),
            NewFraction = between(FractionStr, Exp, Prec - 1),
            FormattedFloat0 = MantissaStr ++ RestMantissaStr
                ++ "." ++ NewFraction
        ),

        % Do we remove trailing zeros?
        ( if Flags ^ flag_hash = flag_hash_set then
            FormattedFloat = FormattedFloat0
        else
            FormattedFloat = remove_trailing_zeros(FormattedFloat0)
        )
    else
        % Float will be represented in scientific notation.
        % -------------------------------------------------
        UncheckedFloat = change_to_e_notation(Float, Prec - 1, E),

        % Do we need to remove trailing zeros?
        ( if Flags ^ flag_hash = flag_hash_set then
            FormattedFloat = UncheckedFloat
        else
            split_at_exponent(UncheckedFloat, BaseStr, ExponentStr),
            NewBaseStr = remove_trailing_zeros(BaseStr),
            FormattedFloat = NewBaseStr ++ E ++ ExponentStr
        )
    ).

    % Convert floating point notation to scientific notation.
    %
:- func change_to_e_notation(string, int, string) = string.

change_to_e_notation(Float, Prec, E) = ScientificFloat :-
    UnsafeExponent = decimal_pos(Float),
    UnsafeBase = calculate_base_unsafe(Float, Prec),

    % Is mantissa greater than one digit long?
    split_at_decimal_point(UnsafeBase, MantissaStr, _FractionStr),
    ( if string.count_codepoints(MantissaStr) > 1 then
        % Need to append 0, to fix the problem of having no numbers
        % after the decimal point.
        SafeBase = calculate_base_unsafe(string.append(UnsafeBase, "0"),
            Prec),
        SafeExponent = UnsafeExponent + 1
    else
        SafeBase = UnsafeBase,
        SafeExponent = UnsafeExponent
    ),
    % Creating exponent.
    ( if SafeExponent >= 0 then
        ( if SafeExponent < 10 then
            ExponentStr = string.append_list(
                [E, "+0", string.int_to_string(SafeExponent)])
        else
            ExponentStr = string.append_list(
                [E, "+", string.int_to_string(SafeExponent)])
        )
    else
        ( if SafeExponent > -10 then
            ExponentStr = string.append_list(
                [E, "-0", string.int_to_string(int.abs(SafeExponent))])
        else
            ExponentStr = E ++ string.int_to_string(SafeExponent)
        )
    ),
    ScientificFloat = SafeBase ++ ExponentStr.

    % Given a floating point number, this function calculates the size of
    % the exponent needed to represent the float in scientific notation.
    %
:- func size_of_required_exponent(string, int) = int.

size_of_required_exponent(Float, Prec) = Exponent :-
    UnsafeExponent = decimal_pos(Float),
    UnsafeBase = calculate_base_unsafe(Float, Prec),

    % Is mantissa one digit long?
    split_at_decimal_point(UnsafeBase, MantissaStr, _FractionStr),
    ( if string.count_codepoints(MantissaStr) > 1 then
        % We will need to move decimal pt one place to the left:
        % therefore, increment exponent.
        Exponent = UnsafeExponent + 1
    else
        Exponent = UnsafeExponent
    ).

    % Given a string representing a floating point number, function returns
    % a string with all trailing zeros removed.
    %
:- func remove_trailing_zeros(string) = string.

remove_trailing_zeros(Float) = TrimmedFloat :-
    FloatCharList = string.to_char_list(Float),
    FloatCharListRev = list.reverse(FloatCharList),
    TrimmedFloatRevCharList = remove_zeros(FloatCharListRev),
    TrimmedFloatCharList = list.reverse(TrimmedFloatRevCharList),
    TrimmedFloat = string.from_char_list(TrimmedFloatCharList).

    % Given a char list, this function removes all leading zeros, including
    % decimal point, if need be.
    %
:- func remove_zeros(list(char)) = list(char).

remove_zeros(CharNum) = TrimmedNum :-
    ( if CharNum = ['0' | Rest] then
        TrimmedNum = remove_zeros(Rest)
    else if CharNum = ['.' | Rest] then
        TrimmedNum = Rest
    else
        TrimmedNum = CharNum
    ).

    % Determine the location of the decimal point in the string that
    % represents a floating point number.
    %
:- func decimal_pos(string) = int.

decimal_pos(Float) = Pos :-
    split_at_decimal_point(Float, MantissaStr, _FractionStr),
    NumZeros = string.count_codepoints(MantissaStr) - 1,
    Pos = find_non_zero_pos(string.to_char_list(Float), NumZeros).

    % Given a list of chars representing a floating point number, this
    % function determines the first position containing a non-zero digit.
    % Positions after the decimal point are negative, and those before the
    % decimal point are positive.
    %
:- func find_non_zero_pos(list(char), int) = int.

find_non_zero_pos(L, CurrentPos) = ActualPos :-
    (
        L = [H | T],
        ( if is_decimal_point(H) then
            ActualPos = find_non_zero_pos(T, CurrentPos)
        else if H = '0' then
            ActualPos = find_non_zero_pos(T, CurrentPos - 1)
        else
            ActualPos = CurrentPos
        )
    ;
        L = [],
        ActualPos = 0
    ).

    % Representing a floating point number in scientific notation requires
    % a base and an exponent. This function returns the base.
    % But it is unsafe, because particular inputs can result in the base
    % having a mantissa with more than one digit. Therefore, the calling
    % function must check for this problem.
    %
:- func calculate_base_unsafe(string, int) = string.

calculate_base_unsafe(Float, Prec) = Exp :-
    Place = decimal_pos(Float),
    split_at_decimal_point(Float, MantissaStr, FractionStr),
    ( if Place < 0 then
        DecimalPos = abs(Place),
        PaddedMantissaStr = string.between(FractionStr, 0, DecimalPos),

        % Get rid of superfluous zeros.
        MantissaInt = string.det_to_int(PaddedMantissaStr),
        ExpMantissaStr = string.int_to_string(MantissaInt),

        % Create fractional part.
        PaddedFractionStr = pad_right(FractionStr, '0', Prec + 1),
        ExpFractionStr = string.between(PaddedFractionStr, DecimalPos,
            DecimalPos + Prec + 1)
    else if Place > 0 then
        ExpMantissaStr = string.between(MantissaStr, 0, 1),
        FirstHalfOfFractionStr = string.between(MantissaStr, 1, Place + 1),
        ExpFractionStr = FirstHalfOfFractionStr ++ FractionStr
    else
        ExpMantissaStr = MantissaStr,
        ExpFractionStr = FractionStr
    ),
    MantissaAndPoint = ExpMantissaStr ++ ".",
    UnroundedExpStr = MantissaAndPoint ++ ExpFractionStr,
    Exp = change_precision(UnroundedExpStr, Prec).

    % Change the precision of a float to a specified number of decimal places.
    %
    % n.b. OldFloat must be positive for this function to work.
    %
:- func change_precision(string, int) = string.

change_precision(OldFloat, Prec) = NewFloat :-
    split_at_decimal_point(OldFloat, MantissaStr, FractionStr),
    FracStrLen = string.count_codepoints(FractionStr),
    ( if Prec > FracStrLen then
        PrecFracStr = string.pad_right(FractionStr, '0', Prec),
        PrecMantissaStr = MantissaStr
    else if Prec < FracStrLen then
        UnroundedFrac = string.between(FractionStr, 0, Prec),
        NextDigit = string.det_index(FractionStr, Prec),
        ( if
            UnroundedFrac \= "",
            (char.to_int(NextDigit) - char.to_int('0')) >= 5
        then
            NewPrecFrac = string.det_to_int(UnroundedFrac) + 1,
            NewPrecFracStrNotOK = string.int_to_string( NewPrecFrac),
            NewPrecFracStr = string.pad_left(NewPrecFracStrNotOK, '0', Prec),
            ( if
                string.count_codepoints(NewPrecFracStr) >
                    string.count_codepoints(UnroundedFrac)
            then
                PrecFracStr = between(NewPrecFracStr, 1, 1 + Prec),
                PrecMantissaInt = det_to_int(MantissaStr) + 1,
                PrecMantissaStr = int_to_string(PrecMantissaInt)
            else
                PrecFracStr = NewPrecFracStr,
                PrecMantissaStr = MantissaStr
            )
        else if
            UnroundedFrac = "",
            (char.to_int(NextDigit) - char.to_int('0')) >= 5
        then
            PrecMantissaInt = det_to_int(MantissaStr) + 1,
            PrecMantissaStr = int_to_string(PrecMantissaInt),
            PrecFracStr = ""
        else
            PrecFracStr = UnroundedFrac,
            PrecMantissaStr = MantissaStr
        )
    else
        PrecFracStr = FractionStr,
        PrecMantissaStr = MantissaStr
    ),
    HalfNewFloat = PrecMantissaStr ++ ".",
    NewFloat = HalfNewFloat ++ PrecFracStr.

:- pred split_at_exponent(string::in, string::out, string::out) is det.

split_at_exponent(Str, Float, Exponent) :-
    FloatAndExponent = string.words_separator(is_exponent, Str),
    list.det_index0(FloatAndExponent, 0, Float),
    list.det_index0(FloatAndExponent, 1, Exponent).

:- pred split_at_decimal_point(string::in, string::out, string::out) is det.

split_at_decimal_point(Str, Mantissa, Fraction) :-
    MantAndFrac = string.words_separator(is_decimal_point, Str),
    list.det_index0(MantAndFrac, 0, Mantissa),
    ( if list.index0(MantAndFrac, 1, Fraction0) then
        Fraction = Fraction0
    else
        Fraction = ""
    ).

:- pred is_decimal_point(char::in) is semidet.

is_decimal_point('.').

:- pred is_exponent(char::in) is semidet.

is_exponent('e').
is_exponent('E').

%----------------------------------------------------------------------------%
