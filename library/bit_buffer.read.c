/*
** Automatically generated from `bit_buffer.read.m'
** by the Mercury compiler,
** version rotd-2023-06-26
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


// :- module bit_buffer.read.
// :- implementation.

/*
INIT mercury__bit_buffer__read__init
ENDINIT
*/

#include "bit_buffer.read.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bit_buffer.mih"
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
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_TypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3io__type_ctor_info_binary_input_stream_0io__type_ctor_info_state_0io__type_ctor_info_error_0;

static const MR_Integer mercury__bit_buffer__read__bit_buffer__read__functor_number_map_read_buffer_3[1];

static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__pseudo_3;

static const MR_NotagFunctorDesc mercury__bit_buffer__read__bit_buffer__read__notag_functor_desc_read_buffer_3;

static const MR_FA_TypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0bit_buffer__type_ctor_info_error_stream_error_0;

static void MR_CALL 
mercury__bit_buffer__read__recursively_get_bitmap_9_p_0(
  MR_Word TypeClassInfo_for_bulk_reader_60,
  MR_Integer STATE_VARIABLE_Index_0_22,
  MR_Integer STATE_VARIABLE_NumBits_0_23,
  MR_Box STATE_VARIABLE_BM_0_24,
  MR_Box * STATE_VARIABLE_BM_25,
  MR_Integer STATE_VARIABLE_NumBitsRead_0_26,
  MR_Integer * STATE_VARIABLE_NumBitsRead_27,
  MR_Word * Result_14,
  MR_Box STATE_VARIABLE_Buffer_0_28,
  MR_Box * STATE_VARIABLE_Buffer_29);

static void MR_CALL 
mercury__bit_buffer__read__do_get_bits_7_p_0(
  MR_Word TypeClassInfo_for_bulk_reader_45,
  MR_Integer Index_8,
  MR_Integer NumBits_9,
  MR_Integer STATE_VARIABLE_Word_0_22,
  MR_Integer * STATE_VARIABLE_Word_23,
  MR_Integer * NumBitsRead_11,
  MR_Word RB_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(
  MR_Word TypeClassInfo_for_bulk_reader_49,
  MR_Word * Result_4,
  MR_Box STATE_VARIABLE_Buffer_0_19,
  MR_Box * STATE_VARIABLE_Buffer_20);

static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____io_read_buffer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bit_buffer__read____Compare____io_read_buffer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6);

static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_1[3][4];

static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_1[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_error_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3)),
    ((MR_Box) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0)),
    ((MR_Box) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0)),
    ((MR_Box) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__read_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__read_scalar_common_1[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__read_scalar_common_1[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bit_buffer.mh"
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


static const MR_FA_TypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3io__type_ctor_info_binary_input_stream_0io__type_ctor_info_state_0io__type_ctor_info_error_0 = {
  &mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3,
  {
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_binary_input_stream_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_error_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_io_read_buffer_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bit_buffer__read____Unify____io_read_buffer_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer__read____Compare____io_read_buffer_0_0_10001)),
  (MR_String) "bit_buffer.read",
  (MR_String) "io_read_buffer",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3io__type_ctor_info_binary_input_stream_0io__type_ctor_info_state_0io__type_ctor_info_error_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer mercury__bit_buffer__read__bit_buffer__read__functor_number_map_read_buffer_3[1] = { (MR_Integer) 0 };

static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__pseudo_3 = {
  &mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3)
  }
};

static const MR_NotagFunctorDesc mercury__bit_buffer__read__bit_buffer__read__notag_functor_desc_read_buffer_3 = {
  (MR_String) "read_buffer",
  (MR_PseudoTypeInfo) (&mercury__bit_buffer__read__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__pseudo_3),
  (MR_String) "bit_buffer",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3 = {
  (MR_Integer) 3,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__bit_buffer__read____Unify____read_buffer_3_0_10001)),
  ((MR_Box) (mercury__bit_buffer__read____Compare____read_buffer_3_0_10001)),
  (MR_String) "bit_buffer.read",
  (MR_String) "read_buffer",
  { &mercury__bit_buffer__read__bit_buffer__read__notag_functor_desc_read_buffer_3 },
  { &mercury__bit_buffer__read__bit_buffer__read__notag_functor_desc_read_buffer_3 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__bit_buffer__read__bit_buffer__read__functor_number_map_read_buffer_3,

};

static const MR_FA_TypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0bit_buffer__type_ctor_info_error_stream_error_0 = {
  &mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3,
  {
    (MR_TypeInfo) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0),
    (MR_TypeInfo) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0),
    (MR_TypeInfo) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bit_buffer__read____Unify____read_buffer_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer__read____Compare____read_buffer_0_0_10001)),
  (MR_String) "bit_buffer.read",
  (MR_String) "read_buffer",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0bit_buffer__type_ctor_info_error_stream_error_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__bit_buffer__read_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;
  MR_Integer CastX_10 = (MR_Integer) (Cast_HeadVar1_3);
  MR_Integer CastY_11 = (MR_Integer) (Cast_HeadVar2_4);

  succeeded = (CastX_10 == CastY_11);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Box ArgX1_8 = (MR_Box) (Cast_HeadVar1_3);
    MR_Box ArgY1_9 = (MR_Box) (Cast_HeadVar2_4);

    succeeded = mercury__bit_buffer____Unify____bit_buffer_3_0((MR_Word) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0), (MR_Word) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0), (MR_Word) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0), ArgX1_8, ArgY1_9);
  }
  return succeeded;
}

