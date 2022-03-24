/*
** Automatically generated from `string.format.m'
** by the Mercury compiler,
** version 22.01-beta-2022-03-24
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module string.format.
// :- implementation.

/*
INIT mercury__string__format__init
ENDINIT
*/

#include "string.format.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prolog.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static void MR_CALL 
mercury__string__format__float_to_string_first_pass_2_p_0(
  MR_Float FloatVal_1,
  MR_String * FloatString_2);

static MR_String MR_CALL 
mercury__string__format__native_format_string_2_f_0(
  MR_String FormatStr_1,
  MR_String Val_2);

static MR_String MR_CALL 
mercury__string__format__native_format_uint64_2_f_0(
  MR_String FormatStr_1,
  uint64_t Val_2);

static MR_String MR_CALL 
mercury__string__format__native_format_uint_2_f_0(
  MR_String FormatStr_1,
  MR_Unsigned Val_2);

static MR_String MR_CALL 
mercury__string__format__native_format_float_2_f_0(
  MR_String FormatStr_1,
  MR_Float Val_2);

static MR_String MR_CALL 
mercury__string__format__uint64_hex_uc_specifier_0_f_0(void);

static MR_String MR_CALL 
mercury__string__format__uint64_hex_lc_specifier_0_f_0(void);

static MR_String MR_CALL 
mercury__string__format__uint64_decimal_specifier_0_f_0(void);

static MR_String MR_CALL 
mercury__string__format__uint64_octal_specifier_0_f_0(void);

static MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_string_1_p_0(
  MR_String Str_1);

static void MR_CALL 
mercury__string__format__specs_to_strings_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mercury__string__format__LCMCpr_specs_to_strings_1_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_8);

static void MR_CALL 
mercury__string__format__spec_to_string_2_p_0(
  MR_Word Spec_3,
  MR_String * String_4);

static MR_Integer MR_CALL 
mercury__string__format__sized_int_to_int_1_f_0(
  MR_Word SizedInt_3);

static MR_String MR_CALL 
mercury__string__format__abs_int_to_decimal_1_f_0(
  MR_Integer Num_3);

static MR_String MR_CALL 
mercury__string__format__format_float_5_f_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Kind_10,
  MR_Float Float_11);

static MR_String MR_CALL 
mercury__string__format__change_to_g_notation_4_f_0(
  MR_String Float_6,
  MR_Integer Prec_7,
  MR_String E_8,
  MR_Word Flags_9);

static void MR_CALL 
mercury__string__format__split_at_exponent_3_p_0(
  MR_String Str_4,
  MR_String * Float_5,
  MR_String * Exponent_6);

static MR_Integer MR_CALL 
mercury__string__format__decimal_pos_1_f_0(
  MR_String Float_3);

static MR_String MR_CALL 
mercury__string__format__remove_trailing_zeros_1_f_0(
  MR_String Float_3);

static MR_Word MR_CALL 
mercury__string__format__remove_zeros_1_f_0(
  MR_Word CharNum_3);

static MR_String MR_CALL 
mercury__string__format__change_to_e_notation_3_f_0(
  MR_String Float_5,
  MR_Integer Prec_6,
  MR_String E_7);

static MR_String MR_CALL 
mercury__string__format__calculate_base_unsafe_2_f_0(
  MR_String Float_4,
  MR_Integer Prec_5);

static MR_String MR_CALL 
mercury__string__format__change_precision_2_f_0(
  MR_String OldFloat_4,
  MR_Integer Prec_5);

static MR_Integer MR_CALL 
mercury__string__format__find_non_zero_pos_2_f_0(
  MR_Word L_4,
  MR_Integer CurrentPos_5);

static MR_String MR_CALL 
mercury__string__format__convert_float_to_string_1_f_0(
  MR_Float Float_3);

static void MR_CALL 
mercury__string__format__words_loop__ho4_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * HeadVar__4_8);

static void MR_CALL 
mercury__string__format__LCMCpr_words_loop__ho4_1_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * AddrOfHeadVar__4_15);

static void MR_CALL 
mercury__string__format__skip_to_word_end__ho9_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8);

static void MR_CALL 
mercury__string__format__skip_to_next_word_start__ho5_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8);

static void MR_CALL 
mercury__string__format__split_at_decimal_point_3_p_0(
  MR_String Str_4,
  MR_String * Mantissa_5,
  MR_String * Fraction_6);

static void MR_CALL 
mercury__string__format__words_loop__ho6_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * HeadVar__4_8);

static void MR_CALL 
mercury__string__format__LCMCpr_words_loop__ho6_1_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * AddrOfHeadVar__4_15);

static void MR_CALL 
mercury__string__format__skip_to_word_end__ho8_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8);

static void MR_CALL 
mercury__string__format__skip_to_next_word_start__ho7_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8);

static MR_String MR_CALL 
mercury__string__format__format_uint64_5_f_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Base_10,
  uint64_t UInt64_11);

static MR_String MR_CALL 
mercury__string__format__format_uint_5_f_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Base_10,
  MR_Unsigned UInt_11);


static /* final */ const MR_Box mercury__string__format_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__string__format_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__string__format_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__string__format_scalar_common_4[3][2];


/* sealed */ struct mercury__string__format__vector_common_type_5_0_s {
  const MR_String mercury__string__format__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct mercury__string__format__vector_common_type_5_0_s mercury__string__format_vector_common_5[42];



static /* final */ const MR_Box mercury__string__format_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__format_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__format_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__format_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__format_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__format_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__format_scalar_common_4[3][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__string__format_scalar_common_4[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};


static /* final */ const struct mercury__string__format__vector_common_type_5_0_s mercury__string__format_vector_common_5[42] = {
  /* row 0 */   {     (MR_String) "o" },
  /* row 1 */   {     (MR_String) "u" },
  /* row 2 */   {     (MR_String) "x" },
  /* row 3 */   {     (MR_String) "X" },
  /* row 4 */   {     (MR_String) "p" },
  /* row 5 */   {     (MR_String) "o" },
  /* row 6 */   {     (MR_String) "u" },
  /* row 7 */   {     (MR_String) "x" },
  /* row 8 */   {     (MR_String) "X" },
  /* row 9 */   {     (MR_String) "p" },
  /* row 10 */   {     (MR_String) "nan" },
  /* row 11 */   {     (MR_String) "NAN" },
  /* row 12 */   {     (MR_String) "nan" },
  /* row 13 */   {     (MR_String) "NAN" },
  /* row 14 */   {     (MR_String) "nan" },
  /* row 15 */   {     (MR_String) "NAN" },
  /* row 16 */   {     (MR_String) "e" },
  /* row 17 */   {     (MR_String) "E" },
  /* row 18 */   {     (MR_String) "f" },
  /* row 19 */   {     (MR_String) "F" },
  /* row 20 */   {     (MR_String) "g" },
  /* row 21 */   {     (MR_String) "G" },
  /* row 22 */   {     (MR_String) "0" },
  /* row 23 */   {     (MR_String) "1" },
  /* row 24 */   {     (MR_String) "2" },
  /* row 25 */   {     (MR_String) "3" },
  /* row 26 */   {     (MR_String) "4" },
  /* row 27 */   {     (MR_String) "5" },
  /* row 28 */   {     (MR_String) "6" },
  /* row 29 */   {     (MR_String) "7" },
  /* row 30 */   {     (MR_String) "8" },
  /* row 31 */   {     (MR_String) "9" },
  /* row 32 */   {     (MR_String) "0" },
  /* row 33 */   {     (MR_String) "1" },
  /* row 34 */   {     (MR_String) "2" },
  /* row 35 */   {     (MR_String) "3" },
  /* row 36 */   {     (MR_String) "4" },
  /* row 37 */   {     (MR_String) "5" },
  /* row 38 */   {     (MR_String) "6" },
  /* row 39 */   {     (MR_String) "7" },
  /* row 40 */   {     (MR_String) "8" },
  /* row 41 */   {     (MR_String) "9" },
};


#include "array.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "string.format.mh"



static void MR_CALL 
mercury__string__format__float_to_string_first_pass_2_p_0(
  MR_Float FloatVal_1,
  MR_String * FloatString_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__format__float_to_string_first_pass_2_p_0

	MR_Float FloatVal;
	MR_String FloatString;

	FloatVal = FloatVal_1 ;
		{
{
    // Note any changes here will require the same changes in
    // string.float_to_string.
    MR_float_to_string(FloatVal, FloatString, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 *FloatString_2  = FloatString;
}
  }
}

MR_String MR_CALL 
mercury__string__format__format_char_3_f_0(
  MR_Word Flags_5,
  MR_Word MaybeWidth_6,
  MR_Char Char_7)
{
  {
    MR_String String_8;
    MR_String CharStr_9;

    mercury__string__char_to_string_2_p_0(Char_7, &CharStr_9);
    String_8 = mercury__string__format__justify_string_3_f_0(Flags_5, MaybeWidth_6, CharStr_9);
    return String_8;
  }
}

MR_String MR_CALL 
mercury__string__format__native_format_char_2_f_0(
  MR_String FormatStr_1,
  MR_Char Val_2)
{
  {
    MR_String Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_char_2_f_0

	MR_String FormatStr;
	MR_Char Val;
	MR_String Str;

	FormatStr = FormatStr_1 ;
	Val = Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 Str_3  = Str;
}
    return Str_3;
  }
}

static MR_String MR_CALL 
mercury__string__format__native_format_string_2_f_0(
  MR_String FormatStr_1,
  MR_String Val_2)
{
  {
    MR_String Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_string_2_f_0

	MR_String FormatStr;
	MR_String Val;
	MR_String Str;

	FormatStr = FormatStr_1 ;
	Val = Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 Str_3  = Str;
}
    return Str_3;
  }
}

static MR_String MR_CALL 
mercury__string__format__native_format_uint64_2_f_0(
  MR_String FormatStr_1,
  uint64_t Val_2)
{
  {
    MR_String Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_uint64_2_f_0

	MR_String FormatStr;
	uint64_t Val;
	MR_String Str;

	FormatStr = FormatStr_1 ;
	Val = Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 Str_3  = Str;
}
    return Str_3;
  }
}

MR_String MR_CALL 
mercury__string__format__native_format_int64_2_f_0(
  MR_String FormatStr_1,
  int64_t Val_2)
{
  {
    MR_String Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_int64_2_f_0

	MR_String FormatStr;
	int64_t Val;
	MR_String Str;

	FormatStr = FormatStr_1 ;
	Val = Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 Str_3  = Str;
}
    return Str_3;
  }
}

static MR_String MR_CALL 
mercury__string__format__native_format_uint_2_f_0(
  MR_String FormatStr_1,
  MR_Unsigned Val_2)
{
  {
    MR_String Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_uint_2_f_0

	MR_String FormatStr;
	MR_Unsigned Val;
	MR_String Str;

	FormatStr = FormatStr_1 ;
	Val = Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 Str_3  = Str;
}
    return Str_3;
  }
}

MR_String MR_CALL 
mercury__string__format__native_format_int_2_f_0(
  MR_String FormatStr_1,
  MR_Integer Val_2)
{
  {
    MR_String Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_int_2_f_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr = FormatStr_1 ;
	Val = Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 Str_3  = Str;
}
    return Str_3;
  }
}

static MR_String MR_CALL 
mercury__string__format__native_format_float_2_f_0(
  MR_String FormatStr_1,
  MR_Float Val_2)
{
  {
    MR_String Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_float_2_f_0

	MR_String FormatStr;
	MR_Float Val;
	MR_String Str;

	FormatStr = FormatStr_1 ;
	Val = Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, (double) Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 Str_3  = Str;
}
    return Str_3;
  }
}

static MR_String MR_CALL 
mercury__string__format__uint64_hex_uc_specifier_0_f_0(void)
{
  {
    MR_String Spec_1;

{
#define MR_PROC_LABEL mercury__string__format__uint64_hex_uc_specifier_0_f_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRIX64);


		;}
#undef MR_PROC_LABEL
	 Spec_1  = Spec;
}
    return Spec_1;
  }
}

static MR_String MR_CALL 
mercury__string__format__uint64_hex_lc_specifier_0_f_0(void)
{
  {
    MR_String Spec_1;

{
#define MR_PROC_LABEL mercury__string__format__uint64_hex_lc_specifier_0_f_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRIx64);


		;}
#undef MR_PROC_LABEL
	 Spec_1  = Spec;
}
    return Spec_1;
  }
}

static MR_String MR_CALL 
mercury__string__format__uint64_decimal_specifier_0_f_0(void)
{
  {
    MR_String Spec_1;

{
#define MR_PROC_LABEL mercury__string__format__uint64_decimal_specifier_0_f_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRIu64);


		;}
#undef MR_PROC_LABEL
	 Spec_1  = Spec;
}
    return Spec_1;
  }
}

static MR_String MR_CALL 
mercury__string__format__uint64_octal_specifier_0_f_0(void)
{
  {
    MR_String Spec_1;

{
#define MR_PROC_LABEL mercury__string__format__uint64_octal_specifier_0_f_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRIo64);


		;}
#undef MR_PROC_LABEL
	 Spec_1  = Spec;
}
    return Spec_1;
  }
}

MR_String MR_CALL 
mercury__string__format__int64_decimal_specifier_0_f_0(void)
{
  {
    MR_String Spec_1;

{
#define MR_PROC_LABEL mercury__string__format__int64_decimal_specifier_0_f_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRId64);


		;}
#undef MR_PROC_LABEL
	 Spec_1  = Spec;
}
    return Spec_1;
  }
}

MR_String MR_CALL 
mercury__string__format__int_length_modifier_0_f_0(void)
{
  {
    MR_String LengthModifier_1;

{
#define MR_PROC_LABEL mercury__string__format__int_length_modifier_0_f_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 LengthModifier_1  = LengthModifier;
}
    return LengthModifier_1;
  }
}

static MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_string_1_p_0(
  MR_String Str_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_for_string_1_p_0

	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_1 ;
		{

    const char *s;

    SUCCESS_INDICATOR = ML_USE_SPRINTF;
    for (s = Str; *s != '\0'; s++) {
        // sprintf %s specifier is inadequate for multi-byte UTF-8 characters,
        // if there is a field width or precision specified.
        if (!MR_utf8_is_single_byte(*s)) {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_char_1_p_0(
  MR_Char Char_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_for_char_1_p_0

	MR_Char Char;
	MR_bool SUCCESS_INDICATOR;

	Char = Char_1 ;
		{

    // sprintf %c specifier is inadequate for multi-byte UTF-8 characters.
    SUCCESS_INDICATOR = ML_USE_SPRINTF && MR_is_ascii(Char);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__format__using_sprintf_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__string__format__format_signed_int64_component_5_p_0(
  MR_Word Flags_6,
  MR_Word MaybeWidth_7,
  MR_Word MaybePrec_8,
  int64_t Int64_9,
  MR_String * String_10)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String FormatStr_11;
      MR_String Var_13;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_5_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRId64);


		;}
#undef MR_PROC_LABEL
	 Var_13  = Spec;
}
      FormatStr_11 = mercury__string__format__make_format_sprintf_5_f_0(Flags_6, MaybeWidth_7, MaybePrec_8, (MR_String) "", Var_13);
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_5_p_0

	MR_String FormatStr;
	int64_t Val;
	MR_String Str;

	FormatStr = FormatStr_11 ;
	Val = Int64_9 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_10  = Str;
}
    }
    else
      *String_10 = mercury__string__format__format_signed_int64_4_f_0(Flags_6, MaybeWidth_7, MaybePrec_8, Int64_9);
  }
}

void MR_CALL 
mercury__string__format__format_signed_int_component_5_p_0(
  MR_Word Flags_6,
  MR_Word MaybeWidth_7,
  MR_Word MaybePrec_8,
  MR_Integer Int_9,
  MR_String * String_10)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String FormatStr_11;
      MR_String Var_12;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 Var_12  = LengthModifier;
}
      FormatStr_11 = mercury__string__format__make_format_sprintf_5_f_0(Flags_6, MaybeWidth_7, MaybePrec_8, Var_12, (MR_String) "d");
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr = FormatStr_11 ;
	Val = Int_9 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_10  = Str;
}
    }
    else
      *String_10 = mercury__string__format__format_signed_int_4_f_0(Flags_6, MaybeWidth_7, MaybePrec_8, Int_9);
  }
}

void MR_CALL 
mercury__string__format__format_cast_uint32_to_uint_2_p_0(
  uint32_t UInt32_3,
  MR_Unsigned * UInt_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__format__format_cast_uint32_to_uint_2_p_0

	uint32_t U32;
	MR_Unsigned U;

	U32 = UInt32_3 ;
		{

    U = (MR_Unsigned) U32;


		;}
#undef MR_PROC_LABEL
	 *UInt_4  = U;
}
  }
}

void MR_CALL 
mercury__string__format__format_cast_uint16_to_uint_2_p_0(
  uint16_t UInt16_3,
  MR_Unsigned * UInt_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__format__format_cast_uint16_to_uint_2_p_0

	uint16_t U16;
	MR_Unsigned U;

	U16 = UInt16_3 ;
		{

    U = (MR_Unsigned) U16;


		;}
#undef MR_PROC_LABEL
	 *UInt_4  = U;
}
  }
}

