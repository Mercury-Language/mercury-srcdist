/*
** Automatically generated from `maybe.m'
** by the Mercury compiler,
** version DEV
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module maybe. */
/* :- implementation. */

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

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_1_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3);

static void MR_CALL 
mercury__maybe____Compare____maybe_1_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box * mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3,
  MR_Box mercury__maybe__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_2_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3,
  MR_Box mercury__maybe__wrapper_arg_4);

static void MR_CALL 
mercury__maybe____Compare____maybe_error_2_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box * mercury__maybe__wrapper_arg_3,
  MR_Box mercury__maybe__wrapper_arg_4,
  MR_Box mercury__maybe__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_1_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3);

static void MR_CALL 
mercury__maybe____Compare____maybe_error_1_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box * mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3,
  MR_Box mercury__maybe__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_0_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2);

static void MR_CALL 
mercury__maybe____Compare____maybe_error_0_0_10001(
  MR_Box * mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_2_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3,
  MR_Box mercury__maybe__wrapper_arg_4);

static void MR_CALL 
mercury__maybe____Compare____maybe_errors_2_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box * mercury__maybe__wrapper_arg_3,
  MR_Box mercury__maybe__wrapper_arg_4,
  MR_Box mercury__maybe__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_1_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3);

static void MR_CALL 
mercury__maybe____Compare____maybe_errors_1_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box * mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3,
  MR_Box mercury__maybe__wrapper_arg_4);

static MR_Integer MR_CALL 
mercury__maybe__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__maybe__map_maybe_3_p_3_1(
  void * mercury__maybe__env_ptr_arg);

static void MR_CALL 
mercury__maybe__map_maybe_3_p_2_1(
  void * mercury__maybe__env_ptr_arg);


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
#include "version_array.mh"



static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_1_0 = {
  (MR_String) "no",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_1_1 = {
  (MR_String) "yes",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__maybe__maybe__field_types_maybe_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_1_0
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_1_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_1_1
};

static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__maybe__maybe__du_stag_ordered_maybe_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_1_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_1_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_1_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe",
  {     mercury__maybe__maybe__du_name_ordered_maybe_1 },
  {     mercury__maybe__maybe__du_ptag_ordered_maybe_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__maybe__maybe__functor_number_map_maybe_1
};

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_2_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__maybe__maybe__field_types_maybe_error_2_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_2_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_2_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__maybe__maybe__field_types_maybe_error_2_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_0
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_2_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_2_1
};

static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_error_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_error_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_error_2_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_error_2_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_error_2_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_error",
  {     mercury__maybe__maybe__du_name_ordered_maybe_error_2 },
  {     mercury__maybe__maybe__du_ptag_ordered_maybe_error_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__maybe__maybe__functor_number_map_maybe_error_2
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_error_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__maybe____Unify____maybe_error_1_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_error_1_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_error",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__maybe__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_error_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_error_0_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__maybe__maybe__field_types_maybe_error_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_0
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_error_0_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_error_0_1
};

static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_error_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__maybe__maybe__du_stag_ordered_maybe_error_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_error_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_error_0_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_error_0_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_error",
  {     mercury__maybe__maybe__du_name_ordered_maybe_error_0 },
  {     mercury__maybe__maybe__du_ptag_ordered_maybe_error_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__maybe__maybe__functor_number_map_maybe_error_0
};

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_errors_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_errors_2_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__maybe__maybe__field_types_maybe_errors_2_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__maybe__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_PseudoTypeInfo mercury__maybe__maybe__field_types_maybe_errors_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__maybe__list__pti_list_1__pseudo_2
};

