/*
** Automatically generated from `bytecode_data.m'
** by the Mercury compiler,
** version rotd-2017-07-31
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module backend_libs.bytecode_data. */
/* :- implementation. */

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
  MR_Float backend_libs__bytecode_data__FloatVal_1,
  MR_Integer * backend_libs__bytecode_data__B0_2,
  MR_Integer * backend_libs__bytecode_data__B1_3,
  MR_Integer * backend_libs__bytecode_data__B2_4,
  MR_Integer * backend_libs__bytecode_data__B3_5,
  MR_Integer * backend_libs__bytecode_data__B4_6,
  MR_Integer * backend_libs__bytecode_data__B5_7,
  MR_Integer * backend_libs__bytecode_data__B6_8,
  MR_Integer * backend_libs__bytecode_data__B7_9);

static void MR_CALL 
backend_libs__bytecode_data__int_to_byte_list_3_p_0(
  MR_Integer backend_libs__bytecode_data__Bits_4,
  MR_Integer backend_libs__bytecode_data__IntVal_5,
  MR_Word * backend_libs__bytecode_data__Bytes_6);

static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho6_4_p_0(
  MR_Integer backend_libs__bytecode_data__NumBytes_6,
  MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_0_9,
  MR_Word * backend_libs__bytecode_data__STATE_VARIABLE_IO_10);

static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho5_5_p_0(
  MR_Integer backend_libs__bytecode_data__ByteNum_7,
  MR_Integer backend_libs__bytecode_data__IntVal_8,
  MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_0_13,
  MR_Word * backend_libs__bytecode_data__STATE_VARIABLE_IO_14);

static void MR_CALL 
backend_libs__bytecode_data__output_int_4_p_0(
  MR_Integer backend_libs__bytecode_data__Bits_5,
  MR_Integer backend_libs__bytecode_data__IntVal_6);

static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho4_4_p_0(
  MR_Integer backend_libs__bytecode_data__NumBytes_6);

static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho3_5_p_0(
  MR_Integer backend_libs__bytecode_data__ByteNum_7,
  MR_Integer backend_libs__bytecode_data__IntVal_8);

static void MR_CALL 
backend_libs__bytecode_data__output_string_3_p_0_1(
  MR_Box backend_libs__bytecode_data__closure_arg,
  MR_Box backend_libs__bytecode_data__wrapper_arg_1,
  MR_Box backend_libs__bytecode_data__wrapper_arg_2,
  MR_Box * backend_libs__bytecode_data__wrapper_arg_3);

static void MR_CALL 
backend_libs__bytecode_data__string_to_byte_list_2_p_0_1(
  MR_Box backend_libs__bytecode_data__closure_arg,
  MR_Box backend_libs__bytecode_data__wrapper_arg_1,
  MR_Box * backend_libs__bytecode_data__wrapper_arg_2);


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
  MR_Float backend_libs__bytecode_data__FloatVal_1,
  MR_Integer * backend_libs__bytecode_data__B0_2,
  MR_Integer * backend_libs__bytecode_data__B1_3,
  MR_Integer * backend_libs__bytecode_data__B2_4,
  MR_Integer * backend_libs__bytecode_data__B3_5,
  MR_Integer * backend_libs__bytecode_data__B4_6,
  MR_Integer * backend_libs__bytecode_data__B5_7,
  MR_Integer * backend_libs__bytecode_data__B6_8,
  MR_Integer * backend_libs__bytecode_data__B7_9)
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

	FloatVal =  backend_libs__bytecode_data__FloatVal_1 ;
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
	 *backend_libs__bytecode_data__B0_2  = B0;
	 *backend_libs__bytecode_data__B1_3  = B1;
	 *backend_libs__bytecode_data__B2_4  = B2;
	 *backend_libs__bytecode_data__B3_5  = B3;
	 *backend_libs__bytecode_data__B4_6  = B4;
	 *backend_libs__bytecode_data__B5_7  = B5;
	 *backend_libs__bytecode_data__B6_8  = B6;
	 *backend_libs__bytecode_data__B7_9  = B7;
}
  }
}

