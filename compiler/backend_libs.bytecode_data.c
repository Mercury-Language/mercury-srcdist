/*
** Automatically generated from `bytecode_data.m'
** by the Mercury compiler,
** version rotd-2022-06-16
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


// :- module backend_libs.bytecode_data.
// :- implementation.

/*
INIT mercury__backend_libs__bytecode_data__init
ENDINIT
*/

#include "backend_libs.bytecode_data.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static void MR_CALL 
backend_libs__bytecode_data__float_to_float64_bytes_9_p_0(
  MR_Float FloatVal_1,
  MR_Integer * B0_2,
  MR_Integer * B1_3,
  MR_Integer * B2_4,
  MR_Integer * B3_5,
  MR_Integer * B4_6,
  MR_Integer * B5_7,
  MR_Integer * B6_8,
  MR_Integer * B7_9);

static void MR_CALL 
backend_libs__bytecode_data__output_int_4_p_0(
  MR_Integer Bits_5,
  MR_Integer IntVal_6);

static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho3_4_p_0(
  MR_Integer NumBytes_6);

static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho2_5_p_0(
  MR_Integer ByteNum_7,
  MR_Integer IntVal_8);

static void MR_CALL 
backend_libs__bytecode_data__output_string_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__bytecode_data__output_string_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_1[1][2];

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_2[1][5];

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_3[2][3];

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_4[1][6];