static const MR_DuFunctorDesc mercury__maybe__maybe__du_functor_desc_maybe_errors_2_1 = {
  (MR_String) "error",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__maybe__maybe__field_types_maybe_errors_2_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_0[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_errors_2_0
};

static const MR_DuFunctorDescPtr mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_1[1] = {
  &mercury__maybe__maybe__du_functor_desc_maybe_errors_2_1
};

static const MR_DuPtagLayout mercury__maybe__maybe__du_ptag_ordered_maybe_errors_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__maybe__maybe__du_stag_ordered_maybe_errors_2_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__maybe____Unify____maybe_errors_2_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_errors_2_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_errors",
  {     mercury__maybe__maybe__du_name_ordered_maybe_errors_2 },
  {     mercury__maybe__maybe__du_ptag_ordered_maybe_errors_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__maybe__maybe__functor_number_map_maybe_errors_2
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__maybe__maybe__pti_maybe_errors_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_errors_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct mercury__maybe__maybe__type_ctor_info_maybe_errors_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__maybe____Unify____maybe_errors_1_0_10001)),
  ((MR_Box) (mercury__maybe____Compare____maybe_errors_1_0_10001)),
  (MR_String) "maybe",
  (MR_String) "maybe_errors",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__maybe__maybe__pti_maybe_errors_2__pseudo_1__plain_builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_1_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3)
{
  {
    MR_bool mercury__maybe__succeeded;

    {
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
    return mercury__maybe__succeeded;
  }
}

static void MR_CALL 
mercury__maybe____Compare____maybe_1_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box * mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3,
  MR_Box mercury__maybe__wrapper_arg_4)
{
  {
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

    {
      mercury__maybe____Compare____maybe_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
    *mercury__maybe__wrapper_arg_2 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_2_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3,
  MR_Box mercury__maybe__wrapper_arg_4)
{
  {
    MR_bool mercury__maybe__succeeded;

    {
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_2_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
    return mercury__maybe__succeeded;
  }
}

static void MR_CALL 
mercury__maybe____Compare____maybe_error_2_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box * mercury__maybe__wrapper_arg_3,
  MR_Box mercury__maybe__wrapper_arg_4,
  MR_Box mercury__maybe__wrapper_arg_5)
{
  {
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

    {
      mercury__maybe____Compare____maybe_error_2_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_4), ((MR_Word) mercury__maybe__wrapper_arg_5));
    }
    *mercury__maybe__wrapper_arg_3 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_1_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3)
{
  {
    MR_bool mercury__maybe__succeeded;

    {
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
    return mercury__maybe__succeeded;
  }
}

static void MR_CALL 
mercury__maybe____Compare____maybe_error_1_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box * mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3,
  MR_Box mercury__maybe__wrapper_arg_4)
{
  {
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

    {
      mercury__maybe____Compare____maybe_error_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
    *mercury__maybe__wrapper_arg_2 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_0_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2)
{
  {
    MR_bool mercury__maybe__succeeded;

    {
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_0_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2));
    }
    return mercury__maybe__succeeded;
  }
}

static void MR_CALL 
mercury__maybe____Compare____maybe_error_0_0_10001(
  MR_Box * mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3)
{
  {
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

    {
      mercury__maybe____Compare____maybe_error_0_0(&mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
    *mercury__maybe__wrapper_arg_1 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_2_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3,
  MR_Box mercury__maybe__wrapper_arg_4)
{
  {
    MR_bool mercury__maybe__succeeded;

    {
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_errors_2_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
    return mercury__maybe__succeeded;
  }
}

static void MR_CALL 
mercury__maybe____Compare____maybe_errors_2_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box * mercury__maybe__wrapper_arg_3,
  MR_Box mercury__maybe__wrapper_arg_4,
  MR_Box mercury__maybe__wrapper_arg_5)
{
  {
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

    {
      mercury__maybe____Compare____maybe_errors_2_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_4), ((MR_Word) mercury__maybe__wrapper_arg_5));
    }
    *mercury__maybe__wrapper_arg_3 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_1_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3)
{
  {
    MR_bool mercury__maybe__succeeded;

    {
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_errors_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), ((MR_Word) mercury__maybe__wrapper_arg_2), ((MR_Word) mercury__maybe__wrapper_arg_3));
    }
    return mercury__maybe__succeeded;
  }
}

static void MR_CALL 
mercury__maybe____Compare____maybe_errors_1_0_10001(
  MR_Box mercury__maybe__wrapper_arg_1,
  MR_Box * mercury__maybe__wrapper_arg_2,
  MR_Box mercury__maybe__wrapper_arg_3,
  MR_Box mercury__maybe__wrapper_arg_4)
{
  {
    MR_Word mercury__maybe__conv0_HeadVar__1_1;

    {
      mercury__maybe____Compare____maybe_errors_1_0(((MR_Word) mercury__maybe__wrapper_arg_1), &mercury__maybe__conv0_HeadVar__1_1, ((MR_Word) mercury__maybe__wrapper_arg_3), ((MR_Word) mercury__maybe__wrapper_arg_4));
    }
    *mercury__maybe__wrapper_arg_2 = ((MR_Box) (mercury__maybe__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__maybe__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__maybe__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__maybe____Compare____maybe_errors_2_0(
  MR_Word mercury__maybe__TypeInfo_for_T_19,
  MR_Word mercury__maybe__TypeInfo_for_E_20,
  MR_Word * mercury__maybe__HeadVar__1_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word mercury__maybe__HeadVar__3_3)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Integer mercury__maybe__CastX_17 = (MR_Integer) mercury__maybe__HeadVar__2_2;
    MR_Integer mercury__maybe__CastY_18 = (MR_Integer) mercury__maybe__HeadVar__3_3;

    mercury__maybe__succeeded = (mercury__maybe__CastX_17 == mercury__maybe__CastY_18);
    if (mercury__maybe__succeeded)
      *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__maybe__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__maybe__Var_24 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) mercury__maybe__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Box mercury__maybe__Var_14 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, (MR_Integer) 0));
            MR_Word mercury__maybe__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__maybe__Var_16;

            {
              mercury__builtin__compare_3_p_0(mercury__maybe__TypeInfo_for_E_20, &mercury__maybe__Var_16, mercury__maybe__Var_24, mercury__maybe__Var_14);
            }
            mercury__maybe__succeeded = (mercury__maybe__Var_16 == (MR_Integer) 0);
            mercury__maybe__succeeded = !(mercury__maybe__succeeded);
            if (mercury__maybe__succeeded)
              *mercury__maybe__HeadVar__1_1 = mercury__maybe__Var_16;
            else
              {
                mercury__list____Compare____list_1_0(mercury__maybe__TypeInfo_for_E_20, mercury__maybe__HeadVar__1_1, mercury__maybe__Var_23, mercury__maybe__Var_15);
              }
          }
        else
          *mercury__maybe__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Box mercury__maybe__Var_25 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) mercury__maybe__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Box mercury__maybe__Var_5 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__3_3, (MR_Integer) 0));

            {
              mercury__builtin__compare_3_p_0(mercury__maybe__TypeInfo_for_T_19, mercury__maybe__HeadVar__1_1, mercury__maybe__Var_25, mercury__maybe__Var_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_2_0(
  MR_Word mercury__maybe__TypeInfo_for_T_11,
  MR_Word mercury__maybe__TypeInfo_for_E_12,
  MR_Word mercury__maybe__HeadVar__1_1,
  MR_Word mercury__maybe__HeadVar__2_2)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Integer mercury__maybe__CastX_9 = (MR_Integer) mercury__maybe__HeadVar__1_1;
    MR_Integer mercury__maybe__CastY_10 = (MR_Integer) mercury__maybe__HeadVar__2_2;

    mercury__maybe__succeeded = (mercury__maybe__CastX_9 == mercury__maybe__CastY_10);
    if (mercury__maybe__succeeded)
      mercury__maybe__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__maybe__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__maybe__Var_5 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__maybe__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box mercury__maybe__Var_7;
        MR_Word mercury__maybe__Var_8;

        mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__maybe__succeeded)
          {
            mercury__maybe__Var_7 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
            mercury__maybe__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 1)));
            {
              mercury__maybe__succeeded = mercury__builtin__unify_2_p_0(mercury__maybe__TypeInfo_for_E_12, mercury__maybe__Var_5, mercury__maybe__Var_7);
            }
            if (mercury__maybe__succeeded)
              {
                mercury__maybe__succeeded = mercury__list____Unify____list_1_0(mercury__maybe__TypeInfo_for_E_12, mercury__maybe__Var_6, mercury__maybe__Var_8);
              }
          }
      }
    else
      {
        MR_Box mercury__maybe__Var_3 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mercury__maybe__Var_4;

        mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__maybe__succeeded)
          {
            mercury__maybe__Var_4 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
            {
              mercury__maybe__succeeded = mercury__builtin__unify_2_p_0(mercury__maybe__TypeInfo_for_T_11, mercury__maybe__Var_3, mercury__maybe__Var_4);
            }
          }
      }
    return mercury__maybe__succeeded;
  }
}

