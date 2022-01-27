/*
** Automatically generated from `bytecode_data.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin13.1.0.
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




#line 177 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho6_4_p_0(
#line 177 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__NumBytes_6,
#line 177 "bytecode_data.m"
  MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_0_9,
#line 177 "bytecode_data.m"
  MR_Word * backend_libs__bytecode_data__STATE_VARIABLE_IO_10);

#line 190 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho5_5_p_0(
#line 190 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__ByteNum_7,
#line 190 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__IntVal_8,
#line 190 "bytecode_data.m"
  MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_0_13,
#line 190 "bytecode_data.m"
  MR_Word * backend_libs__bytecode_data__STATE_VARIABLE_IO_14);

#line 178 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho4_4_p_0(
#line 178 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__NumBytes_6);

#line 191 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho3_5_p_0(
#line 191 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__ByteNum_7,
#line 191 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__IntVal_8);

#line 221 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__float_to_float64_bytes_9_p_0(
#line 221 "bytecode_data.m"
  MR_Float backend_libs__bytecode_data__FloatVal_1,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B0_2,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B1_3,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B2_4,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B3_5,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B4_6,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B5_7,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B6_8,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B7_9);

#line 130 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__int_to_byte_list_3_p_0(
#line 130 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__Bits_4,
#line 130 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__IntVal_5,
#line 130 "bytecode_data.m"
  MR_Word * backend_libs__bytecode_data__Bytes_6);

#line 125 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__output_int_4_p_0(
#line 125 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__Bits_5,
#line 125 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__IntVal_6);

#line 84 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__string_to_byte_list_2_p_0_1(
#line 84 "bytecode_data.m"
  MR_Box backend_libs__bytecode_data__closure_arg,
#line 84 "bytecode_data.m"
  MR_Box backend_libs__bytecode_data__wrapper_arg_1,
#line 84 "bytecode_data.m"
  MR_Box * backend_libs__bytecode_data__wrapper_arg_2);

#line 74 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__output_string_3_p_0_1(
#line 74 "bytecode_data.m"
  MR_Box backend_libs__bytecode_data__closure_arg,
#line 74 "bytecode_data.m"
  MR_Box backend_libs__bytecode_data__wrapper_arg_1,
#line 74 "bytecode_data.m"
  MR_Box backend_libs__bytecode_data__wrapper_arg_2,
#line 74 "bytecode_data.m"
  MR_Box * backend_libs__bytecode_data__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_1[1][6];

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_2[2][3];

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_3[1][5];

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_4[1][2];




static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_1[1][6] = {
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

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__bytecode_data_scalar_common_1[0])),
    ((MR_Box) (backend_libs__bytecode_data__output_string_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__bytecode_data_scalar_common_3[0])),
    ((MR_Box) (backend_libs__bytecode_data__string_to_byte_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__bytecode_data_scalar_common_4[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "backend_libs.bytecode_data.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"



#line 177 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho6_4_p_0(
#line 177 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__NumBytes_6,
#line 177 "bytecode_data.m"
  MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_0_9,
#line 177 "bytecode_data.m"
  MR_Word * backend_libs__bytecode_data__STATE_VARIABLE_IO_10)
#line 177 "bytecode_data.m"
{
#line 185 "bytecode_data.m"
  while (MR_TRUE)
#line 185 "bytecode_data.m"
    {
#line 185 "bytecode_data.m"
      /* tailcall optimized into a loop */
#line 185 "bytecode_data.m"
      {
#line 185 "bytecode_data.m"
        MR_bool backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__NumBytes_6 > (MR_Integer) 0);

#line 185 "bytecode_data.m"
        if (backend_libs__bytecode_data__succeeded)
#line 182 "bytecode_data.m"
          {
#line 182 "bytecode_data.m"
            MR_Integer backend_libs__bytecode_data__NumBytes1_8;
#line 182 "bytecode_data.m"
            MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_13_13;

#line 133 "bytecode_data.m"
            {
#line 133 "bytecode_data.m"
              mercury__list__cons_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) ((MR_Integer) 0)), backend_libs__bytecode_data__STATE_VARIABLE_IO_0_9, &backend_libs__bytecode_data__STATE_VARIABLE_IO_13_13);
            }
#line 183 "bytecode_data.m"
            backend_libs__bytecode_data__NumBytes1_8 = (backend_libs__bytecode_data__NumBytes_6 - (MR_Integer) 1);
#line 184 "bytecode_data.m"
            /* direct tailcall eliminated */
#line 184 "bytecode_data.m"
            {
#line 184 "bytecode_data.m"
              MR_Integer backend_libs__bytecode_data__NumBytes__tmp_copy_6 = backend_libs__bytecode_data__NumBytes1_8;
#line 184 "bytecode_data.m"
              MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_0__tmp_copy_9 = backend_libs__bytecode_data__STATE_VARIABLE_IO_13_13;

#line 184 "bytecode_data.m"
              backend_libs__bytecode_data__STATE_VARIABLE_IO_0_9 = backend_libs__bytecode_data__STATE_VARIABLE_IO_0__tmp_copy_9;
#line 184 "bytecode_data.m"
              backend_libs__bytecode_data__NumBytes_6 = backend_libs__bytecode_data__NumBytes__tmp_copy_6;
#line 184 "bytecode_data.m"
            }
#line 184 "bytecode_data.m"
            continue;
#line 182 "bytecode_data.m"
          }
#line 185 "bytecode_data.m"
        else
#line 184 "bytecode_data.m"
          *backend_libs__bytecode_data__STATE_VARIABLE_IO_10 = backend_libs__bytecode_data__STATE_VARIABLE_IO_0_9;
#line 185 "bytecode_data.m"
      }
#line 185 "bytecode_data.m"
      break;
#line 185 "bytecode_data.m"
    }
#line 177 "bytecode_data.m"
}

#line 190 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho5_5_p_0(
#line 190 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__ByteNum_7,
#line 190 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__IntVal_8,
#line 190 "bytecode_data.m"
  MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_0_13,
#line 190 "bytecode_data.m"
  MR_Word * backend_libs__bytecode_data__STATE_VARIABLE_IO_14)