void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_3_0(
  MR_Word TypeInfo_for_Stream_8,
  MR_Word TypeInfo_for_State_9,
  MR_Word TypeInfo_for_Error_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Box ArgX1_4 = (MR_Box) (HeadVar__2_2);
    MR_Box ArgY1_5 = (MR_Box) (HeadVar__3_3);

    mercury__bit_buffer____Compare____bit_buffer_3_0(TypeInfo_for_Stream_8, TypeInfo_for_State_9, TypeInfo_for_Error_10, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_3_0(
  MR_Word TypeInfo_for_Stream_7,
  MR_Word TypeInfo_for_State_8,
  MR_Word TypeInfo_for_Error_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Box ArgX1_3 = (MR_Box) (HeadVar__1_1);
    MR_Box ArgY1_4 = (MR_Box) (HeadVar__2_2);

    succeeded = mercury__bit_buffer____Unify____bit_buffer_3_0(TypeInfo_for_Stream_7, TypeInfo_for_State_8, TypeInfo_for_Error_9, ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__bit_buffer__read____Compare____io_read_buffer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__bit_buffer__read_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____io_read_buffer_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;
  MR_Integer CastX_10 = (MR_Integer) (Cast_HeadVar1_3);
  MR_Integer CastY_11 = (MR_Integer) (Cast_HeadVar2_4);

  succeeded = (CastX_10 == CastY_11);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Box ArgX1_8 = (MR_Box) (Cast_HeadVar1_3);
    MR_Box ArgY1_9 = (MR_Box) (Cast_HeadVar2_4);

    succeeded = mercury__bit_buffer____Unify____bit_buffer_3_0((MR_Word) (&mercury__io__io__type_ctor_info_binary_input_stream_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&mercury__io__io__type_ctor_info_error_0), ArgX1_8, ArgY1_9);
  }
  return succeeded;
}

void MR_CALL 
mercury__bit_buffer__read__finalize_6_p_0(
  MR_Word TypeClassInfo_for_bulk_reader_9,
  MR_Word ReadBuffer_1,
  MR_Box * HeadVar__2_2,
  MR_Box * HeadVar__3_3,
  MR_Box * HeadVar__4_4,
  MR_Integer * HeadVar__5_5,
  MR_Integer * HeadVar__6_6)
{
  MR_Word TypeInfo_25_25;
  MR_Word TypeInfo_26_26;
  MR_Word TypeInfo_27_27;
  MR_Box Buffer_8 = (MR_Box) (ReadBuffer_1);

{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr)Buffer_8 ;
		{

    Stream = Buffer->ML_bit_buffer_stream;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr)Buffer_8 ;
		{

    State = Buffer->ML_bit_buffer_state;


		;}
#undef MR_PROC_LABEL
	*HeadVar__3_3  = (MR_Box) State;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr)Buffer_8 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	*HeadVar__4_4  = (MR_Box) BM;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr)Buffer_8 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	*HeadVar__5_5  = Pos;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_9 ;
	Index = (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_25_25  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_9 ;
	Index = (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_26_26  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_9 ;
	Index = (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_27_27  = TypeInfo;
}
  *HeadVar__6_6 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(TypeInfo_25_25, TypeInfo_26_26, TypeInfo_27_27, ReadBuffer_1);
}

void MR_CALL 
mercury__bit_buffer__read__get_bitmap_6_p_0(
  MR_Word TypeClassInfo_for_bulk_reader_17,
  MR_Box STATE_VARIABLE_BM_0_11,
  MR_Box * STATE_VARIABLE_BM_12,
  MR_Integer * NumBitsRead_8,
  MR_Word * Result_9,
  MR_Word STATE_VARIABLE_Buffer_0_13,
  MR_Word * STATE_VARIABLE_Buffer_14)
{
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_6_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_11 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_16  = NumBits;
}
  mercury__bit_buffer__read__get_bitmap_8_p_0(TypeClassInfo_for_bulk_reader_17, (MR_Integer) 0, Var_16, STATE_VARIABLE_BM_0_11, STATE_VARIABLE_BM_12, NumBitsRead_8, Result_9, STATE_VARIABLE_Buffer_0_13, STATE_VARIABLE_Buffer_14);
}

void MR_CALL 
mercury__bit_buffer__read__get_bitmap_8_p_0(
  MR_Word TypeClassInfo_for_bulk_reader_38,
  MR_Integer Index_9,
  MR_Integer NumBits_10,
  MR_Box STATE_VARIABLE_BM_0_20,
  MR_Box * STATE_VARIABLE_BM_21,
  MR_Integer * NumBitsRead_12,
  MR_Word * Result_13,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  MR_bool succeeded;
  MR_Word Status_15;
  MR_Box STATE_VARIABLE_Buffer_0_22 = (MR_Box) (HeadVar__7_7);
  MR_Box STATE_VARIABLE_Buffer_23;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Word ReadStatus;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_22 ;
		{

    ReadStatus = Buffer->ML_bit_buffer_read_status;


		;}
#undef MR_PROC_LABEL
	Status_15  = ReadStatus;
}
  if ((Status_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer Var_25;
    MR_Integer Var_26;
    MR_Integer Var_27;
    MR_Integer Var_63;
    MR_Integer Var_64;
    MR_Integer Var_65;
    MR_Integer Var_66;

    succeeded = (NumBits_10 > (MR_Integer) 0);
    if (succeeded)
    {
      Var_63 = (MR_Integer) 0;
      succeeded = (Var_63 <= Index_9);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_20 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_64  = NumBits;
}
        succeeded = (Index_9 < Var_64);
        if (succeeded)
        {
          Var_26 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) NumBits_10);
          Var_27 = (MR_Integer) 1;
          Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) Var_27);
          Var_65 = (MR_Integer) 0;
          succeeded = (Var_65 <= Var_25);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_20 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_66  = NumBits;
}
            succeeded = (Var_25 < Var_66);
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word UseStream_16;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Word UseStream;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_22 ;
		{

    UseStream = Buffer->ML_bit_buffer_use_stream;


		;}
#undef MR_PROC_LABEL
	UseStream_16  = UseStream;
}
      switch (UseStream_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Pos_17;
            MR_Integer Size_18;
            MR_Integer Var_31;
            MR_Box Var_33;
            MR_Box Var_34;
            MR_Integer Var_35;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_22 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	Pos_17  = Pos;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_22 ;
		{

    Size = Buffer->ML_bit_buffer_size;


		;}
#undef MR_PROC_LABEL
	Size_18  = Size;
}
            Var_31 = (MR_Integer) ((MR_Unsigned) Size_18 - (MR_Unsigned) Pos_17);
            succeeded = (Var_31 < NumBits_10);
            if (succeeded)
              *NumBitsRead_12 = Var_31;
            else
              *NumBitsRead_12 = NumBits_10;
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_22 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	Var_33  = (MR_Box) BM;
}
            mercury__bitmap__copy_bits_7_p_0((MR_Integer) 0, Var_33, Pos_17, Index_9, *NumBitsRead_12, STATE_VARIABLE_BM_0_20, STATE_VARIABLE_BM_21);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_22 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	Var_34  = (MR_Box) BM;
}
            Var_35 = (MR_Integer) ((MR_Unsigned) Pos_17 + (MR_Unsigned) NumBits_10);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr)Var_34 ;
	Pos = Var_35 ;
	Buffer0 = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_22 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Buffer_23  = (MR_Box) Buffer;
}
            *Result_13 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          mercury__bit_buffer__read__recursively_get_bitmap_9_p_0(TypeClassInfo_for_bulk_reader_38, Index_9, NumBits_10, STATE_VARIABLE_BM_0_20, STATE_VARIABLE_BM_21, (MR_Integer) 0, NumBitsRead_12, Result_13, STATE_VARIABLE_Buffer_0_22, &STATE_VARIABLE_Buffer_23);
          break;
      }
    }
    else
    {
      succeeded = (NumBits_10 == (MR_Integer) 0);
      if (succeeded)
      {
        {
          MR_Integer Var_69;

          succeeded = ((MR_Integer) 0 <= Index_9);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_20 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_69  = NumBits;
}
            succeeded = (Index_9 < Var_69);
          }
        }
        if (!(succeeded))
          succeeded = (Index_9 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        *NumBitsRead_12 = (MR_Integer) 0;
        *Result_13 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
        {
          mercury__bitmap__throw_bounds_error_4_p_0(STATE_VARIABLE_BM_0_20, (MR_String) "bit_buffer.read.get_bitmap", Index_9, NumBits_10);
          return;
        }
      STATE_VARIABLE_Buffer_23 = STATE_VARIABLE_Buffer_0_22;
      *STATE_VARIABLE_BM_21 = STATE_VARIABLE_BM_0_20;
    }
  }
  else
  {
    *NumBitsRead_12 = (MR_Integer) 0;
    *Result_13 = Status_15;
    *STATE_VARIABLE_BM_21 = STATE_VARIABLE_BM_0_20;
    STATE_VARIABLE_Buffer_23 = STATE_VARIABLE_Buffer_0_22;
  }
  *HeadVar__8_8 = (MR_Word) (STATE_VARIABLE_Buffer_23);
}