void MR_CALL 
backend_libs__bytecode_data__float_to_byte_list_2_p_0(
  MR_Float backend_libs__bytecode_data__Val_3,
  MR_Word * backend_libs__bytecode_data__HeadVar__2_2)
{
  {
    MR_Integer backend_libs__bytecode_data__B0_4;
    MR_Integer backend_libs__bytecode_data__B1_5;
    MR_Integer backend_libs__bytecode_data__B2_6;
    MR_Integer backend_libs__bytecode_data__B3_7;
    MR_Integer backend_libs__bytecode_data__B4_8;
    MR_Integer backend_libs__bytecode_data__B5_9;
    MR_Integer backend_libs__bytecode_data__B6_10;
    MR_Integer backend_libs__bytecode_data__B7_11;
    MR_Word backend_libs__bytecode_data__Var_12;
    MR_Word backend_libs__bytecode_data__Var_13;
    MR_Word backend_libs__bytecode_data__Var_14;
    MR_Word backend_libs__bytecode_data__Var_15;
    MR_Word backend_libs__bytecode_data__Var_16;
    MR_Word backend_libs__bytecode_data__Var_17;
    MR_Word backend_libs__bytecode_data__Var_18;

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

	FloatVal =  backend_libs__bytecode_data__Val_3 ;
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
	 backend_libs__bytecode_data__B0_4  = B0;
	 backend_libs__bytecode_data__B1_5  = B1;
	 backend_libs__bytecode_data__B2_6  = B2;
	 backend_libs__bytecode_data__B3_7  = B3;
	 backend_libs__bytecode_data__B4_8  = B4;
	 backend_libs__bytecode_data__B5_9  = B5;
	 backend_libs__bytecode_data__B6_10  = B6;
	 backend_libs__bytecode_data__B7_11  = B7;
}
    {
      backend_libs__bytecode_data__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_18, 0) = ((MR_Box) (backend_libs__bytecode_data__B7_11));
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      backend_libs__bytecode_data__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_17, 0) = ((MR_Box) (backend_libs__bytecode_data__B6_10));
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_17, 1) = ((MR_Box) (backend_libs__bytecode_data__Var_18));
    }
    {
      backend_libs__bytecode_data__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_16, 0) = ((MR_Box) (backend_libs__bytecode_data__B5_9));
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_16, 1) = ((MR_Box) (backend_libs__bytecode_data__Var_17));
    }
    {
      backend_libs__bytecode_data__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_15, 0) = ((MR_Box) (backend_libs__bytecode_data__B4_8));
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_15, 1) = ((MR_Box) (backend_libs__bytecode_data__Var_16));
    }
    {
      backend_libs__bytecode_data__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_14, 0) = ((MR_Box) (backend_libs__bytecode_data__B3_7));
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_14, 1) = ((MR_Box) (backend_libs__bytecode_data__Var_15));
    }
    {
      backend_libs__bytecode_data__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_13, 0) = ((MR_Box) (backend_libs__bytecode_data__B2_6));
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_13, 1) = ((MR_Box) (backend_libs__bytecode_data__Var_14));
    }
    {
      backend_libs__bytecode_data__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_12, 0) = ((MR_Box) (backend_libs__bytecode_data__B1_5));
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_12, 1) = ((MR_Box) (backend_libs__bytecode_data__Var_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *backend_libs__bytecode_data__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__bytecode_data__B0_4));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__bytecode_data__Var_12));
    }
  }
}

void MR_CALL 
backend_libs__bytecode_data__output_float_3_p_0(
  MR_Float backend_libs__bytecode_data__Val_4)
{
  {
    MR_Integer backend_libs__bytecode_data__B0_6;
    MR_Integer backend_libs__bytecode_data__B1_7;
    MR_Integer backend_libs__bytecode_data__B2_8;
    MR_Integer backend_libs__bytecode_data__B3_9;
    MR_Integer backend_libs__bytecode_data__B4_10;
    MR_Integer backend_libs__bytecode_data__B5_11;
    MR_Integer backend_libs__bytecode_data__B6_12;
    MR_Integer backend_libs__bytecode_data__B7_13;

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

	FloatVal =  backend_libs__bytecode_data__Val_4 ;
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
	 backend_libs__bytecode_data__B0_6  = B0;
	 backend_libs__bytecode_data__B1_7  = B1;
	 backend_libs__bytecode_data__B2_8  = B2;
	 backend_libs__bytecode_data__B3_9  = B3;
	 backend_libs__bytecode_data__B4_10  = B4;
	 backend_libs__bytecode_data__B5_11  = B5;
	 backend_libs__bytecode_data__B6_12  = B6;
	 backend_libs__bytecode_data__B7_13  = B7;
}
    {
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B0_6);
    }
    {
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B1_7);
    }
    {
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B2_8);
    }
    {
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B3_9);
    }
    {
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B4_10);
    }
    {
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B5_11);
    }
    {
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B6_12);
    }
    {
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B7_13);
    }
  }
}