#line 190 "bytecode_data.m"
{
#line 200 "bytecode_data.m"
  while (MR_TRUE)
#line 200 "bytecode_data.m"
    {
#line 200 "bytecode_data.m"
      /* tailcall optimized into a loop */
#line 200 "bytecode_data.m"
      {
#line 200 "bytecode_data.m"
        MR_bool backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__ByteNum_7 >= (MR_Integer) 0);

#line 200 "bytecode_data.m"
        if (backend_libs__bytecode_data__succeeded)
#line 195 "bytecode_data.m"
          {
#line 195 "bytecode_data.m"
            MR_Integer backend_libs__bytecode_data__BitShifts_10 = (backend_libs__bytecode_data__ByteNum_7 * (MR_Integer) 8);
#line 195 "bytecode_data.m"
            MR_Integer backend_libs__bytecode_data__Byte_11;
#line 195 "bytecode_data.m"
            MR_Integer backend_libs__bytecode_data__ByteNum1_12;
#line 195 "bytecode_data.m"
            MR_Integer backend_libs__bytecode_data__V_17_17;
#line 195 "bytecode_data.m"
            MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_22_22;

#line 196 "bytecode_data.m"
            {
#line 196 "bytecode_data.m"
              backend_libs__bytecode_data__V_17_17 = mercury__int__f_62_62_2_f_0(backend_libs__bytecode_data__IntVal_8, backend_libs__bytecode_data__BitShifts_10);
            }
#line 196 "bytecode_data.m"
            {
#line 196 "bytecode_data.m"
              backend_libs__bytecode_data__Byte_11 = mercury__int__mod_2_f_0(backend_libs__bytecode_data__V_17_17, (MR_Integer) 256);
            }
#line 197 "bytecode_data.m"
            backend_libs__bytecode_data__ByteNum1_12 = (backend_libs__bytecode_data__ByteNum_7 - (MR_Integer) 1);
#line 133 "bytecode_data.m"
            {
#line 133 "bytecode_data.m"
              mercury__list__cons_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (backend_libs__bytecode_data__Byte_11)), backend_libs__bytecode_data__STATE_VARIABLE_IO_0_13, &backend_libs__bytecode_data__STATE_VARIABLE_IO_22_22);
            }
#line 199 "bytecode_data.m"
            /* direct tailcall eliminated */
#line 199 "bytecode_data.m"
            {
#line 199 "bytecode_data.m"
              MR_Integer backend_libs__bytecode_data__ByteNum__tmp_copy_7 = backend_libs__bytecode_data__ByteNum1_12;
#line 199 "bytecode_data.m"
              MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_0__tmp_copy_13 = backend_libs__bytecode_data__STATE_VARIABLE_IO_22_22;

#line 199 "bytecode_data.m"
              backend_libs__bytecode_data__STATE_VARIABLE_IO_0_13 = backend_libs__bytecode_data__STATE_VARIABLE_IO_0__tmp_copy_13;
#line 199 "bytecode_data.m"
              backend_libs__bytecode_data__ByteNum_7 = backend_libs__bytecode_data__ByteNum__tmp_copy_7;
#line 199 "bytecode_data.m"
            }
#line 199 "bytecode_data.m"
            continue;
#line 195 "bytecode_data.m"
          }
#line 200 "bytecode_data.m"
        else
#line 199 "bytecode_data.m"
          *backend_libs__bytecode_data__STATE_VARIABLE_IO_14 = backend_libs__bytecode_data__STATE_VARIABLE_IO_0_13;
#line 200 "bytecode_data.m"
      }
#line 200 "bytecode_data.m"
      break;
#line 200 "bytecode_data.m"
    }
#line 190 "bytecode_data.m"
}

#line 178 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__output_padding_zeros__ho4_4_p_0(
#line 178 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__NumBytes_6)
#line 178 "bytecode_data.m"
{
#line 185 "bytecode_data.m"
  while (MR_TRUE)
#line 185 "bytecode_data.m"
    {
#line 185 "bytecode_data.m"
      /* tailcall optimized into a loop */
#line 185 "bytecode_data.m"
      {
#line 185 "bytecode_data.m"
        MR_bool backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__NumBytes_6 > (MR_Integer) 0);

#line 185 "bytecode_data.m"
        if (backend_libs__bytecode_data__succeeded)
#line 182 "bytecode_data.m"
          {
#line 182 "bytecode_data.m"
            MR_Integer backend_libs__bytecode_data__NumBytes1_8;

#line 182 "bytecode_data.m"
            {
#line 182 "bytecode_data.m"
              mercury__io__write_byte_3_p_0((MR_Integer) 0);
            }
#line 183 "bytecode_data.m"
            backend_libs__bytecode_data__NumBytes1_8 = (backend_libs__bytecode_data__NumBytes_6 - (MR_Integer) 1);
#line 184 "bytecode_data.m"
            /* direct tailcall eliminated */
#line 184 "bytecode_data.m"
            {
#line 184 "bytecode_data.m"
              MR_Integer backend_libs__bytecode_data__NumBytes__tmp_copy_6 = backend_libs__bytecode_data__NumBytes1_8;

#line 184 "bytecode_data.m"
              backend_libs__bytecode_data__NumBytes_6 = backend_libs__bytecode_data__NumBytes__tmp_copy_6;
#line 184 "bytecode_data.m"
            }
#line 184 "bytecode_data.m"
            continue;
#line 182 "bytecode_data.m"
          }
#line 185 "bytecode_data.m"
        else
#line 184 "bytecode_data.m"
          {
#line 184 "bytecode_data.m"
          }
#line 185 "bytecode_data.m"
      }
#line 185 "bytecode_data.m"
      break;
#line 185 "bytecode_data.m"
    }
#line 178 "bytecode_data.m"
}

