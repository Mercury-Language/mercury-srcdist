%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%
% Copyright (C) 2014 The Mercury team.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: parse_string_format.m.
%
% This module parses format strings for the compiler; the module
% library/string.parse_runtime.m does the same job for the runtime system.
% Any changes here, in the parts of this module below the code of
% merge_adjacent_const_strs, will probably also require a corresponding
% change there.
%
%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- module check_hlds.simplify.format_call.parse_string_format.
:- interface.

:- import_module parse_tree.
:- import_module parse_tree.prog_data.

:- import_module string.
:- import_module string.parse_util.
:- import_module char.
:- import_module list.

%---------------------------------------------------------------------------%

    % An abtract representation of a polytype, with the actual value
    % to be printed replaced by the variable that will hold that value
    % at runtime.
:- type abstract_poly_type
    --->    apt_f(prog_var, prog_context)
    ;       apt_i(prog_var, prog_context)
    ;       apt_s(prog_var, prog_context)
    ;       apt_c(prog_var, prog_context).

:- type compiler_format_maybe_width
    --->    compiler_no_specified_width
    ;       compiler_manifest_width(int)
    ;       compiler_var_width(prog_var).

:- type compiler_format_maybe_prec
    --->    compiler_no_specified_prec
    ;       compiler_manifest_prec(int)
    ;       compiler_var_prec(prog_var).

:- type compiler_format_spec
    --->    compiler_const_string(
                prog_context,
                string
            )
    ;       compiler_spec_char(
                prog_context,
                string_format_flags,
                compiler_format_maybe_width,
                prog_var
            )
    ;       compiler_spec_string(
                prog_context,
                string_format_flags,
                compiler_format_maybe_width,
                compiler_format_maybe_prec,
                prog_var
            )
    ;       compiler_spec_signed_int(
                prog_context,
                string_format_flags,
                compiler_format_maybe_width,
                compiler_format_maybe_prec,
                prog_var
            )
    ;       compiler_spec_unsigned_int(
                prog_context,
                string_format_flags,
                compiler_format_maybe_width,
                compiler_format_maybe_prec,
                string_format_int_base,
                prog_var
            )
    ;       compiler_spec_float(
                prog_context,
                string_format_flags,
                compiler_format_maybe_width,
                compiler_format_maybe_prec,
                string_format_float_kind,
                prog_var
            ).

    % Parse the entire format string. Return either a list of things to be
    % formatted and printed, or a list of error messages.
    %
:- pred parse_and_optimize_format_string(list(char)::in,
    list(abstract_poly_type)::in, prog_context::in,
    maybe_errors(list(compiler_format_spec), string_format_error)::out)
    is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module bool.
:- import_module int.
:- import_module maybe.
:- import_module require.

%---------------------------------------------------------------------------%

parse_and_optimize_format_string(Chars, PolyTypes, Context,
        MaybeMergedSpecs) :-
    compiler_parse_format_string(Chars, PolyTypes, Context, 1, Specs, Errors),
    (
        Errors = [HeadError | TailErrors],
        MaybeMergedSpecs = error(HeadError, TailErrors)
    ;
        Errors = [],
        merge_adjacent_const_strs(Specs, FlatSpecs),
        MaybeMergedSpecs = ok(FlatSpecs)
    ).

    % Optimize the code that we will generate from this call to a format
    % predicate by merging together any adjacent string constant specifiers.
    % When we parse the format string at runtime, we don't do this, since
    % the time the time taken by this merging would almost certainly be greater
    % than the time saved by it, but at compile time, we spread the cost
    % over many executions.
    %
:- pred merge_adjacent_const_strs(list(compiler_format_spec)::in,
    list(compiler_format_spec)::out) is det.

