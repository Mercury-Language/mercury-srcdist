/*
** Automatically generated from `profiling_builtin.m'
** by the Mercury compiler,
** version rotd-2023-07-19
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


// :- module profiling_builtin.
// :- implementation.

/*
INIT mercury__profiling_builtin__init
ENDINIT
*/

#include "profiling_builtin.mih"


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
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_2_0_0[2];

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_2_0_0;

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_2_0_0[1];

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_2_0[1];

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_2_0[1];

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_2_0[1];

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_3_0_0[3];

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_3_0_0;

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_3_0_0[1];

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_3_0[1];

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_3_0[1];

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_3_0[1];

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_4_0_0[4];

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_4_0_0;

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_4_0_0[1];

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_4_0[1];

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_4_0[1];

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_4_0[1];

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_5_0_0[5];

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_5_0_0;

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_5_0_0[1];

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_5_0[1];

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_5_0[1];

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_5_0[1];

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_6_0_0[6];

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_6_0_0;

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_6_0_0[1];

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_6_0[1];

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_6_0[1];

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_6_0[1];

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_7_0_0[7];

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_7_0_0;

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_7_0_0[1];

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_7_0[1];

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_7_0[1];

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_7_0[1];

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_8_0_0[8];

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_8_0_0;

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_8_0_0[1];

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_8_0[1];

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_8_0[1];

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_8_0[1];

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_9_0_0[9];

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_9_0_0;

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_9_0_0[1];

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_9_0[1];

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_9_0[1];

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_9_0[1];

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_dynamic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_dynamic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_2_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_2_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_3_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_3_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_4_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_4_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_5_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_5_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_6_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_6_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_7_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_7_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_8_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_8_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_9_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_9_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____proc_dynamic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__profiling_builtin____Compare____proc_dynamic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____proc_layout_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__profiling_builtin____Compare____proc_layout_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__profiling_builtin_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__profiling_builtin_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__profiling_builtin_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__profiling_builtin_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__profiling_builtin_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__profiling_builtin_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__profiling_builtin_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__profiling_builtin_scalar_common_2[0])),
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
#include "profiling_builtin.mh"
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


const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_dynamic_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_dynamic_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_dynamic_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_dynamic",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_2_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_2_0_0 = {
  (MR_String) "call_site_nums_2",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_2_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_2_0_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_2_0_0 };

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_2_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_2_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_2_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_2_0_0 };

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_2_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_2_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_2_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_2_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_2",
  { mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_2_0 },
  { mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_2_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_2_0,

};

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_3_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_3_0_0 = {
  (MR_String) "call_site_nums_3",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_3_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_3_0_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_3_0_0 };

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_3_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_3_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_3_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_3_0_0 };

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_3_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_3_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_3_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_3_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_3",
  { mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_3_0 },
  { mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_3_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_3_0,

};

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_4_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_4_0_0 = {
  (MR_String) "call_site_nums_4",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_4_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_4_0_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_4_0_0 };

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_4_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_4_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_4_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_4_0_0 };

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_4_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_4_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_4_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_4_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_4",
  { mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_4_0 },
  { mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_4_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_4_0,

};

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_5_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_5_0_0 = {
  (MR_String) "call_site_nums_5",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_5_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_5_0_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_5_0_0 };

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_5_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_5_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_5_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_5_0_0 };

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_5_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_5_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_5_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_5_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_5",
  { mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_5_0 },
  { mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_5_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_5_0,

};

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_6_0_0[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_6_0_0 = {
  (MR_String) "call_site_nums_6",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_6_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_6_0_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_6_0_0 };

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_6_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_6_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_6_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_6_0_0 };

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_6_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_6_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_6_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_6_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_6",
  { mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_6_0 },
  { mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_6_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_6_0,

};

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_7_0_0[7] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_7_0_0 = {
  (MR_String) "call_site_nums_7",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_7_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_7_0_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_7_0_0 };

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_7_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_7_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_7_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_7_0_0 };

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_7_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_7_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_7_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_7_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_7",
  { mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_7_0 },
  { mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_7_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_7_0,

};

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_8_0_0[8] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_8_0_0 = {
  (MR_String) "call_site_nums_8",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_8_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_8_0_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_8_0_0 };

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_8_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_8_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_8_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_8_0_0 };

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_8_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_8_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_8_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_8_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_8",
  { mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_8_0 },
  { mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_8_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_8_0,

};

static const MR_PseudoTypeInfo mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_9_0_0[9] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_9_0_0 = {
  (MR_String) "call_site_nums_9",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__profiling_builtin__profiling_builtin__field_types_call_site_nums_9_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_9_0_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_9_0_0 };

static const MR_DuPtagLayout mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_9_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__profiling_builtin__profiling_builtin__du_stag_ordered_call_site_nums_9_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_9_0[1] = { &mercury__profiling_builtin__profiling_builtin__du_functor_desc_call_site_nums_9_0_0 };

static const MR_Integer mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_9_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_9_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__profiling_builtin____Unify____call_site_nums_9_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____call_site_nums_9_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "call_site_nums_9",
  { mercury__profiling_builtin__profiling_builtin__du_name_ordered_call_site_nums_9_0 },
  { mercury__profiling_builtin__profiling_builtin__du_ptag_ordered_call_site_nums_9_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__profiling_builtin__profiling_builtin__functor_number_map_call_site_nums_9_0,

};