void MR_CALL 
backend_libs__bytecode_data__short_to_byte_list_2_p_0(
  MR_Integer backend_libs__bytecode_data__Val_3,
  MR_Word * backend_libs__bytecode_data__Bytes_4)
{
  {
    {
      backend_libs__bytecode_data__int_to_byte_list_3_p_0((MR_Integer) 16, backend_libs__bytecode_data__Val_3, backend_libs__bytecode_data__Bytes_4);
    }
  }
}

void MR_CALL 
backend_libs__bytecode_data__output_short_3_p_0(
  MR_Integer backend_libs__bytecode_data__Val_4)
{
  {
    {
      backend_libs__bytecode_data__output_int_4_p_0((MR_Integer) 16, backend_libs__bytecode_data__Val_4);
    }
  }
}

void MR_CALL 
backend_libs__bytecode_data__int32_to_byte_list_2_p_0(
  MR_Integer backend_libs__bytecode_data__IntVal_3,
  MR_Word * backend_libs__bytecode_data__List_4)
{
  {
    {
      backend_libs__bytecode_data__int_to_byte_list_3_p_0((MR_Integer) 32, backend_libs__bytecode_data__IntVal_3, backend_libs__bytecode_data__List_4);
    }
  }
}

void MR_CALL 
backend_libs__bytecode_data__output_int32_3_p_0(
  MR_Integer backend_libs__bytecode_data__IntVal_4)
{
  {
    {
      backend_libs__bytecode_data__output_int_4_p_0((MR_Integer) 32, backend_libs__bytecode_data__IntVal_4);
    }
  }
}

void MR_CALL 
backend_libs__bytecode_data__int_to_byte_list_2_p_0(
  MR_Integer backend_libs__bytecode_data__IntVal_3,
  MR_Word * backend_libs__bytecode_data__Bytes_4)
{
  {
    MR_bool backend_libs__bytecode_data__succeeded;
    MR_Integer backend_libs__bytecode_data__IntBits_5;

    {
      mercury__int__bits_per_int_1_p_0(&backend_libs__bytecode_data__IntBits_5);
    }
    backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__IntBits_5 > (((MR_Integer) 8 * (MR_Integer) 8)));
    if (backend_libs__bytecode_data__succeeded)
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.bytecode_data", (MR_String) "predicate \140backend_libs.bytecode_data.int_to_byte_list\'/2", (MR_String) "size of int is larger than size of bytecode integer.");
        return;
      }
    }
    else
    {
      {
        backend_libs__bytecode_data__int_to_byte_list_3_p_0(((MR_Integer) 8 * (MR_Integer) 8), backend_libs__bytecode_data__IntVal_3, backend_libs__bytecode_data__Bytes_4);
      }
    }
  }
}

