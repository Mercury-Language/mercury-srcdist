/*
** Automatically generated from `random.m'
** by the Mercury compiler,
** version rotd-2019-01-05
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


// :- module random.
// :- implementation.

/*
INIT mercury__random__init
ENDINIT
*/

#include "random.mih"


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
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
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
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_Integer mercury__random__random__functor_number_map_io_random_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__random__mutvar__pti_mutvar_1__pseudo_1;

static const MR_NotagFunctorDesc mercury__random__random__notag_functor_desc_io_random_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__random__mutvar__pti_mutvar_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__random__random__field_types_io_urandom_2_0[2];

static const MR_DuFunctorDesc mercury__random__random__du_functor_desc_io_urandom_2_0;

static const MR_DuFunctorDescPtr mercury__random__random__du_stag_ordered_io_urandom_2_0[1];

static const MR_DuPtagLayout mercury__random__random__du_ptag_ordered_io_urandom_2[1];

static const MR_DuFunctorDescPtr mercury__random__random__du_name_ordered_io_urandom_2[1];

static const MR_Integer mercury__random__random__functor_number_map_io_urandom_2[1];

static const MR_PseudoTypeInfo mercury__random__random__field_types_shared_random_2_0[2];

static const MR_ConstString mercury__random__random__field_names_shared_random_2_0[2];

static const MR_DuFunctorDesc mercury__random__random__du_functor_desc_shared_random_2_0;

static const MR_DuFunctorDescPtr mercury__random__random__du_stag_ordered_shared_random_2_0[1];

static const MR_DuPtagLayout mercury__random__random__du_ptag_ordered_shared_random_2[1];

static const MR_DuFunctorDescPtr mercury__random__random__du_name_ordered_shared_random_2[1];

static const MR_Integer mercury__random__random__functor_number_map_shared_random_2[1];

static const MR_Integer mercury__random__random__functor_number_map_supply_0[1];

static const MR_NotagFunctorDesc mercury__random__random__notag_functor_desc_supply_0;

static const MR_EnumFunctorDesc mercury__random__random__enum_functor_desc_urandom_params_1_0;

static const MR_EnumFunctorDescPtr mercury__random__random__enum_value_ordered_urandom_params_1[1];

static const MR_EnumFunctorDescPtr mercury__random__random__enum_name_ordered_urandom_params_1[1];

static const MR_Integer mercury__random__random__functor_number_map_urandom_params_1[1];

static const MR_Integer mercury__random__random__functor_number_map_urandom_state_1[1];

static const MR_NotagFunctorDesc mercury__random__random__notag_functor_desc_urandom_state_1;

static const MR_ConstString mercury__random__random__type_class_id_var_names_urandom_dup_1[1];

static const MR_TypeClassMethod mercury__random__random__type_class_id_method_ids_urandom_dup_1[1];

static const MR_TypeClassId mercury__random__random__type_class_id_urandom_dup_1;

static const MR_ConstString mercury__random__random__type_class_id_var_names_urandom_2[2];

static const MR_TypeClassMethod mercury__random__random__type_class_id_method_ids_urandom_2[4];

static const MR_TypeClassId mercury__random__random__type_class_id_urandom_2;

static const MR_ConstString mercury__random__random__type_class_id_var_names_random_1[1];

static const MR_TypeClassMethod mercury__random__random__type_class_id_method_ids_random_1[4];

static const MR_TypeClassId mercury__random__random__type_class_id_random_1;

static MR_Integer MR_CALL 
mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__random____Unify____io_random_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__random____Compare____io_random_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__random____Unify____io_urandom_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__random____Compare____io_urandom_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__random____Unify____shared_random_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__random____Compare____shared_random_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__random____Unify____supply_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__random____Compare____supply_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__random____Unify____urandom_params_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__random____Compare____urandom_params_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__random____Unify____urandom_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__random____Compare____urandom_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom_dup____random__urandom_state__arity1______random__urandom_dup_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint8_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint16_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint32_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint64_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box mercury__random_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__random_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__random_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__random_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__random_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__random_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random_scalar_common_2[0])),
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



static const MR_Integer mercury__random__random__functor_number_map_io_random_1[1] = {
  (MR_Integer) 0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__random__mutvar__pti_mutvar_1__pseudo_1 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_NotagFunctorDesc mercury__random__random__notag_functor_desc_io_random_1 = {
  (MR_String) "io_random",
  (MR_PseudoTypeInfo) (&mercury__random__mutvar__pti_mutvar_1__pseudo_1),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__random__random__type_ctor_info_io_random_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__random____Unify____io_random_1_0_10001)),
  ((MR_Box) (mercury__random____Compare____io_random_1_0_10001)),
  (MR_String) "random",
  (MR_String) "io_random",
  {     &mercury__random__random__notag_functor_desc_io_random_1 },
  {     &mercury__random__random__notag_functor_desc_io_random_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__random__random__functor_number_map_io_random_1
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__random__mutvar__pti_mutvar_1__pseudo_2 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_PseudoTypeInfo mercury__random__random__field_types_io_urandom_2_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__random__mutvar__pti_mutvar_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__random__random__du_functor_desc_io_urandom_2_0 = {
  (MR_String) "io_urandom",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__random__random__field_types_io_urandom_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__random__random__du_stag_ordered_io_urandom_2_0[1] = {
  &mercury__random__random__du_functor_desc_io_urandom_2_0
};

static const MR_DuPtagLayout mercury__random__random__du_ptag_ordered_io_urandom_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__random__random__du_stag_ordered_io_urandom_2_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__random__random__du_name_ordered_io_urandom_2[1] = {
  &mercury__random__random__du_functor_desc_io_urandom_2_0
};

static const MR_Integer mercury__random__random__functor_number_map_io_urandom_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__random__random__type_ctor_info_io_urandom_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__random____Unify____io_urandom_2_0_10001)),
  ((MR_Box) (mercury__random____Compare____io_urandom_2_0_10001)),
  (MR_String) "random",
  (MR_String) "io_urandom",
  {     mercury__random__random__du_name_ordered_io_urandom_2 },
  {     mercury__random__random__du_ptag_ordered_io_urandom_2 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__random__random__functor_number_map_io_urandom_2
};

static const MR_PseudoTypeInfo mercury__random__random__field_types_shared_random_2_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_ConstString mercury__random__random__field_names_shared_random_2_0[2] = {
  (MR_String) "shared_random_params",
  (MR_String) "shared_random_state"
};

static const MR_DuFunctorDesc mercury__random__random__du_functor_desc_shared_random_2_0 = {
  (MR_String) "shared_random",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__random__random__field_types_shared_random_2_0,
  mercury__random__random__field_names_shared_random_2_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__random__random__du_stag_ordered_shared_random_2_0[1] = {
  &mercury__random__random__du_functor_desc_shared_random_2_0
};

static const MR_DuPtagLayout mercury__random__random__du_ptag_ordered_shared_random_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__random__random__du_stag_ordered_shared_random_2_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__random__random__du_name_ordered_shared_random_2[1] = {
  &mercury__random__random__du_functor_desc_shared_random_2_0
};

static const MR_Integer mercury__random__random__functor_number_map_shared_random_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__random__random__type_ctor_info_shared_random_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__random____Unify____shared_random_2_0_10001)),
  ((MR_Box) (mercury__random____Compare____shared_random_2_0_10001)),
  (MR_String) "random",
  (MR_String) "shared_random",
  {     mercury__random__random__du_name_ordered_shared_random_2 },
  {     mercury__random__random__du_ptag_ordered_shared_random_2 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__random__random__functor_number_map_shared_random_2
};

static const MR_Integer mercury__random__random__functor_number_map_supply_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__random__random__notag_functor_desc_supply_0 = {
  (MR_String) "rs",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__random__random__type_ctor_info_supply_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__random____Unify____supply_0_0_10001)),
  ((MR_Box) (mercury__random____Compare____supply_0_0_10001)),
  (MR_String) "random",
  (MR_String) "supply",
  {     &mercury__random__random__notag_functor_desc_supply_0 },
  {     &mercury__random__random__notag_functor_desc_supply_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__random__random__functor_number_map_supply_0
};

static const MR_EnumFunctorDesc mercury__random__random__enum_functor_desc_urandom_params_1_0 = {
  (MR_String) "urandom_params",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__random__random__enum_value_ordered_urandom_params_1[1] = {
  &mercury__random__random__enum_functor_desc_urandom_params_1_0
};

static const MR_EnumFunctorDescPtr mercury__random__random__enum_name_ordered_urandom_params_1[1] = {
  &mercury__random__random__enum_functor_desc_urandom_params_1_0
};

static const MR_Integer mercury__random__random__functor_number_map_urandom_params_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__random__random__type_ctor_info_urandom_params_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__random____Unify____urandom_params_1_0_10001)),
  ((MR_Box) (mercury__random____Compare____urandom_params_1_0_10001)),
  (MR_String) "random",
  (MR_String) "urandom_params",
  {     mercury__random__random__enum_name_ordered_urandom_params_1 },
  {     mercury__random__random__enum_value_ordered_urandom_params_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__random__random__functor_number_map_urandom_params_1
};

static const MR_Integer mercury__random__random__functor_number_map_urandom_state_1[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__random__random__notag_functor_desc_urandom_state_1 = {
  (MR_String) "urandom_state",
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__random__random__type_ctor_info_urandom_state_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__random____Unify____urandom_state_1_0_10001)),
  ((MR_Box) (mercury__random____Compare____urandom_state_1_0_10001)),
  (MR_String) "random",
  (MR_String) "urandom_state",
  {     &mercury__random__random__notag_functor_desc_urandom_state_1 },
  {     &mercury__random__random__notag_functor_desc_urandom_state_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__random__random__functor_number_map_urandom_state_1
};

const MR_BaseTypeclassInfo base_typeclass_info_random__urandom_dup__arity1__random__urandom_state__arity1__[6] = {
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__urandom_dup____random__urandom_state__arity1______random__urandom_dup_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_random__urandom__arity2__random__io_urandom__arity2__io__state__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint8_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint16_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint32_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint64_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_random__urandom__arity2__random__io_random__arity1__io__state__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint8_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint16_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint32_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint64_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_random__urandom__arity2__random__urandom_params__arity1__random__urandom_state__arity1__[9] = {
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint8_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint16_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint32_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint64_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_random__random__arity1__random__shared_random__arity2__[9] = {
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint8_3_3_p_0_10001)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint16_3_3_p_0_10001)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint32_3_3_p_0_10001)),
  ((MR_Box) (mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint64_3_3_p_0_10001))
};

static const MR_ConstString mercury__random__random__type_class_id_var_names_urandom_dup_1[1] = {
  (MR_String) "S"
};

static const MR_TypeClassMethod mercury__random__random__type_class_id_method_ids_urandom_dup_1[1] = {
  {
    (MR_String) "urandom_dup",
    (MR_Integer) 3,
    MR_PREDICATE
  }
};

static const MR_TypeClassId mercury__random__random__type_class_id_urandom_dup_1 = {
  (MR_String) "random",
  (MR_String) "urandom_dup",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__random__random__type_class_id_var_names_urandom_dup_1,
  mercury__random__random__type_class_id_method_ids_urandom_dup_1
};

