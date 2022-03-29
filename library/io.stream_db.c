/*
** Automatically generated from `io.stream_db.m'
** by the Mercury compiler,
** version rotd-2022-03-29
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


// :- module io.stream_db.
// :- implementation.

/*
INIT mercury__io__stream_db__init
ENDINIT
*/

#include "io.stream_db.mih"


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
#include "term_conversion.mih"
#include "term_io.mih"
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
#include "io.primitives_write.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_PseudoTypeInfo mercury__io__stream_db__io__stream_db__field_types_maybe_stream_info_0_0[4];

static const MR_ConstString mercury__io__stream_db__io__stream_db__field_names_maybe_stream_info_0_0[4];

static const MR_DuArgLocn mercury__io__stream_db__io__stream_db__field_locns_maybe_stream_info_0_0[4];

static const MR_DuFunctorDesc mercury__io__stream_db__io__stream_db__du_functor_desc_maybe_stream_info_0_0;

static const MR_DuFunctorDesc mercury__io__stream_db__io__stream_db__du_functor_desc_maybe_stream_info_0_1;

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_stag_ordered_maybe_stream_info_0_0[1];

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_stag_ordered_maybe_stream_info_0_1[1];

static const MR_DuPtagLayout mercury__io__stream_db__io__stream_db__du_ptag_ordered_maybe_stream_info_0[2];

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_name_ordered_maybe_stream_info_0[2];

static const MR_Integer mercury__io__stream_db__io__stream_db__functor_number_map_maybe_stream_info_0[2];

static const MR_EnumFunctorDesc mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_content_0_0;

static const MR_EnumFunctorDesc mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_content_0_1;

static const MR_EnumFunctorDesc mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_content_0_2;

static const MR_EnumFunctorDescPtr mercury__io__stream_db__io__stream_db__enum_ordinal_ordered_stream_content_0[3];

static const MR_EnumFunctorDescPtr mercury__io__stream_db__io__stream_db__enum_name_ordered_stream_content_0[3];

static const MR_Integer mercury__io__stream_db__io__stream_db__functor_number_map_stream_content_0[3];

static const MR_FA_TypeInfo_Struct2 mercury__io__stream_db__tree234__ti_tree234_2builtin__type_ctor_info_int_0io__stream_db__type_ctor_info_stream_info_0;

static const MR_PseudoTypeInfo mercury__io__stream_db__io__stream_db__field_types_stream_info_0_0[4];

static const MR_ConstString mercury__io__stream_db__io__stream_db__field_names_stream_info_0_0[4];

static const MR_DuArgLocn mercury__io__stream_db__io__stream_db__field_locns_stream_info_0_0[4];

static const MR_DuFunctorDesc mercury__io__stream_db__io__stream_db__du_functor_desc_stream_info_0_0;

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_stag_ordered_stream_info_0_0[1];

static const MR_DuPtagLayout mercury__io__stream_db__io__stream_db__du_ptag_ordered_stream_info_0[1];

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_name_ordered_stream_info_0[1];

static const MR_Integer mercury__io__stream_db__io__stream_db__functor_number_map_stream_info_0[1];

static const MR_EnumFunctorDesc mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_mode_0_0;

static const MR_EnumFunctorDesc mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_mode_0_1;

static const MR_EnumFunctorDesc mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_mode_0_2;

static const MR_EnumFunctorDescPtr mercury__io__stream_db__io__stream_db__enum_ordinal_ordered_stream_mode_0[3];

static const MR_EnumFunctorDescPtr mercury__io__stream_db__io__stream_db__enum_name_ordered_stream_mode_0[3];

static const MR_Integer mercury__io__stream_db__io__stream_db__functor_number_map_stream_mode_0[3];

static const MR_PseudoTypeInfo mercury__io__stream_db__io__stream_db__field_types_stream_source_0_0[1];

static const MR_DuFunctorDesc mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_0;

static const MR_DuFunctorDesc mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_1;

static const MR_DuFunctorDesc mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_2;

static const MR_DuFunctorDesc mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_3;

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_stag_ordered_stream_source_0_0[3];

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_stag_ordered_stream_source_0_1[1];