void MR_CALL 
mercury__maybe____Compare____maybe_errors_1_0(
  MR_Word mercury__maybe__TypeInfo_for_T_6,
  MR_Word * mercury__maybe__HeadVar__1_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word mercury__maybe__HeadVar__3_3)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Word mercury__maybe__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__maybe__Cast_HeadVar1_4 = mercury__maybe__HeadVar__2_2;
    MR_Word mercury__maybe__Cast_HeadVar2_5 = mercury__maybe__HeadVar__3_3;

    {
      mercury__maybe____Compare____maybe_errors_2_0(mercury__maybe__TypeInfo_for_T_6, mercury__maybe__TypeCtorInfo_7_7, mercury__maybe__HeadVar__1_1, mercury__maybe__Cast_HeadVar1_4, mercury__maybe__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__maybe____Unify____maybe_errors_1_0(
  MR_Word mercury__maybe__TypeInfo_for_T_5,
  MR_Word mercury__maybe__HeadVar__1_1,
  MR_Word mercury__maybe__HeadVar__2_2)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Word mercury__maybe__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__maybe__Cast_HeadVar1_3 = mercury__maybe__HeadVar__1_1;
    MR_Word mercury__maybe__Cast_HeadVar2_4 = mercury__maybe__HeadVar__2_2;

    {
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_errors_2_0(mercury__maybe__TypeInfo_for_T_5, mercury__maybe__TypeCtorInfo_6_6, mercury__maybe__Cast_HeadVar1_3, mercury__maybe__Cast_HeadVar2_4);
    }
    return mercury__maybe__succeeded;
  }
}

void MR_CALL 
mercury__maybe____Compare____maybe_error_2_0(
  MR_Word mercury__maybe__TypeInfo_for_T_14,
  MR_Word mercury__maybe__TypeInfo_for_E_15,
  MR_Word * mercury__maybe__HeadVar__1_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word mercury__maybe__HeadVar__3_3)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Integer mercury__maybe__CastX_12 = (MR_Integer) mercury__maybe__HeadVar__2_2;
    MR_Integer mercury__maybe__CastY_13 = (MR_Integer) mercury__maybe__HeadVar__3_3;

    mercury__maybe__succeeded = (mercury__maybe__CastX_12 == mercury__maybe__CastY_13);
    if (mercury__maybe__succeeded)
      *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__maybe__Var_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) mercury__maybe__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Box mercury__maybe__Var_11 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, (MR_Integer) 0));

            {
              mercury__builtin__compare_3_p_0(mercury__maybe__TypeInfo_for_E_15, mercury__maybe__HeadVar__1_1, mercury__maybe__Var_16, mercury__maybe__Var_11);
            }
          }
        else
          *mercury__maybe__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Box mercury__maybe__Var_17 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) mercury__maybe__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Box mercury__maybe__Var_5 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__3_3, (MR_Integer) 0));

            {
              mercury__builtin__compare_3_p_0(mercury__maybe__TypeInfo_for_T_14, mercury__maybe__HeadVar__1_1, mercury__maybe__Var_17, mercury__maybe__Var_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_2_0(
  MR_Word mercury__maybe__TypeInfo_for_T_9,
  MR_Word mercury__maybe__TypeInfo_for_E_10,
  MR_Word mercury__maybe__HeadVar__1_1,
  MR_Word mercury__maybe__HeadVar__2_2)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Integer mercury__maybe__CastX_7 = (MR_Integer) mercury__maybe__HeadVar__1_1;
    MR_Integer mercury__maybe__CastY_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;

    mercury__maybe__succeeded = (mercury__maybe__CastX_7 == mercury__maybe__CastY_8);
    if (mercury__maybe__succeeded)
      mercury__maybe__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__maybe__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__maybe__Var_5 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mercury__maybe__Var_6;

        mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__maybe__succeeded)
          {
            mercury__maybe__Var_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
            {
              mercury__maybe__succeeded = mercury__builtin__unify_2_p_0(mercury__maybe__TypeInfo_for_E_10, mercury__maybe__Var_5, mercury__maybe__Var_6);
            }
          }
      }
    else
      {
        MR_Box mercury__maybe__Var_3 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mercury__maybe__Var_4;

        mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__maybe__succeeded)
          {
            mercury__maybe__Var_4 = (MR_hl_field(MR_mktag(0), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
            {
              mercury__maybe__succeeded = mercury__builtin__unify_2_p_0(mercury__maybe__TypeInfo_for_T_9, mercury__maybe__Var_3, mercury__maybe__Var_4);
            }
          }
      }
    return mercury__maybe__succeeded;
  }
}