const MR_TypeClassDeclStruct mercury__random__random__type_class_decl_urandom_dup_1 = {
  &mercury__random__random__type_class_id_urandom_dup_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static const MR_ConstString mercury__random__random__type_class_id_var_names_urandom_2[2] = {
  (MR_String) "P",
  (MR_String) "S"
};

static const MR_TypeClassMethod mercury__random__random__type_class_id_method_ids_urandom_2[4] = {
  {
    (MR_String) "generate_uint8",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "generate_uint16",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "generate_uint32",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "generate_uint64",
    (MR_Integer) 4,
    MR_PREDICATE
  }
};

static const MR_TypeClassId mercury__random__random__type_class_id_urandom_2 = {
  (MR_String) "random",
  (MR_String) "urandom",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__random__random__type_class_id_var_names_urandom_2,
  mercury__random__random__type_class_id_method_ids_urandom_2
};

const MR_TypeClassDeclStruct mercury__random__random__type_class_decl_urandom_2 = {
  &mercury__random__random__type_class_id_urandom_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static const MR_ConstString mercury__random__random__type_class_id_var_names_random_1[1] = {
  (MR_String) "R"
};

static const MR_TypeClassMethod mercury__random__random__type_class_id_method_ids_random_1[4] = {
  {
    (MR_String) "generate_uint8",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "generate_uint16",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "generate_uint32",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "generate_uint64",
    (MR_Integer) 3,
    MR_PREDICATE
  }
};

static const MR_TypeClassId mercury__random__random__type_class_id_random_1 = {
  (MR_String) "random",
  (MR_String) "random",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__random__random__type_class_id_var_names_random_1,
  mercury__random__random__type_class_id_method_ids_random_1
};

const MR_TypeClassDeclStruct mercury__random__random__type_class_decl_random_1 = {
  &mercury__random__random__type_class_id_random_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_Integer MR_CALL 
mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__random__ClassMethod_for_random__urandom_dup____random__urandom_state__arity1______random__urandom_dup_3_3_p_0(
  MR_Word TypeClassInfo_for_random_8,
  MR_Word S_5,
  MR_Word * S1_6,
  MR_Word * S2_7)
{
  {
    *S1_6 = S_5;
    *S2_7 = S_5;
  }
}

void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint64_4_4_p_0(
  MR_Word TypeClassInfo_for_random_15,
  uint64_t * N_7,
  MR_Word S0_8,
  MR_Word * S_9)
{
  mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_112_97_114_97_109_115_95_95_97_114_105_116_121_49_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_115_116_97_116_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_54_52_95_52_95_95_91_50_93_95_48_4_p_0(TypeClassInfo_for_random_15, N_7, S0_8, S_9);
}

void MR_CALL 
mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_112_97_114_97_109_115_95_95_97_114_105_116_121_49_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_115_116_97_116_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_54_52_95_52_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_random_15,
  uint64_t * N_7,
  MR_Word S0_8,
  MR_Word * S_9)
{
  {
    MR_Box R_5;
    MR_Box R0_10 = ((MR_Box) (S0_8));
    MR_Word Var_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_15, (MR_Integer) 0)), (MR_Integer) 8))));
    MR_Box conv1_N_7;

    func_0(((MR_Box) (TypeClassInfo_for_random_15)), &conv1_N_7, R0_10, &R_5);
    *N_7 = MR_unbox_uint64(conv1_N_7);
    Var_14 = ((MR_Word) (R_5));
    *S_9 = Var_14;
  }
}

void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint32_4_4_p_0(
  MR_Word TypeClassInfo_for_random_15,
  uint32_t * N_7,
  MR_Word S0_8,
  MR_Word * S_9)
{
  mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_112_97_114_97_109_115_95_95_97_114_105_116_121_49_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_115_116_97_116_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_51_50_95_52_95_95_91_50_93_95_48_4_p_0(TypeClassInfo_for_random_15, N_7, S0_8, S_9);
}

void MR_CALL 
mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_112_97_114_97_109_115_95_95_97_114_105_116_121_49_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_115_116_97_116_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_51_50_95_52_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_random_15,
  uint32_t * N_7,
  MR_Word S0_8,
  MR_Word * S_9)
{
  {
    MR_Box R_5;
    MR_Box R0_10 = ((MR_Box) (S0_8));
    MR_Word Var_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_15, (MR_Integer) 0)), (MR_Integer) 7))));
    MR_Box conv1_N_7;

    func_0(((MR_Box) (TypeClassInfo_for_random_15)), &conv1_N_7, R0_10, &R_5);
    *N_7 = ((uint32_t) (MR_Word) conv1_N_7);
    Var_14 = ((MR_Word) (R_5));
    *S_9 = Var_14;
  }
}

void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint16_4_4_p_0(
  MR_Word TypeClassInfo_for_random_15,
  uint16_t * N_7,
  MR_Word S0_8,
  MR_Word * S_9)
{
  mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_112_97_114_97_109_115_95_95_97_114_105_116_121_49_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_115_116_97_116_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_49_54_95_52_95_95_91_50_93_95_48_4_p_0(TypeClassInfo_for_random_15, N_7, S0_8, S_9);
}

void MR_CALL 
mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_112_97_114_97_109_115_95_95_97_114_105_116_121_49_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_115_116_97_116_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_49_54_95_52_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_random_15,
  uint16_t * N_7,
  MR_Word S0_8,
  MR_Word * S_9)
{
  {
    MR_Box R_5;
    MR_Box R0_10 = ((MR_Box) (S0_8));
    MR_Word Var_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_15, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv1_N_7;

    func_0(((MR_Box) (TypeClassInfo_for_random_15)), &conv1_N_7, R0_10, &R_5);
    *N_7 = ((uint16_t) (MR_Word) conv1_N_7);
    Var_14 = ((MR_Word) (R_5));
    *S_9 = Var_14;
  }
}

void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint8_4_4_p_0(
  MR_Word TypeClassInfo_for_random_15,
  uint8_t * N_7,
  MR_Word S0_8,
  MR_Word * S_9)
{
  mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_112_97_114_97_109_115_95_95_97_114_105_116_121_49_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_115_116_97_116_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_56_95_52_95_95_91_50_93_95_48_4_p_0(TypeClassInfo_for_random_15, N_7, S0_8, S_9);
}

void MR_CALL 
mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_112_97_114_97_109_115_95_95_97_114_105_116_121_49_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_115_116_97_116_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_56_95_52_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_random_15,
  uint8_t * N_7,
  MR_Word S0_8,
  MR_Word * S_9)
{
  {
    MR_Box R_5;
    MR_Box R0_10 = ((MR_Box) (S0_8));
    MR_Word Var_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_15, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_N_7;

    func_0(((MR_Box) (TypeClassInfo_for_random_15)), &conv1_N_7, R0_10, &R_5);
    *N_7 = ((uint8_t) (MR_Word) conv1_N_7);
    Var_14 = ((MR_Word) (R_5));
    *S_9 = Var_14;
  }
}

void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint64_4_4_p_0(
  MR_Word TypeClassInfo_for_random_5,
  MR_Word HeadVar__1_1,
  uint64_t * HeadVar__2_2)
{
  mercury__random__io_random_gen_uint64_4_p_0(TypeClassInfo_for_random_5, HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint32_4_4_p_0(
  MR_Word TypeClassInfo_for_random_5,
  MR_Word HeadVar__1_1,
  uint32_t * HeadVar__2_2)
{
  mercury__random__io_random_gen_uint32_4_p_0(TypeClassInfo_for_random_5, HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint16_4_4_p_0(
  MR_Word TypeClassInfo_for_random_5,
  MR_Word HeadVar__1_1,
  uint16_t * HeadVar__2_2)
{
  mercury__random__io_random_gen_uint16_4_p_0(TypeClassInfo_for_random_5, HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint8_4_4_p_0(
  MR_Word TypeClassInfo_for_random_5,
  MR_Word HeadVar__1_1,
  uint8_t * HeadVar__2_2)
{
  mercury__random__io_random_gen_uint8_4_p_0(TypeClassInfo_for_random_5, HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint64_4_4_p_0(
  MR_Word TypeClassInfo_for_urandom_5,
  MR_Word HeadVar__1_1,
  uint64_t * HeadVar__2_2)
{
  mercury__random__io_urandom_gen_uint64_4_p_0(TypeClassInfo_for_urandom_5, HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint32_4_4_p_0(
  MR_Word TypeClassInfo_for_urandom_5,
  MR_Word HeadVar__1_1,
  uint32_t * HeadVar__2_2)
{
  mercury__random__io_urandom_gen_uint32_4_p_0(TypeClassInfo_for_urandom_5, HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint16_4_4_p_0(
  MR_Word TypeClassInfo_for_urandom_5,
  MR_Word HeadVar__1_1,
  uint16_t * HeadVar__2_2)
{
  mercury__random__io_urandom_gen_uint16_4_p_0(TypeClassInfo_for_urandom_5, HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint8_4_4_p_0(
  MR_Word TypeClassInfo_for_urandom_5,
  MR_Word HeadVar__1_1,
  uint8_t * HeadVar__2_2)
{
  mercury__random__io_urandom_gen_uint8_4_p_0(TypeClassInfo_for_urandom_5, HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint64_3_3_p_0(
  MR_Word TypeClassInfo_for_urandom_16,
  MR_Word TypeClassInfo_for_urandom_dup_17,
  uint64_t * N_6,
  MR_Word R0_7,
  MR_Word * R_8)
{
  {
    MR_Box P_4 = (MR_hl_field(MR_mktag(0), R0_7, (MR_Integer) 0));
    MR_Box S_5;
    MR_Box S0_9 = (MR_hl_field(MR_mktag(0), R0_7, (MR_Integer) 1));
    MR_Box S1_10 = S0_9;
    MR_Box S2_12;
    MR_Box Var_15;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_dup_17, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv2_N_6;

    func_0(((MR_Box) (TypeClassInfo_for_urandom_dup_17)), S1_10, &Var_15, &S2_12);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_16, (MR_Integer) 0)), (MR_Integer) 8))));
    func_1(((MR_Box) (TypeClassInfo_for_urandom_16)), P_4, &conv2_N_6, S2_12, &S_5);
    *N_6 = MR_unbox_uint64(conv2_N_6);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *R_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = P_4;
      MR_hl_field(MR_mktag(0), base, 1) = S_5;
    }
  }
}

void MR_CALL 
mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint32_3_3_p_0(
  MR_Word TypeClassInfo_for_urandom_16,
  MR_Word TypeClassInfo_for_urandom_dup_17,
  uint32_t * N_6,
  MR_Word R0_7,
  MR_Word * R_8)
{
  {
    MR_Box P_4 = (MR_hl_field(MR_mktag(0), R0_7, (MR_Integer) 0));
    MR_Box S_5;
    MR_Box S0_9 = (MR_hl_field(MR_mktag(0), R0_7, (MR_Integer) 1));
    MR_Box S1_10 = S0_9;
    MR_Box S2_12;
    MR_Box Var_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_dup_17, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv2_N_6;

    func_0(((MR_Box) (TypeClassInfo_for_urandom_dup_17)), S1_10, &Var_14, &S2_12);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_16, (MR_Integer) 0)), (MR_Integer) 7))));
    func_1(((MR_Box) (TypeClassInfo_for_urandom_16)), P_4, &conv2_N_6, S2_12, &S_5);
    *N_6 = ((uint32_t) (MR_Word) conv2_N_6);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *R_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = P_4;
      MR_hl_field(MR_mktag(0), base, 1) = S_5;
    }
  }
}

void MR_CALL 
mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint16_3_3_p_0(
  MR_Word TypeClassInfo_for_urandom_16,
  MR_Word TypeClassInfo_for_urandom_dup_17,
  uint16_t * N_6,
  MR_Word R0_7,
  MR_Word * R_8)
{
  {
    MR_Box P_4 = (MR_hl_field(MR_mktag(0), R0_7, (MR_Integer) 0));
    MR_Box S_5;
    MR_Box S0_9 = (MR_hl_field(MR_mktag(0), R0_7, (MR_Integer) 1));
    MR_Box S1_10 = S0_9;
    MR_Box S2_12;
    MR_Box Var_13;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_dup_17, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv2_N_6;

    func_0(((MR_Box) (TypeClassInfo_for_urandom_dup_17)), S1_10, &Var_13, &S2_12);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_16, (MR_Integer) 0)), (MR_Integer) 6))));
    func_1(((MR_Box) (TypeClassInfo_for_urandom_16)), P_4, &conv2_N_6, S2_12, &S_5);
    *N_6 = ((uint16_t) (MR_Word) conv2_N_6);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *R_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = P_4;
      MR_hl_field(MR_mktag(0), base, 1) = S_5;
    }
  }
}

