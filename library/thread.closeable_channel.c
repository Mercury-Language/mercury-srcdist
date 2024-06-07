/*
** Automatically generated from `thread.closeable_channel.m'
** by the Mercury compiler,
** version rotd-2024-06-07
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


// :- module thread.closeable_channel.
// :- implementation.

/*
INIT mercury__thread__closeable_channel__init
ENDINIT
*/

#include "thread.closeable_channel.mih"


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
#include "thread.mih"
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
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"
#include "thread.mvar.mih"
#include "thread.semaphore.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__closeable_channel__thread__closeable_channel__pti_item_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__closeable_channel__thread__mvar__pti_mvar_1__pseudo_thread__closeable_channel__pti_item_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__closeable_channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__closeable_channel__pti_item_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__thread__closeable_channel__thread__closeable_channel__field_types_closeable_channel_1_0[2];

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_closeable_channel_1_0;

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_closeable_channel_1_0[1];

static const MR_DuPtagLayout mercury__thread__closeable_channel__thread__closeable_channel__du_ptag_ordered_closeable_channel_1[1];

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_name_ordered_closeable_channel_1[1];

static const MR_Integer mercury__thread__closeable_channel__thread__closeable_channel__functor_number_map_closeable_channel_1[1];

static const MR_PseudoTypeInfo mercury__thread__closeable_channel__thread__closeable_channel__field_types_item_1_0[2];

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_item_1_0;

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_item_1_1;

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_item_1_0[1];

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_item_1_1[1];

static const MR_DuPtagLayout mercury__thread__closeable_channel__thread__closeable_channel__du_ptag_ordered_item_1[2];

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_name_ordered_item_1[2];

static const MR_Integer mercury__thread__closeable_channel__thread__closeable_channel__functor_number_map_item_1[2];

static const MR_PseudoTypeInfo mercury__thread__closeable_channel__thread__closeable_channel__field_types_take_result_1_0[1];

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_take_result_1_0;

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_take_result_1_1;

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_take_result_1_0[1];

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_take_result_1_1[1];

static const MR_DuPtagLayout mercury__thread__closeable_channel__thread__closeable_channel__du_ptag_ordered_take_result_1[2];

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_name_ordered_take_result_1[2];

static const MR_Integer mercury__thread__closeable_channel__thread__closeable_channel__functor_number_map_take_result_1[2];

static const MR_PseudoTypeInfo mercury__thread__closeable_channel__thread__closeable_channel__field_types_try_take_result_1_0[1];

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_try_take_result_1_0;

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_try_take_result_1_1;

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_try_take_result_1_2;

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_try_take_result_1_0[2];

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_try_take_result_1_1[1];

static const MR_DuPtagLayout mercury__thread__closeable_channel__thread__closeable_channel__du_ptag_ordered_try_take_result_1[2];

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_name_ordered_try_take_result_1[3];

static const MR_Integer mercury__thread__closeable_channel__thread__closeable_channel__functor_number_map_try_take_result_1[3];

static MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____closeable_channel_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__thread__closeable_channel____Compare____closeable_channel_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__thread__closeable_channel____Compare____item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____stream_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__thread__closeable_channel____Compare____stream_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____take_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__thread__closeable_channel____Compare____take_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____try_take_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__thread__closeable_channel____Compare____try_take_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__thread__closeable_channel_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__thread__closeable_channel_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__thread__closeable_channel_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__thread__closeable_channel_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__closeable_channel_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__closeable_channel_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__closeable_channel_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__closeable_channel_scalar_common_2[0])),
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
#include "thread.mh"
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
#include "thread.semaphore.mh"