merge_adjacent_const_strs([], []).
merge_adjacent_const_strs([HeadSpec | TailSpecs], MergedSpecs) :-
    merge_adjacent_const_strs(TailSpecs, TailMergedSpecs),
    (
        HeadSpec = compiler_const_string(HeadContext, HeadConstString),
        ( if
            TailMergedSpecs = [FirstTailMergedSpec | LaterTailMergedSpecs],
            FirstTailMergedSpec =
                compiler_const_string(_TailContext, TailConstString)
        then
            HeadMergedSpec = compiler_const_string(HeadContext,
                HeadConstString ++ TailConstString),
            MergedSpecs = [HeadMergedSpec | LaterTailMergedSpecs]
        else
            MergedSpecs = [HeadSpec | TailMergedSpecs]
        )
    ;
        ( HeadSpec = compiler_spec_char(_, _, _, _)
        ; HeadSpec = compiler_spec_string(_, _, _, _, _)
        ; HeadSpec = compiler_spec_signed_int(_, _, _, _, _)
        ; HeadSpec = compiler_spec_unsigned_int(_, _, _, _, _, _)
        ; HeadSpec = compiler_spec_float(_, _, _, _, _, _)
        ),
        MergedSpecs = [HeadSpec | TailMergedSpecs]
    ).

    % This predicate parses the entire format string. When it encounters
    % something that looks like a conversion specification (i.e. it starts
    % with a '%' character), but which cannot be parsed as one, it records
    % an error message, and keeps going.
    %
    % Note that making this predicate use an accumulator for the lists
    % of specs and errors seen so far would yield cleaner code,
    % but would probably be slower since our caller would have to unreverse
    % the list of specs we return.
    %
    % The lack of tail recursion here should not be a problem, since no
    % format string will be long enough to make us consume too much stack.
    %
:- pred compiler_parse_format_string(list(char)::in,
    list(abstract_poly_type)::in, prog_context::in, int::in,
    list(compiler_format_spec)::out, list(string_format_error)::out) is det.

compiler_parse_format_string(!.Chars, !.PolyTypes, Context, SpecNum,
        Specs, Errors) :-
    gather_non_percent_chars(!.Chars, NonConversionSpecChars, GatherEndedBy),
    (
        GatherEndedBy = found_end_of_string,
        Specs0 = [],
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
        parse_conversion_specification(!Chars, !PolyTypes, Context,
            SpecNum, HeadSpec, HeadErrors),
        compiler_parse_format_string(!.Chars, !.PolyTypes, Context,
            SpecNum + 1, TailSpecs, TailErrors),
        (
            HeadErrors = [],
            Specs0 = [HeadSpec | TailSpecs],
            Errors = TailErrors
        ;
            HeadErrors = [_ | _],
            Specs0 = TailSpecs,
            Errors = HeadErrors ++ TailErrors
        )
    ),
    (
        NonConversionSpecChars = [],
        Specs = Specs0
    ;
        NonConversionSpecChars = [_ | _],
        NonConversionSpecString =
            string.from_char_list(NonConversionSpecChars),
        StringConst = compiler_const_string(Context, NonConversionSpecString),
        Specs = [StringConst | Specs0]
    ).

    % Each conversion specification starts with the character '%' (which
    % our caller has already read) and ends with a conversion specifier.
    % In between there may be (in this order) zero or more flags, an optional
    % minimum field width, and an optional precision.
    %
:- pred parse_conversion_specification(list(char)::in, list(char)::out,
    list(abstract_poly_type)::in, list(abstract_poly_type)::out,
    prog_context::in, int::in,
    compiler_format_spec::out, list(string_format_error)::out) is det.

parse_conversion_specification(!Chars, !PolyTypes, Context, SpecNum,
        Spec, Errors) :-
    Flags0 = string_format_flags(flag_hash_clear, flag_space_clear,
        flag_zero_clear, flag_minus_clear, flag_plus_clear),
    gather_flag_chars(!Chars, Flags0, Flags),
    get_optional_width(!Chars, !PolyTypes, SpecNum, MaybeWidth, WidthErrors),
    get_optional_prec(!Chars, !PolyTypes, SpecNum, MaybePrec, PrecErrors),
    get_first_spec(!Chars, !PolyTypes, Context, Flags,
        MaybeWidth, MaybePrec, SpecNum, Spec, SpecErrors),
    Errors = WidthErrors ++ PrecErrors ++ SpecErrors.

    % Do we have a minimum field width? If yes, get it.
    %
:- pred get_optional_width(list(char)::in, list(char)::out,
    list(abstract_poly_type)::in, list(abstract_poly_type)::out, int::in,
    compiler_format_maybe_width::out, list(string_format_error)::out) is det.

