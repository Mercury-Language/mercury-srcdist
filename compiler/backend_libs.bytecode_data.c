/*
** Automatically generated from `bytecode_data.m'
** by the Mercury compiler,
** version rotd-2024-01-08
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
#include "term_context.mih"
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
backend_libs__bytecode_data__output_int_general__ho1_6_p_0(
  MR_Word BinaryOutputStream_7,
  MR_Integer Bits_9,
  MR_Integer IntVal_10);

static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho3_5_p_0(
  MR_Word BinaryOutputStream_6,
  MR_Integer NumBytes_8);

static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho2_6_p_0(
  MR_Word BinaryOutputStream_7,
  MR_Integer ByteNum_9,
  MR_Integer IntVal_10);

static void MR_CALL 
backend_libs__bytecode_data__output_string_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__bytecode_data__output_string_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_1[1][2];

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_2[1][5];

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_3[1][3];

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_4[1][7];

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_5[1][1];




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

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__bytecode_data_scalar_common_2[0])),
    ((MR_Box) (backend_libs__bytecode_data__output_string_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_5[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "backend_libs.bytecode_data.mh"
#include "io.stream_ops.mh"


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
backend_libs__bytecode_data__output_float_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Float Val_6)
{
  MR_bool succeeded;
  MR_Integer B0_8;
  MR_Integer B1_9;
  MR_Integer B2_10;
  MR_Integer B3_11;
  MR_Integer B4_12;
  MR_Integer B5_13;
  MR_Integer B6_14;
  MR_Integer B7_15;

{
#define MR_PROC_LABEL backend_libs__bytecode_data__output_float_4_p_0

	MR_Float FloatVal;
	MR_Integer B0;
	MR_Integer B1;
	MR_Integer B2;
	MR_Integer B3;
	MR_Integer B4;
	MR_Integer B5;
	MR_Integer B6;
	MR_Integer B7;

	FloatVal = Val_6 ;
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
	B0_8  = B0;
	B1_9  = B1;
	B2_10  = B2;
	B3_11  = B3;
	B4_12  = B4;
	B5_13  = B5;
	B6_14  = B6;
	B7_15  = B7;
}
  succeeded = (B0_8 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_4_p_0(BinaryOutputStream_5, B0_8);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/4", (MR_String) "byte does not fit in eight bits");
      return;
    }
  succeeded = (B1_9 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_4_p_0(BinaryOutputStream_5, B1_9);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/4", (MR_String) "byte does not fit in eight bits");
      return;
    }
  succeeded = (B2_10 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_4_p_0(BinaryOutputStream_5, B2_10);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/4", (MR_String) "byte does not fit in eight bits");
      return;
    }
  succeeded = (B3_11 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_4_p_0(BinaryOutputStream_5, B3_11);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/4", (MR_String) "byte does not fit in eight bits");
      return;
    }
  succeeded = (B4_12 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_4_p_0(BinaryOutputStream_5, B4_12);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/4", (MR_String) "byte does not fit in eight bits");
      return;
    }
  succeeded = (B5_13 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_4_p_0(BinaryOutputStream_5, B5_13);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/4", (MR_String) "byte does not fit in eight bits");
      return;
    }
  succeeded = (B6_14 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_4_p_0(BinaryOutputStream_5, B6_14);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/4", (MR_String) "byte does not fit in eight bits");
      return;
    }
  succeeded = (B7_15 < (MR_Integer) 256);
  if (succeeded)
    mercury__io__write_byte_4_p_0(BinaryOutputStream_5, B7_15);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/4", (MR_String) "byte does not fit in eight bits");
      return;
    }
}

void MR_CALL 
backend_libs__bytecode_data__output_short_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer Val_6)
{
  backend_libs__bytecode_data__output_int_general__ho1_6_p_0(BinaryOutputStream_5, (MR_Integer) 16, Val_6);
}

void MR_CALL 
backend_libs__bytecode_data__output_int32_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer IntVal_6)
{
  backend_libs__bytecode_data__output_int_general__ho1_6_p_0(BinaryOutputStream_5, (MR_Integer) 32, IntVal_6);
}

void MR_CALL 
backend_libs__bytecode_data__output_int_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer IntVal_6)
{
  MR_bool succeeded;
  MR_Integer IntBits_8;

  mercury__int__bits_per_int_1_p_0(&IntBits_8);
  succeeded = (IntBits_8 > ((MR_Integer) ((MR_Unsigned) 8 * (MR_Unsigned) 8)));
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_int\'/4", (MR_String) "size of int is larger than size of bytecode integer.");
      return;
    }
  else
    backend_libs__bytecode_data__output_int_general__ho1_6_p_0(BinaryOutputStream_5, (MR_Integer) ((MR_Unsigned) 8 * (MR_Unsigned) 8), IntVal_6);
}

static void MR_CALL 
backend_libs__bytecode_data__output_int_general__ho1_6_p_0(
  MR_Word BinaryOutputStream_7,
  MR_Integer Bits_9,
  MR_Integer IntVal_10)
{
  MR_bool succeeded;
  MR_Integer IntBits_12;
  MR_Integer ZeroPadBytes_15;
  MR_Integer BytesToDump_16;
  MR_Integer FirstByteToDump_17;
  MR_Integer Var_35;
  MR_Integer MaxVal_13;
  MR_Integer Var_20;
  MR_Integer Var_21;
  MR_Integer Var_22;

  mercury__int__bits_per_int_1_p_0(&IntBits_12);
  succeeded = (Bits_9 < IntBits_12);
  if (succeeded)
  {
    Var_20 = (MR_Integer) 2;
    Var_22 = (MR_Integer) 1;
    Var_21 = (MR_Integer) ((MR_Unsigned) Bits_9 - (MR_Unsigned) Var_22);
    mercury__int__pow_3_p_0(Var_20, Var_21, &MaxVal_13);
    succeeded = (IntVal_10 >= MaxVal_13);
    if (!(succeeded))
    {
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) MaxVal_13);

      succeeded = (IntVal_10 < Var_23);
    }
  }
  if (succeeded)
  {
    MR_String Msg_14;
    MR_String Var_39;
    MR_String Var_46;
    MR_String Var_48;
    MR_String Var_49;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__bytecode_data_scalar_common_5[0]), Bits_9, &Var_39);
    Var_46 = mercury__string__f_43_43_2_f_0(Var_39, (MR_String) " bits");
    Var_48 = mercury__string__f_43_43_2_f_0((MR_String) " does not fit in ", Var_46);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__bytecode_data_scalar_common_5[0]), IntVal_10, &Var_49);
    Msg_14 = mercury__string__f_43_43_2_f_0(Var_49, Var_48);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_int_general\'/6", Msg_14);
      return;
    }
  }
  succeeded = (Bits_9 > IntBits_12);
  if (succeeded)
  {
    MR_Integer Var_31 = (MR_Integer) ((MR_Unsigned) Bits_9 - (MR_Unsigned) IntBits_12);

    ZeroPadBytes_15 = mercury__int__f_47_47_2_f_0(Var_31, (MR_Integer) 8);
  }
  else
    ZeroPadBytes_15 = (MR_Integer) 0;
  backend_libs__bytecode_data__output_padding_zeros__ho3_5_p_0(BinaryOutputStream_7, ZeroPadBytes_15);
  BytesToDump_16 = mercury__int__f_47_47_2_f_0(Bits_9, (MR_Integer) 8);
  Var_35 = (MR_Integer) ((MR_Unsigned) BytesToDump_16 - (MR_Unsigned) ZeroPadBytes_15);
  FirstByteToDump_17 = (MR_Integer) ((MR_Unsigned) Var_35 - (MR_Unsigned) 1);
  backend_libs__bytecode_data__output_int_bytes__ho2_6_p_0(BinaryOutputStream_7, FirstByteToDump_17, IntVal_10);
}

static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho3_5_p_0(
  MR_Word BinaryOutputStream_6,
  MR_Integer NumBytes_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NumBytes_8 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer NumBytes1_10;
      MR_Integer next_value_of_NumBytes_8;

      mercury__io__write_byte_4_p_0(BinaryOutputStream_6, (MR_Integer) 0);
      NumBytes1_10 = (MR_Integer) ((MR_Unsigned) NumBytes_8 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_NumBytes_8 = NumBytes1_10;
      NumBytes_8 = next_value_of_NumBytes_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho2_6_p_0(
  MR_Word BinaryOutputStream_7,
  MR_Integer ByteNum_9,
  MR_Integer IntVal_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (ByteNum_9 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer BitShifts_12 = (MR_Integer) ((MR_Unsigned) ByteNum_9 * (MR_Unsigned) 8);
      MR_Integer Byte_13;
      MR_Integer ByteNum1_14;
      MR_Integer Var_19;
      MR_Integer Var_20;
      MR_Integer next_value_of_ByteNum_9;

      Var_19 = mercury__int__f_62_62_2_f_0(IntVal_10, BitShifts_12);
      Var_20 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 8);
      Byte_13 = mercury__int__mod_2_f_0(Var_19, Var_20);
      ByteNum1_14 = (MR_Integer) ((MR_Unsigned) ByteNum_9 - (MR_Unsigned) 1);
      mercury__io__write_byte_4_p_0(BinaryOutputStream_7, Byte_13);
      // direct tailcall eliminated
      ;
      next_value_of_ByteNum_9 = ByteNum1_14;
      ByteNum_9 = next_value_of_ByteNum_9;
      continue;
    }
    break;
  }
}

void MR_CALL 
backend_libs__bytecode_data__output_byte_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_Integer Val_6)
{
  MR_bool succeeded = (Val_6 < (MR_Integer) 256);

  if (succeeded)
    mercury__io__write_byte_4_p_0(BinaryOutputStream_5, Val_6);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/4", (MR_String) "byte does not fit in eight bits");
      return;
    }
}

static void MR_CALL 
backend_libs__bytecode_data__output_string_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_byte_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
}

static void MR_CALL 
backend_libs__bytecode_data__output_string_4_p_0_1(
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
backend_libs__bytecode_data__output_string_4_p_0(
  MR_Word BinaryOutputStream_5,
  MR_String Val_6)
{
  MR_Word List_8;
  MR_Word Var_11;
  MR_Word Chars_19;
  MR_Word List0_21;
  MR_Box conv1_STATE_VARIABLE_IO_12_12;

  mercury__string__to_char_list_2_p_0(Val_6, &Chars_19);
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__bytecode_data_scalar_common_3[0]), Chars_19, &List0_21);
  mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), List0_21, (MR_Word) (MR_mkword(1, &backend_libs__bytecode_data_scalar_common_1[0])), &List_8);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&backend_libs__bytecode_data_scalar_common_4[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (backend_libs__bytecode_data__output_string_4_p_0_2));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (BinaryOutputStream_5));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_11, List_8, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_12_12);
  mercury__io__write_byte_4_p_0(BinaryOutputStream_5, (MR_Integer) 0);
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