static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_3[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__bytecode_data_scalar_common_2[0])),
    ((MR_Box) (backend_libs__bytecode_data__output_string_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&backend_libs__bytecode_data_scalar_common_4[0])),
    ((MR_Box) (backend_libs__bytecode_data__output_string_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "backend_libs.bytecode_data.mh"



static void MR_CALL 
backend_libs__bytecode_data__float_to_float64_bytes_9_p_0(
  MR_Float FloatVal_1,
  MR_Integer * B0_2,
  MR_Integer * B1_3,
  MR_Integer * B2_4,
  MR_Integer * B3_5,
  MR_Integer * B4_6,
  MR_Integer * B5_7,
  MR_Integer * B6_8,
  MR_Integer * B7_9)
{
{
#define MR_PROC_LABEL backend_libs__bytecode_data__float_to_float64_bytes_9_p_0

	MR_Float FloatVal;
	MR_Integer B0;
	MR_Integer B1;
	MR_Integer B2;
	MR_Integer B3;
	MR_Integer B4;
	MR_Integer B5;
	MR_Integer B6;
	MR_Integer B7;

	FloatVal = FloatVal_1 ;
		{

    {
        MR_Float64  float64;
        unsigned char   *raw_mem_p;

        float64 = (MR_Float64) FloatVal;
        raw_mem_p = (unsigned char *) &float64;

        #if defined(MR_BIG_ENDIAN)
            B0 = raw_mem_p[0];
            B1 = raw_mem_p[1];
            B2 = raw_mem_p[2];
            B3 = raw_mem_p[3];
            B4 = raw_mem_p[4];
            B5 = raw_mem_p[5];
            B6 = raw_mem_p[6];
            B7 = raw_mem_p[7];
        #elif defined(MR_LITTLE_ENDIAN)
            B7 = raw_mem_p[0];
            B6 = raw_mem_p[1];
            B5 = raw_mem_p[2];
            B4 = raw_mem_p[3];
            B3 = raw_mem_p[4];
            B2 = raw_mem_p[5];
            B1 = raw_mem_p[6];
            B0 = raw_mem_p[7];
        #else
            #error  "Weird-endian architecture"
        #endif
    }


		;}
#undef MR_PROC_LABEL
	*B0_2  = B0;
	*B1_3  = B1;
	*B2_4  = B2;
	*B3_5  = B3;
	*B4_6  = B4;
	*B5_7  = B5;
	*B6_8  = B6;
	*B7_9  = B7;
}
}

void MR_CALL 
backend_libs__bytecode_data__output_float_3_p_0(
  MR_Float Val_4)
{
  MR_bool succeeded;
  MR_Integer B0_6;
  MR_Integer B1_7;
  MR_Integer B2_8;
  MR_Integer B3_9;
  MR_Integer B4_10;
  MR_Integer B5_11;
  MR_Integer B6_12;
  MR_Integer B7_13;

{
#define MR_PROC_LABEL backend_libs__bytecode_data__output_float_3_p_0

	MR_Float FloatVal;
	MR_Integer B0;
	MR_Integer B1;
	MR_Integer B2;
	MR_Integer B3;
	MR_Integer B4;
	MR_Integer B5;
	MR_Integer B6;
	MR_Integer B7;

	FloatVal = Val_4 ;
		{

    {
        MR_Float64  float64;
        unsigned char   *raw_mem_p;

        float64 = (MR_Float64) FloatVal;
        raw_mem_p = (unsigned char *) &float64;

        #if defined(MR_BIG_ENDIAN)
            B0 = raw_mem_p[0];
            B1 = raw_mem_p[1];
            B2 = raw_mem_p[2];
            B3 = raw_mem_p[3];
            B4 = raw_mem_p[4];
            B5 = raw_mem_p[5];
            B6 = raw_mem_p[6];
            B7 = raw_mem_p[7];
        #elif defined(MR_LITTLE_ENDIAN)
            B7 = raw_mem_p[0];
            B6 = raw_mem_p[1];
            B5 = raw_mem_p[2];
            B4 = raw_mem_p[3];
            B3 = raw_mem_p[4];
            B2 = raw_mem_p[5];
            B1 = raw_mem_p[6];
            B0 = raw_mem_p[7];
        #else
            #error  "Weird-endian architecture"
        #endif
    }


		;}
#undef MR_PROC_LABEL
	B0_6  = B0;
	B1_7  = B1;
	B2_8  = B2;
	B3_9  = B3;
	B4_10  = B4;
	B5_11  = B5;
	B6_12  = B6;
	B7_13  = B7;
}
  succeeded = (B0_6 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_3_p_0(B0_6);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/3", (MR_String) "byte does not fit in eight bits");
      return;
    }
  succeeded = (B1_7 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_3_p_0(B1_7);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/3", (MR_String) "byte does not fit in eight bits");
      return;
    }
  succeeded = (B2_8 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_3_p_0(B2_8);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/3", (MR_String) "byte does not fit in eight bits");
      return;
    }
  succeeded = (B3_9 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_3_p_0(B3_9);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/3", (MR_String) "byte does not fit in eight bits");
      return;
    }
  succeeded = (B4_10 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_3_p_0(B4_10);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/3", (MR_String) "byte does not fit in eight bits");
      return;
    }
  succeeded = (B5_11 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_3_p_0(B5_11);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/3", (MR_String) "byte does not fit in eight bits");
      return;
    }
  succeeded = (B6_12 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_3_p_0(B6_12);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/3", (MR_String) "byte does not fit in eight bits");
      return;
    }
  succeeded = (B7_13 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_3_p_0(B7_13);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/3", (MR_String) "byte does not fit in eight bits");
      return;
    }
}

void MR_CALL 
backend_libs__bytecode_data__output_short_3_p_0(
  MR_Integer Val_4)
{
  backend_libs__bytecode_data__output_int_4_p_0((MR_Integer) 16, Val_4);
}

void MR_CALL 
backend_libs__bytecode_data__output_int32_3_p_0(
  MR_Integer IntVal_4)
{
  backend_libs__bytecode_data__output_int_4_p_0((MR_Integer) 32, IntVal_4);
}

void MR_CALL 
backend_libs__bytecode_data__output_int_3_p_0(
  MR_Integer IntVal_4)
{
  MR_bool succeeded;
  MR_Integer IntBits_6;

  mercury__int__bits_per_int_1_p_0(&IntBits_6);
  succeeded = (IntBits_6 > ((MR_Integer) ((MR_Unsigned) 8 * (MR_Unsigned) 8)));
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_int\'/3", (MR_String) "size of int is larger than size of bytecode integer.");
      return;
    }
  else
    backend_libs__bytecode_data__output_int_4_p_0((MR_Integer) ((MR_Unsigned) 8 * (MR_Unsigned) 8), IntVal_4);
}

static void MR_CALL 
backend_libs__bytecode_data__output_int_4_p_0(
  MR_Integer Bits_5,
  MR_Integer IntVal_6)
{
  MR_bool succeeded;
  MR_Integer IntBits_22;
  MR_Integer ZeroPadBytes_25;
  MR_Integer BytesToDump_26;
  MR_Integer FirstByteToDump_27;
  MR_Integer Var_43;
  MR_Integer MaxVal_23;
  MR_Integer Var_28;
  MR_Integer Var_29;
  MR_Integer Var_30;

  mercury__int__bits_per_int_1_p_0(&IntBits_22);
  succeeded = (Bits_5 < IntBits_22);
  if (succeeded)
  {
    Var_28 = (MR_Integer) 2;
    Var_30 = (MR_Integer) 1;
    Var_29 = (MR_Integer) ((MR_Unsigned) Bits_5 - (MR_Unsigned) Var_30);
    mercury__int__pow_3_p_0(Var_28, Var_29, &MaxVal_23);
    succeeded = (IntVal_6 >= MaxVal_23);
    if (!(succeeded))
    {
      MR_Integer Var_31 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) MaxVal_23);

      succeeded = (IntVal_6 < Var_31);
    }
  }
  if (succeeded)
  {
    MR_String Msg_24;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (IntVal_6));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Bits_5));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
    }
    mercury__string__format_3_p_0((MR_String) "%d does not fit in %d bits", Var_33, &Msg_24);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_int\'/5", Msg_24);
      return;
    }
  }
  succeeded = (Bits_5 > IntBits_22);
  if (succeeded)
  {
    MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) Bits_5 - (MR_Unsigned) IntBits_22);

    ZeroPadBytes_25 = mercury__int__f_47_47_2_f_0(Var_39, (MR_Integer) 8);
  }
  else
    ZeroPadBytes_25 = (MR_Integer) 0;
  backend_libs__bytecode_data__output_padding_zeros__ho3_4_p_0(ZeroPadBytes_25);
  BytesToDump_26 = mercury__int__f_47_47_2_f_0(Bits_5, (MR_Integer) 8);
  Var_43 = (MR_Integer) ((MR_Unsigned) BytesToDump_26 - (MR_Unsigned) ZeroPadBytes_25);
  FirstByteToDump_27 = (MR_Integer) ((MR_Unsigned) Var_43 - (MR_Unsigned) 1);
  backend_libs__bytecode_data__output_int_bytes__ho2_5_p_0(FirstByteToDump_27, IntVal_6);
}