static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__closeable_channel__thread__closeable_channel__pti_item_1__pseudo_1 = {
  &mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__closeable_channel__thread__mvar__pti_mvar_1__pseudo_thread__closeable_channel__pti_item_1__pseudo_1 = {
  &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1,
  { (MR_PseudoTypeInfo) (&mercury__thread__closeable_channel__thread__closeable_channel__pti_item_1__pseudo_1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__closeable_channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__closeable_channel__pti_item_1__pseudo_1 = {
  &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1,
  { (MR_PseudoTypeInfo) (&mercury__thread__closeable_channel__thread__mvar__pti_mvar_1__pseudo_thread__closeable_channel__pti_item_1__pseudo_1) }
};

static const MR_PseudoTypeInfo mercury__thread__closeable_channel__thread__closeable_channel__field_types_closeable_channel_1_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__thread__closeable_channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__closeable_channel__pti_item_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__thread__closeable_channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__closeable_channel__pti_item_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_closeable_channel_1_0 = {
  (MR_String) "channel",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__thread__closeable_channel__thread__closeable_channel__field_types_closeable_channel_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_closeable_channel_1_0[1] = { &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_closeable_channel_1_0 };

static const MR_DuPtagLayout mercury__thread__closeable_channel__thread__closeable_channel__du_ptag_ordered_closeable_channel_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_closeable_channel_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_name_ordered_closeable_channel_1[1] = { &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_closeable_channel_1_0 };

static const MR_Integer mercury__thread__closeable_channel__thread__closeable_channel__functor_number_map_closeable_channel_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_closeable_channel_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__closeable_channel____Unify____closeable_channel_1_0_10001)),
  ((MR_Box) (mercury__thread__closeable_channel____Compare____closeable_channel_1_0_10001)),
  (MR_String) "thread.closeable_channel",
  (MR_String) "closeable_channel",
  { mercury__thread__closeable_channel__thread__closeable_channel__du_name_ordered_closeable_channel_1 },
  { mercury__thread__closeable_channel__thread__closeable_channel__du_ptag_ordered_closeable_channel_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__thread__closeable_channel__thread__closeable_channel__functor_number_map_closeable_channel_1,

};

static const MR_PseudoTypeInfo mercury__thread__closeable_channel__thread__closeable_channel__field_types_item_1_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__thread__closeable_channel__thread__mvar__pti_mvar_1__pseudo_thread__closeable_channel__pti_item_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_item_1_0 = {
  (MR_String) "item",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__thread__closeable_channel__thread__closeable_channel__field_types_item_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_item_1_1 = {
  (MR_String) "closed",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_item_1_0[1] = { &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_item_1_1 };

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_item_1_1[1] = { &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_item_1_0 };

static const MR_DuPtagLayout mercury__thread__closeable_channel__thread__closeable_channel__du_ptag_ordered_item_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_item_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_item_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_name_ordered_item_1[2] = {
  &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_item_1_1,
  &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_item_1_0
};

static const MR_Integer mercury__thread__closeable_channel__thread__closeable_channel__functor_number_map_item_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__closeable_channel____Unify____item_1_0_10001)),
  ((MR_Box) (mercury__thread__closeable_channel____Compare____item_1_0_10001)),
  (MR_String) "thread.closeable_channel",
  (MR_String) "item",
  { mercury__thread__closeable_channel__thread__closeable_channel__du_name_ordered_item_1 },
  { mercury__thread__closeable_channel__thread__closeable_channel__du_ptag_ordered_item_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__thread__closeable_channel__thread__closeable_channel__functor_number_map_item_1,

};

const MR_TypeCtorInfo_Struct mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_stream_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__thread__closeable_channel____Unify____stream_1_0_10001)),
  ((MR_Box) (mercury__thread__closeable_channel____Compare____stream_1_0_10001)),
  (MR_String) "thread.closeable_channel",
  (MR_String) "stream",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__thread__closeable_channel__thread__mvar__pti_mvar_1__pseudo_thread__closeable_channel__pti_item_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__thread__closeable_channel__thread__closeable_channel__field_types_take_result_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_take_result_1_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__thread__closeable_channel__thread__closeable_channel__field_types_take_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_take_result_1_1 = {
  (MR_String) "closed",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_take_result_1_0[1] = { &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_take_result_1_1 };

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_take_result_1_1[1] = { &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_take_result_1_0 };

static const MR_DuPtagLayout mercury__thread__closeable_channel__thread__closeable_channel__du_ptag_ordered_take_result_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_take_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_take_result_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_name_ordered_take_result_1[2] = {
  &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_take_result_1_1,
  &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_take_result_1_0
};

static const MR_Integer mercury__thread__closeable_channel__thread__closeable_channel__functor_number_map_take_result_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_take_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__closeable_channel____Unify____take_result_1_0_10001)),
  ((MR_Box) (mercury__thread__closeable_channel____Compare____take_result_1_0_10001)),
  (MR_String) "thread.closeable_channel",
  (MR_String) "take_result",
  { mercury__thread__closeable_channel__thread__closeable_channel__du_name_ordered_take_result_1 },
  { mercury__thread__closeable_channel__thread__closeable_channel__du_ptag_ordered_take_result_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__thread__closeable_channel__thread__closeable_channel__functor_number_map_take_result_1,

};