void MR_CALL 
mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint8_3_3_p_0(
  MR_Word TypeClassInfo_for_urandom_16,
  MR_Word TypeClassInfo_for_urandom_dup_17,
  uint8_t * N_6,
  MR_Word R0_7,
  MR_Word * R_8)
{
  {
    MR_Box P_4 = (MR_hl_field(MR_mktag(0), R0_7, (MR_Integer) 0));
    MR_Box S_5;
    MR_Box S0_9 = (MR_hl_field(MR_mktag(0), R0_7, (MR_Integer) 1));
    MR_Box S1_10 = S0_9;
    MR_Box S2_12;
    MR_Box Var_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_dup_17, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv2_N_6;

    func_0(((MR_Box) (TypeClassInfo_for_urandom_dup_17)), S1_10, &Var_11, &S2_12);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_16, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_urandom_16)), P_4, &conv2_N_6, S2_12, &S_5);
    *N_6 = ((uint8_t) (MR_Word) conv2_N_6);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *R_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = P_4;
      MR_hl_field(MR_mktag(0), base, 1) = S_5;
    }
  }
}

void MR_CALL 
mercury__random____Compare____urandom_state_1_0(
  MR_Word TypeInfo_for_R_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = ((MR_Box) (HeadVar__2_2));
      MR_Box ArgY1_5 = ((MR_Box) (HeadVar__3_3));

      mercury__builtin__compare_3_p_0(TypeInfo_for_R_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mercury__random____Unify____urandom_state_1_0(
  MR_Word TypeInfo_for_R_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box ArgX1_3 = ((MR_Box) (HeadVar__1_1));
      MR_Box ArgY1_4 = ((MR_Box) (HeadVar__2_2));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_7, ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__random____Compare____urandom_params_1_0(
  MR_Word TypeInfo_for_R_4,
  MR_Word * HeadVar__1_1)
{
  mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_112_97_114_97_109_115_95_49_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_112_97_114_97_109_115_95_49_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__random____Unify____urandom_params_1_0(
  MR_Word TypeInfo_for_R_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_112_97_114_97_109_115_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_112_97_114_97_109_115_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__random____Compare____supply_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
      MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__random____Unify____supply_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__random____Compare____shared_random_2_0(
  MR_Word TypeInfo_for_P_11,
  MR_Word TypeInfo_for_S_12,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0(TypeInfo_for_P_11, &SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0(TypeInfo_for_S_12, HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
mercury__random____Unify____shared_random_2_0(
  MR_Word TypeInfo_for_P_9,
  MR_Word TypeInfo_for_S_10,
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
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_P_9, ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_S_10, ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__random____Compare____io_urandom_2_0(
  MR_Word TypeInfo_for_P_11,
  MR_Word TypeInfo_for_S_12,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0(TypeInfo_for_P_11, &SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__mutvar____Compare____mutvar_1_0(TypeInfo_for_S_12, HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
mercury__random____Unify____io_urandom_2_0(
  MR_Word TypeInfo_for_P_9,
  MR_Word TypeInfo_for_S_10,
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
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_P_9, ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = mercury__mutvar____Unify____mutvar_1_0(TypeInfo_for_S_10, ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__random____Compare____io_random_1_0(
  MR_Word TypeInfo_for_R_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__mutvar____Compare____mutvar_1_0(TypeInfo_for_R_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mercury__random____Unify____io_random_1_0(
  MR_Word TypeInfo_for_R_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__mutvar____Unify____mutvar_1_0(TypeInfo_for_R_7, ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__random__urandom_dup_3_p_0(
  MR_Word TypeClassInfo_for_urandom_dup_4,
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_dup_4, (MR_Integer) 0)), (MR_Integer) 5))));

    func_0(((MR_Box) (TypeClassInfo_for_urandom_dup_4)), HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
mercury__random__generate_uint64_4_p_0(
  MR_Word TypeClassInfo_for_urandom_5,
  MR_Box HeadVar__1_1,
  uint64_t * HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_5, (MR_Integer) 0)), (MR_Integer) 8))));
    MR_Box conv1_HeadVar__2_2;

    func_0(((MR_Box) (TypeClassInfo_for_urandom_5)), HeadVar__1_1, &conv1_HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    *HeadVar__2_2 = MR_unbox_uint64(conv1_HeadVar__2_2);
  }
}

void MR_CALL 
mercury__random__generate_uint32_4_p_0(
  MR_Word TypeClassInfo_for_urandom_5,
  MR_Box HeadVar__1_1,
  uint32_t * HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_5, (MR_Integer) 0)), (MR_Integer) 7))));
    MR_Box conv1_HeadVar__2_2;

    func_0(((MR_Box) (TypeClassInfo_for_urandom_5)), HeadVar__1_1, &conv1_HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    *HeadVar__2_2 = ((uint32_t) (MR_Word) conv1_HeadVar__2_2);
  }
}

void MR_CALL 
mercury__random__generate_uint16_4_p_0(
  MR_Word TypeClassInfo_for_urandom_5,
  MR_Box HeadVar__1_1,
  uint16_t * HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_5, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv1_HeadVar__2_2;

    func_0(((MR_Box) (TypeClassInfo_for_urandom_5)), HeadVar__1_1, &conv1_HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    *HeadVar__2_2 = ((uint16_t) (MR_Word) conv1_HeadVar__2_2);
  }
}

void MR_CALL 
mercury__random__generate_uint8_4_p_0(
  MR_Word TypeClassInfo_for_urandom_5,
  MR_Box HeadVar__1_1,
  uint8_t * HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_5, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_HeadVar__2_2;

    func_0(((MR_Box) (TypeClassInfo_for_urandom_5)), HeadVar__1_1, &conv1_HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    *HeadVar__2_2 = ((uint8_t) (MR_Word) conv1_HeadVar__2_2);
  }
}

void MR_CALL 
mercury__random__generate_uint64_3_p_0(
  MR_Word TypeClassInfo_for_random_4,
  uint64_t * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_4, (MR_Integer) 0)), (MR_Integer) 8))));
    MR_Box conv1_HeadVar__1_1;

    func_0(((MR_Box) (TypeClassInfo_for_random_4)), &conv1_HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
    *HeadVar__1_1 = MR_unbox_uint64(conv1_HeadVar__1_1);
  }
}

void MR_CALL 
mercury__random__generate_uint32_3_p_0(
  MR_Word TypeClassInfo_for_random_4,
  uint32_t * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_4, (MR_Integer) 0)), (MR_Integer) 7))));
    MR_Box conv1_HeadVar__1_1;

    func_0(((MR_Box) (TypeClassInfo_for_random_4)), &conv1_HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
    *HeadVar__1_1 = ((uint32_t) (MR_Word) conv1_HeadVar__1_1);
  }
}

void MR_CALL 
mercury__random__generate_uint16_3_p_0(
  MR_Word TypeClassInfo_for_random_4,
  uint16_t * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_4, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv1_HeadVar__1_1;

    func_0(((MR_Box) (TypeClassInfo_for_random_4)), &conv1_HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
    *HeadVar__1_1 = ((uint16_t) (MR_Word) conv1_HeadVar__1_1);
  }
}

void MR_CALL 
mercury__random__generate_uint8_3_p_0(
  MR_Word TypeClassInfo_for_random_4,
  uint8_t * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_4, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_HeadVar__1_1;

    func_0(((MR_Box) (TypeClassInfo_for_random_4)), &conv1_HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
    *HeadVar__1_1 = ((uint8_t) (MR_Word) conv1_HeadVar__1_1);
  }
}

void MR_CALL 
mercury__random__test_2_4_p_0(
  MR_Integer N_5,
  MR_Word * Is_6,
  MR_Word STATE_VARIABLE_RS_0_11,
  MR_Word * STATE_VARIABLE_RS_12)
{
  {
    MR_bool succeeded = (N_5 > (MR_Integer) 0);

    if (succeeded)
    {
      MR_Integer N1_8 = (MR_Integer) ((MR_Unsigned) N_5 - (MR_Unsigned) 1);
      MR_Integer I_9;
      MR_Word Is0_10;
      MR_Word STATE_VARIABLE_RS_15_15;

      mercury__random__random_3_p_0(&I_9, STATE_VARIABLE_RS_0_11, &STATE_VARIABLE_RS_15_15);
      mercury__random__test_2_4_p_0(N1_8, &Is0_10, STATE_VARIABLE_RS_15_15, STATE_VARIABLE_RS_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Is_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (I_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Is0_10));
      }
    }
    else
    {
      *Is_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RS_12 = STATE_VARIABLE_RS_0_11;
    }
  }
}

void MR_CALL 
mercury__random__params_3_p_0(
  MR_Integer * HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  {
    *HeadVar__1_1 = (MR_Integer) 9301;
    *HeadVar__2_2 = (MR_Integer) 49297;
    *HeadVar__3_3 = (MR_Integer) 233280;
  }
}

void MR_CALL 
mercury__random__io_urandom_gen_uint64_4_p_0(
  MR_Word TypeClassInfo_for_urandom_14,
  MR_Word HeadVar__1_1,
  uint64_t * N_7)
{
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Box P_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Word V_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box S0_9;
    MR_Box S1_10;
    MR_Box S_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv1_N_7;

{
#define MR_PROC_LABEL mercury__random__io_urandom_gen_uint64_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_urandom_14 ;
	Index =  (MR_Integer) 2 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_16_16  = TypeInfo;
}
    mercury__mutvar__get_mutvar_2_p_0(TypeInfo_16_16, V_6, &S0_9);
    S1_10 = S0_9;
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_14, (MR_Integer) 0)), (MR_Integer) 8))));
    func_0(((MR_Box) (TypeClassInfo_for_urandom_14)), P_5, &conv1_N_7, S1_10, &S_11);
    *N_7 = MR_unbox_uint64(conv1_N_7);
{
#define MR_PROC_LABEL mercury__random__io_urandom_gen_uint64_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_urandom_14 ;
	Index =  (MR_Integer) 2 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_17_17  = TypeInfo;
}
    mercury__mutvar__set_mutvar_2_p_0(TypeInfo_17_17, V_6, S_11);
  }
}

void MR_CALL 
mercury__random__io_urandom_gen_uint32_4_p_0(
  MR_Word TypeClassInfo_for_urandom_14,
  MR_Word HeadVar__1_1,
  uint32_t * N_7)
{
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Box P_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Word V_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box S0_9;
    MR_Box S1_10;
    MR_Box S_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv1_N_7;

{
#define MR_PROC_LABEL mercury__random__io_urandom_gen_uint32_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_urandom_14 ;
	Index =  (MR_Integer) 2 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_16_16  = TypeInfo;
}
    mercury__mutvar__get_mutvar_2_p_0(TypeInfo_16_16, V_6, &S0_9);
    S1_10 = S0_9;
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_14, (MR_Integer) 0)), (MR_Integer) 7))));
    func_0(((MR_Box) (TypeClassInfo_for_urandom_14)), P_5, &conv1_N_7, S1_10, &S_11);
    *N_7 = ((uint32_t) (MR_Word) conv1_N_7);
{
#define MR_PROC_LABEL mercury__random__io_urandom_gen_uint32_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_urandom_14 ;
	Index =  (MR_Integer) 2 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_17_17  = TypeInfo;
}
    mercury__mutvar__set_mutvar_2_p_0(TypeInfo_17_17, V_6, S_11);
  }
}

void MR_CALL 
mercury__random__io_urandom_gen_uint16_4_p_0(
  MR_Word TypeClassInfo_for_urandom_14,
  MR_Word HeadVar__1_1,
  uint16_t * N_7)
{
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Box P_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Word V_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box S0_9;
    MR_Box S1_10;
    MR_Box S_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv1_N_7;

{
#define MR_PROC_LABEL mercury__random__io_urandom_gen_uint16_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_urandom_14 ;
	Index =  (MR_Integer) 2 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_16_16  = TypeInfo;
}
    mercury__mutvar__get_mutvar_2_p_0(TypeInfo_16_16, V_6, &S0_9);
    S1_10 = S0_9;
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_14, (MR_Integer) 0)), (MR_Integer) 6))));
    func_0(((MR_Box) (TypeClassInfo_for_urandom_14)), P_5, &conv1_N_7, S1_10, &S_11);
    *N_7 = ((uint16_t) (MR_Word) conv1_N_7);
{
#define MR_PROC_LABEL mercury__random__io_urandom_gen_uint16_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_urandom_14 ;
	Index =  (MR_Integer) 2 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_17_17  = TypeInfo;
}
    mercury__mutvar__set_mutvar_2_p_0(TypeInfo_17_17, V_6, S_11);
  }
}