static void MR_CALL 
mercury__bit_buffer__read__recursively_get_bitmap_9_p_0(
  MR_Word TypeClassInfo_for_bulk_reader_60,
  MR_Integer STATE_VARIABLE_Index_0_22,
  MR_Integer STATE_VARIABLE_NumBits_0_23,
  MR_Box STATE_VARIABLE_BM_0_24,
  MR_Box * STATE_VARIABLE_BM_25,
  MR_Integer STATE_VARIABLE_NumBitsRead_0_26,
  MR_Integer * STATE_VARIABLE_NumBitsRead_27,
  MR_Word * Result_14,
  MR_Box STATE_VARIABLE_Buffer_0_28,
  MR_Box * STATE_VARIABLE_Buffer_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_NumBits_0_23 == (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *Result_14 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Buffer_29 = STATE_VARIABLE_Buffer_0_28;
      *STATE_VARIABLE_NumBitsRead_27 = STATE_VARIABLE_NumBitsRead_0_26;
      *STATE_VARIABLE_BM_25 = STATE_VARIABLE_BM_0_24;
    }
    else
    {
      MR_Word TypeInfo_62_62;
      MR_Word TypeInfo_64_64;
      MR_Word TypeInfo_66_66;
      MR_Integer STATE_VARIABLE_Index_30_30;
      MR_Integer STATE_VARIABLE_NumBits_31_31;
      MR_Box STATE_VARIABLE_BM_32_32;
      MR_Integer STATE_VARIABLE_NumBitsRead_33_33;
      MR_Box STATE_VARIABLE_Buffer_34_34;
      MR_Integer NumBufferedBits_70;
      MR_Integer NumBitsToGet_71;
      MR_Integer Pos0_72;
      MR_Integer Pos_73;
      MR_Word Var_74;
      MR_Box Var_75;
      MR_Box Var_76;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_60 ;
	Index = (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_62_62  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_60 ;
	Index = (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_64_64  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_60 ;
	Index = (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_66_66  = TypeInfo;
}
      Var_74 = (MR_Word) (STATE_VARIABLE_Buffer_0_28);
      NumBufferedBits_70 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(TypeInfo_62_62, TypeInfo_64_64, TypeInfo_66_66, Var_74);
      succeeded = (STATE_VARIABLE_NumBits_0_23 < NumBufferedBits_70);
      if (succeeded)
        NumBitsToGet_71 = STATE_VARIABLE_NumBits_0_23;
      else
        NumBitsToGet_71 = NumBufferedBits_70;
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_28 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	Pos0_72  = Pos;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_28 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	Var_75  = (MR_Box) BM;
}
      mercury__bitmap__copy_bits_7_p_0((MR_Integer) 0, Var_75, Pos0_72, STATE_VARIABLE_Index_0_22, NumBitsToGet_71, STATE_VARIABLE_BM_0_24, &STATE_VARIABLE_BM_32_32);
      Pos_73 = (MR_Integer) ((MR_Unsigned) Pos0_72 + (MR_Unsigned) NumBitsToGet_71);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_28 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	Var_76  = (MR_Box) BM;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr)Var_76 ;
	Pos = Pos_73 ;
	Buffer0 = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_28 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Buffer_34_34  = (MR_Box) Buffer;
}
      STATE_VARIABLE_Index_30_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Index_0_22 + (MR_Unsigned) NumBitsToGet_71);
      STATE_VARIABLE_NumBits_31_31 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBits_0_23 - (MR_Unsigned) NumBitsToGet_71);
      STATE_VARIABLE_NumBitsRead_33_33 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBitsRead_0_26 + (MR_Unsigned) NumBitsToGet_71);
      succeeded = (STATE_VARIABLE_NumBits_31_31 == (MR_Integer) 0);
      if (succeeded)
      {
        *Result_14 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Buffer_29 = STATE_VARIABLE_Buffer_34_34;
        *STATE_VARIABLE_NumBitsRead_27 = STATE_VARIABLE_NumBitsRead_33_33;
        *STATE_VARIABLE_BM_25 = STATE_VARIABLE_BM_32_32;
      }
      else
      {
        MR_Integer Var_35 = (STATE_VARIABLE_Index_30_30 % (MR_Integer) 8);

        succeeded = (Var_35 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word BulkGetResult_16;
          MR_Integer STATE_VARIABLE_Index_37_37;
          MR_Integer STATE_VARIABLE_NumBits_38_38;
          MR_Box STATE_VARIABLE_BM_39_39;
          MR_Integer STATE_VARIABLE_NumBitsRead_40_40;
          MR_Box STATE_VARIABLE_Buffer_41_41;
          MR_Integer StartByteIndex_78 = (STATE_VARIABLE_Index_30_30 / (MR_Integer) 8);
          MR_Integer NumBytesToBulkGet_79 = (STATE_VARIABLE_NumBits_31_31 / (MR_Integer) 8);
          MR_Box Stream_80;
          MR_Box State0_81;
          MR_Integer NumBytesRead_82;
          MR_Box State_83;
          MR_Integer NumBitsBulkRead_85;
          MR_Box STATE_VARIABLE_Buffer_39_88;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *);
          MR_Box conv3_STATE_VARIABLE_BM_39_39;
          MR_Box conv2_NumBytesRead_82;
          MR_Box conv1_BulkGetResult_16;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_34_34 ;
		{

    Stream = Buffer->ML_bit_buffer_stream;


		;}
#undef MR_PROC_LABEL
	Stream_80  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_34_34 ;
		{

    State = Buffer->ML_bit_buffer_state;


		;}
#undef MR_PROC_LABEL
	State0_81  = (MR_Box) State;
}
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_bulk_reader_60, (MR_Integer) 0)), (MR_Integer) 5))));
          func_0(((MR_Box) (TypeClassInfo_for_bulk_reader_60)), Stream_80, ((MR_Box) (StartByteIndex_78)), ((MR_Box) (NumBytesToBulkGet_79)), ((MR_Box) (STATE_VARIABLE_BM_32_32)), &conv3_STATE_VARIABLE_BM_39_39, &conv2_NumBytesRead_82, &conv1_BulkGetResult_16, State0_81, &State_83);
          STATE_VARIABLE_BM_39_39 = ((MR_Box) (conv3_STATE_VARIABLE_BM_39_39));
          NumBytesRead_82 = ((MR_Integer) (conv2_NumBytesRead_82));
          BulkGetResult_16 = ((MR_Word) (conv1_BulkGetResult_16));
          if ((BulkGetResult_16 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_Buffer_39_88 = STATE_VARIABLE_Buffer_34_34;
          else
          {
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word ReadStatus;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	ReadStatus = BulkGetResult_16 ;
	Buffer0 = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_34_34 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_read_status = ReadStatus;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Buffer_39_88  = (MR_Box) Buffer;
}
          }
          NumBitsBulkRead_85 = (MR_Integer) ((MR_Unsigned) NumBytesRead_82 * (MR_Unsigned) 8);
          STATE_VARIABLE_Index_37_37 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Index_30_30 + (MR_Unsigned) NumBitsBulkRead_85);
          STATE_VARIABLE_NumBitsRead_40_40 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBitsRead_33_33 + (MR_Unsigned) NumBitsBulkRead_85);
          STATE_VARIABLE_NumBits_38_38 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBits_31_31 - (MR_Unsigned) NumBitsBulkRead_85);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word State;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	State = (MR_Word) State_83 ;
	Buffer0 = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_39_88 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_state = State;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Buffer_41_41  = (MR_Box) Buffer;
}
          if ((BulkGetResult_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            succeeded = (STATE_VARIABLE_NumBits_38_38 > (MR_Integer) 0);
            if (succeeded)
            {
              MR_Integer LastBits_17;
              MR_Integer NumLastBitsRead_18;
              MR_Word LastBitsResult_19;
              MR_Word STATE_VARIABLE_Buffer_43_43 = (MR_Word) (STATE_VARIABLE_Buffer_41_41);
              MR_Integer Var_44;
              MR_Word STATE_VARIABLE_Buffer_46_46;
              MR_Integer Var_47;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_47  = Bits;
}
              Var_44 = (MR_Integer) ((MR_Unsigned) Var_47 - (MR_Unsigned) STATE_VARIABLE_NumBits_38_38);
              mercury__bit_buffer__read__get_bits_8_p_0(TypeClassInfo_for_bulk_reader_60, Var_44, STATE_VARIABLE_NumBits_38_38, (MR_Integer) 0, &LastBits_17, &NumLastBitsRead_18, &LastBitsResult_19, STATE_VARIABLE_Buffer_43_43, &STATE_VARIABLE_Buffer_46_46);
              *STATE_VARIABLE_Buffer_29 = (MR_Box) (STATE_VARIABLE_Buffer_46_46);
              if ((LastBitsResult_19 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_BM_25 = mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0(STATE_VARIABLE_Index_37_37, STATE_VARIABLE_NumBits_38_38, STATE_VARIABLE_BM_39_39, LastBits_17);
                *Result_14 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                *Result_14 = LastBitsResult_19;
                *STATE_VARIABLE_BM_25 = STATE_VARIABLE_BM_39_39;
              }
              *STATE_VARIABLE_NumBitsRead_27 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBitsRead_40_40 + (MR_Unsigned) NumLastBitsRead_18);
            }
            else
            {
              *Result_14 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Buffer_29 = STATE_VARIABLE_Buffer_41_41;
              *STATE_VARIABLE_NumBitsRead_27 = STATE_VARIABLE_NumBitsRead_40_40;
              *STATE_VARIABLE_BM_25 = STATE_VARIABLE_BM_39_39;
            }
          }
          else
          {
            *Result_14 = BulkGetResult_16;
            *STATE_VARIABLE_BM_25 = STATE_VARIABLE_BM_39_39;
            *STATE_VARIABLE_NumBitsRead_27 = STATE_VARIABLE_NumBitsRead_40_40;
            *STATE_VARIABLE_Buffer_29 = STATE_VARIABLE_Buffer_41_41;
          }
        }
        else
        {
          MR_Word RefillRes_21;
          MR_Box STATE_VARIABLE_Buffer_51_51;

          mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(TypeClassInfo_for_bulk_reader_60, &RefillRes_21, STATE_VARIABLE_Buffer_34_34, &STATE_VARIABLE_Buffer_51_51);
          if ((RefillRes_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word TypeInfo_67_67;
            MR_Word TypeInfo_68_68;
            MR_Word TypeInfo_69_69;
            MR_Integer Var_52;
            MR_Word Var_54 = (MR_Word) (STATE_VARIABLE_Buffer_51_51);

{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_60 ;
	Index = (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_67_67  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_60 ;
	Index = (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_68_68  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_60 ;
	Index = (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_69_69  = TypeInfo;
}
            Var_52 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(TypeInfo_67_67, TypeInfo_68_68, TypeInfo_69_69, Var_54);
            succeeded = (Var_52 > (MR_Integer) 0);
            if (succeeded)
            {
              MR_Integer next_value_of_STATE_VARIABLE_Index_0_22 = STATE_VARIABLE_Index_30_30;
              MR_Integer next_value_of_STATE_VARIABLE_NumBits_0_23 = STATE_VARIABLE_NumBits_31_31;
              MR_Box next_value_of_STATE_VARIABLE_BM_0_24 = STATE_VARIABLE_BM_32_32;
              MR_Integer next_value_of_STATE_VARIABLE_NumBitsRead_0_26 = STATE_VARIABLE_NumBitsRead_33_33;
              MR_Box next_value_of_STATE_VARIABLE_Buffer_0_28 = STATE_VARIABLE_Buffer_51_51;

              // direct tailcall eliminated
              ;
              STATE_VARIABLE_Index_0_22 = next_value_of_STATE_VARIABLE_Index_0_22;
              STATE_VARIABLE_NumBits_0_23 = next_value_of_STATE_VARIABLE_NumBits_0_23;
              STATE_VARIABLE_BM_0_24 = next_value_of_STATE_VARIABLE_BM_0_24;
              STATE_VARIABLE_NumBitsRead_0_26 = next_value_of_STATE_VARIABLE_NumBitsRead_0_26;
              STATE_VARIABLE_Buffer_0_28 = next_value_of_STATE_VARIABLE_Buffer_0_28;
              continue;
            }
            else
            {
              *Result_14 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Buffer_29 = STATE_VARIABLE_Buffer_51_51;
              *STATE_VARIABLE_NumBitsRead_27 = STATE_VARIABLE_NumBitsRead_33_33;
              *STATE_VARIABLE_BM_25 = STATE_VARIABLE_BM_32_32;
            }
          }
          else
          {
            *Result_14 = RefillRes_21;
            *STATE_VARIABLE_BM_25 = STATE_VARIABLE_BM_32_32;
            *STATE_VARIABLE_NumBitsRead_27 = STATE_VARIABLE_NumBitsRead_33_33;
            *STATE_VARIABLE_Buffer_29 = STATE_VARIABLE_Buffer_51_51;
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__bit_buffer__read__get_bit_3_p_0(
  MR_Word TypeClassInfo_for_bulk_reader_17,
  MR_Word * BitResult_4,
  MR_Word STATE_VARIABLE_Buffer_0_10,
  MR_Word * STATE_VARIABLE_Buffer_11)
{
  MR_bool succeeded;
  MR_Integer Word_6;
  MR_Integer NumBitsRead_7;
  MR_Word BitsResult_8;

  mercury__bit_buffer__read__get_bits_8_p_0(TypeClassInfo_for_bulk_reader_17, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, &Word_6, &NumBitsRead_7, &BitsResult_8, STATE_VARIABLE_Buffer_0_10, STATE_VARIABLE_Buffer_11);
  if ((BitsResult_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (NumBitsRead_7 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word Var_16;

      succeeded = (Word_6 == (MR_Integer) 0);
      if (succeeded)
        Var_16 = (MR_Integer) 0;
      else
        Var_16 = (MR_Integer) 1;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *BitResult_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
      }
    }
    else
      *BitResult_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Box Error_9 = (MR_hl_field(1, BitsResult_8, (MR_Integer) 0));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *BitResult_4 = base;
      MR_hl_field(2, base, 0) = Error_9;
    }
  }
}

void MR_CALL 
mercury__bit_buffer__read__get_bits_8_p_0(
  MR_Word TypeClassInfo_for_bulk_reader_36,
  MR_Integer Index_9,
  MR_Integer NumBits_10,
  MR_Integer STATE_VARIABLE_Word_0_18,
  MR_Integer * HeadVar__4_4,
  MR_Integer * NumBitsRead_12,
  MR_Word * BitsResult_13,
  MR_Word STATE_VARIABLE_Buffer_0_20,
  MR_Word * STATE_VARIABLE_Buffer_21)
{
  MR_bool succeeded;
  MR_Word Status_15;
  MR_Integer STATE_VARIABLE_Word_19;
  MR_Box Var_22 = (MR_Box) (STATE_VARIABLE_Buffer_0_20);

{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Word ReadStatus;

	Buffer = (ML_BitBufferPtr)Var_22 ;
		{

    ReadStatus = Buffer->ML_bit_buffer_read_status;


		;}
#undef MR_PROC_LABEL
	Status_15  = ReadStatus;
}
  if ((Status_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (NumBits_10 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Integer Var_24;
      MR_Word TypeInfo_43_43;
      MR_Word TypeInfo_44_44;
      MR_Word TypeInfo_45_45;
      MR_Integer Var_27;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_24  = Bits;
}
      succeeded = (NumBits_10 > Var_24);
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140bit_buffer.read.get_bits\'/8", (MR_String) "invalid number of bits");
          return;
        }
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_36 ;
	Index = (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_43_43  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_36 ;
	Index = (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_44_44  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_36 ;
	Index = (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_45_45  = TypeInfo;
}
      Var_27 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(TypeInfo_43_43, TypeInfo_44_44, TypeInfo_45_45, STATE_VARIABLE_Buffer_0_20);
      succeeded = (Var_27 >= NumBits_10);
      if (succeeded)
      {
        *BitsResult_13 = (MR_Word) ((MR_Unsigned) 0U);
        mercury__bit_buffer__read__do_get_bits_7_p_0(TypeClassInfo_for_bulk_reader_36, Index_9, NumBits_10, STATE_VARIABLE_Word_0_18, &STATE_VARIABLE_Word_19, NumBitsRead_12, STATE_VARIABLE_Buffer_0_20, STATE_VARIABLE_Buffer_21);
      }
      else
      {
        MR_Word RefillResult_16;
        MR_Word STATE_VARIABLE_Buffer_30_30;
        MR_Box STATE_VARIABLE_Buffer_0_46 = (MR_Box) (STATE_VARIABLE_Buffer_0_20);
        MR_Box STATE_VARIABLE_Buffer_47;

        mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(TypeClassInfo_for_bulk_reader_36, &RefillResult_16, STATE_VARIABLE_Buffer_0_46, &STATE_VARIABLE_Buffer_47);
        STATE_VARIABLE_Buffer_30_30 = (MR_Word) (STATE_VARIABLE_Buffer_47);
        if ((RefillResult_16 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *BitsResult_13 = (MR_Word) ((MR_Unsigned) 0U);
          mercury__bit_buffer__read__do_get_bits_7_p_0(TypeClassInfo_for_bulk_reader_36, Index_9, NumBits_10, STATE_VARIABLE_Word_0_18, &STATE_VARIABLE_Word_19, NumBitsRead_12, STATE_VARIABLE_Buffer_30_30, STATE_VARIABLE_Buffer_21);
        }
        else
        {
          *NumBitsRead_12 = (MR_Integer) 0;
          *BitsResult_13 = RefillResult_16;
          STATE_VARIABLE_Word_19 = STATE_VARIABLE_Word_0_18;
          *STATE_VARIABLE_Buffer_21 = STATE_VARIABLE_Buffer_30_30;
        }
      }
    }
    else
    {
      succeeded = (NumBits_10 == (MR_Integer) 0);
      if (succeeded)
      {
        *NumBitsRead_12 = (MR_Integer) 0;
        *BitsResult_13 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140bit_buffer.read.get_bits\'/8", (MR_String) "negative number of bits");
          return;
        }
      *STATE_VARIABLE_Buffer_21 = STATE_VARIABLE_Buffer_0_20;
      STATE_VARIABLE_Word_19 = STATE_VARIABLE_Word_0_18;
    }
  }
  else
  {
    *NumBitsRead_12 = (MR_Integer) 0;
    *BitsResult_13 = Status_15;
    STATE_VARIABLE_Word_19 = STATE_VARIABLE_Word_0_18;
    *STATE_VARIABLE_Buffer_21 = STATE_VARIABLE_Buffer_0_20;
  }
  *HeadVar__4_4 = STATE_VARIABLE_Word_19;
}

static void MR_CALL 
mercury__bit_buffer__read__do_get_bits_7_p_0(
  MR_Word TypeClassInfo_for_bulk_reader_45,
  MR_Integer Index_8,
  MR_Integer NumBits_9,
  MR_Integer STATE_VARIABLE_Word_0_22,
  MR_Integer * STATE_VARIABLE_Word_23,
  MR_Integer * NumBitsRead_11,
  MR_Word RB_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;
  MR_Word TypeInfo_47_47;
  MR_Word TypeInfo_49_49;
  MR_Word TypeInfo_51_51;
  MR_Integer NumBitsAvailable_14;
  MR_Integer Pos_15;
  MR_Integer Bits0_16;
  MR_Integer Bits_17;
  MR_Integer LastBit_18;
  MR_Integer Shift_19;
  MR_Integer BitMask_20;
  MR_Integer BitsMask_21;
  MR_Box STATE_VARIABLE_Buffer_0_24 = (MR_Box) (RB_6);
  MR_Box STATE_VARIABLE_Buffer_25;
  MR_Box Var_26;
  MR_Integer Var_27;
  MR_Integer Var_28;
  MR_Integer Var_30;
  MR_Integer Var_31;
  MR_Integer Var_34;
  MR_Integer Var_36;
  MR_Integer STATE_VARIABLE_Word_38_38;
  MR_Integer Var_39;
  MR_Integer Var_40;
  MR_Integer Var_42;
  MR_Box Var_43;
  MR_Integer Var_44;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_45 ;
	Index = (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_47_47  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_45 ;
	Index = (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_49_49  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_45 ;
	Index = (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_51_51  = TypeInfo;
}
  NumBitsAvailable_14 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(TypeInfo_47_47, TypeInfo_49_49, TypeInfo_51_51, RB_6);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_24 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	Pos_15  = Pos;
}
  succeeded = (NumBitsAvailable_14 < NumBits_9);
  if (succeeded)
    *NumBitsRead_11 = NumBitsAvailable_14;
  else
    *NumBitsRead_11 = NumBits_9;
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_24 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	Var_26  = (MR_Box) BM;
}
  Bits0_16 = mercury__bitmap__bits_3_f_0(Pos_15, *NumBitsRead_11, Var_26);
  Var_27 = (MR_Integer) ((MR_Unsigned) NumBits_9 - (MR_Unsigned) *NumBitsRead_11);
  Bits_17 = (Bits0_16 << Var_27);
  Var_28 = (MR_Integer) ((MR_Unsigned) Index_8 + (MR_Unsigned) *NumBitsRead_11);
  LastBit_18 = (MR_Integer) ((MR_Unsigned) Var_28 - (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_31  = Bits;
}
  Var_30 = (MR_Integer) ((MR_Unsigned) Var_31 - (MR_Unsigned) 1);
  Shift_19 = (MR_Integer) ((MR_Unsigned) Var_30 - (MR_Unsigned) LastBit_18);
  Var_34 = (MR_Integer) ((MR_Unsigned) NumBits_9 - (MR_Unsigned) 1);
  BitMask_20 = ((MR_Integer) 1 << Var_34);
  Var_36 = (MR_Integer) ((MR_Unsigned) BitMask_20 - (MR_Unsigned) 1);
  BitsMask_21 = (BitMask_20 | Var_36);
  Var_40 = (BitsMask_21 << Shift_19);
  Var_39 = ~(Var_40);
  STATE_VARIABLE_Word_38_38 = (STATE_VARIABLE_Word_0_22 & Var_39);
  Var_42 = (Bits_17 << Shift_19);
  *STATE_VARIABLE_Word_23 = (STATE_VARIABLE_Word_38_38 | Var_42);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_24 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	Var_43  = (MR_Box) BM;
}
  Var_44 = (MR_Integer) ((MR_Unsigned) Pos_15 + (MR_Unsigned) NumBits_9);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr)Var_43 ;
	Pos = Var_44 ;
	Buffer0 = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_24 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Buffer_25  = (MR_Box) Buffer;
}
  *HeadVar__7_7 = (MR_Word) (STATE_VARIABLE_Buffer_25);
}

void MR_CALL 
mercury__bit_buffer__read__buffer_status_3_p_0(
  MR_Word TypeClassInfo_for_bulk_reader_18,
  MR_Word * Result_4,
  MR_Word STATE_VARIABLE_Buffer_0_11,
  MR_Word * STATE_VARIABLE_Buffer_12)
{
  MR_bool succeeded;
  MR_Word Status_6;
  MR_Box Var_13 = (MR_Box) (STATE_VARIABLE_Buffer_0_11);

{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word ReadStatus;

	Buffer = (ML_BitBufferPtr)Var_13 ;
		{

    ReadStatus = Buffer->ML_bit_buffer_read_status;


		;}
#undef MR_PROC_LABEL
	Status_6  = ReadStatus;
}
  if ((Status_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Integer NumBufferedBits_7;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_18 ;
	Index = (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_25_25  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_18 ;
	Index = (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_26_26  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_18 ;
	Index = (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_27_27  = TypeInfo;
}
    NumBufferedBits_7 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(TypeInfo_25_25, TypeInfo_26_26, TypeInfo_27_27, STATE_VARIABLE_Buffer_0_11);
    succeeded = (NumBufferedBits_7 > (MR_Integer) 0);
    if (succeeded)
    {
      *Result_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Buffer_12 = STATE_VARIABLE_Buffer_0_11;
    }
    else
    {
      MR_Word RefillResult_8;
      MR_Box STATE_VARIABLE_Buffer_0_31 = (MR_Box) (STATE_VARIABLE_Buffer_0_11);
      MR_Box STATE_VARIABLE_Buffer_32;

      mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(TypeClassInfo_for_bulk_reader_18, &RefillResult_8, STATE_VARIABLE_Buffer_0_31, &STATE_VARIABLE_Buffer_32);
      *STATE_VARIABLE_Buffer_12 = (MR_Word) (STATE_VARIABLE_Buffer_32);
      if ((RefillResult_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeInfo_28_28;
        MR_Word TypeInfo_29_29;
        MR_Word TypeInfo_30_30;
        MR_Integer NewNumBufferedBits_9;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_18 ;
	Index = (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_28_28  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_18 ;
	Index = (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_29_29  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_18 ;
	Index = (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_30_30  = TypeInfo;
}
        NewNumBufferedBits_9 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(TypeInfo_28_28, TypeInfo_29_29, TypeInfo_30_30, *STATE_VARIABLE_Buffer_12);
        succeeded = (NewNumBufferedBits_9 > (MR_Integer) 0);
        if (succeeded)
          *Result_4 = (MR_Word) ((MR_Unsigned) 0U);
        else
          *Result_4 = (MR_Word) ((MR_Unsigned) 4U);
      }
      else
      {
        MR_Box Err_10 = (MR_hl_field(1, RefillResult_8, (MR_Integer) 0));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_4 = base;
          MR_hl_field(1, base, 0) = Err_10;
        }
      }
    }
  }
  else
  {
    MR_Box Err_17 = (MR_hl_field(1, Status_6, (MR_Integer) 0));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_4 = base;
      MR_hl_field(1, base, 0) = Err_17;
    }
    *STATE_VARIABLE_Buffer_12 = STATE_VARIABLE_Buffer_0_11;
  }
}

static void MR_CALL 
mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(
  MR_Word TypeClassInfo_for_bulk_reader_49,
  MR_Word * Result_4,
  MR_Box STATE_VARIABLE_Buffer_0_19,
  MR_Box * STATE_VARIABLE_Buffer_20)
{
  MR_bool succeeded;
  MR_Word UseStream_6;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word UseStream;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_19 ;
		{

    UseStream = Buffer->ML_bit_buffer_use_stream;


		;}
#undef MR_PROC_LABEL
	UseStream_6  = UseStream;
}
  switch (UseStream_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Result_4 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Buffer_20 = STATE_VARIABLE_Buffer_0_19;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Remain_11;
        MR_Integer OldPos_12;
        MR_Integer ChunkSize_13;
        MR_Integer StartByteIndex_14;
        MR_Integer NumBytesToRead_15;
        MR_Box Stream_16;
        MR_Integer NumBytesRead_17;
        MR_Box STATE_VARIABLE_BM_26_26;
        MR_Integer STATE_VARIABLE_Size_28_28;
        MR_Box STATE_VARIABLE_State_29_29;
        MR_Integer STATE_VARIABLE_Pos_30_30;
        MR_Integer Var_31;
        MR_Box STATE_VARIABLE_BM_33_33;
        MR_Integer Var_35;
        MR_Integer Var_36;
        MR_Box STATE_VARIABLE_BM_39_39;
        MR_Box STATE_VARIABLE_State_40_40;
        MR_Integer STATE_VARIABLE_Size_41_41;
        MR_Box STATE_VARIABLE_Buffer_46_46;
        MR_Box STATE_VARIABLE_Buffer_48_48;
        MR_Word TypeInfo_56_56;
        MR_Word TypeInfo_57_57;
        MR_Word TypeInfo_58_58;
        MR_Integer Var_21;
        MR_Integer Var_22;
        MR_Word Var_23 = (MR_Word) (STATE_VARIABLE_Buffer_0_19);
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_BM_39_39;
        MR_Box conv2_NumBytesRead_17;
        MR_Box conv1_Result_4;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_49 ;
	Index = (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_56_56  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_49 ;
	Index = (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_57_57  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_49 ;
	Index = (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_58_58  = TypeInfo;
}
        Var_21 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(TypeInfo_56_56, TypeInfo_57_57, TypeInfo_58_58, Var_23);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_22  = Bits;
}
        succeeded = (Var_21 <= Var_22);
        if (!(succeeded))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140bit_buffer.read.do_refill_read_buffer\'/3", (MR_String) "too many bits in buffer");
            return;
          }
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_19 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_BM_26_26  = (MR_Box) BM;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_19 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	OldPos_12  = Pos;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_19 ;
		{

    Size = Buffer->ML_bit_buffer_size;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Size_28_28  = Size;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_19 ;
		{

    State = Buffer->ML_bit_buffer_state;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_State_29_29  = (MR_Box) State;
}
        Remain_11 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Size_28_28 - (MR_Unsigned) OldPos_12);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_31  = Bits;
}
        STATE_VARIABLE_Pos_30_30 = (MR_Integer) ((MR_Unsigned) Var_31 - (MR_Unsigned) Remain_11);
        succeeded = (Remain_11 > (MR_Integer) 0);
        if (succeeded)
        {
          MR_Integer Var_34;

          Var_34 = mercury__bitmap__bits_3_f_0(OldPos_12, Remain_11, STATE_VARIABLE_BM_26_26);
          STATE_VARIABLE_BM_33_33 = mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0(STATE_VARIABLE_Pos_30_30, Remain_11, STATE_VARIABLE_BM_26_26, Var_34);
        }
        else
          STATE_VARIABLE_BM_33_33 = STATE_VARIABLE_BM_26_26;
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_35  = Bits;
}
        ChunkSize_13 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Size_28_28 - (MR_Unsigned) Var_35);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_36  = Bits;
}
        StartByteIndex_14 = (Var_36 / (MR_Integer) 8);
        NumBytesToRead_15 = (ChunkSize_13 / (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_19 ;
		{

    Stream = Buffer->ML_bit_buffer_stream;


		;}
#undef MR_PROC_LABEL
	Stream_16  = (MR_Box) Stream;
}
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_bulk_reader_49, (MR_Integer) 0)), (MR_Integer) 5))));
        func_0(((MR_Box) (TypeClassInfo_for_bulk_reader_49)), Stream_16, ((MR_Box) (StartByteIndex_14)), ((MR_Box) (NumBytesToRead_15)), ((MR_Box) (STATE_VARIABLE_BM_33_33)), &conv3_STATE_VARIABLE_BM_39_39, &conv2_NumBytesRead_17, &conv1_Result_4, STATE_VARIABLE_State_29_29, &STATE_VARIABLE_State_40_40);
        STATE_VARIABLE_BM_39_39 = ((MR_Box) (conv3_STATE_VARIABLE_BM_39_39));
        NumBytesRead_17 = ((MR_Integer) (conv2_NumBytesRead_17));
        *Result_4 = ((MR_Word) (conv1_Result_4));
        succeeded = (NumBytesRead_17 == NumBytesToRead_15);
        if (succeeded)
        {
          STATE_VARIABLE_Size_41_41 = STATE_VARIABLE_Size_28_28;
          STATE_VARIABLE_Buffer_46_46 = STATE_VARIABLE_Buffer_0_19;
        }
        else
        {
          MR_Integer Var_42 = (MR_Integer) ((MR_Unsigned) NumBytesRead_17 * (MR_Unsigned) 8);
          MR_Integer Var_44;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_44  = Bits;
}
          STATE_VARIABLE_Size_41_41 = (MR_Integer) ((MR_Unsigned) Var_42 + (MR_Unsigned) Var_44);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word UseStream;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	UseStream = (MR_Integer) 0 ;
	Buffer0 = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_0_19 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_use_stream = UseStream;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Buffer_46_46  = (MR_Box) Buffer;
}
        }
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Word State;
	MR_Word FilledBMs;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_39_39 ;
	Pos = STATE_VARIABLE_Pos_30_30 ;
	Size = STATE_VARIABLE_Size_41_41 ;
	State = (MR_Word) STATE_VARIABLE_State_40_40 ;
	FilledBMs = (MR_Word) ((MR_Unsigned) 0U) ;
	Buffer0 = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_46_46 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = FilledBMs;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Buffer_48_48  = (MR_Box) Buffer;
}
        if ((*Result_4 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Buffer_20 = STATE_VARIABLE_Buffer_48_48;
        else
        {
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word ReadStatus;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	ReadStatus = *Result_4 ;
	Buffer0 = (ML_BitBufferPtr)STATE_VARIABLE_Buffer_48_48 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_read_status = ReadStatus;


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_Buffer_20  = (MR_Box) Buffer;
}
        }
      }
      break;
  }
}