void MR_CALL 
mercury__string__format__format_cast_uint8_to_uint_2_p_0(
  uint8_t UInt8_3,
  MR_Unsigned * UInt_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__format__format_cast_uint8_to_uint_2_p_0

	uint8_t U8;
	MR_Unsigned U;

	U8 = UInt8_3 ;
		{

    U = (MR_Unsigned) U8;


		;}
#undef MR_PROC_LABEL
	 *UInt_4  = U;
}
  }
}

void MR_CALL 
mercury__string__format__format_cast_int32_to_int_2_p_0(
  int32_t Int32_3,
  MR_Integer * Int_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__format__format_cast_int32_to_int_2_p_0

	int32_t I32;
	MR_Integer I;

	I32 = Int32_3 ;
		{

    I = I32;


		;}
#undef MR_PROC_LABEL
	 *Int_4  = I;
}
  }
}

void MR_CALL 
mercury__string__format__format_cast_int16_to_int_2_p_0(
  int16_t Int16_3,
  MR_Integer * Int_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__format__format_cast_int16_to_int_2_p_0

	int16_t I16;
	MR_Integer I;

	I16 = Int16_3 ;
		{

    I = I16;


		;}
#undef MR_PROC_LABEL
	 *Int_4  = I;
}
  }
}

void MR_CALL 
mercury__string__format__format_cast_int8_to_int_2_p_0(
  int8_t Int8_3,
  MR_Integer * Int_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__format__format_cast_int8_to_int_2_p_0

	int8_t I8;
	MR_Integer I;

	I8 = Int8_3 ;
		{

    I = I8;


		;}
#undef MR_PROC_LABEL
	 *Int_4  = I;
}
  }
}

void MR_CALL 
mercury__string__format__format_float_component_width_prec_6_p_0(
  MR_Word Flags_7,
  MR_Integer Width_8,
  MR_Integer Prec_9,
  MR_Word Kind_10,
  MR_Float Float_11,
  MR_String * String_12)
{
  {
    MR_Word MaybeWidth_13;
    MR_Word MaybePrec_14;

    {
      MaybeWidth_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_13, 0) = ((MR_Box) (Width_8));
    }
    {
      MaybePrec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_14, 0) = ((MR_Box) (Prec_9));
    }
    mercury__string__format__format_float_component_6_p_0(Flags_7, MaybeWidth_13, MaybePrec_14, Kind_10, Float_11, String_12);
  }
}

void MR_CALL 
mercury__string__format__format_float_component_width_noprec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Width_7,
  MR_Word Kind_8,
  MR_Float Float_9,
  MR_String * String_10)
{
  {
    MR_Word MaybeWidth_11;

    {
      MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_11, 0) = ((MR_Box) (Width_7));
    }
    mercury__string__format__format_float_component_6_p_0(Flags_6, MaybeWidth_11, (MR_Word) ((MR_Unsigned) 0U), Kind_8, Float_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_float_component_nowidth_prec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Prec_7,
  MR_Word Kind_8,
  MR_Float Float_9,
  MR_String * String_10)
{
  {
    MR_Word MaybePrec_12;

    {
      MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_12, 0) = ((MR_Box) (Prec_7));
    }
    mercury__string__format__format_float_component_6_p_0(Flags_6, (MR_Word) ((MR_Unsigned) 0U), MaybePrec_12, Kind_8, Float_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_float_component_nowidth_noprec_4_p_0(
  MR_Word Flags_5,
  MR_Word Kind_6,
  MR_Float Float_7,
  MR_String * String_8)
{
  mercury__string__format__format_float_component_6_p_0(Flags_5, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Kind_6, Float_7, String_8);
}

void MR_CALL 
mercury__string__format__format_uint64_component_width_prec_6_p_0(
  MR_Word Flags_7,
  MR_Integer Width_8,
  MR_Integer Prec_9,
  MR_Word Base_10,
  uint64_t UInt64_11,
  MR_String * String_12)
{
  {
    MR_Word MaybeWidth_13;
    MR_Word MaybePrec_14;

    {
      MaybeWidth_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_13, 0) = ((MR_Box) (Width_8));
    }
    {
      MaybePrec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_14, 0) = ((MR_Box) (Prec_9));
    }
    mercury__string__format__format_uint64_component_6_p_0(Flags_7, MaybeWidth_13, MaybePrec_14, Base_10, UInt64_11, String_12);
  }
}

void MR_CALL 
mercury__string__format__format_uint64_component_width_noprec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Width_7,
  MR_Word Base_8,
  uint64_t UInt64_9,
  MR_String * String_10)
{
  {
    MR_Word MaybeWidth_11;

    {
      MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_11, 0) = ((MR_Box) (Width_7));
    }
    mercury__string__format__format_uint64_component_6_p_0(Flags_6, MaybeWidth_11, (MR_Word) ((MR_Unsigned) 0U), Base_8, UInt64_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_uint64_component_nowidth_prec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Prec_7,
  MR_Word Base_8,
  uint64_t UInt64_9,
  MR_String * String_10)
{
  {
    MR_Word MaybePrec_12;

    {
      MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_12, 0) = ((MR_Box) (Prec_7));
    }
    mercury__string__format__format_uint64_component_6_p_0(Flags_6, (MR_Word) ((MR_Unsigned) 0U), MaybePrec_12, Base_8, UInt64_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_uint64_component_nowidth_noprec_4_p_0(
  MR_Word Flags_5,
  MR_Word Base_6,
  uint64_t UInt64_7,
  MR_String * String_8)
{
  mercury__string__format__format_uint64_component_6_p_0(Flags_5, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Base_6, UInt64_7, String_8);
}

void MR_CALL 
mercury__string__format__format_unsigned_int64_component_width_prec_6_p_0(
  MR_Word Flags_7,
  MR_Integer Width_8,
  MR_Integer Prec_9,
  MR_Word Base_10,
  int64_t Int64_11,
  MR_String * String_12)
{
  {
    MR_Word MaybeWidth_13;
    MR_Word MaybePrec_14;

    {
      MaybeWidth_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_13, 0) = ((MR_Box) (Width_8));
    }
    {
      MaybePrec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_14, 0) = ((MR_Box) (Prec_9));
    }
    mercury__string__format__format_unsigned_int64_component_6_p_0(Flags_7, MaybeWidth_13, MaybePrec_14, Base_10, Int64_11, String_12);
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int64_component_width_noprec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Width_7,
  MR_Word Base_8,
  int64_t Int64_9,
  MR_String * String_10)
{
  {
    MR_Word MaybeWidth_11;

    {
      MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_11, 0) = ((MR_Box) (Width_7));
    }
    mercury__string__format__format_unsigned_int64_component_6_p_0(Flags_6, MaybeWidth_11, (MR_Word) ((MR_Unsigned) 0U), Base_8, Int64_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int64_component_nowidth_prec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Prec_7,
  MR_Word Base_8,
  int64_t Int64_9,
  MR_String * String_10)
{
  {
    MR_Word MaybePrec_12;

    {
      MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_12, 0) = ((MR_Box) (Prec_7));
    }
    mercury__string__format__format_unsigned_int64_component_6_p_0(Flags_6, (MR_Word) ((MR_Unsigned) 0U), MaybePrec_12, Base_8, Int64_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int64_component_nowidth_noprec_4_p_0(
  MR_Word Flags_5,
  MR_Word Base_6,
  int64_t Int64_7,
  MR_String * String_8)
{
  mercury__string__format__format_unsigned_int64_component_6_p_0(Flags_5, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Base_6, Int64_7, String_8);
}

void MR_CALL 
mercury__string__format__format_signed_int64_component_width_prec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Width_7,
  MR_Integer Prec_8,
  int64_t Int64_9,
  MR_String * String_10)
{
  {
    MR_bool succeeded;
    MR_Word MaybeWidth_11;
    MR_Word MaybePrec_12;

    {
      MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_11, 0) = ((MR_Box) (Width_7));
    }
    {
      MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_12, 0) = ((MR_Box) (Prec_8));
    }
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_width_prec_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String FormatStr_18;
      MR_String Var_20;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_width_prec_5_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRId64);


		;}
#undef MR_PROC_LABEL
	 Var_20  = Spec;
}
      FormatStr_18 = mercury__string__format__make_format_sprintf_5_f_0(Flags_6, MaybeWidth_11, MaybePrec_12, (MR_String) "", Var_20);
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_width_prec_5_p_0

	MR_String FormatStr;
	int64_t Val;
	MR_String Str;

	FormatStr = FormatStr_18 ;
	Val = Int64_9 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_10  = Str;
}
    }
    else
      *String_10 = mercury__string__format__format_signed_int64_4_f_0(Flags_6, MaybeWidth_11, MaybePrec_12, Int64_9);
  }
}

void MR_CALL 
mercury__string__format__format_signed_int64_component_width_noprec_4_p_0(
  MR_Word Flags_5,
  MR_Integer Width_6,
  int64_t Int64_7,
  MR_String * String_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeWidth_9;

    {
      MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_9, 0) = ((MR_Box) (Width_6));
    }
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_width_noprec_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String FormatStr_16;
      MR_String Var_18;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_width_noprec_4_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRId64);


		;}
#undef MR_PROC_LABEL
	 Var_18  = Spec;
}
      FormatStr_16 = mercury__string__format__make_format_sprintf_5_f_0(Flags_5, MaybeWidth_9, (MR_Word) ((MR_Unsigned) 0U), (MR_String) "", Var_18);
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_width_noprec_4_p_0

	MR_String FormatStr;
	int64_t Val;
	MR_String Str;

	FormatStr = FormatStr_16 ;
	Val = Int64_7 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_8  = Str;
}
    }
    else
      *String_8 = mercury__string__format__format_signed_int64_4_f_0(Flags_5, MaybeWidth_9, (MR_Word) ((MR_Unsigned) 0U), Int64_7);
  }
}

void MR_CALL 
mercury__string__format__format_signed_int64_component_nowidth_prec_4_p_0(
  MR_Word Flags_5,
  MR_Integer Prec_6,
  int64_t Int64_7,
  MR_String * String_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybePrec_10;

    {
      MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_10, 0) = ((MR_Box) (Prec_6));
    }
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_nowidth_prec_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String FormatStr_16;
      MR_String Var_18;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_nowidth_prec_4_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRId64);


		;}
#undef MR_PROC_LABEL
	 Var_18  = Spec;
}
      FormatStr_16 = mercury__string__format__make_format_sprintf_5_f_0(Flags_5, (MR_Word) ((MR_Unsigned) 0U), MaybePrec_10, (MR_String) "", Var_18);
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_nowidth_prec_4_p_0

	MR_String FormatStr;
	int64_t Val;
	MR_String Str;

	FormatStr = FormatStr_16 ;
	Val = Int64_7 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_8  = Str;
}
    }
    else
      *String_8 = mercury__string__format__format_signed_int64_4_f_0(Flags_5, (MR_Word) ((MR_Unsigned) 0U), MaybePrec_10, Int64_7);
  }
}

void MR_CALL 
mercury__string__format__format_signed_int64_component_nowidth_noprec_3_p_0(
  MR_Word Flags_4,
  int64_t Int64_5,
  MR_String * String_6)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_nowidth_noprec_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String FormatStr_14;
      MR_String Var_16;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_nowidth_noprec_3_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRId64);


		;}
#undef MR_PROC_LABEL
	 Var_16  = Spec;
}
      FormatStr_14 = mercury__string__format__make_format_sprintf_5_f_0(Flags_4, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_String) "", Var_16);
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_component_nowidth_noprec_3_p_0

	MR_String FormatStr;
	int64_t Val;
	MR_String Str;

	FormatStr = FormatStr_14 ;
	Val = Int64_5 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_6  = Str;
}
    }
    else
      *String_6 = mercury__string__format__format_signed_int64_4_f_0(Flags_4, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Int64_5);
  }
}

void MR_CALL 
mercury__string__format__format_uint_component_width_prec_6_p_0(
  MR_Word Flags_7,
  MR_Integer Width_8,
  MR_Integer Prec_9,
  MR_Word Base_10,
  MR_Unsigned UInt_11,
  MR_String * String_12)
{
  {
    MR_Word MaybeWidth_13;
    MR_Word MaybePrec_14;

    {
      MaybeWidth_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_13, 0) = ((MR_Box) (Width_8));
    }
    {
      MaybePrec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_14, 0) = ((MR_Box) (Prec_9));
    }
    mercury__string__format__format_uint_component_6_p_0(Flags_7, MaybeWidth_13, MaybePrec_14, Base_10, UInt_11, String_12);
  }
}

void MR_CALL 
mercury__string__format__format_uint_component_width_noprec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Width_7,
  MR_Word Base_8,
  MR_Unsigned UInt_9,
  MR_String * String_10)
{
  {
    MR_Word MaybeWidth_11;

    {
      MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_11, 0) = ((MR_Box) (Width_7));
    }
    mercury__string__format__format_uint_component_6_p_0(Flags_6, MaybeWidth_11, (MR_Word) ((MR_Unsigned) 0U), Base_8, UInt_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_uint_component_nowidth_prec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Prec_7,
  MR_Word Base_8,
  MR_Unsigned UInt_9,
  MR_String * String_10)
{
  {
    MR_Word MaybePrec_12;

    {
      MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_12, 0) = ((MR_Box) (Prec_7));
    }
    mercury__string__format__format_uint_component_6_p_0(Flags_6, (MR_Word) ((MR_Unsigned) 0U), MaybePrec_12, Base_8, UInt_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_uint_component_nowidth_noprec_4_p_0(
  MR_Word Flags_5,
  MR_Word Base_6,
  MR_Unsigned UInt_7,
  MR_String * String_8)
{
  mercury__string__format__format_uint_component_6_p_0(Flags_5, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Base_6, UInt_7, String_8);
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_width_prec_6_p_0(
  MR_Word Flags_7,
  MR_Integer Width_8,
  MR_Integer Prec_9,
  MR_Word Base_10,
  MR_Integer Int_11,
  MR_String * String_12)
{
  {
    MR_Word MaybeWidth_13;
    MR_Word MaybePrec_14;

    {
      MaybeWidth_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_13, 0) = ((MR_Box) (Width_8));
    }
    {
      MaybePrec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_14, 0) = ((MR_Box) (Prec_9));
    }
    mercury__string__format__format_unsigned_int_component_6_p_0(Flags_7, MaybeWidth_13, MaybePrec_14, Base_10, Int_11, String_12);
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Width_7,
  MR_Word Base_8,
  MR_Integer Int_9,
  MR_String * String_10)
{
  {
    MR_Word MaybeWidth_11;

    {
      MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_11, 0) = ((MR_Box) (Width_7));
    }
    mercury__string__format__format_unsigned_int_component_6_p_0(Flags_6, MaybeWidth_11, (MR_Word) ((MR_Unsigned) 0U), Base_8, Int_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_nowidth_prec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Prec_7,
  MR_Word Base_8,
  MR_Integer Int_9,
  MR_String * String_10)
{
  {
    MR_Word MaybePrec_12;

    {
      MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_12, 0) = ((MR_Box) (Prec_7));
    }
    mercury__string__format__format_unsigned_int_component_6_p_0(Flags_6, (MR_Word) ((MR_Unsigned) 0U), MaybePrec_12, Base_8, Int_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0(
  MR_Word Flags_5,
  MR_Word Base_6,
  MR_Integer Int_7,
  MR_String * String_8)
{
  mercury__string__format__format_unsigned_int_component_6_p_0(Flags_5, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Base_6, Int_7, String_8);
}

void MR_CALL 
mercury__string__format__format_signed_int_component_width_prec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Width_7,
  MR_Integer Prec_8,
  MR_Integer Int_9,
  MR_String * String_10)
{
  {
    MR_bool succeeded;
    MR_Word MaybeWidth_11;
    MR_Word MaybePrec_12;

    {
      MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_11, 0) = ((MR_Box) (Width_7));
    }
    {
      MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_12, 0) = ((MR_Box) (Prec_8));
    }
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_width_prec_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String FormatStr_18;
      MR_String Var_19;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_width_prec_5_p_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 Var_19  = LengthModifier;
}
      FormatStr_18 = mercury__string__format__make_format_sprintf_5_f_0(Flags_6, MaybeWidth_11, MaybePrec_12, Var_19, (MR_String) "d");
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_width_prec_5_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr = FormatStr_18 ;
	Val = Int_9 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_10  = Str;
}
    }
    else
      *String_10 = mercury__string__format__format_signed_int_4_f_0(Flags_6, MaybeWidth_11, MaybePrec_12, Int_9);
  }
}