void MR_CALL 
mercury__random__io_urandom_gen_uint8_4_p_0(
  MR_Word TypeClassInfo_for_urandom_14,
  MR_Word HeadVar__1_1,
  uint8_t * N_7)
{
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Box P_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Word V_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box S0_9;
    MR_Box S1_10;
    MR_Box S_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv1_N_7;

{
#define MR_PROC_LABEL mercury__random__io_urandom_gen_uint8_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_urandom_14 ;
	Index =  (MR_Integer) 2 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_16_16  = TypeInfo;
}
    mercury__mutvar__get_mutvar_2_p_0(TypeInfo_16_16, V_6, &S0_9);
    S1_10 = S0_9;
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_14, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_urandom_14)), P_5, &conv1_N_7, S1_10, &S_11);
    *N_7 = ((uint8_t) (MR_Word) conv1_N_7);
{
#define MR_PROC_LABEL mercury__random__io_urandom_gen_uint8_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_urandom_14 ;
	Index =  (MR_Integer) 2 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_17_17  = TypeInfo;
}
    mercury__mutvar__set_mutvar_2_p_0(TypeInfo_17_17, V_6, S_11);
  }
}

void MR_CALL 
mercury__random__io_random_gen_uint64_4_p_0(
  MR_Word TypeClassInfo_for_random_12,
  MR_Word HeadVar__1_1,
  uint64_t * N_6)
{
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word V_5 = (MR_Word) (HeadVar__1_1);
    MR_Box R0_8;
    MR_Box R_9;
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv1_N_6;

{
#define MR_PROC_LABEL mercury__random__io_random_gen_uint64_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_random_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_14_14  = TypeInfo;
}
    mercury__mutvar__get_mutvar_2_p_0(TypeInfo_14_14, V_5, &R0_8);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_12, (MR_Integer) 0)), (MR_Integer) 8))));
    func_0(((MR_Box) (TypeClassInfo_for_random_12)), &conv1_N_6, R0_8, &R_9);
    *N_6 = MR_unbox_uint64(conv1_N_6);
{
#define MR_PROC_LABEL mercury__random__io_random_gen_uint64_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_random_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_15_15  = TypeInfo;
}
    mercury__mutvar__set_mutvar_2_p_0(TypeInfo_15_15, V_5, R_9);
  }
}

void MR_CALL 
mercury__random__io_random_gen_uint32_4_p_0(
  MR_Word TypeClassInfo_for_random_12,
  MR_Word HeadVar__1_1,
  uint32_t * N_6)
{
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word V_5 = (MR_Word) (HeadVar__1_1);
    MR_Box R0_8;
    MR_Box R_9;
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv1_N_6;

{
#define MR_PROC_LABEL mercury__random__io_random_gen_uint32_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_random_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_14_14  = TypeInfo;
}
    mercury__mutvar__get_mutvar_2_p_0(TypeInfo_14_14, V_5, &R0_8);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_12, (MR_Integer) 0)), (MR_Integer) 7))));
    func_0(((MR_Box) (TypeClassInfo_for_random_12)), &conv1_N_6, R0_8, &R_9);
    *N_6 = ((uint32_t) (MR_Word) conv1_N_6);
{
#define MR_PROC_LABEL mercury__random__io_random_gen_uint32_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_random_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_15_15  = TypeInfo;
}
    mercury__mutvar__set_mutvar_2_p_0(TypeInfo_15_15, V_5, R_9);
  }
}

void MR_CALL 
mercury__random__io_random_gen_uint16_4_p_0(
  MR_Word TypeClassInfo_for_random_12,
  MR_Word HeadVar__1_1,
  uint16_t * N_6)
{
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word V_5 = (MR_Word) (HeadVar__1_1);
    MR_Box R0_8;
    MR_Box R_9;
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv1_N_6;

{
#define MR_PROC_LABEL mercury__random__io_random_gen_uint16_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_random_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_14_14  = TypeInfo;
}
    mercury__mutvar__get_mutvar_2_p_0(TypeInfo_14_14, V_5, &R0_8);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_12, (MR_Integer) 0)), (MR_Integer) 6))));
    func_0(((MR_Box) (TypeClassInfo_for_random_12)), &conv1_N_6, R0_8, &R_9);
    *N_6 = ((uint16_t) (MR_Word) conv1_N_6);
{
#define MR_PROC_LABEL mercury__random__io_random_gen_uint16_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_random_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_15_15  = TypeInfo;
}
    mercury__mutvar__set_mutvar_2_p_0(TypeInfo_15_15, V_5, R_9);
  }
}

void MR_CALL 
mercury__random__io_random_gen_uint8_4_p_0(
  MR_Word TypeClassInfo_for_random_12,
  MR_Word HeadVar__1_1,
  uint8_t * N_6)
{
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word V_5 = (MR_Word) (HeadVar__1_1);
    MR_Box R0_8;
    MR_Box R_9;
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv1_N_6;

{
#define MR_PROC_LABEL mercury__random__io_random_gen_uint8_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_random_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_14_14  = TypeInfo;
}
    mercury__mutvar__get_mutvar_2_p_0(TypeInfo_14_14, V_5, &R0_8);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_12, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_random_12)), &conv1_N_6, R0_8, &R_9);
    *N_6 = ((uint8_t) (MR_Word) conv1_N_6);
{
#define MR_PROC_LABEL mercury__random__io_random_gen_uint8_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_random_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_15_15  = TypeInfo;
}
    mercury__mutvar__set_mutvar_2_p_0(TypeInfo_15_15, V_5, R_9);
  }
}

void MR_CALL 
mercury__random__test_4_p_0(
  MR_Integer Seed_5,
  MR_Integer N_6,
  MR_Word * Nums_7,
  MR_Integer * Max_8)
{
  {
    MR_Word RS1_10;
    MR_Integer RS_13;
    MR_Box conv0_Copy;
    MR_Word _RS2_11;

{
#define MR_PROC_LABEL mercury__random__test_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0) ;
	Value = (MR_Word) ((MR_Box) (Seed_5)) ;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	 conv0_Copy  = (MR_Box) Copy;
    RS_13 = ((MR_Integer) (conv0_Copy));
}
    RS1_10 = (MR_Word) (RS_13);
    *Max_8 = (MR_Integer) ((MR_Unsigned) 233280 - (MR_Unsigned) 1);
    mercury__random__test_2_4_p_1(N_6, Nums_7, RS1_10, &_RS2_11);
  }
}

void MR_CALL 
mercury__random__test_2_4_p_1(
  MR_Integer N_5,
  MR_Word * Is_6,
  MR_Word STATE_VARIABLE_RS_0_11,
  MR_Word * STATE_VARIABLE_RS_12)
{
  {
    MR_bool succeeded = (N_5 > (MR_Integer) 0);

    if (succeeded)
    {
      MR_Integer N1_8 = (MR_Integer) ((MR_Unsigned) N_5 - (MR_Unsigned) 1);
      MR_Integer I_9;
      MR_Word Is0_10;
      MR_Word STATE_VARIABLE_RS_15_15;

      mercury__random__random_3_p_1(&I_9, STATE_VARIABLE_RS_0_11, &STATE_VARIABLE_RS_15_15);
      mercury__random__test_2_4_p_1(N1_8, &Is0_10, STATE_VARIABLE_RS_15_15, STATE_VARIABLE_RS_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Is_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (I_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Is0_10));
      }
    }
    else
    {
      *Is_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RS_12 = STATE_VARIABLE_RS_0_11;
    }
  }
}

void MR_CALL 
mercury__random__permutation_4_p_1(
  MR_Word TypeInfo_for_T_14,
  MR_Word List0_5,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_RS_0_10,
  MR_Word * STATE_VARIABLE_RS_11)
{
  {
    MR_ArrayPtr Samples_8;
    MR_Integer Len_9;

    mercury__array__from_list_2_p_0(TypeInfo_for_T_14, List0_5, &Samples_8);
{
#define MR_PROC_LABEL mercury__random__permutation_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Samples_8 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Len_9  = Max;
}
    mercury__random__perform_sampling_6_p_1(TypeInfo_for_T_14, Len_9, Samples_8, (MR_Word) ((MR_Unsigned) 0U), List_6, STATE_VARIABLE_RS_0_10, STATE_VARIABLE_RS_11);
  }
}

void MR_CALL 
mercury__random__perform_sampling_6_p_1(
  MR_Word TypeInfo_for_T_29,
  MR_Integer I_7,
  MR_ArrayPtr STATE_VARIABLE_Record_0_15,
  MR_Word STATE_VARIABLE_Order_0_16,
  MR_Word * STATE_VARIABLE_Order_17,
  MR_Word STATE_VARIABLE_RS_0_18,
  MR_Word * STATE_VARIABLE_RS_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_RS_19 = STATE_VARIABLE_RS_0_18;
      *STATE_VARIABLE_Order_17 = STATE_VARIABLE_Order_0_16;
    }
    else
    {
      MR_Integer I1_11 = (MR_Integer) ((MR_Unsigned) I_7 - (MR_Unsigned) 1);
      MR_Integer Index_12;
      MR_Box Next_13;
      MR_Box MaxImage_14;
      MR_Word STATE_VARIABLE_RS_23_23;
      MR_Word STATE_VARIABLE_Order_24_24;
      MR_ArrayPtr STATE_VARIABLE_Record_25_25;
      MR_ArrayPtr STATE_VARIABLE_Record_26_26;
      MR_Integer next_value_of_I_7;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Record_0_15;
      MR_Word next_value_of_STATE_VARIABLE_Order_0_16;
      MR_Word next_value_of_STATE_VARIABLE_RS_0_18;

      mercury__random__random_5_p_1((MR_Integer) 0, I_7, &Index_12, STATE_VARIABLE_RS_0_18, &STATE_VARIABLE_RS_23_23);
      mercury__array__lookup_3_p_0(TypeInfo_for_T_29, STATE_VARIABLE_Record_0_15, Index_12, &Next_13);
      mercury__array__lookup_3_p_0(TypeInfo_for_T_29, STATE_VARIABLE_Record_0_15, I1_11, &MaxImage_14);
      {
        STATE_VARIABLE_Order_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Order_24_24, 0) = Next_13;
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Order_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Order_0_16));
      }
      mercury__array__set_4_p_0(TypeInfo_for_T_29, Index_12, MaxImage_14, STATE_VARIABLE_Record_0_15, &STATE_VARIABLE_Record_25_25);
      mercury__array__set_4_p_0(TypeInfo_for_T_29, I1_11, Next_13, STATE_VARIABLE_Record_25_25, &STATE_VARIABLE_Record_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_I_7 = I1_11;
      next_value_of_STATE_VARIABLE_Record_0_15 = STATE_VARIABLE_Record_26_26;
      next_value_of_STATE_VARIABLE_Order_0_16 = STATE_VARIABLE_Order_24_24;
      next_value_of_STATE_VARIABLE_RS_0_18 = STATE_VARIABLE_RS_23_23;
      I_7 = next_value_of_I_7;
      STATE_VARIABLE_Record_0_15 = next_value_of_STATE_VARIABLE_Record_0_15;
      STATE_VARIABLE_Order_0_16 = next_value_of_STATE_VARIABLE_Order_0_16;
      STATE_VARIABLE_RS_0_18 = next_value_of_STATE_VARIABLE_RS_0_18;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__random__permutation_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word List0_5,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_RS_0_10,
  MR_Word * STATE_VARIABLE_RS_11)
{
  {
    MR_ArrayPtr Samples_8;
    MR_Integer Len_9;

    mercury__array__from_list_2_p_0(TypeInfo_for_T_14, List0_5, &Samples_8);
{
#define MR_PROC_LABEL mercury__random__permutation_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Samples_8 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Len_9  = Max;
}
    mercury__random__perform_sampling_6_p_0(TypeInfo_for_T_14, Len_9, Samples_8, (MR_Word) ((MR_Unsigned) 0U), List_6, STATE_VARIABLE_RS_0_10, STATE_VARIABLE_RS_11);
  }
}