static const MR_PseudoTypeInfo mercury__thread__closeable_channel__thread__closeable_channel__field_types_try_take_result_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_try_take_result_1_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__thread__closeable_channel__thread__closeable_channel__field_types_try_take_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_try_take_result_1_1 = {
  (MR_String) "closed",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_try_take_result_1_2 = {
  (MR_String) "would_block",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_try_take_result_1_0[2] = {
  &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_try_take_result_1_1,
  &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_try_take_result_1_2
};

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_try_take_result_1_1[1] = { &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_try_take_result_1_0 };

static const MR_DuPtagLayout mercury__thread__closeable_channel__thread__closeable_channel__du_ptag_ordered_try_take_result_1[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_try_take_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__thread__closeable_channel__thread__closeable_channel__du_stag_ordered_try_take_result_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__thread__closeable_channel__thread__closeable_channel__du_name_ordered_try_take_result_1[3] = {
  &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_try_take_result_1_1,
  &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_try_take_result_1_0,
  &mercury__thread__closeable_channel__thread__closeable_channel__du_functor_desc_try_take_result_1_2
};

static const MR_Integer mercury__thread__closeable_channel__thread__closeable_channel__functor_number_map_try_take_result_1[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_try_take_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__closeable_channel____Unify____try_take_result_1_0_10001)),
  ((MR_Box) (mercury__thread__closeable_channel____Compare____try_take_result_1_0_10001)),
  (MR_String) "thread.closeable_channel",
  (MR_String) "try_take_result",
  { mercury__thread__closeable_channel__thread__closeable_channel__du_name_ordered_try_take_result_1 },
  { mercury__thread__closeable_channel__thread__closeable_channel__du_ptag_ordered_try_take_result_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__thread__closeable_channel__thread__closeable_channel__functor_number_map_try_take_result_1,

};

void MR_CALL 
mercury__thread__closeable_channel____Compare____try_take_result_1_0(
  MR_Word TypeInfo_for_T_8,
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Box ArgX1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
              MR_Box ArgY1_5 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____try_take_result_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box ArgX1_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__thread__closeable_channel____Compare____take_result_1_0(
  MR_Word TypeInfo_for_T_8,
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_5 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____take_result_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__thread__closeable_channel____Compare____stream_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__thread__mvar____Compare____mvar_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____stream_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_7_7, 0) = ((MR_Box) (&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__thread__mvar____Unify____mvar_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__thread__closeable_channel____Compare____item_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_5 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_11, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word TypeInfo_13_13;

      {
        TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1));
        MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      mercury__thread__mvar____Compare____mvar_1_0(TypeInfo_13_13, HeadVar__1_1, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
    }
  }
}

MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____item_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeCtorInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Box ArgX1_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeCtorInfo_12_12 = (MR_Word) (&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1);
        {
          TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (TypeCtorInfo_12_12));
          MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
        }
        succeeded = mercury__thread__mvar____Unify____mvar_1_0(TypeInfo_13_13, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__thread__closeable_channel____Compare____closeable_channel_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_15_15;

    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1));
      MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
    }
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
      MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_13_13));
    }
    mercury__thread__mvar____Compare____mvar_1_0(TypeInfo_15_15, &SubResult1_6, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_20_20;

      {
        TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1));
        MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      {
        TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
        MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_18_18));
      }
      mercury__thread__mvar____Compare____mvar_1_0(TypeInfo_20_20, HeadVar__1_1, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
    }
  }
}

MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____closeable_channel_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1));
      MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_9));
    }
    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
      MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_16_16));
    }
    succeeded = mercury__thread__mvar____Unify____mvar_1_0(TypeInfo_18_18, (MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
    if (succeeded)
      succeeded = mercury__thread__mvar____Unify____mvar_1_0(TypeInfo_18_18, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
  }
  return succeeded;
}

void MR_CALL 
mercury__thread__closeable_channel__try_take_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word HeadVar__1_1,
  MR_Word * Res_7)
{
  MR_Word TypeInfo_20_20;
  MR_Word TypeInfo_22_22;
  MR_Word Read_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Head_9;
  MR_Word TryRead_10;
  MR_Word NewHead_13;
  MR_Box conv0_Head_9;
  MR_Word conv1_TryRead_10;

  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  {
    TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
    MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_20_20));
  }
  mercury__thread__mvar__take_4_p_0(TypeInfo_22_22, (MR_Word) (Read_5), &conv0_Head_9);
  Head_9 = ((MR_Word) (conv0_Head_9));
  mercury__thread__mvar__try_read_4_p_0(TypeInfo_20_20, (MR_Word) (Head_9), &conv1_TryRead_10);
  TryRead_10 = (MR_Word) (conv1_TryRead_10);
  if ((TryRead_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Res_7 = (MR_Word) ((MR_Unsigned) 4U);
    NewHead_13 = Head_9;
  }
  else
  {
    MR_Word ItemOrClosed_11 = ((MR_Word) ((MR_hl_field(1, TryRead_10, (MR_Integer) 0))));

    if ((ItemOrClosed_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Res_7 = (MR_Word) ((MR_Unsigned) 0U);
      NewHead_13 = Head_9;
    }
    else
    {
      MR_Box Val_12 = (MR_hl_field(1, ItemOrClosed_11, (MR_Integer) 0));

      NewHead_13 = ((MR_Word) ((MR_hl_field(1, ItemOrClosed_11, (MR_Integer) 1))));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_7 = base;
        MR_hl_field(1, base, 0) = Val_12;
      }
    }
  }
  mercury__thread__mvar__put_4_p_0(TypeInfo_22_22, (MR_Word) (Read_5), ((MR_Box) (NewHead_13)));
}

void MR_CALL 
mercury__thread__closeable_channel__take_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word * Res_7)
{
  MR_Word TypeInfo_19_19;
  MR_Word TypeInfo_21_21;
  MR_Word Read_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Head_9;
  MR_Word ItemOrClosed_10;
  MR_Word NewHead_12;
  MR_Box conv0_Head_9;
  MR_Box conv1_ItemOrClosed_10;

  {
    TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_17));
  }
  {
    TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
    MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_19_19));
  }
  mercury__thread__mvar__take_4_p_0(TypeInfo_21_21, (MR_Word) (Read_5), &conv0_Head_9);
  Head_9 = ((MR_Word) (conv0_Head_9));
  mercury__thread__mvar__read_4_p_0(TypeInfo_19_19, (MR_Word) (Head_9), &conv1_ItemOrClosed_10);
  ItemOrClosed_10 = ((MR_Word) (conv1_ItemOrClosed_10));
  if ((ItemOrClosed_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Res_7 = (MR_Word) ((MR_Unsigned) 0U);
    NewHead_12 = Head_9;
  }
  else
  {
    MR_Box Val_11 = (MR_hl_field(1, ItemOrClosed_10, (MR_Integer) 0));

    NewHead_12 = ((MR_Word) ((MR_hl_field(1, ItemOrClosed_10, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Res_7 = base;
      MR_hl_field(1, base, 0) = Val_11;
    }
  }
  mercury__thread__mvar__put_4_p_0(TypeInfo_21_21, (MR_Word) (Read_5), ((MR_Box) (NewHead_12)));
}

void MR_CALL 
mercury__thread__closeable_channel__close_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1)
{
  MR_Word TypeInfo_16_16;
  MR_Word TypeInfo_18_18;
  MR_Word Write_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Hole_7;
  MR_Box conv0_Hole_7;
  MR_Word _Success_8;

  {
    TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_14));
  }
  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_16_16));
  }
  mercury__thread__mvar__take_4_p_0(TypeInfo_18_18, (MR_Word) (Write_5), &conv0_Hole_7);
  Hole_7 = ((MR_Word) (conv0_Hole_7));
  mercury__thread__mvar__try_put_5_p_0(TypeInfo_16_16, (MR_Word) (Hole_7), ((MR_Box) ((MR_Unsigned) 0U)), &_Success_8);
  mercury__thread__mvar__put_4_p_0(TypeInfo_18_18, (MR_Word) (Write_5), ((MR_Box) (Hole_7)));
}

