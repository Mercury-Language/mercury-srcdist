/*
** Automatically generated from `io.text_read.m'
** by the Mercury compiler,
** version rotd-2023-09-26
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


// :- module io.text_read.
// :- implementation.

/*
INIT mercury__io__text_read__init
ENDINIT
*/

#include "io.text_read.mih"


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
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_EnumFunctorDesc mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_0;

static const MR_EnumFunctorDesc mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_1;

static const MR_EnumFunctorDesc mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_2;

static const MR_EnumFunctorDesc mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_3;

static const MR_EnumFunctorDescPtr mercury__io__text_read__io__text_read__enum_ordinal_ordered_read_line_as_string_result_0[4];

static const MR_EnumFunctorDescPtr mercury__io__text_read__io__text_read__enum_name_ordered_read_line_as_string_result_0[4];

static const MR_Integer mercury__io__text_read__io__text_read__functor_number_map_read_line_as_string_result_0[4];

static void MR_CALL 
mercury__io__text_read__read_into_array_9_p_0(
  MR_Word Stream_10,
  MR_ArrayPtr STATE_VARIABLE_Array_0_19,
  MR_ArrayPtr * STATE_VARIABLE_Array_20,
  MR_Integer ArraySize_12,
  MR_Integer STATE_VARIABLE_Pos_0_21,
  MR_Integer * STATE_VARIABLE_Pos_22,
  MR_Box * Error_14);

static void MR_CALL 
mercury__io__text_read__read_into_buffer_9_p_0(
  MR_Box Stream_1,
  MR_Box Buffer0_2,
  MR_Box * Buffer_3,
  MR_Integer BufferSize_4,
  MR_Integer Pos0_5,
  MR_Integer * Pos_6,
  MR_Box * Error_7);

static MR_bool MR_CALL 
mercury__io__text_read__buffer_and_pos_to_string_and_length_4_p_0(
  MR_Box Buffer_1,
  MR_Integer Pos_2,
  MR_String * Str_3,
  MR_Integer * NumCUs_4);

static void MR_CALL 
mercury__io__text_read__resize_buffer_4_p_0(
  MR_Integer OldSize_1,
  MR_Integer NewSize_2,
  MR_Box Buffer0_3,
  MR_Box * Buffer_4);

static void MR_CALL 
mercury__io__text_read__alloc_buffer_2_p_0(
  MR_Integer Size_1,
  MR_Box * Buffer_2);

static void MR_CALL 
mercury__io__text_read__stream_file_size_4_p_0(
  MR_Box Stream_1,
  int64_t * Size_2);

static void MR_CALL 
mercury__io__text_read__input_stream_file_size_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Size_6);

static void MR_CALL 
mercury__io__text_read__read_binary_file_as_bitmap_from_stream_7_p_0(
  MR_Word Stream_8,
  MR_Integer BufferSize_9,
  MR_Word * Res_10,
  MR_Word STATE_VARIABLE_BMs_0_17,
  MR_Word * STATE_VARIABLE_BMs_18);

static void MR_CALL 
mercury__io__text_read__read_file_as_string_loop_10_p_0(
  MR_Word Stream_11,
  MR_Box STATE_VARIABLE_Buffer_0_25,
  MR_Integer BufferSize0_13,
  MR_Integer STATE_VARIABLE_Pos_0_26,
  MR_String * Str_15,
  MR_Integer * NumCUs_16,
  MR_Box * Error_17,
  MR_Word * NullCharError_18);

static MR_bool MR_CALL 
mercury__io__text_read____Unify____buffer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io__text_read____Compare____buffer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io__text_read____Unify____read_line_as_string_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io__text_read____Compare____read_line_as_string_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__io__text_read_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__io__text_read_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__io__text_read_scalar_common_3[1][5];

static /* final */ const MR_Box mercury__io__text_read_scalar_common_4[5][1];




static /* final */ const MR_Box mercury__io__text_read_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__text_read_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__text_read_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__text_read_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__text_read_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__text_read_scalar_common_4[5][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "io.read_binary_file_as_bitmap: incorrect file size")) },
  /* row   2 */
  { ((MR_Box) (&mercury__io__text_read_scalar_common_4[1])) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "io.read_binary_file_as_bitmap: file size exceeds maximum buffer size")) },
  /* row   4 */
  { ((MR_Box) (&mercury__io__text_read_scalar_common_4[3])) },
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