void MR_CALL 
mercury__maybe____Compare____maybe_error_1_0(
  MR_Word mercury__maybe__TypeInfo_for_T_6,
  MR_Word * mercury__maybe__HeadVar__1_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word mercury__maybe__HeadVar__3_3)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Word mercury__maybe__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__maybe__Cast_HeadVar1_4 = mercury__maybe__HeadVar__2_2;
    MR_Word mercury__maybe__Cast_HeadVar2_5 = mercury__maybe__HeadVar__3_3;

    {
      mercury__maybe____Compare____maybe_error_2_0(mercury__maybe__TypeInfo_for_T_6, mercury__maybe__TypeCtorInfo_7_7, mercury__maybe__HeadVar__1_1, mercury__maybe__Cast_HeadVar1_4, mercury__maybe__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_1_0(
  MR_Word mercury__maybe__TypeInfo_for_T_5,
  MR_Word mercury__maybe__HeadVar__1_1,
  MR_Word mercury__maybe__HeadVar__2_2)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Word mercury__maybe__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__maybe__Cast_HeadVar1_3 = mercury__maybe__HeadVar__1_1;
    MR_Word mercury__maybe__Cast_HeadVar2_4 = mercury__maybe__HeadVar__2_2;

    {
      mercury__maybe__succeeded = mercury__maybe____Unify____maybe_error_2_0(mercury__maybe__TypeInfo_for_T_5, mercury__maybe__TypeCtorInfo_6_6, mercury__maybe__Cast_HeadVar1_3, mercury__maybe__Cast_HeadVar2_4);
    }
    return mercury__maybe__succeeded;
  }
}

void MR_CALL 
mercury__maybe____Compare____maybe_error_0_0(
  MR_Word * mercury__maybe__HeadVar__1_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word mercury__maybe__HeadVar__3_3)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Integer mercury__maybe__CastX_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;
    MR_Integer mercury__maybe__CastY_9 = (MR_Integer) mercury__maybe__HeadVar__3_3;

    mercury__maybe__succeeded = (mercury__maybe__CastX_8 == mercury__maybe__CastY_9);
    if (mercury__maybe__succeeded)
      *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__maybe__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_String mercury__maybe__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0)));

        if ((mercury__maybe__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__maybe__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_String mercury__maybe__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer mercury__maybe__V_7_15;

{
#define MR_PROC_LABEL mercury__maybe____Compare____maybe_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__maybe__Var_11 ;
	S2 =  mercury__maybe__Var_7 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__maybe__V_7_15  = Res;
}
            mercury__maybe__succeeded = (mercury__maybe__V_7_15 < (MR_Integer) 0);
            if (mercury__maybe__succeeded)
              *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
            else
              {
                mercury__maybe__succeeded = (mercury__maybe__V_7_15 == (MR_Integer) 0);
                if (mercury__maybe__succeeded)
                  *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
                else
                  *mercury__maybe__HeadVar__1_1 = (MR_Integer) 2;
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__maybe____Unify____maybe_error_0_0(
  MR_Word mercury__maybe__HeadVar__1_1,
  MR_Word mercury__maybe__HeadVar__2_2)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Integer mercury__maybe__CastX_7 = (MR_Integer) mercury__maybe__HeadVar__1_1;
    MR_Integer mercury__maybe__CastY_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;

    mercury__maybe__succeeded = (mercury__maybe__CastX_7 == mercury__maybe__CastY_8);
    if (mercury__maybe__succeeded)
      mercury__maybe__succeeded = MR_TRUE;
    else
    if ((mercury__maybe__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mercury__maybe__CastX_3 = (MR_Integer) mercury__maybe__HeadVar__1_1;
        MR_Integer mercury__maybe__CastY_4 = (MR_Integer) mercury__maybe__HeadVar__2_2;

        mercury__maybe__succeeded = (mercury__maybe__CastY_4 == mercury__maybe__CastX_3);
      }
    else
      {
        MR_String mercury__maybe__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mercury__maybe__Var_6;

        mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__maybe__succeeded)
          {
            mercury__maybe__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0)));
            mercury__maybe__succeeded = (strcmp(mercury__maybe__Var_5, mercury__maybe__Var_6) == 0);
          }
      }
    return mercury__maybe__succeeded;
  }
}

void MR_CALL 
mercury__maybe____Compare____maybe_1_0(
  MR_Word mercury__maybe__TypeInfo_for_T_10,
  MR_Word * mercury__maybe__HeadVar__1_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word mercury__maybe__HeadVar__3_3)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Integer mercury__maybe__CastX_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;
    MR_Integer mercury__maybe__CastY_9 = (MR_Integer) mercury__maybe__HeadVar__3_3;

    mercury__maybe__succeeded = (mercury__maybe__CastX_8 == mercury__maybe__CastY_9);
    if (mercury__maybe__succeeded)
      *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__maybe__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__maybe__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__maybe__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Box mercury__maybe__Var_11 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));

        if ((mercury__maybe__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__maybe__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Box mercury__maybe__Var_7 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, (MR_Integer) 0));

            {
              mercury__builtin__compare_3_p_0(mercury__maybe__TypeInfo_for_T_10, mercury__maybe__HeadVar__1_1, mercury__maybe__Var_11, mercury__maybe__Var_7);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__maybe____Unify____maybe_1_0(
  MR_Word mercury__maybe__TypeInfo_for_T_9,
  MR_Word mercury__maybe__HeadVar__1_1,
  MR_Word mercury__maybe__HeadVar__2_2)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Integer mercury__maybe__CastX_7 = (MR_Integer) mercury__maybe__HeadVar__1_1;
    MR_Integer mercury__maybe__CastY_8 = (MR_Integer) mercury__maybe__HeadVar__2_2;

    mercury__maybe__succeeded = (mercury__maybe__CastX_7 == mercury__maybe__CastY_8);
    if (mercury__maybe__succeeded)
      mercury__maybe__succeeded = MR_TRUE;
    else
    if ((mercury__maybe__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mercury__maybe__CastX_3 = (MR_Integer) mercury__maybe__HeadVar__1_1;
        MR_Integer mercury__maybe__CastY_4 = (MR_Integer) mercury__maybe__HeadVar__2_2;

        mercury__maybe__succeeded = (mercury__maybe__CastY_4 == mercury__maybe__CastX_3);
      }
    else
      {
        MR_Box mercury__maybe__Var_5 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mercury__maybe__Var_6;

        mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__maybe__succeeded)
          {
            mercury__maybe__Var_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
            {
              mercury__maybe__succeeded = mercury__builtin__unify_2_p_0(mercury__maybe__TypeInfo_for_T_9, mercury__maybe__Var_5, mercury__maybe__Var_6);
            }
          }
      }
    return mercury__maybe__succeeded;
  }
}