void MR_CALL 
mercury__random__perform_sampling_6_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Integer I_7,
  MR_ArrayPtr STATE_VARIABLE_Record_0_15,
  MR_Word STATE_VARIABLE_Order_0_16,
  MR_Word * STATE_VARIABLE_Order_17,
  MR_Word STATE_VARIABLE_RS_0_18,
  MR_Word * STATE_VARIABLE_RS_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_7 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_RS_19 = STATE_VARIABLE_RS_0_18;
      *STATE_VARIABLE_Order_17 = STATE_VARIABLE_Order_0_16;
    }
    else
    {
      MR_Integer I1_11 = (MR_Integer) ((MR_Unsigned) I_7 - (MR_Unsigned) 1);
      MR_Integer Index_12;
      MR_Box Next_13;
      MR_Box MaxImage_14;
      MR_Word STATE_VARIABLE_RS_23_23;
      MR_Word STATE_VARIABLE_Order_24_24;
      MR_ArrayPtr STATE_VARIABLE_Record_25_25;
      MR_ArrayPtr STATE_VARIABLE_Record_26_26;
      MR_Integer next_value_of_I_7;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Record_0_15;
      MR_Word next_value_of_STATE_VARIABLE_Order_0_16;
      MR_Word next_value_of_STATE_VARIABLE_RS_0_18;

      mercury__random__random_5_p_0((MR_Integer) 0, I_7, &Index_12, STATE_VARIABLE_RS_0_18, &STATE_VARIABLE_RS_23_23);
      mercury__array__lookup_3_p_0(TypeInfo_for_T_29, STATE_VARIABLE_Record_0_15, Index_12, &Next_13);
      mercury__array__lookup_3_p_0(TypeInfo_for_T_29, STATE_VARIABLE_Record_0_15, I1_11, &MaxImage_14);
      {
        STATE_VARIABLE_Order_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Order_24_24, 0) = Next_13;
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Order_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Order_0_16));
      }
      mercury__array__set_4_p_0(TypeInfo_for_T_29, Index_12, MaxImage_14, STATE_VARIABLE_Record_0_15, &STATE_VARIABLE_Record_25_25);
      mercury__array__set_4_p_0(TypeInfo_for_T_29, I1_11, Next_13, STATE_VARIABLE_Record_25_25, &STATE_VARIABLE_Record_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_I_7 = I1_11;
      next_value_of_STATE_VARIABLE_Record_0_15 = STATE_VARIABLE_Record_26_26;
      next_value_of_STATE_VARIABLE_Order_0_16 = STATE_VARIABLE_Order_24_24;
      next_value_of_STATE_VARIABLE_RS_0_18 = STATE_VARIABLE_RS_23_23;
      I_7 = next_value_of_I_7;
      STATE_VARIABLE_Record_0_15 = next_value_of_STATE_VARIABLE_Record_0_15;
      STATE_VARIABLE_Order_0_16 = next_value_of_STATE_VARIABLE_Order_0_16;
      STATE_VARIABLE_RS_0_18 = next_value_of_STATE_VARIABLE_RS_0_18;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__random__randcount_3_p_1(
  MR_Integer * M_4,
  MR_Word RS_5,
  MR_Word * RS_3)
{
  {
    *RS_3 = RS_5;
    *M_4 = (MR_Integer) 233280;
  }
}

void MR_CALL 
mercury__random__randcount_3_p_0(
  MR_Integer * M_4,
  MR_Word RS_5,
  MR_Word * RS_3)
{
  {
    *RS_3 = RS_5;
    *M_4 = (MR_Integer) 233280;
  }
}

void MR_CALL 
mercury__random__randmax_3_p_1(
  MR_Integer * M1_4,
  MR_Word RS_5,
  MR_Word * RS_3)
{
  {
    *RS_3 = RS_5;
    *M1_4 = (MR_Integer) ((MR_Unsigned) 233280 - (MR_Unsigned) 1);
  }
}

void MR_CALL 
mercury__random__randmax_3_p_0(
  MR_Integer * M1_4,
  MR_Word RS_5,
  MR_Word * RS_3)
{
  {
    *RS_3 = RS_5;
    *M1_4 = (MR_Integer) ((MR_Unsigned) 233280 - (MR_Unsigned) 1);
  }
}

void MR_CALL 
mercury__random__random_5_p_1(
  MR_Integer Low_6,
  MR_Integer Range_7,
  MR_Integer * Num_8,
  MR_Word STATE_VARIABLE_RandomSupply_0_12,
  MR_Word * STATE_VARIABLE_RandomSupply_13)
{
  {
    MR_Integer R_10;
    MR_Integer Var_16;
    MR_Integer Var_17;

    mercury__random__random_3_p_1(&R_10, STATE_VARIABLE_RandomSupply_0_12, STATE_VARIABLE_RandomSupply_13);
    Var_17 = (MR_Integer) ((MR_Unsigned) Range_7 * (MR_Unsigned) R_10);
    Var_16 = (Var_17 / (MR_Integer) 233280);
    *Num_8 = (MR_Integer) ((MR_Unsigned) Low_6 + (MR_Unsigned) Var_16);
  }
}

void MR_CALL 
mercury__random__random_5_p_0(
  MR_Integer Low_6,
  MR_Integer Range_7,
  MR_Integer * Num_8,
  MR_Word STATE_VARIABLE_RandomSupply_0_12,
  MR_Word * STATE_VARIABLE_RandomSupply_13)
{
  {
    MR_Integer R_10;
    MR_Integer Var_16;
    MR_Integer Var_17;

    mercury__random__random_3_p_0(&R_10, STATE_VARIABLE_RandomSupply_0_12, STATE_VARIABLE_RandomSupply_13);
    Var_17 = (MR_Integer) ((MR_Unsigned) Range_7 * (MR_Unsigned) R_10);
    Var_16 = (Var_17 / (MR_Integer) 233280);
    *Num_8 = (MR_Integer) ((MR_Unsigned) Low_6 + (MR_Unsigned) Var_16);
  }
}

void MR_CALL 
mercury__random__random_3_p_1(
  MR_Integer * I_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Integer RS_6;
    MR_Integer I0_7 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Var_11;
    MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) I0_7 * (MR_Unsigned) 9301);
    MR_Integer V_6_17;
    MR_Integer V_7_18;
    MR_Box conv0_Copy;

    Var_11 = (MR_Integer) ((MR_Unsigned) Var_12 + (MR_Unsigned) 49297);
    V_7_18 = mercury__int__div_2_f_0(Var_11, (MR_Integer) 233280);
    V_6_17 = (MR_Integer) ((MR_Unsigned) V_7_18 * (MR_Unsigned) 233280);
    *I_4 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) V_6_17);
{
#define MR_PROC_LABEL mercury__random__random_3_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0) ;
	Value = (MR_Word) ((MR_Box) (*I_4)) ;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	 conv0_Copy  = (MR_Box) Copy;
    RS_6 = ((MR_Integer) (conv0_Copy));
}
    *HeadVar__3_3 = (MR_Word) (RS_6);
  }
}

void MR_CALL 
mercury__random__random_3_p_0(
  MR_Integer * I_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Integer RS_6;
    MR_Integer I0_7 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Var_11;
    MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) I0_7 * (MR_Unsigned) 9301);
    MR_Integer V_6_17;
    MR_Integer V_7_18;
    MR_Box conv0_Copy;

    Var_11 = (MR_Integer) ((MR_Unsigned) Var_12 + (MR_Unsigned) 49297);
    V_7_18 = mercury__int__div_2_f_0(Var_11, (MR_Integer) 233280);
    V_6_17 = (MR_Integer) ((MR_Unsigned) V_7_18 * (MR_Unsigned) 233280);
    *I_4 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) V_6_17);
{
#define MR_PROC_LABEL mercury__random__random_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0) ;
	Value = (MR_Word) ((MR_Box) (*I_4)) ;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	 conv0_Copy  = (MR_Box) Copy;
    RS_6 = ((MR_Integer) (conv0_Copy));
}
    *HeadVar__3_3 = (MR_Word) (RS_6);
  }
}

void MR_CALL 
mercury__random__init_2_p_0(
  MR_Integer I0_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Integer RS_4;
    MR_Box conv0_Copy;

{
#define MR_PROC_LABEL mercury__random__init_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0) ;
	Value = (MR_Word) ((MR_Box) (I0_3)) ;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	 conv0_Copy  = (MR_Box) Copy;
    RS_4 = ((MR_Integer) (conv0_Copy));
}
    *HeadVar__2_2 = (MR_Word) (RS_4);
  }
}

void MR_CALL 
mercury__random__make_io_urandom_5_p_0(
  MR_Word TypeClassInfo_for_urandom_13,
  MR_Box P_6,
  MR_Box S_7,
  MR_Word * Pio_8)
{
  {
    MR_Word TypeInfo_15_15;
    MR_Word V_10;

{
#define MR_PROC_LABEL mercury__random__make_io_urandom_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_urandom_13 ;
	Index =  (MR_Integer) 2 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_15_15  = TypeInfo;
}
    mercury__mutvar__new_mutvar_2_p_1(TypeInfo_15_15, S_7, &V_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Pio_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = P_6;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (V_10));
    }
  }
}

void MR_CALL 
mercury__random__make_io_random_4_p_0(
  MR_Word TypeClassInfo_for_random_11,
  MR_Box R_5,
  MR_Word * Pio_6)
{
  {
    MR_Word TypeInfo_13_13;
    MR_Word V_8;

{
#define MR_PROC_LABEL mercury__random__make_io_random_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_random_11 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_13_13  = TypeInfo;
}
    mercury__mutvar__new_mutvar_2_p_0(TypeInfo_13_13, R_5, &V_8);
    *Pio_6 = (MR_Word) (V_8);
  }
}

MR_Word MR_CALL 
mercury__random__make_shared_random_2_f_0(
  MR_Word TypeInfo_for_P_6,
  MR_Word TypeInfo_for_S_7,
  MR_Box P_4,
  MR_Box S_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = P_4;
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = S_5;
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__random__make_urandom_3_p_0(
  MR_Word TypeInfo_for_R_8,
  MR_Box R_4,
  MR_Word * S_6)
{
  {
    MR_Word Var_7;

    Var_7 = ((MR_Word) (R_4));
    *S_6 = Var_7;
  }
}

void MR_CALL 
mercury__random__shuffle_array_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_urandom_17,
  MR_Box P_6,
  MR_ArrayPtr A0_7,
  MR_ArrayPtr * A_8,
  MR_Box STATE_VARIABLE_S_0_13,
  MR_Box * STATE_VARIABLE_S_14)
{
  {
    MR_Integer Lo_10;
    MR_Integer Hi_11;
    MR_Integer Sz_12;

{
#define MR_PROC_LABEL mercury__random__shuffle_array_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) (A0_7) , Array);
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Lo_10  = Min;
}
{
#define MR_PROC_LABEL mercury__random__shuffle_array_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) (A0_7) , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Hi_11  = Max;
}
{
#define MR_PROC_LABEL mercury__random__shuffle_array_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) (A0_7) , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Sz_12  = Max;
}
    mercury__random__shuffle_2_9_p_0(TypeInfo_for_T_18, TypeClassInfo_for_urandom_17, P_6, Lo_10, Lo_10, Hi_11, Sz_12, A0_7, A_8, STATE_VARIABLE_S_0_13, STATE_VARIABLE_S_14);
  }
}

void MR_CALL 
mercury__random__shuffle_list_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_urandom_15,
  MR_Box P_6,
  MR_Word L0_7,
  MR_Word * L_8,
  MR_Box STATE_VARIABLE_S_0_12,
  MR_Box * STATE_VARIABLE_S_13)
{
  {
    MR_ArrayPtr A0_10;
    MR_ArrayPtr A_11;
    MR_Integer Lo_25;
    MR_Integer Hi_26;
    MR_Integer Sz_27;
    MR_ArrayPtr conv0_A0_10;

    mercury__array__from_list_2_p_0(TypeInfo_for_T_16, L0_7, &conv0_A0_10);
    A0_10 = (MR_ArrayPtr) (conv0_A0_10);
{
#define MR_PROC_LABEL mercury__random__shuffle_list_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) (A0_10) , Array);
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Lo_25  = Min;
}
{
#define MR_PROC_LABEL mercury__random__shuffle_list_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) (A0_10) , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Hi_26  = Max;
}
{
#define MR_PROC_LABEL mercury__random__shuffle_list_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) (A0_10) , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Sz_27  = Max;
}
    mercury__random__shuffle_2_9_p_0(TypeInfo_for_T_16, TypeClassInfo_for_urandom_15, P_6, Lo_25, Lo_25, Hi_26, Sz_27, A0_10, &A_11, STATE_VARIABLE_S_0_12, STATE_VARIABLE_S_13);
    mercury__array__to_list_2_p_0(TypeInfo_for_T_16, (MR_ArrayPtr) (A_11), L_8);
  }
}