const MR_TypeCtorInfo_Struct mercury__io__text_read__io__text_read__type_ctor_info_buffer_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__io__text_read____Unify____buffer_0_0_10001)),
  ((MR_Box) (mercury__io__text_read____Compare____buffer_0_0_10001)),
  (MR_String) "io.text_read",
  (MR_String) "buffer",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_0 = {
  (MR_String) "rlas_ok",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_1 = {
  (MR_String) "rlas_eof",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_2 = {
  (MR_String) "rlas_null_char",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_3 = {
  (MR_String) "rlas_error",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr mercury__io__text_read__io__text_read__enum_ordinal_ordered_read_line_as_string_result_0[4] = {
  &mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_0,
  &mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_1,
  &mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_2,
  &mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_3
};

static const MR_EnumFunctorDescPtr mercury__io__text_read__io__text_read__enum_name_ordered_read_line_as_string_result_0[4] = {
  &mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_1,
  &mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_3,
  &mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_2,
  &mercury__io__text_read__io__text_read__enum_functor_desc_read_line_as_string_result_0_0
};

static const MR_Integer mercury__io__text_read__io__text_read__functor_number_map_read_line_as_string_result_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__text_read__io__text_read__type_ctor_info_read_line_as_string_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io__text_read____Unify____read_line_as_string_result_0_0_10001)),
  ((MR_Box) (mercury__io__text_read____Compare____read_line_as_string_result_0_0_10001)),
  (MR_String) "io.text_read",
  (MR_String) "read_line_as_string_result",
  { mercury__io__text_read__io__text_read__enum_name_ordered_read_line_as_string_result_0 },
  { mercury__io__text_read__io__text_read__enum_ordinal_ordered_read_line_as_string_result_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mercury__io__text_read__io__text_read__functor_number_map_read_line_as_string_result_0,

};

void MR_CALL 
mercury__io__text_read____Compare____read_line_as_string_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__io__text_read____Unify____read_line_as_string_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__io__text_read____Compare____buffer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__io__text_read____Unify____buffer_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
mercury__io__text_read__read_into_array_9_p_0(
  MR_Word Stream_10,
  MR_ArrayPtr STATE_VARIABLE_Array_0_19,
  MR_ArrayPtr * STATE_VARIABLE_Array_20,
  MR_Integer ArraySize_12,
  MR_Integer STATE_VARIABLE_Pos_0_21,
  MR_Integer * STATE_VARIABLE_Pos_22,
  MR_Box * Error_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_Pos_0_21 >= ArraySize_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__io__text_read__read_into_array_9_p_0

	MR_Integer Error;

		{

    Error = 0;


		;}
#undef MR_PROC_LABEL
	*Error_14  = (MR_Box) Error;
}
      *STATE_VARIABLE_Pos_22 = STATE_VARIABLE_Pos_0_21;
      *STATE_VARIABLE_Array_20 = STATE_VARIABLE_Array_0_19;
    }
    else
    {
      MR_Word ResultCode_16;
      MR_Box Error0_17;
      MR_Char Char_18;
      MR_Box Var_30 = (MR_Box) (Stream_10);

      mercury__io__primitives_read__read_char_code_2_6_p_0(Var_30, &ResultCode_16, &Error0_17, &Char_18);
      switch (ResultCode_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *Error_14 = Error0_17;
            *STATE_VARIABLE_Array_20 = STATE_VARIABLE_Array_0_19;
            *STATE_VARIABLE_Pos_22 = STATE_VARIABLE_Pos_0_21;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_ArrayPtr STATE_VARIABLE_Array_26_26;
            MR_Integer STATE_VARIABLE_Pos_27_27;
            MR_ArrayPtr conv0_STATE_VARIABLE_Array_26_26;
            MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_19;
            MR_Integer next_value_of_STATE_VARIABLE_Pos_0_21;

            mercury__array__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_Pos_0_21, ((MR_Box) (MR_Word) (Char_18)), (MR_ArrayPtr) (STATE_VARIABLE_Array_0_19), &conv0_STATE_VARIABLE_Array_26_26);
            STATE_VARIABLE_Array_26_26 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_Array_26_26);
            STATE_VARIABLE_Pos_27_27 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Pos_0_21 + (MR_Unsigned) 1);
            // direct tailcall eliminated
            ;
            next_value_of_STATE_VARIABLE_Array_0_19 = STATE_VARIABLE_Array_26_26;
            next_value_of_STATE_VARIABLE_Pos_0_21 = STATE_VARIABLE_Pos_27_27;
            STATE_VARIABLE_Array_0_19 = next_value_of_STATE_VARIABLE_Array_0_19;
            STATE_VARIABLE_Pos_0_21 = next_value_of_STATE_VARIABLE_Pos_0_21;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__io__text_read__read_into_buffer_9_p_0(
  MR_Box Stream_1,
  MR_Box Buffer0_2,
  MR_Box * Buffer_3,
  MR_Integer BufferSize_4,
  MR_Integer Pos0_5,
  MR_Integer * Pos_6,
  MR_Box * Error_7)
{
{
#define MR_PROC_LABEL mercury__io__text_read__read_into_buffer_9_p_0

	MercuryFilePtr Stream;
	char * Buffer0;
	char * Buffer;
	MR_Integer BufferSize;
	MR_Integer Pos0;
	MR_Integer Pos;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Buffer0 = (char *)Buffer0_2 ;
	BufferSize = BufferSize_4 ;
	Pos0 = Pos0_5 ;
		{

    size_t bytes_to_read;
    size_t bytes_read;

    MR_CHECK_EXPR_TYPE(Buffer0, char *);
    MR_CHECK_EXPR_TYPE(Buffer, char *);

    bytes_to_read = BufferSize - Pos0;
    bytes_read = MR_READ(*Stream, Buffer0 + Pos0, bytes_to_read);

    Buffer = Buffer0;
    Pos = Pos0 + bytes_read;

    if (bytes_read < bytes_to_read && MR_FERROR(*Stream)) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Buffer_3  = (MR_Box) Buffer;
	*Pos_6  = Pos;
	*Error_7  = (MR_Box) Error;
}
}

static MR_bool MR_CALL 
mercury__io__text_read__buffer_and_pos_to_string_and_length_4_p_0(
  MR_Box Buffer_1,
  MR_Integer Pos_2,
  MR_String * Str_3,
  MR_Integer * NumCUs_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__text_read__buffer_and_pos_to_string_and_length_4_p_0

	char * Buffer;
	MR_Integer Pos;
	MR_String Str;
	MR_Integer NumCUs;
	MR_bool SUCCESS_INDICATOR;

	Buffer = (char *)Buffer_1 ;
	Pos = Pos_2 ;
		{
{
    Str = Buffer;
    Str[Pos] = '\0';

    // Check that the string does not contain null characters.
    if (strlen(Str) != Pos) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }

    // In C, Pos counts bytes, which are the same size as UTF-8 code units.
    // NumCUs is expected to be in the code units native to the target
    // language, and this is UTF-8, so no conversion needs to be done.
    // (Compare to the C# case below.)
    NumCUs = Pos;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Str_3  = Str;
	*NumCUs_4  = NumCUs;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

static void MR_CALL 
mercury__io__text_read__resize_buffer_4_p_0(
  MR_Integer OldSize_1,
  MR_Integer NewSize_2,
  MR_Box Buffer0_3,
  MR_Box * Buffer_4)
{
{
#define MR_PROC_LABEL mercury__io__text_read__resize_buffer_4_p_0

	MR_Integer OldSize;
	MR_Integer NewSize;
	char * Buffer0;
	char * Buffer;

	OldSize = OldSize_1 ;
	NewSize = NewSize_2 ;
	Buffer0 = (char *)Buffer0_3 ;
		{
{
    MR_CHECK_EXPR_TYPE(Buffer0, char *);
    MR_CHECK_EXPR_TYPE(Buffer, char *);

#ifdef MR_CONSERVATIVE_GC
    Buffer = MR_GC_realloc(Buffer0, NewSize * sizeof(char));
#else
    if (Buffer0 + OldSize == (char *) MR_hp) {
        MR_Word next;
        MR_offset_incr_hp_atomic_msg(next, 0,
            (NewSize * sizeof(char) + sizeof(MR_Word) - 1)
                / sizeof(MR_Word),
            MR_ALLOC_ID, "io.buffer/0");
        assert(Buffer0 + OldSize == (char *) next);
        Buffer = Buffer0;
    } else {
        // Just have to alloc and copy.
        MR_Word buf;
        MR_offset_incr_hp_atomic_msg(buf, 0,
            (NewSize * sizeof(char) + sizeof(MR_Word) - 1)
                / sizeof(MR_Word),
            MR_ALLOC_ID, "io.buffer/0");
        Buffer = (char *) buf;
        if (OldSize > NewSize) {
            MR_memcpy(Buffer, Buffer0, NewSize);
        } else {
            MR_memcpy(Buffer, Buffer0, OldSize);
        }
    }
#endif
}

		;}
#undef MR_PROC_LABEL
	*Buffer_4  = (MR_Box) Buffer;
}
}

static void MR_CALL 
mercury__io__text_read__alloc_buffer_2_p_0(
  MR_Integer Size_1,
  MR_Box * Buffer_2)
{
{
#define MR_PROC_LABEL mercury__io__text_read__alloc_buffer_2_p_0

	MR_Integer Size;
	char * Buffer;

	Size = Size_1 ;
		{
{
    MR_Word buf;
    MR_offset_incr_hp_atomic_msg(buf, 0,
        (Size * sizeof(char) + sizeof(MR_Word) - 1) / sizeof(MR_Word),
        MR_ALLOC_ID, "io.buffer/0");
    Buffer = (char *) buf;
}

		;}
#undef MR_PROC_LABEL
	*Buffer_2  = (MR_Box) Buffer;
}
}

static void MR_CALL 
mercury__io__text_read__stream_file_size_4_p_0(
  MR_Box Stream_1,
  int64_t * Size_2)
{
{
#define MR_PROC_LABEL mercury__io__text_read__stream_file_size_4_p_0

	MercuryFilePtr Stream;
	int64_t Size;

	Stream = (MercuryFilePtr)Stream_1 ;
		{

#if defined(MR_HAVE_FSTAT) &&         (defined(MR_HAVE_FILENO) || defined(fileno)) && defined(S_ISREG)
    struct stat s;
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (fstat(fileno(MR_file(*Stream)), &s) == 0 && S_ISREG(s.st_mode)) {
            Size = s.st_size;
        } else {
            Size = -1;
        }
    } else {
        Size = -1;
    }
#else
    Size = -1;
#endif


		;}
#undef MR_PROC_LABEL
	*Size_2  = Size;
}
}

static void MR_CALL 
mercury__io__text_read__input_stream_file_size_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Size_6)
{
  MR_Box Stream_5 = (MR_Box) (HeadVar__1_1);
  int64_t Size64_8;

{
#define MR_PROC_LABEL mercury__io__text_read__input_stream_file_size_4_p_0

	MercuryFilePtr Stream;
	int64_t Size;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

#if defined(MR_HAVE_FSTAT) &&         (defined(MR_HAVE_FILENO) || defined(fileno)) && defined(S_ISREG)
    struct stat s;
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (fstat(fileno(MR_file(*Stream)), &s) == 0 && S_ISREG(s.st_mode)) {
            Size = s.st_size;
        } else {
            Size = -1;
        }
    } else {
        Size = -1;
    }
#else
    Size = -1;
#endif


		;}
#undef MR_PROC_LABEL
	Size64_8  = Size;
}
{
#define MR_PROC_LABEL mercury__io__text_read__input_stream_file_size_4_p_0

	int64_t I64;
	MR_Integer I;

	I64 = Size64_8 ;
		{

    I = (MR_Integer) I64;


		;}
#undef MR_PROC_LABEL
	*Size_6  = I;
}
}