#line 191 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__output_int_bytes__ho3_5_p_0(
#line 191 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__ByteNum_7,
#line 191 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__IntVal_8)
#line 191 "bytecode_data.m"
{
#line 200 "bytecode_data.m"
  while (MR_TRUE)
#line 200 "bytecode_data.m"
    {
#line 200 "bytecode_data.m"
      /* tailcall optimized into a loop */
#line 200 "bytecode_data.m"
      {
#line 200 "bytecode_data.m"
        MR_bool backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__ByteNum_7 >= (MR_Integer) 0);

#line 200 "bytecode_data.m"
        if (backend_libs__bytecode_data__succeeded)
#line 195 "bytecode_data.m"
          {
#line 195 "bytecode_data.m"
            MR_Integer backend_libs__bytecode_data__BitShifts_10 = (backend_libs__bytecode_data__ByteNum_7 * (MR_Integer) 8);
#line 195 "bytecode_data.m"
            MR_Integer backend_libs__bytecode_data__Byte_11;
#line 195 "bytecode_data.m"
            MR_Integer backend_libs__bytecode_data__ByteNum1_12;
#line 195 "bytecode_data.m"
            MR_Integer backend_libs__bytecode_data__V_17_17;

#line 196 "bytecode_data.m"
            {
#line 196 "bytecode_data.m"
              backend_libs__bytecode_data__V_17_17 = mercury__int__f_62_62_2_f_0(backend_libs__bytecode_data__IntVal_8, backend_libs__bytecode_data__BitShifts_10);
            }
#line 196 "bytecode_data.m"
            {
#line 196 "bytecode_data.m"
              backend_libs__bytecode_data__Byte_11 = mercury__int__mod_2_f_0(backend_libs__bytecode_data__V_17_17, (MR_Integer) 256);
            }
#line 197 "bytecode_data.m"
            backend_libs__bytecode_data__ByteNum1_12 = (backend_libs__bytecode_data__ByteNum_7 - (MR_Integer) 1);
#line 198 "bytecode_data.m"
            {
#line 198 "bytecode_data.m"
              mercury__io__write_byte_3_p_0(backend_libs__bytecode_data__Byte_11);
            }
#line 199 "bytecode_data.m"
            /* direct tailcall eliminated */
#line 199 "bytecode_data.m"
            {
#line 199 "bytecode_data.m"
              MR_Integer backend_libs__bytecode_data__ByteNum__tmp_copy_7 = backend_libs__bytecode_data__ByteNum1_12;

#line 199 "bytecode_data.m"
              backend_libs__bytecode_data__ByteNum_7 = backend_libs__bytecode_data__ByteNum__tmp_copy_7;
#line 199 "bytecode_data.m"
            }
#line 199 "bytecode_data.m"
            continue;
#line 195 "bytecode_data.m"
          }
#line 200 "bytecode_data.m"
        else
#line 199 "bytecode_data.m"
          {
#line 199 "bytecode_data.m"
          }
#line 200 "bytecode_data.m"
      }
#line 200 "bytecode_data.m"
      break;
#line 200 "bytecode_data.m"
    }
#line 191 "bytecode_data.m"
}

#line 221 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__float_to_float64_bytes_9_p_0(
#line 221 "bytecode_data.m"
  MR_Float backend_libs__bytecode_data__FloatVal_1,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B0_2,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B1_3,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B2_4,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B3_5,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B4_6,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B5_7,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B6_8,
#line 221 "bytecode_data.m"
  MR_Integer * backend_libs__bytecode_data__B7_9)
#line 221 "bytecode_data.m"
{
#line 225 "bytecode_data.m"
  {
#line 225 "bytecode_data.m"
    MR_bool backend_libs__bytecode_data__succeeded;

#line 229 "bytecode_data.m"
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
#line 229 "bytecode_data.m"

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

#line 614 "backend_libs.bytecode_data.c"

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
#line 229 "bytecode_data.m"
}
#line 225 "bytecode_data.m"
  }
#line 221 "bytecode_data.m"
}

#line 130 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__int_to_byte_list_3_p_0(
#line 130 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__Bits_4,
#line 130 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__IntVal_5,
#line 130 "bytecode_data.m"
  MR_Word * backend_libs__bytecode_data__Bytes_6)
#line 130 "bytecode_data.m"
{
#line 132 "bytecode_data.m"
  {
#line 132 "bytecode_data.m"
    MR_bool backend_libs__bytecode_data__succeeded;
#line 132 "bytecode_data.m"
    MR_Word backend_libs__bytecode_data__RevBytes_7;
#line 132 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__IntBits_23;
#line 132 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__ZeroPadBytes_26;
#line 132 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__BytesToDump_27;
#line 132 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__FirstByteToDump_28;
#line 132 "bytecode_data.m"
    MR_Word backend_libs__bytecode_data__STATE_VARIABLE_IO_32_43;
#line 132 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__V_45_45;
#line 143 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__MaxVal_24;
#line 143 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__V_29_29;
#line 143 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__V_30_30;
#line 143 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__V_31_31;

#line 141 "bytecode_data.m"
    {
#line 141 "bytecode_data.m"
      mercury__int__bits_per_int_1_p_0(&backend_libs__bytecode_data__IntBits_23);
    }
#line 143 "bytecode_data.m"
    backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__Bits_4 < backend_libs__bytecode_data__IntBits_23);
#line 143 "bytecode_data.m"
    if (backend_libs__bytecode_data__succeeded)
#line 143 "bytecode_data.m"
      {
#line 144 "bytecode_data.m"
        backend_libs__bytecode_data__V_29_29 = (MR_Integer) 2;
#line 144 "bytecode_data.m"
        backend_libs__bytecode_data__V_31_31 = (MR_Integer) 1;
#line 144 "bytecode_data.m"
        backend_libs__bytecode_data__V_30_30 = (backend_libs__bytecode_data__Bits_4 - backend_libs__bytecode_data__V_31_31);
#line 144 "bytecode_data.m"
        {
#line 144 "bytecode_data.m"
          mercury__int__pow_3_p_0(backend_libs__bytecode_data__V_29_29, backend_libs__bytecode_data__V_30_30, &backend_libs__bytecode_data__MaxVal_24);
        }
#line 145 "bytecode_data.m"
        backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__IntVal_5 >= backend_libs__bytecode_data__MaxVal_24);
#line 146 "bytecode_data.m"
        if (!(backend_libs__bytecode_data__succeeded))
#line 146 "bytecode_data.m"
          {
#line 146 "bytecode_data.m"
            MR_Integer backend_libs__bytecode_data__V_32_32 = ((MR_Integer) 0 - backend_libs__bytecode_data__MaxVal_24);

#line 146 "bytecode_data.m"
            backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__IntVal_5 < backend_libs__bytecode_data__V_32_32);
#line 146 "bytecode_data.m"
          }
#line 143 "bytecode_data.m"
      }
#line 151 "bytecode_data.m"
    if (backend_libs__bytecode_data__succeeded)