const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_proc_dynamic_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__profiling_builtin____Unify____proc_dynamic_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____proc_dynamic_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "proc_dynamic",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__profiling_builtin__profiling_builtin__type_ctor_info_proc_layout_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__profiling_builtin____Unify____proc_layout_0_0_10001)),
  ((MR_Box) (mercury__profiling_builtin____Compare____proc_layout_0_0_10001)),
  (MR_String) "profiling_builtin",
  (MR_String) "proc_layout",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__profiling_builtin____Compare____proc_layout_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__profiling_builtin____Unify____proc_layout_0_0(
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
mercury__profiling_builtin____Compare____proc_dynamic_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__profiling_builtin____Unify____proc_dynamic_0_0(
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
mercury__profiling_builtin____Compare____call_site_nums_9_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Integer ArgX9_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Integer ArgY9_29 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
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

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
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

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          SubResult3_12 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 == ArgY3_11);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 0;
          else
            SubResult3_12 = (MR_Integer) 2;
        }
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            SubResult4_15 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 == ArgY4_14);
            if (succeeded)
              SubResult4_15 = (MR_Integer) 0;
            else
              SubResult4_15 = (MR_Integer) 2;
          }
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
              SubResult5_18 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX5_16 == ArgY5_17);
              if (succeeded)
                SubResult5_18 = (MR_Integer) 0;
              else
                SubResult5_18 = (MR_Integer) 2;
            }
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
                SubResult6_21 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX6_19 == ArgY6_20);
                if (succeeded)
                  SubResult6_21 = (MR_Integer) 0;
                else
                  SubResult6_21 = (MR_Integer) 2;
              }
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                  SubResult7_24 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX7_22 == ArgY7_23);
                  if (succeeded)
                    SubResult7_24 = (MR_Integer) 0;
                  else
                    SubResult7_24 = (MR_Integer) 2;
                }
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  succeeded = (ArgX8_25 < ArgY8_26);
                  if (succeeded)
                    SubResult8_27 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX8_25 == ArgY8_26);
                    if (succeeded)
                      SubResult8_27 = (MR_Integer) 0;
                    else
                      SubResult8_27 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    succeeded = (ArgX9_28 < ArgY9_29);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX9_28 == ArgY9_29);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *HeadVar__1_1 = (MR_Integer) 2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_9_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Integer ArgY9_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                {
                  succeeded = (ArgX8_17 == ArgY8_18);
                  if (succeeded)
                    succeeded = (ArgX9_19 == ArgY9_20);
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_8_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
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

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
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

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          SubResult3_12 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 == ArgY3_11);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 0;
          else
            SubResult3_12 = (MR_Integer) 2;
        }
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            SubResult4_15 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 == ArgY4_14);
            if (succeeded)
              SubResult4_15 = (MR_Integer) 0;
            else
              SubResult4_15 = (MR_Integer) 2;
          }
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
              SubResult5_18 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX5_16 == ArgY5_17);
              if (succeeded)
                SubResult5_18 = (MR_Integer) 0;
              else
                SubResult5_18 = (MR_Integer) 2;
            }
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
                SubResult6_21 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX6_19 == ArgY6_20);
                if (succeeded)
                  SubResult6_21 = (MR_Integer) 0;
                else
                  SubResult6_21 = (MR_Integer) 2;
              }
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                  SubResult7_24 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX7_22 == ArgY7_23);
                  if (succeeded)
                    SubResult7_24 = (MR_Integer) 0;
                  else
                    SubResult7_24 = (MR_Integer) 2;
                }
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  succeeded = (ArgX8_25 < ArgY8_26);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX8_25 == ArgY8_26);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_8_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                  succeeded = (ArgX8_17 == ArgY8_18);
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_7_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
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

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
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

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          SubResult3_12 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 == ArgY3_11);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 0;
          else
            SubResult3_12 = (MR_Integer) 2;
        }
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            SubResult4_15 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 == ArgY4_14);
            if (succeeded)
              SubResult4_15 = (MR_Integer) 0;
            else
              SubResult4_15 = (MR_Integer) 2;
          }
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
              SubResult5_18 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX5_16 == ArgY5_17);
              if (succeeded)
                SubResult5_18 = (MR_Integer) 0;
              else
                SubResult5_18 = (MR_Integer) 2;
            }
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
                SubResult6_21 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX6_19 == ArgY6_20);
                if (succeeded)
                  SubResult6_21 = (MR_Integer) 0;
                else
                  SubResult6_21 = (MR_Integer) 2;
              }
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX7_22 == ArgY7_23);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_7_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
                succeeded = (ArgX7_15 == ArgY7_16);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_6_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
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

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
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

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          SubResult3_12 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 == ArgY3_11);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 0;
          else
            SubResult3_12 = (MR_Integer) 2;
        }
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            SubResult4_15 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 == ArgY4_14);
            if (succeeded)
              SubResult4_15 = (MR_Integer) 0;
            else
              SubResult4_15 = (MR_Integer) 2;
          }
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
              SubResult5_18 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX5_16 == ArgY5_17);
              if (succeeded)
                SubResult5_18 = (MR_Integer) 0;
              else
                SubResult5_18 = (MR_Integer) 2;
            }
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX6_19 == ArgY6_20);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_6_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
              succeeded = (ArgX6_13 == ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_5_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
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

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
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

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          SubResult3_12 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 == ArgY3_11);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 0;
          else
            SubResult3_12 = (MR_Integer) 2;
        }
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            SubResult4_15 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 == ArgY4_14);
            if (succeeded)
              SubResult4_15 = (MR_Integer) 0;
            else
              SubResult4_15 = (MR_Integer) 2;
          }
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX5_16 == ArgY5_17);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 0;
              else
                *HeadVar__1_1 = (MR_Integer) 2;
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_5_0_0(
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
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
            succeeded = (ArgX5_11 == ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_4_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
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

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
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

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          SubResult3_12 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 == ArgY3_11);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 0;
          else
            SubResult3_12 = (MR_Integer) 2;
        }
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 == ArgY4_14);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 0;
            else
              *HeadVar__1_1 = (MR_Integer) 2;
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_4_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_3_0_0(
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
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
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
        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 == ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 0;
          else
            *HeadVar__1_1 = (MR_Integer) 2;
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_3_0_0(
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
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_2_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_2_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
mercury__profiling_builtin____Compare____call_site_dynamic_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_dynamic_0_0(
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
mercury__profiling_builtin__restore_recursion_depth_fail_9_11_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4,
  MR_Integer OuterCount3_5,
  MR_Integer OuterCount4_6,
  MR_Integer OuterCount5_7,
  MR_Integer OuterCount6_8,
  MR_Integer OuterCount7_9,
  MR_Integer OuterCount8_10,
  MR_Integer OuterCount9_11)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_9_11_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;
	MR_Integer OuterCount8;
	MR_Integer OuterCount9;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
	OuterCount3 = OuterCount3_5 ;
	OuterCount4 = OuterCount4_6 ;
	OuterCount5 = OuterCount5_7 ;
	OuterCount6 = OuterCount6_8 ;
	OuterCount7 = OuterCount7_9 ;
	OuterCount8 = OuterCount8_10 ;
	OuterCount9 = OuterCount9_11 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7
// shut up warning: OuterCount8, OuterCount9
#define MR_PROCNAME     "restore_recursion_depth_fail_9"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount8,                      \
                    MR_csn_vector_field(CSNsVector, 7));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount9,                      \
                    MR_csn_vector_field(CSNsVector, 8));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_8_10_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4,
  MR_Integer OuterCount3_5,
  MR_Integer OuterCount4_6,
  MR_Integer OuterCount5_7,
  MR_Integer OuterCount6_8,
  MR_Integer OuterCount7_9,
  MR_Integer OuterCount8_10)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_8_10_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;
	MR_Integer OuterCount8;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
	OuterCount3 = OuterCount3_5 ;
	OuterCount4 = OuterCount4_6 ;
	OuterCount5 = OuterCount5_7 ;
	OuterCount6 = OuterCount6_8 ;
	OuterCount7 = OuterCount7_9 ;
	OuterCount8 = OuterCount8_10 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7