void MR_CALL 
mercury__string__format__format_signed_int_component_width_noprec_4_p_0(
  MR_Word Flags_5,
  MR_Integer Width_6,
  MR_Integer Int_7,
  MR_String * String_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeWidth_9;

    {
      MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_9, 0) = ((MR_Box) (Width_6));
    }
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_width_noprec_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String FormatStr_16;
      MR_String Var_17;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_width_noprec_4_p_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 Var_17  = LengthModifier;
}
      FormatStr_16 = mercury__string__format__make_format_sprintf_5_f_0(Flags_5, MaybeWidth_9, (MR_Word) ((MR_Unsigned) 0U), Var_17, (MR_String) "d");
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_width_noprec_4_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr = FormatStr_16 ;
	Val = Int_7 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_8  = Str;
}
    }
    else
      *String_8 = mercury__string__format__format_signed_int_4_f_0(Flags_5, MaybeWidth_9, (MR_Word) ((MR_Unsigned) 0U), Int_7);
  }
}

void MR_CALL 
mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0(
  MR_Word Flags_5,
  MR_Integer Prec_6,
  MR_Integer Int_7,
  MR_String * String_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybePrec_10;

    {
      MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_10, 0) = ((MR_Box) (Prec_6));
    }
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String FormatStr_16;
      MR_String Var_17;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 Var_17  = LengthModifier;
}
      FormatStr_16 = mercury__string__format__make_format_sprintf_5_f_0(Flags_5, (MR_Word) ((MR_Unsigned) 0U), MaybePrec_10, Var_17, (MR_String) "d");
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr = FormatStr_16 ;
	Val = Int_7 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_8  = Str;
}
    }
    else
      *String_8 = mercury__string__format__format_signed_int_4_f_0(Flags_5, (MR_Word) ((MR_Unsigned) 0U), MaybePrec_10, Int_7);
  }
}

void MR_CALL 
mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(
  MR_Word Flags_4,
  MR_Integer Int_5,
  MR_String * String_6)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String FormatStr_14;
      MR_String Var_15;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 Var_15  = LengthModifier;
}
      FormatStr_14 = mercury__string__format__make_format_sprintf_5_f_0(Flags_4, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_15, (MR_String) "d");
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr = FormatStr_14 ;
	Val = Int_5 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_6  = Str;
}
    }
    else
      *String_6 = mercury__string__format__format_signed_int_4_f_0(Flags_4, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Int_5);
  }
}

void MR_CALL 
mercury__string__format__format_string_component_width_prec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Width_7,
  MR_Integer Prec_8,
  MR_String Str_9,
  MR_String * String_10)
{
  {
    MR_Word MaybeWidth_11;
    MR_Word MaybePrec_12;

    {
      MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_11, 0) = ((MR_Box) (Width_7));
    }
    {
      MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_12, 0) = ((MR_Box) (Prec_8));
    }
    mercury__string__format__format_string_component_5_p_0(Flags_6, MaybeWidth_11, MaybePrec_12, Str_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_string_component_width_noprec_4_p_0(
  MR_Word Flags_5,
  MR_Integer Width_6,
  MR_String Str_7,
  MR_String * String_8)
{
  {
    MR_Word MaybeWidth_9;

    {
      MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_9, 0) = ((MR_Box) (Width_6));
    }
    mercury__string__format__format_string_component_5_p_0(Flags_5, MaybeWidth_9, (MR_Word) ((MR_Unsigned) 0U), Str_7, String_8);
  }
}

void MR_CALL 
mercury__string__format__format_string_component_nowidth_prec_4_p_0(
  MR_Word Flags_5,
  MR_Integer Prec_6,
  MR_String Str_7,
  MR_String * String_8)
{
  {
    MR_Word MaybePrec_10;

    {
      MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_10, 0) = ((MR_Box) (Prec_6));
    }
    mercury__string__format__format_string_component_5_p_0(Flags_5, (MR_Word) ((MR_Unsigned) 0U), MaybePrec_10, Str_7, String_8);
  }
}

void MR_CALL 
mercury__string__format__format_string_component_nowidth_noprec_3_p_0(
  MR_Word Flags_4,
  MR_String Str_5,
  MR_String * String_6)
{
  mercury__string__format__format_string_component_5_p_0(Flags_4, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Str_5, String_6);
}

void MR_CALL 
mercury__string__format__format_char_component_width_4_p_0(
  MR_Word Flags_5,
  MR_Integer Width_6,
  MR_Char Char_7,
  MR_String * String_8)
{
  {
    MR_Word MaybeWidth_9;

    {
      MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_9, 0) = ((MR_Box) (Width_6));
    }
    mercury__string__format__format_char_component_4_p_0(Flags_5, MaybeWidth_9, Char_7, String_8);
  }
}

void MR_CALL 
mercury__string__format__format_char_component_nowidth_3_p_0(
  MR_Word Flags_4,
  MR_Char Char_5,
  MR_String * String_6)
{
  mercury__string__format__format_char_component_4_p_0(Flags_4, (MR_Word) ((MR_Unsigned) 0U), Char_5, String_6);
}

void MR_CALL 
mercury__string__format__format_impl_3_p_0(
  MR_String FormatString_4,
  MR_Word PolyList_5,
  MR_String * String_6)
{
  {
    MR_Word Chars_7;
    MR_Word Specs_8;
    MR_Word Errors_9;

    mercury__string__to_char_list_2_p_0(FormatString_4, &Chars_7);
    mercury__string__parse_runtime__parse_format_string_5_p_0(Chars_7, PolyList_5, (MR_Integer) 1, &Specs_8, &Errors_9);
    if ((Errors_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SpecStrs_10;

      mercury__string__format__specs_to_strings_2_p_0(Specs_8, &SpecStrs_10);
      *String_6 = mercury__string__append_list_1_f_0(SpecStrs_10);
    }
    else
    {
      MR_Word HeadError_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_9, (MR_Integer) 0))));
      MR_String Msg_13;

      Msg_13 = mercury__string__parse_util__string_format_error_to_msg_1_f_0(HeadError_11);
      {
        mercury__require__error_2_p_0((MR_String) "string.format", Msg_13);
        return;
      }
    }
  }
}

static void MR_CALL 
mercury__string__format__specs_to_strings_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Spec_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Specs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_String String_5;
    MR_Word * AddrStrings_7;

    mercury__string__format__spec_to_string_2_p_0(Spec_3, &String_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (String_5));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrStrings_7 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
    mercury__string__format__LCMCpr_specs_to_strings_1_2_p_0(Specs_4, AddrStrings_7);
  }
}

static void MR_CALL 
mercury__string__format__LCMCpr_specs_to_strings_1_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__2_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Spec_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Specs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String String_5;
      MR_Word * AddrStrings_7;
      MR_Word HeadVar__2_9;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_8;

      mercury__string__format__spec_to_string_2_p_0(Spec_3, &String_5);
      {
        HeadVar__2_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_9, 0) = ((MR_Box) (String_5));
        MR_hl_field(MR_mktag(1), HeadVar__2_9, 1) = NULL;
      }
      AddrStrings_7 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_9, (MR_Integer) 1)));
      *AddrOfHeadVar__2_8 = HeadVar__2_9;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Specs_4;
      next_value_of_AddrOfHeadVar__2_8 = AddrStrings_7;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_8 = next_value_of_AddrOfHeadVar__2_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__string__format__spec_to_string_2_p_0(
  MR_Word Spec_3,
  MR_String * String_4)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Spec_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *String_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), Spec_3, (MR_Integer) 0))));
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Spec_3, (MR_Integer) 2)));
          MR_Word Flags_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Spec_3, (MR_Integer) 0))));
          MR_Word MaybeWidth_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Spec_3, (MR_Integer) 1))));

          mercury__string__format__format_char_component_4_p_0(Flags_35, MaybeWidth_36, Char_17, String_4);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Str_18 = ((MR_String) ((MR_hl_field(MR_mktag(2), Spec_3, (MR_Integer) 3))));
          MR_Word Flags_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Spec_3, (MR_Integer) 0))));
          MR_Word MaybeWidth_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Spec_3, (MR_Integer) 1))));
          MR_Word MaybePrec_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Spec_3, (MR_Integer) 2))));

          mercury__string__format__format_string_component_5_p_0(Flags_37, MaybeWidth_38, MaybePrec_39, Str_18, String_4);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Flags_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 1))));
              MR_Word MaybeWidth_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 2))));
              MR_Word MaybePrec_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 3))));
              MR_Word SizedInt_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 4))));
              int64_t Int64_9;

              succeeded = ((((MR_tag((MR_Word) SizedInt_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SizedInt_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Int64_9 = MR_unbox_int64((MR_hl_field(MR_mktag(3), SizedInt_8, (MR_Integer) 1)));
{
#define MR_PROC_LABEL mercury__string__format__spec_to_string_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                if (succeeded)
                {
                  MR_String FormatStr_45;
                  MR_String Var_47;

{
#define MR_PROC_LABEL mercury__string__format__spec_to_string_2_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRId64);


		;}
#undef MR_PROC_LABEL
	 Var_47  = Spec;
}
                  FormatStr_45 = mercury__string__format__make_format_sprintf_5_f_0(Flags_5, MaybeWidth_6, MaybePrec_7, (MR_String) "", Var_47);
{
#define MR_PROC_LABEL mercury__string__format__spec_to_string_2_p_0

	MR_String FormatStr;
	int64_t Val;
	MR_String Str;

	FormatStr = FormatStr_45 ;
	Val = Int64_9 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_4  = Str;
}
                }
                else
                  *String_4 = mercury__string__format__format_signed_int64_4_f_0(Flags_5, MaybeWidth_6, MaybePrec_7, Int64_9);
              }
              else
              {
                MR_Integer Int_10;

                switch (MR_tag((MR_Word) SizedInt_8)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Int_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SizedInt_8, (MR_Integer) 0))));
                    break;
                  case (MR_Integer) 1:
                    {
                      int8_t Int8_56 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(1), SizedInt_8, (MR_Integer) 0)));

{
#define MR_PROC_LABEL mercury__string__format__spec_to_string_2_p_0

	int8_t I8;
	MR_Integer I;

	I8 = Int8_56 ;
		{

    I = I8;


		;}
#undef MR_PROC_LABEL
	 Int_10  = I;
}
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      int16_t Int16_57 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(2), SizedInt_8, (MR_Integer) 0)));

{
#define MR_PROC_LABEL mercury__string__format__spec_to_string_2_p_0

	int16_t I16;
	MR_Integer I;

	I16 = Int16_57 ;
		{

    I = I16;


		;}
#undef MR_PROC_LABEL
	 Int_10  = I;
}
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SizedInt_8, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          int32_t Int32_58 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SizedInt_8, (MR_Integer) 1)));

{
#define MR_PROC_LABEL mercury__string__format__spec_to_string_2_p_0

	int32_t I32;
	MR_Integer I;

	I32 = Int32_58 ;
		{

    I = I32;


		;}
#undef MR_PROC_LABEL
	 Int_10  = I;
}
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_software_error_0), ((MR_Box) (((MR_Box) ((MR_String) "formatting int64 via a cast")))));
                          return;
                        }
                        break;
                    }
                    break;
                }
{
#define MR_PROC_LABEL mercury__string__format__spec_to_string_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                if (succeeded)
                {
                  MR_String FormatStr_74;
                  MR_String Var_75;

{
#define MR_PROC_LABEL mercury__string__format__spec_to_string_2_p_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 Var_75  = LengthModifier;
}
                  FormatStr_74 = mercury__string__format__make_format_sprintf_5_f_0(Flags_5, MaybeWidth_6, MaybePrec_7, Var_75, (MR_String) "d");
{
#define MR_PROC_LABEL mercury__string__format__spec_to_string_2_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr = FormatStr_74 ;
	Val = Int_10 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_4  = Str;
}
                }
                else
                  *String_4 = mercury__string__format__format_signed_int_4_f_0(Flags_5, MaybeWidth_6, MaybePrec_7, Int_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Base_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 4))) & (MR_Integer) 7);
              MR_Word Flags_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 1))));
              MR_Word MaybeWidth_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 2))));
              MR_Word MaybePrec_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 3))));
              MR_Word SizedInt_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 5))));
              int64_t Int64_20;

              succeeded = ((((MR_tag((MR_Word) SizedInt_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SizedInt_25, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Int64_20 = MR_unbox_int64((MR_hl_field(MR_mktag(3), SizedInt_25, (MR_Integer) 1)));
                mercury__string__format__format_unsigned_int64_component_6_p_0(Flags_22, MaybeWidth_23, MaybePrec_24, Base_11, Int64_20, String_4);
              }
              else
              {
                MR_Integer Int_19;

                Int_19 = mercury__string__format__sized_int_to_int_1_f_0(SizedInt_25);
                mercury__string__format__format_unsigned_int_component_6_p_0(Flags_22, MaybeWidth_23, MaybePrec_24, Base_11, Int_19, String_4);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SizedUInt_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 5))));
              MR_Word Flags_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 1))));
              MR_Word MaybeWidth_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 2))));
              MR_Word MaybePrec_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 3))));
              MR_Word Base_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 4))) & (MR_Integer) 7);
              uint64_t UInt64_13;

              succeeded = ((((MR_tag((MR_Word) SizedUInt_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SizedUInt_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                UInt64_13 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), SizedUInt_12, (MR_Integer) 1)));
                mercury__string__format__format_uint64_component_6_p_0(Flags_28, MaybeWidth_29, MaybePrec_30, Base_31, UInt64_13, String_4);
              }
              else
              {
                MR_Unsigned UInt_14;

                switch (MR_tag((MR_Word) SizedUInt_12)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    UInt_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SizedUInt_12, (MR_Integer) 0))));
                    break;
                  case (MR_Integer) 1:
                    {
                      uint8_t UInt8_85 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(1), SizedUInt_12, (MR_Integer) 0)));

{
#define MR_PROC_LABEL mercury__string__format__spec_to_string_2_p_0

	uint8_t U8;
	MR_Unsigned U;

	U8 = UInt8_85 ;
		{

    U = (MR_Unsigned) U8;


		;}
#undef MR_PROC_LABEL
	 UInt_14  = U;
}
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      uint16_t UInt16_86 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(2), SizedUInt_12, (MR_Integer) 0)));

{
#define MR_PROC_LABEL mercury__string__format__spec_to_string_2_p_0

	uint16_t U16;
	MR_Unsigned U;

	U16 = UInt16_86 ;
		{

    U = (MR_Unsigned) U16;


		;}
#undef MR_PROC_LABEL
	 UInt_14  = U;
}
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SizedUInt_12, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          uint32_t UInt32_87 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SizedUInt_12, (MR_Integer) 1)));

{
#define MR_PROC_LABEL mercury__string__format__spec_to_string_2_p_0

	uint32_t U32;
	MR_Unsigned U;

	U32 = UInt32_87 ;
		{

    U = (MR_Unsigned) U32;


		;}
#undef MR_PROC_LABEL
	 UInt_14  = U;
}
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_software_error_0), ((MR_Box) (((MR_Box) ((MR_String) "formatting uint64 via a cast")))));
                          return;
                        }
                        break;
                    }
                    break;
                }
                mercury__string__format__format_uint_component_6_p_0(Flags_28, MaybeWidth_29, MaybePrec_30, Base_31, UInt_14, String_4);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Kind_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 4))) & (MR_Integer) 7);
              MR_Float Float_16 = MR_unbox_float((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 5)));
              MR_Word Flags_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 1))));
              MR_Word MaybeWidth_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 2))));
              MR_Word MaybePrec_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 3))));

              mercury__string__format__format_float_component_6_p_0(Flags_32, MaybeWidth_33, MaybePrec_34, Kind_15, Float_16, String_4);
            }
            break;
        }
        break;
    }
  }
}

static MR_Integer MR_CALL 
mercury__string__format__sized_int_to_int_1_f_0(
  MR_Word SizedInt_3)
{
  {
    MR_Integer Int_4;

    switch (MR_tag((MR_Word) SizedInt_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Int_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SizedInt_3, (MR_Integer) 0))));
        break;
      case (MR_Integer) 1:
        {
          int8_t Int8_5 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(1), SizedInt_3, (MR_Integer) 0)));

{
#define MR_PROC_LABEL mercury__string__format__sized_int_to_int_1_f_0

	int8_t I8;
	MR_Integer I;

	I8 = Int8_5 ;
		{

    I = I8;


		;}
#undef MR_PROC_LABEL
	 Int_4  = I;
}
        }
        break;
      case (MR_Integer) 2:
        {
          int16_t Int16_6 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(2), SizedInt_3, (MR_Integer) 0)));

{
#define MR_PROC_LABEL mercury__string__format__sized_int_to_int_1_f_0

	int16_t I16;
	MR_Integer I;

	I16 = Int16_6 ;
		{

    I = I16;


		;}
#undef MR_PROC_LABEL
	 Int_4  = I;
}
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SizedInt_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              int32_t Int32_7 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SizedInt_3, (MR_Integer) 1)));