MR_Box MR_CALL 
mercury__maybe__maybe_default_2_f_0(
  MR_Word mercury__maybe__TypeInfo_for_T_7,
  MR_Box mercury__maybe__D_1,
  MR_Word mercury__maybe__HeadVar__2_2)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Box mercury__maybe__HeadVar__3_3;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__maybe__HeadVar__3_3 = mercury__maybe__D_1;
    else
      mercury__maybe__HeadVar__3_3 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
    return mercury__maybe__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__maybe__func_to_maybe_1_f_0(
  MR_Word mercury__maybe__TypeInfo_for_T_5,
  MR_Word mercury__maybe__PF_3)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Word mercury__maybe__HeadVar__2_2;
    MR_Box mercury__maybe__Y_4;
    MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__PF_3, (MR_Integer) 1)));

    {
      mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__PF_3), &mercury__maybe__Y_4);
    }
    if (mercury__maybe__succeeded)
      {
        mercury__maybe__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, 0) = mercury__maybe__Y_4;
      }
    else
      mercury__maybe__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return mercury__maybe__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__maybe__pred_to_maybe_1_f_0(
  MR_Word mercury__maybe__TypeInfo_for_T_6,
  MR_Word mercury__maybe__Pred_3)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Word mercury__maybe__Result_4;
    MR_Box mercury__maybe__X_5;
    MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__Pred_3, (MR_Integer) 1)));

    {
      mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__Pred_3), &mercury__maybe__X_5);
    }
    if (mercury__maybe__succeeded)
      {
        mercury__maybe__Result_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__maybe__Result_4, 0) = mercury__maybe__X_5;
      }
    else
      mercury__maybe__Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return mercury__maybe__Result_4;
  }
}

MR_bool MR_CALL 
mercury__maybe__maybe_is_yes_2_p_0(
  MR_Word mercury__maybe__TypeInfo_for_T_4,
  MR_Word mercury__maybe__HeadVar__1_1,
  MR_Box * mercury__maybe__X_3)
{
  {
    MR_bool mercury__maybe__succeeded = ((MR_tag((MR_Word) mercury__maybe__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

    if (mercury__maybe__succeeded)
      *mercury__maybe__X_3 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__1_1, (MR_Integer) 0));
    return mercury__maybe__succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_5(
  MR_Word mercury__maybe__TypeInfo_for_T_35,
  MR_Word mercury__maybe__TypeInfo_for_U_36,
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_22;
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
        if (mercury__maybe__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__maybe__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
            }
            mercury__maybe__succeeded = MR_TRUE;
          }
      }
    return mercury__maybe__succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_4(
  MR_Word mercury__maybe__TypeInfo_for_T_35,
  MR_Word mercury__maybe__TypeInfo_for_U_36,
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_22;
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
        if (mercury__maybe__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__maybe__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
            }
            mercury__maybe__succeeded = MR_TRUE;
          }
      }
    return mercury__maybe__succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_3(
  MR_Word mercury__maybe__TypeInfo_for_T_35,
  MR_Word mercury__maybe__TypeInfo_for_U_36,
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_22;
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
        if (mercury__maybe__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__maybe__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
            }
            mercury__maybe__succeeded = MR_TRUE;
          }
      }
    return mercury__maybe__succeeded;
  }
}

void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_2(
  MR_Word mercury__maybe__TypeInfo_for_T_35,
  MR_Word mercury__maybe__TypeInfo_for_U_36,
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
      }
    else
      {
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_22;
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__maybe__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
        }
      }
  }
}

void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_1(
  MR_Word mercury__maybe__TypeInfo_for_T_35,
  MR_Word mercury__maybe__TypeInfo_for_U_36,
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
      }
    else
      {
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_22;
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__maybe__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
        }
      }
  }
}

void MR_CALL 
mercury__maybe__map_fold3_maybe_9_p_0(
  MR_Word mercury__maybe__TypeInfo_for_T_35,
  MR_Word mercury__maybe__TypeInfo_for_U_36,
  MR_Word mercury__maybe__TypeInfo_for_Acc1_37,
  MR_Word mercury__maybe__TypeInfo_for_Acc2_38,
  MR_Word mercury__maybe__TypeInfo_for_Acc3_39,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7,
  MR_Box mercury__maybe__STATE_VARIABLE_C_0_8,
  MR_Box * mercury__maybe__STATE_VARIABLE_C_9)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__STATE_VARIABLE_C_9 = mercury__maybe__STATE_VARIABLE_C_0_8;
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
      }
    else
      {
        MR_Box mercury__maybe__T0_21 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_22;
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_21, &mercury__maybe__T_22, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7, mercury__maybe__STATE_VARIABLE_C_0_8, mercury__maybe__STATE_VARIABLE_C_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__maybe__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_22;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_5(
  MR_Word mercury__maybe__TypeInfo_for_T_26,
  MR_Word mercury__maybe__TypeInfo_for_U_27,
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_17;
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
        if (mercury__maybe__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__maybe__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
            }
            mercury__maybe__succeeded = MR_TRUE;
          }
      }
    return mercury__maybe__succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_4(
  MR_Word mercury__maybe__TypeInfo_for_T_26,
  MR_Word mercury__maybe__TypeInfo_for_U_27,
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_17;
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
        if (mercury__maybe__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__maybe__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
            }
            mercury__maybe__succeeded = MR_TRUE;
          }
      }
    return mercury__maybe__succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_3(
  MR_Word mercury__maybe__TypeInfo_for_T_26,
  MR_Word mercury__maybe__TypeInfo_for_U_27,
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_17;
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
        if (mercury__maybe__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__maybe__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
            }
            mercury__maybe__succeeded = MR_TRUE;
          }
      }
    return mercury__maybe__succeeded;
  }
}