MR_Integer MR_CALL 
mercury__bit_buffer__read__num_bits_to_byte_boundary_1_f_0(
  MR_Word TypeInfo_10_10,
  MR_Word TypeInfo_11_11,
  MR_Word TypeInfo_12_12,
  MR_Word Buffer_3)
{
  MR_bool succeeded;
  MR_Integer NumBits_4;
  MR_Integer Pos_5;
  MR_Integer PosInByte_6;
  MR_Box Var_7 = (MR_Box) (Buffer_3);

{
#define MR_PROC_LABEL mercury__bit_buffer__read__num_bits_to_byte_boundary_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr)Var_7 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	Pos_5  = Pos;
}
  PosInByte_6 = (Pos_5 % (MR_Integer) 8);
  succeeded = (PosInByte_6 == (MR_Integer) 0);
  if (succeeded)
    NumBits_4 = (MR_Integer) 0;
  else
    NumBits_4 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) PosInByte_6);
  return NumBits_4;
}

MR_Integer MR_CALL 
mercury__bit_buffer__read__num_buffered_bits_1_f_0(
  MR_Word TypeInfo_10_10,
  MR_Word TypeInfo_11_11,
  MR_Word TypeInfo_12_12,
  MR_Word Buffer_3)
{
  MR_bool succeeded;
  MR_Integer HeadVar__2_2;
  MR_Integer Var_4;
  MR_Integer Var_5;
  MR_Box Var_6 = (MR_Box) (Buffer_3);
  MR_Integer Var_7;
  MR_Box Var_8;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__num_buffered_bits_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr)Var_6 ;
		{

    Size = Buffer->ML_bit_buffer_size;


		;}