void MR_CALL 
mercury__random__shuffle_2_9_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeClassInfo_for_urandom_28,
  MR_Box P_10,
  MR_Integer I_11,
  MR_Integer Lo_12,
  MR_Integer Hi_13,
  MR_Integer Sz_14,
  MR_ArrayPtr STATE_VARIABLE_A_0_18,
  MR_ArrayPtr * STATE_VARIABLE_A_19,
  MR_Box STATE_VARIABLE_S_0_20,
  MR_Box * STATE_VARIABLE_S_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 > Hi_13);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_S_21 = STATE_VARIABLE_S_0_20;
      *STATE_VARIABLE_A_19 = STATE_VARIABLE_A_0_18;
    }
    else
    {
      MR_Integer J_17;
      MR_Box STATE_VARIABLE_S_22_22;
      MR_ArrayPtr STATE_VARIABLE_A_23_23;
      MR_Integer Var_24;
      MR_Box V_8_34;
      MR_Box V_9_35;
      MR_ArrayPtr V_12_36;
      MR_ArrayPtr conv0_Array;
      MR_ArrayPtr conv1_Array;
      MR_Integer next_value_of_I_11;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_A_0_18;
      MR_Box next_value_of_STATE_VARIABLE_S_0_20;

      mercury__random__uniform_int_in_range_6_p_0(TypeClassInfo_for_urandom_28, P_10, Lo_12, Sz_14, &J_17, STATE_VARIABLE_S_0_20, &STATE_VARIABLE_S_22_22);
{
#define MR_PROC_LABEL mercury__random__shuffle_2_9_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) (STATE_VARIABLE_A_0_18) , Array);
	Index =  I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 V_8_34  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__random__shuffle_2_9_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) (STATE_VARIABLE_A_0_18) , Array);
	Index =  J_17 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 V_9_35  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__random__shuffle_2_9_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  I_11 ;
	Item = (MR_Word) V_9_35 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) (STATE_VARIABLE_A_0_18) , Array0);
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, conv0_Array );
      V_12_36 = (MR_ArrayPtr) (conv0_Array);
}
{
#define MR_PROC_LABEL mercury__random__shuffle_2_9_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  J_17 ;
	Item = (MR_Word) V_8_34 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) (V_12_36) , Array0);
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, conv1_Array );
      STATE_VARIABLE_A_23_23 = (MR_ArrayPtr) (conv1_Array);
}
      Var_24 = (MR_Integer) ((MR_Unsigned) I_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_11 = Var_24;
      next_value_of_STATE_VARIABLE_A_0_18 = STATE_VARIABLE_A_23_23;
      next_value_of_STATE_VARIABLE_S_0_20 = STATE_VARIABLE_S_22_22;
      I_11 = next_value_of_I_11;
      STATE_VARIABLE_A_0_18 = next_value_of_STATE_VARIABLE_A_0_18;
      STATE_VARIABLE_S_0_20 = next_value_of_STATE_VARIABLE_S_0_20;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__random__normal_floats_7_p_0(
  MR_Word TypeClassInfo_for_urandom_21,
  MR_Box P_8,
  MR_Float M_9,
  MR_Float SD_10,
  MR_Float * U_11,
  MR_Float * V_12,
  MR_Box STATE_VARIABLE_S_0_16,
  MR_Box * STATE_VARIABLE_S_17)
{
  {
    MR_Float U0_14;
    MR_Float V0_15;
    MR_Float Var_19;
    MR_Float Var_20;

    mercury__random__normal_floats_5_p_0(TypeClassInfo_for_urandom_21, P_8, &U0_14, &V0_15, STATE_VARIABLE_S_0_16, STATE_VARIABLE_S_17);
    Var_19 = (SD_10 * U0_14);
    *U_11 = (M_9 + Var_19);
    Var_20 = (SD_10 * V0_15);
    *V_12 = (M_9 + Var_20);
  }
}

void MR_CALL 
mercury__random__normal_floats_5_p_0(
  MR_Word TypeClassInfo_for_urandom_23,
  MR_Box P_6,
  MR_Float * U_7,
  MR_Float * V_8,
  MR_Box STATE_VARIABLE_S_0_14,
  MR_Box * STATE_VARIABLE_S_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Float X_10;
    MR_Float Y_11;
    MR_Box STATE_VARIABLE_S_18_18;
    MR_Box STATE_VARIABLE_S_21_21;
    MR_Float N0_31;
    MR_Float Var_33;
    MR_Float N0_41;
    MR_Float Var_43;
    MR_Float U0_12;
    MR_Float V0_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__random__uniform_float_in_01_4_p_0(TypeClassInfo_for_urandom_23, P_6, &N0_31, STATE_VARIABLE_S_0_14, &STATE_VARIABLE_S_18_18);
    Var_33 = (N0_31 * ((MR_Float) 2.0000000000000000));
    X_10 = (((MR_Float) -1.0000000000000000) + Var_33);
    mercury__random__uniform_float_in_01_4_p_0(TypeClassInfo_for_urandom_23, P_6, &N0_41, STATE_VARIABLE_S_18_18, &STATE_VARIABLE_S_21_21);
    Var_43 = (N0_41 * ((MR_Float) 2.0000000000000000));
    Y_11 = (((MR_Float) -1.0000000000000000) + Var_43);
    succeeded = mercury__random__uniform_to_normal_4_p_0(X_10, Y_11, &U0_12, &V0_13);
    if (succeeded)
    {
      *U_7 = U0_12;
      *V_8 = V0_13;
      *STATE_VARIABLE_S_15 = STATE_VARIABLE_S_21_21;
    }
    else
    {
      MR_Box next_value_of_STATE_VARIABLE_S_0_14 = STATE_VARIABLE_S_21_21;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_S_0_14 = next_value_of_STATE_VARIABLE_S_0_14;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__random__uniform_float_around_mid_6_p_0(
  MR_Word TypeClassInfo_for_urandom_22,
  MR_Box P_7,
  MR_Float Mid_8,
  MR_Float Delta_9,
  MR_Float * N_10,
  MR_Box STATE_VARIABLE_S_0_13,
  MR_Box * STATE_VARIABLE_S_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Float N0_12;
    MR_Box STATE_VARIABLE_S_15_15;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__random__uniform_float_in_01_4_p_0(TypeClassInfo_for_urandom_22, P_7, &N0_12, STATE_VARIABLE_S_0_13, &STATE_VARIABLE_S_15_15);
    succeeded = (N0_12 == ((MR_Float) 0.0000000000000000));
    if (succeeded)
    {
      MR_Box next_value_of_STATE_VARIABLE_S_0_13 = STATE_VARIABLE_S_15_15;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_S_0_13 = next_value_of_STATE_VARIABLE_S_0_13;
      continue;
    }
    else
    {
      MR_Float Var_17;
      MR_Float Var_18;
      MR_Float Var_19 = (((MR_Float) 2.0000000000000000) * N0_12);

      Var_18 = (Var_19 - ((MR_Float) 1.0000000000000000));
      Var_17 = (Delta_9 * Var_18);
      *N_10 = (Mid_8 + Var_17);
      *STATE_VARIABLE_S_14 = STATE_VARIABLE_S_15_15;
    }
    break;
  }
}

void MR_CALL 
mercury__random__uniform_float_in_range_6_p_0(
  MR_Word TypeClassInfo_for_urandom_17,
  MR_Box P_7,
  MR_Float Start_8,
  MR_Float Range_9,
  MR_Float * N_10,
  MR_Box STATE_VARIABLE_S_0_13,
  MR_Box * STATE_VARIABLE_S_14)
{
  {
    MR_Float N0_12;
    MR_Float Var_16;

    mercury__random__uniform_float_in_01_4_p_0(TypeClassInfo_for_urandom_17, P_7, &N0_12, STATE_VARIABLE_S_0_13, STATE_VARIABLE_S_14);
    Var_16 = (N0_12 * Range_9);
    *N_10 = (Start_8 + Var_16);
  }
}

void MR_CALL 
mercury__random__uniform_float_in_01_4_p_0(
  MR_Word TypeClassInfo_for_urandom_14,
  MR_Box P_5,
  MR_Float * N_6,
  MR_Box STATE_VARIABLE_S_0_10,
  MR_Box * STATE_VARIABLE_S_11)
{
  {
    uint64_t N0_8;
    MR_Float Var_13;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_14, (MR_Integer) 0)), (MR_Integer) 8))));
    MR_Box conv1_N0_8;

    func_0(((MR_Box) (TypeClassInfo_for_urandom_14)), P_5, &conv1_N0_8, STATE_VARIABLE_S_0_10, STATE_VARIABLE_S_11);
    N0_8 = MR_unbox_uint64(conv1_N0_8);
{
#define MR_PROC_LABEL mercury__random__uniform_float_in_01_4_p_0

	uint64_t UInt64Val;
	MR_Float FloatVal;

	UInt64Val =  N0_8 ;
		{

    FloatVal = UInt64Val;


		;}
#undef MR_PROC_LABEL
	 Var_13  = FloatVal;
}
    *N_6 = (Var_13 / ((MR_Float) 1.8446744073709552e+19));
  }
}