static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho3_4_p_0(
  MR_Integer NumBytes_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NumBytes_6 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer NumBytes1_8;
      MR_Integer next_value_of_NumBytes_6;

      mercury__io__write_byte_3_p_0((MR_Integer) 0);
      NumBytes1_8 = (MR_Integer) ((MR_Unsigned) NumBytes_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_NumBytes_6 = NumBytes1_8;
      NumBytes_6 = next_value_of_NumBytes_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho2_5_p_0(
  MR_Integer ByteNum_7,
  MR_Integer IntVal_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (ByteNum_7 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer BitShifts_10 = (MR_Integer) ((MR_Unsigned) ByteNum_7 * (MR_Unsigned) 8);
      MR_Integer Byte_11;
      MR_Integer ByteNum1_12;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Integer next_value_of_ByteNum_7;

      Var_17 = mercury__int__f_62_62_2_f_0(IntVal_8, BitShifts_10);
      Var_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 8);
      Byte_11 = mercury__int__mod_2_f_0(Var_17, Var_18);
      ByteNum1_12 = (MR_Integer) ((MR_Unsigned) ByteNum_7 - (MR_Unsigned) 1);
      mercury__io__write_byte_3_p_0(Byte_11);
      // direct tailcall eliminated
      ;
      next_value_of_ByteNum_7 = ByteNum1_12;
      ByteNum_7 = next_value_of_ByteNum_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
backend_libs__bytecode_data__output_byte_3_p_0(
  MR_Integer Val_4)
{
  MR_bool succeeded = (Val_4 < (MR_Integer) 256);

  if (succeeded)
    mercury__io__write_byte_3_p_0(Val_4);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/3", (MR_String) "byte does not fit in eight bits");
      return;
    }
}

static void MR_CALL 
backend_libs__bytecode_data__output_string_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_byte_3_p_0(((MR_Integer) (wrapper_arg_1)));
}

static void MR_CALL 
backend_libs__bytecode_data__output_string_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  mercury__char__to_int_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

void MR_CALL 
backend_libs__bytecode_data__output_string_3_p_0(
  MR_String Val_4)
{
  MR_Word List_6;
  MR_Word Chars_19;
  MR_Word List0_23;
  MR_Box conv1_STATE_VARIABLE_IO_10_10;

  mercury__string__to_char_list_2_p_0(Val_4, &Chars_19);
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__bytecode_data_scalar_common_3[0]), Chars_19, &List0_23);
  mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), List0_23, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__bytecode_data_scalar_common_1[0])), &List_6);
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&backend_libs__bytecode_data_scalar_common_3[1]), List_6, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_10_10);
  mercury__io__write_byte_3_p_0((MR_Integer) 0);
}

void mercury__backend_libs__bytecode_data__init(void)
{
}

void mercury__backend_libs__bytecode_data__init_type_tables(void)
{
}

void mercury__backend_libs__bytecode_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__bytecode_data__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.bytecode_data.