void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_2(
  MR_Word mercury__maybe__TypeInfo_for_T_26,
  MR_Word mercury__maybe__TypeInfo_for_U_27,
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
      }
    else
      {
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_17;
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__maybe__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
        }
      }
  }
}

void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_1(
  MR_Word mercury__maybe__TypeInfo_for_T_26,
  MR_Word mercury__maybe__TypeInfo_for_U_27,
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
      }
    else
      {
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_17;
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__maybe__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
        }
      }
  }
}

void MR_CALL 
mercury__maybe__map_fold2_maybe_7_p_0(
  MR_Word mercury__maybe__TypeInfo_for_T_26,
  MR_Word mercury__maybe__TypeInfo_for_U_27,
  MR_Word mercury__maybe__TypeInfo_for_Acc1_28,
  MR_Word mercury__maybe__TypeInfo_for_Acc2_29,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__maybe__STATE_VARIABLE_A_5,
  MR_Box mercury__maybe__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__maybe__STATE_VARIABLE_B_7)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__STATE_VARIABLE_B_7 = mercury__maybe__STATE_VARIABLE_B_0_6;
        *mercury__maybe__STATE_VARIABLE_A_5 = mercury__maybe__STATE_VARIABLE_A_0_4;
      }
    else
      {
        MR_Box mercury__maybe__T0_16 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_17;
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_16, &mercury__maybe__T_17, mercury__maybe__STATE_VARIABLE_A_0_4, mercury__maybe__STATE_VARIABLE_A_5, mercury__maybe__STATE_VARIABLE_B_0_6, mercury__maybe__STATE_VARIABLE_B_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__maybe__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_17;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_5(
  MR_Word mercury__maybe__TypeInfo_for_T_13,
  MR_Word mercury__maybe__TypeInfo_for_U_14,
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__HeadVar__4_4,
  MR_Box * mercury__maybe__Acc_5)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_10;
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
        if (mercury__maybe__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__maybe__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
            }
            mercury__maybe__succeeded = MR_TRUE;
          }
      }
    return mercury__maybe__succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_4(
  MR_Word mercury__maybe__TypeInfo_for_T_13,
  MR_Word mercury__maybe__TypeInfo_for_U_14,
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__HeadVar__4_4,
  MR_Box * mercury__maybe__Acc_5)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_10;
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
        if (mercury__maybe__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__maybe__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
            }
            mercury__maybe__succeeded = MR_TRUE;
          }
      }
    return mercury__maybe__succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__map_fold_maybe_5_p_3(
  MR_Word mercury__maybe__TypeInfo_for_T_13,
  MR_Word mercury__maybe__TypeInfo_for_U_14,
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__HeadVar__4_4,
  MR_Box * mercury__maybe__Acc_5)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_10;
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
        if (mercury__maybe__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__maybe__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
            }
            mercury__maybe__succeeded = MR_TRUE;
          }
      }
    return mercury__maybe__succeeded;
  }
}

void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_2(
  MR_Word mercury__maybe__TypeInfo_for_T_13,
  MR_Word mercury__maybe__TypeInfo_for_U_14,
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__HeadVar__4_4,
  MR_Box * mercury__maybe__Acc_5)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
      }
    else
      {
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_10;
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__maybe__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
        }
      }
  }
}

void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_1(
  MR_Word mercury__maybe__TypeInfo_for_T_13,
  MR_Word mercury__maybe__TypeInfo_for_U_14,
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__HeadVar__4_4,
  MR_Box * mercury__maybe__Acc_5)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
      }
    else
      {
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_10;
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__maybe__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
        }
      }
  }
}

void MR_CALL 
mercury__maybe__map_fold_maybe_5_p_0(
  MR_Word mercury__maybe__TypeInfo_for_T_13,
  MR_Word mercury__maybe__TypeInfo_for_U_14,
  MR_Word mercury__maybe__TypeInfo_for_Acc_15,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Box mercury__maybe__HeadVar__4_4,
  MR_Box * mercury__maybe__Acc_5)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__maybe__Acc_5 = mercury__maybe__HeadVar__4_4;
      }
    else
      {
        MR_Box mercury__maybe__T0_9 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_10;
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_9, &mercury__maybe__T_10, mercury__maybe__HeadVar__4_4, mercury__maybe__Acc_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__maybe__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_10;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__maybe__fold2_maybe_6_p_5(
  MR_Word mercury__maybe__TypeInfo_for_T_24,
  MR_Word mercury__maybe__TypeInfo_for_U_25,
  MR_Word mercury__maybe__TypeInfo_for_V_26,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc2_6)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__STATE_VARIABLE_Acc2_6 = mercury__maybe__STATE_VARIABLE_Acc2_0_5;
        *mercury__maybe__STATE_VARIABLE_Acc1_4 = mercury__maybe__STATE_VARIABLE_Acc1_0_3;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__Value_15 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_15, mercury__maybe__STATE_VARIABLE_Acc1_0_3, mercury__maybe__STATE_VARIABLE_Acc1_4, mercury__maybe__STATE_VARIABLE_Acc2_0_5, mercury__maybe__STATE_VARIABLE_Acc2_6);
        }
      }
    return mercury__maybe__succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__fold2_maybe_6_p_4(
  MR_Word mercury__maybe__TypeInfo_for_T_24,
  MR_Word mercury__maybe__TypeInfo_for_U_25,
  MR_Word mercury__maybe__TypeInfo_for_V_26,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc2_6)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__STATE_VARIABLE_Acc2_6 = mercury__maybe__STATE_VARIABLE_Acc2_0_5;
        *mercury__maybe__STATE_VARIABLE_Acc1_4 = mercury__maybe__STATE_VARIABLE_Acc1_0_3;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__Value_15 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_15, mercury__maybe__STATE_VARIABLE_Acc1_0_3, mercury__maybe__STATE_VARIABLE_Acc1_4, mercury__maybe__STATE_VARIABLE_Acc2_0_5, mercury__maybe__STATE_VARIABLE_Acc2_6);
        }
      }
    return mercury__maybe__succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__fold2_maybe_6_p_3(
  MR_Word mercury__maybe__TypeInfo_for_T_24,
  MR_Word mercury__maybe__TypeInfo_for_U_25,
  MR_Word mercury__maybe__TypeInfo_for_V_26,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc2_6)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__STATE_VARIABLE_Acc2_6 = mercury__maybe__STATE_VARIABLE_Acc2_0_5;
        *mercury__maybe__STATE_VARIABLE_Acc1_4 = mercury__maybe__STATE_VARIABLE_Acc1_0_3;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__Value_15 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_15, mercury__maybe__STATE_VARIABLE_Acc1_0_3, mercury__maybe__STATE_VARIABLE_Acc1_4, mercury__maybe__STATE_VARIABLE_Acc2_0_5, mercury__maybe__STATE_VARIABLE_Acc2_6);
        }
      }
    return mercury__maybe__succeeded;
  }
}