get_optional_width(!Chars, !PolyTypes, SpecNum, MaybeWidth, Errors) :-
    ( if !.Chars = ['*' | !:Chars] then
        (
            !.PolyTypes = [PolyType | !:PolyTypes],
            ( if PolyType = apt_i(PolyWidthVar, _Context) then
                MaybeWidth = compiler_var_width(PolyWidthVar),
                Errors = []
            else
                MaybeWidth = compiler_no_specified_width,
                Errors = [error_nonint_star_width(SpecNum,
                    abstract_poly_type_to_kind(PolyType))]
            )
        ;
            !.PolyTypes = [],
            MaybeWidth = compiler_no_specified_width,
            Errors = [error_missing_star_width(SpecNum)]
        )
    else if get_nonzero_number_prefix(!Chars, Width) then
        MaybeWidth = compiler_manifest_width(Width),
        Errors = []
    else
        MaybeWidth = compiler_no_specified_width,
        Errors = []
    ).

    % Do we have a precision? If yes, get it.
    %
:- pred get_optional_prec(list(char)::in, list(char)::out,
    list(abstract_poly_type)::in, list(abstract_poly_type)::out, int::in,
    compiler_format_maybe_prec::out, list(string_format_error)::out) is det.

get_optional_prec(!Chars, !PolyTypes, SpecNum, MaybePrec, Errors) :-
    ( if !.Chars = ['.' | !:Chars] then
        ( if !.Chars = ['*' | !:Chars] then
            (
                !.PolyTypes = [PolyType | !:PolyTypes],
                ( if PolyType = apt_i(PolyPrecVar, _Context) then
                    MaybePrec = compiler_var_prec(PolyPrecVar),
                    Errors = []
                else
                    MaybePrec = compiler_no_specified_prec,
                    Errors = [error_nonint_star_prec(SpecNum,
                        abstract_poly_type_to_kind(PolyType))]
                )
            ;
                !.PolyTypes = [],
                MaybePrec = compiler_no_specified_prec,
                Errors = [error_missing_star_prec(SpecNum)]
            )
        else
            % This treats an empty string as an EXPLICIT zero.
            get_number_prefix(!Chars, Prec),
            MaybePrec = compiler_manifest_prec(Prec),
            Errors = []
        )
    else
        MaybePrec = compiler_no_specified_prec,
        Errors = []
    ).

%---------------------------------------------------------------------------%

    % get_first_spec(!Chars, !PolyTypes, Flags, MaybeWidth, MaybePrec,
    %   SpecNum, Spec, Errors):
    %
    % Try to read one conversion specifier, whose percent sign, flags,
    % width and precision have already been read, from !Chars.
    %
    % If successful, consume the corresponding abstract_poly_type
    % from !PolyTypes, we return the specifier as Spec and return
    % an empty error list.
    %
    % If there is a problem, we return a garbage Spec and a nonempty
    % errors list. We also consume the abstract_poly_type that corresponds
    % (or at least, looks like it corresponds) to the specifier,
    % if there is one.
    %
:- pred get_first_spec(list(char)::in, list(char)::out,
    list(abstract_poly_type)::in, list(abstract_poly_type)::out,
    prog_context::in, string_format_flags::in,
    compiler_format_maybe_width::in, compiler_format_maybe_prec::in, int::in,
    compiler_format_spec::out, list(string_format_error)::out) is det.

get_first_spec(!Chars, !PolyTypes, OverallContext, _Flags,
        _MaybeWidth, _MaybePrec, SpecNum, Spec, Errors) :-
    !.Chars = [],
    Spec = compiler_const_string(OverallContext, ""),
    Errors = [error_no_specifier(SpecNum, list.length(!.PolyTypes))].
