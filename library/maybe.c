/*
** Automatically generated from `maybe.m'
** by the Mercury compiler,
** version rotd-2019-11-14
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


// :- module maybe.
// :- implementation.

/*
INIT mercury__maybe__init
ENDINIT
*/

#include "maybe.mih"


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
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
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
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"



struct mercury__maybe__map_maybe_3_p_3_env_0_s {
  MR_Word * mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3;
  MR_Cont mercury__maybe__map_maybe_3_p_3_env_0__cont;
  void * mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr;
  MR_Box mercury__maybe__map_maybe_3_p_3_env_0__T_7;
};

struct mercury__maybe__map_maybe_3_p_2_env_0_s {
  MR_Word * mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3;
  MR_Cont mercury__maybe__map_maybe_3_p_2_env_0__cont;
  void * mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr;
  MR_Box mercury__maybe__map_maybe_3_p_2_env_0__T_7;
};


static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_1_0;

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_1_1[1];

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_1_1;

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_0[1];

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_1[1];

static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_1[2];

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_1[2];

static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_1[2];

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_0[1];

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_2_0;

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_1[1];

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_2_1;

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_0[1];

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_1[1];

static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_error_2[2];

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_2[2];

static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_2[2];

static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_0_0;

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_0_1[1];

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_0_1;

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_0[1];

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_1[1];

static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_error_0[2];

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_0[2];

static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_0[2];

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_errors_2_0[1];

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_errors_2_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__maybe__list__pti_list_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_errors_2_1[2];

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_errors_2_1;

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_0[1];

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_1[1];

static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_errors_2[2];

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_errors_2[2];

static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_errors_2[2];

static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_errors_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

static MR_Integer MR_CALL 
mercury__maybe__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__maybe__map_maybe_3_p_3_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__maybe__map_maybe_3_p_2_1(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__maybe____Compare____maybe_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__maybe____Compare____maybe_error_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__maybe____Compare____maybe_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__maybe____Compare____maybe_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__maybe____Compare____maybe_errors_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__maybe____Compare____maybe_errors_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__maybe_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__maybe_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__maybe_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__maybe_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__maybe_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__maybe_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__maybe_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__maybe_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__maybe_scalar_common_2[0])),
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
#include "math.mh"
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