// shut up warning: OuterCount8
#define MR_PROCNAME     "restore_recursion_depth_fail_8"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount8,                      \
                    MR_csn_vector_field(CSNsVector, 7));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_7_9_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4,
  MR_Integer OuterCount3_5,
  MR_Integer OuterCount4_6,
  MR_Integer OuterCount5_7,
  MR_Integer OuterCount6_8,
  MR_Integer OuterCount7_9)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_7_9_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
	OuterCount3 = OuterCount3_5 ;
	OuterCount4 = OuterCount4_6 ;
	OuterCount5 = OuterCount5_7 ;
	OuterCount6 = OuterCount6_8 ;
	OuterCount7 = OuterCount7_9 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7
#define MR_PROCNAME     "restore_recursion_depth_fail_7"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_6_8_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4,
  MR_Integer OuterCount3_5,
  MR_Integer OuterCount4_6,
  MR_Integer OuterCount5_7,
  MR_Integer OuterCount6_8)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_6_8_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
	OuterCount3 = OuterCount3_5 ;
	OuterCount4 = OuterCount4_6 ;
	OuterCount5 = OuterCount5_7 ;
	OuterCount6 = OuterCount6_8 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5, OuterCount6
#define MR_PROCNAME     "restore_recursion_depth_fail_6"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_5_7_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4,
  MR_Integer OuterCount3_5,
  MR_Integer OuterCount4_6,
  MR_Integer OuterCount5_7)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_5_7_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
	OuterCount3 = OuterCount3_5 ;
	OuterCount4 = OuterCount4_6 ;
	OuterCount5 = OuterCount5_7 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5
#define MR_PROCNAME     "restore_recursion_depth_fail_5"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_4_6_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4,
  MR_Integer OuterCount3_5,
  MR_Integer OuterCount4_6)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_4_6_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
	OuterCount3 = OuterCount3_5 ;
	OuterCount4 = OuterCount4_6 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4
#define MR_PROCNAME     "restore_recursion_depth_fail_4"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_3_5_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4,
  MR_Integer OuterCount3_5)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_3_5_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
	OuterCount3 = OuterCount3_5 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
#define MR_PROCNAME     "restore_recursion_depth_fail_3"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_2_4_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_2_4_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2
#define MR_PROCNAME     "restore_recursion_depth_fail_2"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_fail_1_3_p_0(
  MR_Box CSD_1,
  MR_Integer CSN_2,
  MR_Integer OuterCount1_3)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_fail_1_3_p_0

	MR_CallSiteDynamic * CSD;
	MR_Integer CSN;
	MR_Integer OuterCount1;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSN = CSN_2 ;
	OuterCount1 = OuterCount1_3 ;
		{
{
// shut up warning: CSD, CSN, OuterCount1
#define MR_PROCNAME     "restore_recursion_depth_fail_1"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1, CSN);                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_9_11_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4,
  MR_Integer OuterCount3_5,
  MR_Integer OuterCount4_6,
  MR_Integer OuterCount5_7,
  MR_Integer OuterCount6_8,
  MR_Integer OuterCount7_9,
  MR_Integer OuterCount8_10,
  MR_Integer OuterCount9_11)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_9_11_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;
	MR_Integer OuterCount8;
	MR_Integer OuterCount9;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
	OuterCount3 = OuterCount3_5 ;
	OuterCount4 = OuterCount4_6 ;
	OuterCount5 = OuterCount5_7 ;
	OuterCount6 = OuterCount6_8 ;
	OuterCount7 = OuterCount7_9 ;
	OuterCount8 = OuterCount8_10 ;
	OuterCount9 = OuterCount9_11 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7
// shut up warning: OuterCount8, OuterCount9
#define MR_PROCNAME     "restore_recursion_depth_exit_9"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount8,                      \
                    MR_csn_vector_field(CSNsVector, 7));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount9,                      \
                    MR_csn_vector_field(CSNsVector, 8));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_8_10_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4,
  MR_Integer OuterCount3_5,
  MR_Integer OuterCount4_6,
  MR_Integer OuterCount5_7,
  MR_Integer OuterCount6_8,
  MR_Integer OuterCount7_9,
  MR_Integer OuterCount8_10)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_8_10_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;
	MR_Integer OuterCount8;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
	OuterCount3 = OuterCount3_5 ;
	OuterCount4 = OuterCount4_6 ;
	OuterCount5 = OuterCount5_7 ;
	OuterCount6 = OuterCount6_8 ;
	OuterCount7 = OuterCount7_9 ;
	OuterCount8 = OuterCount8_10 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7