static const MR_DuPtagLayout mercury__io__stream_db__io__stream_db__du_ptag_ordered_stream_source_0[2];

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_name_ordered_stream_source_0[4];

static const MR_Integer mercury__io__stream_db__io__stream_db__functor_number_map_stream_source_0[4];

static void MR_CALL 
mercury__io__stream_db__may_delete_stream_info_3_p_0(
  MR_Integer * MayDelete_1);

static MR_bool MR_CALL 
mercury__io__stream_db____Unify____maybe_stream_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io__stream_db____Compare____maybe_stream_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io__stream_db____Unify____stream_content_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io__stream_db____Compare____stream_content_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io__stream_db____Unify____stream_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io__stream_db____Compare____stream_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io__stream_db____Unify____stream_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io__stream_db____Compare____stream_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io__stream_db____Unify____stream_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io__stream_db____Compare____stream_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__io__stream_db____Unify____stream_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io__stream_db____Compare____stream_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__io__stream_db_scalar_common_1[2][3];

static /* final */ const MR_Box mercury__io__stream_db_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__io__stream_db_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__io__stream_db_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__stream_db_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__stream_db_scalar_common_1[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__stream_db_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__stream_db_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__stream_db_scalar_common_2[0])),
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
#line 376 "io.stream_db.m"

MR_Word         ML_io_stream_db;

#ifdef MR_THREAD_SAFE
    MercuryLock ML_io_stream_db_lock;
#endif




static const MR_PseudoTypeInfo mercury__io__stream_db__io__stream_db__field_types_maybe_stream_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_mode_0),
  (MR_PseudoTypeInfo) (&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_content_0),
  (MR_PseudoTypeInfo) (&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_source_0)
};

static const MR_ConstString mercury__io__stream_db__io__stream_db__field_names_maybe_stream_info_0_0[4] = {
  (MR_String) "maybe_stream_id",
  (MR_String) "maybe_stream_mode",
  (MR_String) "maybe_stream_content",
  (MR_String) "maybe_stream_source"
};

static const MR_DuArgLocn mercury__io__stream_db__io__stream_db__field_locns_maybe_stream_info_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mercury__io__stream_db__io__stream_db__du_functor_desc_maybe_stream_info_0_0 = {
  (MR_String) "stream",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__io__stream_db__io__stream_db__field_types_maybe_stream_info_0_0,
  mercury__io__stream_db__io__stream_db__field_names_maybe_stream_info_0_0,
  mercury__io__stream_db__io__stream_db__field_locns_maybe_stream_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__io__stream_db__io__stream_db__du_functor_desc_maybe_stream_info_0_1 = {
  (MR_String) "unknown_stream",
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

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_stag_ordered_maybe_stream_info_0_0[1] = {
  &mercury__io__stream_db__io__stream_db__du_functor_desc_maybe_stream_info_0_1
};

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_stag_ordered_maybe_stream_info_0_1[1] = {
  &mercury__io__stream_db__io__stream_db__du_functor_desc_maybe_stream_info_0_0
};

static const MR_DuPtagLayout mercury__io__stream_db__io__stream_db__du_ptag_ordered_maybe_stream_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__io__stream_db__io__stream_db__du_stag_ordered_maybe_stream_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__stream_db__io__stream_db__du_stag_ordered_maybe_stream_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_name_ordered_maybe_stream_info_0[2] = {
  &mercury__io__stream_db__io__stream_db__du_functor_desc_maybe_stream_info_0_0,
  &mercury__io__stream_db__io__stream_db__du_functor_desc_maybe_stream_info_0_1
};

static const MR_Integer mercury__io__stream_db__io__stream_db__functor_number_map_maybe_stream_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__stream_db__io__stream_db__type_ctor_info_maybe_stream_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io__stream_db____Unify____maybe_stream_info_0_0_10001)),
  ((MR_Box) (mercury__io__stream_db____Compare____maybe_stream_info_0_0_10001)),
  (MR_String) "io.stream_db",
  (MR_String) "maybe_stream_info",
  { mercury__io__stream_db__io__stream_db__du_name_ordered_maybe_stream_info_0 },
  { mercury__io__stream_db__io__stream_db__du_ptag_ordered_maybe_stream_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__io__stream_db__io__stream_db__functor_number_map_maybe_stream_info_0,

};