static void MR_CALL 
backend_libs__bytecode_data__int_to_byte_list_3_p_0(
  MR_Integer backend_libs__bytecode_data__Bits_4,
  MR_Integer backend_libs__bytecode_data__IntVal_5,
  MR_Word * backend_libs__bytecode_data__Bytes_6)
{
  {
    MR_bool backend_libs__bytecode_data__succeeded;
    MR_Word backend_libs__bytecode_data__RevBytes_7;
    MR_Integer backend_libs__bytecode_data__IntBits_23;
    MR_Integer backend_libs__bytecode_data__ZeroPadBytes_26;
    MR_Integer backend_libs__bytecode_data__BytesToDump_27;
    MR_Integer backend_libs__bytecode_data__FirstByteToDump_28;
    MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_32_43;
    MR_Integer backend_libs__bytecode_data__Var_45;
    MR_Integer backend_libs__bytecode_data__MaxVal_24;
    MR_Integer backend_libs__bytecode_data__Var_29;
    MR_Integer backend_libs__bytecode_data__Var_30;
    MR_Integer backend_libs__bytecode_data__Var_31;

    {
      mercury__int__bits_per_int_1_p_0(&backend_libs__bytecode_data__IntBits_23);
    }
    backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__Bits_4 < backend_libs__bytecode_data__IntBits_23);
    if (backend_libs__bytecode_data__succeeded)
    {
      backend_libs__bytecode_data__Var_29 = (MR_Integer) 2;
      backend_libs__bytecode_data__Var_31 = (MR_Integer) 1;
      backend_libs__bytecode_data__Var_30 = (backend_libs__bytecode_data__Bits_4 - backend_libs__bytecode_data__Var_31);
      {
        mercury__int__pow_3_p_0(backend_libs__bytecode_data__Var_29, backend_libs__bytecode_data__Var_30, &backend_libs__bytecode_data__MaxVal_24);
      }
      backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__IntVal_5 >= backend_libs__bytecode_data__MaxVal_24);
      if (!(backend_libs__bytecode_data__succeeded))
      {
        MR_Integer backend_libs__bytecode_data__Var_32 = ((MR_Integer) 0 - backend_libs__bytecode_data__MaxVal_24);

        backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__IntVal_5 < backend_libs__bytecode_data__Var_32);
      }
    }
    if (backend_libs__bytecode_data__succeeded)
    {
      MR_String backend_libs__bytecode_data__Msg_25;
      MR_String backend_libs__bytecode_data__Var_50;
      MR_Word backend_libs__bytecode_data__Var_56 = (MR_Word) &backend_libs__bytecode_data_scalar_common_5[0];
      MR_String backend_libs__bytecode_data__Var_57;
      MR_String backend_libs__bytecode_data__Var_59;
      MR_String backend_libs__bytecode_data__Var_60;

      {
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(backend_libs__bytecode_data__Var_56, backend_libs__bytecode_data__Bits_4, &backend_libs__bytecode_data__Var_50);
      }
      {
        backend_libs__bytecode_data__Var_57 = mercury__string__f_43_43_2_f_0(backend_libs__bytecode_data__Var_50, (MR_String) " bits");
      }
      {
        backend_libs__bytecode_data__Var_59 = mercury__string__f_43_43_2_f_0((MR_String) " does not fit in ", backend_libs__bytecode_data__Var_57);
      }
      {
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(backend_libs__bytecode_data__Var_56, backend_libs__bytecode_data__IntVal_5, &backend_libs__bytecode_data__Var_60);
      }
      {
        backend_libs__bytecode_data__Msg_25 = mercury__string__f_43_43_2_f_0(backend_libs__bytecode_data__Var_60, backend_libs__bytecode_data__Var_59);
      }
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.bytecode_data", (MR_String) "predicate \140backend_libs.bytecode_data.output_int\'/5", backend_libs__bytecode_data__Msg_25);
        return;
      }
    }
    else
    {
    }
    backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__Bits_4 > backend_libs__bytecode_data__IntBits_23);
    if (backend_libs__bytecode_data__succeeded)
    {
      MR_Integer backend_libs__bytecode_data__Var_41 = (backend_libs__bytecode_data__Bits_4 - backend_libs__bytecode_data__IntBits_23);

      {
        backend_libs__bytecode_data__ZeroPadBytes_26 = mercury__int__f_47_47_2_f_0(backend_libs__bytecode_data__Var_41, (MR_Integer) 8);
      }
    }
    else
      backend_libs__bytecode_data__ZeroPadBytes_26 = (MR_Integer) 0;
    {
      backend_libs__bytecode_data__output_padding_zeros__ho6_4_p_0(backend_libs__bytecode_data__ZeroPadBytes_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__bytecode_data__STATE_VARIABLE_IO_32_43);
    }
    {
      backend_libs__bytecode_data__BytesToDump_27 = mercury__int__f_47_47_2_f_0(backend_libs__bytecode_data__Bits_4, (MR_Integer) 8);
    }
    backend_libs__bytecode_data__Var_45 = (backend_libs__bytecode_data__BytesToDump_27 - backend_libs__bytecode_data__ZeroPadBytes_26);
    backend_libs__bytecode_data__FirstByteToDump_28 = (backend_libs__bytecode_data__Var_45 - (MR_Integer) 1);
    {
      backend_libs__bytecode_data__output_int_bytes__ho5_5_p_0(backend_libs__bytecode_data__FirstByteToDump_28, backend_libs__bytecode_data__IntVal_5, backend_libs__bytecode_data__STATE_VARIABLE_IO_32_43, &backend_libs__bytecode_data__RevBytes_7);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__bytecode_data__RevBytes_7, backend_libs__bytecode_data__Bytes_6);
    }
  }
}