void MR_CALL 
mercury__thread__closeable_channel__put_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Box Val_8,
  MR_Word * Success_9)
{
  MR_Word TypeInfo_21_21;
  MR_Word TypeInfo_23_23;
  MR_Word Write_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word NewHole_11;
  MR_Word OldHole_12;
  MR_Word Var_17;
  MR_Word conv0_NewHole_11;
  MR_Box conv1_OldHole_12;

  {
    TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
  }
  mercury__thread__mvar__init_3_p_0(TypeInfo_21_21, &conv0_NewHole_11);
  NewHole_11 = (MR_Word) (conv0_NewHole_11);
  {
    TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
    MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_21_21));
  }
  mercury__thread__mvar__take_4_p_0(TypeInfo_23_23, (MR_Word) (Write_7), &conv1_OldHole_12);
  OldHole_12 = ((MR_Word) (conv1_OldHole_12));
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = Val_8;
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (NewHole_11));
  }
  mercury__thread__mvar__try_put_5_p_0(TypeInfo_21_21, (MR_Word) (OldHole_12), ((MR_Box) (Var_17)), Success_9);
  switch (*Success_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__thread__mvar__put_4_p_0(TypeInfo_23_23, (MR_Word) (Write_7), ((MR_Box) (OldHole_12)));
      break;
    case (MR_Integer) 1:
      mercury__thread__mvar__put_4_p_0(TypeInfo_23_23, (MR_Word) (Write_7), ((MR_Box) (NewHole_11)));
      break;
  }
}

void MR_CALL 
mercury__thread__closeable_channel__init_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1)
{
  MR_Word TypeInfo_16_16;
  MR_Word TypeInfo_18_18;
  MR_Word Read_4;
  MR_Word Write_5;
  MR_Word Hole_7;
  MR_Word conv0_Read_4;
  MR_Word conv1_Write_5;
  MR_Word conv2_Hole_7;

  {
    TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1));
    MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_14));
  }
  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_16_16));
  }
  mercury__thread__mvar__init_3_p_0(TypeInfo_18_18, &conv0_Read_4);
  Read_4 = (MR_Word) (conv0_Read_4);
  mercury__thread__mvar__init_3_p_0(TypeInfo_18_18, &conv1_Write_5);
  Write_5 = (MR_Word) (conv1_Write_5);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__1_1 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Read_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Write_5));
  }
  mercury__thread__mvar__init_3_p_0(TypeInfo_16_16, &conv2_Hole_7);
  Hole_7 = (MR_Word) (conv2_Hole_7);
  mercury__thread__mvar__put_4_p_0(TypeInfo_18_18, (MR_Word) (Read_4), ((MR_Box) (Hole_7)));
  mercury__thread__mvar__put_4_p_0(TypeInfo_18_18, (MR_Word) (Write_5), ((MR_Box) (Hole_7)));
}

static MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____closeable_channel_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__thread__closeable_channel____Unify____closeable_channel_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__thread__closeable_channel____Compare____closeable_channel_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__thread__closeable_channel____Compare____closeable_channel_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__thread__closeable_channel____Unify____item_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__thread__closeable_channel____Compare____item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__thread__closeable_channel____Compare____item_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____stream_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__thread__closeable_channel____Unify____stream_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__thread__closeable_channel____Compare____stream_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__thread__closeable_channel____Compare____stream_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____take_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__thread__closeable_channel____Unify____take_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__thread__closeable_channel____Compare____take_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__thread__closeable_channel____Compare____take_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__thread__closeable_channel____Unify____try_take_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__thread__closeable_channel____Unify____try_take_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__thread__closeable_channel____Compare____try_take_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__thread__closeable_channel____Compare____try_take_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__thread__closeable_channel__init(void)
{
}

void mercury__thread__closeable_channel__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_closeable_channel_1);
	MR_register_type_ctor_info(&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_item_1);
	MR_register_type_ctor_info(&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_stream_1);
	MR_register_type_ctor_info(&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_take_result_1);
	MR_register_type_ctor_info(&mercury__thread__closeable_channel__thread__closeable_channel__type_ctor_info_try_take_result_1);
}

void mercury__thread__closeable_channel__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__thread__closeable_channel__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module thread.closeable_channel.