static const MR_EnumFunctorDesc mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_content_0_0 = {
  (MR_String) "text",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_content_0_1 = {
  (MR_String) "binary",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_content_0_2 = {
  (MR_String) "preopen",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mercury__io__stream_db__io__stream_db__enum_ordinal_ordered_stream_content_0[3] = {
  &mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_content_0_0,
  &mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_content_0_1,
  &mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_content_0_2
};

static const MR_EnumFunctorDescPtr mercury__io__stream_db__io__stream_db__enum_name_ordered_stream_content_0[3] = {
  &mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_content_0_1,
  &mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_content_0_2,
  &mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_content_0_0
};

static const MR_Integer mercury__io__stream_db__io__stream_db__functor_number_map_stream_content_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__stream_db__io__stream_db__type_ctor_info_stream_content_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io__stream_db____Unify____stream_content_0_0_10001)),
  ((MR_Box) (mercury__io__stream_db____Compare____stream_content_0_0_10001)),
  (MR_String) "io.stream_db",
  (MR_String) "stream_content",
  { mercury__io__stream_db__io__stream_db__enum_name_ordered_stream_content_0 },
  { mercury__io__stream_db__io__stream_db__enum_ordinal_ordered_stream_content_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__io__stream_db__io__stream_db__functor_number_map_stream_content_0,

};

static const MR_FA_TypeInfo_Struct2 mercury__io__stream_db__tree234__ti_tree234_2builtin__type_ctor_info_int_0io__stream_db__type_ctor_info_stream_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_info_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__io__stream_db__io__stream_db__type_ctor_info_stream_db_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__io__stream_db____Unify____stream_db_0_0_10001)),
  ((MR_Box) (mercury__io__stream_db____Compare____stream_db_0_0_10001)),
  (MR_String) "io.stream_db",
  (MR_String) "stream_db",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__io__stream_db__tree234__ti_tree234_2builtin__type_ctor_info_int_0io__stream_db__type_ctor_info_stream_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__io__stream_db__io__stream_db__field_types_stream_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_mode_0),
  (MR_PseudoTypeInfo) (&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_content_0),
  (MR_PseudoTypeInfo) (&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_source_0)
};

static const MR_ConstString mercury__io__stream_db__io__stream_db__field_names_stream_info_0_0[4] = {
  (MR_String) "stream_id",
  (MR_String) "stream_mode",
  (MR_String) "stream_content",
  (MR_String) "stream_source"
};

static const MR_DuArgLocn mercury__io__stream_db__io__stream_db__field_locns_stream_info_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mercury__io__stream_db__io__stream_db__du_functor_desc_stream_info_0_0 = {
  (MR_String) "stream",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__io__stream_db__io__stream_db__field_types_stream_info_0_0,
  mercury__io__stream_db__io__stream_db__field_names_stream_info_0_0,
  mercury__io__stream_db__io__stream_db__field_locns_stream_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_stag_ordered_stream_info_0_0[1] = {
  &mercury__io__stream_db__io__stream_db__du_functor_desc_stream_info_0_0
};

static const MR_DuPtagLayout mercury__io__stream_db__io__stream_db__du_ptag_ordered_stream_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__stream_db__io__stream_db__du_stag_ordered_stream_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_name_ordered_stream_info_0[1] = {
  &mercury__io__stream_db__io__stream_db__du_functor_desc_stream_info_0_0
};

static const MR_Integer mercury__io__stream_db__io__stream_db__functor_number_map_stream_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__io__stream_db__io__stream_db__type_ctor_info_stream_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io__stream_db____Unify____stream_info_0_0_10001)),
  ((MR_Box) (mercury__io__stream_db____Compare____stream_info_0_0_10001)),
  (MR_String) "io.stream_db",
  (MR_String) "stream_info",
  { mercury__io__stream_db__io__stream_db__du_name_ordered_stream_info_0 },
  { mercury__io__stream_db__io__stream_db__du_ptag_ordered_stream_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__io__stream_db__io__stream_db__functor_number_map_stream_info_0,

};