#line 149 "bytecode_data.m"
      {
#line 149 "bytecode_data.m"
        MR_String backend_libs__bytecode_data__Msg_25;
#line 149 "bytecode_data.m"
        MR_String backend_libs__bytecode_data__V_50_50;
#line 149 "bytecode_data.m"
        MR_String backend_libs__bytecode_data__V_51_51;
#line 149 "bytecode_data.m"
        MR_String backend_libs__bytecode_data__V_53_53;
#line 149 "bytecode_data.m"
        MR_String backend_libs__bytecode_data__V_54_54;

#line 723 "backend_libs.bytecode_data.c"
        {
#line 725 "backend_libs.bytecode_data.c"
          backend_libs__bytecode_data__V_50_50 = mercury__string__int_to_string_1_f_0(backend_libs__bytecode_data__Bits_4);
        }
#line 728 "backend_libs.bytecode_data.c"
        {
#line 730 "backend_libs.bytecode_data.c"
          backend_libs__bytecode_data__V_51_51 = mercury__string__f_43_43_2_f_0(backend_libs__bytecode_data__V_50_50, (MR_String) " bits");
        }
#line 733 "backend_libs.bytecode_data.c"
        {
#line 735 "backend_libs.bytecode_data.c"
          backend_libs__bytecode_data__V_53_53 = mercury__string__f_43_43_2_f_0((MR_String) " does not fit in ", backend_libs__bytecode_data__V_51_51);
        }
#line 738 "backend_libs.bytecode_data.c"
        {
#line 740 "backend_libs.bytecode_data.c"
          backend_libs__bytecode_data__V_54_54 = mercury__string__int_to_string_1_f_0(backend_libs__bytecode_data__IntVal_5);
        }
#line 743 "backend_libs.bytecode_data.c"
        {
#line 745 "backend_libs.bytecode_data.c"
          backend_libs__bytecode_data__Msg_25 = mercury__string__f_43_43_2_f_0(backend_libs__bytecode_data__V_54_54, backend_libs__bytecode_data__V_53_53);
        }
#line 150 "bytecode_data.m"
        {
#line 150 "bytecode_data.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.bytecode_data", (MR_String) "predicate \140backend_libs.bytecode_data.output_int\'/5", backend_libs__bytecode_data__Msg_25);
#line 150 "bytecode_data.m"
          return;
        }
#line 149 "bytecode_data.m"
      }
#line 151 "bytecode_data.m"
    else
#line 152 "bytecode_data.m"
      {
#line 152 "bytecode_data.m"
      }
#line 154 "bytecode_data.m"
    backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__Bits_4 > backend_libs__bytecode_data__IntBits_23);
#line 156 "bytecode_data.m"
    if (backend_libs__bytecode_data__succeeded)
#line 155 "bytecode_data.m"
      {
#line 155 "bytecode_data.m"
        MR_Integer backend_libs__bytecode_data__V_41_41 = (backend_libs__bytecode_data__Bits_4 - backend_libs__bytecode_data__IntBits_23);

#line 155 "bytecode_data.m"
        {
#line 155 "bytecode_data.m"
          backend_libs__bytecode_data__ZeroPadBytes_26 = mercury__int__f_47_47_2_f_0(backend_libs__bytecode_data__V_41_41, (MR_Integer) 8);
        }
#line 155 "bytecode_data.m"
      }
#line 156 "bytecode_data.m"
    else
#line 157 "bytecode_data.m"
      backend_libs__bytecode_data__ZeroPadBytes_26 = (MR_Integer) 0;
#line 159 "bytecode_data.m"
    {
#line 159 "bytecode_data.m"
      backend_libs__bytecode_data__output_padding_zeros__ho6_4_p_0(backend_libs__bytecode_data__ZeroPadBytes_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__bytecode_data__STATE_VARIABLE_IO_32_43);
    }
#line 160 "bytecode_data.m"
    {
#line 160 "bytecode_data.m"
      backend_libs__bytecode_data__BytesToDump_27 = mercury__int__f_47_47_2_f_0(backend_libs__bytecode_data__Bits_4, (MR_Integer) 8);
    }
#line 161 "bytecode_data.m"
    backend_libs__bytecode_data__V_45_45 = (backend_libs__bytecode_data__BytesToDump_27 - backend_libs__bytecode_data__ZeroPadBytes_26);
#line 161 "bytecode_data.m"
    backend_libs__bytecode_data__FirstByteToDump_28 = (backend_libs__bytecode_data__V_45_45 - (MR_Integer) 1);
#line 162 "bytecode_data.m"
    {
#line 162 "bytecode_data.m"
      backend_libs__bytecode_data__output_int_bytes__ho5_5_p_0(backend_libs__bytecode_data__FirstByteToDump_28, backend_libs__bytecode_data__IntVal_5, backend_libs__bytecode_data__STATE_VARIABLE_IO_32_43, &backend_libs__bytecode_data__RevBytes_7);
    }
#line 134 "bytecode_data.m"
    {
#line 134 "bytecode_data.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__bytecode_data__RevBytes_7, backend_libs__bytecode_data__Bytes_6);
#line 134 "bytecode_data.m"
      return;
    }
#line 132 "bytecode_data.m"
  }
#line 130 "bytecode_data.m"
}

#line 125 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__output_int_4_p_0(
#line 125 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__Bits_5,
#line 125 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__IntVal_6)
#line 125 "bytecode_data.m"
{
#line 127 "bytecode_data.m"
  {
#line 127 "bytecode_data.m"
    MR_bool backend_libs__bytecode_data__succeeded;
#line 127 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__IntBits_23;
#line 127 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__ZeroPadBytes_26;
#line 127 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__BytesToDump_27;
#line 127 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__FirstByteToDump_28;
#line 127 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__V_45_45;
#line 143 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__MaxVal_24;
#line 143 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__V_29_29;
#line 143 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__V_30_30;
#line 143 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__V_31_31;

#line 141 "bytecode_data.m"
    {
#line 141 "bytecode_data.m"
      mercury__int__bits_per_int_1_p_0(&backend_libs__bytecode_data__IntBits_23);
    }
#line 143 "bytecode_data.m"
    backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__Bits_5 < backend_libs__bytecode_data__IntBits_23);
#line 143 "bytecode_data.m"
    if (backend_libs__bytecode_data__succeeded)
#line 143 "bytecode_data.m"
      {
#line 144 "bytecode_data.m"
        backend_libs__bytecode_data__V_29_29 = (MR_Integer) 2;
#line 144 "bytecode_data.m"
        backend_libs__bytecode_data__V_31_31 = (MR_Integer) 1;
#line 144 "bytecode_data.m"
        backend_libs__bytecode_data__V_30_30 = (backend_libs__bytecode_data__Bits_5 - backend_libs__bytecode_data__V_31_31);
#line 144 "bytecode_data.m"
        {
#line 144 "bytecode_data.m"
          mercury__int__pow_3_p_0(backend_libs__bytecode_data__V_29_29, backend_libs__bytecode_data__V_30_30, &backend_libs__bytecode_data__MaxVal_24);
        }
#line 145 "bytecode_data.m"
        backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__IntVal_6 >= backend_libs__bytecode_data__MaxVal_24);
#line 146 "bytecode_data.m"
        if (!(backend_libs__bytecode_data__succeeded))
#line 146 "bytecode_data.m"
          {
#line 146 "bytecode_data.m"
            MR_Integer backend_libs__bytecode_data__V_32_32 = ((MR_Integer) 0 - backend_libs__bytecode_data__MaxVal_24);

#line 146 "bytecode_data.m"
            backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__IntVal_6 < backend_libs__bytecode_data__V_32_32);
#line 146 "bytecode_data.m"
          }