static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho6_4_p_0(
  MR_Integer backend_libs__bytecode_data__NumBytes_6,
  MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_0_9,
  MR_Word * backend_libs__bytecode_data__STATE_VARIABLE_IO_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__NumBytes_6 > (MR_Integer) 0);

      if (backend_libs__bytecode_data__succeeded)
      {
        MR_Integer backend_libs__bytecode_data__NumBytes1_8;
        MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_13_13;

        {
          mercury__list__cons_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) ((MR_Integer) 0)), backend_libs__bytecode_data__STATE_VARIABLE_IO_0_9, &backend_libs__bytecode_data__STATE_VARIABLE_IO_13_13);
        }
        backend_libs__bytecode_data__NumBytes1_8 = (backend_libs__bytecode_data__NumBytes_6 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer backend_libs__bytecode_data__next_value_of_NumBytes_6 = backend_libs__bytecode_data__NumBytes1_8;
          MR_Word backend_libs__bytecode_data__next_value_of_STATE_VARIABLE_IO_0_9 = backend_libs__bytecode_data__STATE_VARIABLE_IO_13_13;

          backend_libs__bytecode_data__STATE_VARIABLE_IO_0_9 = backend_libs__bytecode_data__next_value_of_STATE_VARIABLE_IO_0_9;
          backend_libs__bytecode_data__NumBytes_6 = backend_libs__bytecode_data__next_value_of_NumBytes_6;
        }
        continue;
      }
      else
        *backend_libs__bytecode_data__STATE_VARIABLE_IO_10 = backend_libs__bytecode_data__STATE_VARIABLE_IO_0_9;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho5_5_p_0(
  MR_Integer backend_libs__bytecode_data__ByteNum_7,
  MR_Integer backend_libs__bytecode_data__IntVal_8,
  MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_0_13,
  MR_Word * backend_libs__bytecode_data__STATE_VARIABLE_IO_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__ByteNum_7 >= (MR_Integer) 0);

      if (backend_libs__bytecode_data__succeeded)
      {
        MR_Integer backend_libs__bytecode_data__BitShifts_10 = (backend_libs__bytecode_data__ByteNum_7 * (MR_Integer) 8);
        MR_Integer backend_libs__bytecode_data__Byte_11;
        MR_Integer backend_libs__bytecode_data__ByteNum1_12;
        MR_Integer backend_libs__bytecode_data__Var_17;
        MR_Integer backend_libs__bytecode_data__Var_18;
        MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_22_22;

        {
          backend_libs__bytecode_data__Var_17 = mercury__int__f_62_62_2_f_0(backend_libs__bytecode_data__IntVal_8, backend_libs__bytecode_data__BitShifts_10);
        }
        {
          backend_libs__bytecode_data__Var_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 8);
        }
        {
          backend_libs__bytecode_data__Byte_11 = mercury__int__mod_2_f_0(backend_libs__bytecode_data__Var_17, backend_libs__bytecode_data__Var_18);
        }
        backend_libs__bytecode_data__ByteNum1_12 = (backend_libs__bytecode_data__ByteNum_7 - (MR_Integer) 1);
        {
          mercury__list__cons_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (backend_libs__bytecode_data__Byte_11)), backend_libs__bytecode_data__STATE_VARIABLE_IO_0_13, &backend_libs__bytecode_data__STATE_VARIABLE_IO_22_22);
        }
        /* direct tailcall eliminated */
        {
          MR_Integer backend_libs__bytecode_data__next_value_of_ByteNum_7 = backend_libs__bytecode_data__ByteNum1_12;
          MR_Word backend_libs__bytecode_data__next_value_of_STATE_VARIABLE_IO_0_13 = backend_libs__bytecode_data__STATE_VARIABLE_IO_22_22;

          backend_libs__bytecode_data__STATE_VARIABLE_IO_0_13 = backend_libs__bytecode_data__next_value_of_STATE_VARIABLE_IO_0_13;
          backend_libs__bytecode_data__ByteNum_7 = backend_libs__bytecode_data__next_value_of_ByteNum_7;
        }
        continue;
      }
      else
        *backend_libs__bytecode_data__STATE_VARIABLE_IO_14 = backend_libs__bytecode_data__STATE_VARIABLE_IO_0_13;
    }
    break;
  }
}