// shut up warning: OuterCount8
#define MR_PROCNAME     "restore_recursion_depth_exit_8"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount8,                      \
                    MR_csn_vector_field(CSNsVector, 7));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_7_9_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4,
  MR_Integer OuterCount3_5,
  MR_Integer OuterCount4_6,
  MR_Integer OuterCount5_7,
  MR_Integer OuterCount6_8,
  MR_Integer OuterCount7_9)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_7_9_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
	OuterCount3 = OuterCount3_5 ;
	OuterCount4 = OuterCount4_6 ;
	OuterCount5 = OuterCount5_7 ;
	OuterCount6 = OuterCount6_8 ;
	OuterCount7 = OuterCount7_9 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7
#define MR_PROCNAME     "restore_recursion_depth_exit_7"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_6_8_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4,
  MR_Integer OuterCount3_5,
  MR_Integer OuterCount4_6,
  MR_Integer OuterCount5_7,
  MR_Integer OuterCount6_8)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_6_8_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
	OuterCount3 = OuterCount3_5 ;
	OuterCount4 = OuterCount4_6 ;
	OuterCount5 = OuterCount5_7 ;
	OuterCount6 = OuterCount6_8 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5, OuterCount6
#define MR_PROCNAME     "restore_recursion_depth_exit_6"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_5_7_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4,
  MR_Integer OuterCount3_5,
  MR_Integer OuterCount4_6,
  MR_Integer OuterCount5_7)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_5_7_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
	OuterCount3 = OuterCount3_5 ;
	OuterCount4 = OuterCount4_6 ;
	OuterCount5 = OuterCount5_7 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5
#define MR_PROCNAME     "restore_recursion_depth_exit_5"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_4_6_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4,
  MR_Integer OuterCount3_5,
  MR_Integer OuterCount4_6)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_4_6_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
	OuterCount3 = OuterCount3_5 ;
	OuterCount4 = OuterCount4_6 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4
#define MR_PROCNAME     "restore_recursion_depth_exit_4"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_3_5_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4,
  MR_Integer OuterCount3_5)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_3_5_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
	OuterCount3 = OuterCount3_5 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
#define MR_PROCNAME     "restore_recursion_depth_exit_3"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_2_4_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer OuterCount1_3,
  MR_Integer OuterCount2_4)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_2_4_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
	OuterCount1 = OuterCount1_3 ;
	OuterCount2 = OuterCount2_4 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2
#define MR_PROCNAME     "restore_recursion_depth_exit_2"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__restore_recursion_depth_exit_1_3_p_0(
  MR_Box CSD_1,
  MR_Integer CSN_2,
  MR_Integer OuterCount1_3)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__restore_recursion_depth_exit_1_3_p_0

	MR_CallSiteDynamic * CSD;
	MR_Integer CSN;
	MR_Integer OuterCount1;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSN = CSN_2 ;
	OuterCount1 = OuterCount1_3 ;
		{
{
// shut up warning: CSD, CSN, OuterCount1
#define MR_PROCNAME     "restore_recursion_depth_exit_1"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1, CSN);                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_9_11_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer * OuterCount1_3,
  MR_Integer * OuterCount2_4,
  MR_Integer * OuterCount3_5,
  MR_Integer * OuterCount4_6,
  MR_Integer * OuterCount5_7,
  MR_Integer * OuterCount6_8,
  MR_Integer * OuterCount7_9,
  MR_Integer * OuterCount8_10,
  MR_Integer * OuterCount9_11)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_9_11_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;
	MR_Integer OuterCount8;
	MR_Integer OuterCount9;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7
// shut up warning: OuterCount8, OuterCount9
#define MR_PROCNAME     "save_recursion_depth_9"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_SAVE_DEPTH_ACTION(OuterCount6,                       \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_SAVE_DEPTH_ACTION(OuterCount7,                       \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_SAVE_DEPTH_ACTION(OuterCount8,                       \
                    MR_csn_vector_field(CSNsVector, 7));                \
                MR_SAVE_DEPTH_ACTION(OuterCount9,                       \
                    MR_csn_vector_field(CSNsVector, 8));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
	*OuterCount1_3  = OuterCount1;
	*OuterCount2_4  = OuterCount2;
	*OuterCount3_5  = OuterCount3;
	*OuterCount4_6  = OuterCount4;
	*OuterCount5_7  = OuterCount5;
	*OuterCount6_8  = OuterCount6;
	*OuterCount7_9  = OuterCount7;
	*OuterCount8_10  = OuterCount8;
	*OuterCount9_11  = OuterCount9;
}
}

void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_8_10_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer * OuterCount1_3,
  MR_Integer * OuterCount2_4,
  MR_Integer * OuterCount3_5,
  MR_Integer * OuterCount4_6,
  MR_Integer * OuterCount5_7,
  MR_Integer * OuterCount6_8,
  MR_Integer * OuterCount7_9,
  MR_Integer * OuterCount8_10)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_8_10_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;
	MR_Integer OuterCount8;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7
// shut up warning: OuterCount8
#define MR_PROCNAME     "save_recursion_depth_8"
#define MR_REC_DEPTH_BODY   {                                       \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_SAVE_DEPTH_ACTION(OuterCount6,                       \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_SAVE_DEPTH_ACTION(OuterCount7,                       \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_SAVE_DEPTH_ACTION(OuterCount8,                       \
                    MR_csn_vector_field(CSNsVector, 7));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
	*OuterCount1_3  = OuterCount1;
	*OuterCount2_4  = OuterCount2;
	*OuterCount3_5  = OuterCount3;
	*OuterCount4_6  = OuterCount4;
	*OuterCount5_7  = OuterCount5;
	*OuterCount6_8  = OuterCount6;
	*OuterCount7_9  = OuterCount7;
	*OuterCount8_10  = OuterCount8;
}
}