{
#define MR_PROC_LABEL mercury__string__format__sized_int_to_int_1_f_0

	int32_t I32;
	MR_Integer I;

	I32 = Int32_7 ;
		{

    I = I32;


		;}
#undef MR_PROC_LABEL
	 Int_4  = I;
}
            }
            break;
          case (MR_Integer) 1:
            mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_software_error_0), ((MR_Box) (((MR_Box) ((MR_String) "formatting int64 via a cast")))));
            break;
        }
        break;
    }
    return Int_4;
  }
}

MR_String MR_CALL 
mercury__string__format__format_signed_int64_4_f_0(
  MR_Word Flags_6,
  MR_Word MaybeWidth_7,
  MR_Word MaybePrec_8,
  int64_t Int_9)
{
  {
    MR_bool succeeded = (Int_9 == INT64_C(0));
    MR_String String_10;
    MR_String AbsIntStr_11;
    MR_Integer AbsIntStrLength_13;
    MR_String PrecStr_15;
    MR_String FieldStr_17;
    MR_Word ZeroPadded_18;
    MR_String SignedStr_19;
    MR_Integer Prec_14;
    MR_Integer Width_16;
    MR_Integer Var_22;
    MR_Word Var_23;
    MR_Word Var_30;
    MR_Integer Var_51;
    MR_Integer Var_52;

    if (succeeded)
    {
      MR_Integer Var_20;

      succeeded = (MaybePrec_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_8, (MR_Integer) 0))));
        succeeded = (Var_20 == (MR_Integer) 0);
      }
      if (succeeded)
        AbsIntStr_11 = (MR_String) "";
      else
        AbsIntStr_11 = (MR_String) "0";
    }
    else
    {
      succeeded = (Int_9 == INT64_MIN);
      if (succeeded)
        AbsIntStr_11 = (MR_String) "9223372036854775808";
      else
      {
        int64_t AbsInt_12;

        AbsInt_12 = mercury__int64__unchecked_abs_1_f_0(Int_9);
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int64_4_f_0

	int64_t I64;
	MR_String S;

	I64 = AbsInt_12 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" PRId64, I64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 AbsIntStr_11  = S;
}
      }
    }
    mercury__string__count_codepoints_loop_4_p_0(AbsIntStr_11, (MR_Integer) 0, (MR_Integer) 0, &AbsIntStrLength_13);
    succeeded = (MaybePrec_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Prec_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_8, (MR_Integer) 0))));
      succeeded = (Prec_14 > AbsIntStrLength_13);
    }
    if (succeeded)
      mercury__string__pad_left_4_p_0(AbsIntStr_11, (MR_Char) 48, Prec_14, &PrecStr_15);
    else
      PrecStr_15 = AbsIntStr_11;
    succeeded = (MaybeWidth_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Width_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeWidth_7, (MR_Integer) 0))));
      Var_51 = (MR_Integer) 0;
      Var_52 = (MR_Integer) 0;
      mercury__string__count_codepoints_loop_4_p_0(PrecStr_15, Var_51, Var_52, &Var_22);
      succeeded = (Width_16 > Var_22);
      if (succeeded)
      {
        Var_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        Var_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        succeeded = (Var_23 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Var_30 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (MaybePrec_8 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) Width_16 - (MR_Unsigned) 1);

      mercury__string__pad_left_4_p_0(PrecStr_15, (MR_Char) 48, Var_26, &FieldStr_17);
      ZeroPadded_18 = (MR_Integer) 1;
    }
    else
    {
      FieldStr_17 = PrecStr_15;
      ZeroPadded_18 = (MR_Integer) 0;
    }
    succeeded = (Int_9 < INT64_C(0));
    if (succeeded)
      mercury__string__append_3_p_2((MR_String) "-", FieldStr_17, &SignedStr_19);
    else
    {
      MR_Word Var_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) & (MR_Integer) 1);

      succeeded = (Var_64 == (MR_Integer) 1);
      if (succeeded)
        mercury__string__append_3_p_2((MR_String) "+", FieldStr_17, &SignedStr_19);
      else
      {
        MR_Word Var_66 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);

        succeeded = (Var_66 == (MR_Integer) 1);
        if (succeeded)
          mercury__string__append_3_p_2((MR_String) " ", FieldStr_17, &SignedStr_19);
        else
          switch (ZeroPadded_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              SignedStr_19 = FieldStr_17;
              break;
            case (MR_Integer) 1:
              mercury__string__append_3_p_2((MR_String) "0", FieldStr_17, &SignedStr_19);
              break;
          }
      }
    }
    String_10 = mercury__string__format__justify_string_3_f_0(Flags_6, MaybeWidth_7, SignedStr_19);
    return String_10;
  }
}

MR_String MR_CALL 
mercury__string__format__format_signed_int_4_f_0(
  MR_Word Flags_6,
  MR_Word MaybeWidth_7,
  MR_Word MaybePrec_8,
  MR_Integer Int_9)
{
  {
    MR_bool succeeded = (Int_9 == (MR_Integer) 0);
    MR_String String_10;
    MR_String AbsIntStr_11;
    MR_Integer AbsIntStrLength_14;
    MR_String PrecStr_16;
    MR_String FieldStr_18;
    MR_Word ZeroPadded_19;
    MR_String SignedStr_20;
    MR_Integer Prec_15;
    MR_Integer Width_17;
    MR_Integer Var_26;
    MR_Word Var_27;
    MR_Word Var_34;

    if (succeeded)
    {
      MR_Integer Var_21;

      succeeded = (MaybePrec_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_8, (MR_Integer) 0))));
        succeeded = (Var_21 == (MR_Integer) 0);
      }
      if (succeeded)
        AbsIntStr_11 = (MR_String) "";
      else
        AbsIntStr_11 = (MR_String) "0";
    }
    else
    {
      MR_Integer Var_23;

      succeeded = ((MR_Integer) -2147483647 <= Int_9);
      if (succeeded)
      {
        Var_23 = (MR_Integer) 2147483647;
        succeeded = (Int_9 <= Var_23);
      }
      if (succeeded)
      {
        MR_Integer AbsInt_12;

        mercury__int__abs_2_p_0(Int_9, &AbsInt_12);
        AbsIntStr_11 = mercury__string__format__abs_int_to_decimal_1_f_0(AbsInt_12);
      }
      else
      {
        MR_Word AbsInteger_13;
        MR_Word Var_24;
        MR_Word Var_60;

        Var_24 = mercury__integer__int_to_integer_1_f_0(Int_9);
        AbsInteger_13 = mercury__integer__big_abs_1_f_0(Var_24);
        mercury__integer____Compare____integer_0_0(&Var_60, AbsInteger_13, (MR_Word) (&mercury__string__format_scalar_common_4[2]));
        succeeded = (Var_60 == (MR_Integer) 2);
        if (succeeded)
        {
          MR_String FrontDigitsStr_49;
          MR_String LastDigitStr_50;
          MR_Integer Var_52;
          MR_Word Var_53;
          MR_Integer Var_54;
          MR_Word Var_55;
          MR_Word Var_76;
          MR_Word Var_83;
          MR_String DecimalPrime_86;

          mercury__integer__big_quot_rem_4_p_0(AbsInteger_13, (MR_Word) (&mercury__string__format_scalar_common_4[1]), &Var_53, &Var_76);
          Var_52 = mercury__integer__det_to_int_1_f_0(Var_53);
          FrontDigitsStr_49 = mercury__string__format__abs_int_to_decimal_1_f_0(Var_52);
          mercury__integer__big_quot_rem_4_p_0(AbsInteger_13, (MR_Word) (&mercury__string__format_scalar_common_4[1]), &Var_83, &Var_55);
          Var_54 = mercury__integer__det_to_int_1_f_0(Var_55);
          if ((((MR_Unsigned) Var_54) <= ((MR_Unsigned) 9)))
          {
            DecimalPrime_86 = ((&mercury__string__format_vector_common_5[32 + Var_54]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
          if (succeeded)
            LastDigitStr_50 = DecimalPrime_86;
          else
            mercury__require__unexpected_2_p_0((MR_String) "function \140string.format.get_decimal_digit\'/1", (MR_String) "decimal_digit failed");
          mercury__string__append_3_p_2(FrontDigitsStr_49, LastDigitStr_50, &AbsIntStr_11);
        }
        else
          AbsIntStr_11 = (MR_String) "";
      }
    }
    mercury__string__count_codepoints_loop_4_p_0(AbsIntStr_11, (MR_Integer) 0, (MR_Integer) 0, &AbsIntStrLength_14);
    succeeded = (MaybePrec_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Prec_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_8, (MR_Integer) 0))));
      succeeded = (Prec_15 > AbsIntStrLength_14);
    }
    if (succeeded)
      PrecStr_16 = mercury__string__pad_left_3_f_0(AbsIntStr_11, (MR_Char) 48, Prec_15);
    else
      PrecStr_16 = AbsIntStr_11;
    succeeded = (MaybeWidth_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Width_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeWidth_7, (MR_Integer) 0))));
      Var_26 = mercury__string__count_codepoints_1_f_0(PrecStr_16);
      succeeded = (Width_17 > Var_26);
      if (succeeded)
      {
        Var_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        succeeded = (Var_27 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Var_34 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (MaybePrec_8 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) Width_17 - (MR_Unsigned) 1);

      FieldStr_18 = mercury__string__pad_left_3_f_0(PrecStr_16, (MR_Char) 48, Var_30);
      ZeroPadded_19 = (MR_Integer) 1;
    }
    else
    {
      FieldStr_18 = PrecStr_16;
      ZeroPadded_19 = (MR_Integer) 0;
    }
    succeeded = (Int_9 < (MR_Integer) 0);
    if (succeeded)
      mercury__string__append_3_p_2((MR_String) "-", FieldStr_18, &SignedStr_20);
    else
    {
      MR_Word Var_105 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) & (MR_Integer) 1);

      succeeded = (Var_105 == (MR_Integer) 1);
      if (succeeded)
        mercury__string__append_3_p_2((MR_String) "+", FieldStr_18, &SignedStr_20);
      else
      {
        MR_Word Var_107 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);

        succeeded = (Var_107 == (MR_Integer) 1);
        if (succeeded)
          mercury__string__append_3_p_2((MR_String) " ", FieldStr_18, &SignedStr_20);
        else
          switch (ZeroPadded_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              SignedStr_20 = FieldStr_18;
              break;
            case (MR_Integer) 1:
              mercury__string__append_3_p_2((MR_String) "0", FieldStr_18, &SignedStr_20);
              break;
          }
      }
    }
    String_10 = mercury__string__format__justify_string_3_f_0(Flags_6, MaybeWidth_7, SignedStr_20);
    return String_10;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_int_to_decimal_1_f_0(
  MR_Integer Num_3)
{
  {
    MR_bool succeeded = (Num_3 > (MR_Integer) 0);
    MR_String NumStr_4;

    if (succeeded)
    {
      MR_String FrontDigitsStr_5;
      MR_String LastDigitStr_6;
      MR_Integer Var_8 = (Num_3 / (MR_Integer) 10);
      MR_Integer Var_10;
      MR_String DecimalPrime_26;

      FrontDigitsStr_5 = mercury__string__format__abs_int_to_decimal_1_f_0(Var_8);
      Var_10 = (Num_3 % (MR_Integer) 10);
      if ((((MR_Unsigned) Var_10) <= ((MR_Unsigned) 9)))
      {
        DecimalPrime_26 = ((&mercury__string__format_vector_common_5[22 + Var_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        LastDigitStr_6 = DecimalPrime_26;
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140string.format.get_decimal_digit\'/1", (MR_String) "decimal_digit failed");
      mercury__string__append_3_p_2(FrontDigitsStr_5, LastDigitStr_6, &NumStr_4);
    }
    else
      NumStr_4 = (MR_String) "";
    return NumStr_4;
  }
}

void MR_CALL 
mercury__string__format__format_float_component_6_p_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Kind_10,
  MR_Float Float_11,
  MR_String * String_12)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt = Float_11 ;
		{

    SUCCESS_INDICATOR = MR_is_finite(Flt);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    }
    if (succeeded)
    {
      MR_String SpecChar_13 = ((&mercury__string__format_vector_common_5[16 + Kind_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
      MR_String FormatStr_14;

      FormatStr_14 = mercury__string__format__make_format_sprintf_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, (MR_String) "", SpecChar_13);
{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_String FormatStr;
	MR_Float Val;
	MR_String Str;

	FormatStr = FormatStr_14 ;
	Val = Float_11 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, (double) Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_12  = Str;
}
    }
    else
      *String_12 = mercury__string__format__format_float_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, Kind_10, Float_11);
  }
}

static MR_String MR_CALL 
mercury__string__format__format_float_5_f_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Kind_10,
  MR_Float Float_11)
{
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_String SignedStr_13;

{
#define MR_PROC_LABEL mercury__string__format__format_float_5_f_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt = Float_11 ;
		{

    SUCCESS_INDICATOR = MR_is_nan(Flt);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      SignedStr_13 = ((&mercury__string__format_vector_common_5[10 + Kind_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
    else
    {
{
#define MR_PROC_LABEL mercury__string__format__format_float_5_f_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt = Float_11 ;
		{

    SUCCESS_INDICATOR = MR_is_infinite(Flt);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        switch (Kind_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
            {
              succeeded = (Float_11 < ((MR_Float) 0.0000000000000000));
              if (succeeded)
                SignedStr_13 = (MR_String) "-infinity";
              else
                SignedStr_13 = (MR_String) "infinity";
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
            {
              succeeded = (Float_11 < ((MR_Float) 0.0000000000000000));
              if (succeeded)
                SignedStr_13 = (MR_String) "-INFINITY";
              else
                SignedStr_13 = (MR_String) "INFINITY";
            }
            break;
        }
      else
      {
        MR_Float AbsFloat_14;
        MR_String AbsStr_15;
        MR_String PrecModStr_21;
        MR_String FieldStr_24;
        MR_Word ZeroPadded_25;
        MR_Integer Width_23;
        MR_Integer Var_35;
        MR_Word Var_36;
        MR_Word Var_56;

        AbsFloat_14 = mercury__float__abs_1_f_0(Float_11);
        AbsStr_15 = mercury__string__format__convert_float_to_string_1_f_0(AbsFloat_14);
        switch (Kind_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Prec_17;
              MR_String PrecStr_18;
              MR_Word Var_33;
              MR_Integer Var_34;

              if ((MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U)))
                Prec_17 = (MR_Integer) 6;
              else
                Prec_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
              PrecStr_18 = mercury__string__format__change_to_e_notation_3_f_0(AbsStr_15, Prec_17, (MR_String) "e");
              Var_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
              succeeded = (Var_33 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (MaybePrec_9 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
                  succeeded = (Var_34 == (MR_Integer) 0);
                }
              }
              if (succeeded)
              {
                MR_String BaseStr_19;
                MR_String ExponentStr_20;

                mercury__string__format__split_at_decimal_point_3_p_0(PrecStr_18, &BaseStr_19, &ExponentStr_20);
                PrecModStr_21 = mercury__string__f_43_43_2_f_0(BaseStr_19, ExponentStr_20);
              }
              else
                PrecModStr_21 = PrecStr_18;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Prec_83;
              MR_String PrecStr_84;
              MR_Word Var_66;
              MR_Integer Var_67;

              if ((MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U)))
                Prec_83 = (MR_Integer) 6;
              else
                Prec_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
              PrecStr_84 = mercury__string__format__change_to_e_notation_3_f_0(AbsStr_15, Prec_83, (MR_String) "E");
              Var_66 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
              succeeded = (Var_66 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (MaybePrec_9 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
                  succeeded = (Var_67 == (MR_Integer) 0);
                }
              }
              if (succeeded)
              {
                MR_String BaseStr_72;
                MR_String ExponentStr_73;

                mercury__string__format__split_at_decimal_point_3_p_0(PrecStr_84, &BaseStr_72, &ExponentStr_73);
                PrecModStr_21 = mercury__string__f_43_43_2_f_0(BaseStr_72, ExponentStr_73);
              }
              else
                PrecModStr_21 = PrecStr_84;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              MR_Integer Prec_41;
              MR_String PrecStr_42;
              MR_Word Var_28;
              MR_Integer Var_29;

              if ((MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U)))
                Prec_41 = (MR_Integer) 6;
              else
                Prec_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
              PrecStr_42 = mercury__string__format__change_precision_2_f_0(AbsStr_15, Prec_41);
              Var_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
              succeeded = (Var_28 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (MaybePrec_9 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
                  succeeded = (Var_29 == (MR_Integer) 0);
                }
              }
              if (succeeded)
              {
                MR_Integer PrecStrLen_22;
                MR_Integer Var_31;

                PrecStrLen_22 = mercury__string__count_codepoints_1_f_0(PrecStr_42);
                Var_31 = (MR_Integer) ((MR_Unsigned) PrecStrLen_22 - (MR_Unsigned) 1);
                PrecModStr_21 = mercury__string__between_3_f_0(PrecStr_42, (MR_Integer) 0, Var_31);
              }
              else
                PrecModStr_21 = PrecStr_42;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer Prec_44;

              if ((MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U)))
                Prec_44 = (MR_Integer) 6;
              else
              {
                MR_Integer Prec0_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));

                succeeded = (Prec0_105 == (MR_Integer) 0);
                if (succeeded)
                  Prec_44 = (MR_Integer) 1;
                else
                  Prec_44 = Prec0_105;
              }
              PrecModStr_21 = mercury__string__format__change_to_g_notation_4_f_0(AbsStr_15, Prec_44, (MR_String) "e", Flags_7);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Prec_94;

              if ((MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U)))
                Prec_94 = (MR_Integer) 6;
              else
              {
                MR_Integer Prec0_108 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));

                succeeded = (Prec0_108 == (MR_Integer) 0);
                if (succeeded)
                  Prec_94 = (MR_Integer) 1;
                else
                  Prec_94 = Prec0_108;
              }
              PrecModStr_21 = mercury__string__format__change_to_g_notation_4_f_0(AbsStr_15, Prec_94, (MR_String) "E", Flags_7);
            }
            break;
        }
        succeeded = (MaybeWidth_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Width_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeWidth_8, (MR_Integer) 0))));
          Var_35 = mercury__string__count_codepoints_1_f_0(PrecModStr_21);
          succeeded = (Width_23 > Var_35);
          if (succeeded)
          {
            Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
            Var_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
            succeeded = (Var_36 == (MR_Integer) 1);
            if (succeeded)
              succeeded = (Var_56 == (MR_Integer) 0);
          }
        }
        if (succeeded)
        {
          MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) Width_23 - (MR_Unsigned) 1);

          FieldStr_24 = mercury__string__pad_left_3_f_0(PrecModStr_21, (MR_Char) 48, Var_39);
          ZeroPadded_25 = (MR_Integer) 1;
        }
        else
        {
          FieldStr_24 = PrecModStr_21;
          ZeroPadded_25 = (MR_Integer) 0;
        }
        succeeded = (Float_11 < ((MR_Float) 0.0000000000000000));
        if (succeeded)
          mercury__string__append_3_p_2((MR_String) "-", FieldStr_24, &SignedStr_13);
        else
        {
          MR_Word Var_116 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) & (MR_Integer) 1);

          succeeded = (Var_116 == (MR_Integer) 1);
          if (succeeded)
            mercury__string__append_3_p_2((MR_String) "+", FieldStr_24, &SignedStr_13);
          else
          {
            MR_Word Var_118 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);

            succeeded = (Var_118 == (MR_Integer) 1);
            if (succeeded)
              mercury__string__append_3_p_2((MR_String) " ", FieldStr_24, &SignedStr_13);
            else
              switch (ZeroPadded_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  SignedStr_13 = FieldStr_24;
                  break;
                case (MR_Integer) 1:
                  mercury__string__append_3_p_2((MR_String) "0", FieldStr_24, &SignedStr_13);
                  break;
              }
          }
        }
      }
    }
    String_12 = mercury__string__format__justify_string_3_f_0(Flags_7, MaybeWidth_8, SignedStr_13);
    return String_12;
  }
}