static const MR_EnumFunctorDesc mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_mode_0_0 = {
  (MR_String) "input",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_mode_0_1 = {
  (MR_String) "output",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_mode_0_2 = {
  (MR_String) "append",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mercury__io__stream_db__io__stream_db__enum_ordinal_ordered_stream_mode_0[3] = {
  &mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_mode_0_0,
  &mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_mode_0_1,
  &mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_mode_0_2
};

static const MR_EnumFunctorDescPtr mercury__io__stream_db__io__stream_db__enum_name_ordered_stream_mode_0[3] = {
  &mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_mode_0_2,
  &mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_mode_0_0,
  &mercury__io__stream_db__io__stream_db__enum_functor_desc_stream_mode_0_1
};

static const MR_Integer mercury__io__stream_db__io__stream_db__functor_number_map_stream_mode_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__io__stream_db__io__stream_db__type_ctor_info_stream_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io__stream_db____Unify____stream_mode_0_0_10001)),
  ((MR_Box) (mercury__io__stream_db____Compare____stream_mode_0_0_10001)),
  (MR_String) "io.stream_db",
  (MR_String) "stream_mode",
  { mercury__io__stream_db__io__stream_db__enum_name_ordered_stream_mode_0 },
  { mercury__io__stream_db__io__stream_db__enum_ordinal_ordered_stream_mode_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__io__stream_db__io__stream_db__functor_number_map_stream_mode_0,

};

static const MR_PseudoTypeInfo mercury__io__stream_db__io__stream_db__field_types_stream_source_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_0 = {
  (MR_String) "file",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__io__stream_db__io__stream_db__field_types_stream_source_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_1 = {
  (MR_String) "stdin",
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

static const MR_DuFunctorDesc mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_2 = {
  (MR_String) "stdout",
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

static const MR_DuFunctorDesc mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_3 = {
  (MR_String) "stderr",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_stag_ordered_stream_source_0_0[3] = {
  &mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_1,
  &mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_2,
  &mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_3
};

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_stag_ordered_stream_source_0_1[1] = {
  &mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_0
};

static const MR_DuPtagLayout mercury__io__stream_db__io__stream_db__du_ptag_ordered_stream_source_0[2] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__io__stream_db__io__stream_db__du_stag_ordered_stream_source_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__io__stream_db__io__stream_db__du_stag_ordered_stream_source_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__io__stream_db__io__stream_db__du_name_ordered_stream_source_0[4] = {
  &mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_0,
  &mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_3,
  &mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_1,
  &mercury__io__stream_db__io__stream_db__du_functor_desc_stream_source_0_2
};

static const MR_Integer mercury__io__stream_db__io__stream_db__functor_number_map_stream_source_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__io__stream_db__io__stream_db__type_ctor_info_stream_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__io__stream_db____Unify____stream_source_0_0_10001)),
  ((MR_Box) (mercury__io__stream_db____Compare____stream_source_0_0_10001)),
  (MR_String) "io.stream_db",
  (MR_String) "stream_source",
  { mercury__io__stream_db__io__stream_db__du_name_ordered_stream_source_0 },
  { mercury__io__stream_db__io__stream_db__du_ptag_ordered_stream_source_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mercury__io__stream_db__io__stream_db__functor_number_map_stream_source_0,

};

void MR_CALL 
mercury__io__stream_db____Compare____stream_mode_0_0(
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
mercury__io__stream_db____Unify____stream_mode_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__io__stream_db____Compare____stream_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_21 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_22 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_21 < Var_22);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_21 == Var_22);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 0;
        else
          SubResult2_9 = (MR_Integer) 2;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_23 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_24 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_23 < Var_24);
        if (succeeded)
          SubResult3_12 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_23 == Var_24);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 0;
          else
            SubResult3_12 = (MR_Integer) 2;
        }
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__io__stream_db____Compare____stream_source_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__io__stream_db____Unify____stream_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = mercury__io__stream_db____Unify____stream_source_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__io__stream_db____Compare____stream_db_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__io__stream_db_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__io__stream_db____Unify____stream_db_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__io__stream_db_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mercury__io__stream_db____Compare____stream_content_0_0(
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
mercury__io__stream_db____Unify____stream_content_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__io__stream_db____Compare____maybe_stream_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 3);
    MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))) >> 2)) & (MR_Integer) 3);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      succeeded = (Var_32 < ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_32 == ArgY1_5);
        if (succeeded)
          SubResult1_6 = (MR_Integer) 0;
        else
          SubResult1_6 = (MR_Integer) 2;
      }
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_33 = (MR_Integer) (Var_31);
        MR_Integer Var_34 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_33 < Var_34);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_33 == Var_34);
          if (succeeded)
            SubResult2_9 = (MR_Integer) 0;
          else
            SubResult2_9 = (MR_Integer) 2;
        }
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_35 = (MR_Integer) (Var_30);
          MR_Integer Var_36 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_35 < Var_36);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_35 == Var_36);
            if (succeeded)
              SubResult3_12 = (MR_Integer) 0;
            else
              SubResult3_12 = (MR_Integer) 2;
          }
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            mercury__io__stream_db____Compare____stream_source_0_0(HeadVar__1_1, Var_29, ArgY4_14);
        }
      }
    }
  }
}