static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_1_0 = {
  (MR_String) "no",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_1_1[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_1_1 = {
  (MR_String) "yes",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__maybe__maybe__field_types_maybe_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_1_0
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_1_1
};

static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__maybe__maybe__du_stag_ordered_maybe_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_1[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_1_0,
  &mercury__maybe__maybe__du_functor_desc_maybe_1_1
};

static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_1_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_1_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe",
  {     mercury__maybe__maybe__du_name_ordered_maybe_1 },
  {     mercury__maybe__maybe__du_ptag_ordered_maybe_1 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__maybe__maybe__functor_number_map_maybe_1
};

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_2_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__maybe__maybe__field_types_maybe_error_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_1[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_2_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__maybe__maybe__field_types_maybe_error_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_0
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_1
};

static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_error_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_error_2_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_error_2_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_2[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_1,
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_0
};

static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_error_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_error_2_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_error_2_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_error",
  {     mercury__maybe__maybe__du_name_ordered_maybe_error_2 },
  {     mercury__maybe__maybe__du_ptag_ordered_maybe_error_2 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__maybe__maybe__functor_number_map_maybe_error_2
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_error_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__maybe____Unify____maybe_error_1_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_error_1_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_error",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__maybe__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_0_0 = {
  (MR_String) "ok",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_0_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__maybe__maybe__field_types_maybe_error_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_0
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_1
};

static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_error_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__maybe__maybe__du_stag_ordered_maybe_error_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_error_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_error_0[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_1,
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_0
};

static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_error_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_error_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_error_0_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_error_0_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_error",
  {     mercury__maybe__maybe__du_name_ordered_maybe_error_0 },
  {     mercury__maybe__maybe__du_ptag_ordered_maybe_error_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__maybe__maybe__functor_number_map_maybe_error_0
};

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_errors_2_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_errors_2_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__maybe__maybe__field_types_maybe_errors_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__maybe__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_errors_2_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) (&mercury__maybe__list__pti_list_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_errors_2_1 = {
  (MR_String) "error",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__maybe__maybe__field_types_maybe_errors_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_errors_2_0
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_errors_2_1
};

static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_errors_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_name_ordered_maybe_errors_2[2] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_errors_2_1,
  &mercury__maybe__maybe__du_functor_desc_maybe_errors_2_0
};

static const MR_Integer mercury__maybe__maybe__functor_number_map_maybe_errors_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_errors_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_errors_2_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_errors_2_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_errors",
  {     mercury__maybe__maybe__du_name_ordered_maybe_errors_2 },
  {     mercury__maybe__maybe__du_ptag_ordered_maybe_errors_2 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__maybe__maybe__functor_number_map_maybe_errors_2
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_errors_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_errors_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_errors_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__maybe____Unify____maybe_errors_1_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_errors_1_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_errors",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__maybe__maybe__pti_maybe_errors_2__pseudo_1__plain_builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Integer MR_CALL 
mercury__maybe__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__maybe____Compare____maybe_errors_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__maybe____Compare____maybe_errors_2_0(TypeInfo_for_T_6, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

void MR_CALL 
mercury__maybe____Compare____maybe_errors_2_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeInfo_for_E_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_24 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Box ArgY1_13 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_14;

        mercury__builtin__compare_3_p_0(TypeInfo_for_E_20, &SubResult1_14, Var_24, ArgY1_13);
        succeeded = (SubResult1_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_14;
        else
          mercury__list____Compare____list_1_0(TypeInfo_for_E_20, HeadVar__1_1, Var_23, ArgY2_16);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Box Var_25 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_19, HeadVar__1_1, Var_25, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__maybe____Unify____maybe_errors_2_0(TypeInfo_for_T_5, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_2_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_E_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_E_12, ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_E_12, ArgX2_7, ArgY2_8);
      }
    }
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__maybe____Compare____maybe_error_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__maybe____Compare____maybe_error_2_0(TypeInfo_for_T_6, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

void MR_CALL 
mercury__maybe____Compare____maybe_error_2_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeInfo_for_E_15,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Box Var_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Box ArgY1_11 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_E_15, HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Box Var_17 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, HeadVar__1_1, Var_17, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__maybe____Unify____maybe_error_2_0(TypeInfo_for_T_5, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_2_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word TypeInfo_for_E_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_E_10, ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__maybe____Compare____maybe_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_String Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer V_7_15;

{
#define MR_PROC_LABEL mercury__maybe____Compare____maybe_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_11 ;
	S2 =  ArgY1_7 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_15  = Res;
}
        succeeded = (V_7_15 < (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (V_7_15 == (MR_Integer) 0);
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
mercury__maybe____Unify____maybe_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__maybe____Compare____maybe_1_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Box Var_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Box ArgY1_7 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__maybe____Unify____maybe_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__maybe__maybe_default_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box D_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Box HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = D_1;
    else
      HeadVar__3_3 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__maybe__func_to_maybe_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word PF_3)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Box Y_4;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), PF_3, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (PF_3)), &Y_4);
    if (succeeded)
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = Y_4;
      }
    else
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__maybe__pred_to_maybe_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Pred_3)
{
  {
    MR_bool succeeded;
    MR_Word Result_4;
    MR_Box X_5;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_3, (MR_Integer) 1))));

    succeeded = func_0(((MR_Box) (Pred_3)), &X_5);
    if (succeeded)
      {
        Result_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Result_4, 0) = X_5;
      }
    else
      Result_4 = (MR_Word) ((MR_Unsigned) 0U);
    return Result_4;
  }
}