static MR_String MR_CALL 
mercury__string__format__change_to_g_notation_4_f_0(
  MR_String Float_6,
  MR_Integer Prec_7,
  MR_String E_8,
  MR_Word Flags_9)
{
  {
    MR_bool succeeded;
    MR_String FormattedFloat_10;
    MR_Integer Exponent_11;
    MR_Integer UnsafeExponent_61;
    MR_String UnsafeBase_62;
    MR_String MantissaStr_63;
    MR_String MantissaStr_70;
    MR_Integer NumZeros_72;
    MR_Integer Var_73;
    MR_Word Var_75;
    MR_String _FractionStr_71;
    MR_String _FractionStr_64;
    MR_Integer Var_65;

    mercury__string__format__split_at_decimal_point_3_p_0(Float_6, &MantissaStr_70, &_FractionStr_71);
    mercury__string__count_codepoints_loop_4_p_0(MantissaStr_70, (MR_Integer) 0, (MR_Integer) 0, &Var_73);
    NumZeros_72 = (MR_Integer) ((MR_Unsigned) Var_73 - (MR_Unsigned) 1);
    mercury__string__to_char_list_2_p_0(Float_6, &Var_75);
    UnsafeExponent_61 = mercury__string__format__find_non_zero_pos_2_f_0(Var_75, NumZeros_72);
    UnsafeBase_62 = mercury__string__format__calculate_base_unsafe_2_f_0(Float_6, Prec_7);
    mercury__string__format__split_at_decimal_point_3_p_0(UnsafeBase_62, &MantissaStr_63, &_FractionStr_64);
    mercury__string__count_codepoints_loop_4_p_0(MantissaStr_63, (MR_Integer) 0, (MR_Integer) 0, &Var_65);
    succeeded = (Var_65 > (MR_Integer) 1);
    if (succeeded)
      Exponent_11 = (MR_Integer) ((MR_Unsigned) UnsafeExponent_61 + (MR_Unsigned) 1);
    else
      Exponent_11 = UnsafeExponent_61;
    succeeded = (Exponent_11 >= (MR_Integer) -4);
    if (succeeded)
      succeeded = (Exponent_11 < Prec_7);
    if (succeeded)
    {
      MR_String FormattedFloat0_13;
      MR_Word Var_39;

      succeeded = (Exponent_11 <= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer DecimalPos_12;
        MR_Integer Var_26;
        MR_Integer Var_27;
        MR_Integer Var_28;

        DecimalPos_12 = mercury__string__format__decimal_pos_1_f_0(Float_6);
        mercury__int__abs_2_p_0(DecimalPos_12, &Var_28);
        Var_27 = (MR_Integer) ((MR_Unsigned) Var_28 - (MR_Unsigned) 1);
        Var_26 = (MR_Integer) ((MR_Unsigned) Var_27 + (MR_Unsigned) Prec_7);
        FormattedFloat0_13 = mercury__string__format__change_precision_2_f_0(Float_6, Var_26);
      }
      else
      {
        MR_String ScientificFloat_14;
        MR_String BaseStr_15;
        MR_String ExponentStr_16;
        MR_Integer Exp_17;
        MR_String MantissaStr_18;
        MR_String FractionStr_19;
        MR_String RestMantissaStr_20;
        MR_String NewFraction_21;
        MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) Prec_7 - (MR_Unsigned) 1);
        MR_Integer Var_34;
        MR_String Var_36;
        MR_String Var_37;

        ScientificFloat_14 = mercury__string__format__change_to_e_notation_3_f_0(Float_6, Var_30, (MR_String) "e");
        mercury__string__format__split_at_exponent_3_p_0(ScientificFloat_14, &BaseStr_15, &ExponentStr_16);
        Exp_17 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, ExponentStr_16);
        mercury__string__format__split_at_decimal_point_3_p_0(BaseStr_15, &MantissaStr_18, &FractionStr_19);
        RestMantissaStr_20 = mercury__string__between_3_f_0(FractionStr_19, (MR_Integer) 0, Exp_17);
        Var_34 = (MR_Integer) ((MR_Unsigned) Prec_7 - (MR_Unsigned) 1);
        NewFraction_21 = mercury__string__between_3_f_0(FractionStr_19, Exp_17, Var_34);
        Var_37 = mercury__string__f_43_43_2_f_0((MR_String) ".", NewFraction_21);
        Var_36 = mercury__string__f_43_43_2_f_0(RestMantissaStr_20, Var_37);
        FormattedFloat0_13 = mercury__string__f_43_43_2_f_0(MantissaStr_18, Var_36);
      }
      Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_9, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      succeeded = (Var_39 == (MR_Integer) 1);
      if (succeeded)
        FormattedFloat_10 = FormattedFloat0_13;
      else
        FormattedFloat_10 = mercury__string__format__remove_trailing_zeros_1_f_0(FormattedFloat0_13);
    }
    else
    {
      MR_String UncheckedFloat_22;
      MR_Integer Var_40 = (MR_Integer) ((MR_Unsigned) Prec_7 - (MR_Unsigned) 1);
      MR_Word Var_42;

      UncheckedFloat_22 = mercury__string__format__change_to_e_notation_3_f_0(Float_6, Var_40, E_8);
      Var_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_9, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      succeeded = (Var_42 == (MR_Integer) 1);
      if (succeeded)
        FormattedFloat_10 = UncheckedFloat_22;
      else
      {
        MR_String NewBaseStr_23;
        MR_String Var_43;
        MR_String BaseStr_44;
        MR_String ExponentStr_45;

        mercury__string__format__split_at_exponent_3_p_0(UncheckedFloat_22, &BaseStr_44, &ExponentStr_45);
        NewBaseStr_23 = mercury__string__format__remove_trailing_zeros_1_f_0(BaseStr_44);
        Var_43 = mercury__string__f_43_43_2_f_0(E_8, ExponentStr_45);
        FormattedFloat_10 = mercury__string__f_43_43_2_f_0(NewBaseStr_23, Var_43);
      }
    }
    return FormattedFloat_10;
  }
}

static void MR_CALL 
mercury__string__format__split_at_exponent_3_p_0(
  MR_String Str_4,
  MR_String * Float_5,
  MR_String * Exponent_6)
{
  {
    MR_Word FloatAndExponent_7;
    MR_Integer Var_18;
    MR_Box conv0_Float_5;
    MR_Box conv1_Exponent_6;

    mercury__string__format__skip_to_next_word_start__ho5_4_p_in__string_0(Str_4, (MR_Integer) 0, &Var_18);
    mercury__string__format__words_loop__ho4_4_p_in__string_0(Str_4, Var_18, &FloatAndExponent_7);
    mercury__list__det_index0_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FloatAndExponent_7, (MR_Integer) 0, &conv0_Float_5);
    *Float_5 = ((MR_String) (conv0_Float_5));
    mercury__list__det_index0_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FloatAndExponent_7, (MR_Integer) 1, &conv1_Exponent_6);
    *Exponent_6 = ((MR_String) (conv1_Exponent_6));
  }
}

static MR_Integer MR_CALL 
mercury__string__format__decimal_pos_1_f_0(
  MR_String Float_3)
{
  {
    MR_Integer Pos_4;
    MR_String MantissaStr_5;
    MR_Integer NumZeros_7;
    MR_Integer Var_8;
    MR_Word Var_10;
    MR_String _FractionStr_6;

    mercury__string__format__split_at_decimal_point_3_p_0(Float_3, &MantissaStr_5, &_FractionStr_6);
    mercury__string__count_codepoints_loop_4_p_0(MantissaStr_5, (MR_Integer) 0, (MR_Integer) 0, &Var_8);
    NumZeros_7 = (MR_Integer) ((MR_Unsigned) Var_8 - (MR_Unsigned) 1);
    mercury__string__to_char_list_2_p_0(Float_3, &Var_10);
    Pos_4 = mercury__string__format__find_non_zero_pos_2_f_0(Var_10, NumZeros_7);
    return Pos_4;
  }
}

static MR_String MR_CALL 
mercury__string__format__remove_trailing_zeros_1_f_0(
  MR_String Float_3)
{
  {
    MR_String TrimmedFloat_4;
    MR_Word FloatCharList_5;
    MR_Word FloatCharListRev_6;
    MR_Word TrimmedFloatRevCharList_7;
    MR_Word TrimmedFloatCharList_8;

    mercury__string__to_char_list_2_p_0(Float_3, &FloatCharList_5);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), FloatCharList_5, &FloatCharListRev_6);
    TrimmedFloatRevCharList_7 = mercury__string__format__remove_zeros_1_f_0(FloatCharListRev_6);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), TrimmedFloatRevCharList_7, &TrimmedFloatCharList_8);
    mercury__string__from_char_list_2_p_0(TrimmedFloatCharList_8, &TrimmedFloat_4);
    return TrimmedFloat_4;
  }
}

static MR_Word MR_CALL 
mercury__string__format__remove_zeros_1_f_0(
  MR_Word CharNum_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CharNum_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TrimmedNum_4;
    MR_Word Rest_5;
    MR_Char Var_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharNum_3, (MR_Integer) 0)));
      Rest_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CharNum_3, (MR_Integer) 1))));
      succeeded = (Var_6 == (MR_Char) 48);
    }
    if (succeeded)
    {
      MR_Word next_value_of_CharNum_3 = Rest_5;

      // direct tailcall eliminated
      ;
      CharNum_3 = next_value_of_CharNum_3;
      continue;
    }
    else
    {
      MR_Word Rest_8;
      MR_Char Var_7;

      succeeded = (CharNum_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharNum_3, (MR_Integer) 0)));
        Rest_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CharNum_3, (MR_Integer) 1))));
        succeeded = (Var_7 == (MR_Char) 46);
      }
      if (succeeded)
        TrimmedNum_4 = Rest_8;
      else
        TrimmedNum_4 = CharNum_3;
    }
    return TrimmedNum_4;
    break;
  }
}

static MR_String MR_CALL 
mercury__string__format__change_to_e_notation_3_f_0(
  MR_String Float_5,
  MR_Integer Prec_6,
  MR_String E_7)
{
  {
    MR_bool succeeded;
    MR_String ScientificFloat_8;
    MR_Integer UnsafeExponent_9;
    MR_String UnsafeBase_10;
    MR_String MantissaStr_11;
    MR_String SafeBase_13;
    MR_Integer SafeExponent_14;
    MR_String ExponentStr_15;
    MR_String MantissaStr_46;
    MR_Integer NumZeros_48;
    MR_Integer Var_49;
    MR_Word Var_51;
    MR_String _FractionStr_47;
    MR_String _FractionStr_12;
    MR_Integer Var_16;

    mercury__string__format__split_at_decimal_point_3_p_0(Float_5, &MantissaStr_46, &_FractionStr_47);
    mercury__string__count_codepoints_loop_4_p_0(MantissaStr_46, (MR_Integer) 0, (MR_Integer) 0, &Var_49);
    NumZeros_48 = (MR_Integer) ((MR_Unsigned) Var_49 - (MR_Unsigned) 1);
    mercury__string__to_char_list_2_p_0(Float_5, &Var_51);
    UnsafeExponent_9 = mercury__string__format__find_non_zero_pos_2_f_0(Var_51, NumZeros_48);
    UnsafeBase_10 = mercury__string__format__calculate_base_unsafe_2_f_0(Float_5, Prec_6);
    mercury__string__format__split_at_decimal_point_3_p_0(UnsafeBase_10, &MantissaStr_11, &_FractionStr_12);
    mercury__string__count_codepoints_loop_4_p_0(MantissaStr_11, (MR_Integer) 0, (MR_Integer) 0, &Var_16);
    succeeded = (Var_16 > (MR_Integer) 1);
    if (succeeded)
    {
      MR_String Var_18;

      mercury__string__append_3_p_2(UnsafeBase_10, (MR_String) "0", &Var_18);
      SafeBase_13 = mercury__string__format__calculate_base_unsafe_2_f_0(Var_18, Prec_6);
      SafeExponent_14 = (MR_Integer) ((MR_Unsigned) UnsafeExponent_9 + (MR_Unsigned) 1);
    }
    else
    {
      SafeBase_13 = UnsafeBase_10;
      SafeExponent_14 = UnsafeExponent_9;
    }
    succeeded = (SafeExponent_14 >= (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (SafeExponent_14 < (MR_Integer) 10);
      if (succeeded)
      {
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_26;
        MR_String Var_27;

{
#define MR_PROC_LABEL mercury__string__format__change_to_e_notation_3_f_0

	MR_Integer I;
	MR_String S;

	I = SafeExponent_14 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_27  = S;
}
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_String) "+0"));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (E_7));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_24));
        }
        ExponentStr_15 = mercury__string__append_list_1_f_0(Var_23);
      }
      else
      {
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_32;
        MR_String Var_33;

{
#define MR_PROC_LABEL mercury__string__format__change_to_e_notation_3_f_0

	MR_Integer I;
	MR_String S;

	I = SafeExponent_14 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_33  = S;
}
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_String) "+"));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (E_7));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
        }
        ExponentStr_15 = mercury__string__append_list_1_f_0(Var_29);
      }
    }
    else
    {
      succeeded = (SafeExponent_14 > (MR_Integer) -10);
      if (succeeded)
      {
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_39;
        MR_String Var_40;
        MR_Integer Var_41;

        mercury__int__abs_2_p_0(SafeExponent_14, &Var_41);
{
#define MR_PROC_LABEL mercury__string__format__change_to_e_notation_3_f_0

	MR_Integer I;
	MR_String S;

	I = Var_41 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_40  = S;
}
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_String) "-0"));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (E_7));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
        }
        ExponentStr_15 = mercury__string__append_list_1_f_0(Var_36);
      }
      else
      {
        MR_String Var_43;

{
#define MR_PROC_LABEL mercury__string__format__change_to_e_notation_3_f_0

	MR_Integer I;
	MR_String S;

	I = SafeExponent_14 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_43  = S;
}
        mercury__string__append_3_p_2(E_7, Var_43, &ExponentStr_15);
      }
    }
    mercury__string__append_3_p_2(SafeBase_13, ExponentStr_15, &ScientificFloat_8);
    return ScientificFloat_8;
  }
}