void MR_CALL 
backend_libs__bytecode_data__output_int_3_p_0(
  MR_Integer backend_libs__bytecode_data__IntVal_4)
{
  {
    MR_bool backend_libs__bytecode_data__succeeded;
    MR_Integer backend_libs__bytecode_data__IntBits_6;

    {
      mercury__int__bits_per_int_1_p_0(&backend_libs__bytecode_data__IntBits_6);
    }
    backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__IntBits_6 > (((MR_Integer) 8 * (MR_Integer) 8)));
    if (backend_libs__bytecode_data__succeeded)
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.bytecode_data", (MR_String) "predicate \140backend_libs.bytecode_data.output_int\'/3", (MR_String) "size of int is larger than size of bytecode integer.");
        return;
      }
    }
    else
    {
      {
        backend_libs__bytecode_data__output_int_4_p_0(((MR_Integer) 8 * (MR_Integer) 8), backend_libs__bytecode_data__IntVal_4);
      }
    }
  }
}

static void MR_CALL 
backend_libs__bytecode_data__output_int_4_p_0(
  MR_Integer backend_libs__bytecode_data__Bits_5,
  MR_Integer backend_libs__bytecode_data__IntVal_6)
{
  {
    MR_bool backend_libs__bytecode_data__succeeded;
    MR_Integer backend_libs__bytecode_data__IntBits_23;
    MR_Integer backend_libs__bytecode_data__ZeroPadBytes_26;
    MR_Integer backend_libs__bytecode_data__BytesToDump_27;
    MR_Integer backend_libs__bytecode_data__FirstByteToDump_28;
    MR_Integer backend_libs__bytecode_data__Var_45;
    MR_Integer backend_libs__bytecode_data__MaxVal_24;
    MR_Integer backend_libs__bytecode_data__Var_29;
    MR_Integer backend_libs__bytecode_data__Var_30;
    MR_Integer backend_libs__bytecode_data__Var_31;

    {
      mercury__int__bits_per_int_1_p_0(&backend_libs__bytecode_data__IntBits_23);
    }
    backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__Bits_5 < backend_libs__bytecode_data__IntBits_23);
    if (backend_libs__bytecode_data__succeeded)
    {
      backend_libs__bytecode_data__Var_29 = (MR_Integer) 2;
      backend_libs__bytecode_data__Var_31 = (MR_Integer) 1;
      backend_libs__bytecode_data__Var_30 = (backend_libs__bytecode_data__Bits_5 - backend_libs__bytecode_data__Var_31);
      {
        mercury__int__pow_3_p_0(backend_libs__bytecode_data__Var_29, backend_libs__bytecode_data__Var_30, &backend_libs__bytecode_data__MaxVal_24);
      }
      backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__IntVal_6 >= backend_libs__bytecode_data__MaxVal_24);
      if (!(backend_libs__bytecode_data__succeeded))
      {
        MR_Integer backend_libs__bytecode_data__Var_32 = ((MR_Integer) 0 - backend_libs__bytecode_data__MaxVal_24);

        backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__IntVal_6 < backend_libs__bytecode_data__Var_32);
      }
    }
    if (backend_libs__bytecode_data__succeeded)
    {
      MR_String backend_libs__bytecode_data__Msg_25;
      MR_Word backend_libs__bytecode_data__Var_34;
      MR_Word backend_libs__bytecode_data__Var_35;
      MR_Word backend_libs__bytecode_data__Var_36;
      MR_Word backend_libs__bytecode_data__Var_37;

      {
        backend_libs__bytecode_data__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_35, 0) = ((MR_Box) (backend_libs__bytecode_data__IntVal_6));
      }
      {
        backend_libs__bytecode_data__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_37, 0) = ((MR_Box) (backend_libs__bytecode_data__Bits_5));
      }
      {
        backend_libs__bytecode_data__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_36, 0) = ((MR_Box) (backend_libs__bytecode_data__Var_37));
        MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        backend_libs__bytecode_data__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_34, 0) = ((MR_Box) (backend_libs__bytecode_data__Var_35));
        MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__Var_34, 1) = ((MR_Box) (backend_libs__bytecode_data__Var_36));
      }
      {
        mercury__string__format_3_p_0((MR_String) "%d does not fit in %d bits", backend_libs__bytecode_data__Var_34, &backend_libs__bytecode_data__Msg_25);
      }
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.bytecode_data", (MR_String) "predicate \140backend_libs.bytecode_data.output_int\'/5", backend_libs__bytecode_data__Msg_25);
        return;
      }
    }
    else
    {
    }
    backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__Bits_5 > backend_libs__bytecode_data__IntBits_23);
    if (backend_libs__bytecode_data__succeeded)
    {
      MR_Integer backend_libs__bytecode_data__Var_41 = (backend_libs__bytecode_data__Bits_5 - backend_libs__bytecode_data__IntBits_23);

      {
        backend_libs__bytecode_data__ZeroPadBytes_26 = mercury__int__f_47_47_2_f_0(backend_libs__bytecode_data__Var_41, (MR_Integer) 8);
      }
    }
    else
      backend_libs__bytecode_data__ZeroPadBytes_26 = (MR_Integer) 0;
    {
      backend_libs__bytecode_data__output_padding_zeros__ho4_4_p_0(backend_libs__bytecode_data__ZeroPadBytes_26);
    }
    {
      backend_libs__bytecode_data__BytesToDump_27 = mercury__int__f_47_47_2_f_0(backend_libs__bytecode_data__Bits_5, (MR_Integer) 8);
    }
    backend_libs__bytecode_data__Var_45 = (backend_libs__bytecode_data__BytesToDump_27 - backend_libs__bytecode_data__ZeroPadBytes_26);
    backend_libs__bytecode_data__FirstByteToDump_28 = (backend_libs__bytecode_data__Var_45 - (MR_Integer) 1);
    {
      backend_libs__bytecode_data__output_int_bytes__ho3_5_p_0(backend_libs__bytecode_data__FirstByteToDump_28, backend_libs__bytecode_data__IntVal_6);
    }
  }
}