void MR_CALL 
mercury__io__text_read__read_binary_file_as_bitmap_2_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  int64_t FileSize_8;
  MR_Box Stream_47 = (MR_Box) (Stream_5);

{
#define MR_PROC_LABEL mercury__io__text_read__read_binary_file_as_bitmap_2_4_p_0

	MercuryFilePtr Stream;
	int64_t Size;

	Stream = (MercuryFilePtr)Stream_47 ;
		{

#if defined(MR_HAVE_FSTAT) &&         (defined(MR_HAVE_FILENO) || defined(fileno)) && defined(S_ISREG)
    struct stat s;
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (fstat(fileno(MR_file(*Stream)), &s) == 0 && S_ISREG(s.st_mode)) {
            Size = s.st_size;
        } else {
            Size = -1;
        }
    } else {
        Size = -1;
    }
#else
    Size = -1;
#endif


		;}
#undef MR_PROC_LABEL
	FileSize_8  = Size;
}
  succeeded = (FileSize_8 >= INT64_C(0));
  if (succeeded)
  {
    int64_t CurrentOffset_9;
    int64_t RemainingSizeInt64_10;
    MR_Box Var_48 = (MR_Box) (Stream_5);
    MR_Box Var_49;
    MR_Integer Var_24;
    int64_t Var_25;
    MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__io__text_read__read_binary_file_as_bitmap_2_4_p_0

	MercuryFilePtr Stream;
	int64_t Offset;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_48 ;
		{

    // XXX should check if the stream is tellable
    if (MR_IS_FILE_STREAM(*Stream)) {
        Offset = MR_ftell(MR_file(*Stream));
        if (Offset < 0) {
            Error = errno;
        } else {
            Error = 0;
        }
    } else {
        Error = EINVAL;
    }


		;}
#undef MR_PROC_LABEL
	CurrentOffset_9  = Offset;
	Var_49  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__text_read__read_binary_file_as_bitmap_2_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Var_49 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (!(succeeded))
    {
      MR_Word Var_52;

      mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Var_49, (MR_String) "error getting file offset: ", &Var_52);
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_52)));
        return;
      }
    }
    RemainingSizeInt64_10 = (int64_t) ((uint64_t) FileSize_8 - (uint64_t) CurrentOffset_9);
{
#define MR_PROC_LABEL mercury__io__text_read__read_binary_file_as_bitmap_2_4_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_24  = Bits;
}
    succeeded = (Var_24 == (MR_Integer) 32);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__io__text_read__read_binary_file_as_bitmap_2_4_p_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	Var_26  = Max;
}
{
#define MR_PROC_LABEL mercury__io__text_read__read_binary_file_as_bitmap_2_4_p_0

	MR_Integer I;
	int64_t I64;

	I = Var_26 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_25  = I64;
}
      succeeded = (RemainingSizeInt64_10 > Var_25);
    }
    if (succeeded)
      *Result_6 = (MR_Word) (MR_mkword(1, &mercury__io__text_read_scalar_common_4[4]));
    else
    {
      MR_Integer RemainingSize_11;
      MR_Box STATE_VARIABLE_BM_31_31;
      MR_Integer Var_32;

{
#define MR_PROC_LABEL mercury__io__text_read__read_binary_file_as_bitmap_2_4_p_0

	int64_t I64;
	MR_Integer I;

	I64 = RemainingSizeInt64_10 ;
		{

    I = (MR_Integer) I64;


		;}
#undef MR_PROC_LABEL
	RemainingSize_11  = I;
}
      Var_32 = (MR_Integer) ((MR_Unsigned) RemainingSize_11 * (MR_Unsigned) 8);
      STATE_VARIABLE_BM_31_31 = mercury__bitmap__init_2_f_0(Var_32, (MR_Integer) 0);
      succeeded = (RemainingSize_11 == (MR_Integer) 0);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_BM_31_31));
        }
      else
      {
        MR_Integer BytesRead_13;
        MR_Word ReadResult_14;
        MR_Box STATE_VARIABLE_BM_35_35;

        mercury__bitmap__read_bitmap_range_9_p_0(Stream_5, (MR_Integer) 0, RemainingSize_11, STATE_VARIABLE_BM_31_31, &STATE_VARIABLE_BM_35_35, &BytesRead_13, &ReadResult_14);
        if ((ReadResult_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          succeeded = (BytesRead_13 == RemainingSize_11);
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Result_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_BM_35_35));
            }
          else
            *Result_6 = (MR_Word) (MR_mkword(1, &mercury__io__text_read_scalar_common_4[2]));
        }
        else
        {
          MR_Word Msg_15 = ((MR_Word) ((MR_hl_field(1, ReadResult_14, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Msg_15));
          }
        }
      }
    }
  }
  else
  {
    MR_Word Res_17;
    MR_Word RevBitmaps_18;

    mercury__io__text_read__read_binary_file_as_bitmap_from_stream_7_p_0(Stream_5, (MR_Integer) 4000, &Res_17, (MR_Word) ((MR_Unsigned) 0U), &RevBitmaps_18);
    if ((Res_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box Var_43;
      MR_Word Var_44;

      mercury__list__reverse_2_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), RevBitmaps_18, &Var_44);
      Var_43 = mercury__bitmap__append_list_1_f_0(Var_44);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_43));
      }
    }
    else
    {
      MR_Word Msg_45 = ((MR_Word) ((MR_hl_field(1, Res_17, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Msg_45));
      }
    }
  }
}