void MR_CALL 
mercury__maybe__fold2_maybe_6_p_2(
  MR_Word mercury__maybe__TypeInfo_for_T_24,
  MR_Word mercury__maybe__TypeInfo_for_U_25,
  MR_Word mercury__maybe__TypeInfo_for_V_26,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc2_6)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__STATE_VARIABLE_Acc2_6 = mercury__maybe__STATE_VARIABLE_Acc2_0_5;
        *mercury__maybe__STATE_VARIABLE_Acc1_4 = mercury__maybe__STATE_VARIABLE_Acc1_0_3;
      }
    else
      {
        MR_Box mercury__maybe__Value_15 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_15, mercury__maybe__STATE_VARIABLE_Acc1_0_3, mercury__maybe__STATE_VARIABLE_Acc1_4, mercury__maybe__STATE_VARIABLE_Acc2_0_5, mercury__maybe__STATE_VARIABLE_Acc2_6);
        }
      }
  }
}

void MR_CALL 
mercury__maybe__fold2_maybe_6_p_1(
  MR_Word mercury__maybe__TypeInfo_for_T_24,
  MR_Word mercury__maybe__TypeInfo_for_U_25,
  MR_Word mercury__maybe__TypeInfo_for_V_26,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc2_6)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__STATE_VARIABLE_Acc2_6 = mercury__maybe__STATE_VARIABLE_Acc2_0_5;
        *mercury__maybe__STATE_VARIABLE_Acc1_4 = mercury__maybe__STATE_VARIABLE_Acc1_0_3;
      }
    else
      {
        MR_Box mercury__maybe__Value_15 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_15, mercury__maybe__STATE_VARIABLE_Acc1_0_3, mercury__maybe__STATE_VARIABLE_Acc1_4, mercury__maybe__STATE_VARIABLE_Acc2_0_5, mercury__maybe__STATE_VARIABLE_Acc2_6);
        }
      }
  }
}

void MR_CALL 
mercury__maybe__fold2_maybe_6_p_0(
  MR_Word mercury__maybe__TypeInfo_for_T_24,
  MR_Word mercury__maybe__TypeInfo_for_U_25,
  MR_Word mercury__maybe__TypeInfo_for_V_26,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc2_6)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__STATE_VARIABLE_Acc2_6 = mercury__maybe__STATE_VARIABLE_Acc2_0_5;
        *mercury__maybe__STATE_VARIABLE_Acc1_4 = mercury__maybe__STATE_VARIABLE_Acc1_0_3;
      }
    else
      {
        MR_Box mercury__maybe__Value_15 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_15, mercury__maybe__STATE_VARIABLE_Acc1_0_3, mercury__maybe__STATE_VARIABLE_Acc1_4, mercury__maybe__STATE_VARIABLE_Acc2_0_5, mercury__maybe__STATE_VARIABLE_Acc2_6);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_5(
  MR_Word mercury__maybe__TypeInfo_for_T_15,
  MR_Word mercury__maybe__TypeInfo_for_U_16,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
      }
    return mercury__maybe__succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_4(
  MR_Word mercury__maybe__TypeInfo_for_T_15,
  MR_Word mercury__maybe__TypeInfo_for_U_16,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
      }
    return mercury__maybe__succeeded;
  }
}

MR_bool MR_CALL 
mercury__maybe__fold_maybe_4_p_3(
  MR_Word mercury__maybe__TypeInfo_for_T_15,
  MR_Word mercury__maybe__TypeInfo_for_U_16,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
      }
    return mercury__maybe__succeeded;
  }
}

void MR_CALL 
mercury__maybe__fold_maybe_4_p_2(
  MR_Word mercury__maybe__TypeInfo_for_T_15,
  MR_Word mercury__maybe__TypeInfo_for_U_16,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
    else
      {
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
      }
  }
}

void MR_CALL 
mercury__maybe__fold_maybe_4_p_1(
  MR_Word mercury__maybe__TypeInfo_for_T_15,
  MR_Word mercury__maybe__TypeInfo_for_U_16,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
    else
      {
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
      }
  }
}

void MR_CALL 
mercury__maybe__fold_maybe_4_p_0(
  MR_Word mercury__maybe__TypeInfo_for_T_15,
  MR_Word mercury__maybe__TypeInfo_for_U_16,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Box mercury__maybe__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__maybe__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__maybe__STATE_VARIABLE_Acc_4 = mercury__maybe__STATE_VARIABLE_Acc_0_3;
    else
      {
        MR_Box mercury__maybe__Value_10 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__Value_10, mercury__maybe__STATE_VARIABLE_Acc_0_3, mercury__maybe__STATE_VARIABLE_Acc_4);
        }
      }
  }
}