void MR_CALL 
mercury__io__stream_db____Compare____stream_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
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
                  case (MR_Integer) 2:
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
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
        {
          MR_String Var_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__io__stream_db____Compare____stream_source_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_15 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_19  = Res;
}
                succeeded = (Var_19 < (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_19 == (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
                }
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__io__stream_db____Unify____maybe_stream_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_12 == CastX_11);
  }
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4;
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY3_8;
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY4_10;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 3);
      ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
      ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = mercury__io__stream_db____Unify____stream_source_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__io__stream_db____Unify____stream_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
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
          case (MR_Integer) 2:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
    }
  return succeeded;
}

MR_Integer MR_CALL 
mercury__io__stream_db__get_stream_id_1_f_0(
  MR_Box Stream_1)
{
  MR_Integer Id_2;

{
#define MR_PROC_LABEL mercury__io__stream_db__get_stream_id_1_f_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr)Stream_1 ;
		{

#ifndef MR_NATIVE_GC
    // Most of the time, we can just use the pointer to the stream
    // as a unique identifier.
    Id = (MR_Word) Stream;
#else
    // For accurate GC we embed an ID in the MercuryFile and retrieve it here.
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	Id_2  = Id;
}
  return Id_2;
}

MR_String MR_CALL 
mercury__io__stream_db__source_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_String) "<standard input>";
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_String) "<standard output>";
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_String) "<standard error>";
          break;
      }
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      break;
  }
  return HeadVar__2_2;
}

static void MR_CALL 
mercury__io__stream_db__may_delete_stream_info_3_p_0(
  MR_Integer * MayDelete_1)
{
{
#define MR_PROC_LABEL mercury__io__stream_db__may_delete_stream_info_3_p_0

	MR_Integer MayDelete;

		{

    MayDelete = !MR_debug_ever_enabled;


		;}
#undef MR_PROC_LABEL
	*MayDelete_1  = MayDelete;
}
}

