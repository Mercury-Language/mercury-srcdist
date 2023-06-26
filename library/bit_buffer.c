/*
** Automatically generated from `bit_buffer.m'
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


// :- module bit_buffer.
// :- implementation.

/*
INIT mercury__bit_buffer__init
ENDINIT
*/

#include "bit_buffer.mih"


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
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_VA_TypeInfo_Struct0 mercury__bit_buffer____vti_tuple_0;

static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0;

static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_state_0_0;

static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_ordinal_ordered_error_state_0[1];

static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_state_0[1];

static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_state_0[1];

static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_0_0;

static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_ordinal_ordered_error_stream_0[1];

static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_0[1];

static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_0[1];

static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_error_0_0;

static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_ordinal_ordered_error_stream_error_0[1];

static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_error_0[1];

static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_error_0[1];

static MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6);

static MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bit_buffer____Compare____error_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bit_buffer____Compare____error_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bit_buffer____Compare____error_stream_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);


static /* final */ const MR_Box mercury__bit_buffer_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__bit_buffer_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__bit_buffer_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__bit_buffer_scalar_common_4[1][1];




static /* final */ const MR_Box mercury__bit_buffer_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer_scalar_common_4[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
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


const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3 = {
  (MR_Integer) 3,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__bit_buffer____Unify____bit_buffer_3_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____bit_buffer_3_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "bit_buffer",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_VA_TypeInfo_Struct0 mercury__bit_buffer____vti_tuple_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 0,
  { 0 }

};

static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0 = {
  &mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) (&mercury__bit_buffer____vti_tuple_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__bit_buffer____Unify____bit_buffer_2_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____bit_buffer_2_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "bit_buffer",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__bit_buffer__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_state_0_0 = {
  (MR_String) "error_state",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_ordinal_ordered_error_state_0[1] = { &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_state_0_0 };

static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_state_0[1] = { &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_state_0_0 };

static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_state_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__bit_buffer____Unify____error_state_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____error_state_0_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "error_state",
  { mercury__bit_buffer__bit_buffer__enum_name_ordered_error_state_0 },
  { mercury__bit_buffer__bit_buffer__enum_ordinal_ordered_error_state_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__bit_buffer__bit_buffer__functor_number_map_error_state_0,

};

static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_0_0 = {
  (MR_String) "error_stream",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_ordinal_ordered_error_stream_0[1] = { &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_0_0 };

static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_0[1] = { &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_0_0 };

static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__bit_buffer____Unify____error_stream_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____error_stream_0_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "error_stream",
  { mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_0 },
  { mercury__bit_buffer__bit_buffer__enum_ordinal_ordered_error_stream_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_0,

};

static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_error_0_0 = {
  (MR_String) "error_stream_error",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_ordinal_ordered_error_stream_error_0[1] = { &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_error_0_0 };

static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_error_0[1] = { &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_error_0_0 };

static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_error_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__bit_buffer____Unify____error_stream_error_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____error_stream_error_0_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "error_stream_error",
  { mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_error_0 },
  { mercury__bit_buffer__bit_buffer__enum_ordinal_ordered_error_stream_error_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_error_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__input__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__error__arity1__bit_buffer__error_stream_error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__bulk_reader__arity5__bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 5)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_p_0_10001))
};

void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__2_6)
{
  {
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0), ((MR_Box) ((MR_Integer) 0)));
    return;
  }
}

void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_p_0(
  MR_String * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_String) "error_stream";
}

void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_p_0(void)
{
  {
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0), ((MR_Box) ((MR_Integer) 0)));
    return;
  }
}

MR_String MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_f_0(void)
{
  return (MR_String) "method called for error_stream";
}

void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_p_0(
  MR_Integer HeadVar__2_11,
  MR_Integer HeadVar__3_12,
  MR_Box STATE_VARIABLE_BM_0_15,
  MR_Box * STATE_VARIABLE_BM_16,
  MR_Integer * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  *HeadVar__6_6 = (MR_Integer) 0;
  *HeadVar__7_7 = (MR_Word) (MR_mkword(1, &mercury__bit_buffer_scalar_common_4[0]));
  *STATE_VARIABLE_BM_16 = STATE_VARIABLE_BM_0_15;
}

void MR_CALL 
mercury__bit_buffer____Compare____error_stream_error_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_error_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__bit_buffer____Compare____error_stream_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__bit_buffer____Compare____error_state_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_state_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_2_0(
  MR_Word TypeInfo_for_Stream_6,
  MR_Word TypeInfo_for_State_7,
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Box Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Box Cast_HeadVar2_5 = HeadVar__3_3;
  MR_Word Cast_HeadVar1_11 = (MR_Word) (Cast_HeadVar1_4);
  MR_Word Cast_HeadVar2_12 = (MR_Word) (Cast_HeadVar2_5);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_11, Cast_HeadVar2_12);
}

MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_2_0(
  MR_Word TypeInfo_for_Stream_5,
  MR_Word TypeInfo_for_State_6,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Box Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Box Cast_HeadVar2_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar1_8 = (MR_Word) (Cast_HeadVar1_3);
  MR_Word Cast_HeadVar2_9 = (MR_Word) (Cast_HeadVar2_4);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_8, Cast_HeadVar2_9);
  return succeeded;
}

void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_3_0(
  MR_Word TypeInfo_for_Stream_6,
  MR_Word TypeInfo_for_State_7,
  MR_Word TypeInfo_for_Error_8,
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_3_0(
  MR_Word TypeInfo_for_Stream_5,
  MR_Word TypeInfo_for_State_6,
  MR_Word TypeInfo_for_Error_7,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__bit_buffer__set_read_status_3_p_0(
  MR_Word TypeInfo_for_Error_4,
  MR_Word TypeInfo_for_Stream_5,
  MR_Word TypeInfo_for_State_6,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
{
#define MR_PROC_LABEL mercury__bit_buffer__set_read_status_3_p_0

	MR_Word ReadStatus;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	ReadStatus = HeadVar__1_1 ;
	Buffer0 = (ML_BitBufferPtr)HeadVar__2_2 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_read_status = ReadStatus;


		;}
#undef MR_PROC_LABEL
	*HeadVar__3_3  = (MR_Box) Buffer;
}
}

void MR_CALL 
mercury__bit_buffer__set_use_stream_3_p_0(
  MR_Word TypeInfo_for_Stream_4,
  MR_Word TypeInfo_for_State_5,
  MR_Word TypeInfo_for_Error_6,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
{
#define MR_PROC_LABEL mercury__bit_buffer__set_use_stream_3_p_0

	MR_Word UseStream;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	UseStream = HeadVar__1_1 ;
	Buffer0 = (ML_BitBufferPtr)HeadVar__2_2 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_use_stream = UseStream;


		;}
#undef MR_PROC_LABEL
	*HeadVar__3_3  = (MR_Box) Buffer;
}
}

void MR_CALL 
mercury__bit_buffer__set_state_3_p_0(
  MR_Word TypeInfo_for_State_4,
  MR_Word TypeInfo_for_Stream_5,
  MR_Word TypeInfo_for_Error_6,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
{
#define MR_PROC_LABEL mercury__bit_buffer__set_state_3_p_0

	MR_Word State;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	State = (MR_Word) HeadVar__1_1 ;
	Buffer0 = (ML_BitBufferPtr)HeadVar__2_2 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_state = State;


		;}
#undef MR_PROC_LABEL
	*HeadVar__3_3  = (MR_Box) Buffer;
}
}

void MR_CALL 
mercury__bit_buffer__set_bitmap_4_p_0(
  MR_Word TypeInfo_for_Stream_5,
  MR_Word TypeInfo_for_State_6,
  MR_Word TypeInfo_for_Error_7,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__bit_buffer__set_bitmap_4_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr)HeadVar__1_1 ;
	Pos = HeadVar__2_2 ;
	Buffer0 = (ML_BitBufferPtr)HeadVar__3_3 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;


		;}
#undef MR_PROC_LABEL
	*HeadVar__4_4  = (MR_Box) Buffer;
}
}

void MR_CALL 
mercury__bit_buffer__set_all_7_p_0(
  MR_Word TypeInfo_for_State_8,
  MR_Word TypeInfo_for_Stream_9,
  MR_Word TypeInfo_for_Error_10,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Box HeadVar__6_6,
  MR_Box * HeadVar__7_7)
{
{
#define MR_PROC_LABEL mercury__bit_buffer__set_all_7_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Word State;
	MR_Word FilledBMs;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr)HeadVar__1_1 ;
	Pos = HeadVar__2_2 ;
	Size = HeadVar__3_3 ;
	State = (MR_Word) HeadVar__4_4 ;
	FilledBMs = HeadVar__5_5 ;
	Buffer0 = (ML_BitBufferPtr)HeadVar__6_6 ;
		{

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = FilledBMs;


		;}
#undef MR_PROC_LABEL
	*HeadVar__7_7  = (MR_Box) Buffer;
}
}