void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_7_9_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer * OuterCount1_3,
  MR_Integer * OuterCount2_4,
  MR_Integer * OuterCount3_5,
  MR_Integer * OuterCount4_6,
  MR_Integer * OuterCount5_7,
  MR_Integer * OuterCount6_8,
  MR_Integer * OuterCount7_9)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_7_9_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;
	MR_Integer OuterCount7;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7
#define MR_PROCNAME     "save_recursion_depth_7"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_SAVE_DEPTH_ACTION(OuterCount6,                       \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_SAVE_DEPTH_ACTION(OuterCount7,                       \
                    MR_csn_vector_field(CSNsVector, 6));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
	*OuterCount1_3  = OuterCount1;
	*OuterCount2_4  = OuterCount2;
	*OuterCount3_5  = OuterCount3;
	*OuterCount4_6  = OuterCount4;
	*OuterCount5_7  = OuterCount5;
	*OuterCount6_8  = OuterCount6;
	*OuterCount7_9  = OuterCount7;
}
}

void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_6_8_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer * OuterCount1_3,
  MR_Integer * OuterCount2_4,
  MR_Integer * OuterCount3_5,
  MR_Integer * OuterCount4_6,
  MR_Integer * OuterCount5_7,
  MR_Integer * OuterCount6_8)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_6_8_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;
	MR_Integer OuterCount6;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5, OuterCount6
#define MR_PROCNAME     "save_recursion_depth_6"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_SAVE_DEPTH_ACTION(OuterCount6,                       \
                    MR_csn_vector_field(CSNsVector, 5));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
	*OuterCount1_3  = OuterCount1;
	*OuterCount2_4  = OuterCount2;
	*OuterCount3_5  = OuterCount3;
	*OuterCount4_6  = OuterCount4;
	*OuterCount5_7  = OuterCount5;
	*OuterCount6_8  = OuterCount6;
}
}

void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_5_7_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer * OuterCount1_3,
  MR_Integer * OuterCount2_4,
  MR_Integer * OuterCount3_5,
  MR_Integer * OuterCount4_6,
  MR_Integer * OuterCount5_7)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_5_7_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;
	MR_Integer OuterCount5;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4, OuterCount5
#define MR_PROCNAME     "save_recursion_depth_5"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
	*OuterCount1_3  = OuterCount1;
	*OuterCount2_4  = OuterCount2;
	*OuterCount3_5  = OuterCount3;
	*OuterCount4_6  = OuterCount4;
	*OuterCount5_7  = OuterCount5;
}
}

void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_4_6_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer * OuterCount1_3,
  MR_Integer * OuterCount2_4,
  MR_Integer * OuterCount3_5,
  MR_Integer * OuterCount4_6)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_4_6_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;
	MR_Integer OuterCount4;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
// shut up warning: OuterCount4
#define MR_PROCNAME     "save_recursion_depth_4"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
	*OuterCount1_3  = OuterCount1;
	*OuterCount2_4  = OuterCount2;
	*OuterCount3_5  = OuterCount3;
	*OuterCount4_6  = OuterCount4;
}
}

void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_3_5_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer * OuterCount1_3,
  MR_Integer * OuterCount2_4,
  MR_Integer * OuterCount3_5)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_3_5_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;
	MR_Integer OuterCount3;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3
#define MR_PROCNAME     "save_recursion_depth_3"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
	*OuterCount1_3  = OuterCount1;
	*OuterCount2_4  = OuterCount2;
	*OuterCount3_5  = OuterCount3;
}
}

void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_2_4_p_0(
  MR_Box CSD_1,
  MR_Word CSNsVector_2,
  MR_Integer * OuterCount1_3,
  MR_Integer * OuterCount2_4)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_2_4_p_0

	MR_CallSiteDynamic * CSD;
	MR_Word CSNsVector;
	MR_Integer OuterCount1;
	MR_Integer OuterCount2;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSNsVector = CSNsVector_2 ;
		{
{
// shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2
#define MR_PROCNAME     "save_recursion_depth_2"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
	*OuterCount1_3  = OuterCount1;
	*OuterCount2_4  = OuterCount2;
}
}

void MR_CALL 
mercury__profiling_builtin__save_recursion_depth_1_3_p_0(
  MR_Box CSD_1,
  MR_Integer CSN_2,
  MR_Integer * OuterCount1_3)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_recursion_depth_1_3_p_0

	MR_CallSiteDynamic * CSD;
	MR_Integer CSN;
	MR_Integer OuterCount1;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, CSD_1 , CSD);
	CSN = CSN_2 ;
		{
{
// shut up warning: CSD, CSN, OuterCount1
#define MR_PROCNAME     "save_recursion_depth_1"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1, CSN);                 \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
}

		;}
#undef MR_PROC_LABEL
	*OuterCount1_3  = OuterCount1;
}
}