#line 143 "bytecode_data.m"
      }
#line 151 "bytecode_data.m"
    if (backend_libs__bytecode_data__succeeded)
#line 149 "bytecode_data.m"
      {
#line 149 "bytecode_data.m"
        MR_String backend_libs__bytecode_data__Msg_25;
#line 149 "bytecode_data.m"
        MR_Word backend_libs__bytecode_data__V_34_34;
#line 149 "bytecode_data.m"
        MR_Word backend_libs__bytecode_data__V_35_35;
#line 149 "bytecode_data.m"
        MR_Word backend_libs__bytecode_data__V_36_36;
#line 149 "bytecode_data.m"
        MR_Word backend_libs__bytecode_data__V_37_37;

#line 149 "bytecode_data.m"
        {
#line 149 "bytecode_data.m"
          backend_libs__bytecode_data__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 149 "bytecode_data.m"
          MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_35_35, 0) = ((MR_Box) (backend_libs__bytecode_data__IntVal_6));
#line 149 "bytecode_data.m"
        }
#line 149 "bytecode_data.m"
        {
#line 149 "bytecode_data.m"
          backend_libs__bytecode_data__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 149 "bytecode_data.m"
          MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_37_37, 0) = ((MR_Box) (backend_libs__bytecode_data__Bits_5));
#line 149 "bytecode_data.m"
        }
#line 149 "bytecode_data.m"
        {
#line 149 "bytecode_data.m"
          backend_libs__bytecode_data__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "bytecode_data.m"
          MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_36_36, 0) = ((MR_Box) (backend_libs__bytecode_data__V_37_37));
#line 149 "bytecode_data.m"
          MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 149 "bytecode_data.m"
        }
#line 149 "bytecode_data.m"
        {
#line 149 "bytecode_data.m"
          backend_libs__bytecode_data__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "bytecode_data.m"
          MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_34_34, 0) = ((MR_Box) (backend_libs__bytecode_data__V_35_35));
#line 149 "bytecode_data.m"
          MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_34_34, 1) = ((MR_Box) (backend_libs__bytecode_data__V_36_36));
#line 149 "bytecode_data.m"
        }
#line 149 "bytecode_data.m"
        {
#line 149 "bytecode_data.m"
          mercury__string__format_3_p_0((MR_String) "%d does not fit in %d bits", backend_libs__bytecode_data__V_34_34, &backend_libs__bytecode_data__Msg_25);
        }
#line 150 "bytecode_data.m"
        {
#line 150 "bytecode_data.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.bytecode_data", (MR_String) "predicate \140backend_libs.bytecode_data.output_int\'/5", backend_libs__bytecode_data__Msg_25);
#line 150 "bytecode_data.m"
          return;
        }
#line 149 "bytecode_data.m"
      }
#line 151 "bytecode_data.m"
    else
#line 152 "bytecode_data.m"
      {
#line 152 "bytecode_data.m"
      }
#line 154 "bytecode_data.m"
    backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__Bits_5 > backend_libs__bytecode_data__IntBits_23);
#line 156 "bytecode_data.m"
    if (backend_libs__bytecode_data__succeeded)
#line 155 "bytecode_data.m"
      {
#line 155 "bytecode_data.m"
        MR_Integer backend_libs__bytecode_data__V_41_41 = (backend_libs__bytecode_data__Bits_5 - backend_libs__bytecode_data__IntBits_23);

#line 155 "bytecode_data.m"
        {
#line 155 "bytecode_data.m"
          backend_libs__bytecode_data__ZeroPadBytes_26 = mercury__int__f_47_47_2_f_0(backend_libs__bytecode_data__V_41_41, (MR_Integer) 8);
        }
#line 155 "bytecode_data.m"
      }
#line 156 "bytecode_data.m"
    else
#line 157 "bytecode_data.m"
      backend_libs__bytecode_data__ZeroPadBytes_26 = (MR_Integer) 0;
#line 159 "bytecode_data.m"
    {
#line 159 "bytecode_data.m"
      backend_libs__bytecode_data__output_padding_zeros__ho4_4_p_0(backend_libs__bytecode_data__ZeroPadBytes_26);
    }
#line 160 "bytecode_data.m"
    {
#line 160 "bytecode_data.m"
      backend_libs__bytecode_data__BytesToDump_27 = mercury__int__f_47_47_2_f_0(backend_libs__bytecode_data__Bits_5, (MR_Integer) 8);
    }
#line 161 "bytecode_data.m"
    backend_libs__bytecode_data__V_45_45 = (backend_libs__bytecode_data__BytesToDump_27 - backend_libs__bytecode_data__ZeroPadBytes_26);
#line 161 "bytecode_data.m"
    backend_libs__bytecode_data__FirstByteToDump_28 = (backend_libs__bytecode_data__V_45_45 - (MR_Integer) 1);
#line 162 "bytecode_data.m"
    {
#line 162 "bytecode_data.m"
      backend_libs__bytecode_data__output_int_bytes__ho3_5_p_0(backend_libs__bytecode_data__FirstByteToDump_28, backend_libs__bytecode_data__IntVal_6);
#line 162 "bytecode_data.m"
      return;
    }
#line 127 "bytecode_data.m"
  }
#line 125 "bytecode_data.m"
}

#line 58 "bytecode_data.m"
void MR_CALL 
backend_libs__bytecode_data__float_to_byte_list_2_p_0(
#line 58 "bytecode_data.m"
  MR_Float backend_libs__bytecode_data__Val_3,
#line 58 "bytecode_data.m"
  MR_Word * backend_libs__bytecode_data__HeadVar__2_2)
#line 58 "bytecode_data.m"
{
#line 215 "bytecode_data.m"
  {
#line 215 "bytecode_data.m"
    MR_bool backend_libs__bytecode_data__succeeded;
#line 215 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B0_4;
#line 215 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B1_5;
#line 215 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B2_6;
#line 215 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B3_7;
#line 215 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B4_8;
#line 215 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B5_9;
#line 215 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B6_10;
#line 215 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B7_11;
#line 215 "bytecode_data.m"
    MR_Word backend_libs__bytecode_data__V_12_12;
#line 215 "bytecode_data.m"
    MR_Word backend_libs__bytecode_data__V_13_13;
#line 215 "bytecode_data.m"
    MR_Word backend_libs__bytecode_data__V_14_14;
#line 215 "bytecode_data.m"
    MR_Word backend_libs__bytecode_data__V_15_15;
#line 215 "bytecode_data.m"
    MR_Word backend_libs__bytecode_data__V_16_16;
#line 215 "bytecode_data.m"
    MR_Word backend_libs__bytecode_data__V_17_17;
#line 215 "bytecode_data.m"
    MR_Word backend_libs__bytecode_data__V_18_18;

#line 229 "bytecode_data.m"
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
#line 229 "bytecode_data.m"

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

#line 1092 "backend_libs.bytecode_data.c"

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
#line 229 "bytecode_data.m"
}
#line 215 "bytecode_data.m"
    {
#line 215 "bytecode_data.m"
      backend_libs__bytecode_data__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_18_18, 0) = ((MR_Box) (backend_libs__bytecode_data__B7_11));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "bytecode_data.m"
    }