MR_bool MR_CALL 
mercury__maybe__maybe_is_yes_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1,
  MR_Box * X_3)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
      *X_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_5(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_U_36,
  MR_Word TypeInfo_for_Acc1_37,
  MR_Word TypeInfo_for_Acc2_38,
  MR_Word TypeInfo_for_Acc3_39,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7,
  MR_Box STATE_VARIABLE_C_0_8,
  MR_Box * STATE_VARIABLE_C_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_C_9 = STATE_VARIABLE_C_0_8;
      *STATE_VARIABLE_B_7 = STATE_VARIABLE_B_0_6;
      *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box T0_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box T_22;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), T0_21, &T_22, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7, STATE_VARIABLE_C_0_8, STATE_VARIABLE_C_9);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = T_22;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_4(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_U_36,
  MR_Word TypeInfo_for_Acc1_37,
  MR_Word TypeInfo_for_Acc2_38,
  MR_Word TypeInfo_for_Acc3_39,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7,
  MR_Box STATE_VARIABLE_C_0_8,
  MR_Box * STATE_VARIABLE_C_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_C_9 = STATE_VARIABLE_C_0_8;
      *STATE_VARIABLE_B_7 = STATE_VARIABLE_B_0_6;
      *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box T0_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box T_22;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), T0_21, &T_22, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7, STATE_VARIABLE_C_0_8, STATE_VARIABLE_C_9);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = T_22;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_3(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_U_36,
  MR_Word TypeInfo_for_Acc1_37,
  MR_Word TypeInfo_for_Acc2_38,
  MR_Word TypeInfo_for_Acc3_39,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7,
  MR_Box STATE_VARIABLE_C_0_8,
  MR_Box * STATE_VARIABLE_C_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_C_9 = STATE_VARIABLE_C_0_8;
      *STATE_VARIABLE_B_7 = STATE_VARIABLE_B_0_6;
      *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box T0_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box T_22;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), T0_21, &T_22, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7, STATE_VARIABLE_C_0_8, STATE_VARIABLE_C_9);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = T_22;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_2(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_U_36,
  MR_Word TypeInfo_for_Acc1_37,
  MR_Word TypeInfo_for_Acc2_38,
  MR_Word TypeInfo_for_Acc3_39,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7,
  MR_Box STATE_VARIABLE_C_0_8,
  MR_Box * STATE_VARIABLE_C_9)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_C_9 = STATE_VARIABLE_C_0_8;
    *STATE_VARIABLE_B_7 = STATE_VARIABLE_B_0_6;
    *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
  }
  else
  {
    MR_Box T0_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Box T_22;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), T0_21, &T_22, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7, STATE_VARIABLE_C_0_8, STATE_VARIABLE_C_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = T_22;
    }
  }
}

void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_1(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_U_36,
  MR_Word TypeInfo_for_Acc1_37,
  MR_Word TypeInfo_for_Acc2_38,
  MR_Word TypeInfo_for_Acc3_39,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7,
  MR_Box STATE_VARIABLE_C_0_8,
  MR_Box * STATE_VARIABLE_C_9)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_C_9 = STATE_VARIABLE_C_0_8;
    *STATE_VARIABLE_B_7 = STATE_VARIABLE_B_0_6;
    *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
  }
  else
  {
    MR_Box T0_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Box T_22;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), T0_21, &T_22, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7, STATE_VARIABLE_C_0_8, STATE_VARIABLE_C_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = T_22;
    }
  }
}

void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeInfo_for_U_36,
  MR_Word TypeInfo_for_Acc1_37,
  MR_Word TypeInfo_for_Acc2_38,
  MR_Word TypeInfo_for_Acc3_39,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7,
  MR_Box STATE_VARIABLE_C_0_8,
  MR_Box * STATE_VARIABLE_C_9)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_C_9 = STATE_VARIABLE_C_0_8;
    *STATE_VARIABLE_B_7 = STATE_VARIABLE_B_0_6;
    *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
  }
  else
  {
    MR_Box T0_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Box T_22;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), T0_21, &T_22, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7, STATE_VARIABLE_C_0_8, STATE_VARIABLE_C_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = T_22;
    }
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_5(
  MR_Word TypeInfo_for_T_26,
  MR_Word TypeInfo_for_U_27,
  MR_Word TypeInfo_for_Acc1_28,
  MR_Word TypeInfo_for_Acc2_29,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_B_7 = STATE_VARIABLE_B_0_6;
      *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box T0_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box T_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), T0_16, &T_17, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = T_17;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_4(
  MR_Word TypeInfo_for_T_26,
  MR_Word TypeInfo_for_U_27,
  MR_Word TypeInfo_for_Acc1_28,
  MR_Word TypeInfo_for_Acc2_29,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_B_7 = STATE_VARIABLE_B_0_6;
      *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box T0_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box T_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), T0_16, &T_17, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = T_17;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_3(
  MR_Word TypeInfo_for_T_26,
  MR_Word TypeInfo_for_U_27,
  MR_Word TypeInfo_for_Acc1_28,
  MR_Word TypeInfo_for_Acc2_29,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_B_7 = STATE_VARIABLE_B_0_6;
      *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box T0_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box T_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), T0_16, &T_17, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = T_17;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_2(
  MR_Word TypeInfo_for_T_26,
  MR_Word TypeInfo_for_U_27,
  MR_Word TypeInfo_for_Acc1_28,
  MR_Word TypeInfo_for_Acc2_29,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_B_7 = STATE_VARIABLE_B_0_6;
    *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
  }
  else
  {
    MR_Box T0_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Box T_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), T0_16, &T_17, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = T_17;
    }
  }
}