static void MR_CALL 
mercury__io__text_read__read_binary_file_as_bitmap_from_stream_7_p_0(
  MR_Word Stream_8,
  MR_Integer BufferSize_9,
  MR_Word * Res_10,
  MR_Word STATE_VARIABLE_BMs_0_17,
  MR_Word * STATE_VARIABLE_BMs_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NumBytesRead_14;
    MR_Word ReadRes_15;
    MR_Box STATE_VARIABLE_BM_21_21;
    MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) BufferSize_9 * (MR_Unsigned) 8);
    MR_Box STATE_VARIABLE_BM_25_25;

    // setup for model_det tailcalls optimized into a loop
    ;
    STATE_VARIABLE_BM_21_21 = mercury__bitmap__init_2_f_0(Var_22, (MR_Integer) 0);
    mercury__bitmap__read_bitmap_range_9_p_0(Stream_8, (MR_Integer) 0, BufferSize_9, STATE_VARIABLE_BM_21_21, &STATE_VARIABLE_BM_25_25, &NumBytesRead_14, &ReadRes_15);
    if ((ReadRes_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (NumBytesRead_14 < BufferSize_9);
      if (succeeded)
      {
        MR_Box STATE_VARIABLE_BM_27_27;
        MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) NumBytesRead_14 * (MR_Unsigned) 8);

        STATE_VARIABLE_BM_27_27 = mercury__bitmap__shrink_without_copying_2_f_0(STATE_VARIABLE_BM_25_25, Var_28);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_BMs_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (STATE_VARIABLE_BM_27_27));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_BMs_0_17));
        }
        *Res_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word STATE_VARIABLE_BMs_31_31;
        MR_Integer Var_32;
        MR_Integer next_value_of_BufferSize_9;
        MR_Word next_value_of_STATE_VARIABLE_BMs_0_17;

        {
          STATE_VARIABLE_BMs_31_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_BMs_31_31, 0) = ((MR_Box) (STATE_VARIABLE_BM_25_25));
          MR_hl_field(1, STATE_VARIABLE_BMs_31_31, 1) = ((MR_Box) (STATE_VARIABLE_BMs_0_17));
        }
        Var_32 = (MR_Integer) ((MR_Unsigned) BufferSize_9 * (MR_Unsigned) 2);
        // direct tailcall eliminated
        ;
        next_value_of_BufferSize_9 = Var_32;
        next_value_of_STATE_VARIABLE_BMs_0_17 = STATE_VARIABLE_BMs_31_31;
        BufferSize_9 = next_value_of_BufferSize_9;
        STATE_VARIABLE_BMs_0_17 = next_value_of_STATE_VARIABLE_BMs_0_17;
        continue;
      }
    }
    else
    {
      *Res_10 = ReadRes_15;
      *STATE_VARIABLE_BMs_18 = STATE_VARIABLE_BMs_0_17;
    }
    break;
  }
}

