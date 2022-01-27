%------------------------------------------------------------------------------%
% string_format_f.m
%
% Test the f specifier of string__format.
%------------------------------------------------------------------------------%

:- module string_format_f.

:- interface.

:- import_module io.

:- pred main(io::di, io::uo) is det.

%------------------------------------------------------------------------------%
%------------------------------------------------------------------------------%

:- implementation.

:- import_module string_format_lib.
:- import_module float, list, string.

%------------------------------------------------------------------------------%

main -->
	{ FormatStrs_f = format_strings("f") },

		% We don't test printing max because each different
		% implementation of printf prints a different amount of
		% significan digits leading to explosion in the number
		% of expected output files.
	{ ExtremeFloats = [f(min), f(-min)] },

	list__foldl(output_list(standard_floats), FormatStrs_f),
	list__foldl(output_list(trailing_zero_floats), FormatStrs_f),
	list__foldl(output_list(rounding_floats), FormatStrs_f),
	list__foldl(output_list(ExtremeFloats), FormatStrs_f),
	list__foldl(output_list(denormal_floats), FormatStrs_f),
	[].

%------------------------------------------------------------------------------%
%------------------------------------------------------------------------------%