void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_1(
  MR_Word TypeInfo_for_T_26,
  MR_Word TypeInfo_for_U_27,
  MR_Word TypeInfo_for_Acc1_28,
  MR_Word TypeInfo_for_Acc2_29,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_B_7 = STATE_VARIABLE_B_0_6;
    *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
  }
  else
  {
    MR_Box T0_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Box T_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), T0_16, &T_17, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = T_17;
    }
  }
}

void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word TypeInfo_for_U_27,
  MR_Word TypeInfo_for_Acc1_28,
  MR_Word TypeInfo_for_Acc2_29,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_B_7 = STATE_VARIABLE_B_0_6;
    *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
  }
  else
  {
    MR_Box T0_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Box T_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), T0_16, &T_17, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = T_17;
    }
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_5(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeInfo_for_U_14,
  MR_Word TypeInfo_for_Acc_15,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * Acc_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *Acc_5 = HeadVar__4_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box T0_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box T_10;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), T0_9, &T_10, HeadVar__4_4, Acc_5);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = T_10;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_4(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeInfo_for_U_14,
  MR_Word TypeInfo_for_Acc_15,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * Acc_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *Acc_5 = HeadVar__4_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box T0_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box T_10;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), T0_9, &T_10, HeadVar__4_4, Acc_5);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = T_10;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_3(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeInfo_for_U_14,
  MR_Word TypeInfo_for_Acc_15,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * Acc_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *Acc_5 = HeadVar__4_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box T0_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box T_10;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), T0_9, &T_10, HeadVar__4_4, Acc_5);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = T_10;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeInfo_for_U_14,
  MR_Word TypeInfo_for_Acc_15,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * Acc_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *Acc_5 = HeadVar__4_4;
  }
  else
  {
    MR_Box T0_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Box T_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), T0_9, &T_10, HeadVar__4_4, Acc_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = T_10;
    }
  }
}

void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeInfo_for_U_14,
  MR_Word TypeInfo_for_Acc_15,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * Acc_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *Acc_5 = HeadVar__4_4;
  }
  else
  {
    MR_Box T0_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Box T_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), T0_9, &T_10, HeadVar__4_4, Acc_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = T_10;
    }
  }
}

void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeInfo_for_U_14,
  MR_Word TypeInfo_for_Acc_15,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * Acc_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *Acc_5 = HeadVar__4_4;
  }
  else
  {
    MR_Box T0_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Box T_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), T0_9, &T_10, HeadVar__4_4, Acc_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = T_10;
    }
  }
}

MR_bool MR_CALL 
mercury__maybe__fold2_maybe_6_p_5(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_U_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Value_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), Value_15, STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__fold2_maybe_6_p_4(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_U_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Value_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), Value_15, STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__fold2_maybe_6_p_3(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_U_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Value_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), Value_15, STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__maybe__fold2_maybe_6_p_2(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_U_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
  }
  else
  {
    MR_Box Value_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), Value_15, STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6);
  }
}

void MR_CALL 
mercury__maybe__fold2_maybe_6_p_1(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_U_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
  }
  else
  {
    MR_Box Value_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), Value_15, STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6);
  }
}

void MR_CALL 
mercury__maybe__fold2_maybe_6_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_U_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
  }
  else
  {
    MR_Box Value_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), Value_15, STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6);
  }
}

MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_5(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Value_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), Value_10, STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_4(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Value_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), Value_10, STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_3(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Value_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), Value_10, STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__maybe__fold_maybe_4_p_2(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
  else
  {
    MR_Box Value_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), Value_10, STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
}

void MR_CALL 
mercury__maybe__fold_maybe_4_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
  else
  {
    MR_Box Value_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), Value_10, STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
}

void MR_CALL 
mercury__maybe__fold_maybe_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
  else
  {
    MR_Box Value_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), Value_10, STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
}