void MR_CALL 
mercury__io__text_read__read_file_as_string_2_7_p_0(
  MR_Box Stream_8,
  MR_String * Str_9,
  MR_Integer * NumCUs_10,
  MR_Box * Error_11,
  MR_Word * NullCharError_12)
{
  MR_bool succeeded;
  MR_Integer FileSize_14;
  MR_Integer BufferSize0_15;
  MR_Box Buffer0_16;
  MR_Word Var_20 = (MR_Word) (Stream_8);
  int64_t Size64_26;

{
#define MR_PROC_LABEL mercury__io__text_read__read_file_as_string_2_7_p_0

	MercuryFilePtr Stream;
	int64_t Size;

	Stream = (MercuryFilePtr)Stream_8 ;
		{

#if defined(MR_HAVE_FSTAT) &&         (defined(MR_HAVE_FILENO) || defined(fileno)) && defined(S_ISREG)
    struct stat s;
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (fstat(fileno(MR_file(*Stream)), &s) == 0 && S_ISREG(s.st_mode)) {
            Size = s.st_size;
        } else {
            Size = -1;
        }
    } else {
        Size = -1;
    }
#else
    Size = -1;
#endif


		;}
#undef MR_PROC_LABEL
	Size64_26  = Size;
}
{
#define MR_PROC_LABEL mercury__io__text_read__read_file_as_string_2_7_p_0

	int64_t I64;
	MR_Integer I;

	I64 = Size64_26 ;
		{

    I = (MR_Integer) I64;


		;}
#undef MR_PROC_LABEL
	FileSize_14  = I;
}
  succeeded = (FileSize_14 >= (MR_Integer) 0);
  if (succeeded)
    BufferSize0_15 = (MR_Integer) ((MR_Unsigned) FileSize_14 + (MR_Unsigned) 1);
  else
    BufferSize0_15 = (MR_Integer) 4000;
{
#define MR_PROC_LABEL mercury__io__text_read__read_file_as_string_2_7_p_0

	MR_Integer Size;
	char * Buffer;

	Size = BufferSize0_15 ;
		{
{
    MR_Word buf;
    MR_offset_incr_hp_atomic_msg(buf, 0,
        (Size * sizeof(char) + sizeof(MR_Word) - 1) / sizeof(MR_Word),
        MR_ALLOC_ID, "io.buffer/0");
    Buffer = (char *) buf;
}

		;}
#undef MR_PROC_LABEL
	Buffer0_16  = (MR_Box) Buffer;
}
  mercury__io__text_read__read_file_as_string_loop_10_p_0(Var_20, Buffer0_16, BufferSize0_15, (MR_Integer) 0, Str_9, NumCUs_10, Error_11, NullCharError_12);
}