static MR_String MR_CALL 
mercury__string__format__calculate_base_unsafe_2_f_0(
  MR_String Float_4,
  MR_Integer Prec_5)
{
  {
    MR_bool succeeded;
    MR_String Exp_6;
    MR_Integer Place_7;
    MR_String MantissaStr_8;
    MR_String FractionStr_9;
    MR_String ExpMantissaStr_13;
    MR_String ExpFractionStr_15;
    MR_String MantissaAndPoint_17;
    MR_String UnroundedExpStr_18;
    MR_String MantissaStr_36;
    MR_Integer NumZeros_38;
    MR_Integer Var_39;
    MR_Word Var_41;
    MR_String _FractionStr_37;

    mercury__string__format__split_at_decimal_point_3_p_0(Float_4, &MantissaStr_36, &_FractionStr_37);
    mercury__string__count_codepoints_loop_4_p_0(MantissaStr_36, (MR_Integer) 0, (MR_Integer) 0, &Var_39);
    NumZeros_38 = (MR_Integer) ((MR_Unsigned) Var_39 - (MR_Unsigned) 1);
    mercury__string__to_char_list_2_p_0(Float_4, &Var_41);
    Place_7 = mercury__string__format__find_non_zero_pos_2_f_0(Var_41, NumZeros_38);
    mercury__string__format__split_at_decimal_point_3_p_0(Float_4, &MantissaStr_8, &FractionStr_9);
    succeeded = (Place_7 < (MR_Integer) 0);
    if (succeeded)
    {
      MR_Integer DecimalPos_10;
      MR_String PaddedMantissaStr_11;
      MR_Integer MantissaInt_12;
      MR_String PaddedFractionStr_14;
      MR_Integer Var_22;
      MR_Integer Var_24;
      MR_Integer Var_25;

      mercury__int__abs_2_p_0(Place_7, &DecimalPos_10);
      mercury__string__between_4_p_0(FractionStr_9, (MR_Integer) 0, DecimalPos_10, &PaddedMantissaStr_11);
      MantissaInt_12 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, PaddedMantissaStr_11);
{
#define MR_PROC_LABEL mercury__string__format__calculate_base_unsafe_2_f_0

	MR_Integer I;
	MR_String S;

	I = MantissaInt_12 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 ExpMantissaStr_13  = S;
}
      Var_22 = (MR_Integer) ((MR_Unsigned) Prec_5 + (MR_Unsigned) 1);
      mercury__string__pad_right_4_p_0(FractionStr_9, (MR_Char) 48, Var_22, &PaddedFractionStr_14);
      Var_25 = (MR_Integer) ((MR_Unsigned) DecimalPos_10 + (MR_Unsigned) Prec_5);
      Var_24 = (MR_Integer) ((MR_Unsigned) Var_25 + (MR_Unsigned) 1);
      mercury__string__between_4_p_0(PaddedFractionStr_14, DecimalPos_10, Var_24, &ExpFractionStr_15);
    }
    else
    {
      succeeded = (Place_7 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_String FirstHalfOfFractionStr_16;
        MR_Integer Var_31;

        mercury__string__between_4_p_0(MantissaStr_8, (MR_Integer) 0, (MR_Integer) 1, &ExpMantissaStr_13);
        Var_31 = (MR_Integer) ((MR_Unsigned) Place_7 + (MR_Unsigned) 1);
        mercury__string__between_4_p_0(MantissaStr_8, (MR_Integer) 1, Var_31, &FirstHalfOfFractionStr_16);
        mercury__string__append_3_p_2(FirstHalfOfFractionStr_16, FractionStr_9, &ExpFractionStr_15);
      }
      else
      {
        ExpMantissaStr_13 = MantissaStr_8;
        ExpFractionStr_15 = FractionStr_9;
      }
    }
    mercury__string__append_3_p_2(ExpMantissaStr_13, (MR_String) ".", &MantissaAndPoint_17);
    mercury__string__append_3_p_2(MantissaAndPoint_17, ExpFractionStr_15, &UnroundedExpStr_18);
    Exp_6 = mercury__string__format__change_precision_2_f_0(UnroundedExpStr_18, Prec_5);
    return Exp_6;
  }
}

static MR_String MR_CALL 
mercury__string__format__change_precision_2_f_0(
  MR_String OldFloat_4,
  MR_Integer Prec_5)
{
  {
    MR_bool succeeded;
    MR_String NewFloat_6;
    MR_String MantissaStr_7;
    MR_String FractionStr_8;
    MR_Integer FracStrLen_9;
    MR_String PrecFracStr_10;
    MR_String PrecMantissaStr_11;
    MR_String HalfNewFloat_18;

    mercury__string__format__split_at_decimal_point_3_p_0(OldFloat_4, &MantissaStr_7, &FractionStr_8);
    mercury__string__count_codepoints_loop_4_p_0(FractionStr_8, (MR_Integer) 0, (MR_Integer) 0, &FracStrLen_9);
    succeeded = (Prec_5 > FracStrLen_9);
    if (succeeded)
    {
      mercury__string__pad_right_4_p_0(FractionStr_8, (MR_Char) 48, Prec_5, &PrecFracStr_10);
      PrecMantissaStr_11 = MantissaStr_7;
    }
    else
    {
      succeeded = (Prec_5 < FracStrLen_9);
      if (succeeded)
      {
        MR_String UnroundedFrac_12;
        MR_Char NextDigit_13;
        MR_Char Var_66;
        MR_Integer Var_72;
        MR_Integer Var_21;
        MR_Integer Var_22;
        MR_Integer Var_23;
        MR_Integer Var_24;
        MR_Char Var_25;

        mercury__string__between_4_p_0(FractionStr_8, (MR_Integer) 0, Prec_5, &UnroundedFrac_12);
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = FractionStr_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_72  = Length;
}
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Prec_5 ;
	Length = Var_72 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = FractionStr_8 ;
	Index = Prec_5 ;
		{

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	 Var_66  = Ch;
}
          succeeded = MR_TRUE;
        }
        if (succeeded)
          NextDigit_13 = Var_66;
        else
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.det_index\'/3", (MR_String) "index out of range");
        succeeded = (strcmp(UnroundedFrac_12, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character = NextDigit_13 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_23  = Int;
}
          Var_25 = (MR_Char) 48;
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character = Var_25 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_24  = Int;
}
          Var_21 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) Var_24);
          Var_22 = (MR_Integer) 5;
          succeeded = (Var_21 >= Var_22);
        }
        if (succeeded)
        {
          MR_Integer NewPrecFrac_14;
          MR_String NewPrecFracStrNotOK_15;
          MR_String NewPrecFracStr_16;
          MR_Integer Var_26;
          MR_Integer Var_29;
          MR_Integer Var_30;

          Var_26 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, UnroundedFrac_12);
          NewPrecFrac_14 = (MR_Integer) ((MR_Unsigned) Var_26 + (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Integer I;
	MR_String S;

	I = NewPrecFrac_14 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 NewPrecFracStrNotOK_15  = S;
}
          mercury__string__pad_left_4_p_0(NewPrecFracStrNotOK_15, (MR_Char) 48, Prec_5, &NewPrecFracStr_16);
          mercury__string__count_codepoints_loop_4_p_0(NewPrecFracStr_16, (MR_Integer) 0, (MR_Integer) 0, &Var_29);
          mercury__string__count_codepoints_loop_4_p_0(UnroundedFrac_12, (MR_Integer) 0, (MR_Integer) 0, &Var_30);
          succeeded = (Var_29 > Var_30);
          if (succeeded)
          {
            MR_Integer PrecMantissaInt_17;
            MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Prec_5);
            MR_Integer Var_34;

            PrecFracStr_10 = mercury__string__between_3_f_0(NewPrecFracStr_16, (MR_Integer) 1, Var_32);
            Var_34 = mercury__string__det_to_int_1_f_0(MantissaStr_7);
            PrecMantissaInt_17 = (MR_Integer) ((MR_Unsigned) Var_34 + (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Integer I;
	MR_String S;

	I = PrecMantissaInt_17 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 PrecMantissaStr_11  = S;
}
          }
          else
          {
            PrecFracStr_10 = NewPrecFracStr_16;
            PrecMantissaStr_11 = MantissaStr_7;
          }
        }
        else
        {
          MR_Integer Var_36;
          MR_Integer Var_37;
          MR_Integer Var_38;
          MR_Integer Var_39;
          MR_Char Var_40;

          succeeded = (strcmp(UnroundedFrac_12, (MR_String) "") == 0);
          if (succeeded)
          {
            Var_38 = mercury__char__to_int_1_f_0(NextDigit_13);
            Var_40 = (MR_Char) 48;
            Var_39 = mercury__char__to_int_1_f_0(Var_40);
            Var_36 = (MR_Integer) ((MR_Unsigned) Var_38 - (MR_Unsigned) Var_39);
            Var_37 = (MR_Integer) 5;
            succeeded = (Var_36 >= Var_37);
          }
          if (succeeded)
          {
            MR_Integer Var_41;
            MR_Integer PrecMantissaInt_44;

            Var_41 = mercury__string__det_to_int_1_f_0(MantissaStr_7);
            PrecMantissaInt_44 = (MR_Integer) ((MR_Unsigned) Var_41 + (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Integer I;
	MR_String S;

	I = PrecMantissaInt_44 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 PrecMantissaStr_11  = S;
}
            PrecFracStr_10 = (MR_String) "";
          }
          else
          {
            PrecFracStr_10 = UnroundedFrac_12;
            PrecMantissaStr_11 = MantissaStr_7;
          }
        }
      }
      else
      {
        PrecFracStr_10 = FractionStr_8;
        PrecMantissaStr_11 = MantissaStr_7;
      }
    }
    HalfNewFloat_18 = mercury__string__f_43_43_2_f_0(PrecMantissaStr_11, (MR_String) ".");
    NewFloat_6 = mercury__string__f_43_43_2_f_0(HalfNewFloat_18, PrecFracStr_10);
    return NewFloat_6;
  }
}

static MR_Integer MR_CALL 
mercury__string__format__find_non_zero_pos_2_f_0(
  MR_Word L_4,
  MR_Integer CurrentPos_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer ActualPos_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((L_4 == (MR_Word) ((MR_Unsigned) 0U)))
      ActualPos_6 = (MR_Integer) 0;
    else
    {
      MR_Char H_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), L_4, (MR_Integer) 0)));
      MR_Word T_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), L_4, (MR_Integer) 1))));

      succeeded = (H_7 == (MR_Char) 46);
      if (succeeded)
      {
        MR_Word next_value_of_L_4 = T_8;

        // direct tailcall eliminated
        ;
        L_4 = next_value_of_L_4;
        continue;
      }
      else
      {
        succeeded = (H_7 == (MR_Char) 48);
        if (succeeded)
        {
          MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) CurrentPos_5 - (MR_Unsigned) 1);
          MR_Word next_value_of_L_4 = T_8;
          MR_Integer next_value_of_CurrentPos_5 = Var_9;

          // direct tailcall eliminated
          ;
          L_4 = next_value_of_L_4;
          CurrentPos_5 = next_value_of_CurrentPos_5;
          continue;
        }
        else
          ActualPos_6 = CurrentPos_5;
      }
    }
    return ActualPos_6;
    break;
  }
}

static MR_String MR_CALL 
mercury__string__format__convert_float_to_string_1_f_0(
  MR_Float Float_3)
{
  {
    MR_bool succeeded;
    MR_String String_4;
    MR_String FloatStr_5;

{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_Float FloatVal;
	MR_String FloatString;

	FloatVal = Float_3 ;
		{
{
    // Note any changes here will require the same changes in
    // string.float_to_string.
    MR_float_to_string(FloatVal, FloatString, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 FloatStr_5  = FloatString;
}
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str = FloatStr_5 ;
	Ch = (MR_Char) 101 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        // Fast path.
        // strchr always returns true when searching for NUL,
        // but the NUL is not part of the string itself.
        SUCCESS_INDICATOR = (Ch != '\0') && (strchr(Str, Ch) != NULL);
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (len > 0) && (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (!(succeeded))
    {
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str = FloatStr_5 ;
	Ch = (MR_Char) 69 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        // Fast path.
        // strchr always returns true when searching for NUL,
        // but the NUL is not part of the string itself.
        SUCCESS_INDICATOR = (Ch != '\0') && (strchr(Str, Ch) != NULL);
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (len > 0) && (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    }
    if (succeeded)
    {
      MR_String FloatPtStr_6;
      MR_String ExpStr_7;
      MR_String MantissaStr_8;
      MR_String FractionStr_9;
      MR_Integer ExpInt_10;
      MR_Word FloatAndExponent_36;
      MR_Integer Var_47;
      MR_Box conv0_FloatPtStr_6;
      MR_Box conv1_ExpStr_7;

      mercury__string__format__skip_to_next_word_start__ho5_4_p_in__string_0(FloatStr_5, (MR_Integer) 0, &Var_47);
      mercury__string__format__words_loop__ho4_4_p_in__string_0(FloatStr_5, Var_47, &FloatAndExponent_36);
      mercury__list__det_index0_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FloatAndExponent_36, (MR_Integer) 0, &conv0_FloatPtStr_6);
      FloatPtStr_6 = ((MR_String) (conv0_FloatPtStr_6));
      mercury__list__det_index0_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FloatAndExponent_36, (MR_Integer) 1, &conv1_ExpStr_7);
      ExpStr_7 = ((MR_String) (conv1_ExpStr_7));
      mercury__string__format__split_at_decimal_point_3_p_0(FloatPtStr_6, &MantissaStr_8, &FractionStr_9);
      ExpInt_10 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, ExpStr_7);
      succeeded = (ExpInt_10 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_String PaddedFracStr_12;
        MR_String MantissaRest_13;
        MR_String NewFraction_14;
        MR_String NewMantissa_15;
        MR_String MantAndPoint_16;

        mercury__string__pad_right_4_p_0(FractionStr_9, (MR_Char) 48, ExpInt_10, &PaddedFracStr_12);
        mercury__string__split_4_p_0(PaddedFracStr_12, ExpInt_10, &MantissaRest_13, &NewFraction_14);
        mercury__string__append_3_p_2(MantissaStr_8, MantissaRest_13, &NewMantissa_15);
        mercury__string__append_3_p_2(NewMantissa_15, (MR_String) ".", &MantAndPoint_16);
        succeeded = (strcmp(NewFraction_14, (MR_String) "") == 0);
        if (succeeded)
          mercury__string__append_3_p_2(MantAndPoint_16, (MR_String) "0", &String_4);
        else
          mercury__string__append_3_p_2(MantAndPoint_16, NewFraction_14, &String_4);
      }
      else
      {
        MR_String PaddedMantissaStr_17;
        MR_String FractionRest_18;
        MR_Integer Var_26;
        MR_Integer Var_27;
        MR_String Var_29;
        MR_Integer ExtraDigits_30;
        MR_String NewMantissa_31;
        MR_String MantAndPoint_32;

        mercury__int__abs_2_p_0(ExpInt_10, &ExtraDigits_30);
        mercury__string__pad_left_4_p_0(MantissaStr_8, (MR_Char) 48, ExtraDigits_30, &PaddedMantissaStr_17);
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = PaddedMantissaStr_17 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_27  = Length;
}
        Var_26 = (MR_Integer) ((MR_Unsigned) Var_27 - (MR_Unsigned) ExtraDigits_30);
        mercury__string__split_4_p_0(PaddedMantissaStr_17, Var_26, &NewMantissa_31, &FractionRest_18);
        succeeded = (strcmp(NewMantissa_31, (MR_String) "") == 0);
        if (succeeded)
          MantAndPoint_32 = (MR_String) "0.";
        else
          mercury__string__append_3_p_2(NewMantissa_31, (MR_String) ".", &MantAndPoint_32);
        Var_29 = mercury__string__f_43_43_2_f_0(FractionRest_18, FractionStr_9);
        String_4 = mercury__string__f_43_43_2_f_0(MantAndPoint_32, Var_29);
      }
    }
    else
      String_4 = FloatStr_5;
    return String_4;
  }
}

static void MR_CALL 
mercury__string__format__words_loop__ho4_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * HeadVar__4_8)
{
  {
    MR_bool succeeded;
    MR_Integer Var_9;

    mercury__string__format__skip_to_word_end__ho9_4_p_in__string_0(HeadVar__2_6, HeadVar__3_7, &Var_9);
    succeeded = (Var_9 == HeadVar__3_7);
    if (succeeded)
      *HeadVar__4_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_10;
      MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__format__words_loop__ho4_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = HeadVar__2_6 ;
	Start = HeadVar__3_7 ;
	End = Var_9 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 Var_10  = SubString;
}
      mercury__string__format__skip_to_next_word_start__ho5_4_p_in__string_0(HeadVar__2_6, Var_9, &Var_11);
      succeeded = (Var_9 == Var_11);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      else
      {
        MR_Word * AddrSCCcallarg13_14;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        AddrSCCcallarg13_14 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_8, (MR_Integer) 1)));
        mercury__string__format__LCMCpr_words_loop__ho4_1_4_p_in__string_0(HeadVar__2_6, Var_11, AddrSCCcallarg13_14);
      }
    }
  }
}

