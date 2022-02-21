/*
** Automatically generated from `uint.m'
** by the Mercury compiler,
** version 22.01-beta-2022-02-21
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


// :- module uint.
// :- implementation.

/*
INIT mercury__uint__init
ENDINIT
*/

#include "uint.mih"


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
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"





static /* final */ const MR_Box mercury__uint_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__uint_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__uint_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__uint_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__uint_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__uint_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
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



void MR_CALL 
mercury__uint__hash_2_p_0(
  MR_Unsigned UInt_3,
  MR_Integer * Hash_4)
{
  *Hash_4 = mercury__uint__hash_1_f_0(UInt_3);
}

MR_Integer MR_CALL 
mercury__uint__hash_1_f_0(
  MR_Unsigned STATE_VARIABLE_Key_0_6)
{
  {
    MR_bool succeeded;
    MR_Integer Hash_4;
    MR_Unsigned STATE_VARIABLE_Key_20_20;
    MR_Integer Var_7;

{
#define MR_PROC_LABEL mercury__uint__hash_1_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	 Var_7  = Bits;
}
    succeeded = (Var_7 == (MR_Integer) 32);
    if (succeeded)
    {
      MR_Unsigned STATE_VARIABLE_Key_8_8;
      MR_Unsigned Var_9 = (STATE_VARIABLE_Key_0_6 ^ (MR_Unsigned) 61U);
      MR_Unsigned Var_11;
      MR_Unsigned STATE_VARIABLE_Key_13_13;
      MR_Unsigned Var_14;
      MR_Unsigned STATE_VARIABLE_Key_16_16;
      MR_Unsigned Var_17;
      MR_Unsigned STATE_VARIABLE_Key_19_19;
      MR_Unsigned Var_21;

      Var_11 = mercury__uint__f_62_62_2_f_0(STATE_VARIABLE_Key_0_6, (MR_Integer) 16);
      STATE_VARIABLE_Key_8_8 = (Var_9 ^ Var_11);
      Var_14 = mercury__uint__f_60_60_2_f_0(STATE_VARIABLE_Key_8_8, (MR_Integer) 3);
      STATE_VARIABLE_Key_13_13 = (STATE_VARIABLE_Key_8_8 + Var_14);
      Var_17 = mercury__uint__f_62_62_2_f_0(STATE_VARIABLE_Key_13_13, (MR_Integer) 4);
      STATE_VARIABLE_Key_16_16 = (STATE_VARIABLE_Key_13_13 ^ Var_17);
      STATE_VARIABLE_Key_19_19 = (STATE_VARIABLE_Key_16_16 * (MR_Unsigned) 668265261U);
      Var_21 = mercury__uint__f_62_62_2_f_0(STATE_VARIABLE_Key_19_19, (MR_Integer) 15);
      STATE_VARIABLE_Key_20_20 = (STATE_VARIABLE_Key_19_19 ^ Var_21);
    }
    else
    {
      MR_Unsigned STATE_VARIABLE_Key_23_23;
      MR_Unsigned Var_24 = ~(STATE_VARIABLE_Key_0_6);
      MR_Unsigned Var_25;
      MR_Unsigned STATE_VARIABLE_Key_27_27;
      MR_Unsigned Var_28;
      MR_Unsigned STATE_VARIABLE_Key_30_30;
      MR_Unsigned Var_31;
      MR_Unsigned Var_32;
      MR_Unsigned Var_34;
      MR_Unsigned STATE_VARIABLE_Key_36_36;
      MR_Unsigned Var_37;
      MR_Unsigned STATE_VARIABLE_Key_39_39;
      MR_Unsigned Var_40;
      MR_Unsigned Var_41;
      MR_Unsigned Var_43;
      MR_Unsigned STATE_VARIABLE_Key_45_45;
      MR_Unsigned Var_46;
      MR_Unsigned Var_49;

      Var_25 = mercury__uint__f_60_60_2_f_0(STATE_VARIABLE_Key_0_6, (MR_Integer) 21);
      STATE_VARIABLE_Key_23_23 = (Var_24 + Var_25);
      Var_28 = mercury__uint__f_62_62_2_f_0(STATE_VARIABLE_Key_23_23, (MR_Integer) 24);
      STATE_VARIABLE_Key_27_27 = (STATE_VARIABLE_Key_23_23 ^ Var_28);
      Var_32 = mercury__uint__f_60_60_2_f_0(STATE_VARIABLE_Key_27_27, (MR_Integer) 3);
      Var_31 = (STATE_VARIABLE_Key_27_27 + Var_32);
      Var_34 = mercury__uint__f_60_60_2_f_0(STATE_VARIABLE_Key_27_27, (MR_Integer) 8);
      STATE_VARIABLE_Key_30_30 = (Var_31 + Var_34);
      Var_37 = mercury__uint__f_62_62_2_f_0(STATE_VARIABLE_Key_30_30, (MR_Integer) 14);
      STATE_VARIABLE_Key_36_36 = (STATE_VARIABLE_Key_30_30 ^ Var_37);
      Var_41 = mercury__uint__f_60_60_2_f_0(STATE_VARIABLE_Key_36_36, (MR_Integer) 2);
      Var_40 = (STATE_VARIABLE_Key_36_36 + Var_41);
      Var_43 = mercury__uint__f_60_60_2_f_0(STATE_VARIABLE_Key_36_36, (MR_Integer) 4);
      STATE_VARIABLE_Key_39_39 = (Var_40 + Var_43);
      Var_46 = mercury__uint__f_62_62_2_f_0(STATE_VARIABLE_Key_39_39, (MR_Integer) 28);
      STATE_VARIABLE_Key_45_45 = (STATE_VARIABLE_Key_39_39 ^ Var_46);
      Var_49 = mercury__uint__f_60_60_2_f_0(STATE_VARIABLE_Key_45_45, (MR_Integer) 31);
      STATE_VARIABLE_Key_20_20 = (STATE_VARIABLE_Key_45_45 + Var_49);
    }
{
#define MR_PROC_LABEL mercury__uint__hash_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = STATE_VARIABLE_Key_20_20 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	 Hash_4  = I;
}
    return Hash_4;
  }
}