void MR_CALL 
mercury__io__stream_db__unlock_stream_db_2_p_0(void)
{
{
#define MR_PROC_LABEL mercury__io__stream_db__unlock_stream_db_2_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.stream_db.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__stream_db__lock_stream_db_2_p_0(void)
{
{
#define MR_PROC_LABEL mercury__io__stream_db__lock_stream_db_2_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
}

MR_bool MR_CALL 
mercury__io__stream_db__get_io_stream_info_2_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word StreamDB_4,
  MR_Box Stream_5,
  MR_Word * StreamInfo_6)
{
  MR_bool succeeded;
  MR_Box IOStream_8;
  MR_Box IOStream0_7;
  MR_Word Var_9;
  MR_Box conv0_Var_9;

  succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_17, (MR_Word) (&mercury__io__io__type_ctor_info_input_stream_0), Stream_5, &conv0_Var_9);
  if (succeeded)
  {
    Var_9 = ((MR_Word) (conv0_Var_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    IOStream0_7 = (MR_Box) (Var_9);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    IOStream_8 = IOStream0_7;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Box IOStream0_16;
    MR_Word Var_10;
    MR_Box conv1_Var_10;

    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_17, (MR_Word) (&mercury__io__io__type_ctor_info_output_stream_0), Stream_5, &conv1_Var_10);
    if (succeeded)
    {
      Var_10 = ((MR_Word) (conv1_Var_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOStream0_16 = (MR_Box) (Var_10);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOStream_8 = IOStream0_16;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box IOStream0_15;
      MR_Word Var_11;
      MR_Box conv2_Var_11;

      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_17, (MR_Word) (&mercury__io__io__type_ctor_info_binary_input_stream_0), Stream_5, &conv2_Var_11);
      if (succeeded)
      {
        Var_11 = ((MR_Word) (conv2_Var_11));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        IOStream0_15 = (MR_Box) (Var_11);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        IOStream_8 = IOStream0_15;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Box IOStream0_14;
        MR_Word Var_12;
        MR_Box conv3_Var_12;

        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_17, (MR_Word) (&mercury__io__io__type_ctor_info_binary_output_stream_0), Stream_5, &conv3_Var_12);
        if (succeeded)
        {
          Var_12 = ((MR_Word) (conv3_Var_12));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          IOStream0_14 = (MR_Box) (Var_12);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          IOStream_8 = IOStream0_14;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Box conv4_IOStream_8;

          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_17, (MR_Word) (&mercury__io__io__type_ctor_info_stream_0), Stream_5, &conv4_IOStream_8);
          if (succeeded)
          {
            IOStream_8 = ((MR_Box) (conv4_IOStream_8));
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  if (succeeded)
  {
    *StreamInfo_6 = mercury__io__stream_db__get_maybe_stream_info_2_f_0(StreamDB_4, IOStream_8);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__io__stream_db__binary_output_stream_info_2_f_0(
  MR_Word StreamDb_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Box Stream_5 = (MR_Box) (HeadVar__2_2);

  HeadVar__3_3 = mercury__io__stream_db__get_maybe_stream_info_2_f_0(StreamDb_4, Stream_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__io__stream_db__output_stream_info_2_f_0(
  MR_Word StreamDb_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Box Stream_5 = (MR_Box) (HeadVar__2_2);

  HeadVar__3_3 = mercury__io__stream_db__get_maybe_stream_info_2_f_0(StreamDb_4, Stream_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__io__stream_db__binary_input_stream_info_2_f_0(
  MR_Word StreamDb_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Box Stream_5 = (MR_Box) (HeadVar__2_2);

  HeadVar__3_3 = mercury__io__stream_db__get_maybe_stream_info_2_f_0(StreamDb_4, Stream_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__io__stream_db__input_stream_info_2_f_0(
  MR_Word StreamDb_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Box Stream_5 = (MR_Box) (HeadVar__2_2);

  HeadVar__3_3 = mercury__io__stream_db__get_maybe_stream_info_2_f_0(StreamDb_4, Stream_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__io__stream_db__get_maybe_stream_info_2_f_0(
  MR_Word StreamDb_4,
  MR_Box Stream_5)
{
  MR_bool succeeded;
  MR_Word Info_6;
  MR_Word Info0_7;
  MR_Integer Var_12;
  MR_Box conv0_Info0_7;

{
#define MR_PROC_LABEL mercury__io__stream_db__get_maybe_stream_info_2_f_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

#ifndef MR_NATIVE_GC
    // Most of the time, we can just use the pointer to the stream
    // as a unique identifier.
    Id = (MR_Word) Stream;
#else
    // For accurate GC we embed an ID in the MercuryFile and retrieve it here.
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	Var_12  = Id;
}
  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_info_0), StreamDb_4, Var_12, &conv0_Info0_7);
  if (succeeded)
  {
    Info0_7 = ((MR_Word) (conv0_Info0_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Id_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 0))));
    MR_Word Source_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 2))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 1)));

    {
      Info_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Info_6, 0) = ((MR_Box) (Id_8));
      MR_hl_field(MR_mktag(1), Info_6, 1) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(1), Info_6, 2) = ((MR_Box) (Source_11));
    }
  }
  else
    Info_6 = (MR_Word) ((MR_Unsigned) 0U);
  return Info_6;
}

void MR_CALL 
mercury__io__stream_db__stream_name_4_p_0(
  MR_Box Stream_5,
  MR_String * Name_6)
{
  MR_Word MaybeInfo_8;

  mercury__io__stream_db__stream_info_4_p_0(Stream_5, &MaybeInfo_8);
  if ((MaybeInfo_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *Name_6 = (MR_String) "<stream name unavailable>";
  else
  {
    MR_Word Info_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInfo_8, (MR_Integer) 0))));
    MR_Word Source_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) Source_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Source_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Name_6 = (MR_String) "<standard input>";
            break;
          case (MR_Integer) 1:
            *Name_6 = (MR_String) "<standard output>";
            break;
          case (MR_Integer) 2:
            *Name_6 = (MR_String) "<standard error>";
            break;
        }
        break;
      case (MR_Integer) 1:
        *Name_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), Source_13, (MR_Integer) 0))));
        break;
    }
  }
}