static void MR_CALL 
mercury__string__format__LCMCpr_words_loop__ho4_1_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * AddrOfHeadVar__4_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__string__format__skip_to_word_end__ho9_4_p_in__string_0(HeadVar__2_6, HeadVar__3_7, &Var_9);
    succeeded = (Var_9 == HeadVar__3_7);
    if (succeeded)
      *AddrOfHeadVar__4_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_10;
      MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__format__LCMCpr_words_loop__ho4_1_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = HeadVar__2_6 ;
	Start = HeadVar__3_7 ;
	End = Var_9 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 Var_10  = SubString;
}
      mercury__string__format__skip_to_next_word_start__ho5_4_p_in__string_0(HeadVar__2_6, Var_9, &Var_11);
      succeeded = (Var_9 == Var_11);
      if (succeeded)
      {
        MR_Word HeadVar__4_16;

        {
          HeadVar__4_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__4_16, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(1), HeadVar__4_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *AddrOfHeadVar__4_15 = HeadVar__4_16;
      }
      else
      {
        MR_Word * AddrSCCcallarg13_14;
        MR_Word HeadVar__4_17;
        MR_Integer next_value_of_HeadVar__3_7;
        MR_Word * next_value_of_AddrOfHeadVar__4_15;

        {
          HeadVar__4_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__4_17, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(1), HeadVar__4_17, 1) = NULL;
        }
        AddrSCCcallarg13_14 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_17, (MR_Integer) 1)));
        *AddrOfHeadVar__4_15 = HeadVar__4_17;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_7 = Var_11;
        next_value_of_AddrOfHeadVar__4_15 = AddrSCCcallarg13_14;
        HeadVar__3_7 = next_value_of_HeadVar__3_7;
        AddrOfHeadVar__4_15 = next_value_of_AddrOfHeadVar__4_15;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__string__format__skip_to_word_end__ho9_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_9;
    MR_Char Var_10;
    MR_Word Var_11;
    MR_Integer Var_17;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__format__skip_to_word_end__ho9_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_6 ;
	Index = HeadVar__3_7 ;
		{

    Ch = Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_9  = NextIndex;
	 Var_10  = Ch;
	 Var_17  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (Var_17 == (MR_Integer) -1);
      if (succeeded)
        Var_11 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t Var_18;

{
#define MR_PROC_LABEL mercury__string__format__skip_to_word_end__ho9_4_p_in__string_0

	MR_Integer I;
	uint8_t U8;

	I = Var_17 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	 Var_18  = U8;
}
        {
          Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (MR_Word) (Var_18));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        switch (Var_10) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Char) 69:
            succeeded = MR_TRUE;
            break;
          case (MR_Char) 101:
            succeeded = MR_TRUE;
            break;
        }
      if (succeeded)
        *HeadVar__4_8 = HeadVar__3_7;
      else
      {
        MR_Integer next_value_of_HeadVar__3_7 = Var_9;

        // direct tailcall eliminated
        ;
        HeadVar__3_7 = next_value_of_HeadVar__3_7;
        continue;
      }
    }
    else
      *HeadVar__4_8 = HeadVar__3_7;
    break;
  }
}

static void MR_CALL 
mercury__string__format__skip_to_next_word_start__ho5_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_10;
    MR_Char Var_11;
    MR_Word Var_12;
    MR_Integer Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__format__skip_to_next_word_start__ho5_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_6 ;
	Index = HeadVar__3_7 ;
		{

    Ch = Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_10  = NextIndex;
	 Var_11  = Ch;
	 Var_19  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (Var_19 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t Var_20;

{
#define MR_PROC_LABEL mercury__string__format__skip_to_next_word_start__ho5_4_p_in__string_0

	MR_Integer I;
	uint8_t U8;

	I = Var_19 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	 Var_20  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (MR_Word) (Var_20));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_12);
      if (succeeded)
        switch (Var_11) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Char) 69:
            succeeded = MR_TRUE;
            break;
          case (MR_Char) 101:
            succeeded = MR_TRUE;
            break;
        }
    }
    if (succeeded)
    {
      MR_Integer next_value_of_HeadVar__3_7 = Var_10;

      // direct tailcall eliminated
      ;
      HeadVar__3_7 = next_value_of_HeadVar__3_7;
      continue;
    }
    else
      *HeadVar__4_8 = HeadVar__3_7;
    break;
  }
}

static void MR_CALL 
mercury__string__format__split_at_decimal_point_3_p_0(
  MR_String Str_4,
  MR_String * Mantissa_5,
  MR_String * Fraction_6)
{
  {
    MR_bool succeeded;
    MR_Word MantAndFrac_7;
    MR_Integer Var_19;
    MR_Box conv0_Mantissa_5;
    MR_String Fraction0_8;
    MR_Box conv1_Fraction0_8;

    mercury__string__format__skip_to_next_word_start__ho7_4_p_in__string_0(Str_4, (MR_Integer) 0, &Var_19);
    mercury__string__format__words_loop__ho6_4_p_in__string_0(Str_4, Var_19, &MantAndFrac_7);
    mercury__list__det_index0_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MantAndFrac_7, (MR_Integer) 0, &conv0_Mantissa_5);
    *Mantissa_5 = ((MR_String) (conv0_Mantissa_5));
    succeeded = mercury__list__index0_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MantAndFrac_7, (MR_Integer) 1, &conv1_Fraction0_8);
    if (succeeded)
    {
      Fraction0_8 = ((MR_String) (conv1_Fraction0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *Fraction_6 = Fraction0_8;
    else
      *Fraction_6 = (MR_String) "";
  }
}

static void MR_CALL 
mercury__string__format__words_loop__ho6_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * HeadVar__4_8)
{
  {
    MR_bool succeeded;
    MR_Integer Var_9;

    mercury__string__format__skip_to_word_end__ho8_4_p_in__string_0(HeadVar__2_6, HeadVar__3_7, &Var_9);
    succeeded = (Var_9 == HeadVar__3_7);
    if (succeeded)
      *HeadVar__4_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_10;
      MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__format__words_loop__ho6_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = HeadVar__2_6 ;
	Start = HeadVar__3_7 ;
	End = Var_9 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 Var_10  = SubString;
}
      mercury__string__format__skip_to_next_word_start__ho7_4_p_in__string_0(HeadVar__2_6, Var_9, &Var_11);
      succeeded = (Var_9 == Var_11);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      else
      {
        MR_Word * AddrSCCcallarg13_14;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        AddrSCCcallarg13_14 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_8, (MR_Integer) 1)));
        mercury__string__format__LCMCpr_words_loop__ho6_1_4_p_in__string_0(HeadVar__2_6, Var_11, AddrSCCcallarg13_14);
      }
    }
  }
}

static void MR_CALL 
mercury__string__format__LCMCpr_words_loop__ho6_1_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * AddrOfHeadVar__4_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__string__format__skip_to_word_end__ho8_4_p_in__string_0(HeadVar__2_6, HeadVar__3_7, &Var_9);
    succeeded = (Var_9 == HeadVar__3_7);
    if (succeeded)
      *AddrOfHeadVar__4_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_10;
      MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__format__LCMCpr_words_loop__ho6_1_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = HeadVar__2_6 ;
	Start = HeadVar__3_7 ;
	End = Var_9 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 Var_10  = SubString;
}
      mercury__string__format__skip_to_next_word_start__ho7_4_p_in__string_0(HeadVar__2_6, Var_9, &Var_11);
      succeeded = (Var_9 == Var_11);
      if (succeeded)
      {
        MR_Word HeadVar__4_16;

        {
          HeadVar__4_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__4_16, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(1), HeadVar__4_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *AddrOfHeadVar__4_15 = HeadVar__4_16;
      }
      else
      {
        MR_Word * AddrSCCcallarg13_14;
        MR_Word HeadVar__4_17;
        MR_Integer next_value_of_HeadVar__3_7;
        MR_Word * next_value_of_AddrOfHeadVar__4_15;

        {
          HeadVar__4_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__4_17, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(1), HeadVar__4_17, 1) = NULL;
        }
        AddrSCCcallarg13_14 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_17, (MR_Integer) 1)));
        *AddrOfHeadVar__4_15 = HeadVar__4_17;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_7 = Var_11;
        next_value_of_AddrOfHeadVar__4_15 = AddrSCCcallarg13_14;
        HeadVar__3_7 = next_value_of_HeadVar__3_7;
        AddrOfHeadVar__4_15 = next_value_of_AddrOfHeadVar__4_15;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__string__format__skip_to_word_end__ho8_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_9;
    MR_Char Var_10;
    MR_Word Var_11;
    MR_Integer Var_17;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__format__skip_to_word_end__ho8_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_6 ;
	Index = HeadVar__3_7 ;
		{

    Ch = Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_9  = NextIndex;
	 Var_10  = Ch;
	 Var_17  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (Var_17 == (MR_Integer) -1);
      if (succeeded)
        Var_11 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t Var_18;

{
#define MR_PROC_LABEL mercury__string__format__skip_to_word_end__ho8_4_p_in__string_0

	MR_Integer I;
	uint8_t U8;

	I = Var_17 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	 Var_18  = U8;
}
        {
          Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (MR_Word) (Var_18));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (Var_10 == (MR_Char) 46);
      if (succeeded)
        *HeadVar__4_8 = HeadVar__3_7;
      else
      {
        MR_Integer next_value_of_HeadVar__3_7 = Var_9;

        // direct tailcall eliminated
        ;
        HeadVar__3_7 = next_value_of_HeadVar__3_7;
        continue;
      }
    }
    else
      *HeadVar__4_8 = HeadVar__3_7;
    break;
  }
}

static void MR_CALL 
mercury__string__format__skip_to_next_word_start__ho7_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_10;
    MR_Char Var_11;
    MR_Word Var_12;
    MR_Integer Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__format__skip_to_next_word_start__ho7_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_6 ;
	Index = HeadVar__3_7 ;
		{

    Ch = Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_10  = NextIndex;
	 Var_11  = Ch;
	 Var_19  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (Var_19 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t Var_20;

{
#define MR_PROC_LABEL mercury__string__format__skip_to_next_word_start__ho7_4_p_in__string_0

	MR_Integer I;
	uint8_t U8;

	I = Var_19 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	 Var_20  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (MR_Word) (Var_20));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_12);
      if (succeeded)
        succeeded = (Var_11 == (MR_Char) 46);
    }
    if (succeeded)
    {
      MR_Integer next_value_of_HeadVar__3_7 = Var_10;

      // direct tailcall eliminated
      ;
      HeadVar__3_7 = next_value_of_HeadVar__3_7;
      continue;
    }
    else
      *HeadVar__4_8 = HeadVar__3_7;
    break;
  }
}

void MR_CALL 
mercury__string__format__format_uint64_component_6_p_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Base_10,
  uint64_t UInt64_11,
  MR_String * String_12)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_uint64_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String Spec_13;
      MR_String FormatStr_14;

      switch (Base_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_uint64_component_6_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRIu64);


		;}
#undef MR_PROC_LABEL
	 Spec_13  = Spec;
}
          }
          break;
        case (MR_Integer) 2:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_uint64_component_6_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRIx64);


		;}
#undef MR_PROC_LABEL
	 Spec_13  = Spec;
}
          }
          break;
        case (MR_Integer) 4:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_uint64_component_6_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRIx64);


		;}
#undef MR_PROC_LABEL
	 Spec_13  = Spec;
}
          }
          break;
        case (MR_Integer) 3:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_uint64_component_6_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRIX64);


		;}
#undef MR_PROC_LABEL
	 Spec_13  = Spec;
}
          }
          break;
        case (MR_Integer) 0:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_uint64_component_6_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRIo64);


		;}
#undef MR_PROC_LABEL
	 Spec_13  = Spec;
}
          }
          break;
      }
      FormatStr_14 = mercury__string__format__make_format_sprintf_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, (MR_String) "", Spec_13);
{
#define MR_PROC_LABEL mercury__string__format__format_uint64_component_6_p_0

	MR_String FormatStr;
	uint64_t Val;
	MR_String Str;

	FormatStr = FormatStr_14 ;
	Val = UInt64_11 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_12  = Str;
}
    }
    else
      *String_12 = mercury__string__format__format_uint64_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, Base_10, UInt64_11);
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int64_component_6_p_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Base_10,
  int64_t Int64_11,
  MR_String * String_12)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int64_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String Spec_13;
      MR_String FormatStr_14;

      switch (Base_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int64_component_6_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRIu64);


		;}
#undef MR_PROC_LABEL
	 Spec_13  = Spec;
}
          }
          break;
        case (MR_Integer) 2:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int64_component_6_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRIx64);


		;}
#undef MR_PROC_LABEL
	 Spec_13  = Spec;
}
          }
          break;
        case (MR_Integer) 4:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int64_component_6_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRIx64);


		;}
#undef MR_PROC_LABEL
	 Spec_13  = Spec;
}
          }
          break;
        case (MR_Integer) 3:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int64_component_6_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRIX64);


		;}
#undef MR_PROC_LABEL
	 Spec_13  = Spec;
}
          }
          break;
        case (MR_Integer) 0:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int64_component_6_p_0

	MR_String Spec;

		{

    MR_make_aligned_string(Spec, PRIo64);


		;}
#undef MR_PROC_LABEL
	 Spec_13  = Spec;
}
          }
          break;
      }
      FormatStr_14 = mercury__string__format__make_format_sprintf_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, (MR_String) "", Spec_13);
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int64_component_6_p_0

	MR_String FormatStr;
	int64_t Val;
	MR_String Str;

	FormatStr = FormatStr_14 ;
	Val = Int64_11 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_12  = Str;
}
    }
    else
    {
      uint64_t UInt64_15;

{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int64_component_6_p_0

	int64_t I64;
	uint64_t U64;

	I64 = Int64_11 ;
		{

    U64 = (uint64_t) I64;


		;}
#undef MR_PROC_LABEL
	 UInt64_15  = U64;
}
      *String_12 = mercury__string__format__format_uint64_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, Base_10, UInt64_15);
    }
  }
}