#line 215 "bytecode_data.m"
    {
#line 215 "bytecode_data.m"
      backend_libs__bytecode_data__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_17_17, 0) = ((MR_Box) (backend_libs__bytecode_data__B6_10));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_17_17, 1) = ((MR_Box) (backend_libs__bytecode_data__V_18_18));
#line 215 "bytecode_data.m"
    }
#line 215 "bytecode_data.m"
    {
#line 215 "bytecode_data.m"
      backend_libs__bytecode_data__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_16_16, 0) = ((MR_Box) (backend_libs__bytecode_data__B5_9));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_16_16, 1) = ((MR_Box) (backend_libs__bytecode_data__V_17_17));
#line 215 "bytecode_data.m"
    }
#line 215 "bytecode_data.m"
    {
#line 215 "bytecode_data.m"
      backend_libs__bytecode_data__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_15_15, 0) = ((MR_Box) (backend_libs__bytecode_data__B4_8));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_15_15, 1) = ((MR_Box) (backend_libs__bytecode_data__V_16_16));
#line 215 "bytecode_data.m"
    }
#line 215 "bytecode_data.m"
    {
#line 215 "bytecode_data.m"
      backend_libs__bytecode_data__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_14_14, 0) = ((MR_Box) (backend_libs__bytecode_data__B3_7));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_14_14, 1) = ((MR_Box) (backend_libs__bytecode_data__V_15_15));
#line 215 "bytecode_data.m"
    }
#line 215 "bytecode_data.m"
    {
#line 215 "bytecode_data.m"
      backend_libs__bytecode_data__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_13_13, 0) = ((MR_Box) (backend_libs__bytecode_data__B2_6));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_13_13, 1) = ((MR_Box) (backend_libs__bytecode_data__V_14_14));
#line 215 "bytecode_data.m"
    }
#line 215 "bytecode_data.m"
    {
#line 215 "bytecode_data.m"
      backend_libs__bytecode_data__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_12_12, 0) = ((MR_Box) (backend_libs__bytecode_data__B1_5));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), backend_libs__bytecode_data__V_12_12, 1) = ((MR_Box) (backend_libs__bytecode_data__V_13_13));
#line 215 "bytecode_data.m"
    }
#line 215 "bytecode_data.m"
    {
#line 215 "bytecode_data.m"
      MR_Word base;
#line 215 "bytecode_data.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "bytecode_data.m"
      *backend_libs__bytecode_data__HeadVar__2_2 = base;
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__bytecode_data__B0_4));
#line 215 "bytecode_data.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__bytecode_data__V_12_12));
#line 215 "bytecode_data.m"
    }
#line 215 "bytecode_data.m"
  }
#line 58 "bytecode_data.m"
}

#line 57 "bytecode_data.m"
void MR_CALL 
backend_libs__bytecode_data__output_float_3_p_0(
#line 57 "bytecode_data.m"
  MR_Float backend_libs__bytecode_data__Val_4)
#line 57 "bytecode_data.m"
{
#line 204 "bytecode_data.m"
  {
#line 204 "bytecode_data.m"
    MR_bool backend_libs__bytecode_data__succeeded;
#line 204 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B0_6;
#line 204 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B1_7;
#line 204 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B2_8;
#line 204 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B3_9;
#line 204 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B4_10;
#line 204 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B5_11;
#line 204 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B6_12;
#line 204 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__B7_13;

#line 229 "bytecode_data.m"
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
#line 229 "bytecode_data.m"

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

#line 1271 "backend_libs.bytecode_data.c"

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
#line 229 "bytecode_data.m"
}
#line 206 "bytecode_data.m"
    {
#line 206 "bytecode_data.m"
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B0_6);
    }
#line 207 "bytecode_data.m"
    {
#line 207 "bytecode_data.m"
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B1_7);
    }
#line 208 "bytecode_data.m"
    {
#line 208 "bytecode_data.m"
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B2_8);
    }
#line 209 "bytecode_data.m"
    {
#line 209 "bytecode_data.m"
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B3_9);
    }
#line 210 "bytecode_data.m"
    {
#line 210 "bytecode_data.m"
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B4_10);
    }
#line 211 "bytecode_data.m"
    {
#line 211 "bytecode_data.m"
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B5_11);
    }
#line 212 "bytecode_data.m"
    {
#line 212 "bytecode_data.m"
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B6_12);
    }
#line 213 "bytecode_data.m"
    {
#line 213 "bytecode_data.m"
      backend_libs__bytecode_data__output_byte_3_p_0(backend_libs__bytecode_data__B7_13);
#line 213 "bytecode_data.m"
      return;
    }
#line 204 "bytecode_data.m"
  }
#line 57 "bytecode_data.m"
}

#line 50 "bytecode_data.m"
void MR_CALL 
backend_libs__bytecode_data__short_to_byte_list_2_p_0(
#line 50 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__Val_3,
#line 50 "bytecode_data.m"
  MR_Word * backend_libs__bytecode_data__Bytes_4)
#line 50 "bytecode_data.m"
{
#line 98 "bytecode_data.m"
  {
#line 98 "bytecode_data.m"
    MR_bool backend_libs__bytecode_data__succeeded;

#line 99 "bytecode_data.m"
    {
#line 99 "bytecode_data.m"
      backend_libs__bytecode_data__int_to_byte_list_3_p_0((MR_Integer) 16, backend_libs__bytecode_data__Val_3, backend_libs__bytecode_data__Bytes_4);
#line 99 "bytecode_data.m"
      return;
    }
#line 98 "bytecode_data.m"
  }
#line 50 "bytecode_data.m"
}