void MR_CALL 
mercury__profiling_builtin__increment_dynamic_coverage_point_count_1_p_0(
  MR_Integer CPIndex_1)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__increment_dynamic_coverage_point_count_1_p_0

	MR_Integer CPIndex;

	CPIndex = CPIndex_1 ;
		{

#ifdef MR_DEEP_PROFILING_COVERAGE_DYNAMIC
    const MR_CallSiteDynamic *csd;
    const MR_ProcDynamic *pd;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "increment_coverage_point_count");
        printf(", CallSiteDynamic: 0x%x, CPIndex: %d\n",
            MR_current_call_site_dynamic, CPIndex);
    }
  #endif

    csd = MR_current_call_site_dynamic;

    MR_deep_assert(NULL, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;

    MR_deep_assert(csd, NULL, NULL, pd != NULL);

#ifdef MR_DEEP_CHECKS
    // Check that CPIndex is within bounds.
    {
        const MR_ProcLayout *pl;
        const MR_ProcStatic *ps;

        pl = pd->MR_pd_proc_layout;
        MR_deep_assert(csd, NULL, NULL, pl != NULL);
        ps = pl->MR_sle_proc_static;
        MR_deep_assert(csd, pl, NULL, ps != NULL);
        MR_deep_assert(csd, pl, ps, CPIndex >= ps->MR_ps_num_coverage_points);
    }
#endif

    MR_deep_assert(csd, NULL, NULL, pd->MR_pd_coverage_points != NULL);

    pd->MR_pd_coverage_points[CPIndex]++;

    MR_leave_instrumentation();
#else
    MR_fatal_error(
        "increment_dynamic_coverage_point_count:  "
            "dynamic deep profiling not enabled");
#endif // MR_DEEP_PROFILING_COVERAGE_DYNAMIC


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__increment_static_coverage_point_count_2_p_0(
  MR_Box ProcLayout_1,
  MR_Integer CPIndex_2)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__increment_static_coverage_point_count_2_p_0

	MR_ProcLayout * ProcLayout;
	MR_Integer CPIndex;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ProcLayout *, ProcLayout_1 , ProcLayout);
	CPIndex = CPIndex_2 ;
		{

#ifdef MR_DEEP_PROFILING_COVERAGE_STATIC
    const MR_ProcLayout *pl;
    MR_ProcStatic       *ps;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "increment_coverage_point_count");
        printf(", ProcLayout: 0x%x, CPIndex: %d\n", ProcLayout, CPIndex);
    }
  #endif

    pl = (const MR_ProcLayout *) ProcLayout;

    MR_deep_assert(NULL, NULL, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(NULL, pl, NULL, ps != NULL);

    MR_deep_assert(NULL, pl, ps, CPIndex >= ps->MR_ps_num_coverage_points);
    MR_deep_assert(NULL, pl, ps, ps->MR_ps_coverage_points != NULL);

    ps->MR_ps_coverage_points[CPIndex]++;

    MR_leave_instrumentation();
#else
    MR_fatal_error(
        "increment_static_coverage_point_count:  "
            "static coverage profiling not enabled");
#endif // MR_DEEP_PROFILING_COVERAGE_STATIC


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__reset_activation_info_sr_1_p_0(
  MR_Box Ptr_1)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__reset_activation_info_sr_1_p_0

	MR_ProcDynamic * Ptr;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ProcDynamic *, Ptr_1 , Ptr);
		{
{
#ifdef MR_DEEP_PROFILING
  #ifndef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    ps->MR_ps_outermost_activation_ptr = Ptr;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("reset_activation_info_sr called when using activation counts!");
  #endif
#else
    MR_fatal_error("reset_activation_info_sr: deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__reset_activation_info_ac_2_p_0(
  MR_Integer Count_1,
  MR_Box Ptr_2)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__reset_activation_info_ac_2_p_0

	MR_Integer Count;
	MR_ProcDynamic * Ptr;

	Count = Count_1 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ProcDynamic *, Ptr_2 , Ptr);
		{
{
#ifdef MR_DEEP_PROFILING
  #ifdef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    ps->MR_ps_activation_count = Count;
    ps->MR_ps_outermost_activation_ptr = Ptr;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("reset_activation_info_ac called when not using activation counts!");
  #endif
#else
    MR_fatal_error("reset_activation_info_ac: deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__rezero_activation_info_sr_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__rezero_activation_info_sr_0_p_0


		{
{
#ifdef MR_DEEP_PROFILING
  #ifndef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    ps->MR_ps_outermost_activation_ptr = NULL;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("rezero_activation_info_sr called when using activation counts!");
  #endif
#else
    MR_fatal_error("rezero_activation_info_sr: deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__rezero_activation_info_ac_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__rezero_activation_info_ac_0_p_0


		{
{
#ifdef MR_DEEP_PROFILING
  #ifdef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    ps->MR_ps_activation_count = 0;
    ps->MR_ps_outermost_activation_ptr = NULL;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("rezero_activation_info_ac called when not using activation counts!");
  #endif
#else
    MR_fatal_error("rezero_activation_info_ac: deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__save_and_zero_activation_info_sr_1_p_0(
  MR_Box * Ptr_1)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_and_zero_activation_info_sr_1_p_0

	MR_ProcDynamic * Ptr;

		{
{
#ifdef MR_DEEP_PROFILING
  #ifndef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    Ptr = ps->MR_ps_outermost_activation_ptr;
    ps->MR_ps_outermost_activation_ptr = NULL;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("save_and_zero_activation_info_sr called when using activation counts!");
  #endif
#else
    MR_fatal_error("save_and_zero_activation_info_sr: deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ProcDynamic *, Ptr, *Ptr_1 );
}
}

void MR_CALL 
mercury__profiling_builtin__save_and_zero_activation_info_ac_2_p_0(
  MR_Integer * Count_1,
  MR_Box * Ptr_2)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__save_and_zero_activation_info_ac_2_p_0

	MR_Integer Count;
	MR_ProcDynamic * Ptr;

		{
{
#ifdef MR_DEEP_PROFILING
  #ifdef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    Count = ps->MR_ps_activation_count;
    ps->MR_ps_activation_count = 0;
    Ptr = ps->MR_ps_outermost_activation_ptr;
    ps->MR_ps_outermost_activation_ptr = NULL;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("save_and_zero_activation_info_ac called when not using activation counts!");
  #endif
#else
    MR_fatal_error("save_and_zero_activation_info_ac: deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
	*Count_1  = Count;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ProcDynamic *, Ptr, *Ptr_2 );
}
}

MR_bool MR_CALL 
mercury__profiling_builtin__non_fail_port_code_sr_3_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3);

MR_bool MR_CALL 
mercury__profiling_builtin__non_fail_port_code_ac_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

MR_bool MR_CALL 
mercury__profiling_builtin__non_redo_port_code_sr_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

MR_bool MR_CALL 
mercury__profiling_builtin__non_redo_port_code_ac_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

void MR_CALL 
mercury__profiling_builtin__non_exit_port_code_sr_3_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3);

void MR_CALL 
mercury__profiling_builtin__non_exit_port_code_ac_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

void MR_CALL 
mercury__profiling_builtin__non_call_port_code_sr_5_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Box * HeadVar__3_3,
  MR_Box * HeadVar__4_4,
  MR_Box * HeadVar__5_5);

void MR_CALL 
mercury__profiling_builtin__non_call_port_code_ac_4_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Box * HeadVar__3_3,
  MR_Box * HeadVar__4_4);

MR_bool MR_CALL 
mercury__profiling_builtin__semi_fail_port_code_sr_3_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3);

MR_bool MR_CALL 
mercury__profiling_builtin__semi_fail_port_code_ac_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

void MR_CALL 
mercury__profiling_builtin__semi_exit_port_code_sr_3_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3);

void MR_CALL 
mercury__profiling_builtin__semi_exit_port_code_ac_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

void MR_CALL 
mercury__profiling_builtin__semi_call_port_code_sr_4_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Box * HeadVar__3_3,
  MR_Box * HeadVar__4_4);

void MR_CALL 
mercury__profiling_builtin__semi_call_port_code_ac_3_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Box * HeadVar__3_3);

void MR_CALL 
mercury__profiling_builtin__det_exit_port_code_sr_3_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3);

void MR_CALL 
mercury__profiling_builtin__det_exit_port_code_ac_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

void MR_CALL 
mercury__profiling_builtin__det_call_port_code_sr_4_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Box * HeadVar__3_3,
  MR_Box * HeadVar__4_4);