static MR_String MR_CALL 
mercury__string__format__format_uint64_5_f_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Base_10,
  uint64_t UInt64_11)
{
  {
    MR_bool succeeded = (UInt64_11 == UINT64_C(0));
    MR_String String_12;
    MR_String UInt64Str_13;
    MR_Integer UInt64StrLength_14;
    MR_String PrecStr_16;
    MR_String PrecModStr_17;
    MR_String FieldModStr_21;
    MR_Integer Prec_15;
    MR_Word Var_24;
    MR_String Var_25;
    MR_Integer Width_18;
    MR_Integer Var_27;
    MR_Word Var_28;
    MR_Word Var_46;
    MR_Integer Var_80;
    MR_Integer Var_81;

    if (succeeded)
    {
      MR_Integer Var_22;

      succeeded = (MaybePrec_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
        succeeded = (Var_22 == (MR_Integer) 0);
      }
      if (succeeded)
        UInt64Str_13 = (MR_String) "";
      else
        UInt64Str_13 = (MR_String) "0";
    }
    else
      switch (Base_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_uint64_5_f_0

	uint64_t U64;
	MR_String S;

	U64 = UInt64_11 ;
		{

    char buffer[21]; // 20 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu64, U64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 UInt64Str_13  = S;
}
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 4:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_uint64_5_f_0

	uint64_t U64;
	MR_String S;

	U64 = UInt64_11 ;
		{

    char buffer[17]; // 16 for digits, 1 for nul.
    sprintf(buffer, "%" PRIx64, U64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 UInt64Str_13  = S;
}
          }
          break;
        case (MR_Integer) 3:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_uint64_5_f_0

	uint64_t U64;
	MR_String S;

	U64 = UInt64_11 ;
		{

    char buffer[17]; // 16 for digits, 1 for nul.
    sprintf(buffer, "%" PRIX64, U64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 UInt64Str_13  = S;
}
          }
          break;
        case (MR_Integer) 0:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_uint64_5_f_0

	uint64_t U64;
	MR_String Str;

	U64 = UInt64_11 ;
		{

    char buffer[23]; // 22 for digits, 1 for nul.
    sprintf(buffer, "%" PRIo64, U64);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 UInt64Str_13  = Str;
}
          }
          break;
      }
    mercury__string__count_codepoints_loop_4_p_0(UInt64Str_13, (MR_Integer) 0, (MR_Integer) 0, &UInt64StrLength_14);
    succeeded = (MaybePrec_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Prec_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
      succeeded = (Prec_15 > UInt64StrLength_14);
    }
    if (succeeded)
      mercury__string__pad_left_4_p_0(UInt64Str_13, (MR_Char) 48, Prec_15, &PrecStr_16);
    else
      PrecStr_16 = UInt64Str_13;
    succeeded = (Base_10 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      succeeded = (Var_24 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_25 = (MR_String) "0";
        succeeded = mercury__string__prefix_2_p_0(PrecStr_16, Var_25);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      mercury__string__append_3_p_2((MR_String) "0", PrecStr_16, &PrecModStr_17);
    else
      PrecModStr_17 = PrecStr_16;
    succeeded = (MaybeWidth_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Width_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeWidth_8, (MR_Integer) 0))));
      Var_80 = (MR_Integer) 0;
      Var_81 = (MR_Integer) 0;
      mercury__string__count_codepoints_loop_4_p_0(PrecModStr_17, Var_80, Var_81, &Var_27);
      succeeded = (Width_18 > Var_27);
      if (succeeded)
      {
        Var_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        Var_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        succeeded = (Var_28 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Var_46 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_String Prefix_19;
      MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);

      succeeded = (Var_30 == (MR_Integer) 1);
      if (succeeded)
        switch (Base_10) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              succeeded = (UInt64_11 != UINT64_C(0));
              if (succeeded)
              {
                Prefix_19 = (MR_String) "0x";
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              Prefix_19 = (MR_String) "0x";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              succeeded = (UInt64_11 != UINT64_C(0));
              if (succeeded)
              {
                Prefix_19 = (MR_String) "0X";
                succeeded = MR_TRUE;
              }
            }
            break;
        }
      if (succeeded)
      {
        MR_String FieldStr_20;
        MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Width_18 - (MR_Unsigned) 2);

        mercury__string__pad_left_4_p_0(PrecModStr_17, (MR_Char) 48, Var_32, &FieldStr_20);
        mercury__string__append_3_p_2(Prefix_19, FieldStr_20, &FieldModStr_21);
      }
      else
        mercury__string__pad_left_4_p_0(PrecModStr_17, (MR_Char) 48, Width_18, &FieldModStr_21);
    }
    else
    {
      MR_String Prefix_37;
      MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);

      succeeded = (Var_35 == (MR_Integer) 1);
      if (succeeded)
        switch (Base_10) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              succeeded = (UInt64_11 != UINT64_C(0));
              if (succeeded)
              {
                Prefix_37 = (MR_String) "0x";
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              Prefix_37 = (MR_String) "0x";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              succeeded = (UInt64_11 != UINT64_C(0));
              if (succeeded)
              {
                Prefix_37 = (MR_String) "0X";
                succeeded = MR_TRUE;
              }
            }
            break;
        }
      if (succeeded)
        FieldModStr_21 = mercury__string__f_43_43_2_f_0(Prefix_37, PrecModStr_17);
      else
        FieldModStr_21 = PrecModStr_17;
    }
    String_12 = mercury__string__format__justify_string_3_f_0(Flags_7, MaybeWidth_8, FieldModStr_21);
    return String_12;
  }
}

void MR_CALL 
mercury__string__format__format_uint_component_6_p_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Base_10,
  MR_Unsigned UInt_11,
  MR_String * String_12)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_uint_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String SpecChar_13 = ((&mercury__string__format_vector_common_5[5 + Base_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
      MR_String FormatStr_14;
      MR_String Var_15;

{
#define MR_PROC_LABEL mercury__string__format__format_uint_component_6_p_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 Var_15  = LengthModifier;
}
      FormatStr_14 = mercury__string__format__make_format_sprintf_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, Var_15, SpecChar_13);
{
#define MR_PROC_LABEL mercury__string__format__format_uint_component_6_p_0

	MR_String FormatStr;
	MR_Unsigned Val;
	MR_String Str;

	FormatStr = FormatStr_14 ;
	Val = UInt_11 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_12  = Str;
}
    }
    else
      *String_12 = mercury__string__format__format_uint_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, Base_10, UInt_11);
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_6_p_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Base_10,
  MR_Integer Int_11,
  MR_String * String_12)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String SpecChar_13 = ((&mercury__string__format_vector_common_5[0 + Base_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
      MR_String FormatStr_14;
      MR_String Var_16;

{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 Var_16  = LengthModifier;
}
      FormatStr_14 = mercury__string__format__make_format_sprintf_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, Var_16, SpecChar_13);
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr = FormatStr_14 ;
	Val = Int_11 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_12  = Str;
}
    }
    else
    {
      MR_Unsigned UInt_15;

{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_Integer I;
	MR_Unsigned U;

	I = Int_11 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 UInt_15  = U;
}
      *String_12 = mercury__string__format__format_uint_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, Base_10, UInt_15);
    }
  }
}

static MR_String MR_CALL 
mercury__string__format__format_uint_5_f_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Base_10,
  MR_Unsigned UInt_11)
{
  {
    MR_bool succeeded = (UInt_11 == (MR_Unsigned) 0U);
    MR_String String_12;
    MR_String UIntStr_13;
    MR_Integer UIntStrLength_14;
    MR_String PrecStr_16;
    MR_String PrecModStr_17;
    MR_String FieldModStr_21;
    MR_Integer Prec_15;
    MR_Word Var_24;
    MR_String Var_25;
    MR_Integer Width_18;
    MR_Integer Var_27;
    MR_Word Var_28;
    MR_Word Var_46;
    MR_Integer Var_80;
    MR_Integer Var_81;

    if (succeeded)
    {
      MR_Integer Var_22;

      succeeded = (MaybePrec_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
        succeeded = (Var_22 == (MR_Integer) 0);
      }
      if (succeeded)
        UIntStr_13 = (MR_String) "";
      else
        UIntStr_13 = (MR_String) "0";
    }
    else
      switch (Base_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_uint_5_f_0

	MR_Unsigned U;
	MR_String Str;

	U = UInt_11 ;
		{

    char buffer[21]; // 20 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 UIntStr_13  = Str;
}
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 4:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_uint_5_f_0

	MR_Unsigned U;
	MR_String Str;

	U = UInt_11 ;
		{

    char buffer[17]; // 16 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "x", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 UIntStr_13  = Str;
}
          }
          break;
        case (MR_Integer) 3:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_uint_5_f_0

	MR_Unsigned U;
	MR_String Str;

	U = UInt_11 ;
		{

    char buffer[17]; // 16 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "X", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 UIntStr_13  = Str;
}
          }
          break;
        case (MR_Integer) 0:
          {
{
#define MR_PROC_LABEL mercury__string__format__format_uint_5_f_0

	MR_Unsigned U;
	MR_String Str;

	U = UInt_11 ;
		{

    char buffer[23]; // 22 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "o", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 UIntStr_13  = Str;
}
          }
          break;
      }
    mercury__string__count_codepoints_loop_4_p_0(UIntStr_13, (MR_Integer) 0, (MR_Integer) 0, &UIntStrLength_14);
    succeeded = (MaybePrec_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Prec_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
      succeeded = (Prec_15 > UIntStrLength_14);
    }
    if (succeeded)
      mercury__string__pad_left_4_p_0(UIntStr_13, (MR_Char) 48, Prec_15, &PrecStr_16);
    else
      PrecStr_16 = UIntStr_13;
    succeeded = (Base_10 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      succeeded = (Var_24 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_25 = (MR_String) "0";
        succeeded = mercury__string__prefix_2_p_0(PrecStr_16, Var_25);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      mercury__string__append_3_p_2((MR_String) "0", PrecStr_16, &PrecModStr_17);
    else
      PrecModStr_17 = PrecStr_16;
    succeeded = (MaybeWidth_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Width_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeWidth_8, (MR_Integer) 0))));
      Var_80 = (MR_Integer) 0;
      Var_81 = (MR_Integer) 0;
      mercury__string__count_codepoints_loop_4_p_0(PrecModStr_17, Var_80, Var_81, &Var_27);
      succeeded = (Width_18 > Var_27);
      if (succeeded)
      {
        Var_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        Var_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        succeeded = (Var_28 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Var_46 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_String Prefix_19;
      MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);

      succeeded = (Var_30 == (MR_Integer) 1);
      if (succeeded)
        switch (Base_10) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              succeeded = (UInt_11 != (MR_Unsigned) 0U);
              if (succeeded)
              {
                Prefix_19 = (MR_String) "0x";
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              Prefix_19 = (MR_String) "0x";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              succeeded = (UInt_11 != (MR_Unsigned) 0U);
              if (succeeded)
              {
                Prefix_19 = (MR_String) "0X";
                succeeded = MR_TRUE;
              }
            }
            break;
        }
      if (succeeded)
      {
        MR_String FieldStr_20;
        MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Width_18 - (MR_Unsigned) 2);

        mercury__string__pad_left_4_p_0(PrecModStr_17, (MR_Char) 48, Var_32, &FieldStr_20);
        mercury__string__append_3_p_2(Prefix_19, FieldStr_20, &FieldModStr_21);
      }
      else
        mercury__string__pad_left_4_p_0(PrecModStr_17, (MR_Char) 48, Width_18, &FieldModStr_21);
    }
    else
    {
      MR_String Prefix_37;
      MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);

      succeeded = (Var_35 == (MR_Integer) 1);
      if (succeeded)
        switch (Base_10) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              succeeded = (UInt_11 != (MR_Unsigned) 0U);
              if (succeeded)
              {
                Prefix_37 = (MR_String) "0x";
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              Prefix_37 = (MR_String) "0x";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              succeeded = (UInt_11 != (MR_Unsigned) 0U);
              if (succeeded)
              {
                Prefix_37 = (MR_String) "0X";
                succeeded = MR_TRUE;
              }
            }
            break;
        }
      if (succeeded)
        FieldModStr_21 = mercury__string__f_43_43_2_f_0(Prefix_37, PrecModStr_17);
      else
        FieldModStr_21 = PrecModStr_17;
    }
    String_12 = mercury__string__format__justify_string_3_f_0(Flags_7, MaybeWidth_8, FieldModStr_21);
    return String_12;
  }
}

void MR_CALL 
mercury__string__format__format_string_component_5_p_0(
  MR_Word Flags_6,
  MR_Word MaybeWidth_7,
  MR_Word MaybePrec_8,
  MR_String Str_9,
  MR_String * String_10)
{
  {
    MR_bool succeeded;

    {
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_16;

{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        Var_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
        Var_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
        Var_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        Var_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (Var_12 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_13 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_14 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Var_15 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (Var_16 == (MR_Integer) 0);
            }
          }
        }
        if (succeeded)
        {
          succeeded = (MaybeWidth_7 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (MaybePrec_8 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (!(succeeded))
    {
{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_9 ;
		{

    const char *s;

    SUCCESS_INDICATOR = ML_USE_SPRINTF;
    for (s = Str; *s != '\0'; s++) {
        // sprintf %s specifier is inadequate for multi-byte UTF-8 characters,
        // if there is a field width or precision specified.
        if (!MR_utf8_is_single_byte(*s)) {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    }
    if (succeeded)
    {
      MR_String FormatStr_11;

      FormatStr_11 = mercury__string__format__make_format_sprintf_5_f_0(Flags_6, MaybeWidth_7, MaybePrec_8, (MR_String) "", (MR_String) "s");
{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_String FormatStr;
	MR_String Val;
	MR_String Str;

	FormatStr = FormatStr_11 ;
	Val = Str_9 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_10  = Str;
}
    }
    else
    {
      MR_String PrecStr_30;

      if ((MaybePrec_8 == (MR_Word) ((MR_Unsigned) 0U)))
        PrecStr_30 = Str_9;
      else
      {
        MR_Integer NumChars_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_8, (MR_Integer) 0))));
        MR_String Var_37;

        mercury__string__split_by_codepoint_4_p_0(Str_9, NumChars_29, &PrecStr_30, &Var_37);
      }
      *String_10 = mercury__string__format__justify_string_3_f_0(Flags_6, MaybeWidth_7, PrecStr_30);
    }
  }
}

void MR_CALL 
mercury__string__format__format_char_component_4_p_0(
  MR_Word Flags_5,
  MR_Word MaybeWidth_6,
  MR_Char Char_7,
  MR_String * String_8)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_char_component_4_p_0

	MR_Char Char;
	MR_bool SUCCESS_INDICATOR;

	Char = Char_7 ;
		{

    // sprintf %c specifier is inadequate for multi-byte UTF-8 characters.
    SUCCESS_INDICATOR = ML_USE_SPRINTF && MR_is_ascii(Char);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String FormatStr_9;

      FormatStr_9 = mercury__string__format__make_format_sprintf_5_f_0(Flags_5, MaybeWidth_6, (MR_Word) ((MR_Unsigned) 0U), (MR_String) "", (MR_String) "c");
{
#define MR_PROC_LABEL mercury__string__format__format_char_component_4_p_0

	MR_String FormatStr;
	MR_Char Val;
	MR_String Str;

	FormatStr = FormatStr_9 ;
	Val = Char_7 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_8  = Str;
}
    }
    else
    {
      MR_String CharStr_22;

      mercury__string__char_to_string_2_p_0(Char_7, &CharStr_22);
      *String_8 = mercury__string__format__justify_string_3_f_0(Flags_5, MaybeWidth_6, CharStr_22);
    }
  }
}

MR_String MR_CALL 
mercury__string__format__justify_string_3_f_0(
  MR_Word Flags_5,
  MR_Word MaybeWidth_6,
  MR_String Str_7)
{
  {
    MR_bool succeeded = (MaybeWidth_6 != (MR_Word) ((MR_Unsigned) 0U));
    MR_String JustifiedStr_8;
    MR_Integer Width_9;
    MR_Integer Var_10;
    MR_Integer Var_22;
    MR_Integer Var_23;

    if (succeeded)
    {
      Width_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeWidth_6, (MR_Integer) 0))));
      Var_22 = (MR_Integer) 0;
      Var_23 = (MR_Integer) 0;
      mercury__string__count_codepoints_loop_4_p_0(Str_7, Var_22, Var_23, &Var_10);
      succeeded = (Width_9 > Var_10);
    }
    if (succeeded)
    {
      MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

      succeeded = (Var_11 == (MR_Integer) 1);
      if (succeeded)
        mercury__string__pad_right_4_p_0(Str_7, (MR_Char) 32, Width_9, &JustifiedStr_8);
      else
        mercury__string__pad_left_4_p_0(Str_7, (MR_Char) 32, Width_9, &JustifiedStr_8);
    }
    else
      JustifiedStr_8 = Str_7;
    return JustifiedStr_8;
  }
}

MR_String MR_CALL 
mercury__string__format__make_format_sprintf_5_f_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_String LengthMod_10,
  MR_String Spec_11)
{
  {
    MR_String String_12;
    MR_Word FlagHash_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word FlagSpace_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word FlagZero_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word FlagMinus_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word FlagPlus_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String FlagHashStr_18;
    MR_String FlagSpaceStr_19;
    MR_String FlagZeroStr_20;
    MR_String FlagMinusStr_21;
    MR_String FlagPlusStr_22;
    MR_String WidthStr_24;
    MR_String PrecPrefixStr_26;
    MR_String PrecStr_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;

    switch (FlagHash_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FlagHashStr_18 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        FlagHashStr_18 = (MR_String) "#";
        break;
    }
    switch (FlagSpace_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FlagSpaceStr_19 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        FlagSpaceStr_19 = (MR_String) " ";
        break;
    }
    switch (FlagZero_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FlagZeroStr_20 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        FlagZeroStr_20 = (MR_String) "0";
        break;
    }
    switch (FlagMinus_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FlagMinusStr_21 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        FlagMinusStr_21 = (MR_String) "-";
        break;
    }
    switch (FlagPlus_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FlagPlusStr_22 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        FlagPlusStr_22 = (MR_String) "+";
        break;
    }
    if ((MaybeWidth_8 == (MR_Word) ((MR_Unsigned) 0U)))
      WidthStr_24 = (MR_String) "";
    else
    {
      MR_Integer Width_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeWidth_8, (MR_Integer) 0))));

{
#define MR_PROC_LABEL mercury__string__format__make_format_sprintf_5_f_0

	MR_Integer I;
	MR_String S;

	I = Width_23 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 WidthStr_24  = S;
}
    }
    if ((MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      PrecPrefixStr_26 = (MR_String) "";
      PrecStr_27 = (MR_String) "";
    }
    else
    {
      MR_Integer Prec_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));

      PrecPrefixStr_26 = (MR_String) ".";
{
#define MR_PROC_LABEL mercury__string__format__make_format_sprintf_5_f_0

	MR_Integer I;
	MR_String S;

	I = Prec_25 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 PrecStr_27  = S;
}
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Spec_11));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (LengthMod_10));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (PrecStr_27));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (PrecPrefixStr_26));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (WidthStr_24));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (FlagPlusStr_22));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (FlagMinusStr_21));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (FlagZeroStr_20));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (FlagSpaceStr_19));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (FlagHashStr_18));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) ((MR_String) "%"));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    String_12 = mercury__string__append_list_1_f_0(Var_28);
    return String_12;
  }
}

void mercury__string__format__init(void)
{
}

void mercury__string__format__init_type_tables(void)
{
}

void mercury__string__format__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__string__format__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module string.format.