static void MR_CALL 
mercury__io__text_read__read_file_as_string_loop_10_p_0(
  MR_Word Stream_11,
  MR_Box STATE_VARIABLE_Buffer_0_25,
  MR_Integer BufferSize0_13,
  MR_Integer STATE_VARIABLE_Pos_0_26,
  MR_String * Str_15,
  MR_Integer * NumCUs_16,
  MR_Box * Error_17,
  MR_Word * NullCharError_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box RealStream_20 = (MR_Box) (Stream_11);
    MR_Box Error0_21;
    MR_Box STATE_VARIABLE_Buffer_29_29;
    MR_Integer STATE_VARIABLE_Pos_30_30;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__io__text_read__read_file_as_string_loop_10_p_0

	MercuryFilePtr Stream;
	char * Buffer0;
	char * Buffer;
	MR_Integer BufferSize;
	MR_Integer Pos0;
	MR_Integer Pos;
	MR_Integer Error;

	Stream = (MercuryFilePtr)RealStream_20 ;
	Buffer0 = (char *)STATE_VARIABLE_Buffer_0_25 ;
	BufferSize = BufferSize0_13 ;
	Pos0 = STATE_VARIABLE_Pos_0_26 ;
		{

    size_t bytes_to_read;
    size_t bytes_read;

    MR_CHECK_EXPR_TYPE(Buffer0, char *);
    MR_CHECK_EXPR_TYPE(Buffer, char *);

    bytes_to_read = BufferSize - Pos0;
    bytes_read = MR_READ(*Stream, Buffer0 + Pos0, bytes_to_read);

    Buffer = Buffer0;
    Pos = Pos0 + bytes_read;

    if (bytes_read < bytes_to_read && MR_FERROR(*Stream)) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Buffer_29_29  = (MR_Box) Buffer;
	STATE_VARIABLE_Pos_30_30  = Pos;
	Error0_21  = (MR_Box) Error;
}
    succeeded = (STATE_VARIABLE_Pos_30_30 < BufferSize0_13);
    if (succeeded)
    {
      MR_String StrPrime_22;
      MR_Integer NumCUsPrime_23;

{
#define MR_PROC_LABEL mercury__io__text_read__read_file_as_string_loop_10_p_0

	char * Buffer;
	MR_Integer Pos;
	MR_String Str;
	MR_Integer NumCUs;
	MR_bool SUCCESS_INDICATOR;

	Buffer = (char *)STATE_VARIABLE_Buffer_29_29 ;
	Pos = STATE_VARIABLE_Pos_30_30 ;
		{
{
    Str = Buffer;
    Str[Pos] = '\0';

    // Check that the string does not contain null characters.
    if (strlen(Str) != Pos) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }

    // In C, Pos counts bytes, which are the same size as UTF-8 code units.
    // NumCUs is expected to be in the code units native to the target
    // language, and this is UTF-8, so no conversion needs to be done.
    // (Compare to the C# case below.)
    NumCUs = Pos;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	StrPrime_22  = Str;
	NumCUsPrime_23  = NumCUs;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        *Str_15 = StrPrime_22;
        *NumCUs_16 = NumCUsPrime_23;
        *NullCharError_18 = (MR_Integer) 0;
      }
      else
      {
        *Str_15 = (MR_String) "";
        *NumCUs_16 = (MR_Integer) 0;
        *NullCharError_18 = (MR_Integer) 1;
      }
      *Error_17 = Error0_21;
    }
    else
    {
      succeeded = (STATE_VARIABLE_Pos_30_30 == BufferSize0_13);
      if (succeeded)
      {
        MR_Integer BufferSize1_24 = (MR_Integer) ((MR_Unsigned) BufferSize0_13 * (MR_Unsigned) 2);
        MR_Box STATE_VARIABLE_Buffer_33_33;
        MR_Box next_value_of_STATE_VARIABLE_Buffer_0_25;
        MR_Integer next_value_of_BufferSize0_13;
        MR_Integer next_value_of_STATE_VARIABLE_Pos_0_26;

{
#define MR_PROC_LABEL mercury__io__text_read__read_file_as_string_loop_10_p_0

	MR_Integer OldSize;
	MR_Integer NewSize;
	char * Buffer0;
	char * Buffer;

	OldSize = BufferSize0_13 ;
	NewSize = BufferSize1_24 ;
	Buffer0 = (char *)STATE_VARIABLE_Buffer_29_29 ;
		{
{
    MR_CHECK_EXPR_TYPE(Buffer0, char *);
    MR_CHECK_EXPR_TYPE(Buffer, char *);

#ifdef MR_CONSERVATIVE_GC
    Buffer = MR_GC_realloc(Buffer0, NewSize * sizeof(char));
#else
    if (Buffer0 + OldSize == (char *) MR_hp) {
        MR_Word next;
        MR_offset_incr_hp_atomic_msg(next, 0,
            (NewSize * sizeof(char) + sizeof(MR_Word) - 1)
                / sizeof(MR_Word),
            MR_ALLOC_ID, "io.buffer/0");
        assert(Buffer0 + OldSize == (char *) next);
        Buffer = Buffer0;
    } else {
        // Just have to alloc and copy.
        MR_Word buf;
        MR_offset_incr_hp_atomic_msg(buf, 0,
            (NewSize * sizeof(char) + sizeof(MR_Word) - 1)
                / sizeof(MR_Word),
            MR_ALLOC_ID, "io.buffer/0");
        Buffer = (char *) buf;
        if (OldSize > NewSize) {
            MR_memcpy(Buffer, Buffer0, NewSize);
        } else {
            MR_memcpy(Buffer, Buffer0, OldSize);
        }
    }
#endif
}

		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Buffer_33_33  = (MR_Box) Buffer;
}
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_Buffer_0_25 = STATE_VARIABLE_Buffer_33_33;
        next_value_of_BufferSize0_13 = BufferSize1_24;
        next_value_of_STATE_VARIABLE_Pos_0_26 = STATE_VARIABLE_Pos_30_30;
        STATE_VARIABLE_Buffer_0_25 = next_value_of_STATE_VARIABLE_Buffer_0_25;
        BufferSize0_13 = next_value_of_BufferSize0_13;
        STATE_VARIABLE_Pos_0_26 = next_value_of_STATE_VARIABLE_Pos_0_26;
        continue;
      }
      else
        {
          mercury__require__error_1_p_0((MR_String) "io.read_file_as_string: buffer overflow");
          return;
        }
    }
    break;
  }
}

void MR_CALL 
mercury__io__text_read__read_line_as_string_2_7_p_0(
  MR_Box Stream_1,
  MR_Word _FirstCall_2,
  MR_Word * Res_3,
  MR_Box * Error_4,
  MR_String * RetString_5)
{
{
#define MR_PROC_LABEL mercury__io__text_read__read_line_as_string_2_7_p_0

	MercuryFilePtr Stream;
	MR_Word Res;
	MR_Integer Error;
	MR_String RetString;

	Stream = (MercuryFilePtr)Stream_1 ;
		{

#define ML_IO_READ_LINE_GROW(n) ((n) * 3 / 2)
#define ML_IO_BYTES_TO_WORDS(n) (((n) + sizeof(MR_Word) - 1) / sizeof(MR_Word))
#define ML_IO_READ_LINE_START   1024

    char initial_read_buffer[ML_IO_READ_LINE_START];
    char *read_buffer = initial_read_buffer;
    size_t read_buf_size = ML_IO_READ_LINE_START;
    size_t i;
    int char_code = '\0';

    Res = ML_RLAS_OK;
    Error = 0;
    for (i = 0; char_code != '\n'; ) {
        char_code = mercury_get_byte(Stream);
        if (char_code == EOF) {
            if (i == 0) {
                if (MR_FERROR(*Stream)) {
                    Res = ML_RLAS_ERROR;
                    Error = errno;
                } else {
                    Res = ML_RLAS_EOF;
                }
            }
            break;
        }
        if (char_code == 0) {
            Res = ML_RLAS_NULL_CHAR;
            break;
        }
        read_buffer[i++] = (char) char_code;
        MR_assert(i <= read_buf_size);
        if (i == read_buf_size) {
            // Grow the read buffer.
            read_buf_size = ML_IO_READ_LINE_GROW(read_buf_size);
            if (read_buffer == initial_read_buffer) {
                read_buffer = MR_NEW_ARRAY(char, read_buf_size);
                MR_memcpy(read_buffer, initial_read_buffer,
                    ML_IO_READ_LINE_START);
            } else {
                read_buffer = MR_RESIZE_ARRAY(read_buffer, char,
                    read_buf_size);
            }
        }
    }
    if (Res == ML_RLAS_OK) {
        MR_Word ret_string_word;
        MR_offset_incr_hp_atomic_msg(ret_string_word,
            0, ML_IO_BYTES_TO_WORDS((i + 1) * sizeof(char)),
            MR_ALLOC_ID, "string.string/0");
        RetString = (MR_String) ret_string_word;
        MR_memcpy(RetString, read_buffer, i * sizeof(char));
        RetString[i] = '\0';
    } else {
        RetString = MR_make_string_const("");
    }
    if (read_buffer != initial_read_buffer) {
        MR_free(read_buffer);
    }


		;}
#undef MR_PROC_LABEL
	*Res_3  = Res;
	*Error_4  = (MR_Box) Error;
	*RetString_5  = RetString;
}
}

void MR_CALL 
mercury__io__text_read__read_line_2_6_p_0(
  MR_Word Stream_7,
  MR_Word * Result_8,
  MR_Box * Error_9,
  MR_Word * Chars_10)
{
  MR_bool succeeded;
  MR_Word Result0_12;
  MR_Box Error0_13;
  MR_Char Char_14;
  MR_Box Var_20 = (MR_Box) (Stream_7);

  mercury__io__primitives_read__read_char_code_2_6_p_0(Var_20, &Result0_12, &Error0_13, &Char_14);
  switch (Result0_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *Result_8 = Result0_12;
        *Chars_10 = (MR_Word) ((MR_Unsigned) 0U);
        *Error_9 = Error0_13;
      }
      break;
    case (MR_Integer) 0:
      {
        succeeded = (Char_14 == (MR_Char) 10);
        if (succeeded)
        {
          *Result_8 = (MR_Integer) 0;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Chars_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (Char_14));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *Error_9 = Error0_13;
        }
        else
        {
          MR_Word * AddrCharsTail_21;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Chars_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (Char_14));
            MR_hl_field(1, base, 1) = NULL;
          }
          AddrCharsTail_21 = (MR_Word *) (&(MR_hl_field(1, *Chars_10, (MR_Integer) 1)));
          mercury__io__text_read__LCMC__pred__read_line_2__1_6_p_0(Stream_7, Result_8, Error_9, AddrCharsTail_21);
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__text_read__LCMC__pred__read_line_2__1_6_p_0(
  MR_Word Stream_7,
  MR_Word * Result_8,
  MR_Box * Error_9,
  MR_Word * AddrOfChars_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result0_12;
    MR_Box Error0_13;
    MR_Char Char_14;
    MR_Box Var_20 = (MR_Box) (Stream_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__primitives_read__read_char_code_2_6_p_0(Var_20, &Result0_12, &Error0_13, &Char_14);
    switch (Result0_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Result_8 = Result0_12;
          *AddrOfChars_22 = (MR_Word) ((MR_Unsigned) 0U);
          *Error_9 = Error0_13;
        }
        break;
      case (MR_Integer) 0:
        {
          succeeded = (Char_14 == (MR_Char) 10);
          if (succeeded)
          {
            MR_Word Chars_23;

            *Result_8 = (MR_Integer) 0;
            {
              Chars_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Chars_23, 0) = ((MR_Box) (MR_Word) (Char_14));
              MR_hl_field(1, Chars_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *AddrOfChars_22 = Chars_23;
            *Error_9 = Error0_13;
          }
          else
          {
            MR_Word * AddrCharsTail_21;
            MR_Word Chars_24;
            MR_Word * next_value_of_AddrOfChars_22;

            {
              Chars_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Chars_24, 0) = ((MR_Box) (MR_Word) (Char_14));
              MR_hl_field(1, Chars_24, 1) = NULL;
            }
            AddrCharsTail_21 = (MR_Word *) (&(MR_hl_field(1, Chars_24, (MR_Integer) 1)));
            *AddrOfChars_22 = Chars_24;
            // direct tailcall eliminated
            ;
            next_value_of_AddrOfChars_22 = AddrCharsTail_21;
            AddrOfChars_22 = next_value_of_AddrOfChars_22;
            continue;
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__io__text_read__read_word_2_4_p_0(
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word CharResult_8;
  MR_Word Var_23;
  MR_Box Var_24;
  MR_Char Var_25;
  MR_Box Var_28 = (MR_Box) (Stream_5);

  mercury__io__primitives_read__read_char_code_2_6_p_0(Var_28, &Var_23, &Var_24, &Var_25);
  switch (Var_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      CharResult_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_30;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Var_24, (MR_String) "read failed: ", &Var_30);
        {
          CharResult_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, CharResult_8, 0) = ((MR_Box) (Var_30));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        CharResult_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CharResult_8, 0) = ((MR_Box) (MR_Word) (Var_25));
      }
      break;
  }
  switch (MR_tag((MR_Word) CharResult_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Char Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(1, CharResult_8, (MR_Integer) 0)));

        succeeded = mercury__char__is_whitespace_1_p_0(Char_10);
        if (succeeded)
        {
          mercury__io__putback_char_4_p_0(Stream_5, Char_10);
          *Result_6 = (MR_Word) (MR_mkword(1, &mercury__io__text_read_scalar_common_4[0]));
        }
        else
        {
          MR_Word Result0_11;

          mercury__io__text_read__read_word_2_4_p_0(Stream_5, &Result0_11);
          switch (MR_tag((MR_Word) Result0_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_21;

                {
                  Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_Word) (Char_10));
                  MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Chars_12 = ((MR_Word) ((MR_hl_field(1, Result0_11, (MR_Integer) 0))));
                MR_Word Var_20;

                {
                  Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_Word) (Char_10));
                  MR_hl_field(1, Var_20, 1) = ((MR_Box) (Chars_12));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
                }
              }
              break;
            case (MR_Integer) 2:
              *Result_6 = Result0_11;
              break;
          }
        }
      }
      break;
    case (MR_Integer) 2:
      *Result_6 = (MR_Word) (CharResult_8);
      break;
  }
}

static MR_bool MR_CALL 
mercury__io__text_read____Unify____buffer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io__text_read____Unify____buffer_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io__text_read____Compare____buffer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io__text_read____Compare____buffer_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io__text_read____Unify____read_line_as_string_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io__text_read____Unify____read_line_as_string_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io__text_read____Compare____read_line_as_string_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io__text_read____Compare____read_line_as_string_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__io__text_read__init(void)
{
}

void mercury__io__text_read__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__io__text_read__io__text_read__type_ctor_info_buffer_0);
	MR_register_type_ctor_info(&mercury__io__text_read__io__text_read__type_ctor_info_read_line_as_string_result_0);
}

void mercury__io__text_read__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__io__text_read__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module io.text_read.