#line 49 "bytecode_data.m"
void MR_CALL 
backend_libs__bytecode_data__output_short_3_p_0(
#line 49 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__Val_4)
#line 49 "bytecode_data.m"
{
#line 95 "bytecode_data.m"
  {
#line 95 "bytecode_data.m"
    MR_bool backend_libs__bytecode_data__succeeded;

#line 96 "bytecode_data.m"
    {
#line 96 "bytecode_data.m"
      backend_libs__bytecode_data__output_int_4_p_0((MR_Integer) 16, backend_libs__bytecode_data__Val_4);
#line 96 "bytecode_data.m"
      return;
    }
#line 95 "bytecode_data.m"
  }
#line 49 "bytecode_data.m"
}

#line 42 "bytecode_data.m"
void MR_CALL 
backend_libs__bytecode_data__int32_to_byte_list_2_p_0(
#line 42 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__IntVal_3,
#line 42 "bytecode_data.m"
  MR_Word * backend_libs__bytecode_data__List_4)
#line 42 "bytecode_data.m"
{
#line 104 "bytecode_data.m"
  {
#line 104 "bytecode_data.m"
    MR_bool backend_libs__bytecode_data__succeeded;

#line 105 "bytecode_data.m"
    {
#line 105 "bytecode_data.m"
      backend_libs__bytecode_data__int_to_byte_list_3_p_0((MR_Integer) 32, backend_libs__bytecode_data__IntVal_3, backend_libs__bytecode_data__List_4);
#line 105 "bytecode_data.m"
      return;
    }
#line 104 "bytecode_data.m"
  }
#line 42 "bytecode_data.m"
}

#line 41 "bytecode_data.m"
void MR_CALL 
backend_libs__bytecode_data__output_int32_3_p_0(
#line 41 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__IntVal_4)
#line 41 "bytecode_data.m"
{
#line 101 "bytecode_data.m"
  {
#line 101 "bytecode_data.m"
    MR_bool backend_libs__bytecode_data__succeeded;

#line 102 "bytecode_data.m"
    {
#line 102 "bytecode_data.m"
      backend_libs__bytecode_data__output_int_4_p_0((MR_Integer) 32, backend_libs__bytecode_data__IntVal_4);
#line 102 "bytecode_data.m"
      return;
    }
#line 101 "bytecode_data.m"
  }
#line 41 "bytecode_data.m"
}

#line 37 "bytecode_data.m"
void MR_CALL 
backend_libs__bytecode_data__int_to_byte_list_2_p_0(
#line 37 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__IntVal_3,
#line 37 "bytecode_data.m"
  MR_Word * backend_libs__bytecode_data__Bytes_4)
#line 37 "bytecode_data.m"
{
#line 116 "bytecode_data.m"
  {
#line 116 "bytecode_data.m"
    MR_bool backend_libs__bytecode_data__succeeded;
#line 116 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__IntBits_5;

#line 117 "bytecode_data.m"
    {
#line 117 "bytecode_data.m"
      mercury__int__bits_per_int_1_p_0(&backend_libs__bytecode_data__IntBits_5);
    }
#line 118 "bytecode_data.m"
    backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__IntBits_5 > (MR_Integer) 64);
#line 121 "bytecode_data.m"
    if (backend_libs__bytecode_data__succeeded)
#line 119 "bytecode_data.m"
      {
#line 119 "bytecode_data.m"
        {
#line 119 "bytecode_data.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.bytecode_data", (MR_String) "predicate \140backend_libs.bytecode_data.int_to_byte_list\'/2", (MR_String) "size of int is larger than size of bytecode integer.");
#line 119 "bytecode_data.m"
          return;
        }
#line 119 "bytecode_data.m"
      }
#line 121 "bytecode_data.m"
    else
#line 122 "bytecode_data.m"
      {
#line 122 "bytecode_data.m"
        {
#line 122 "bytecode_data.m"
          backend_libs__bytecode_data__int_to_byte_list_3_p_0((MR_Integer) 64, backend_libs__bytecode_data__IntVal_3, backend_libs__bytecode_data__Bytes_4);
#line 122 "bytecode_data.m"
          return;
        }
#line 122 "bytecode_data.m"
      }
#line 116 "bytecode_data.m"
  }
#line 37 "bytecode_data.m"
}

#line 36 "bytecode_data.m"
void MR_CALL 
backend_libs__bytecode_data__output_int_3_p_0(
#line 36 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__IntVal_4)
#line 36 "bytecode_data.m"
{
#line 107 "bytecode_data.m"
  {
#line 107 "bytecode_data.m"
    MR_bool backend_libs__bytecode_data__succeeded;
#line 107 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__IntBits_6;

#line 108 "bytecode_data.m"
    {
#line 108 "bytecode_data.m"
      mercury__int__bits_per_int_1_p_0(&backend_libs__bytecode_data__IntBits_6);
    }
#line 109 "bytecode_data.m"
    backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__IntBits_6 > (MR_Integer) 64);
#line 112 "bytecode_data.m"
    if (backend_libs__bytecode_data__succeeded)
#line 110 "bytecode_data.m"
      {
#line 110 "bytecode_data.m"
        {
#line 110 "bytecode_data.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.bytecode_data", (MR_String) "predicate \140backend_libs.bytecode_data.output_int\'/3", (MR_String) "size of int is larger than size of bytecode integer.");
#line 110 "bytecode_data.m"
          return;
        }
#line 110 "bytecode_data.m"
      }
#line 112 "bytecode_data.m"
    else
#line 113 "bytecode_data.m"
      {
#line 113 "bytecode_data.m"
        {
#line 113 "bytecode_data.m"
          backend_libs__bytecode_data__output_int_4_p_0((MR_Integer) 64, backend_libs__bytecode_data__IntVal_4);
#line 113 "bytecode_data.m"
          return;
        }
#line 113 "bytecode_data.m"
      }
#line 107 "bytecode_data.m"
  }
#line 36 "bytecode_data.m"
}

#line 29 "bytecode_data.m"
void MR_CALL 
backend_libs__bytecode_data__output_byte_3_p_0(
#line 29 "bytecode_data.m"
  MR_Integer backend_libs__bytecode_data__Val_4)
#line 29 "bytecode_data.m"
{
#line 91 "bytecode_data.m"
  {
#line 91 "bytecode_data.m"
    MR_bool backend_libs__bytecode_data__succeeded = (backend_libs__bytecode_data__Val_4 < (MR_Integer) 256);

#line 91 "bytecode_data.m"
    if (backend_libs__bytecode_data__succeeded)
#line 90 "bytecode_data.m"
      {
#line 90 "bytecode_data.m"
        mercury__io__write_byte_3_p_0(backend_libs__bytecode_data__Val_4);
#line 90 "bytecode_data.m"
        return;
      }
#line 91 "bytecode_data.m"
    else
#line 92 "bytecode_data.m"
      {
#line 92 "bytecode_data.m"
        {
#line 92 "bytecode_data.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.bytecode_data", (MR_String) "predicate \140backend_libs.bytecode_data.output_byte\'/3", (MR_String) "byte does not fit in eight bits");
#line 92 "bytecode_data.m"
          return;
        }
#line 92 "bytecode_data.m"
      }
#line 91 "bytecode_data.m"
  }
#line 29 "bytecode_data.m"
}

#line 84 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__string_to_byte_list_2_p_0_1(
#line 84 "bytecode_data.m"
  MR_Box backend_libs__bytecode_data__closure_arg,
#line 84 "bytecode_data.m"
  MR_Box backend_libs__bytecode_data__wrapper_arg_1,
#line 84 "bytecode_data.m"
  MR_Box * backend_libs__bytecode_data__wrapper_arg_2)
