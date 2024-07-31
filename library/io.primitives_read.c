/*
** Automatically generated from `io.primitives_read.m'
** by the Mercury compiler,
** version rotd-2024-07-31
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


// :- module io.primitives_read.
// :- implementation.

/*
INIT mercury__io__primitives_read__init
ENDINIT
*/

#include "io.primitives_read.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
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
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"





static /* final */ const MR_Box mercury__io__primitives_read_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__io__primitives_read_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__io__primitives_read_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__io__primitives_read_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__primitives_read_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__primitives_read_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__primitives_read_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__primitives_read_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
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
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"
#line 855 "io.primitives_read.m"

int
mercury_get_byte(MercuryFilePtr mf)
{
    int c = MR_GETCH(*mf);
    if (c == '\n') {
        MR_line_number(*mf)++;
    }
    return c;
}



void MR_CALL 
mercury__io__primitives_read__read_byte_val_2_6_p_0(
  MR_Box Stream_1,
  MR_Word * ResultCode_2,
  MR_Box * Error_3,
  MR_Integer * ByteVal_4)
{
{
#define MR_PROC_LABEL mercury__io__primitives_read__read_byte_val_2_6_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_1 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*ResultCode_2  = ResultCode;
	*Error_3  = (MR_Box) Error;
	*ByteVal_4  = ByteVal;
}
}

void MR_CALL 
mercury__io__primitives_read__do_read_binary_uint64_8_p_0(
  MR_Box Stream_1,
  MR_Word ByteOrder_2,
  MR_Word * ResultCode_3,
  MR_Box * Error_4,
  MR_Word * IncompleteBytes_5,
  uint64_t * UInt64_6)
{
{
#define MR_PROC_LABEL mercury__io__primitives_read__do_read_binary_uint64_8_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint64_t UInt64;

	Stream = (MercuryFilePtr)Stream_1 ;
	ByteOrder = ByteOrder_2 ;
		{

    ML_do_read_binary_uintN(8, 64, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt64);


		;}
#undef MR_PROC_LABEL
	*ResultCode_3  = ResultCode;
	*Error_4  = (MR_Box) Error;
	*IncompleteBytes_5  = IncompleteBytes;
	*UInt64_6  = UInt64;
}
}

void MR_CALL 
mercury__io__primitives_read__do_read_binary_uint32_8_p_0(
  MR_Box Stream_1,
  MR_Word ByteOrder_2,
  MR_Word * ResultCode_3,
  MR_Box * Error_4,
  MR_Word * IncompleteBytes_5,
  uint32_t * UInt32_6)
{
{
#define MR_PROC_LABEL mercury__io__primitives_read__do_read_binary_uint32_8_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint32_t UInt32;

	Stream = (MercuryFilePtr)Stream_1 ;
	ByteOrder = ByteOrder_2 ;
		{

    ML_do_read_binary_uintN(4, 32, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt32);


		;}
#undef MR_PROC_LABEL
	*ResultCode_3  = ResultCode;
	*Error_4  = (MR_Box) Error;
	*IncompleteBytes_5  = IncompleteBytes;
	*UInt32_6  = UInt32;
}
}

void MR_CALL 
mercury__io__primitives_read__do_read_binary_uint16_8_p_0(
  MR_Box Stream_1,
  MR_Word ByteOrder_2,
  MR_Word * ResultCode_3,
  MR_Box * Error_4,
  MR_Word * IncompleteBytes_5,
  uint16_t * UInt16_6)
{
{
#define MR_PROC_LABEL mercury__io__primitives_read__do_read_binary_uint16_8_p_0

	MercuryFilePtr Stream;
	MR_Word ByteOrder;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Word IncompleteBytes;
	uint16_t UInt16;

	Stream = (MercuryFilePtr)Stream_1 ;
	ByteOrder = ByteOrder_2 ;
		{

    ML_do_read_binary_uintN(2, 16, Stream, ByteOrder, ResultCode, Error,
        IncompleteBytes, UInt16);


		;}
#undef MR_PROC_LABEL
	*ResultCode_3  = ResultCode;
	*Error_4  = (MR_Box) Error;
	*IncompleteBytes_5  = IncompleteBytes;
	*UInt16_6  = UInt16;
}
}

void MR_CALL 
mercury__io__primitives_read__putback_uint8_2_5_p_0(
  MR_Box Stream_1,
  uint8_t UInt8_2,
  MR_Word * Ok_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_read__putback_uint8_2_5_p_0

	MercuryFilePtr Stream;
	uint8_t UInt8;
	MR_Word Ok;

	Stream = (MercuryFilePtr)Stream_1 ;
	UInt8 = UInt8_2 ;
		{

    MercuryFilePtr mf = Stream;
    if (MR_UNGETCH(*mf, UInt8) == EOF) {
        Ok = MR_FALSE;
    } else {
        Ok = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	*Ok_3  = Ok;
}
}

void MR_CALL 
mercury__io__primitives_read__read_byte_val_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_8,
  MR_Box * Error_9,
  MR_Integer * ByteVal_10)
{
  MR_Box Stream_7 = (MR_Box) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__io__primitives_read__read_byte_val_6_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Integer ByteVal;

	Stream = (MercuryFilePtr)Stream_7 ;
		{

    int b = mercury_get_byte(Stream);
    if (b == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
        }
        ByteVal = 0;
    } else {
        ResultCode = ML_RESULT_CODE_OK;
        ByteVal = b;
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Result_8  = ResultCode;
	*Error_9  = (MR_Box) Error;
	*ByteVal_10  = ByteVal;
}
}

