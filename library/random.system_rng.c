/*
** Automatically generated from `random.system_rng.m'
** by the Mercury compiler,
** version rotd-2021-01-30
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


// :- module random.system_rng.
// :- implementation.

/*
INIT mercury__random__system_rng__init
ENDINIT
*/

#include "random.system_rng.mih"


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




static const MR_EnumFunctorDesc mercury__random__system_rng__random__system_rng__enum_functor_desc_system_rng_0_0;

static const MR_EnumFunctorDescPtr mercury__random__system_rng__random__system_rng__enum_value_ordered_system_rng_0[1];

static const MR_EnumFunctorDescPtr mercury__random__system_rng__random__system_rng__enum_name_ordered_system_rng_0[1];

static const MR_Integer mercury__random__system_rng__random__system_rng__functor_number_map_system_rng_0[1];

static MR_Integer MR_CALL 
mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__random__system_rng____Unify____system_rng_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__random__system_rng____Compare____system_rng_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box mercury__random__system_rng_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__random__system_rng_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__random__system_rng_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__random__system_rng_scalar_common_4[1][1];




static /* final */ const MR_Box mercury__random__system_rng_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__random__system_rng_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random__system_rng_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__random__system_rng_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random__system_rng_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random__system_rng_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__random__system_rng_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "No system RNG available"))
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



static const MR_EnumFunctorDesc mercury__random__system_rng__random__system_rng__enum_functor_desc_system_rng_0_0 = {
  (MR_String) "system_rng",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__random__system_rng__random__system_rng__enum_value_ordered_system_rng_0[1] = {
  &mercury__random__system_rng__random__system_rng__enum_functor_desc_system_rng_0_0
};

static const MR_EnumFunctorDescPtr mercury__random__system_rng__random__system_rng__enum_name_ordered_system_rng_0[1] = {
  &mercury__random__system_rng__random__system_rng__enum_functor_desc_system_rng_0_0
};

static const MR_Integer mercury__random__system_rng__random__system_rng__functor_number_map_system_rng_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__random__system_rng__random__system_rng__type_ctor_info_system_rng_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__random__system_rng____Unify____system_rng_0_0_10001)),
  ((MR_Box) (mercury__random__system_rng____Compare____system_rng_0_0_10001)),
  (MR_String) "random.system_rng",
  (MR_String) "system_rng",
  {     mercury__random__system_rng__random__system_rng__enum_name_ordered_system_rng_0 },
  {     mercury__random__system_rng__random__system_rng__enum_value_ordered_system_rng_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__random__system_rng__random__system_rng__functor_number_map_system_rng_0
};

const MR_BaseTypeclassInfo base_typeclass_info_random__urandom__arity2__random__system_rng__system_rng__arity0__io__state__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint8_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint16_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint32_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint64_4_4_p_0_10001))
};

static MR_Integer MR_CALL 
mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint64_4_4_p_0(
  uint64_t * U_6)
{
  mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_121_115_116_101_109_95_114_110_103_95_95_115_121_115_116_101_109_95_114_110_103_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_54_52_95_52_95_95_91_49_44_32_51_93_95_48_4_p_0(U_6);
}

void MR_CALL 
mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_121_115_116_101_109_95_114_110_103_95_95_115_121_115_116_101_109_95_114_110_103_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_54_52_95_52_95_95_91_49_44_32_51_93_95_48_4_p_0(
  uint64_t * U_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "No system RNG available");
    return;
  }
}

void MR_CALL 
mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint32_4_4_p_0(
  uint32_t * U_6)
{
  mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_121_115_116_101_109_95_114_110_103_95_95_115_121_115_116_101_109_95_114_110_103_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_51_50_95_52_95_95_91_49_44_32_51_93_95_48_4_p_0(U_6);
}

void MR_CALL 
mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_121_115_116_101_109_95_114_110_103_95_95_115_121_115_116_101_109_95_114_110_103_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_51_50_95_52_95_95_91_49_44_32_51_93_95_48_4_p_0(
  uint32_t * U_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "No system RNG available");
    return;
  }
}

void MR_CALL 
mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint16_4_4_p_0(
  uint16_t * U_6)
{
  mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_121_115_116_101_109_95_114_110_103_95_95_115_121_115_116_101_109_95_114_110_103_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_49_54_95_52_95_95_91_49_44_32_51_93_95_48_4_p_0(U_6);
}

void MR_CALL 
mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_121_115_116_101_109_95_114_110_103_95_95_115_121_115_116_101_109_95_114_110_103_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_49_54_95_52_95_95_91_49_44_32_51_93_95_48_4_p_0(
  uint16_t * U_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "No system RNG available");
    return;
  }
}

void MR_CALL 
mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint8_4_4_p_0(
  uint8_t * U_6)
{
  mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_121_115_116_101_109_95_114_110_103_95_95_115_121_115_116_101_109_95_114_110_103_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_56_95_52_95_95_91_49_44_32_51_93_95_48_4_p_0(U_6);
}

void MR_CALL 
mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_114_97_110_100_111_109_95_95_117_114_97_110_100_111_109_95_95_95_95_114_97_110_100_111_109_95_95_115_121_115_116_101_109_95_114_110_103_95_95_115_121_115_116_101_109_95_114_110_103_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_114_97_110_100_111_109_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_56_95_52_95_95_91_49_44_32_51_93_95_48_4_p_0(
  uint8_t * U_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "No system RNG available");
    return;
  }
}