#line 84 "bytecode_data.m"
{
#line 84 "bytecode_data.m"
  {
#line 84 "bytecode_data.m"
    MR_Box backend_libs__bytecode_data__closure = backend_libs__bytecode_data__closure_arg;
#line 84 "bytecode_data.m"
    MR_Integer backend_libs__bytecode_data__conv0_HeadVar__2_2;

#line 84 "bytecode_data.m"
    {
#line 84 "bytecode_data.m"
      mercury__char__to_int_2_p_0(((MR_Char) (MR_Word) backend_libs__bytecode_data__wrapper_arg_1), &backend_libs__bytecode_data__conv0_HeadVar__2_2);
    }
#line 84 "bytecode_data.m"
    *backend_libs__bytecode_data__wrapper_arg_2 = ((MR_Box) (backend_libs__bytecode_data__conv0_HeadVar__2_2));
#line 84 "bytecode_data.m"
  }
#line 84 "bytecode_data.m"
}

#line 27 "bytecode_data.m"
void MR_CALL 
backend_libs__bytecode_data__string_to_byte_list_2_p_0(
#line 27 "bytecode_data.m"
  MR_String backend_libs__bytecode_data__Val_3,
#line 27 "bytecode_data.m"
  MR_Word * backend_libs__bytecode_data__List_4)
#line 27 "bytecode_data.m"
{
#line 77 "bytecode_data.m"
  {
#line 77 "bytecode_data.m"
    MR_bool backend_libs__bytecode_data__succeeded;
#line 77 "bytecode_data.m"
    MR_Word backend_libs__bytecode_data__TypeCtorInfo_18_18;
#line 77 "bytecode_data.m"
    MR_Word backend_libs__bytecode_data__Chars_5;
#line 77 "bytecode_data.m"
    MR_Word backend_libs__bytecode_data__List0_9;

#line 83 "bytecode_data.m"
    {
#line 83 "bytecode_data.m"
      mercury__string__to_char_list_2_p_0(backend_libs__bytecode_data__Val_3, &backend_libs__bytecode_data__Chars_5);
    }
#line 1632 "backend_libs.bytecode_data.c"
    backend_libs__bytecode_data__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 85 "bytecode_data.m"
    {
#line 85 "bytecode_data.m"
      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__bytecode_data__TypeCtorInfo_18_18, (MR_Word) &backend_libs__bytecode_data_scalar_common_2[1], backend_libs__bytecode_data__Chars_5, &backend_libs__bytecode_data__List0_9);
    }
#line 86 "bytecode_data.m"
    {
#line 86 "bytecode_data.m"
      mercury__list__append_3_p_1(backend_libs__bytecode_data__TypeCtorInfo_18_18, backend_libs__bytecode_data__List0_9, (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__bytecode_data_scalar_common_4[0]), backend_libs__bytecode_data__List_4);
#line 86 "bytecode_data.m"
      return;
    }
#line 77 "bytecode_data.m"
  }
#line 27 "bytecode_data.m"
}

#line 74 "bytecode_data.m"
static void MR_CALL 
backend_libs__bytecode_data__output_string_3_p_0_1(
#line 74 "bytecode_data.m"
  MR_Box backend_libs__bytecode_data__closure_arg,
#line 74 "bytecode_data.m"
  MR_Box backend_libs__bytecode_data__wrapper_arg_1,
#line 74 "bytecode_data.m"
  MR_Box backend_libs__bytecode_data__wrapper_arg_2,
#line 74 "bytecode_data.m"
  MR_Box * backend_libs__bytecode_data__wrapper_arg_3)
#line 74 "bytecode_data.m"
{
#line 74 "bytecode_data.m"
  {
#line 74 "bytecode_data.m"
    MR_Box backend_libs__bytecode_data__closure = backend_libs__bytecode_data__closure_arg;

#line 74 "bytecode_data.m"
    {
#line 74 "bytecode_data.m"
      mercury__io__write_byte_3_p_0(((MR_Integer) backend_libs__bytecode_data__wrapper_arg_1));
#line 74 "bytecode_data.m"
      return;
    }
#line 74 "bytecode_data.m"
  }
#line 74 "bytecode_data.m"
}

#line 26 "bytecode_data.m"
void MR_CALL 
backend_libs__bytecode_data__output_string_3_p_0(
#line 26 "bytecode_data.m"
  MR_String backend_libs__bytecode_data__Val_4)
#line 26 "bytecode_data.m"
{
#line 72 "bytecode_data.m"
  {
#line 72 "bytecode_data.m"
    MR_bool backend_libs__bytecode_data__succeeded;
#line 72 "bytecode_data.m"
    MR_Word backend_libs__bytecode_data__List_6;
#line 74 "bytecode_data.m"
    MR_Box backend_libs__bytecode_data__conv0_STATE_VARIABLE_IO_10_10;

#line 73 "bytecode_data.m"
    {
#line 73 "bytecode_data.m"
      backend_libs__bytecode_data__string_to_byte_list_2_p_0(backend_libs__bytecode_data__Val_4, &backend_libs__bytecode_data__List_6);
    }
#line 74 "bytecode_data.m"
    {
#line 74 "bytecode_data.m"
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &backend_libs__bytecode_data_scalar_common_2[0], backend_libs__bytecode_data__List_6, ((MR_Box) ((MR_Integer) 0)), &backend_libs__bytecode_data__conv0_STATE_VARIABLE_IO_10_10);
    }
#line 75 "bytecode_data.m"
    {
#line 75 "bytecode_data.m"
      mercury__io__write_byte_3_p_0((MR_Integer) 0);
#line 75 "bytecode_data.m"
      return;
    }
#line 72 "bytecode_data.m"
  }
#line 26 "bytecode_data.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.bytecode_data. */