MR_Word MR_CALL 
mercury__uint__uint_to_doc_1_f_0(
  MR_Unsigned X_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Var_4;

{
#define MR_PROC_LABEL mercury__uint__uint_to_doc_1_f_0

	MR_Unsigned U;
	MR_String Str;

	U = X_3 ;
		{

    char buffer[21]; // 20 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_4  = Str;
}
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__uint__bits_per_uint_0_f_0(void)
{
  {
    MR_Integer Bits_1;

{
#define MR_PROC_LABEL mercury__uint__bits_per_uint_0_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	 Bits_1  = Bits;
}
    return Bits_1;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__max_uint_0_f_0(void)
{
  {
    MR_Unsigned Max_1;

{
#define MR_PROC_LABEL mercury__uint__max_uint_0_f_0

	MR_Unsigned Max;

		{

    if (sizeof(MR_Unsigned) == sizeof(unsigned int)) {
        Max = UINT_MAX;
    } else if (sizeof(MR_Unsigned) == sizeof(unsigned long)) {
        Max = (MR_Unsigned) ULONG_MAX;
    #if defined(ULLONG_MAX)
    } else if (sizeof(MR_Unsigned) == sizeof(unsigned long long)) {
        Max = (MR_Unsigned) ULLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max uint size");
    }


		;}
#undef MR_PROC_LABEL
	 Max_1  = Max;
}
    return Max_1;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_92_1_f_0(
  MR_Unsigned HeadVar__1_1)
{
  {
    MR_Unsigned HeadVar__2_2 = ~(HeadVar__1_1);

    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__uint__xor_2_f_2(
  MR_Unsigned * HeadVar__1_1,
  MR_Unsigned HeadVar__2_2,
  MR_Unsigned HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 ^ HeadVar__3_3);
}

void MR_CALL 
mercury__uint__xor_2_f_1(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned * HeadVar__2_2,
  MR_Unsigned HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 ^ HeadVar__3_3);
}

MR_Unsigned MR_CALL 
mercury__uint__xor_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_Unsigned HeadVar__3_3 = (HeadVar__1_1 ^ HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_92_47_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_Unsigned HeadVar__3_3 = (HeadVar__1_1 | HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_47_92_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_Unsigned HeadVar__3_3 = (HeadVar__1_1 & HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__uint__odd_1_p_0(
  MR_Unsigned X_2)
{
  {
    MR_bool succeeded;
    MR_Unsigned Var_3 = (X_2 & (MR_Unsigned) 1U);

    succeeded = (Var_3 != (MR_Unsigned) 0U);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint__even_1_p_0(
  MR_Unsigned X_2)
{
  {
    MR_bool succeeded;
    MR_Unsigned Var_3 = (X_2 & (MR_Unsigned) 1U);

    succeeded = (Var_3 == (MR_Unsigned) 0U);
    return succeeded;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__unchecked_right_shift_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Unsigned HeadVar__3_3 = (HeadVar__1_1 >> HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_62_62_2_f_0(
  MR_Unsigned X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    MR_Unsigned Result_6;
    MR_Unsigned Var_8;
    MR_Unsigned Var_9;
    MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__uint__f_62_62_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = Y_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_8  = U;
}
{
#define MR_PROC_LABEL mercury__uint__f_62_62_2_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	 Var_10  = Bits;
}
{
#define MR_PROC_LABEL mercury__uint__f_62_62_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = Var_10 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_9  = U;
}
    succeeded = (Var_8 < Var_9);
    if (succeeded)
      Result_6 = (X_4 >> Y_5);
    else
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint.(>>): second operand is out of range")))));
    return Result_6;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__unchecked_left_shift_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_Unsigned HeadVar__3_3 = (HeadVar__1_1 << HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_60_60_2_f_0(
  MR_Unsigned X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    MR_Unsigned Result_6;
    MR_Unsigned Var_8;
    MR_Unsigned Var_9;
    MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__uint__f_60_60_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = Y_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_8  = U;
}
{
#define MR_PROC_LABEL mercury__uint__f_60_60_2_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	 Var_10  = Bits;
}
{
#define MR_PROC_LABEL mercury__uint__f_60_60_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = Var_10 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_9  = U;
}
    succeeded = (Var_8 < Var_9);
    if (succeeded)
      Result_6 = (X_4 << Y_5);
    else
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint.(<<): second operand is out of range")))));
    return Result_6;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__unchecked_rem_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_Unsigned HeadVar__3_3 = (HeadVar__1_1 % HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__rem_2_f_0(
  MR_Unsigned X_4,
  MR_Unsigned Y_5)
{
  {
    MR_bool succeeded = (Y_5 == (MR_Unsigned) 0U);
    MR_Unsigned Rem_6;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint.rem: division by zero")))));
    else
      Rem_6 = (X_4 % Y_5);
    return Rem_6;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__mod_2_f_0(
  MR_Unsigned X_4,
  MR_Unsigned Y_5)
{
  {
    MR_bool succeeded = (Y_5 == (MR_Unsigned) 0U);
    MR_Unsigned HeadVar__3_3;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint.rem: division by zero")))));
    else
      HeadVar__3_3 = (X_4 % Y_5);
    return HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__unchecked_quotient_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_Unsigned HeadVar__3_3 = (HeadVar__1_1 / HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_slash_2_f_0(
  MR_Unsigned X_4,
  MR_Unsigned Y_5)
{
  {
    MR_bool succeeded = (Y_5 == (MR_Unsigned) 0U);
    MR_Unsigned HeadVar__3_3;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint.\'//\': division by zero")))));
    else
      HeadVar__3_3 = (X_4 / Y_5);
    return HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_47_47_2_f_0(
  MR_Unsigned X_4,
  MR_Unsigned Y_5)
{
  {
    MR_bool succeeded = (Y_5 == (MR_Unsigned) 0U);
    MR_Unsigned Div_6;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint.\'//\': division by zero")))));
    else
      Div_6 = (X_4 / Y_5);
    return Div_6;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__div_2_f_0(
  MR_Unsigned X_4,
  MR_Unsigned Y_5)
{
  {
    MR_bool succeeded = (Y_5 == (MR_Unsigned) 0U);
    MR_Unsigned HeadVar__3_3;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint.\'//\': division by zero")))));
    else
      HeadVar__3_3 = (X_4 / Y_5);
    return HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__times_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_Unsigned HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_times_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_Unsigned HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__minus_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_Unsigned HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__uint__f_minus_2_f_2(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned * HeadVar__2_2,
  MR_Unsigned HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 - HeadVar__3_3);
}

void MR_CALL 
mercury__uint__f_minus_2_f_1(
  MR_Unsigned * HeadVar__1_1,
  MR_Unsigned HeadVar__2_2,
  MR_Unsigned HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 + HeadVar__3_3);
}

MR_Unsigned MR_CALL 
mercury__uint__f_minus_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_Unsigned HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__plus_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_Unsigned HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__uint__f_plus_2_f_2(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned * HeadVar__2_2,
  MR_Unsigned HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__3_3 - HeadVar__1_1);
}

void MR_CALL 
mercury__uint__f_plus_2_f_1(
  MR_Unsigned * HeadVar__1_1,
  MR_Unsigned HeadVar__2_2,
  MR_Unsigned HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__3_3 - HeadVar__2_2);
}

MR_Unsigned MR_CALL 
mercury__uint__f_plus_2_f_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_Unsigned HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__min_2_f_0(
  MR_Unsigned X_4,
  MR_Unsigned Y_5)
{
  {
    MR_bool succeeded = (X_4 < Y_5);
    MR_Unsigned HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = X_4;
    else
      HeadVar__3_3 = Y_5;
    return HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__max_2_f_0(
  MR_Unsigned X_4,
  MR_Unsigned Y_5)
{
  {
    MR_bool succeeded = (X_4 > Y_5);
    MR_Unsigned HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = X_4;
    else
      HeadVar__3_3 = Y_5;
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__uint__f_greater_or_equal_2_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 >= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint__f_less_or_equal_2_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 <= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint__f_greater_than_2_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint__f_less_than_2_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__uint__cast_to_int_1_f_0(
  MR_Unsigned U_1)
{
  {
    MR_Integer I_2;

{
#define MR_PROC_LABEL mercury__uint__cast_to_int_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = U_1 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	 I_2  = I;
}
    return I_2;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__cast_from_int_1_f_0(
  MR_Integer I_1)
{
  {
    MR_Unsigned U_2;

{
#define MR_PROC_LABEL mercury__uint__cast_from_int_1_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = I_1 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 U_2  = U;
}
    return U_2;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__det_from_int_1_f_0(
  MR_Integer I_3)
{
  {
    MR_bool succeeded;
    MR_Unsigned U_4;
    MR_Unsigned UPrime_5;

{
#define MR_PROC_LABEL mercury__uint__det_from_int_1_f_0

	MR_Integer I;
	MR_Unsigned U;
	MR_bool SUCCESS_INDICATOR;

	I = I_3 ;
		{

    if (I < 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        U = (MR_Unsigned) I;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 UPrime_5  = U;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      U_4 = UPrime_5;
    else
      mercury__require__error_2_p_0((MR_String) "function \140uint.det_from_int\'/1", (MR_String) "cannot convert int to uint");
    return U_4;
  }
}

MR_bool MR_CALL 
mercury__uint__from_int_2_p_0(
  MR_Integer I_1,
  MR_Unsigned * U_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__uint__from_int_2_p_0

	MR_Integer I;
	MR_Unsigned U;
	MR_bool SUCCESS_INDICATOR;

	I = I_1 ;
		{

    if (I < 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        U = (MR_Unsigned) I;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *U_2  = U;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void mercury__uint__init(void)
{
}

void mercury__uint__init_type_tables(void)
{
}

void mercury__uint__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__uint__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module uint.