MR_Word MR_CALL 
mercury__bit_buffer__read_status_1_f_0(
  MR_Word TypeInfo_3_3,
  MR_Word TypeInfo_4_4,
  MR_Word TypeInfo_for_Error_5,
  MR_Box HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__bit_buffer__read_status_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Word ReadStatus;

	Buffer = (ML_BitBufferPtr)HeadVar__1_1 ;
		{

    ReadStatus = Buffer->ML_bit_buffer_read_status;


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = ReadStatus;
}
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__bit_buffer__filled_bitmaps_1_f_0(
  MR_Word TypeInfo_3_3,
  MR_Word TypeInfo_4_4,
  MR_Word TypeInfo_5_5,
  MR_Box HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__bit_buffer__filled_bitmaps_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Word FilledBMs;

	Buffer = (ML_BitBufferPtr)HeadVar__1_1 ;
		{

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = FilledBMs;
}
  return HeadVar__2_2;
}

MR_Box MR_CALL 
mercury__bit_buffer__state_1_f_0(
  MR_Word TypeInfo_3_3,
  MR_Word TypeInfo_for_State_4,
  MR_Word TypeInfo_5_5,
  MR_Box HeadVar__1_1)
{
  MR_Box HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__bit_buffer__state_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr)HeadVar__1_1 ;
		{

    State = Buffer->ML_bit_buffer_state;


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = (MR_Box) State;
}
  return HeadVar__2_2;
}

MR_Box MR_CALL 
mercury__bit_buffer__stream_1_f_0(
  MR_Word TypeInfo_for_Stream_3,
  MR_Word TypeInfo_4_4,
  MR_Word TypeInfo_5_5,
  MR_Box HeadVar__1_1)
{
  MR_Box HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__bit_buffer__stream_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr)HeadVar__1_1 ;
		{

    Stream = Buffer->ML_bit_buffer_stream;


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = (MR_Box) Stream;
}
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__bit_buffer__use_stream_1_f_0(
  MR_Word TypeInfo_3_3,
  MR_Word TypeInfo_4_4,
  MR_Word TypeInfo_5_5,
  MR_Box HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__bit_buffer__use_stream_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Word UseStream;

	Buffer = (ML_BitBufferPtr)HeadVar__1_1 ;
		{

    UseStream = Buffer->ML_bit_buffer_use_stream;


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = UseStream;
}
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__bit_buffer__size_1_f_0(
  MR_Word TypeInfo_3_3,
  MR_Word TypeInfo_4_4,
  MR_Word TypeInfo_5_5,
  MR_Box HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__bit_buffer__size_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr)HeadVar__1_1 ;
		{

    Size = Buffer->ML_bit_buffer_size;


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = Size;
}
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__bit_buffer__pos_1_f_0(
  MR_Word TypeInfo_3_3,
  MR_Word TypeInfo_4_4,
  MR_Word TypeInfo_5_5,
  MR_Box HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__bit_buffer__pos_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr)HeadVar__1_1 ;
		{

    Pos = Buffer->ML_bit_buffer_pos;


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = Pos;
}
  return HeadVar__2_2;
}

MR_Box MR_CALL 
mercury__bit_buffer__bitmap_1_f_0(
  MR_Word TypeInfo_3_3,
  MR_Word TypeInfo_4_4,
  MR_Word TypeInfo_5_5,
  MR_Box HeadVar__1_1)
{
  MR_Box HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__bit_buffer__bitmap_1_f_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr)HeadVar__1_1 ;
		{

    BM = Buffer->ML_bit_buffer_bitmap;


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = (MR_Box) BM;
}
  return HeadVar__2_2;
}

MR_Box MR_CALL 
mercury__bit_buffer__new_buffer_2_7_f_0(
  MR_Word TypeInfo_for_Stream_9,
  MR_Word TypeInfo_for_State_10,
  MR_Word TypeInfo_for_Error_11,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box HeadVar__6_6,
  MR_Word HeadVar__7_7)
{
  MR_Box HeadVar__8_8;

{
#define MR_PROC_LABEL mercury__bit_buffer__new_buffer_2_7_f_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Word UseStream;
	MR_Word Stream;
	MR_Word State;
	MR_Word ReadStatus;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr)HeadVar__1_1 ;
	Pos = HeadVar__2_2 ;
	Size = HeadVar__3_3 ;
	UseStream = HeadVar__4_4 ;
	Stream = (MR_Word) HeadVar__5_5 ;
	State = (MR_Word) HeadVar__6_6 ;
	ReadStatus = HeadVar__7_7 ;
		{
{
    MR_incr_hp_type_msg(Buffer, ML_BitBuffer, MR_ALLOC_ID,
        "bit_buffer.bit_buffer/3");
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_use_stream = UseStream;
    Buffer->ML_bit_buffer_stream = Stream;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = MR_list_empty_msg(MR_ALLOC_ID);
    Buffer->ML_bit_buffer_read_status = ReadStatus;
}

		;}
#undef MR_PROC_LABEL
	HeadVar__8_8  = (MR_Box) Buffer;
}
  return HeadVar__8_8;
}