static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho4_4_p_0(
  MR_Integer backend_libs__bytecode_data__NumBytes_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__NumBytes_6 > (MR_Integer) 0);

      if (backend_libs__bytecode_data__succeeded)
      {
        MR_Integer backend_libs__bytecode_data__NumBytes1_8;

        {
          mercury__io__write_byte_3_p_0((MR_Integer) 0);
        }
        backend_libs__bytecode_data__NumBytes1_8 = (backend_libs__bytecode_data__NumBytes_6 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer backend_libs__bytecode_data__next_value_of_NumBytes_6 = backend_libs__bytecode_data__NumBytes1_8;

          backend_libs__bytecode_data__NumBytes_6 = backend_libs__bytecode_data__next_value_of_NumBytes_6;
        }
        continue;
      }
      else
      {
      }
    }
    break;
  }
}

static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho3_5_p_0(
  MR_Integer backend_libs__bytecode_data__ByteNum_7,
  MR_Integer backend_libs__bytecode_data__IntVal_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__ByteNum_7 >= (MR_Integer) 0);

      if (backend_libs__bytecode_data__succeeded)
      {
        MR_Integer backend_libs__bytecode_data__BitShifts_10 = (backend_libs__bytecode_data__ByteNum_7 * (MR_Integer) 8);
        MR_Integer backend_libs__bytecode_data__Byte_11;
        MR_Integer backend_libs__bytecode_data__ByteNum1_12;
        MR_Integer backend_libs__bytecode_data__Var_17;
        MR_Integer backend_libs__bytecode_data__Var_18;

        {
          backend_libs__bytecode_data__Var_17 = mercury__int__f_62_62_2_f_0(backend_libs__bytecode_data__IntVal_8, backend_libs__bytecode_data__BitShifts_10);
        }
        {
          backend_libs__bytecode_data__Var_18 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 8);
        }
        {
          backend_libs__bytecode_data__Byte_11 = mercury__int__mod_2_f_0(backend_libs__bytecode_data__Var_17, backend_libs__bytecode_data__Var_18);
        }
        backend_libs__bytecode_data__ByteNum1_12 = (backend_libs__bytecode_data__ByteNum_7 - (MR_Integer) 1);
        {
          mercury__io__write_byte_3_p_0(backend_libs__bytecode_data__Byte_11);
        }
        /* direct tailcall eliminated */
        {
          MR_Integer backend_libs__bytecode_data__next_value_of_ByteNum_7 = backend_libs__bytecode_data__ByteNum1_12;

          backend_libs__bytecode_data__ByteNum_7 = backend_libs__bytecode_data__next_value_of_ByteNum_7;
        }
        continue;
      }
      else
      {
      }
    }
    break;
  }
}