#undef MR_PROC_LABEL
	Var_5  = Size;
}
  Var_8 = (MR_Box) (Buffer_3);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__num_buffered_bits_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr)Var_8 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	Var_7  = Pos;
}
  Var_4 = (MR_Integer) ((MR_Unsigned) Var_5 - (MR_Unsigned) Var_7);
  succeeded = (Var_4 > (MR_Integer) 0);
  if (succeeded)
    HeadVar__2_2 = Var_4;
  else
    HeadVar__2_2 = (MR_Integer) 0;
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__bit_buffer__read__new_bitmap_reader_1_f_0(
  MR_Box BM_3)
{
  MR_Word HeadVar__2_2;
  MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_bitmap_reader_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_5  = NumBits;
}
  HeadVar__2_2 = mercury__bit_buffer__read__new_bitmap_reader_3_f_0(BM_3, (MR_Integer) 0, Var_5);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__bit_buffer__read__new_bitmap_reader_3_f_0(
  MR_Box BM_5,
  MR_Integer StartIndex_6,
  MR_Integer NumBits_7)
{
  MR_Word Buffer_8;
  MR_Box Var_9;

  Var_9 = mercury__bit_buffer__new_buffer_6_f_0((MR_Word) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0), (MR_Word) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0), (MR_Word) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0), BM_5, StartIndex_6, NumBits_7, (MR_Integer) 0, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)));
  Buffer_8 = (MR_Word) (Var_9);
  return Buffer_8;
}