void MR_CALL 
mercury__random__system_rng____Compare____system_rng_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_97_110_100_111_109_95_95_115_121_115_116_101_109_95_114_110_103_95_95_115_121_115_116_101_109_95_114_110_103_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_97_110_100_111_109_95_95_115_121_115_116_101_109_95_114_110_103_95_95_115_121_115_116_101_109_95_114_110_103_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__random__system_rng____Unify____system_rng_0_0(void)
{
  {
    MR_bool succeeded;

    succeeded = mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_97_110_100_111_109_95_95_115_121_115_116_101_109_95_114_110_103_95_95_115_121_115_116_101_109_95_114_110_103_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_97_110_100_111_109_95_95_115_121_115_116_101_109_95_114_110_103_95_95_115_121_115_116_101_109_95_114_110_103_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__random__system_rng__do_close_system_rng_5_p_0(
  MR_Word * HeadVar__2_7,
  MR_String * HeadVar__3_8)
{
  mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_99_108_111_115_101_95_115_121_115_116_101_109_95_114_110_103_95_95_91_49_44_32_52_93_95_48_5_p_0(HeadVar__2_7, HeadVar__3_8);
}

void MR_CALL 
mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_99_108_111_115_101_95_115_121_115_116_101_109_95_114_110_103_95_95_91_49_44_32_52_93_95_48_5_p_0(
  MR_Word * HeadVar__2_7,
  MR_String * HeadVar__3_8)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "No system RNG available");
    return;
  }
}

void MR_CALL 
mercury__random__system_rng__do_open_system_rng_5_p_0(
  MR_Word * IsOk_7,
  MR_String * ErrorMsg_8)
{
  {
    *IsOk_7 = (MR_Integer) 0;
    *ErrorMsg_8 = (MR_String) "No system RNG available";
  }
}

void MR_CALL 
mercury__random__system_rng__generate_uint64_4_p_0(
  uint64_t * HeadVar__2_6)
{
  mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_54_52_95_95_91_49_44_32_51_93_95_48_4_p_0(HeadVar__2_6);
}

void MR_CALL 
mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_54_52_95_95_91_49_44_32_51_93_95_48_4_p_0(
  uint64_t * HeadVar__2_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "No system RNG available");
    return;
  }
}

void MR_CALL 
mercury__random__system_rng__generate_uint32_4_p_0(
  uint32_t * HeadVar__2_6)
{
  mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_51_50_95_95_91_49_44_32_51_93_95_48_4_p_0(HeadVar__2_6);
}

void MR_CALL 
mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_51_50_95_95_91_49_44_32_51_93_95_48_4_p_0(
  uint32_t * HeadVar__2_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "No system RNG available");
    return;
  }
}

void MR_CALL 
mercury__random__system_rng__generate_uint16_4_p_0(
  uint16_t * HeadVar__2_6)
{
  mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_49_54_95_95_91_49_44_32_51_93_95_48_4_p_0(HeadVar__2_6);
}

void MR_CALL 
mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_49_54_95_95_91_49_44_32_51_93_95_48_4_p_0(
  uint16_t * HeadVar__2_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "No system RNG available");
    return;
  }
}

void MR_CALL 
mercury__random__system_rng__generate_uint8_4_p_0(
  uint8_t * HeadVar__2_6)
{
  mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_56_95_95_91_49_44_32_51_93_95_48_4_p_0(HeadVar__2_6);
}

void MR_CALL 
mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_56_95_95_91_49_44_32_51_93_95_48_4_p_0(
  uint8_t * HeadVar__2_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "No system RNG available");
    return;
  }
}

void MR_CALL 
mercury__random__system_rng__close_system_rng_3_p_0(void)
{
  mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_111_115_101_95_115_121_115_116_101_109_95_114_110_103_95_95_91_49_44_32_50_93_95_48_3_p_0();
}

void MR_CALL 
mercury__random__system_rng__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_111_115_101_95_115_121_115_116_101_109_95_114_110_103_95_95_91_49_44_32_50_93_95_48_3_p_0(void)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "No system RNG available");
    return;
  }
}

void MR_CALL 
mercury__random__system_rng__open_system_rng_3_p_0(
  MR_Word * Result_4)
{
  *Result_4 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__random__system_rng_scalar_common_4[0]));
}

MR_bool MR_CALL 
mercury__random__system_rng__have_system_rng_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__random__system_rng__have_system_rng_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__random__system_rng____Unify____system_rng_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__random__system_rng____Unify____system_rng_0_0();
    return succeeded;
  }
}

static void MR_CALL 
mercury__random__system_rng____Compare____system_rng_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__random__system_rng____Compare____system_rng_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint8_t conv0_U_6;

    mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint8_4_4_p_0(&conv0_U_6);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_U_6));
  }
}

static void MR_CALL 
mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint16_t conv0_U_6;

    mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint16_4_4_p_0(&conv0_U_6);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_U_6));
  }
}

static void MR_CALL 
mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint32_t conv0_U_6;

    mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint32_4_4_p_0(&conv0_U_6);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_U_6));
  }
}

static void MR_CALL 
mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    uint64_t conv0_U_6;

    mercury__random__system_rng__ClassMethod_for_random__urandom____random__system_rng__system_rng__arity0__io__state__arity0______random__generate_uint64_4_4_p_0(&conv0_U_6);
    *wrapper_arg_2 = MR_box_uint64(conv0_U_6);
  }
}

void mercury__random__system_rng__init(void)
{
}

void mercury__random__system_rng__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__random__system_rng__random__system_rng__type_ctor_info_system_rng_0);
}

void mercury__random__system_rng__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__random__system_rng__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module random.system_rng.