void MR_CALL 
mercury__random__uniform_uint_in_range_6_p_0(
  MR_Word TypeClassInfo_for_urandom_22,
  MR_Box P_7,
  MR_Unsigned Start_8,
  MR_Unsigned Range0_9,
  MR_Unsigned * N_10,
  MR_Box STATE_VARIABLE_S_0_16,
  MR_Box * STATE_VARIABLE_S_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    uint32_t Range_12;
    uint32_t N0_14;
    uint32_t N1_15;
    MR_Box STATE_VARIABLE_S_18_18;
    uint32_t Var_19;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv1_N0_14;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__random__uniform_uint_in_range_6_p_0

	MR_Unsigned U;
	uint32_t U32;

	U =  Range0_9 ;
		{

    U32 = (uint32_t) U;


		;}
#undef MR_PROC_LABEL
	 Range_12  = U32;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_22, (MR_Integer) 0)), (MR_Integer) 7))));
    func_0(((MR_Box) (TypeClassInfo_for_urandom_22)), P_7, &conv1_N0_14, STATE_VARIABLE_S_0_16, &STATE_VARIABLE_S_18_18);
    N0_14 = ((uint32_t) (MR_Word) conv1_N0_14);
    succeeded = (Range_12 == UINT32_C(0));
    if (succeeded)
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.\'//\': division by zero")))));
        return;
      }
    else
      Var_19 = (UINT32_C(4294967295) / Range_12);
    succeeded = (Var_19 == UINT32_C(0));
    if (succeeded)
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.\'//\': division by zero")))));
        return;
      }
    else
      N1_15 = (N0_14 / Var_19);
    succeeded = (N1_15 < Range_12);
    if (succeeded)
    {
      MR_Unsigned Var_20;

{
#define MR_PROC_LABEL mercury__random__uniform_uint_in_range_6_p_0

	uint32_t U32;
	MR_Unsigned U;

	U32 =  N1_15 ;
		{

    U = (MR_Unsigned) U32;


		;}
#undef MR_PROC_LABEL
	 Var_20  = U;
}
      *N_10 = (Start_8 + Var_20);
      *STATE_VARIABLE_S_17 = STATE_VARIABLE_S_18_18;
    }
    else
    {
      MR_Box next_value_of_STATE_VARIABLE_S_0_16 = STATE_VARIABLE_S_18_18;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_S_0_16 = next_value_of_STATE_VARIABLE_S_0_16;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__random__uniform_int_in_range_6_p_0(
  MR_Word TypeClassInfo_for_urandom_22,
  MR_Box P_7,
  MR_Integer Start_8,
  MR_Integer Range0_9,
  MR_Integer * N_10,
  MR_Box STATE_VARIABLE_S_0_16,
  MR_Box * STATE_VARIABLE_S_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    uint32_t Range_12;
    uint32_t N0_14;
    uint32_t N1_15;
    MR_Box STATE_VARIABLE_S_18_18;
    uint32_t Var_19;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv1_N0_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    Range_12 = mercury__uint32__det_from_int_1_f_0(Range0_9);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_urandom_22, (MR_Integer) 0)), (MR_Integer) 7))));
    func_0(((MR_Box) (TypeClassInfo_for_urandom_22)), P_7, &conv1_N0_14, STATE_VARIABLE_S_0_16, &STATE_VARIABLE_S_18_18);
    N0_14 = ((uint32_t) (MR_Word) conv1_N0_14);
    succeeded = (Range_12 == UINT32_C(0));
    if (succeeded)
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.\'//\': division by zero")))));
        return;
      }
    else
      Var_19 = (UINT32_C(4294967295) / Range_12);
    succeeded = (Var_19 == UINT32_C(0));
    if (succeeded)
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.\'//\': division by zero")))));
        return;
      }
    else
      N1_15 = (N0_14 / Var_19);
    succeeded = (N1_15 < Range_12);
    if (succeeded)
    {
      MR_Integer Var_20;

{
#define MR_PROC_LABEL mercury__random__uniform_int_in_range_6_p_0

	uint32_t U32;
	MR_Integer I;

	U32 =  N1_15 ;
		{

    I = (MR_Integer) U32;


		;}
#undef MR_PROC_LABEL
	 Var_20  = I;
}
      *N_10 = (MR_Integer) ((MR_Unsigned) Start_8 + (MR_Unsigned) Var_20);
      *STATE_VARIABLE_S_17 = STATE_VARIABLE_S_18_18;
    }
    else
    {
      MR_Box next_value_of_STATE_VARIABLE_S_0_16 = STATE_VARIABLE_S_18_18;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_S_0_16 = next_value_of_STATE_VARIABLE_S_0_16;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__random__shuffle_array_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_random_15,
  MR_ArrayPtr A0_5,
  MR_ArrayPtr * A_6,
  MR_Box STATE_VARIABLE_R_0_11,
  MR_Box * STATE_VARIABLE_R_12)
{
  {
    MR_Integer Lo_8;
    MR_Integer Hi_9;
    MR_Integer Sz_10;

{
#define MR_PROC_LABEL mercury__random__shuffle_array_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, A0_5 , Array);
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Lo_8  = Min;
}
{
#define MR_PROC_LABEL mercury__random__shuffle_array_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, A0_5 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Hi_9  = Max;
}
{
#define MR_PROC_LABEL mercury__random__shuffle_array_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, A0_5 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Sz_10  = Max;
}
    mercury__random__shuffle_2_8_p_0(TypeInfo_for_T_16, TypeClassInfo_for_random_15, Lo_8, Lo_8, Hi_9, Sz_10, A0_5, A_6, STATE_VARIABLE_R_0_11, STATE_VARIABLE_R_12);
  }
}

void MR_CALL 
mercury__random__shuffle_list_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_random_13,
  MR_Word L0_5,
  MR_Word * L_6,
  MR_Box STATE_VARIABLE_R_0_10,
  MR_Box * STATE_VARIABLE_R_11)
{
  {
    MR_ArrayPtr A0_8;
    MR_ArrayPtr A_9;
    MR_Integer Lo_22;
    MR_Integer Hi_23;
    MR_Integer Sz_24;

    mercury__array__from_list_2_p_0(TypeInfo_for_T_14, L0_5, &A0_8);
{
#define MR_PROC_LABEL mercury__random__shuffle_list_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, A0_8 , Array);
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Lo_22  = Min;
}
{
#define MR_PROC_LABEL mercury__random__shuffle_list_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, A0_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Hi_23  = Max;
}
{
#define MR_PROC_LABEL mercury__random__shuffle_list_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, A0_8 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Sz_24  = Max;
}
    mercury__random__shuffle_2_8_p_0(TypeInfo_for_T_14, TypeClassInfo_for_random_13, Lo_22, Lo_22, Hi_23, Sz_24, A0_8, &A_9, STATE_VARIABLE_R_0_10, STATE_VARIABLE_R_11);
    mercury__array__to_list_2_p_0(TypeInfo_for_T_14, A_9, L_6);
  }
}

void MR_CALL 
mercury__random__shuffle_2_8_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_random_26,
  MR_Integer I_9,
  MR_Integer Lo_10,
  MR_Integer Hi_11,
  MR_Integer Sz_12,
  MR_ArrayPtr STATE_VARIABLE_A_0_16,
  MR_ArrayPtr * STATE_VARIABLE_A_17,
  MR_Box STATE_VARIABLE_R_0_18,
  MR_Box * STATE_VARIABLE_R_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 > Hi_11);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_R_19 = STATE_VARIABLE_R_0_18;
      *STATE_VARIABLE_A_17 = STATE_VARIABLE_A_0_16;
    }
    else
    {
      MR_Integer J_15;
      MR_Box STATE_VARIABLE_R_20_20;
      MR_ArrayPtr STATE_VARIABLE_A_21_21;
      MR_Integer Var_22;
      MR_Box V_8_32;
      MR_Box V_9_33;
      MR_ArrayPtr V_12_34;
      MR_Integer next_value_of_I_9;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_A_0_16;
      MR_Box next_value_of_STATE_VARIABLE_R_0_18;

      mercury__random__uniform_int_in_range_5_p_0(TypeClassInfo_for_random_26, Lo_10, Sz_12, &J_15, STATE_VARIABLE_R_0_18, &STATE_VARIABLE_R_20_20);
{
#define MR_PROC_LABEL mercury__random__shuffle_2_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, STATE_VARIABLE_A_0_16 , Array);
	Index =  I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 V_8_32  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__random__shuffle_2_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, STATE_VARIABLE_A_0_16 , Array);
	Index =  J_15 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 V_9_33  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__random__shuffle_2_8_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  I_9 ;
	Item = (MR_Word) V_9_33 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, STATE_VARIABLE_A_0_16 , Array0);
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, V_12_34 );
}
{
#define MR_PROC_LABEL mercury__random__shuffle_2_8_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  J_15 ;
	Item = (MR_Word) V_8_32 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, V_12_34 , Array0);
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, STATE_VARIABLE_A_21_21 );
}
      Var_22 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = Var_22;
      next_value_of_STATE_VARIABLE_A_0_16 = STATE_VARIABLE_A_21_21;
      next_value_of_STATE_VARIABLE_R_0_18 = STATE_VARIABLE_R_20_20;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_A_0_16 = next_value_of_STATE_VARIABLE_A_0_16;
      STATE_VARIABLE_R_0_18 = next_value_of_STATE_VARIABLE_R_0_18;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__random__normal_floats_6_p_0(
  MR_Word TypeClassInfo_for_random_19,
  MR_Float M_7,
  MR_Float SD_8,
  MR_Float * U_9,
  MR_Float * V_10,
  MR_Box STATE_VARIABLE_R_0_14,
  MR_Box * STATE_VARIABLE_R_15)
{
  {
    MR_Float U0_12;
    MR_Float V0_13;
    MR_Float Var_17;
    MR_Float Var_18;

    mercury__random__normal_floats_4_p_0(TypeClassInfo_for_random_19, &U0_12, &V0_13, STATE_VARIABLE_R_0_14, STATE_VARIABLE_R_15);
    Var_17 = (SD_8 * U0_12);
    *U_9 = (M_7 + Var_17);
    Var_18 = (SD_8 * V0_13);
    *V_10 = (M_7 + Var_18);
  }
}

void MR_CALL 
mercury__random__normal_floats_4_p_0(
  MR_Word TypeClassInfo_for_random_21,
  MR_Float * U_5,
  MR_Float * V_6,
  MR_Box STATE_VARIABLE_R_0_12,
  MR_Box * STATE_VARIABLE_R_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Float X_8;
    MR_Float Y_9;
    MR_Box STATE_VARIABLE_R_16_16;
    MR_Box STATE_VARIABLE_R_19_19;
    MR_Float N0_28;
    MR_Float Var_30;
    MR_Float N0_37;
    MR_Float Var_39;
    MR_Float U0_10;
    MR_Float V0_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__random__uniform_float_in_01_3_p_0(TypeClassInfo_for_random_21, &N0_28, STATE_VARIABLE_R_0_12, &STATE_VARIABLE_R_16_16);
    Var_30 = (N0_28 * ((MR_Float) 2.0000000000000000));
    X_8 = (((MR_Float) -1.0000000000000000) + Var_30);
    mercury__random__uniform_float_in_01_3_p_0(TypeClassInfo_for_random_21, &N0_37, STATE_VARIABLE_R_16_16, &STATE_VARIABLE_R_19_19);
    Var_39 = (N0_37 * ((MR_Float) 2.0000000000000000));
    Y_9 = (((MR_Float) -1.0000000000000000) + Var_39);
    succeeded = mercury__random__uniform_to_normal_4_p_0(X_8, Y_9, &U0_10, &V0_11);
    if (succeeded)
    {
      *U_5 = U0_10;
      *V_6 = V0_11;
      *STATE_VARIABLE_R_13 = STATE_VARIABLE_R_19_19;
    }
    else
    {
      MR_Box next_value_of_STATE_VARIABLE_R_0_12 = STATE_VARIABLE_R_19_19;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_R_0_12 = next_value_of_STATE_VARIABLE_R_0_12;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__random__uniform_to_normal_4_p_0(
  MR_Float X_5,
  MR_Float Y_6,
  MR_Float * U_7,
  MR_Float * V_8)
{
  {
    MR_bool succeeded;
    MR_Float S_9;
    MR_Float Fac_10;
    MR_Float Var_11 = (X_5 * X_5);
    MR_Float Var_13 = (Y_6 * Y_6);
    MR_Float Var_16;
    MR_Float Var_17;
    MR_Float Var_18;
    MR_Float Var_19;
    MR_Float Var_20;

    S_9 = (Var_11 + Var_13);
    succeeded = (S_9 > ((MR_Float) 0.0000000000000000));
    if (succeeded)
    {
      Var_16 = (MR_Float) 1.0000000000000000;
      succeeded = (S_9 < Var_16);
      if (succeeded)
      {
        Var_19 = (MR_Float) -2.0000000000000000;
        Var_20 = mercury__math__ln_1_f_0(S_9);
        Var_18 = (Var_19 * Var_20);
{
#define MR_PROC_LABEL mercury__random__uniform_to_normal_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          succeeded = (S_9 == ((MR_Float) 0.0000000000000000));
        if (succeeded)
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "float.\'/\': division by zero")))));
        else
          Var_17 = (Var_18 / S_9);
        Fac_10 = mercury__math__sqrt_1_f_0(Var_17);
        *U_7 = (X_5 * Fac_10);
        *V_8 = (Y_6 * Fac_10);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__random__uniform_float_around_mid_5_p_0(
  MR_Word TypeClassInfo_for_random_20,
  MR_Float Mid_6,
  MR_Float Delta_7,
  MR_Float * N_8,
  MR_Box STATE_VARIABLE_R_0_11,
  MR_Box * STATE_VARIABLE_R_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Float N0_10;
    MR_Box STATE_VARIABLE_R_13_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__random__uniform_float_in_01_3_p_0(TypeClassInfo_for_random_20, &N0_10, STATE_VARIABLE_R_0_11, &STATE_VARIABLE_R_13_13);
    succeeded = (N0_10 == ((MR_Float) 0.0000000000000000));
    if (succeeded)
    {
      MR_Box next_value_of_STATE_VARIABLE_R_0_11 = STATE_VARIABLE_R_13_13;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_R_0_11 = next_value_of_STATE_VARIABLE_R_0_11;
      continue;
    }
    else
    {
      MR_Float Var_15;
      MR_Float Var_16;
      MR_Float Var_17 = (((MR_Float) 2.0000000000000000) * N0_10);

      Var_16 = (Var_17 - ((MR_Float) 1.0000000000000000));
      Var_15 = (Delta_7 * Var_16);
      *N_8 = (Mid_6 + Var_15);
      *STATE_VARIABLE_R_12 = STATE_VARIABLE_R_13_13;
    }
    break;
  }
}

void MR_CALL 
mercury__random__uniform_float_in_range_5_p_0(
  MR_Word TypeClassInfo_for_random_15,
  MR_Float Start_6,
  MR_Float Range_7,
  MR_Float * N_8,
  MR_Box STATE_VARIABLE_R_0_11,
  MR_Box * STATE_VARIABLE_R_12)
{
  {
    MR_Float N0_10;
    MR_Float Var_14;

    mercury__random__uniform_float_in_01_3_p_0(TypeClassInfo_for_random_15, &N0_10, STATE_VARIABLE_R_0_11, STATE_VARIABLE_R_12);
    Var_14 = (N0_10 * Range_7);
    *N_8 = (Start_6 + Var_14);
  }
}

void MR_CALL 
mercury__random__uniform_float_in_01_3_p_0(
  MR_Word TypeClassInfo_for_random_12,
  MR_Float * N_4,
  MR_Box STATE_VARIABLE_R_0_8,
  MR_Box * STATE_VARIABLE_R_9)
{
  {
    uint64_t N0_6;
    MR_Float Var_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_12, (MR_Integer) 0)), (MR_Integer) 8))));
    MR_Box conv1_N0_6;

    func_0(((MR_Box) (TypeClassInfo_for_random_12)), &conv1_N0_6, STATE_VARIABLE_R_0_8, STATE_VARIABLE_R_9);
    N0_6 = MR_unbox_uint64(conv1_N0_6);
{
#define MR_PROC_LABEL mercury__random__uniform_float_in_01_3_p_0

	uint64_t UInt64Val;
	MR_Float FloatVal;

	UInt64Val =  N0_6 ;
		{

    FloatVal = UInt64Val;


		;}
#undef MR_PROC_LABEL
	 Var_11  = FloatVal;
}
    *N_4 = (Var_11 / ((MR_Float) 1.8446744073709552e+19));
  }
}