void MR_CALL 
mercury__profiling_builtin__det_call_port_code_ac_3_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Box * HeadVar__3_3);

void MR_CALL 
mercury__profiling_builtin__prepare_for_tail_call_1_p_0(
  MR_Integer CSN_1)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__prepare_for_tail_call_1_p_0

	MR_Integer CSN;

	CSN = CSN_1 ;
		{
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *child_csd;
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_tail_call");
        printf("call site number: %d\n", CSN);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    child_csd = pd->MR_pd_call_site_ptr_ptrs[CSN];

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (child_csd == NULL) {
        MR_deep_prof_prep_tail_new++;
    } else {
        MR_deep_prof_prep_tail_old++;
    }
  #endif
    if (child_csd == NULL) {
        MR_new_call_site_dynamic(child_csd);
        child_csd->MR_csd_callee_ptr = pd;
        pd->MR_pd_call_site_ptr_ptrs[CSN] = child_csd;
    }

    child_csd->MR_csd_depth_count++;
    MR_current_call_site_dynamic = child_csd;

    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_tail_call: deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__prepare_for_callback_1_p_0(
  MR_Integer CSN_1)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__prepare_for_callback_1_p_0

	MR_Integer CSN;

	CSN = CSN_1 ;
		{
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_callback");
        printf("call site number: %d\n", CSN);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    MR_current_callback_site = (MR_CallSiteDynList **)
        &(pd->MR_pd_call_site_ptr_ptrs[CSN]);
    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_callback: deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__prepare_for_method_call_3_p_0(
  MR_Integer CSN_1,
  MR_Word TypeClassInfo_2,
  MR_Integer MethodNum_3)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__prepare_for_method_call_3_p_0

	MR_Integer CSN;
	MR_Word TypeClassInfo;
	MR_Integer MethodNum;

	CSN = CSN_1 ;
	TypeClassInfo = TypeClassInfo_2 ;
	MethodNum = MethodNum_3 ;
		{
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;
    MR_CallSiteDynList  *csdlist;
    void                *void_key;
  #ifdef MR_DEEP_PROFILING_MOVE_TO_FRONT_LISTS
    MR_CallSiteDynList  *prev = NULL;
  #endif

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_method_call");
        printf("call site number: %d\n", CSN);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    void_key = (void *)
        MR_typeclass_info_class_method(TypeClassInfo, MethodNum);
    MR_search_csdlist(csdlist, prev, pd, CSN, void_key);
    MR_maybe_deep_profile_update_method_history();

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (csdlist != NULL) {
        MR_deep_prof_prep_method_old++;
    } else {
        MR_deep_prof_prep_method_new++;
    }
  #endif

    if (csdlist != NULL) {
        MR_next_call_site_dynamic = csdlist->MR_csdlist_call_site;
    } else {
        MR_CallSiteDynamic  *newcsd;

        MR_new_call_site_dynamic(newcsd);
        MR_make_and_link_csdlist(csdlist, newcsd, pd, CSN, void_key);
        MR_next_call_site_dynamic = newcsd;
    }

    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_method_call: deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__prepare_for_ho_call_2_p_0(
  MR_Integer CSN_1,
  MR_Word Closure_2)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__prepare_for_ho_call_2_p_0

	MR_Integer CSN;
	MR_Word Closure;

	CSN = CSN_1 ;
	Closure = Closure_2 ;
		{
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;
    MR_Closure          *closure;
    MR_CallSiteDynList  *csdlist;
    void                *void_key;
  #ifdef MR_DEEP_PROFILING_MOVE_TO_FRONT_LISTS
    MR_CallSiteDynList  *prev = NULL;
  #endif

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_ho_call");
        printf("call site number: %d\n", CSN);
        closure = (MR_Closure *) Closure;
        printf("closure: layout %p, code %p\n",
            (void *) closure->MR_closure_layout,
            (void *) closure->MR_closure_code);
    }
  #endif

    closure = (MR_Closure *) Closure;
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

  #ifdef MR_DEEP_PROFILING_KEY_USES_ID
    void_key = (void *) (closure->MR_closure_layout);
  #else
    void_key = (void *) (closure->MR_closure_code);
  #endif

    MR_search_csdlist(csdlist, prev, pd, CSN, void_key);
    MR_maybe_deep_profile_update_closure_history();

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (csdlist != NULL) {
        MR_deep_prof_prep_ho_old++;
    } else {
        MR_deep_prof_prep_ho_new++;
    }
  #endif

    if (csdlist != NULL) {
        MR_next_call_site_dynamic = csdlist->MR_csdlist_call_site;
    } else {
        MR_CallSiteDynamic  *newcsd;

        MR_new_call_site_dynamic(newcsd);
        MR_make_and_link_csdlist(csdlist, newcsd, pd, CSN, void_key);
        MR_next_call_site_dynamic = newcsd;
    }

    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_ho_call: deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__prepare_for_special_call_2_p_0(
  MR_Integer CSN_1,
  MR_Word TypeInfo_2)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__prepare_for_special_call_2_p_0

	MR_Integer CSN;
	MR_Word TypeInfo;

	CSN = CSN_1 ;
	TypeInfo = TypeInfo_2 ;
		{
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;
    MR_CallSiteDynList  *csdlist;
  #ifdef MR_DEEP_PROFILING_MOVE_TO_FRONT_LISTS
    MR_CallSiteDynList  *prev = NULL;
  #endif
    MR_TypeCtorInfo     type_ctor_info;
    MR_TypeInfo         type_info;
    void                *void_key;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_special_call");
        printf("call site number: %d\n", CSN);
        type_info = (MR_TypeInfo) TypeInfo;
        type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);
        printf("type constructor: %s:%s/%d\n",
            type_ctor_info->MR_type_ctor_module_name,
            type_ctor_info->MR_type_ctor_name,
            type_ctor_info->MR_type_ctor_arity);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    type_info = (MR_TypeInfo) TypeInfo;
    type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);

    void_key = (void *) type_ctor_info;
    MR_search_csdlist(csdlist, prev, pd, CSN, void_key);
    MR_maybe_deep_profile_update_special_history();

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (csdlist != NULL) {
        MR_deep_prof_prep_special_old++;
    } else {
        MR_deep_prof_prep_special_new++;
    }
  #endif

    if (csdlist != NULL) {
        MR_next_call_site_dynamic = csdlist->MR_csdlist_call_site;
    } else {
        MR_CallSiteDynamic  *newcsd;

        MR_new_call_site_dynamic(newcsd);
        MR_make_and_link_csdlist(csdlist, newcsd, pd, CSN, void_key);
        MR_next_call_site_dynamic = newcsd;
    }

    MR_leave_instrumentation();
#else
    MR_fatal_error(
        "prepare_for_special_call: deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__profiling_builtin__prepare_for_normal_call_1_p_0(
  MR_Integer CSN_1)
{
{
#define MR_PROC_LABEL mercury__profiling_builtin__prepare_for_normal_call_1_p_0

	MR_Integer CSN;

	CSN = CSN_1 ;
		{
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;
    MR_CallSiteDynamic  *child_csd;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_normal_call");
        printf("call site number: %d\n", CSN);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    child_csd = pd->MR_pd_call_site_ptr_ptrs[CSN];

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (child_csd == NULL) {
        MR_deep_prof_prep_normal_new++;
    } else {
        MR_deep_prof_prep_normal_old++;
    }
  #endif

    if (child_csd == NULL) {
        MR_new_call_site_dynamic(child_csd);
        pd->MR_pd_call_site_ptr_ptrs[CSN] = child_csd;
    }

    MR_next_call_site_dynamic = child_csd;
    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_normal_call: deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
}
}

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_dynamic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__profiling_builtin____Unify____call_site_dynamic_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_dynamic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__profiling_builtin____Compare____call_site_dynamic_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_2_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__profiling_builtin____Unify____call_site_nums_2_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_2_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__profiling_builtin____Compare____call_site_nums_2_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_3_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__profiling_builtin____Unify____call_site_nums_3_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_3_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__profiling_builtin____Compare____call_site_nums_3_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_4_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__profiling_builtin____Unify____call_site_nums_4_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_4_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__profiling_builtin____Compare____call_site_nums_4_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_5_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__profiling_builtin____Unify____call_site_nums_5_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_5_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__profiling_builtin____Compare____call_site_nums_5_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_6_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__profiling_builtin____Unify____call_site_nums_6_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_6_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__profiling_builtin____Compare____call_site_nums_6_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_7_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__profiling_builtin____Unify____call_site_nums_7_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_7_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__profiling_builtin____Compare____call_site_nums_7_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_8_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__profiling_builtin____Unify____call_site_nums_8_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_8_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__profiling_builtin____Compare____call_site_nums_8_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____call_site_nums_9_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__profiling_builtin____Unify____call_site_nums_9_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__profiling_builtin____Compare____call_site_nums_9_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__profiling_builtin____Compare____call_site_nums_9_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____proc_dynamic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__profiling_builtin____Unify____proc_dynamic_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__profiling_builtin____Compare____proc_dynamic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__profiling_builtin____Compare____proc_dynamic_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__profiling_builtin____Unify____proc_layout_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__profiling_builtin____Unify____proc_layout_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__profiling_builtin____Compare____proc_layout_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__profiling_builtin____Compare____proc_layout_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__profiling_builtin__init(void)
{
}

void mercury__profiling_builtin__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_dynamic_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_2_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_3_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_4_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_5_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_6_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_7_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_8_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_call_site_nums_9_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_proc_dynamic_0);
	MR_register_type_ctor_info(&mercury__profiling_builtin__profiling_builtin__type_ctor_info_proc_layout_0);
}

void mercury__profiling_builtin__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__profiling_builtin__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module profiling_builtin.