MR_Box MR_CALL 
mercury__bit_buffer__new_buffer_6_f_0(
  MR_Word TypeInfo_for_Stream_18,
  MR_Word TypeInfo_for_State_19,
  MR_Word TypeInfo_for_Error_20,
  MR_Box BM_8,
  MR_Integer Pos_9,
  MR_Integer Size_10,
  MR_Word UseStream_11,
  MR_Box Stream_12,
  MR_Box State_13)
{
  MR_bool succeeded = (Size_10 <= (MR_Integer) 0);
  MR_Box HeadVar__7_7;

  if (succeeded)
  {
    MR_Word TypeInfo_22_22;
    MR_Box conv0_HeadVar__7_7;

    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3));
      MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_Stream_18));
      MR_hl_field(0, TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_for_State_19));
      MR_hl_field(0, TypeInfo_22_22, 3) = ((MR_Box) (TypeInfo_for_Error_20));
    }
    conv0_HeadVar__7_7 = mercury__require__func_error_2_f_0(TypeInfo_22_22, (MR_String) "function \140bit_buffer.new_buffer\'/6", (MR_String) "invalid buffer size");
    HeadVar__7_7 = ((MR_Box) (conv0_HeadVar__7_7));
  }
  else
  {
{
#define MR_PROC_LABEL mercury__bit_buffer__new_buffer_6_f_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Word UseStream;
	MR_Word Stream;
	MR_Word State;
	MR_Word ReadStatus;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr)BM_8 ;
	Pos = Pos_9 ;
	Size = Size_10 ;
	UseStream = UseStream_11 ;
	Stream = (MR_Word) Stream_12 ;
	State = (MR_Word) State_13 ;
	ReadStatus = (MR_Word) ((MR_Unsigned) 0U) ;
		{
{
    MR_incr_hp_type_msg(Buffer, ML_BitBuffer, MR_ALLOC_ID,
        "bit_buffer.bit_buffer/3");
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_use_stream = UseStream;
    Buffer->ML_bit_buffer_stream = Stream;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = MR_list_empty_msg(MR_ALLOC_ID);
    Buffer->ML_bit_buffer_read_status = ReadStatus;
}

		;}
#undef MR_PROC_LABEL
	HeadVar__7_7  = (MR_Box) Buffer;
}
  }
  return HeadVar__7_7;
}

static MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_bool succeeded;

  succeeded = mercury__bit_buffer____Unify____bit_buffer_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Box) (wrapper_arg_4)), ((MR_Box) (wrapper_arg_5)));
  return succeeded;
}

static void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bit_buffer____Compare____bit_buffer_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_5)), ((MR_Box) (wrapper_arg_6)));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__bit_buffer____Unify____bit_buffer_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)), ((MR_Box) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bit_buffer____Compare____bit_buffer_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_4)), ((MR_Box) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bit_buffer____Unify____error_state_0_0();
  return succeeded;
}

static void MR_CALL 
mercury__bit_buffer____Compare____error_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bit_buffer____Compare____error_state_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bit_buffer____Unify____error_stream_0_0();
  return succeeded;
}

static void MR_CALL 
mercury__bit_buffer____Compare____error_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bit_buffer____Compare____error_stream_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bit_buffer____Unify____error_stream_error_0_0();
  return succeeded;
}

static void MR_CALL 
mercury__bit_buffer____Compare____error_stream_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bit_buffer____Compare____error_stream_error_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_p_0(&conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_p_0();
}

static MR_Box MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_f_0();
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Box conv2_STATE_VARIABLE_BM_16;
  MR_Integer conv1_HeadVar__6_6;
  MR_Word conv0_HeadVar__7_7;

  mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_p_0(((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Box) (wrapper_arg_4)), &conv2_STATE_VARIABLE_BM_16, &conv1_HeadVar__6_6, &conv0_HeadVar__7_7);
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_BM_16));
  *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__6_6));
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__7_7));
}

void mercury__bit_buffer__init(void)
{
}

void mercury__bit_buffer__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3);
	MR_register_type_ctor_info(&mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_2);
	MR_register_type_ctor_info(&mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0);
	MR_register_type_ctor_info(&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0);
	MR_register_type_ctor_info(&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0);
}

void mercury__bit_buffer__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__bit_buffer__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module bit_buffer.