get_first_spec(!Chars, !PolyTypes, OverallContext, !.Flags,
        MaybeWidth, MaybePrec, SpecNum, Spec, Errors) :-
    !.Chars = [SpecChar | !:Chars],
    ( if
        require_switch_arms_det [SpecChar]
        (
            SpecChar = '%',
            SpecPrime = compiler_const_string(OverallContext, "%"),
            ErrorsPrime = []
        ;
            ( SpecChar = 'd'
            ; SpecChar = 'i'
            ),
            (
                !.PolyTypes = [SpecPolyType | !:PolyTypes],
                ( if SpecPolyType = apt_i(IntVar, PolyContext) then
                    % Base is always decimal
                    SpecPrime = compiler_spec_signed_int(PolyContext,
                        !.Flags, MaybeWidth, MaybePrec, IntVar),
                    ErrorsPrime = []
                else
                    Error = error_wrong_polytype(SpecNum, SpecChar,
                        abstract_poly_type_to_kind(SpecPolyType)),
                    SpecPrime = compiler_const_string(OverallContext, ""),
                    ErrorsPrime = [Error]
                )
            ;
                !.PolyTypes = [],
                Error = error_no_polytype(SpecNum, SpecChar),
                SpecPrime = compiler_const_string(OverallContext, ""),
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
            (
                !.PolyTypes = [SpecPolyType | !:PolyTypes],
                ( if SpecPolyType = apt_i(IntVar, PolyContext) then
                    SpecPrime = compiler_spec_unsigned_int(PolyContext,
                        !.Flags, MaybeWidth, MaybePrec, Base, IntVar),
                    ErrorsPrime = []
                else
                    Error = error_wrong_polytype(SpecNum, SpecChar,
                        abstract_poly_type_to_kind(SpecPolyType)),
                    SpecPrime = compiler_const_string(OverallContext, ""),
                    ErrorsPrime = [Error]
                )
            ;
                !.PolyTypes = [],
                Error = error_no_polytype(SpecNum, SpecChar),
                SpecPrime = compiler_const_string(OverallContext, ""),
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
            (
                !.PolyTypes = [SpecPolyType | !:PolyTypes],
                ( if SpecPolyType = apt_f(FloatVar, PolyContext) then
                    SpecPrime = compiler_spec_float(PolyContext,
                        !.Flags, MaybeWidth, MaybePrec, FloatKind, FloatVar),
                    ErrorsPrime = []
                else
                    Error = error_wrong_polytype(SpecNum, SpecChar,
                        abstract_poly_type_to_kind(SpecPolyType)),
                    SpecPrime = compiler_const_string(OverallContext, ""),
                    ErrorsPrime = [Error]
                )
            ;
                !.PolyTypes = [],
                Error = error_no_polytype(SpecNum, SpecChar),
                SpecPrime = compiler_const_string(OverallContext, ""),
                ErrorsPrime = [Error]
            )
        ;
            SpecChar = 'c',
            (
                !.PolyTypes = [SpecPolyType | !:PolyTypes],
                ( if SpecPolyType = apt_c(CharVar, PolyContext) then
                    % XXX Should we generate an error if MaybePrec = yes(...)?
                    SpecPrime = compiler_spec_char(PolyContext,
                        !.Flags, MaybeWidth, CharVar),
                    ErrorsPrime = []
                else
                    Error = error_wrong_polytype(SpecNum, SpecChar,
                        abstract_poly_type_to_kind(SpecPolyType)),
                    SpecPrime = compiler_const_string(OverallContext, ""),
                    ErrorsPrime = [Error]
                )
            ;
                !.PolyTypes = [],
                Error = error_no_polytype(SpecNum, SpecChar),
                SpecPrime = compiler_const_string(OverallContext, ""),
                ErrorsPrime = [Error]
            )
        ;
            SpecChar = 's',
            (
                !.PolyTypes = [SpecPolyType | !:PolyTypes],
                ( if SpecPolyType = apt_s(StrVar, PolyContext) then
                    SpecPrime = compiler_spec_string(PolyContext,
                        !.Flags, MaybeWidth, MaybePrec, StrVar),
                    ErrorsPrime = []
                else
                    Error = error_wrong_polytype(SpecNum, SpecChar,
                        abstract_poly_type_to_kind(SpecPolyType)),
                    SpecPrime = compiler_const_string(OverallContext, ""),
                    ErrorsPrime = [Error]
                )
            ;
                !.PolyTypes = [],
                Error = error_no_polytype(SpecNum, SpecChar),
                SpecPrime = compiler_const_string(OverallContext, ""),
                ErrorsPrime = [Error]
            )
        )
    then
        Spec = SpecPrime,
        Errors = ErrorsPrime
    else
        Error = error_unknown_specifier(SpecNum, SpecChar),
        Spec = compiler_const_string(OverallContext, ""),
        Errors = [Error]
    ).

%---------------------------------------------------------------------------%

:- func abstract_poly_type_to_kind(abstract_poly_type) = poly_kind.

abstract_poly_type_to_kind(apt_c(_, _)) = poly_kind_char.
abstract_poly_type_to_kind(apt_s(_, _)) = poly_kind_str.
abstract_poly_type_to_kind(apt_i(_, _)) = poly_kind_int.
abstract_poly_type_to_kind(apt_f(_, _)) = poly_kind_float.

%---------------------------------------------------------------------------%