void MR_CALL 
mercury__random__uniform_uint_in_range_5_p_0(
  MR_Word TypeClassInfo_for_random_20,
  MR_Unsigned Start_6,
  MR_Unsigned Range0_7,
  MR_Unsigned * N_8,
  MR_Box STATE_VARIABLE_R_0_14,
  MR_Box * STATE_VARIABLE_R_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    uint32_t Range_10;
    uint32_t N0_12;
    uint32_t N1_13;
    MR_Box STATE_VARIABLE_R_16_16;
    uint32_t Var_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv1_N0_12;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__random__uniform_uint_in_range_5_p_0

	MR_Unsigned U;
	uint32_t U32;

	U =  Range0_7 ;
		{

    U32 = (uint32_t) U;


		;}
#undef MR_PROC_LABEL
	 Range_10  = U32;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_20, (MR_Integer) 0)), (MR_Integer) 7))));
    func_0(((MR_Box) (TypeClassInfo_for_random_20)), &conv1_N0_12, STATE_VARIABLE_R_0_14, &STATE_VARIABLE_R_16_16);
    N0_12 = ((uint32_t) (MR_Word) conv1_N0_12);
    succeeded = (Range_10 == UINT32_C(0));
    if (succeeded)
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.\'//\': division by zero")))));
        return;
      }
    else
      Var_17 = (UINT32_C(4294967295) / Range_10);
    succeeded = (Var_17 == UINT32_C(0));
    if (succeeded)
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.\'//\': division by zero")))));
        return;
      }
    else
      N1_13 = (N0_12 / Var_17);
    succeeded = (N1_13 < Range_10);
    if (succeeded)
    {
      MR_Unsigned Var_18;

{
#define MR_PROC_LABEL mercury__random__uniform_uint_in_range_5_p_0

	uint32_t U32;
	MR_Unsigned U;

	U32 =  N1_13 ;
		{

    U = (MR_Unsigned) U32;


		;}
#undef MR_PROC_LABEL
	 Var_18  = U;
}
      *N_8 = (Start_6 + Var_18);
      *STATE_VARIABLE_R_15 = STATE_VARIABLE_R_16_16;
    }
    else
    {
      MR_Box next_value_of_STATE_VARIABLE_R_0_14 = STATE_VARIABLE_R_16_16;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_R_0_14 = next_value_of_STATE_VARIABLE_R_0_14;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__random__uniform_int_in_range_5_p_0(
  MR_Word TypeClassInfo_for_random_20,
  MR_Integer Start_6,
  MR_Integer Range0_7,
  MR_Integer * N_8,
  MR_Box STATE_VARIABLE_R_0_14,
  MR_Box * STATE_VARIABLE_R_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    uint32_t Range_10;
    uint32_t N0_12;
    uint32_t N1_13;
    MR_Box STATE_VARIABLE_R_16_16;
    uint32_t Var_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv1_N0_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    Range_10 = mercury__uint32__det_from_int_1_f_0(Range0_7);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_random_20, (MR_Integer) 0)), (MR_Integer) 7))));
    func_0(((MR_Box) (TypeClassInfo_for_random_20)), &conv1_N0_12, STATE_VARIABLE_R_0_14, &STATE_VARIABLE_R_16_16);
    N0_12 = ((uint32_t) (MR_Word) conv1_N0_12);
    succeeded = (Range_10 == UINT32_C(0));
    if (succeeded)
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.\'//\': division by zero")))));
        return;
      }
    else
      Var_17 = (UINT32_C(4294967295) / Range_10);
    succeeded = (Var_17 == UINT32_C(0));
    if (succeeded)
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.\'//\': division by zero")))));
        return;
      }
    else
      N1_13 = (N0_12 / Var_17);
    succeeded = (N1_13 < Range_10);
    if (succeeded)
    {
      MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__random__uniform_int_in_range_5_p_0

	uint32_t U32;
	MR_Integer I;

	U32 =  N1_13 ;
		{

    I = (MR_Integer) U32;


		;}
#undef MR_PROC_LABEL
	 Var_18  = I;
}
      *N_8 = (MR_Integer) ((MR_Unsigned) Start_6 + (MR_Unsigned) Var_18);
      *STATE_VARIABLE_R_15 = STATE_VARIABLE_R_16_16;
    }
    else
    {
      MR_Box next_value_of_STATE_VARIABLE_R_0_14 = STATE_VARIABLE_R_16_16;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_R_0_14 = next_value_of_STATE_VARIABLE_R_0_14;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__random____Unify____io_random_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__random____Unify____io_random_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__random____Compare____io_random_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__random____Compare____io_random_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__random____Unify____io_urandom_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__random____Unify____io_urandom_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__random____Compare____io_urandom_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__random____Compare____io_urandom_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__random____Unify____shared_random_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__random____Unify____shared_random_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__random____Compare____shared_random_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__random____Compare____shared_random_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__random____Unify____supply_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__random____Unify____supply_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__random____Compare____supply_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__random____Compare____supply_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__random____Unify____urandom_params_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__random____Unify____urandom_params_1_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__random____Compare____urandom_params_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__random____Compare____urandom_params_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__random____Unify____urandom_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__random____Unify____urandom_state_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__random____Compare____urandom_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__random____Compare____urandom_state_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom_dup____random__urandom_state__arity1______random__urandom_dup_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_S1_6;
    MR_Word conv0_S2_7;

    mercury__random__ClassMethod_for_random__urandom_dup____random__urandom_state__arity1______random__urandom_dup_3_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), &conv1_S1_6, &conv0_S2_7);
    *wrapper_arg_2 = ((MR_Box) (conv1_S1_6));
    *wrapper_arg_3 = ((MR_Box) (conv0_S2_7));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint8_t conv0_HeadVar__2_2;

    mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint8_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint16_t conv0_HeadVar__2_2;

    mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint16_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint32_t conv0_HeadVar__2_2;

    mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint32_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint64_t conv0_HeadVar__2_2;

    mercury__random__ClassMethod_for_random__urandom____random__io_urandom__arity2__io__state__arity0______random__generate_uint64_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = MR_box_uint64(conv0_HeadVar__2_2);
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint8_t conv0_HeadVar__2_2;

    mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint8_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint16_t conv0_HeadVar__2_2;

    mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint16_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint32_t conv0_HeadVar__2_2;

    mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint32_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint64_t conv0_HeadVar__2_2;

    mercury__random__ClassMethod_for_random__urandom____random__io_random__arity1__io__state__arity0______random__generate_uint64_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = MR_box_uint64(conv0_HeadVar__2_2);
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint8_t conv1_N_7;
    MR_Word conv0_S_9;

    mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint8_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), &conv1_N_7, ((MR_Word) (wrapper_arg_3)), &conv0_S_9);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv1_N_7));
    *wrapper_arg_4 = ((MR_Box) (conv0_S_9));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint16_t conv1_N_7;
    MR_Word conv0_S_9;

    mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint16_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), &conv1_N_7, ((MR_Word) (wrapper_arg_3)), &conv0_S_9);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv1_N_7));
    *wrapper_arg_4 = ((MR_Box) (conv0_S_9));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint32_t conv1_N_7;
    MR_Word conv0_S_9;

    mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint32_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), &conv1_N_7, ((MR_Word) (wrapper_arg_3)), &conv0_S_9);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv1_N_7));
    *wrapper_arg_4 = ((MR_Box) (conv0_S_9));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint64_t conv1_N_7;
    MR_Word conv0_S_9;

    mercury__random__ClassMethod_for_random__urandom____random__urandom_params__arity1__random__urandom_state__arity1______random__generate_uint64_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), &conv1_N_7, ((MR_Word) (wrapper_arg_3)), &conv0_S_9);
    *wrapper_arg_2 = MR_box_uint64(conv1_N_7);
    *wrapper_arg_4 = ((MR_Box) (conv0_S_9));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint8_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    uint8_t conv1_N_6;
    MR_Word conv0_R_8;

    mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint8_3_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 2)))), &conv1_N_6, ((MR_Word) (wrapper_arg_2)), &conv0_R_8);
    *wrapper_arg_1 = ((MR_Box) (MR_Word) (conv1_N_6));
    *wrapper_arg_3 = ((MR_Box) (conv0_R_8));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint16_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    uint16_t conv1_N_6;
    MR_Word conv0_R_8;

    mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint16_3_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 2)))), &conv1_N_6, ((MR_Word) (wrapper_arg_2)), &conv0_R_8);
    *wrapper_arg_1 = ((MR_Box) (MR_Word) (conv1_N_6));
    *wrapper_arg_3 = ((MR_Box) (conv0_R_8));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint32_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    uint32_t conv1_N_6;
    MR_Word conv0_R_8;

    mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint32_3_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 2)))), &conv1_N_6, ((MR_Word) (wrapper_arg_2)), &conv0_R_8);
    *wrapper_arg_1 = ((MR_Box) (MR_Word) (conv1_N_6));
    *wrapper_arg_3 = ((MR_Box) (conv0_R_8));
  }
}

static void MR_CALL 
mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint64_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    uint64_t conv1_N_6;
    MR_Word conv0_R_8;

    mercury__random__ClassMethod_for_random__random____random__shared_random__arity2______random__generate_uint64_3_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 2)))), &conv1_N_6, ((MR_Word) (wrapper_arg_2)), &conv0_R_8);
    *wrapper_arg_1 = MR_box_uint64(conv1_N_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_R_8));
  }
}

void mercury__random__init(void)
{
}

void mercury__random__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__random__random__type_ctor_info_io_random_1);
	MR_register_type_ctor_info(&mercury__random__random__type_ctor_info_io_urandom_2);
	MR_register_type_ctor_info(&mercury__random__random__type_ctor_info_shared_random_2);
	MR_register_type_ctor_info(&mercury__random__random__type_ctor_info_supply_0);
	MR_register_type_ctor_info(&mercury__random__random__type_ctor_info_urandom_params_1);
	MR_register_type_ctor_info(&mercury__random__random__type_ctor_info_urandom_state_1);
}

void mercury__random__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__random__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module random.
