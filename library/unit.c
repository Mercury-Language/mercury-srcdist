/*
** Automatically generated from `unit.m'
** by the Mercury compiler,
** version rotd-2020-08-23
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


// :- module unit.
// :- implementation.

/*
INIT mercury__unit__init
ENDINIT
*/

#include "unit.mih"


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
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_EnumFunctorDesc mercury__unit__unit__enum_functor_desc_unit_1_0;

static const MR_EnumFunctorDescPtr mercury__unit__unit__enum_value_ordered_unit_1[1];

static const MR_EnumFunctorDescPtr mercury__unit__unit__enum_name_ordered_unit_1[1];

static const MR_Integer mercury__unit__unit__functor_number_map_unit_1[1];

static const MR_EnumFunctorDesc mercury__unit__unit__enum_functor_desc_unit_0_0;

static const MR_EnumFunctorDescPtr mercury__unit__unit__enum_value_ordered_unit_0[1];

static const MR_EnumFunctorDescPtr mercury__unit__unit__enum_name_ordered_unit_0[1];

static const MR_Integer mercury__unit__unit__functor_number_map_unit_0[1];

static MR_Integer MR_CALL 
mercury__unit__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__unit____Unify____unit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__unit____Compare____unit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__unit____Unify____unit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__unit____Compare____unit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__unit_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__unit_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__unit_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__unit_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__unit_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__unit_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__unit_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__unit_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__unit_scalar_common_2[0])),
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



static const MR_EnumFunctorDesc mercury__unit__unit__enum_functor_desc_unit_1_0 = {
  (MR_String) "unit1",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__unit__unit__enum_value_ordered_unit_1[1] = {
  &mercury__unit__unit__enum_functor_desc_unit_1_0
};

static const MR_EnumFunctorDescPtr mercury__unit__unit__enum_name_ordered_unit_1[1] = {
  &mercury__unit__unit__enum_functor_desc_unit_1_0
};

static const MR_Integer mercury__unit__unit__functor_number_map_unit_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__unit__unit__type_ctor_info_unit_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__unit____Unify____unit_1_0_10001)),
  ((MR_Box) (mercury__unit____Compare____unit_1_0_10001)),
  (MR_String) "unit",
  (MR_String) "unit",
  {     mercury__unit__unit__enum_name_ordered_unit_1 },
  {     mercury__unit__unit__enum_value_ordered_unit_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__unit__unit__functor_number_map_unit_1
};

static const MR_EnumFunctorDesc mercury__unit__unit__enum_functor_desc_unit_0_0 = {
  (MR_String) "unit",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__unit__unit__enum_value_ordered_unit_0[1] = {
  &mercury__unit__unit__enum_functor_desc_unit_0_0
};

static const MR_EnumFunctorDescPtr mercury__unit__unit__enum_name_ordered_unit_0[1] = {
  &mercury__unit__unit__enum_functor_desc_unit_0_0
};

static const MR_Integer mercury__unit__unit__functor_number_map_unit_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__unit__unit__type_ctor_info_unit_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__unit____Unify____unit_0_0_10001)),
  ((MR_Box) (mercury__unit____Compare____unit_0_0_10001)),
  (MR_String) "unit",
  (MR_String) "unit",
  {     mercury__unit__unit__enum_name_ordered_unit_0 },
  {     mercury__unit__unit__enum_value_ordered_unit_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__unit__unit__functor_number_map_unit_0
};

static MR_Integer MR_CALL 
mercury__unit__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__unit____Compare____unit_1_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1)
{
  mercury__unit__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_117_110_105_116_95_95_117_110_105_116_95_49_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__unit__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_117_110_105_116_95_95_117_110_105_116_95_49_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__unit____Unify____unit_1_0(
  MR_Word TypeInfo_for_T_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__unit__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_117_110_105_116_95_95_117_110_105_116_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__unit__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_117_110_105_116_95_95_117_110_105_116_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__unit____Compare____unit_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__unit__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_117_110_105_116_95_95_117_110_105_116_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__unit__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_117_110_105_116_95_95_117_110_105_116_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__unit____Unify____unit_0_0(void)
{
  {
    MR_bool succeeded;

    succeeded = mercury__unit__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_117_110_105_116_95_95_117_110_105_116_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__unit__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_117_110_105_116_95_95_117_110_105_116_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  return MR_TRUE;
}

static MR_bool MR_CALL 
mercury__unit____Unify____unit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__unit____Unify____unit_1_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__unit____Compare____unit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__unit____Compare____unit_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__unit____Unify____unit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__unit____Unify____unit_0_0();
    return succeeded;
  }
}

static void MR_CALL 
mercury__unit____Compare____unit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__unit____Compare____unit_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__unit__init(void)
{
}

void mercury__unit__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__unit__unit__type_ctor_info_unit_1);
	MR_register_type_ctor_info(&mercury__unit__unit__type_ctor_info_unit_0);
}

void mercury__unit__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__unit__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module unit.