void MR_CALL 
mercury__io__primitives_read__putback_char_2_5_p_0(
  MR_Box Stream_1,
  MR_Char Character_2,
  MR_Word * Ok_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_read__putback_char_2_5_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Word Ok;

	Stream = (MercuryFilePtr)Stream_1 ;
	Character = Character_2 ;
		{

    MercuryFilePtr mf = Stream;
    Ok = MR_TRUE;
    if (Character <= 0x7f) {
        if (MR_UNGETCH(*mf, Character) == EOF) {
            Ok = MR_FALSE;
        } else {
            if (Character == '\n') {
                MR_line_number(*mf)--;
            }
        }
    } else {
        // This requires multiple pushback in the underlying C library.
        char        buf[5];
        ML_ssize_t  len;
        len = MR_utf8_encode(buf, Character);
        // XXX ILSEQ Error if len==0
        for (; len > 0; len--) {
            if (MR_UNGETCH(*mf, buf[len - 1]) == EOF) {
                Ok = MR_FALSE;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	*Ok_3  = Ok;
}
}

void MR_CALL 
mercury__io__primitives_read__read_char_code_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ResultCode_8,
  MR_Box * Error_9,
  MR_Char * Char_10)
{
  MR_Box Stream_7 = (MR_Box) (HeadVar__1_1);

  mercury__io__primitives_read__read_char_code_2_6_p_0(Stream_7, ResultCode_8, Error_9, Char_10);
}

void MR_CALL 
mercury__io__primitives_read__read_char_code_2_6_p_0(
  MR_Box Stream_1,
  MR_Word * ResultCode_2,
  MR_Box * Error_3,
  MR_Char * Char_4)
{
{
#define MR_PROC_LABEL mercury__io__primitives_read__read_char_code_2_6_p_0

	MercuryFilePtr Stream;
	MR_Word ResultCode;
	MR_Integer Error;
	MR_Char Char;

	Stream = (MercuryFilePtr)Stream_1 ;
		{

    char    buf[5];
    int     nbytes;
    int     i;
    int     c;
    unsigned int    uc;

    c = mercury_get_byte(Stream);
    uc = c;
    if (uc <= 0x7f) {
        ResultCode = ML_RESULT_CODE_OK;
        Char = uc;
        Error = 0;
    } else if (c == EOF) {
        if (MR_FERROR(*Stream)) {
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = errno;
            Char = 0;
        } else {
            ResultCode = ML_RESULT_CODE_EOF;
            Error = 0;
            Char = 0;
        }
    } else {
        if ((uc & 0xE0) == 0xC0) {
            nbytes = 2;
        } else if ((uc & 0xF0) == 0xE0) {
            nbytes = 3;
        } else if ((uc & 0xF8) == 0xF0) {
            nbytes = 4;
        } else {
            nbytes = 0;
        }
        if (nbytes > 0) {
            buf[0] = (char) uc;
            for (i = 1; i < nbytes; i++) {
                c = mercury_get_byte(Stream);
                uc = c;
                if (c == EOF) {
                    // Illegal byte sequence whether EOF or I/O error.
                    ResultCode = ML_RESULT_CODE_ERROR;
                    Error = MR_FERROR(*Stream) ? errno : EILSEQ;
                    Char = 0;
                    break;
                }
                buf[i] = uc;
            }
            if (i == nbytes) {
                buf[i] = '\0';
                c = MR_utf8_get(buf, 0);
                if (c < 0) {
                    ResultCode = ML_RESULT_CODE_ERROR;
                    Error = EILSEQ;
                    Char = 0;
                } else {
                    ResultCode = ML_RESULT_CODE_OK;
                    Char = c;
                    Error = 0;
                }
            }
        } else {
            // Invalid lead byte.
            ResultCode = ML_RESULT_CODE_ERROR;
            Error = EILSEQ;
            Char = 0;
        }
    }


		;}
#undef MR_PROC_LABEL
	*ResultCode_2  = ResultCode;
	*Error_3  = (MR_Box) Error;
	*Char_4  = Char;
}
}

void mercury__io__primitives_read__init(void)
{
}

void mercury__io__primitives_read__init_type_tables(void)
{
}

void mercury__io__primitives_read__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__io__primitives_read__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module io.primitives_read.