MR_Box MR_CALL 
mercury__maybe__fold_maybe_3_f_0(
  MR_Word mercury__maybe__TypeInfo_for_T_10,
  MR_Word mercury__maybe__TypeInfo_for_U_11,
  MR_Word mercury__maybe__F_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Box mercury__maybe__HeadVar__3_3)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Box mercury__maybe__HeadVar__4_4;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__maybe__HeadVar__4_4 = mercury__maybe__HeadVar__3_3;
    else
      {
        MR_Box mercury__maybe__Value_8 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__maybe__F_1, (MR_Integer) 1)));

        {
          mercury__maybe__HeadVar__4_4 = mercury__maybe__func_0(((MR_Box) mercury__maybe__F_1), mercury__maybe__Value_8, mercury__maybe__HeadVar__3_3);
        }
      }
    return mercury__maybe__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__maybe__map_maybe_2_f_0(
  MR_Word mercury__maybe__TypeInfo_for_T_8,
  MR_Word mercury__maybe__TypeInfo_for_U_9,
  MR_Word mercury__maybe__F_1,
  MR_Word mercury__maybe__HeadVar__2_2)
{
  {
    MR_bool mercury__maybe__succeeded;
    MR_Word mercury__maybe__HeadVar__3_3;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__maybe__T_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__Var_7;
        MR_Box MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__maybe__F_1, (MR_Integer) 1)));

        {
          mercury__maybe__Var_7 = mercury__maybe__func_0(((MR_Box) mercury__maybe__F_1), mercury__maybe__T_6);
        }
        {
          mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__3_3, 0) = mercury__maybe__Var_7;
        }
      }
    return mercury__maybe__HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__maybe__map_maybe_3_p_3_1(
  void * mercury__maybe__env_ptr_arg)
{
  {
    struct mercury__maybe__map_maybe_3_p_3_env_0_s * mercury__maybe__env_ptr = (struct mercury__maybe__map_maybe_3_p_3_env_0_s *) mercury__maybe__env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3) = base;
      MR_hl_field(MR_mktag(1), base, 0) = (mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__T_7;
    }
    {
      ((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__cont)((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__maybe__map_maybe_3_p_3(
  MR_Word mercury__maybe__TypeInfo_for_T_8,
  MR_Word mercury__maybe__TypeInfo_for_U_9,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Cont mercury__maybe__cont,
  void * mercury__maybe__cont_env_ptr)
{
  {
    struct mercury__maybe__map_maybe_3_p_3_env_0_s mercury__maybe__env;

    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3 = mercury__maybe__HeadVar__3_3;
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__cont = mercury__maybe__cont;
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr = mercury__maybe__cont_env_ptr;
    {
      MR_bool mercury__maybe__succeeded;

      if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *((mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__HeadVar__3_3) = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            ((mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__cont)((mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__cont_env_ptr);
          }
        }
      else
        {
          MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
          void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

          {
            mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &(mercury__maybe__env).mercury__maybe__map_maybe_3_p_3_env_0__T_7, mercury__maybe__map_maybe_3_p_3_1, &mercury__maybe__env);
          }
        }
    }
  }
}

static void MR_CALL 
mercury__maybe__map_maybe_3_p_2_1(
  void * mercury__maybe__env_ptr_arg)
{
  {
    struct mercury__maybe__map_maybe_3_p_2_env_0_s * mercury__maybe__env_ptr = (struct mercury__maybe__map_maybe_3_p_2_env_0_s *) mercury__maybe__env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3) = base;
      MR_hl_field(MR_mktag(1), base, 0) = (mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__T_7;
    }
    {
      ((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__cont)((mercury__maybe__env_ptr)->mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__maybe__map_maybe_3_p_2(
  MR_Word mercury__maybe__TypeInfo_for_T_8,
  MR_Word mercury__maybe__TypeInfo_for_U_9,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3,
  MR_Cont mercury__maybe__cont,
  void * mercury__maybe__cont_env_ptr)
{
  {
    struct mercury__maybe__map_maybe_3_p_2_env_0_s mercury__maybe__env;

    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3 = mercury__maybe__HeadVar__3_3;
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__cont = mercury__maybe__cont;
    (mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr = mercury__maybe__cont_env_ptr;
    {
      MR_bool mercury__maybe__succeeded;

      if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *((mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__HeadVar__3_3) = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            ((mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__cont)((mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__cont_env_ptr);
          }
        }
      else
        {
          MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
          void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

          {
            mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &(mercury__maybe__env).mercury__maybe__map_maybe_3_p_2_env_0__T_7, mercury__maybe__map_maybe_3_p_2_1, &mercury__maybe__env);
          }
        }
    }
  }
}

MR_bool MR_CALL 
mercury__maybe__map_maybe_3_p_1(
  MR_Word mercury__maybe__TypeInfo_for_T_8,
  MR_Word mercury__maybe__TypeInfo_for_U_9,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__maybe__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_7;
        MR_bool MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__succeeded = mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &mercury__maybe__T_7);
        }
        if (mercury__maybe__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__maybe__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_7;
            }
            mercury__maybe__succeeded = MR_TRUE;
          }
      }
    return mercury__maybe__succeeded;
  }
}

void MR_CALL 
mercury__maybe__map_maybe_3_p_0(
  MR_Word mercury__maybe__TypeInfo_for_T_8,
  MR_Word mercury__maybe__TypeInfo_for_U_9,
  MR_Word mercury__maybe__P_1,
  MR_Word mercury__maybe__HeadVar__2_2,
  MR_Word * mercury__maybe__HeadVar__3_3)
{
  {
    MR_bool mercury__maybe__succeeded;

    if ((mercury__maybe__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__maybe__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__maybe__T0_6 = (MR_hl_field(MR_mktag(1), mercury__maybe__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__maybe__T_7;
        void MR_CALL (* mercury__maybe__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__maybe__P_1, (MR_Integer) 1)));

        {
          mercury__maybe__func_0(((MR_Box) mercury__maybe__P_1), mercury__maybe__T0_6, &mercury__maybe__T_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__maybe__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__maybe__T_7;
        }
      }
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

/* :- end_module maybe. */
