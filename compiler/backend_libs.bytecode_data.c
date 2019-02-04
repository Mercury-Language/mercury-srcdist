/*
** Automatically generated from `bytecode_data.m'
** by the Mercury compiler,
** version rotd-2018-02-04
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
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


#include "backend_libs.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
backend_libs__bytecode_data__int_to_byte_list_3_p_0(
  MR_Integer Bits_4,
  MR_Integer IntVal_5,
  MR_Word * Bytes_6);

static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho6_4_p_0(
  MR_Integer NumBytes_6,
  MR_Word STATE_VARIABLE_IO_0_9,
  MR_Word * STATE_VARIABLE_IO_10);

static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho5_5_p_0(
  MR_Integer ByteNum_7,
  MR_Integer IntVal_8,
  MR_Word STATE_VARIABLE_IO_0_13,
  MR_Word * STATE_VARIABLE_IO_14);

static void MR_CALL 
backend_libs__bytecode_data__output_int_4_p_0(
  MR_Integer Bits_5,
  MR_Integer IntVal_6);

static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho4_4_p_0(
  MR_Integer NumBytes_6);

static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho3_5_p_0(
  MR_Integer ByteNum_7,
  MR_Integer IntVal_8);

static void MR_CALL 
backend_libs__bytecode_data__output_string_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__bytecode_data__string_to_byte_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_1[1][5];

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_2[2][3];

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_3[1][2];

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_4[1][6];

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_5[1][1];




static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_1[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__bytecode_data_scalar_common_1[0])),
    ((MR_Box) (backend_libs__bytecode_data__string_to_byte_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__bytecode_data_scalar_common_4[0])),
    ((MR_Box) (backend_libs__bytecode_data__output_string_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_3[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



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

	FloatVal =  FloatVal_1 ;
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
}

void MR_CALL 
backend_libs__bytecode_data__float_to_byte_list_2_p_0(
  MR_Float Val_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Integer B0_4;
    MR_Integer B1_5;
    MR_Integer B2_6;
    MR_Integer B3_7;
    MR_Integer B4_8;
    MR_Integer B5_9;
    MR_Integer B6_10;
    MR_Integer B7_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

{
#define MR_PROC_LABEL backend_libs__bytecode_data__float_to_byte_list_2_p_0

	MR_Float FloatVal;
	MR_Integer B0;
	MR_Integer B1;
	MR_Integer B2;
	MR_Integer B3;
	MR_Integer B4;
	MR_Integer B5;
	MR_Integer B6;
	MR_Integer B7;

	FloatVal =  Val_3 ;
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
	 B0_4  = B0;
	 B1_5  = B1;
	 B2_6  = B2;
	 B3_7  = B3;
	 B4_8  = B4;
	 B5_9  = B5;
	 B6_10  = B6;
	 B7_11  = B7;
}
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (B7_11));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (B6_10));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (B5_9));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (B4_8));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (B3_7));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (B2_6));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (B1_5));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (B0_4));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_12));
    }
  }
}

void MR_CALL 
backend_libs__bytecode_data__output_float_3_p_0(
  MR_Float Val_4)
{
  {
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

	FloatVal =  Val_4 ;
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
    backend_libs__bytecode_data__output_byte_3_p_0(B0_6);
    backend_libs__bytecode_data__output_byte_3_p_0(B1_7);
    backend_libs__bytecode_data__output_byte_3_p_0(B2_8);
    backend_libs__bytecode_data__output_byte_3_p_0(B3_9);
    backend_libs__bytecode_data__output_byte_3_p_0(B4_10);
    backend_libs__bytecode_data__output_byte_3_p_0(B5_11);
    backend_libs__bytecode_data__output_byte_3_p_0(B6_12);
    backend_libs__bytecode_data__output_byte_3_p_0(B7_13);
  }
}

void MR_CALL 
backend_libs__bytecode_data__short_to_byte_list_2_p_0(
  MR_Integer Val_3,
  MR_Word * Bytes_4)
{
  {
    backend_libs__bytecode_data__int_to_byte_list_3_p_0((MR_Integer) 16, Val_3, Bytes_4);
  }
}

void MR_CALL 
backend_libs__bytecode_data__output_short_3_p_0(
  MR_Integer Val_4)
{
  {
    backend_libs__bytecode_data__output_int_4_p_0((MR_Integer) 16, Val_4);
  }
}

void MR_CALL 
backend_libs__bytecode_data__int32_to_byte_list_2_p_0(
  MR_Integer IntVal_3,
  MR_Word * List_4)
{
  {
    backend_libs__bytecode_data__int_to_byte_list_3_p_0((MR_Integer) 32, IntVal_3, List_4);
  }
}

void MR_CALL 
backend_libs__bytecode_data__output_int32_3_p_0(
  MR_Integer IntVal_4)
{
  {
    backend_libs__bytecode_data__output_int_4_p_0((MR_Integer) 32, IntVal_4);
  }
}

void MR_CALL 
backend_libs__bytecode_data__int_to_byte_list_2_p_0(
  MR_Integer IntVal_3,
  MR_Word * Bytes_4)
{
  {
    MR_bool succeeded;
    MR_Integer IntBits_5;

    mercury__int__bits_per_int_1_p_0(&IntBits_5);
    succeeded = (IntBits_5 > (((MR_Integer) 8 * (MR_Integer) 8)));
    if (succeeded)
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.bytecode_data", (MR_String) "predicate \140backend_libs.bytecode_data.int_to_byte_list\'/2", (MR_String) "size of int is larger than size of bytecode integer.");
        return;
      }
    }
    else
    {
      backend_libs__bytecode_data__int_to_byte_list_3_p_0(((MR_Integer) 8 * (MR_Integer) 8), IntVal_3, Bytes_4);
    }
  }
}

static void MR_CALL 
backend_libs__bytecode_data__int_to_byte_list_3_p_0(
  MR_Integer Bits_4,
  MR_Integer IntVal_5,
  MR_Word * Bytes_6)
{
  {
    MR_bool succeeded;
    MR_Word RevBytes_7;
    MR_Integer IntBits_23;
    MR_Integer ZeroPadBytes_26;
    MR_Integer BytesToDump_27;
    MR_Integer FirstByteToDump_28;
    MR_Word STATE_VARIABLE_IO_32_43;
    MR_Integer Var_45;
    MR_Integer MaxVal_24;
    MR_Integer Var_29;
    MR_Integer Var_30;
    MR_Integer Var_31;

    mercury__int__bits_per_int_1_p_0(&IntBits_23);
    succeeded = (Bits_4 < IntBits_23);
    if (succeeded)
    {
      Var_29 = (MR_Integer) 2;
      Var_31 = (MR_Integer) 1;
      Var_30 = (Bits_4 - Var_31);
      mercury__int__pow_3_p_0(Var_29, Var_30, &MaxVal_24);
      succeeded = (IntVal_5 >= MaxVal_24);
      if (!(succeeded))
      {
        MR_Integer Var_32 = ((MR_Integer) 0 - MaxVal_24);

        succeeded = (IntVal_5 < Var_32);
      }
    }
    if (succeeded)
    {
      MR_String Msg_25;
      MR_String Var_50;
      MR_Word Var_56 = (MR_Word) &backend_libs__bytecode_data_scalar_common_5[0];
      MR_String Var_57;
      MR_String Var_59;
      MR_String Var_60;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_56, Bits_4, &Var_50);
      Var_57 = mercury__string__f_43_43_2_f_0(Var_50, (MR_String) " bits");
      Var_59 = mercury__string__f_43_43_2_f_0((MR_String) " does not fit in ", Var_57);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_56, IntVal_5, &Var_60);
      Msg_25 = mercury__string__f_43_43_2_f_0(Var_60, Var_59);
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.bytecode_data", (MR_String) "predicate \140backend_libs.bytecode_data.output_int\'/5", Msg_25);
        return;
      }
    }
    else
    {
    }
    succeeded = (Bits_4 > IntBits_23);
    if (succeeded)
    {
      MR_Integer Var_41 = (Bits_4 - IntBits_23);

      ZeroPadBytes_26 = mercury__int__f_47_47_2_f_0(Var_41, (MR_Integer) 8);
    }
    else
      ZeroPadBytes_26 = (MR_Integer) 0;
    backend_libs__bytecode_data__output_padding_zeros__ho6_4_p_0(ZeroPadBytes_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_IO_32_43);
    BytesToDump_27 = mercury__int__f_47_47_2_f_0(Bits_4, (MR_Integer) 8);
    Var_45 = (BytesToDump_27 - ZeroPadBytes_26);
    FirstByteToDump_28 = (Var_45 - (MR_Integer) 1);
    backend_libs__bytecode_data__output_int_bytes__ho5_5_p_0(FirstByteToDump_28, IntVal_5, STATE_VARIABLE_IO_32_43, &RevBytes_7);
    mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, RevBytes_7, Bytes_6);
  }
}

static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho6_4_p_0(
  MR_Integer NumBytes_6,
  MR_Word STATE_VARIABLE_IO_0_9,
  MR_Word * STATE_VARIABLE_IO_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NumBytes_6 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_Integer NumBytes1_8;
      MR_Word STATE_VARIABLE_IO_13_13;
      MR_Integer next_value_of_NumBytes_6;
      MR_Word next_value_of_STATE_VARIABLE_IO_0_9;

      mercury__list__cons_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_IO_0_9, &STATE_VARIABLE_IO_13_13);
      NumBytes1_8 = (NumBytes_6 - (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_NumBytes_6 = NumBytes1_8;
      next_value_of_STATE_VARIABLE_IO_0_9 = STATE_VARIABLE_IO_13_13;
      NumBytes_6 = next_value_of_NumBytes_6;
      STATE_VARIABLE_IO_0_9 = next_value_of_STATE_VARIABLE_IO_0_9;
      continue;
    }
    else
      *STATE_VARIABLE_IO_10 = STATE_VARIABLE_IO_0_9;
    break;
  }
}

static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho5_5_p_0(
  MR_Integer ByteNum_7,
  MR_Integer IntVal_8,
  MR_Word STATE_VARIABLE_IO_0_13,
  MR_Word * STATE_VARIABLE_IO_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (ByteNum_7 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_Integer BitShifts_10 = (ByteNum_7 * (MR_Integer) 8);
      MR_Integer Byte_11;
      MR_Integer ByteNum1_12;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Word STATE_VARIABLE_IO_22_22;
      MR_Integer next_value_of_ByteNum_7;
      MR_Word next_value_of_STATE_VARIABLE_IO_0_13;

      Var_17 = mercury__int__f_62_62_2_f_0(IntVal_8, BitShifts_10);
      Var_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 8);
      Byte_11 = mercury__int__mod_2_f_0(Var_17, Var_18);
      ByteNum1_12 = (ByteNum_7 - (MR_Integer) 1);
      mercury__list__cons_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (Byte_11)), STATE_VARIABLE_IO_0_13, &STATE_VARIABLE_IO_22_22);
      // direct tailcall eliminated
      next_value_of_ByteNum_7 = ByteNum1_12;
      next_value_of_STATE_VARIABLE_IO_0_13 = STATE_VARIABLE_IO_22_22;
      ByteNum_7 = next_value_of_ByteNum_7;
      STATE_VARIABLE_IO_0_13 = next_value_of_STATE_VARIABLE_IO_0_13;
      continue;
    }
    else
      *STATE_VARIABLE_IO_14 = STATE_VARIABLE_IO_0_13;
    break;
  }
}

void MR_CALL 
backend_libs__bytecode_data__output_int_3_p_0(
  MR_Integer IntVal_4)
{
  {
    MR_bool succeeded;
    MR_Integer IntBits_6;

    mercury__int__bits_per_int_1_p_0(&IntBits_6);
    succeeded = (IntBits_6 > (((MR_Integer) 8 * (MR_Integer) 8)));
    if (succeeded)
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.bytecode_data", (MR_String) "predicate \140backend_libs.bytecode_data.output_int\'/3", (MR_String) "size of int is larger than size of bytecode integer.");
        return;
      }
    }
    else
    {
      backend_libs__bytecode_data__output_int_4_p_0(((MR_Integer) 8 * (MR_Integer) 8), IntVal_4);
    }
  }
}

static void MR_CALL 
backend_libs__bytecode_data__output_int_4_p_0(
  MR_Integer Bits_5,
  MR_Integer IntVal_6)
{
  {
    MR_bool succeeded;
    MR_Integer IntBits_23;
    MR_Integer ZeroPadBytes_26;
    MR_Integer BytesToDump_27;
    MR_Integer FirstByteToDump_28;
    MR_Integer Var_45;
    MR_Integer MaxVal_24;
    MR_Integer Var_29;
    MR_Integer Var_30;
    MR_Integer Var_31;

    mercury__int__bits_per_int_1_p_0(&IntBits_23);
    succeeded = (Bits_5 < IntBits_23);
    if (succeeded)
    {
      Var_29 = (MR_Integer) 2;
      Var_31 = (MR_Integer) 1;
      Var_30 = (Bits_5 - Var_31);
      mercury__int__pow_3_p_0(Var_29, Var_30, &MaxVal_24);
      succeeded = (IntVal_6 >= MaxVal_24);
      if (!(succeeded))
      {
        MR_Integer Var_32 = ((MR_Integer) 0 - MaxVal_24);

        succeeded = (IntVal_6 < Var_32);
      }
    }
    if (succeeded)
    {
      MR_String Msg_25;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;

      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (IntVal_6));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Bits_5));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
      }
      mercury__string__format_3_p_0((MR_String) "%d does not fit in %d bits", Var_34, &Msg_25);
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.bytecode_data", (MR_String) "predicate \140backend_libs.bytecode_data.output_int\'/5", Msg_25);
        return;
      }
    }
    else
    {
    }
    succeeded = (Bits_5 > IntBits_23);
    if (succeeded)
    {
      MR_Integer Var_41 = (Bits_5 - IntBits_23);

      ZeroPadBytes_26 = mercury__int__f_47_47_2_f_0(Var_41, (MR_Integer) 8);
    }
    else
      ZeroPadBytes_26 = (MR_Integer) 0;
    backend_libs__bytecode_data__output_padding_zeros__ho4_4_p_0(ZeroPadBytes_26);
    BytesToDump_27 = mercury__int__f_47_47_2_f_0(Bits_5, (MR_Integer) 8);
    Var_45 = (BytesToDump_27 - ZeroPadBytes_26);
    FirstByteToDump_28 = (Var_45 - (MR_Integer) 1);
    backend_libs__bytecode_data__output_int_bytes__ho3_5_p_0(FirstByteToDump_28, IntVal_6);
  }
}

static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho4_4_p_0(
  MR_Integer NumBytes_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NumBytes_6 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_Integer NumBytes1_8;
      MR_Integer next_value_of_NumBytes_6;

      mercury__io__write_byte_3_p_0((MR_Integer) 0);
      NumBytes1_8 = (NumBytes_6 - (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_NumBytes_6 = NumBytes1_8;
      NumBytes_6 = next_value_of_NumBytes_6;
      continue;
    }
    else
    {
    }
    break;
  }
}

static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho3_5_p_0(
  MR_Integer ByteNum_7,
  MR_Integer IntVal_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (ByteNum_7 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_Integer BitShifts_10 = (ByteNum_7 * (MR_Integer) 8);
      MR_Integer Byte_11;
      MR_Integer ByteNum1_12;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Integer next_value_of_ByteNum_7;

      Var_17 = mercury__int__f_62_62_2_f_0(IntVal_8, BitShifts_10);
      Var_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 8);
      Byte_11 = mercury__int__mod_2_f_0(Var_17, Var_18);
      ByteNum1_12 = (ByteNum_7 - (MR_Integer) 1);
      mercury__io__write_byte_3_p_0(Byte_11);
      // direct tailcall eliminated
      next_value_of_ByteNum_7 = ByteNum1_12;
      ByteNum_7 = next_value_of_ByteNum_7;
      continue;
    }
    else
    {
    }
    break;
  }
}

void MR_CALL 
backend_libs__bytecode_data__output_byte_3_p_0(
  MR_Integer Val_4)
{
  {
    MR_bool succeeded = (Val_4 < (MR_Integer) 256);

    if (succeeded)
      mercury__io__write_byte_3_p_0(Val_4);
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.bytecode_data", (MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/3", (MR_String) "byte does not fit in eight bits");
        return;
      }
    }
  }
}

static void MR_CALL 
backend_libs__bytecode_data__output_string_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_byte_3_p_0(((MR_Integer) wrapper_arg_1));
  }
}

void MR_CALL 
backend_libs__bytecode_data__output_string_3_p_0(
  MR_String Val_4)
{
  {
    MR_Word List_6;
    MR_Box conv0_STATE_VARIABLE_IO_10_10;

    backend_libs__bytecode_data__string_to_byte_list_2_p_0(Val_4, &List_6);
    mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &backend_libs__bytecode_data_scalar_common_2[1], List_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_10_10);
    mercury__io__write_byte_3_p_0((MR_Integer) 0);
  }
}

static void MR_CALL 
backend_libs__bytecode_data__string_to_byte_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    mercury__char__to_int_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
backend_libs__bytecode_data__string_to_byte_list_2_p_0(
  MR_String Val_3,
  MR_Word * List_4)
{
  {
    MR_Word TypeCtorInfo_18_18;
    MR_Word Chars_5;
    MR_Word List0_9;

    mercury__string__to_char_list_2_p_0(Val_3, &Chars_5);
    TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, TypeCtorInfo_18_18, (MR_Word) &backend_libs__bytecode_data_scalar_common_2[0], Chars_5, &List0_9);
    mercury__list__append_3_p_1(TypeCtorInfo_18_18, List0_9, (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__bytecode_data_scalar_common_3[0]), List_4);
  }
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