void MR_CALL 
backend_libs__bytecode_data__output_byte_3_p_0(
  MR_Integer backend_libs__bytecode_data__Val_4)
{
  {
    MR_bool backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__Val_4 < (MR_Integer) 256);

    if (backend_libs__bytecode_data__succeeded)
      {
        mercury__io__write_byte_3_p_0(backend_libs__bytecode_data__Val_4);
      }
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
  MR_Box backend_libs__bytecode_data__closure_arg,
  MR_Box backend_libs__bytecode_data__wrapper_arg_1,
  MR_Box backend_libs__bytecode_data__wrapper_arg_2,
  MR_Box * backend_libs__bytecode_data__wrapper_arg_3)
{
  {
    MR_Box backend_libs__bytecode_data__closure = backend_libs__bytecode_data__closure_arg;

    {
      mercury__io__write_byte_3_p_0(((MR_Integer) backend_libs__bytecode_data__wrapper_arg_1));
    }
  }
}

void MR_CALL 
backend_libs__bytecode_data__output_string_3_p_0(
  MR_String backend_libs__bytecode_data__Val_4)
{
  {
    MR_Word backend_libs__bytecode_data__List_6;
    MR_Box backend_libs__bytecode_data__conv0_STATE_VARIABLE_IO_10_10;

    {
      backend_libs__bytecode_data__string_to_byte_list_2_p_0(backend_libs__bytecode_data__Val_4, &backend_libs__bytecode_data__List_6);
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &backend_libs__bytecode_data_scalar_common_2[1], backend_libs__bytecode_data__List_6, ((MR_Box) ((MR_Integer) 0)), &backend_libs__bytecode_data__conv0_STATE_VARIABLE_IO_10_10);
    }
    {
      mercury__io__write_byte_3_p_0((MR_Integer) 0);
    }
  }
}

static void MR_CALL 
backend_libs__bytecode_data__string_to_byte_list_2_p_0_1(
  MR_Box backend_libs__bytecode_data__closure_arg,
  MR_Box backend_libs__bytecode_data__wrapper_arg_1,
  MR_Box * backend_libs__bytecode_data__wrapper_arg_2)
{
  {
    MR_Box backend_libs__bytecode_data__closure = backend_libs__bytecode_data__closure_arg;
    MR_Integer backend_libs__bytecode_data__conv0_HeadVar__2_2;

    {
      mercury__char__to_int_2_p_0(((MR_Char) (MR_Word) backend_libs__bytecode_data__wrapper_arg_1), &backend_libs__bytecode_data__conv0_HeadVar__2_2);
    }
    *backend_libs__bytecode_data__wrapper_arg_2 = ((MR_Box) (backend_libs__bytecode_data__conv0_HeadVar__2_2));
  }
}

void MR_CALL 
backend_libs__bytecode_data__string_to_byte_list_2_p_0(
  MR_String backend_libs__bytecode_data__Val_3,
  MR_Word * backend_libs__bytecode_data__List_4)
{
  {
    MR_Word backend_libs__bytecode_data__TypeCtorInfo_18_18;
    MR_Word backend_libs__bytecode_data__Chars_5;
    MR_Word backend_libs__bytecode_data__List0_9;

    {
      mercury__string__to_char_list_2_p_0(backend_libs__bytecode_data__Val_3, &backend_libs__bytecode_data__Chars_5);
    }
    backend_libs__bytecode_data__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__bytecode_data__TypeCtorInfo_18_18, (MR_Word) &backend_libs__bytecode_data_scalar_common_2[0], backend_libs__bytecode_data__Chars_5, &backend_libs__bytecode_data__List0_9);
    }
    {
      mercury__list__append_3_p_1(backend_libs__bytecode_data__TypeCtorInfo_18_18, backend_libs__bytecode_data__List0_9, (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__bytecode_data_scalar_common_3[0]), backend_libs__bytecode_data__List_4);
    }
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

/* :- end_module backend_libs.bytecode_data. */
