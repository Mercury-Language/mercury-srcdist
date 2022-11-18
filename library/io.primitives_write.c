/*
** Automatically generated from `io.primitives_write.m'
** by the Mercury compiler,
** version rotd-2022-11-18
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


// :- module io.primitives_write.
// :- implementation.

/*
INIT mercury__io__primitives_write__init
ENDINIT
*/

#include "io.primitives_write.mih"


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
#include "std_util.mih"
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
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"





static /* final */ const MR_Box mercury__io__primitives_write_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__io__primitives_write_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__io__primitives_write_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__io__primitives_write_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__primitives_write_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__primitives_write_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__primitives_write_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__primitives_write_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__primitives_write_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
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
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"
#line 1214 "io.primitives_write.m"

int
ML_fprintf(MercuryFilePtr mf, const char *format, ...)
{
    int     rc;
    va_list args;

    va_start(args, format);
    rc = MR_VFPRINTF(*mf, format, args);
    va_end(args);

    return rc;
}




void MR_CALL 
mercury__io__primitives_write__do_write_binary_string_utf8_5_p_0(
  MR_Box Stream_1,
  MR_String String_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_binary_string_utf8_5_p_0

	MercuryFilePtr Stream;
	MR_String String;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	String = String_2 ;
		{

    size_t len = strlen(String);
    if (MR_WRITE(*Stream, (unsigned char *) String, len) != len) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_binary_uint64_be_5_p_0(
  MR_Box Stream_1,
  uint64_t U64_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_binary_uint64_be_5_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	U64 = U64_2 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U64 = MR_uint64_reverse_bytes(U64);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *) (&U64), 8) != 8) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_binary_uint64_le_5_p_0(
  MR_Box Stream_1,
  uint64_t U64_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_binary_uint64_le_5_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	U64 = U64_2 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U64 = MR_uint64_reverse_bytes(U64);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *) (&U64), 8) != 8) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_binary_uint64_5_p_0(
  MR_Box Stream_1,
  uint64_t U64_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_binary_uint64_5_p_0

	MercuryFilePtr Stream;
	uint64_t U64;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	U64 = U64_2 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U64), 8) != 8) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_binary_uint32_be_5_p_0(
  MR_Box Stream_1,
  uint32_t U32_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_binary_uint32_be_5_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	U32 = U32_2 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U32 = MR_uint32_reverse_bytes(U32);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *) (&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_binary_uint32_le_5_p_0(
  MR_Box Stream_1,
  uint32_t U32_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_binary_uint32_le_5_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	U32 = U32_2 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U32 = MR_uint32_reverse_bytes(U32);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *) (&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_binary_uint32_5_p_0(
  MR_Box Stream_1,
  uint32_t U32_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_binary_uint32_5_p_0

	MercuryFilePtr Stream;
	uint32_t U32;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	U32 = U32_2 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U32), 4) != 4) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_binary_uint16_be_5_p_0(
  MR_Box Stream_1,
  uint16_t U16_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_binary_uint16_be_5_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	U16 = U16_2 ;
		{

    #if defined(MR_LITTLE_ENDIAN)
        U16 = MR_uint16_reverse_bytes(U16);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *) (&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_binary_uint16_le_5_p_0(
  MR_Box Stream_1,
  uint16_t U16_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_binary_uint16_le_5_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	U16 = U16_2 ;
		{

    #if defined(MR_BIG_ENDIAN)
        U16 = MR_uint16_reverse_bytes(U16);
    #endif

    if (MR_WRITE(*Stream, (unsigned char *) (&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_binary_uint16_5_p_0(
  MR_Box Stream_1,
  uint16_t U16_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_binary_uint16_5_p_0

	MercuryFilePtr Stream;
	uint16_t U16;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	U16 = U16_2 ;
		{

    if (MR_WRITE(*Stream, (unsigned char *) (&U16), 2) != 2) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_byte_5_p_0(
  MR_Box Stream_1,
  MR_Integer Byte_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_byte_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Byte;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Byte = Byte_2 ;
		{

    // Call putc with a strictly non-negative byte-sized integer.
    if (MR_PUTCH(*Stream, (int) ((unsigned char) Byte)) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_string_5_p_0(
  MR_Box Stream_1,
  MR_String Message_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_string_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Message = Message_2 ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_float_5_p_0(
  MR_Box Stream_1,
  MR_Float Val_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_float_5_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Val = Val_2 ;
		{

    char buf[MR_SPRINTF_FLOAT_BUF_SIZE];
    MR_sprintf_float(buf, Val);
    if (ML_fprintf(Stream, "%s", buf) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_uint64_5_p_0(
  MR_Box Stream_1,
  uint64_t Val_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_uint64_5_p_0

	MercuryFilePtr Stream;
	uint64_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Val = Val_2 ;
		{

    if (ML_fprintf(Stream, "%" PRIu64, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_int64_5_p_0(
  MR_Box Stream_1,
  int64_t Val_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_int64_5_p_0

	MercuryFilePtr Stream;
	int64_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Val = Val_2 ;
		{

    if (ML_fprintf(Stream, "%" PRId64, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_uint32_5_p_0(
  MR_Box Stream_1,
  uint32_t Val_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_uint32_5_p_0

	MercuryFilePtr Stream;
	uint32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Val = Val_2 ;
		{

    if (ML_fprintf(Stream, "%" PRIu32, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_int32_5_p_0(
  MR_Box Stream_1,
  int32_t Val_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_int32_5_p_0

	MercuryFilePtr Stream;
	int32_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Val = Val_2 ;
		{

    if (ML_fprintf(Stream, "%" PRId32, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_uint16_5_p_0(
  MR_Box Stream_1,
  uint16_t Val_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_uint16_5_p_0

	MercuryFilePtr Stream;
	uint16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Val = Val_2 ;
		{

    if (ML_fprintf(Stream, "%" PRIu16, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_int16_5_p_0(
  MR_Box Stream_1,
  int16_t Val_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_int16_5_p_0

	MercuryFilePtr Stream;
	int16_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Val = Val_2 ;
		{

    if (ML_fprintf(Stream, "%" PRId16, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_uint8_5_p_0(
  MR_Box Stream_1,
  uint8_t Val_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_uint8_5_p_0

	MercuryFilePtr Stream;
	uint8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Val = Val_2 ;
		{

    if (ML_fprintf(Stream, "%" PRIu8, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_int8_5_p_0(
  MR_Box Stream_1,
  int8_t Val_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_int8_5_p_0

	MercuryFilePtr Stream;
	int8_t Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Val = Val_2 ;
		{

    if (ML_fprintf(Stream, "%" PRId8, Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_uint_5_p_0(
  MR_Box Stream_1,
  MR_Unsigned Val_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_uint_5_p_0

	MercuryFilePtr Stream;
	MR_Unsigned Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Val = Val_2 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "u", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_int_5_p_0(
  MR_Box Stream_1,
  MR_Integer Val_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_int_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Val = Val_2 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__primitives_write__do_write_char_5_p_0(
  MR_Box Stream_1,
  MR_Char Character_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__primitives_write__do_write_char_5_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Character = Character_2 ;
		{

    Error = 0;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            Error = errno;
        } else if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        // XXX ILSEQ Error if len==0
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	*Error_3  = (MR_Box) Error;
}
}

void mercury__io__primitives_write__init(void)
{
}

void mercury__io__primitives_write__init_type_tables(void)
{
}

void mercury__io__primitives_write__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__io__primitives_write__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module io.primitives_write.