MR_Box MR_CALL 
mercury__maybe__fold_maybe_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_U_11,
  MR_Word F_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Box HeadVar__4_4;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box Value_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_1, (MR_Integer) 1))));

      HeadVar__4_4 = func_0(((MR_Box) (F_1)), Value_8, HeadVar__3_3);
    }
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__maybe__map_maybe_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_U_9,
  MR_Word F_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box T_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box Var_7;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_1, (MR_Integer) 1))));

      Var_7 = func_0(((MR_Box) (F_1)), T_6);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = Var_7;
      }
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__maybe__map_maybe_3_p_3_1(
  void * env_ptr_arg)
{
  {
    struct mercury__maybe__map_maybe_3_p_3_env_0_s * env_ptr = (struct mercury__maybe__map_maybe_3_p_3_env_0_s *) (env_ptr_arg);

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *((env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3) = base;
      MR_hl_field(MR_mktag(1), base, 0) = (env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__T_7;
    }
    ((env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__cont)((env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__maybe__map_maybe_3_p_3(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_U_9,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__maybe__map_maybe_3_p_3_env_0_s env;

    (env).mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3 = HeadVar__3_3;
    (env).mercury__maybe__map_maybe_3_p_3_env_0__cont = cont;
    (env).mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3) = (MR_Word) ((MR_Unsigned) 0U);
      ((env).mercury__maybe__map_maybe_3_p_3_env_0__cont)((env).mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr);
    }
    else
    {
      MR_Box T0_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      func_0(((MR_Box) (P_1)), T0_6, &(env).mercury__maybe__map_maybe_3_p_3_env_0__T_7, mercury__maybe__map_maybe_3_p_3_1, &env);
    }
  }
}

static void MR_CALL 
mercury__maybe__map_maybe_3_p_2_1(
  void * env_ptr_arg)
{
  {
    struct mercury__maybe__map_maybe_3_p_2_env_0_s * env_ptr = (struct mercury__maybe__map_maybe_3_p_2_env_0_s *) (env_ptr_arg);

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *((env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3) = base;
      MR_hl_field(MR_mktag(1), base, 0) = (env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__T_7;
    }
    ((env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__cont)((env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__maybe__map_maybe_3_p_2(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_U_9,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__maybe__map_maybe_3_p_2_env_0_s env;

    (env).mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3 = HeadVar__3_3;
    (env).mercury__maybe__map_maybe_3_p_2_env_0__cont = cont;
    (env).mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr = cont_env_ptr;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3) = (MR_Word) ((MR_Unsigned) 0U);
      ((env).mercury__maybe__map_maybe_3_p_2_env_0__cont)((env).mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr);
    }
    else
    {
      MR_Box T0_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      func_0(((MR_Box) (P_1)), T0_6, &(env).mercury__maybe__map_maybe_3_p_2_env_0__T_7, mercury__maybe__map_maybe_3_p_2_1, &env);
    }
  }
}

MR_bool MR_CALL 
mercury__maybe__map_maybe_3_p_1(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_U_9,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box T0_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Box T_7;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (P_1)), T0_6, &T_7);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = T_7;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__maybe__map_maybe_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_U_9,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box T0_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Box T_7;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

    func_0(((MR_Box) (P_1)), T0_6, &T_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = T_7;
    }
  }
}

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__maybe____Unify____maybe_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__maybe____Compare____maybe_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__maybe____Compare____maybe_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__maybe____Unify____maybe_error_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__maybe____Compare____maybe_error_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__maybe____Compare____maybe_error_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__maybe____Unify____maybe_error_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__maybe____Compare____maybe_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__maybe____Compare____maybe_error_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__maybe____Unify____maybe_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__maybe____Compare____maybe_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__maybe____Compare____maybe_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__maybe____Unify____maybe_errors_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__maybe____Compare____maybe_errors_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__maybe____Compare____maybe_errors_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__maybe____Unify____maybe_errors_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__maybe____Compare____maybe_errors_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__maybe____Compare____maybe_errors_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__maybe__init(void)
{
}

void mercury__maybe__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__maybe__maybe__type_ctor_info_maybe_1);
	MR_register_type_ctor_info(&mercury__maybe__maybe__type_ctor_info_maybe_error_2);
	MR_register_type_ctor_info(&mercury__maybe__maybe__type_ctor_info_maybe_error_1);
	MR_register_type_ctor_info(&mercury__maybe__maybe__type_ctor_info_maybe_error_0);
	MR_register_type_ctor_info(&mercury__maybe__maybe__type_ctor_info_maybe_errors_2);
	MR_register_type_ctor_info(&mercury__maybe__maybe__type_ctor_info_maybe_errors_1);
}

void mercury__maybe__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__maybe__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module maybe.