void MR_CALL 
mercury__io__stream_db__stream_info_4_p_0(
  MR_Box Stream_5,
  MR_Word * MaybeInfo_6)
{
  MR_bool succeeded;
  MR_Word StreamDb_8;
  MR_Word Info_9;
  MR_Integer Var_15;
  MR_Box conv0_Info_9;

{
#define MR_PROC_LABEL mercury__io__stream_db__stream_info_4_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__stream_db__stream_info_4_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	StreamDb_8  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__stream_db__stream_info_4_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.stream_db.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__stream_db__stream_info_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

#ifndef MR_NATIVE_GC
    // Most of the time, we can just use the pointer to the stream
    // as a unique identifier.
    Id = (MR_Word) Stream;
#else
    // For accurate GC we embed an ID in the MercuryFile and retrieve it here.
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	Var_15  = Id;
}
  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_info_0), StreamDb_8, Var_15, &conv0_Info_9);
  if (succeeded)
  {
    Info_9 = ((MR_Word) (conv0_Info_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeInfo_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Info_9));
    }
  else
    *MaybeInfo_6 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
mercury__io__stream_db__maybe_delete_stream_info_3_p_0(
  MR_Box Stream_4)
{
  MR_bool succeeded;
  MR_Integer MayDeleteStreamInfo_6;

{
#define MR_PROC_LABEL mercury__io__stream_db__maybe_delete_stream_info_3_p_0

	MR_Integer MayDelete;

		{

    MayDelete = !MR_debug_ever_enabled;


		;}
#undef MR_PROC_LABEL
	MayDeleteStreamInfo_6  = MayDelete;
}
  succeeded = (MayDeleteStreamInfo_6 == (MR_Integer) 0);
  if (!(succeeded))
  {
    MR_Word StreamDb0_7;
    MR_Word StreamDb_8;
    MR_Integer Var_14;
    MR_Word Var_31;

{
#define MR_PROC_LABEL mercury__io__stream_db__maybe_delete_stream_info_3_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__stream_db__maybe_delete_stream_info_3_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	StreamDb0_7  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__stream_db__maybe_delete_stream_info_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr)Stream_4 ;
		{

#ifndef MR_NATIVE_GC
    // Most of the time, we can just use the pointer to the stream
    // as a unique identifier.
    Id = (MR_Word) Stream;
#else
    // For accurate GC we embed an ID in the MercuryFile and retrieve it here.
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	Var_14  = Id;
}
    mercury__tree234__delete_2_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_info_0), StreamDb0_7, ((MR_Box) (Var_14)), &StreamDb_8, &Var_31);
{
#define MR_PROC_LABEL mercury__io__stream_db__maybe_delete_stream_info_3_p_0

	MR_Word StreamDb;

	StreamDb = StreamDb_8 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__stream_db__maybe_delete_stream_info_3_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.stream_db.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__io__stream_db__insert_stream_info_4_p_0(
  MR_Box Stream_5,
  MR_Word Name_6)
{
  MR_Word StreamDb0_8;
  MR_Word StreamDb_9;
  MR_Integer Var_14;

{
#define MR_PROC_LABEL mercury__io__stream_db__insert_stream_info_4_p_0


		{

    MR_LOCK(&ML_io_stream_db_lock, "io.lock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__stream_db__insert_stream_info_4_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	StreamDb0_8  = StreamDb;
}
{
#define MR_PROC_LABEL mercury__io__stream_db__insert_stream_info_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Id;

	Stream = (MercuryFilePtr)Stream_5 ;
		{

#ifndef MR_NATIVE_GC
    // Most of the time, we can just use the pointer to the stream
    // as a unique identifier.
    Id = (MR_Word) Stream;
#else
    // For accurate GC we embed an ID in the MercuryFile and retrieve it here.
    Id = (Stream)->id;
#endif


		;}
#undef MR_PROC_LABEL
	Var_14  = Id;
}
  mercury__tree234__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_info_0), ((MR_Box) (Var_14)), ((MR_Box) (Name_6)), StreamDb0_8, &StreamDb_9);
{
#define MR_PROC_LABEL mercury__io__stream_db__insert_stream_info_4_p_0

	MR_Word StreamDb;

	StreamDb = StreamDb_9 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__io__stream_db__insert_stream_info_4_p_0


		{

    MR_UNLOCK(&ML_io_stream_db_lock, "io.stream_db.unlock_stream_db/2");


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__stream_db__set_stream_db_3_p_0(
  MR_Word StreamDb_1)
{
{
#define MR_PROC_LABEL mercury__io__stream_db__set_stream_db_3_p_0

	MR_Word StreamDb;

	StreamDb = StreamDb_1 ;
		{

    ML_io_stream_db = StreamDb;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__stream_db__get_stream_db_with_locking_1_p_0(
  MR_Word * StreamDb_1)
{
{
#define MR_PROC_LABEL mercury__io__stream_db__get_stream_db_with_locking_1_p_0

	MR_Word StreamDb;

		{

    MR_LOCK(&ML_io_stream_db_lock, "io.get_stream_db/1");
    StreamDb = ML_io_stream_db;
    MR_UNLOCK(&ML_io_stream_db_lock, "io.get_stream_db/1");


		;}
#undef MR_PROC_LABEL
	*StreamDb_1  = StreamDb;
}
}

void MR_CALL 
mercury__io__stream_db__get_stream_db_3_p_0(
  MR_Word * StreamDb_1)
{
{
#define MR_PROC_LABEL mercury__io__stream_db__get_stream_db_3_p_0

	MR_Word StreamDb;

		{

    StreamDb = ML_io_stream_db;


		;}
#undef MR_PROC_LABEL
	*StreamDb_1  = StreamDb;
}
}

static MR_bool MR_CALL 
mercury__io__stream_db____Unify____maybe_stream_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io__stream_db____Unify____maybe_stream_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io__stream_db____Compare____maybe_stream_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io__stream_db____Compare____maybe_stream_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io__stream_db____Unify____stream_content_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io__stream_db____Unify____stream_content_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io__stream_db____Compare____stream_content_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io__stream_db____Compare____stream_content_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io__stream_db____Unify____stream_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io__stream_db____Unify____stream_db_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io__stream_db____Compare____stream_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io__stream_db____Compare____stream_db_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io__stream_db____Unify____stream_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io__stream_db____Unify____stream_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io__stream_db____Compare____stream_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io__stream_db____Compare____stream_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io__stream_db____Unify____stream_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io__stream_db____Unify____stream_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io__stream_db____Compare____stream_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io__stream_db____Compare____stream_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__io__stream_db____Unify____stream_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io__stream_db____Unify____stream_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io__stream_db____Compare____stream_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io__stream_db____Compare____stream_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__io__stream_db__init(void)
{
}

void mercury__io__stream_db__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__io__stream_db__io__stream_db__type_ctor_info_maybe_stream_info_0);
	MR_register_type_ctor_info(&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_content_0);
	MR_register_type_ctor_info(&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_db_0);
	MR_register_type_ctor_info(&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_info_0);
	MR_register_type_ctor_info(&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_mode_0);
	MR_register_type_ctor_info(&mercury__io__stream_db__io__stream_db__type_ctor_info_stream_source_0);
}

void mercury__io__stream_db__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__io__stream_db__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module io.stream_db.