MR_Word MR_CALL 
mercury__bit_buffer__read__new_3_f_0(
  MR_Word TypeClassInfo_for_bulk_reader_20,
  MR_Integer NumBytes_5,
  MR_Box Stream_6,
  MR_Box State_7)
{
  MR_bool succeeded;
  MR_Word Buffer_8;
  MR_Word TypeInfo_22_22;
  MR_Word TypeInfo_24_24;
  MR_Word TypeInfo_26_26;
  MR_Integer SizeInBits_9 = (MR_Integer) ((MR_Unsigned) NumBytes_5 * (MR_Unsigned) 8);
  MR_Integer ChunkSize_10;
  MR_Box BM_12;
  MR_Integer Pos_13;
  MR_Integer Var_15;
  MR_Integer Var_16;
  MR_Box Var_18;

{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_15  = Bits;
}
  succeeded = (SizeInBits_9 > Var_15);
  if (succeeded)
    ChunkSize_10 = SizeInBits_9;
  else
    ChunkSize_10 = Var_15;
{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_16  = Bits;
}
  Pos_13 = (MR_Integer) ((MR_Unsigned) ChunkSize_10 + (MR_Unsigned) Var_16);
  BM_12 = mercury__bitmap__init_2_f_0(Pos_13, (MR_Integer) 0);
{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_20 ;
	Index = (MR_Integer) 3 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_22_22  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_20 ;
	Index = (MR_Integer) 6 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_24_24  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_bulk_reader_20 ;
	Index = (MR_Integer) 7 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_26_26  = TypeInfo;
}
  Var_18 = mercury__bit_buffer__new_buffer_6_f_0(TypeInfo_22_22, TypeInfo_24_24, TypeInfo_26_26, BM_12, Pos_13, Pos_13, (MR_Integer) 1, Stream_6, State_7);
  Buffer_8 = (MR_Word) (Var_18);
  return Buffer_8;
}

static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____io_read_buffer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bit_buffer__read____Unify____io_read_buffer_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__bit_buffer__read____Compare____io_read_buffer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bit_buffer__read____Compare____io_read_buffer_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_bool succeeded;

  succeeded = mercury__bit_buffer__read____Unify____read_buffer_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  return succeeded;
}

static void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bit_buffer__read____Compare____read_buffer_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bit_buffer__read____Unify____read_buffer_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bit_buffer__read____Compare____read_buffer_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__bit_buffer__read__init(void)
{
}

void mercury__bit_buffer__read__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_io_read_buffer_0);
	MR_register_type_ctor_info(&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3);
	MR_register_type_ctor_info(&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_0);
}

void mercury__bit_buffer__read__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__bit_buffer__read__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module bit_buffer.read.
